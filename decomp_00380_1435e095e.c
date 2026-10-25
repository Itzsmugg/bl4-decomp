// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435e095e FUN_1435e095e body=5603 status=ok
// SIG undefined FUN_1435e095e(void)

longlong FUN_1435e095e(longlong param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  char cVar22;
  double *pdVar23;
  double *pdVar24;
  undefined8 *puVar25;
  longlong lVar26;
  double *pdVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  double dVar49;
  double dVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined8 local_4a0;
  byte local_48d;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  double local_478;
  double dStack_470;
  double local_468;
  undefined8 uStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  undefined8 local_378 [16];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  double local_278 [5];
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
  double local_1f8 [4];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  lVar26 = *(longlong *)(param_1 + 0x18);
  if (((*(byte *)(lVar26 + 0x2c) & 1) == 0) || ((*(byte *)(param_1 + 0x160) & 1) == 0)) {
    lVar19 = 0;
    goto LAB_1435e0a01;
  }
  lVar19 = *(longlong *)(param_1 + 0x10);
  lVar20 = **(longlong **)(param_1 + 0x288);
  local_48d = *(byte *)(lVar20 + 0x71);
  if ((local_48d & 1) == 0) {
    dVar37 = *(double *)(lVar19 + 0x240);
    dVar44 = *(double *)(lVar19 + 0x248);
    dVar32 = *(double *)(lVar19 + 0x250);
    dVar35 = *(double *)(lVar19 + 600);
    local_118 = *(double *)(lVar19 + 0x260);
    dStack_110 = *(double *)(lVar19 + 0x268);
    local_108 = *(double *)(lVar19 + 0x270);
    uVar53 = *(undefined4 *)(lVar19 + 0x280);
    uVar54 = *(undefined4 *)(lVar19 + 0x284);
    uVar57 = *(undefined4 *)(lVar19 + 0x288);
    uVar58 = *(undefined4 *)(lVar19 + 0x28c);
    dVar36 = *(double *)(lVar19 + 0x290);
    if ((*(byte *)(lVar20 + 0x73) & 4) == 0) goto LAB_1435e0b59;
    local_118 = local_118 + (double)*(float *)(lVar19 + 0x8c8) * -65536.0;
    dStack_110 = dStack_110 + (double)*(float *)(lVar19 + 0x8cc) * -65536.0;
    local_108 = local_108 + (double)*(float *)(lVar19 + 0x8d0) * -65536.0;
    local_48c = (undefined4)CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
  }
  else {
    dVar37 = *(double *)(lVar19 + 0x240);
    dVar44 = *(double *)(lVar19 + 0x248);
    dVar32 = *(double *)(lVar19 + 0x250);
    dVar35 = *(double *)(lVar19 + 600);
    local_118 = *(double *)(lVar19 + 0x260);
    dStack_110 = *(double *)(lVar19 + 0x268);
    local_108 = *(double *)(lVar19 + 0x270);
    uVar53 = *(undefined4 *)(lVar19 + 0x280);
    uVar54 = *(undefined4 *)(lVar19 + 0x284);
    uVar57 = *(undefined4 *)(lVar19 + 0x288);
    uVar58 = *(undefined4 *)(lVar19 + 0x28c);
    dVar36 = *(double *)(lVar19 + 0x290);
LAB_1435e0b59:
    local_48c = 0;
  }
  lVar20 = *(longlong *)(lVar19 + 0x668);
  dVar46 = dVar44 + dVar44;
  dVar49 = dVar32 + dVar32;
  dVar40 = dVar37 * (dVar37 + dVar37);
  dVar52 = (dVar37 + dVar37) * dVar35;
  dVar39 = (dVar49 * dVar44 - dVar52) * dVar36;
  local_178 = (1.0 - (dVar32 * dVar49 + dVar44 * dVar46)) * (double)CONCAT44(uVar54,uVar53);
  dStack_170 = (dVar46 * dVar37 + dVar49 * dVar35) * (double)CONCAT44(uVar54,uVar53);
  local_168 = (dVar37 * dVar49 - dVar46 * dVar35) * (double)CONCAT44(uVar54,uVar53);
  uStack_160 = 0;
  local_158 = (dVar46 * dVar37 - dVar49 * dVar35) * (double)CONCAT44(uVar58,uVar57);
  dStack_150 = (1.0 - (dVar32 * dVar49 + dVar40)) * (double)CONCAT44(uVar58,uVar57);
  local_148 = (dVar49 * dVar44 + dVar52) * (double)CONCAT44(uVar58,uVar57);
  uStack_140 = 0;
  local_138._8_4_ = SUB84(dVar39,0);
  local_138._0_8_ = (dVar37 * dVar49 + dVar46 * dVar35) * dVar36;
  local_138._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  local_128 = (1.0 - (dVar40 + dVar44 * dVar46)) * dVar36;
  uStack_120 = 0;
  uStack_100 = 0x3ff0000000000000;
  if ((local_48d & 1) == 0) {
    pdVar23 = &local_178;
    if ((*(byte *)(*(longlong **)(param_1 + 0x288) + 0x1e) & 1) != 0) {
      pdVar23 = (double *)&DAT_14c846400;
    }
  }
  else {
    pdVar23 = (double *)&DAT_14c846400;
  }
  pdVar27 = local_1f8;
  pdVar24 = pdVar27;
  for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *pdVar24 = *pdVar23;
    pdVar23 = pdVar23 + 1;
    pdVar24 = pdVar24 + 1;
  }
  lVar19 = FUN_147bf8190(0x200);
  FUN_147c26690(lVar19,**(undefined8 **)(param_1 + 0x288));
  *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x340);
  plVar12 = (longlong *)FUN_147c083c6(param_1);
  uVar13 = (**(code **)(*plVar12 + 0x2f0))(plVar12);
  *(undefined8 *)(lVar19 + 0x18) = uVar13;
  plVar12 = (longlong *)FUN_147c083c6(param_1);
  uVar8 = (**(code **)(*plVar12 + 0x408))(plVar12);
  *(bool *)(lVar19 + 0x20) = 1 < uVar8;
  *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(param_1 + 0x290);
  if ((*(byte *)(lVar20 + 0xec) & 2) == 0) {
    lVar20 = *(longlong *)(param_1 + 0x10);
    dVar35 = *(double *)(lVar20 + 0x170) + *(double *)(lVar20 + 0x188);
    dVar44 = *(double *)(lVar20 + 0x168) + *(double *)(lVar20 + 0x180);
    dVar37 = *(double *)(lVar20 + 0x160) + *(double *)(lVar20 + 0x178);
    dVar32 = *(double *)(lVar20 + 0x170) - *(double *)(lVar20 + 0x188);
    dVar40 = *(double *)(lVar20 + 0x168) - *(double *)(lVar20 + 0x180);
    dVar36 = *(double *)(lVar20 + 0x160) - *(double *)(lVar20 + 0x178);
    bVar28 = true;
  }
  else {
    bVar28 = *(char *)(lVar20 + 0xd8) == '\0';
    if (bVar28) {
      dVar37 = 0.0;
      dVar44 = 0.0;
      dVar32 = 0.0;
      dVar35 = 0.0;
      dVar36 = 0.0;
      dVar40 = 0.0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x10);
      dVar40 = *(double *)(lVar3 + 0x240);
      dVar39 = *(double *)(lVar3 + 0x248);
      dVar35 = *(double *)(lVar3 + 0x250);
      dVar49 = *(double *)(lVar3 + 0x280);
      dVar46 = *(double *)(lVar3 + 0x288);
      dVar52 = *(double *)(lVar3 + 0x290);
      dVar36 = dVar35 + dVar35;
      dVar41 = dVar40 + dVar40;
      dVar42 = dVar39 + dVar39;
      dVar45 = *(double *)(lVar3 + 0x240) * dVar36;
      dVar44 = *(double *)(lVar3 + 600);
      dVar37 = *(double *)(lVar3 + 600);
      dVar43 = dVar42 * dVar44;
      auVar38._0_8_ = (dVar43 + dVar45) * dVar52;
      auVar38._8_8_ =
           (dVar41 * dVar37 + *(double *)(lVar3 + 0x240) * dVar41) * *(double *)(lVar3 + 0x298);
      dVar44 = dVar36 * dVar44;
      dVar37 = dVar41 * dVar37;
      dVar32 = (1.0 - (dVar36 * dVar35 + dVar42 * dVar39)) * dVar49;
      dVar35 = (1.0 - (dVar36 * dVar35 + dVar41 * dVar40)) * dVar46;
      dVar33 = (dVar44 + dVar42 * dVar40) * dVar49;
      dVar34 = (dVar37 + dVar36 * dVar39) * dVar46;
      dVar49 = (dVar45 - dVar43) * dVar49;
      auVar50._0_8_ = dVar46 * (dVar42 * dVar40 - dVar44);
      auVar50._8_8_ = dVar52 * (dVar36 * dVar39 - dVar37);
      auVar38 = blendpd(auVar38,auVar50,2);
      auVar51._8_4_ = SUB84(dVar35,0);
      auVar51._0_8_ = dVar32;
      auVar51._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar51 = blendpd(auVar50,auVar51,2);
      dVar52 = (1.0 - (dVar41 * dVar40 + dVar42 * dVar39)) * dVar52;
      dVar43 = (*(double *)(lVar20 + 0xa8) + *(double *)(lVar20 + 0xc0)) * 0.5;
      dVar47 = (*(double *)(lVar20 + 0xb0) + *(double *)(lVar20 + 200)) * 0.5;
      dVar45 = (*(double *)(lVar20 + 0xb8) + *(double *)(lVar20 + 0xd0)) * 0.5;
      dVar41 = (*(double *)(lVar20 + 0xc0) - *(double *)(lVar20 + 0xa8)) * 0.5;
      dVar42 = (*(double *)(lVar20 + 200) - *(double *)(lVar20 + 0xb0)) * 0.5;
      dVar39 = dVar45 * auVar38._0_8_ + dVar47 * auVar51._0_8_ + dVar43 * dVar32 +
               *(double *)(lVar3 + 0x260);
      dVar46 = dVar45 * auVar38._8_8_ + dVar47 * auVar51._8_8_ + dVar43 * dVar33 +
               *(double *)(lVar3 + 0x268);
      dVar35 = (*(double *)(lVar20 + 0xd0) - *(double *)(lVar20 + 0xb8)) * 0.5;
      dVar37 = ABS(dVar35 * auVar38._0_8_) + ABS(auVar51._0_8_ * dVar42) + ABS(dVar41 * dVar32);
      dVar44 = ABS(dVar35 * auVar38._8_8_) + ABS(auVar51._8_8_ * dVar42) + ABS(dVar41 * dVar33);
      dVar36 = dVar39 - dVar37;
      dVar40 = dVar46 - dVar44;
      dVar37 = dVar37 + dVar39;
      dVar44 = dVar44 + dVar46;
      dVar39 = ABS(dVar42 * dVar34) + ABS(dVar41 * dVar49) + ABS(dVar35 * dVar52);
      dVar35 = dVar45 * dVar52 + dVar47 * dVar34 + dVar43 * dVar49 + *(double *)(lVar3 + 0x270);
      dVar32 = dVar35 - dVar39;
      dVar35 = dVar35 + dVar39;
    }
    bVar28 = !bVar28;
    local_488 = uVar53;
    uStack_484 = uVar54;
    uStack_480 = uVar57;
    uStack_47c = uVar58;
  }
  *(double *)(lVar19 + 0x40) = dVar36;
  *(double *)(lVar19 + 0x48) = dVar40;
  *(double *)(lVar19 + 0x50) = dVar32;
  auVar4._8_4_ = SUB84(dVar44,0);
  auVar4._0_8_ = dVar37;
  auVar4._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  *(undefined1 (*) [16])(lVar19 + 0x58) = auVar4;
  *(double *)(lVar19 + 0x68) = dVar35;
  *(bool *)(lVar19 + 0x70) = bVar28;
  *(uint *)(lVar19 + 0x1e0) = (uint)*(byte *)(**(longlong **)(param_1 + 0x288) + 0x72);
  *(uint *)(lVar19 + 0xc) = *(uint *)(lVar19 + 0xc) & 0xfffffffe | param_2 & 0xff;
  *(byte *)(lVar19 + 0x1e4) = *(byte *)(**(longlong **)(param_1 + 0x288) + 0x71) & 1;
  if (((local_48d & 1) == 0) && ((*(byte *)(*(longlong *)(param_1 + 0x288) + 0xf0) & 1) == 0)) {
    lVar20 = *(longlong *)(param_1 + 0x10);
    dVar44 = *(double *)(lVar20 + 0x240);
    dVar32 = *(double *)(lVar20 + 0x248);
    dVar37 = *(double *)(lVar20 + 0x250);
    local_278[2] = *(double *)(lVar20 + 0x280);
    local_278[4] = *(double *)(lVar20 + 0x288);
    dStack_230 = *(double *)(lVar20 + 0x290);
    dVar39 = dVar32 + dVar32;
    dVar35 = dVar37 + dVar37;
    dVar36 = dVar44 * (dVar44 + dVar44);
    local_278[0] = (1.0 - (dVar37 * dVar35 + dVar32 * dVar39)) * local_278[2];
    dStack_250 = (1.0 - (dVar37 * dVar35 + dVar36)) * local_278[4];
    local_228 = (1.0 - (dVar36 + dVar32 * dVar39)) * dStack_230;
    dVar46 = *(double *)(lVar20 + 0x240) * dVar35;
    dVar37 = *(double *)(lVar20 + 600);
    dVar36 = dVar35 * dVar37;
    dVar40 = (dVar44 + dVar44) * *(double *)(lVar20 + 600);
    dVar37 = dVar39 * dVar37;
    local_278[1] = (dVar39 * dVar44 + dVar36) * local_278[2];
    local_248 = (dVar35 * dVar32 + dVar40) * local_278[4];
    local_238 = (dVar37 + dVar46) * dStack_230;
    local_278[2] = (dVar46 - dVar37) * local_278[2];
    local_278[4] = (dVar39 * dVar44 - dVar36) * local_278[4];
    dStack_230 = (dVar35 * dVar32 - dVar40) * dStack_230;
    local_278[3] = 0.0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = *(undefined8 *)(lVar20 + 0x260);
    uStack_210 = *(undefined8 *)(lVar20 + 0x268);
    local_208 = *(undefined8 *)(lVar20 + 0x270);
    uStack_200 = 0x3ff0000000000000;
  }
  else {
    pdVar23 = (double *)&DAT_14c846400;
    pdVar24 = local_278;
    for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
      *pdVar24 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar24 = pdVar24 + 1;
    }
  }
  cVar22 = (char)local_48c;
  dVar37 = *(double *)(param_1 + 0x318) * 0.01745329238474369;
  dVar44 = *(double *)(param_1 + 800) * 0.01745329238474369;
  dVar32 = *(double *)(param_1 + 0x328) * 0.01745329238474369;
  dVar40 = sin(dVar37);
  dVar35 = sin(dVar44);
  dVar36 = sin(dVar32);
  sin(0.0);
  dVar37 = cos(dVar37);
  dVar44 = cos(dVar44);
  dVar32 = cos(dVar32);
  cos(0.0);
  local_2f8 = dVar37 * dVar44;
  local_2f0 = dVar35 * dVar37;
  local_2e0 = 0;
  local_2d8 = dVar40 * dVar36 * dVar44 - dVar35 * dVar32;
  local_2d0 = dVar40 * dVar36 * dVar35 + dVar44 * dVar32;
  local_2c8 = -dVar36 * dVar37;
  local_2c0 = 0;
  local_2b8 = -(dVar40 * dVar32 * dVar44 + dVar35 * dVar36);
  local_2b0 = dVar44 * dVar36 - dVar35 * dVar40 * dVar32;
  local_2a8 = dVar37 * dVar32;
  local_2a0 = 0;
  local_298 = DAT_14c8464e0;
  local_290 = DAT_14c8464e8;
  uStack_288 = DAT_14c8464f0;
  local_280 = 0x3ff0000000000000;
  lVar20 = *(longlong *)(param_1 + 0x288);
  dVar32 = *(double *)(lVar20 + 0x40);
  dVar35 = *(double *)(lVar20 + 0x48);
  dVar37 = *(double *)(lVar20 + 0x50);
  local_468 = *(double *)(lVar20 + 0x80);
  dVar36 = *(double *)(lVar20 + 0x88);
  dStack_430 = *(double *)(lVar20 + 0x90);
  dVar52 = dVar35 + dVar35;
  dVar39 = dVar37 + dVar37;
  dVar46 = dVar32 * (dVar32 + dVar32);
  local_478 = (1.0 - (dVar37 * dVar39 + dVar35 * dVar52)) * local_468;
  dVar44 = (1.0 - (dVar37 * dVar39 + dVar46)) * dVar36;
  local_428 = (1.0 - (dVar46 + dVar35 * dVar52)) * dStack_430;
  dVar45 = *(double *)(lVar20 + 0x40) * dVar39;
  dVar37 = *(double *)(lVar20 + 0x58);
  dVar46 = dVar39 * dVar37;
  dVar49 = (dVar32 + dVar32) * *(double *)(lVar20 + 0x58);
  dVar37 = dVar52 * dVar37;
  dStack_470 = (dVar52 * dVar32 + dVar46) * local_468;
  local_438 = (dVar37 + dVar45) * dStack_430;
  local_468 = (dVar45 - dVar37) * local_468;
  dStack_430 = (dVar39 * dVar35 - dVar49) * dStack_430;
  local_448._8_8_ = 0;
  local_448._0_8_ = (dVar39 * dVar35 + dVar49) * dVar36;
  uStack_460 = 0;
  local_458._8_4_ = SUB84(dVar44,0);
  local_458._0_8_ = (dVar52 * dVar32 - dVar46) * dVar36;
  local_458._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  uStack_420 = 0;
  local_418 = *(undefined8 *)(lVar20 + 0x60);
  uStack_410 = *(undefined8 *)(lVar20 + 0x68);
  local_408 = *(undefined8 *)(lVar20 + 0x70);
  uStack_400 = 0x3ff0000000000000;
  local_2e8 = dVar40;
  FUN_1447fea8d(&local_3f8);
  FUN_1447fea8d(local_378,&local_3f8,local_278);
  puVar14 = local_378;
  puVar25 = (undefined8 *)(lVar19 + 0xa0);
  for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar25 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar25 = puVar25 + 1;
  }
  *(undefined4 *)(lVar19 + 0x120) = *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0xe8);
  *(undefined4 *)(lVar19 + 0x124) = *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0xec);
  uVar15 = *(uint *)(*(longlong *)(param_1 + 0x288) + 0xf0) >> 1 & 1;
  uVar8 = *(uint *)(lVar19 + 0x1e8);
  *(uint *)(lVar19 + 0x1e8) = uVar8 & 0xfffffffe | uVar15;
  uVar16 = *(uint *)(*(longlong *)(param_1 + 0x288) + 0xf0) >> 1 & 2;
  *(uint *)(lVar19 + 0x1e8) = uVar8 & 0xfffffffc | uVar15 | uVar16;
  uVar17 = *(uint *)(*(longlong *)(param_1 + 0x288) + 0xf0) >> 1 & 4;
  *(uint *)(lVar19 + 0x1e8) = uVar8 & 0xfffffff8 | uVar15 | uVar16 | uVar17;
  *(uint *)(lVar19 + 0x1e8) =
       uVar8 & 0xfffffff0 | uVar15 | uVar16 | uVar17 |
       *(uint *)(*(longlong *)(param_1 + 0x288) + 0xf0) >> 1 & 8;
  if (cVar22 == '\0') {
    puVar14 = &DAT_14c846330;
  }
  else {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x8c8);
  }
  *(undefined4 *)(lVar19 + 0x188) = *(undefined4 *)(puVar14 + 1);
  *(undefined8 *)(lVar19 + 0x180) = *puVar14;
  uVar8 = (uint)*(byte *)(*(longlong *)(param_1 + 0x288) + 0x204);
  if ((uVar8 < 7) && ((0x43U >> (uVar8 & 0x1f) & 1) != 0)) {
    fVar29 = (float)(double)CONCAT44(uVar54,uVar53);
    *(float *)(lVar19 + 400) = fVar29;
  }
  else {
    *(float *)(lVar19 + 400) = (float)(double)CONCAT44(uVar54,uVar53);
    fVar29 = (float)(double)CONCAT44(uVar58,uVar57);
  }
  *(float *)(lVar19 + 0x194) = fVar29;
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x288) + 0x205);
  *(undefined8 *)(lVar19 + 0x1b0) = 0;
  *(undefined8 *)(lVar19 + 0x1b8) = 0;
  *(undefined8 *)(lVar19 + 0x1a0) = 0;
  *(undefined8 *)(lVar19 + 0x1a8) = 0;
  if (cVar2 != '\0') {
    if ((local_48d & 1) == 0) {
      pdVar27 = (double *)&DAT_14c846400;
    }
    FUN_147c2fc78(cVar2,pdVar27,&local_3f8,&local_478);
    *(float *)(lVar19 + 0x1a0) = (float)local_478;
    *(float *)(lVar19 + 0x1a4) = (float)dStack_470;
    *(float *)(lVar19 + 0x1a8) = (float)local_468;
    *(undefined4 *)(lVar19 + 0x1ac) = 0x3f800000;
    *(float *)(lVar19 + 0x1b0) = (float)local_3f8;
    *(float *)(lVar19 + 0x1b4) = (float)dStack_3f0;
    *(float *)(lVar19 + 0x1b8) = (float)local_3e8;
    *(undefined4 *)(lVar19 + 0x1bc) = 0x3f800000;
  }
  lVar20 = *(longlong *)(param_1 + 0x288);
  if (((*(int *)(lVar20 + 0x2c0) == 0) || (*(char *)(lVar20 + 0x2c9) == '\0')) &&
     (*(longlong *)(lVar20 + 0x308) == 0)) {
    uVar53 = 0;
    uVar54 = 0x3ff00000;
    dVar37 = 1.0;
    dVar44 = 1.0;
  }
  else {
    local_4a0 = 0;
    local_4a8 = 0;
    FUN_147a776dc(lVar20 + 0x2b0,&local_3f8,0,*(undefined8 *)(param_1 + 0x10));
    uVar53 = SUB84(local_3e8,0);
    uVar54 = (undefined4)((ulonglong)local_3e8 >> 0x20);
    lVar20 = *(longlong *)(param_1 + 0x288);
    dVar37 = dStack_3f0;
    dVar44 = local_3f8;
  }
  if (((*(int *)(lVar20 + 800) == 0) || (*(char *)(lVar20 + 0x329) == '\0')) &&
     (*(longlong *)(lVar20 + 0x338) == 0)) {
    dVar32 = 1.0;
  }
  else {
    fVar29 = (float)FUN_147a77524(lVar20 + 0x310,0,*(undefined8 *)(param_1 + 0x10),0);
    dVar32 = (double)fVar29;
    lVar20 = *(longlong *)(param_1 + 0x288);
  }
  if (((*(int *)(lVar20 + 0x230) == 0) || (*(char *)(lVar20 + 0x239) == '\0')) &&
     (*(longlong *)(lVar20 + 0x278) == 0)) {
    uVar55 = 0;
    uVar56 = 0x3ff00000;
    uVar57 = uVar55;
    uVar58 = uVar56;
    uVar59 = uVar55;
    uVar60 = uVar56;
  }
  else {
    local_4a0 = 0;
    local_4a8 = 0;
    FUN_147a776dc(lVar20 + 0x220,&local_3f8,0,*(undefined8 *)(param_1 + 0x10));
    uVar55 = SUB84(local_3f8,0);
    uVar56 = (undefined4)((ulonglong)local_3f8 >> 0x20);
    uVar57 = SUB84(dStack_3f0,0);
    uVar58 = (undefined4)((ulonglong)dStack_3f0 >> 0x20);
    uVar59 = SUB84(local_3e8,0);
    uVar60 = (undefined4)((ulonglong)local_3e8 >> 0x20);
    lVar20 = *(longlong *)(param_1 + 0x288);
  }
  if (((*(int *)(lVar20 + 0x290) == 0) || (*(char *)(lVar20 + 0x299) == '\0')) &&
     (*(longlong *)(lVar20 + 0x2a8) == 0)) {
    dVar35 = 1.0;
  }
  else {
    fVar29 = (float)FUN_147a77524(lVar20 + 0x280,0,*(undefined8 *)(param_1 + 0x10),0);
    dVar35 = (double)fVar29;
  }
  *(float *)(lVar19 + 0x1c0) = (float)(dVar44 * (double)CONCAT44(uVar56,uVar55));
  *(float *)(lVar19 + 0x1c4) = (float)(dVar37 * (double)CONCAT44(uVar58,uVar57));
  *(float *)(lVar19 + 0x1c8) =
       (float)((double)CONCAT44(uVar54,uVar53) * (double)CONCAT44(uVar60,uVar59));
  *(float *)(lVar19 + 0x1cc) = (float)(dVar32 * dVar35);
  *(byte *)(lVar19 + 0x1ec) = *(byte *)(*(longlong *)(lVar26 + 0x30) + 0xc4) & 1;
  *(undefined4 *)(lVar19 + 0x1f0) = *(undefined4 *)(*(longlong *)(lVar26 + 0x30) + 0xf0);
  lVar26 = *(longlong *)(lVar26 + 0x30);
  dVar37 = *(double *)(lVar26 + 0xe8);
  dVar44 = *(double *)(lVar26 + 0xe0);
  *(float *)(lVar19 + 500) = (float)*(double *)(lVar26 + 0xd8);
  *(float *)(lVar19 + 0x1f8) = (float)dVar44;
  *(float *)(lVar19 + 0x1fc) = (float)dVar37;
  *(undefined4 *)(lVar19 + 0x198) = *(undefined4 *)(param_1 + 0x350);
  pfVar7 = DAT_14caf3da0;
  if (((DAT_14caf3c98 == 0) && (DAT_14caf3c9c == 0)) &&
     (((DAT_14c7616a4 != 0 && ((DAT_14ca84e1d == '\x01' && ((DAT_14c873768 & 1) != 0)))) &&
      (DAT_14ca84e19 == '\x01')))) {
    lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar9 = *(int *)(lVar26 + 0xc60);
    if (iVar9 == 0x40000002) {
      fVar29 = *DAT_14caf3da0;
      fVar48 = *DAT_14caf3db8;
LAB_1435e1a8a:
      uVar21 = 0;
      lVar26 = DAT_14caf3dd0;
    }
    else {
      piVar1 = (int *)(lVar26 + 0xc60);
      if (DAT_14c86a9f8 == 0) {
        fVar29 = *DAT_14caf3da0;
      }
      else if (iVar9 == 2) {
        fVar29 = *DAT_14caf3da0;
        iVar9 = 2;
      }
      else {
        uVar21 = 1;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          uVar21 = (ulonglong)(DVar10 != DVar11);
          iVar9 = *piVar1;
        }
        fVar29 = pfVar7[uVar21];
        if (iVar9 == 0x40000002) {
          fVar48 = *DAT_14caf3db8;
          goto LAB_1435e1a8a;
        }
      }
      pfVar7 = DAT_14caf3db8;
      if (((DAT_14c86a9f8 & 1) == 0) || (iVar9 == 2)) {
        fVar48 = *DAT_14caf3db8;
      }
      else {
        uVar21 = 1;
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          uVar21 = (ulonglong)(DVar10 != DVar11);
          iVar9 = *piVar1;
        }
        fVar48 = pfVar7[uVar21];
        if (iVar9 == 0x40000002) goto LAB_1435e1a8a;
      }
      lVar26 = DAT_14caf3dd0;
      if ((DAT_14c86a9f8 != 1) || (iVar9 == 2)) goto LAB_1435e1a8a;
      if (iVar9 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar21 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar21 = 1;
      }
    }
    iVar9 = *(int *)(lVar26 + uVar21 * 4);
    *(float *)(lVar19 + 0x158) = fVar29;
    *(undefined4 *)(lVar19 + 0x15c) = 0;
    *(float *)(lVar19 + 0x160) = *(float *)(param_1 + 0x334) + *(float *)(param_1 + 0x338);
    *(undefined4 *)(lVar19 + 0x164) = 1;
    *(undefined4 *)(param_1 + 0x338) = 0;
    if (0.0 < fVar29) {
      if ((*(byte *)(lVar19 + 0x1e8) & 8) == 0) {
        uVar53 = *(undefined4 *)(lVar19 + 0x158);
        *(undefined4 *)(lVar19 + 0x158) = *(undefined4 *)(lVar19 + 0x160);
        *(undefined4 *)(lVar19 + 0x160) = uVar53;
        uVar53 = *(undefined4 *)(lVar19 + 0x15c);
        *(undefined4 *)(lVar19 + 0x15c) = *(undefined4 *)(lVar19 + 0x164);
        *(undefined4 *)(lVar19 + 0x164) = uVar53;
      }
      else {
        fVar30 = *(float *)(lVar19 + 0x160) / fVar29;
        iVar18 = (int)ROUND(fVar30 + fVar30 + -0.5) >> 1;
        *(int *)(lVar19 + 0x15c) = iVar18;
        fVar31 = (float)iVar18 * fVar29;
        fVar30 = *(float *)(lVar19 + 0x160) - fVar31;
        *(float *)(lVar19 + 0x160) = fVar30;
        if ((iVar18 < 1) || (fVar48 <= fVar30 / fVar29)) {
          if (fVar48 <= 1.0 - fVar30 / fVar29) {
            if (0 < iVar18) {
              fVar30 = fVar30 - fVar48 * fVar29;
              *(float *)(lVar19 + 0x160) = fVar30;
              fVar31 = fVar31 + fVar48 * fVar29;
              goto LAB_1435e1be0;
            }
          }
          else {
            *(int *)(lVar19 + 0x15c) = iVar18 + 1;
            *(undefined8 *)(lVar19 + 0x160) = 0;
            if (-1 < iVar18) {
              fVar31 = fVar31 + fVar30;
              iVar18 = iVar18 + 1;
              fVar30 = 0.0;
              goto LAB_1435e1be0;
            }
            fVar30 = 0.0;
          }
        }
        else {
          fVar31 = fVar31 + fVar30;
          *(undefined8 *)(lVar19 + 0x160) = 0;
          fVar30 = 0.0;
LAB_1435e1be0:
          if (iVar18 < iVar9) {
            iVar9 = iVar18;
          }
          *(int *)(lVar19 + 0x15c) = iVar9;
          *(float *)(lVar19 + 0x158) = fVar31 / (float)iVar9;
        }
        *(float *)(param_1 + 0x338) = fVar30;
      }
    }
    lVar26 = *(longlong *)(param_1 + 0x288);
    dVar37 = *(double *)(lVar26 + 0x1a8);
    dVar44 = *(double *)(lVar26 + 0x198);
    dVar32 = *(double *)(lVar26 + 0x1a0);
    uVar53 = *(undefined4 *)(lVar26 + 0x1b0);
    *(float *)(lVar19 + 0x130) =
         (float)(dVar37 * local_1b8 + dVar32 * local_1d8 + dVar44 * local_1f8[0] + local_198);
    *(float *)(lVar19 + 0x134) =
         (float)(dVar37 * dStack_1b0 + dVar32 * dStack_1d0 + dVar44 * local_1f8[1] + dStack_190);
    *(float *)(lVar19 + 0x138) =
         (float)(dVar44 * local_1f8[2] + dVar32 * local_1c8 + dVar37 * local_1a8 + local_188);
    *(undefined4 *)(lVar19 + 0x13c) = uVar53;
    dVar37 = *(double *)(param_1 + 0x250);
    uVar53 = *(undefined4 *)(param_1 + 0x330);
    dVar44 = *(double *)(param_1 + 0x248);
    *(float *)(lVar19 + 0x140) = (float)*(double *)(param_1 + 0x240);
    *(float *)(lVar19 + 0x144) = (float)dVar44;
    *(float *)(lVar19 + 0x148) = (float)dVar37;
    *(undefined4 *)(lVar19 + 0x14c) = uVar53;
    *(undefined8 *)(lVar19 + 0x150) = *(undefined8 *)(lVar19 + 400);
    *(undefined4 *)(lVar19 + 0x168) = *(undefined4 *)(param_1 + 0x334);
    if (cVar22 == '\0') {
      puVar14 = &DAT_14c846330;
    }
    else {
      puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x8c8);
    }
    *(undefined4 *)(lVar19 + 0x174) = *(undefined4 *)(puVar14 + 1);
    *(undefined8 *)(lVar19 + 0x16c) = *puVar14;
    uVar13 = *(undefined8 *)(lVar19 + 0x88);
    uVar5 = *(undefined8 *)(lVar19 + 0x90);
    uVar6 = *(undefined8 *)(param_1 + 0x2e0);
    *(undefined8 *)(lVar19 + 0x88) = *(undefined8 *)(param_1 + 0x2d8);
    *(undefined8 *)(lVar19 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0x2d8) = uVar13;
    *(undefined8 *)(param_1 + 0x2e0) = uVar5;
    local_3f8 = *(double *)(lVar19 + 0x78);
    dStack_3f0 = *(double *)(lVar19 + 0x80);
    uVar13 = *(undefined8 *)(param_1 + 0x2f0);
    *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(param_1 + 0x2e8);
    *(undefined8 *)(lVar19 + 0x80) = uVar13;
    *(double *)(param_1 + 0x2e8) = local_3f8;
    *(double *)(param_1 + 0x2f0) = dStack_3f0;
  }
  if (*(int *)(param_1 + 0x2f4) < 0) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    FUN_147c26560(param_1 + 0x2e8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x250) = DAT_14c8464f0;
  uVar13 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x240) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x248) = uVar13;
  if (*(char *)(*(longlong *)(param_1 + 0x290) + 0x310) == '\x01') {
    FUN_1435d2aac(*(longlong *)(param_1 + 0x290),param_1 + 0x298,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x340));
  }
LAB_1435e0a01:
  if ((local_f0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar19;
}



// FUNCTION 1435e1f42 FUN_1435e1f42 body=1005 status=ok
// SIG undefined FUN_1435e1f42(void)

void FUN_1435e1f42(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  uint uVar5;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = *(uint *)(param_1 + 0x24);
  if ((int)uVar5 < 1) goto LAB_1435e2286;
  if (DAT_14c760db4 < 2) {
    uVar5 = *(uint *)(param_1 + 0x20);
  }
  iVar4 = uVar5 << 4;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FParticleTileVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = (undefined1)iVar4;
  uStack_97 = (undefined1)((uint)iVar4 >> 8);
  uStack_96 = (undefined1)((uint)iVar4 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar4 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4301;
  if ((uVar5 & 0xfffffff) == 0) {
    FUN_14570b4be(param_2,&local_88,0x4301,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_1435e20fc:
    lVar10 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar3 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar3 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar3 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar3;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1435e20fc;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 1;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x18);
  if (plVar9 != &local_a0) {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 == 0) goto LAB_1435e2286;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
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
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
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
  lVar10 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
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
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
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
LAB_1435e2286:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435e2330 FUN_1435e2330 body=1013 status=ok
// SIG undefined FUN_1435e2330(void)

void FUN_1435e2330(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  if ((((DAT_14c7616a4 == 0) || (DAT_14ca84e1d != '\x01')) || ((DAT_14c873768 & 1) == 0)) ||
     (DAT_14ca84e19 != '\x01')) goto LAB_1435e2697;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FGPUParticleVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  iVar8 = 1;
  if (1 < *(int *)(param_1 + 0x20)) {
    iVar8 = *(int *)(param_1 + 0x20);
  }
  iVar8 = iVar8 << 3;
  local_98 = (undefined1)iVar8;
  uStack_97 = (undefined1)((uint)iVar8 >> 8);
  uStack_96 = (undefined1)((uint)iVar8 >> 0x10);
  uStack_95 = (undefined1)((uint)iVar8 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((uint7)(uint3)(local_64 >> 8),1));
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  lVar10 = local_a0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 == &local_a0) {
LAB_1435e250d:
    lVar10 = local_a0;
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
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar10;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar10 = *plVar9;
  }
  else {
    lVar4 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar11) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar11 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar11) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1435e250d;
    }
  }
  if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 10;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar9 = (longlong *)(param_1 + 0x18);
  if (plVar9 != &local_a0) {
    lVar10 = *plVar9;
    *plVar9 = local_a0;
    local_a0 = 0;
    if (lVar10 == 0) goto LAB_1435e2697;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar10 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar11 = plVar7 != DAT_14ca843c8;
            plVar9 = plVar6;
            if (bVar11) {
              plVar7 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar10 = local_a0;
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
        plVar6[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar11) {
              plVar9 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar11 = plVar7 != DAT_14ca843c8;
            plVar9 = plVar6;
            if (bVar11) {
              plVar7 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1435e2697:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435e2726 FUN_1435e2726 body=2795 status=ok
// SIG undefined FUN_1435e2726(void)

void FUN_1435e2726(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    lVar10 = FUN_147c25126(*(undefined8 *)(param_1 + 0x278));
    lVar4 = *(longlong *)(param_1 + 0x280);
    if (lVar10 == lVar4) {
      if (*(char *)(lVar4 + 8) == '\0') {
        lVar10 = *(longlong *)(param_1 + 0x290);
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar7 = *(int *)(lVar5 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar7 != 2) {
            if (iVar7 != 1) goto LAB_1435e28b2;
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1435e28bb;
            goto LAB_1435e2d43;
          }
        }
        else {
LAB_1435e28b2:
          if (iVar7 != 0x10) {
LAB_1435e2d43:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
              goto LAB_1435e28bb;
              if (iVar7 == 1) {
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                if (DVar8 == DVar9) goto LAB_1435e28bb;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar1 = (undefined8 *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
              puVar12 = (uint *)*puVar1;
              if (puVar12 != (uint *)0x0) goto LAB_1435e2ef7;
              while( true ) {
                uVar14 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar14 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar14 | 1;
                  __tlregdtor(&LAB_1435df720);
                }
                lVar5 = *(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar11 = *(undefined4 **)(lVar5 + 0x310);
                *(undefined8 *)(lVar5 + 0x310) = 0;
                if (puVar11 == (undefined4 *)0x0) {
                  puVar11 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar11 = 0xffffffff;
                *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                puVar11[0x12] = 0;
                *puVar1 = puVar11;
                FUN_140217a48(puVar1);
                puVar12 = (uint *)*puVar1;
LAB_1435e2ef7:
                puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar16 = (uint *)(puVar18 + 0x17);
                uVar14 = puVar12[0x12];
                if (puVar16 <= puVar12 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                  LOCK();
                  uVar3 = *puVar12;
                  *puVar12 = *puVar12 + uVar14 + 1;
                  UNLOCK();
                  if ((uVar3 ^ uVar14) != 0xffffffff) break;
                  puVar12 = (uint *)*puVar1;
                  *puVar12 = 0xffffffff;
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                  puVar12[0x12] = 0;
                  *puVar1 = puVar12;
                  puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                  puVar16 = (uint *)(puVar18 + 0x17);
                  uVar14 = 0;
                  if (puVar16 <= puVar12 + 0x4000) {
                    uVar14 = 1;
                    goto LAB_1435e2f77;
                  }
                }
              }
              uVar14 = uVar14 + 1;
LAB_1435e2f77:
              *(uint **)(puVar12 + 0x10) = puVar16;
              puVar12[0x12] = uVar14;
              iVar7 = 0;
              FUN_1447247dc(puVar18,0);
              *puVar18 = &PTR_FUN_14aa048b8;
              puVar18[0x15] = lVar4;
              puVar18[0x16] = lVar10;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar14 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                  uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                  iVar7 = 0;
                }
                else {
                  uVar17 = 2;
                }
              }
              else {
                iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar17 = 5;
              }
              if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
              }
              puVar18[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar18[9] = puVar18;
              puVar18[10] = puVar18;
              lVar4 = *(longlong *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
              if (lVar4 == 0) {
                uVar6 = 1;
                if ((char)uVar17 != '\x06') {
                  uVar6 = uVar17;
                }
                uVar17 = uVar6;
                uVar13 = 0;
              }
              else {
                if ((char)uVar17 == '\x06') {
                  uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                }
                uVar13 = *(undefined8 *)(lVar4 + 0x30);
              }
              puVar18[0xf] = uVar13;
              puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar18 + 0x1c) = iVar7;
              if (puVar18 == (undefined8 *)0x0) {
                local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
                local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
                FUN_1447439e4(puVar18);
                LOCK();
                piVar2 = (int *)(puVar18 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar18)(puVar18,1);
                }
              }
            }
            else {
              local_88 = local_78;
              local_68 = (undefined ***)0x0;
              local_58 = &PTR_LAB_14aa04860;
              local_78[0] = FUN_1435e5e58;
              local_50 = lVar4;
              local_48 = lVar10;
              FUN_14005a792(&DAT_14ca9a440,L"FRemoveGPUSimulationCommand",&DAT_14caf59a0);
              if (local_78[0] != (code *)0x0) {
                pppuVar15 = local_68;
                if (local_68 == (undefined ***)0x0) {
                  pppuVar15 = &local_58;
                }
                (*(code *)(*pppuVar15)[2])();
              }
            }
            goto LAB_1435e2de6;
          }
        }
LAB_1435e28bb:
        if (*(int *)(lVar10 + 0x300) != -1) {
          FUN_147c2872e(lVar4 + 0x58);
          piVar2 = (int *)(lVar4 + 0x90 + (longlong)*(int *)(lVar10 + 0x304) * 4);
          *piVar2 = *piVar2 + -1;
        }
        *(undefined4 *)(lVar10 + 0x300) = 0xffffffff;
      }
LAB_1435e2de6:
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0xa0);
      if (lVar4 != 0) {
        iVar7 = *(int *)(param_1 + 0x2a0);
        if (0 < (longlong)iVar7) {
          lVar10 = 0;
          do {
            FUN_147c251bc(lVar4 + 0xf8,*(undefined4 *)(*(longlong *)(param_1 + 0x298) + lVar10 * 4))
            ;
            lVar10 = lVar10 + 1;
          } while (iVar7 != lVar10);
        }
        if (*(int *)(param_1 + 0x2a4) < 0) {
          *(undefined4 *)(param_1 + 0x2a0) = 0;
          FUN_14480809c((longlong *)(param_1 + 0x298),0);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (*(int *)(param_1 + 0x2a4) < 0) {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    FUN_14480809c(param_1 + 0x298,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
  }
  if (*(int *)(param_1 + 0x2d4) < 0) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    FUN_14482f6fa(param_1 + 0x2c8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  if (*(int *)(param_1 + 0x2e4) < 0) {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    FUN_14480809c(param_1 + 0x2d8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
  }
  *(undefined8 *)(param_1 + 0x33c) = 0xffffffff;
  lVar4 = *(longlong *)(param_1 + 0x290);
  *(undefined1 *)(lVar4 + 0x311) = 1;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1435e2825;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1435e282e;
      goto LAB_1435e2918;
    }
  }
  else {
LAB_1435e2825:
    if (iVar7 != 0x10) {
LAB_1435e2918:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar10 + 0xc60), iVar7 == 2))
        goto LAB_1435e282e;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1435e282e;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_1435e2a7d;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_1435df720);
          }
          lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar10 + 0x310);
          *(undefined8 *)(lVar10 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_1435e2a7d:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x16);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x16);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1435e2afd;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1435e2afd:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14aa04080;
        puVar18[0x15] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar7 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar2 = (int *)(puVar18 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14aa04000;
        local_78[0] = FUN_147c25216;
        local_50 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"FReleaseParticleSimulationResourcesGPUCommand",&DAT_14caf55a0
                     );
        if (local_78[0] != (code *)0x0) {
          pppuVar15 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar15 = &local_58;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_1435e29b7;
    }
  }
LAB_1435e282e:
  FUN_144725486(lVar4 + 0x2d0);
  FUN_144725486(lVar4 + 8);
  if (*(longlong **)(lVar4 + 0x2f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + 0x2f8) + 0x20))();
  }
LAB_1435e29b7:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e3212 FUN_1435e3212 body=1216 status=ok
// SIG undefined FUN_1435e3212(void)

void FUN_1435e3212(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x312) = 1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_1435e3634;
    if (iVar6 != 1) goto LAB_1435e325b;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_1435e3634;
  }
  else {
LAB_1435e325b:
    if (iVar6 == 0x10) goto LAB_1435e3634;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_1435e3634:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1435e3634;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_1435e33c5;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_1435df720);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_1435e33c5:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x16);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar3 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_1435e3445;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_1435e3445:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14aa04100;
    puVar16[0x15] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar6 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar15 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar15 != '\x06') {
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aa04090;
    local_68[0] = &LAB_147c253b8;
    local_40 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"FReleaseParticleSimulationGPUCommand",&DAT_14caf55a4);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e36e6 FUN_1435e36e6 body=282 status=ok
// SIG undefined FUN_1435e36e6(void)

undefined8 * FUN_1435e36e6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e3800 FUN_1435e3800 body=60 status=ok
// SIG undefined FUN_1435e3800(void)

void FUN_1435e3800(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144725486(lVar1 + 0x2d0);
  FUN_144725486(lVar1 + 8);
  if (*(longlong **)(lVar1 + 0x2f8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e3831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x2f8) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 1435e383c FUN_1435e383c body=282 status=ok
// SIG undefined FUN_1435e383c(void)

undefined8 * FUN_1435e383c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e3956 FUN_1435e3956 body=1550 status=ok
// SIG undefined FUN_1435e3956(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435e3956(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *(int *)(param_1 + 0x348) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x348) = uVar7;
  dVar26 = (double)((float)(uVar7 >> 9 | 0x3f800000) + -1.0);
  dVar18 = 1.0 - dVar26;
  lVar4 = *(longlong *)(param_1 + 0x288);
  dVar29 = *(double *)(lVar4 + 200) * dVar26 + *(double *)(lVar4 + 0xb0) * dVar18;
  dVar31 = *(double *)(lVar4 + 0xc0) * dVar26 + *(double *)(lVar4 + 0xa8) * dVar18;
  dVar27 = dVar26 * *(double *)(lVar4 + 0xb8) + dVar18 * *(double *)(lVar4 + 0xa0);
  dVar18 = (double)DAT_1499387d0;
  dVar26 = DAT_1499387d0._8_8_;
  auVar24._8_8_ = dVar31;
  auVar24._0_8_ = dVar27;
  auVar19 = divpd(auVar24,_DAT_1499387d0);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar29 / 360.0;
  auVar19 = roundpd(auVar19,auVar19,3);
  auVar24 = roundpd(auVar23,auVar23,3);
  auVar32._0_8_ = dVar29 - auVar24._0_8_ * dVar18;
  auVar32._8_8_ = 0.0 - auVar24._8_8_ * dVar26;
  dVar27 = dVar27 - auVar19._0_8_ * dVar18;
  dVar31 = dVar31 - auVar19._8_8_ * dVar26;
  auVar30._0_8_ = dVar27 + dVar18;
  auVar30._8_8_ = dVar31 + dVar26;
  auVar28._0_8_ = dVar18 + auVar32._0_8_;
  auVar28._8_8_ = dVar26 + auVar32._8_8_;
  auVar20._8_8_ = -(ulonglong)(0.0 <= dVar31);
  auVar20._0_8_ = -(ulonglong)(0.0 <= dVar27);
  auVar19._8_8_ = dVar31;
  auVar19._0_8_ = dVar27;
  auVar24 = blendvpd(auVar30,auVar19,auVar20);
  auVar21._8_8_ = -(ulonglong)(0.0 <= auVar32._8_8_);
  auVar21._0_8_ = -(ulonglong)(0.0 <= auVar32._0_8_);
  auVar19 = blendvpd(auVar28,auVar32,auVar21);
  auVar25._0_8_ = auVar24._0_8_ + -360.0;
  auVar25._8_8_ = auVar24._8_8_ + -360.0;
  auVar22._8_8_ = -(ulonglong)(180.0 < auVar24._8_8_);
  auVar22._0_8_ = -(ulonglong)(180.0 < auVar24._0_8_);
  auVar24 = blendvpd(auVar24,auVar25,auVar22);
  dVar18 = auVar19._0_8_;
  *(undefined1 (*) [16])(param_1 + 0x318) = auVar24;
  *(ulonglong *)(param_1 + 0x328) =
       ~-(ulonglong)(180.0 < dVar18) & (ulonglong)dVar18 |
       (ulonglong)(dVar18 + -360.0) & -(ulonglong)(180.0 < dVar18);
  if ((*(char *)(*(longlong *)(param_1 + 0x290) + 0x312) != '\0') ||
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x290) + 0xf0), lVar4 == 0)) goto LAB_1435e3bdb;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 == 2) goto LAB_1435e3b05;
    if (iVar8 != 1) goto LAB_1435e3b00;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 == DVar10) goto LAB_1435e3b05;
  }
  else {
LAB_1435e3b00:
    if (iVar8 == 0x10) goto LAB_1435e3b05;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2)) {
LAB_1435e3b05:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar8 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1435e3b05;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar12 = (uint *)*puVar2;
    if (puVar12 != (uint *)0x0) goto LAB_1435e3c9d;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1435df720);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar2 = puVar11;
      FUN_140217a48(puVar2);
      puVar12 = (uint *)*puVar2;
LAB_1435e3c9d:
      puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
      uVar7 = puVar12[0x12];
      if (puVar15 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar3 = *puVar12;
        *puVar12 = *puVar12 + uVar7 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar7) != 0xffffffff) break;
        puVar12 = (uint *)*puVar2;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar7 = 0;
        if (puVar15 <= puVar12 + 0x4000) {
          uVar7 = 1;
          goto LAB_1435e3d1d;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1435e3d1d:
    *(uint **)(puVar12 + 0x10) = puVar15;
    puVar12[0x12] = uVar7;
    iVar8 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14aa04168;
    puVar17[0x15] = lVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar7 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
        iVar8 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar16 = 5;
    }
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar6 = 1;
      if ((char)uVar16 != '\x06') {
        uVar6 = uVar16;
      }
      uVar16 = uVar6;
      uVar13 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar13 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar17[0xf] = uVar13;
    puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar8;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aa04110;
    local_68[0] = &LAB_147c2574e;
    local_40 = lVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FResetVectorFieldCommand",&DAT_14caf55a8);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_1435e3bdb:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e3f7a FUN_1435e3f7a body=282 status=ok
// SIG undefined FUN_1435e3f7a(void)

undefined8 * FUN_1435e3f7a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e4094 FUN_1435e4094 body=97 status=ok
// SIG undefined FUN_1435e4094(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435e4094(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e40ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 0x38))();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 0x38))();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e40d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1435e40f6 FUN_1435e40f6 body=1692 status=ok
// SIG undefined FUN_1435e40f6(void)

int FUN_1435e40f6(longlong param_1,ulonglong param_2,int param_3,int *param_4,longlong param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  float fVar29;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    iVar5 = DAT_14c7616d0;
    iVar6 = DAT_14c7616d0;
    if (*(char *)(param_5 + 0x110) == '\0') {
      iVar5 = DAT_14c7616c8;
      iVar6 = DAT_14c7616c4;
    }
    iVar8 = *(int *)(param_1 + 0x33c);
    auVar28._0_12_ = ZEXT812(0x4f800000);
    auVar28._12_4_ = 0;
    uVar12 = param_2;
    if ((-1 < (longlong)iVar8) && (iVar8 < *(int *)(param_1 + 0x2a0))) {
      uVar12 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar8 * 4) %
               (ulonglong)*(uint *)(param_5 + 0xf0);
      auVar28 = ZEXT416((uint)(float)uVar12);
    }
    if (0 < param_3) {
      uVar2 = *(uint *)(param_5 + 0xe8);
      uVar3 = *(uint *)(param_5 + 0xec);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0xa0);
      auVar25._4_12_ = auVar28._4_12_;
      auVar25._0_4_ = auVar28._0_4_ / (float)uVar2;
      auVar28 = roundss(in_XMM1,auVar25,0xb);
      fVar29 = auVar25._0_4_ - auVar28._0_4_;
      auVar28 = blendps(auVar25,ZEXT816(0),0xe);
      auVar28 = roundps(auVar28,auVar28,3);
      auVar26._4_12_ = auVar28._4_12_;
      auVar26._0_4_ = auVar28._0_4_ / (float)uVar3;
      auVar28 = roundss(ZEXT816(0),auVar26,0xb);
      fVar24 = auVar26._0_4_ - auVar28._0_4_;
      puVar1 = (uint *)(param_1 + 0x2a8);
      iVar8 = *(int *)(param_1 + 0x340);
      iVar22 = 0;
      do {
        if (iVar8 < 1) {
          if (*param_4 < *(int *)(param_1 + 0x2a0)) {
            puVar11 = *(uint **)(param_1 + 0x2b8);
            if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
              puVar11 = puVar1;
            }
            uVar21 = *(int *)(param_1 + 0x2c0) + 0x1f;
            iVar8 = -1;
            if (0x1f < uVar21) {
              lVar18 = 0;
              puVar20 = puVar11;
LAB_1435e42a7:
              if (*puVar20 == 0xffffffff) goto code_r0x0001435e42b4;
              uVar21 = ~*puVar20;
              iVar7 = 0;
              if (uVar21 != 0) {
                for (; (uVar21 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
                }
              }
              iVar19 = iVar7 - (int)lVar18;
              if (iVar7 + 1 != (int)lVar18 && iVar19 < *(int *)(param_1 + 0x2c0)) {
                iVar8 = iVar19 + 0x1f;
                if (-1 < iVar19) {
                  iVar8 = iVar19;
                }
                puVar11[iVar8 >> 5] = puVar11[iVar8 >> 5] | 1 << ((byte)iVar7 & 0x1f);
                iVar8 = iVar19;
              }
            }
LAB_1435e4447:
            *(int *)(param_1 + 0x33c) = iVar8;
          }
          else {
            iVar8 = FUN_147c2561a(lVar4 + 0xf8,uVar12);
            if (iVar8 == -1) {
              return iVar22;
            }
            iVar7 = *(int *)(param_1 + 0x2a0);
            *(uint *)(param_1 + 0x2a0) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x2a4) < iVar7 + 1U) {
              FUN_1447808da((longlong *)(param_1 + 0x298),iVar7);
            }
            *(int *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar7 * 4) = iVar8;
            *(int *)(param_1 + 0x33c) = iVar7;
            iVar7 = *(int *)(param_1 + 0x2d0);
            *(uint *)(param_1 + 0x2d0) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x2d4) < iVar7 + 1U) {
              FUN_14475e4ac(param_1 + 0x2c8,iVar7);
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar7 * 4) = 0;
            iVar7 = *(int *)(param_1 + 0x2e0);
            *(uint *)(param_1 + 0x2e0) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x2e4) < iVar7 + 1U) {
              FUN_1447808da(param_1 + 0x2d8,iVar7);
            }
            *(int *)(*(longlong *)(param_1 + 0x2d8) + (longlong)iVar7 * 4) = iVar8;
            iVar8 = *(int *)(param_1 + 0x2c0);
            if (iVar8 == 0) {
              iVar7 = -1;
            }
            else {
              iVar7 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar7 = iVar8 + -1;
              }
              iVar7 = iVar7 >> 5;
            }
            iVar19 = iVar8 + 1;
            iVar23 = iVar8 + 0x1f;
            if (-1 < iVar8) {
              iVar23 = iVar8;
            }
            if (iVar23 >> 5 == iVar7) {
              *(int *)(param_1 + 0x2c0) = iVar19;
            }
            else {
              if (*(int *)(param_1 + 0x2c4) <= iVar8) {
                iVar7 = iVar8;
                if (iVar8 + 0x20U < 0xa0) {
                  iVar19 = 0x80;
                }
                else {
                  uVar21 = iVar8 + 0x20U >> 5;
                  if (*(int *)(param_1 + 0x2c4) + 0x1fU < 0xa0) {
                    uVar15 = 4;
                    if (4 < uVar21) {
                      uVar15 = uVar21;
                    }
                  }
                  else {
                    uVar15 = uVar21 + (uVar21 * 3 >> 3) + 0x10;
                  }
                  uVar12 = (ulonglong)(uVar15 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar9 = (uint)(uVar12 + 0xf);
                      if (uVar15 < 0x1ffd) {
                        uVar12 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
                      }
                      else {
                        uVar14 = (ulonglong)(uVar9 & 0xfffffff0);
                        if (uVar14 < 0x7ff1) {
                          bVar13 = (&DAT_14c841e00)[uVar9 >> 4];
                          uVar16 = 0x32;
                          if (0x32 < bVar13) {
                            uVar16 = (ulonglong)bVar13;
                          }
                          uVar17 = 0x32 - (ulonglong)bVar13;
                          do {
                            uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0)
                            goto LAB_1435e4666;
                            lVar18 = uVar16 + 1 + uVar17;
                            uVar17 = uVar17 - 1;
                          } while (lVar18 != 0x33);
                        }
                        uVar12 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar12 = 0x10;
                        }
                        uVar12 = -uVar12 & (uVar14 + uVar12) - 1;
                      }
                    }
                    else {
                      uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
                      iVar7 = *(int *)(param_1 + 0x2c0);
                    }
                  }
LAB_1435e4666:
                  iVar10 = (int)(uVar12 >> 2);
                  iVar19 = iVar10 << 5;
                  if (iVar10 < (int)uVar21) {
                    iVar19 = -0x20;
                  }
                }
                *(int *)(param_1 + 0x2c4) = iVar19;
                FUN_1446efbd8(puVar1,iVar7);
                iVar19 = *(int *)(param_1 + 0x2c0) + 1;
              }
              iVar7 = iVar19 + 0x1f;
              if (-1 < iVar19) {
                iVar7 = iVar19;
              }
              *(int *)(param_1 + 0x2c0) = iVar19;
              if (iVar19 % 0x20 != 0) {
                puVar11 = *(uint **)(param_1 + 0x2b8);
                if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
                  puVar11 = puVar1;
                }
                bVar13 = -(char)(iVar19 % 0x20);
                puVar11[iVar7 >> 5] = (puVar11[iVar7 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
              }
            }
            puVar11 = *(uint **)(param_1 + 0x2b8);
            if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
              puVar11 = puVar1;
            }
            puVar11[iVar23 >> 5] = puVar11[iVar23 >> 5] | 1 << ((byte)iVar8 & 0x1f);
            *(undefined1 *)(*(longlong *)(param_1 + 0x290) + 0x310) = 1;
          }
          *param_4 = *param_4 + 1;
          fVar24 = (float)((ulonglong)
                           *(uint *)(*(longlong *)(param_1 + 0x298) +
                                    (longlong)*(int *)(param_1 + 0x33c) * 4) %
                          (ulonglong)*(uint *)(param_5 + 0xf0)) / (float)uVar2;
          auVar28 = roundss(ZEXT816(0),ZEXT416((uint)fVar24),0xb);
          fVar29 = fVar24 - auVar28._0_4_;
          auVar28 = roundps(ZEXT416((uint)fVar29),ZEXT416((uint)fVar24),3);
          auVar27._4_12_ = auVar28._4_12_;
          auVar27._0_4_ = auVar28._0_4_ / (float)uVar3;
          auVar28 = roundss(ZEXT816(0),auVar27,0xb);
          fVar24 = auVar27._0_4_ - auVar28._0_4_;
          *(undefined4 *)(param_1 + 0x340) = 0x10;
        }
        lVar18 = FUN_147c265ce(param_2);
        uVar15 = 0x10 - *(int *)(param_1 + 0x340);
        uVar21 = 0x13 - *(int *)(param_1 + 0x340);
        if (-1 < (int)uVar15) {
          uVar21 = uVar15;
        }
        *(float *)(lVar18 + 0x40) =
             (float)(int)(uVar15 - (uVar21 & 0xfffffffc)) / (float)iVar6 + fVar29;
        *(float *)(lVar18 + 0x44) = (float)((int)uVar21 >> 2) / (float)iVar5 + fVar24;
        uVar14 = (ulonglong)
                 *(uint *)(*(longlong *)(param_1 + 0x298) + (longlong)*(int *)(param_1 + 0x33c) * 4)
        ;
        uVar12 = uVar14 % (ulonglong)*(uint *)(param_5 + 0xf0);
        *(float *)(lVar18 + 0x48) = (float)(uVar14 / *(uint *)(param_5 + 0xf0));
        *(undefined4 *)(lVar18 + 0x38) = *(undefined4 *)(param_1 + 0x33c);
        iVar8 = *(int *)(param_1 + 0x340) + -1;
        *(int *)(param_1 + 0x340) = iVar8;
        iVar22 = iVar22 + 1;
      } while (iVar22 != param_3);
    }
  }
  return param_3;
code_r0x0001435e42b4:
  lVar18 = lVar18 + -0x20;
  puVar20 = puVar20 + 1;
  if ((ulonglong)(uVar21 & 0xffffffe0) + lVar18 == 0) goto LAB_1435e4447;
  goto LAB_1435e42a7;
}



// FUNCTION 1435e4792 FUN_1435e4792 body=3149 status=ok
// SIG undefined FUN_1435e4792(void)

void FUN_1435e4792(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,longlong *param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *pcVar22;
  undefined8 *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined8 *puVar27;
  longlong lVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  longlong *local_130;
  char *local_128;
  longlong local_120;
  undefined4 *local_118;
  undefined4 local_10c;
  undefined8 *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8 [10];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar7 = &DAT_14c760db4;
  if (*(longlong *)(param_4 + 0x40) != 0) {
    puVar7 = (undefined4 *)(*(longlong *)(param_4 + 0x40) + 8);
  }
  if (((((DAT_14c7616a4 == 0) || (DAT_14ca84e1d != '\x01')) || ((DAT_14c873768 & 1) == 0)) ||
      ((DAT_14ca84e19 != '\x01' || (DAT_14c7616cc != '\x01')))) ||
     ((*(int *)(*(longlong *)(param_1 + 0x38) + 0x300) == -1 ||
      (*(int *)(*(longlong *)(param_1 + 0x38) + 0x2f0) < 1)))) goto LAB_1435e481b;
  uVar33 = *puVar7;
  local_130 = (longlong *)param_6[0x22];
  puVar23 = (undefined8 *)(param_1 + 0x180);
  puVar27 = local_c8;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar27 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar27 = puVar27 + 1;
  }
  FUN_1435ee368(param_2,param_3,&local_d8,&local_e8);
  local_6c = (float)local_e0;
  local_70 = (float)local_e8;
  local_74 = (float)local_d0;
  local_78 = (float)local_d8;
  if (*(char *)(param_1 + 0x1e4) == '\0') {
    FUN_147c30ee2(param_2,local_130);
  }
  bVar29 = DAT_14c7616c0 != 0;
  bVar13 = *(byte *)(param_1 + 0x20);
  local_120 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0);
  plVar11 = (longlong *)param_6[0x1d];
  puVar23 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8)
  ;
  puVar10 = (uint *)*puVar23;
  if (puVar10 != (uint *)0x0) goto LAB_1435e4946;
  while( true ) {
    FUN_14472e504(puVar23);
    puVar10 = (uint *)*puVar23;
LAB_1435e4946:
    puVar27 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar17 = puVar10[0x12];
    if (puVar27 + 0x34 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar25 = *puVar10;
      *puVar10 = *puVar10 + uVar17 + 1;
      UNLOCK();
      if ((uVar25 ^ uVar17) != 0xffffffff) break;
      puVar10 = (uint *)*puVar23;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar23 = puVar10;
      puVar27 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar17 = 0;
      if (puVar27 + 0x34 <= puVar10 + 0x4000) {
        uVar17 = 1;
        goto LAB_1435e49c4;
      }
    }
  }
  uVar17 = uVar17 + 1;
LAB_1435e49c4:
  *(undefined8 **)(puVar10 + 0x10) = puVar27 + 0x35;
  puVar10[0x12] = uVar17;
  *(int *)(puVar27 + -1) = ((int)puVar27 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar27 + -4) = 0x1a0;
  puVar27[1] = 0;
  *puVar27 = &PTR_FUN_14aa041c0;
  lVar15 = *plVar11;
  do {
    puVar27[1] = lVar15;
    LOCK();
    lVar19 = *plVar11;
    bVar30 = lVar15 == lVar19;
    if (bVar30) {
      *plVar11 = (longlong)puVar27;
      lVar19 = lVar15;
    }
    UNLOCK();
    lVar15 = lVar19;
  } while (!bVar30);
  puVar27[2] = &PTR_FUN_14aa041c8;
  local_108 = puVar27 + 3;
  *(undefined4 *)(puVar27 + 4) = 0xffffffff;
  *(char *)((longlong)puVar27 + 0x24) = (char)uVar33;
  *(undefined2 *)((longlong)puVar27 + 0x25) = 1;
  puVar27[0x15] = 0;
  puVar27[0x16] = 0x800000000;
  puVar27[0x1b] = 0;
  puVar27[0x1c] = 0x200000000;
  puVar27[0x23] = 0;
  puVar27[0x24] = 0x300000000;
  puVar27[0x25] = 0;
  puVar27[0x26] = 0;
  puVar27[0x27] = 0;
  *(undefined4 *)(puVar27 + 0x28) = 0x1ffffff;
  puVar27[3] = &PTR_FUN_14aa041d0;
  puVar27[0x2b] = 0;
  puVar27[0x33] = 0;
  FUN_14006bf18(local_108,local_130);
  FUN_145e39154();
  local_140 = 1;
  local_148 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_100,local_c8,DAT_14caf3ed0);
  lVar15 = local_100;
  if (local_100 != 0) {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
    if (local_100 != 0) {
      LOCK();
      puVar10 = (uint *)(local_100 + 8);
      uVar17 = *puVar10;
      *puVar10 = *puVar10 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar10 = (uint *)(local_100 + 8);
        LOCK();
        uVar17 = *puVar10;
        *puVar10 = *puVar10 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          local_128 = (char *)CONCAT71(local_128._1_7_,*(undefined1 *)(local_100 + 0xd));
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar15;
          plVar11 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if (((ulonglong)local_128 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar30 = plVar11 != DAT_14ca843c0;
              plVar12 = plVar8;
              if (bVar30) {
                plVar11 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar30);
          }
          else {
            do {
              *plVar8 = (longlong)plVar12;
              LOCK();
              bVar30 = plVar12 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar30) {
                plVar12 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar30);
          }
        }
      }
    }
  }
  lVar19 = puVar27[0x33];
  puVar27[0x33] = lVar15;
  if (lVar19 != 0) {
    LOCK();
    puVar10 = (uint *)(lVar19 + 8);
    uVar17 = *puVar10;
    *puVar10 = *puVar10 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar10 = (uint *)(lVar19 + 8);
      LOCK();
      uVar17 = *puVar10;
      *puVar10 = *puVar10 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar19 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar19;
        plVar11 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar30 = plVar11 != DAT_14ca843c0;
            plVar12 = plVar8;
            if (bVar30) {
              plVar11 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar30);
        }
        else {
          do {
            *plVar8 = (longlong)plVar12;
            LOCK();
            bVar30 = plVar12 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar30) {
              plVar12 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar30);
        }
      }
    }
  }
  if ((((bVar29 & bVar13) == 0) || (*(int *)(param_1 + 0x1e0) != 2)) ||
     (lVar15 = *(longlong *)(param_1 + 0x28),
     *(char *)(*(longlong *)(lVar15 + 0xa0) + 0x110) != '\0')) {
    plVar11 = (longlong *)0x0;
  }
  else {
    local_100 = 0;
    local_f8 = 0xffffffffffffffff;
    local_f0 = 0xffffffff;
    lVar19 = *(longlong *)(param_1 + 0x38);
    pcVar22 = (char *)(lVar15 + 0xd8);
    LOCK();
    bVar29 = *(char *)(lVar15 + 0xd8) == '\0';
    if (bVar29) {
      *(char *)(lVar15 + 0xd8) = '\x01';
    }
    UNLOCK();
    if (!bVar29) {
      FUN_1447d2058(pcVar22);
    }
    if (*(longlong *)(lVar15 + 0xb0) == 0) {
      bVar29 = false;
    }
    else {
      local_148 = 0x69;
      local_128 = pcVar22;
      cVar6 = FUN_1400c0820(*(longlong *)(lVar15 + 0xb0),local_130,&local_100,
                            *(undefined4 *)(lVar19 + 0x2f0));
      if (cVar6 == '\0') {
        bVar29 = false;
        pcVar22 = local_128;
      }
      else {
        local_118 = (undefined4 *)(param_3 + 0x1048);
        local_130 = (longlong *)(lVar15 + 0xb8);
        local_10c = *(undefined4 *)(lVar19 + 0x2f0);
        iVar18 = *(int *)(lVar15 + 0xc0);
        *(uint *)(lVar15 + 0xc0) = iVar18 + 1U;
        if (*(uint *)(lVar15 + 0xc4) < iVar18 + 1U) {
          FUN_147c28798(local_130,iVar18);
        }
        lVar15 = *local_130;
        lVar21 = (longlong)iVar18 * 0x40;
        *(undefined8 *)(lVar15 + lVar21) = *(undefined8 *)(lVar19 + 0x2e8);
        uVar33 = local_118[1];
        uVar4 = local_118[2];
        uVar5 = local_118[3];
        puVar7 = (undefined4 *)(lVar15 + 8 + lVar21);
        *puVar7 = *local_118;
        puVar7[1] = uVar33;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        *(undefined8 *)(lVar15 + 0x18 + lVar21) = *(undefined8 *)(local_118 + 4);
        *(undefined4 *)(lVar15 + 0x20 + lVar21) = local_10c;
        *(longlong *)(lVar15 + 0x28 + lVar21) = local_100;
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(lVar15 + lVar21 + 0x38) = local_f0;
        *(undefined8 *)(lVar15 + lVar21 + 0x30) = local_f8;
        bVar29 = true;
        pcVar22 = local_128;
      }
    }
    LOCK();
    cVar6 = *pcVar22;
    if (cVar6 == '\x01') {
      *pcVar22 = '\0';
    }
    UNLOCK();
    if (cVar6 != '\x01') {
      FUN_14008cdb0(pcVar22);
    }
    if (bVar29) {
      plVar11 = (longlong *)param_6[0x1d];
      puVar10 = (uint *)*puVar23;
      if (puVar10 != (uint *)0x0) goto LAB_1435e50e8;
      while( true ) {
        FUN_14472e504(puVar23);
        puVar10 = (uint *)*puVar23;
LAB_1435e50e8:
        puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        uVar17 = puVar10[0x12];
        if (puVar16 + 5 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar25 = *puVar10;
          *puVar10 = *puVar10 + uVar17 + 1;
          UNLOCK();
          if ((uVar25 ^ uVar17) != 0xffffffff) break;
          puVar10 = (uint *)*puVar23;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar23 = puVar10;
          puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          uVar17 = 0;
          if (puVar16 + 5 <= puVar10 + 0x4000) {
            uVar17 = 1;
            goto LAB_1435e5160;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_1435e5160:
      *(undefined8 **)(puVar10 + 0x10) = puVar16 + 6;
      puVar10[0x12] = uVar17;
      *(int *)(puVar16 + -1) = ((int)puVar16 + -8) - (int)puVar10;
      *(undefined4 *)((longlong)puVar16 + -4) = 0x28;
      puVar16[1] = 0;
      *puVar16 = &PTR_FUN_14aa04228;
      lVar15 = *plVar11;
      do {
        puVar16[1] = lVar15;
        LOCK();
        lVar19 = *plVar11;
        bVar29 = lVar15 == lVar19;
        if (bVar29) {
          *plVar11 = (longlong)puVar16;
          lVar19 = lVar15;
        }
        UNLOCK();
        lVar15 = lVar19;
      } while (!bVar29);
      plVar11 = puVar16 + 2;
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[2] = &PTR_FUN_14aa04230;
      *(undefined4 *)(puVar16 + 3) = (undefined4)local_f8;
      if (local_100 == 0) goto LAB_1435e4bf9;
      puVar16[4] = local_100;
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    else {
      plVar11 = (longlong *)0x0;
    }
    lVar15 = local_100;
    if (local_100 != 0) {
      LOCK();
      puVar10 = (uint *)(local_100 + 8);
      uVar17 = *puVar10;
      *puVar10 = *puVar10 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar10 = (uint *)(local_100 + 8);
        LOCK();
        uVar17 = *puVar10;
        *puVar10 = *puVar10 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(local_100 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar15;
          plVar12 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar29 = plVar12 != DAT_14ca843c0;
              plVar8 = plVar9;
              if (bVar29) {
                plVar12 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar29);
          }
          else {
            do {
              *plVar9 = (longlong)plVar8;
              LOCK();
              bVar29 = plVar8 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar29) {
                plVar8 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar29);
          }
        }
      }
    }
  }
LAB_1435e4bf9:
  puVar27[0x2c] = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x2e8);
  pcVar22 = (char *)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x2f0);
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0);
  uVar33 = 0;
  lVar28 = (longlong)(int)((uint)(0.0 < *(float *)(DAT_14caf3da0 + 4)) ^ *(uint *)(lVar15 + 0xd0)) *
           0x40 + lVar15;
  puVar27[0x2a] = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
  lVar19 = puVar27[0x2b];
  lVar21 = puVar27[0x33];
  if (lVar19 != lVar21) {
    puVar27[0x2b] = lVar21;
    if (lVar21 != 0) {
      LOCK();
      *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
      UNLOCK();
    }
    if (lVar19 != 0) {
      LOCK();
      puVar10 = (uint *)(lVar19 + 8);
      uVar17 = *puVar10;
      *puVar10 = *puVar10 - 1;
      UNLOCK();
      if ((uVar17 & 0x3fffffff) == 1) {
        puVar10 = (uint *)(lVar19 + 8);
        LOCK();
        uVar17 = *puVar10;
        *puVar10 = *puVar10 | 0x40000000;
        UNLOCK();
        if ((uVar17 >> 0x1e & 1) == 0) {
          bVar13 = *(byte *)(lVar19 + 0xd);
          local_130 = plVar11;
          local_128 = pcVar22;
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar19;
          plVar12 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          pcVar22 = local_128;
          plVar11 = local_130;
          if ((bVar13 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar12;
              LOCK();
              bVar29 = plVar12 != DAT_14ca843c0;
              plVar8 = plVar9;
              if (bVar29) {
                plVar12 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar29);
          }
          else {
            do {
              *plVar9 = (longlong)plVar8;
              LOCK();
              bVar29 = plVar8 != DAT_14ca843c8;
              plVar12 = plVar9;
              if (bVar29) {
                plVar8 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar29);
          }
        }
      }
    }
  }
  puVar27[0x2d] = *(undefined8 *)(lVar28 + 0x20);
  puVar27[0x2e] = *(undefined8 *)(lVar28 + 0x28);
  puVar27[0x2f] = *(undefined8 *)(lVar15 + 0x98);
  *(undefined4 *)(puVar27 + 0x31) = *(undefined4 *)(lVar15 + 0xdc);
  puVar27[0x30] = *(undefined8 *)(lVar15 + 0xd4);
  if (*(char *)(local_120 + 0x110) == '\x01') {
    fVar32 = (float)DAT_14c7616d0 / (float)*(int *)(local_120 + 0xe0);
    fVar31 = (float)DAT_14c7616d0 / (float)*(int *)(local_120 + 0xe4);
    uVar33 = 0x3f800000;
  }
  else {
    fVar32 = 1.0;
    fVar31 = 1.0;
  }
  *(float *)((longlong)puVar27 + 0x18c) = fVar32;
  *(float *)(puVar27 + 0x32) = fVar31;
  *(undefined4 *)((longlong)puVar27 + 0x194) = uVar33;
  iVar18 = (int)param_6[1];
  iVar24 = (int)param_6[2];
  iVar3 = (iVar24 + 0x44) / 0x44;
  *(int *)(param_6 + 2) = iVar24 + 1;
  if (iVar18 < iVar3) {
    do {
      local_128 = pcVar22;
      local_130 = plVar11;
      local_118 = (undefined4 *)CONCAT44(local_118._4_4_,iVar18);
      lVar15 = FUN_14001cc68(0x3fc0,0x10);
      lVar19 = 0;
      do {
        *(undefined8 *)(lVar15 + 0xa8 + lVar19) = 0;
        puVar23 = (undefined8 *)(lVar15 + 0xb8 + lVar19);
        *puVar23 = 0;
        puVar23[1] = 0;
        *(undefined8 *)(lVar15 + 200 + lVar19) = 0;
        *(undefined8 *)(lVar15 + 0xd0 + lVar19) = 0xffffffff;
        *(undefined8 *)(lVar15 + 0xd8 + lVar19) = 0xff0000ffffffff;
        *(undefined1 *)(lVar15 + 0xe0 + lVar19) = 0;
        *(undefined4 *)(lVar15 + 0xe4 + lVar19) = 0x40c00f07;
        pbVar1 = (byte *)(lVar15 + 0xe8 + lVar19);
        *pbVar1 = *pbVar1 & 0xfc;
        *(undefined1 **)(lVar15 + 0xb0 + lVar19) = &DAT_100000001;
        FUN_14470b9e0(lVar15 + lVar19,1);
        lVar19 = lVar19 + 0xf0;
      } while (lVar19 != 0x3fc0);
      local_120 = (longlong)(int)param_6[1];
      uVar17 = (int)param_6[1] + 1;
      *(uint *)(param_6 + 1) = uVar17;
      if (*(uint *)((longlong)param_6 + 0xc) < uVar17) {
        FUN_14002baf6(param_6,local_120);
      }
      *(longlong *)(*param_6 + local_120 * 8) = lVar15;
      iVar18 = (int)local_118 + 1;
      pcVar22 = local_128;
      plVar11 = local_130;
    } while (iVar18 != iVar3);
  }
  lVar15 = *(longlong *)(*param_6 + (longlong)(iVar24 / 0x44) * 8);
  lVar19 = (ulonglong)(uint)(iVar24 % 0x44) * 0xf0;
  puVar23 = (undefined8 *)(lVar15 + lVar19);
  puVar27 = *(undefined8 **)(lVar15 + 0xa8 + lVar19);
  if (puVar27 == (undefined8 *)0x0) {
    puVar27 = puVar23;
  }
  iVar18 = (int)pcVar22;
  iVar24 = iVar18 + 0xf;
  if (-1 < iVar18) {
    iVar24 = iVar18;
  }
  puVar27[3] = &DAT_14caf6030;
  *(int *)(puVar27 + 0xc) = iVar24 >> 4;
  puVar27[0xb] = 0x2000000000;
  puVar27[7] = plVar11;
  *(undefined8 **)(lVar15 + 0xb8 + lVar19) = local_108;
  *(undefined8 *)(lVar15 + 200 + lVar19) = 0;
  puVar16 = (undefined8 *)(param_2 + 0x308);
  if (*(char *)(param_1 + 0x1e4) != '\0') {
    puVar16 = (undefined8 *)(param_2 + 0x250);
  }
  *puVar27 = *puVar16;
  puVar27[0xd] = 0x300000000;
  uVar17 = *(uint *)(lVar15 + 0xe4 + lVar19);
  uVar25 = (*(byte *)(param_2 + 0x6b) & 1) << 6;
  *(uint *)(lVar15 + 0xe4 + lVar19) = uVar17 & 0xffffffbf | uVar25;
  uVar26 = (*(byte *)(param_2 + 0x2b0) & 1) << 8;
  *(uint *)(lVar15 + 0xe4 + lVar19) = uVar17 & 0xfffffebf | uVar25 | uVar26;
  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
    uVar20 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar20) == *(longlong *)(param_3 + 0x4c0)) {
        if ((int)(~uVar20 >> 3) != 0) {
          bVar13 = *(byte *)(param_2 + 0x6d) >> 3;
          goto LAB_1435e4f18;
        }
        break;
      }
      uVar20 = uVar20 + 8;
    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar20);
  }
  bVar13 = *(byte *)(param_2 + 0x6d);
LAB_1435e4f18:
  uVar14 = (bVar13 & 7) << 0x11;
  *(uint *)((longlong)puVar23 + 0xe4) = uVar17 & 0xfff1febf | uVar25 | uVar26 | uVar14;
  puVar23[0x18] = *(undefined8 *)(param_1 + 0x18);
  *(uint *)((longlong)puVar23 + 0xe4) = uVar17 & 0xffe03ebf | uVar25 | uVar26 | uVar14 | 0x100000;
  *(uint *)((longlong)puVar23 + 0xe4) =
       uVar17 & 0xffc03ebf | uVar25 | uVar26 | uVar14 | 0x100000 |
       (uint)((*(byte *)(param_2 + 0x6c) & 6) != 0) << 0x15;
  FUN_1436a14f8(param_6,param_5);
LAB_1435e481b:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435e53fa FUN_1435e53fa body=246 status=ok
// SIG undefined FUN_1435e53fa(void)

longlong * FUN_1435e53fa(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fccdfe();
  local_30 = 1;
  local_38 = 2;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14caf3e38);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1435e54f2 FUN_1435e54f2 body=246 status=ok
// SIG undefined FUN_1435e54f2(void)

longlong * FUN_1435e54f2(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ef21da();
  local_30 = 1;
  local_38 = 2;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14caf40d0);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1435e55ea FUN_1435e55ea body=282 status=ok
// SIG undefined FUN_1435e55ea(void)

undefined8 * FUN_1435e55ea(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e5704 FUN_1435e5704 body=98 status=ok
// SIG undefined FUN_1435e5704(void)

void FUN_1435e5704(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435e5766 FUN_1435e5766 body=25 status=ok
// SIG undefined FUN_1435e5766(void)

void FUN_1435e5766(void)

{
  FUN_145d2fcd2();
  FUN_14170c56a(&DAT_14caf3f20);
  return;
}



// FUNCTION 1435e5780 FUN_1435e5780 body=25 status=ok
// SIG undefined FUN_1435e5780(void)

void FUN_1435e5780(void)

{
  FUN_14610d35a();
  FUN_14170c56a(&DAT_14caf3f90);
  return;
}



// FUNCTION 1435e57b2 FUN_1435e57b2 body=80 status=ok
// SIG undefined FUN_1435e57b2(void)

void FUN_1435e57b2(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  uStack_10 = *(undefined4 *)(param_1 + 0x20);
  uStack_c = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(**(longlong **)(param_2 + 0x38) + 0x1a8))
            (*(longlong **)(param_2 + 0x38),*(undefined8 *)(param_1 + 0x10));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e5804 FUN_1435e5804 body=210 status=ok
// SIG undefined FUN_1435e5804(void)

void FUN_1435e5804(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_144725486(*param_1 + 0x2d0);
  FUN_144725486(*param_1 + 8);
  FUN_147c280b4((longlong *)*param_1 + 0x5a,param_2,param_1 + 1,
                *(undefined8 *)(*(longlong *)*param_1 + 0xa0));
  FUN_147c285e4((longlong *)*param_1 + 1,param_2,param_1 + 1,
                *(undefined8 *)(*(longlong *)*param_1 + 0xa0));
  lVar1 = param_1[3];
  lVar2 = *(longlong *)(*param_1 + 0x30);
  if (lVar2 != lVar1) {
    *(longlong *)(*param_1 + 0x30) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x210) = *(int *)(lVar1 + 0x210) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      FUN_1435da7c2();
    }
  }
  *(longlong *)(*param_1 + 0x38) = param_1[3] + 0x18;
  plVar3 = *(longlong **)(*param_1 + 0x2f8);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e58c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    return;
  }
  return;
}



// FUNCTION 1435e58e0 FUN_1435e58e0 body=29 status=ok
// SIG undefined FUN_1435e58e0(void)

void FUN_1435e58e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435e58fe FUN_1435e58fe body=71 status=ok
// SIG undefined FUN_1435e58fe(void)

undefined8 * FUN_1435e58fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa04770;
  if (param_1[4] != 0) {
    FUN_1435da7c2();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435e5946 FUN_1435e5946 body=282 status=ok
// SIG undefined FUN_1435e5946(void)

undefined8 * FUN_1435e5946(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e5a60 FUN_1435e5a60 body=324 status=ok
// SIG undefined FUN_1435e5a60(void)

void FUN_1435e5a60(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_144725486(param_1[0x15] + 0x2d0);
  FUN_144725486(param_1[0x15] + 8);
  plVar2 = param_1 + 0x16;
  FUN_147c280b4((longlong *)param_1[0x15] + 0x5a,&DAT_14ca85100,plVar2,
                *(undefined8 *)(*(longlong *)param_1[0x15] + 0xa0));
  FUN_147c285e4((longlong *)param_1[0x15] + 1,&DAT_14ca85100,plVar2,
                *(undefined8 *)(*(longlong *)param_1[0x15] + 0xa0));
  lVar3 = param_1[0x18];
  lVar4 = *(longlong *)(param_1[0x15] + 0x30);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1[0x15] + 0x30) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0x210) = *(int *)(lVar3 + 0x210) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      FUN_1435da7c2();
    }
  }
  *(longlong *)(param_1[0x15] + 0x38) = param_1[0x18] + 0x18;
  plVar5 = *(longlong **)(param_1[0x15] + 0x2f8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,&DAT_14ca85100);
  }
  if (param_1[0x18] != 0) {
    FUN_1435da7c2();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e5b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435e5ba4 FUN_1435e5ba4 body=133 status=ok
// SIG undefined FUN_1435e5ba4(void)

void FUN_1435e5ba4(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  int local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1[1] + 0x300) == -1) {
    FUN_147c28654(*param_1 + 0x58,local_28);
    *(int *)(param_1[1] + 0x300) = local_28[0];
    lVar2 = param_1[1];
    *(longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)local_28[0] * 8) = lVar2;
    piVar1 = (int *)(*param_1 + 0x90 + (longlong)*(int *)(lVar2 + 0x304) * 4);
    *piVar1 = *piVar1 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e5c34 FUN_1435e5c34 body=12 status=ok
// SIG undefined FUN_1435e5c34(void)

void FUN_1435e5c34(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435e5c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435e5c40 FUN_1435e5c40 body=29 status=ok
// SIG undefined FUN_1435e5c40(void)

undefined8 FUN_1435e5c40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435e5c5e FUN_1435e5c5e body=282 status=ok
// SIG undefined FUN_1435e5c5e(void)

undefined8 * FUN_1435e5c5e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e5d78 FUN_1435e5d78 body=202 status=ok
// SIG undefined FUN_1435e5d78(void)

void FUN_1435e5d78(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  int local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x300) == -1) {
    FUN_147c28654(*(longlong *)(param_1 + 0xa8) + 0x58,local_28);
    *(int *)(*(longlong *)(param_1 + 0xb0) + 0x300) = local_28[0];
    lVar2 = *(longlong *)(param_1 + 0xb0);
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x58) + (longlong)local_28[0] * 8) =
         lVar2;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x90 + (longlong)*(int *)(lVar2 + 0x304) * 4);
    *piVar1 = *piVar1 + 1;
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
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



// FUNCTION 1435e5e58 FUN_1435e5e58 body=78 status=ok
// SIG undefined FUN_1435e5e58(void)

void FUN_1435e5e58(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (*(int *)(lVar2 + 0x300) != -1) {
    FUN_147c2872e(*param_1 + 0x58);
    piVar1 = (int *)(*param_1 + 0x90 + (longlong)*(int *)(param_1[1] + 0x304) * 4);
    *piVar1 = *piVar1 + -1;
    lVar2 = param_1[1];
  }
  *(undefined4 *)(lVar2 + 0x300) = 0xffffffff;
  return;
}



// FUNCTION 1435e5eb0 FUN_1435e5eb0 body=12 status=ok
// SIG undefined FUN_1435e5eb0(void)

void FUN_1435e5eb0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435e5eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435e5ebc FUN_1435e5ebc body=29 status=ok
// SIG undefined FUN_1435e5ebc(void)

undefined8 FUN_1435e5ebc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435e5eda FUN_1435e5eda body=282 status=ok
// SIG undefined FUN_1435e5eda(void)

undefined8 * FUN_1435e5eda(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e5ff4 FUN_1435e5ff4 body=144 status=ok
// SIG undefined FUN_1435e5ff4(void)

void FUN_1435e5ff4(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x16];
  if (*(int *)(lVar2 + 0x300) != -1) {
    FUN_147c2872e(param_1[0x15] + 0x58);
    piVar1 = (int *)(param_1[0x15] + 0x90 + (longlong)*(int *)(param_1[0x16] + 0x304) * 4);
    *piVar1 = *piVar1 + -1;
    lVar2 = param_1[0x16];
  }
  *(undefined4 *)(lVar2 + 0x300) = 0xffffffff;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e6045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435e6084 FUN_1435e6084 body=246 status=ok
// SIG undefined FUN_1435e6084(void)

longlong * FUN_1435e6084(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ef34b8();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14caf47f8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1435e617c FUN_1435e617c body=3105 status=ok
// SIG undefined FUN_1435e617c(void)

void FUN_1435e617c(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auVar7 [4];
  undefined8 *puVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  wchar_t *_Dest;
  byte bVar17;
  undefined8 *puVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined4 local_470;
  float local_45c;
  longlong local_458;
  longlong local_450;
  undefined8 local_448;
  longlong local_440;
  longlong local_438;
  char local_430;
  longlong lStack_42d;
  undefined1 local_420 [4];
  undefined1 local_41c [4];
  undefined8 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined2 local_404;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  longlong local_330;
  uint local_328;
  undefined4 uStack_324;
  undefined3 uStack_320;
  ulonglong local_318;
  ulonglong uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined8 uStack_2b4;
  undefined8 local_2ac;
  undefined8 uStack_2a4;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined5 uStack_284;
  undefined3 uStack_27f;
  undefined5 uStack_27c;
  undefined8 uStack_277;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined1 local_250 [7];
  undefined1 auStack_249 [4];
  uint uStack_245;
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  float local_238;
  float fStack_234;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong lStack_185;
  undefined1 local_178 [4];
  byte local_174;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_498;
  fVar20 = *(float *)(DAT_14caf3da0 + 4);
  local_440 = *(longlong *)(*param_1 + 0xa0);
  uVar3 = *(uint *)(local_440 + 0xd0);
  local_448 = DAT_14caf3c48;
  plVar14 = (longlong *)param_1[2];
  local_45c = *(float *)(param_1 + 1);
  lVar6 = param_1[3];
  local_2c8 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_2bc = 0;
  uStack_2b4 = 0;
  local_2ac = 0;
  uStack_2a4 = 0;
  local_29c = 0;
  uStack_294 = 0;
  local_28c = 0;
  uStack_284 = 0;
  uStack_27f = 0;
  uStack_27c = 0;
  uStack_277 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_250._0_4_ = 1;
  stack0xfffffffffffffdb8 = 0;
  (**(code **)(*plVar14 + 0x28))(plVar14,local_420);
  puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14);
  local_418 = *puVar8;
  lVar15 = 0x15;
  do {
    *(undefined8 *)((longlong)&lStack_42d + lVar15) = 0;
    *(undefined8 *)(&stack0xfffffffffffffbdb + lVar15) = 0;
    *(undefined4 *)(local_420 + lVar15 + 3) = 0xffffffff;
    *(undefined2 *)(local_41c + lVar15 + 3) = 0;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd5);
  local_344 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  local_340 = 0xffffffff;
  uStack_33c = 0xffffffff;
  uStack_338 = 0xffffffff;
  uStack_334 = 0xffffffff;
  local_330 = 0;
  local_328 = local_328 & 0xffffff00;
  uStack_324 = 0;
  uStack_320 = 0;
  local_410 = 0;
  local_408 = 0xffffffff;
  local_404 = 0x500;
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar9 = _Dest + 0x17;
  if ((wchar_t *)param_2[1] < pwVar9) {
    FUN_140023dd8(param_2,0x30);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar9 = _Dest + 0x17;
  }
  *param_2 = (ulonglong)pwVar9;
  wcscpy(_Dest,L"VisualizeGPUSimulation");
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar18 + 0x23;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x120);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar18 + 0x23;
  }
  local_450 = (longlong)(int)(uVar3 ^ 0.0 < fVar20);
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a217b50;
  memcpy(puVar18 + 2,&local_418,0xe8);
  puVar18[0x1f] = 0;
  puVar18[0x20] = CONCAT44(uStack_324,local_328);
  *(uint *)((longlong)puVar18 + 0x107) = CONCAT31(uStack_320,uStack_324._3_1_);
  puVar18[0x22] = _Dest;
  lVar15 = 0x11;
  do {
    *(undefined8 *)(auStack_249 + lVar15) = 0;
    *(undefined8 *)(auStack_241 + lVar15) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar15) = 0;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd1);
  local_178 = (undefined1  [4])0x0;
  local_174 = 0;
  lVar15 = 0xd9;
  do {
    *(undefined8 *)(auStack_249 + lVar15) = 0;
    *(undefined8 *)(auStack_241 + lVar15) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar15) = 0;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x199);
  local_b0 = 0;
  local_80 = 0;
  local_78 = local_78 & 0xff;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = local_88 & 0xff00;
  lVar15 = 0x15;
  do {
    if (*(longlong *)((longlong)&lStack_42d + lVar15) == 0) break;
    *(longlong *)(local_250 + lVar15 + 3) = *(longlong *)((longlong)&lStack_42d + lVar15);
    bVar2 = *(byte *)((longlong)&local_418 + lVar15);
    bVar17 = bVar2 >> 2;
    auStack_241[lVar15 + 4] = bVar17;
    abStack_23c[lVar15] = bVar2 & 3;
    *(undefined4 *)(auStack_241 + lVar15) = *(undefined4 *)(local_420 + lVar15 + 3);
    *(uint *)(auStack_241 + lVar15 + -4) = (uint)(byte)local_41c[lVar15 + 3];
    local_178 = (undefined1  [4])((int)local_178 + 1);
    local_174 = local_174 | bVar17 == 2;
    lVar4 = *(longlong *)(&stack0xfffffffffffffbdb + lVar15);
    if (lVar4 != 0) {
      local_b0 = 1;
      uVar5 = *(undefined8 *)(auStack_241 + lVar15 + -4);
      *(undefined8 *)((longlong)&lStack_185 + lVar15) = *(undefined8 *)(local_250 + lVar15 + 3);
      *(undefined8 *)(&stack0xfffffffffffffe83 + lVar15) = uVar5;
      *(undefined8 *)(local_178 + lVar15 + 3) = *(undefined8 *)(auStack_241 + lVar15 + 4);
      *(longlong *)((longlong)&lStack_185 + lVar15) = lVar4;
    }
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd5);
  auVar7 = local_178;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a8 = ZEXT816(0);
  if (0 < (longlong)(int)local_178) {
    memcpy(param_2 + 0x15,&local_238,(longlong)(int)local_178 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar7;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  FUN_144b0e33a(param_2,&local_318);
  fVar20 = (float)(int)local_41c;
  fVar21 = (float)(int)local_420;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar18 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar18 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  *(undefined1 (*) [16])(puVar18 + 1) = (undefined1  [16])0x0;
  *puVar18 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar18 + 3) = 0;
  *(float *)((longlong)puVar18 + 0x1c) = fVar21;
  *(float *)(puVar18 + 4) = fVar20;
  *(undefined4 *)((longlong)puVar18 + 0x24) = 0x3f800000;
  local_2d8 = DAT_14c9c0d98;
  uStack_2e0 = DAT_14c9c0db0;
  local_2e8 = DAT_14c9c0d50;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)lVar6 * 2) * 8);
  FUN_145f94564();
  uVar10 = 0;
  FUN_1448e935e(uVar5,&local_238,&DAT_14caf4cd8,0);
  FUN_145f94564();
  lVar4 = uStack_230;
  lVar15 = CONCAT44(fStack_234,local_238);
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)lVar6 * 2) * 8);
  FUN_145e9a41a();
  FUN_1448e935e(uVar5,&local_238,&DAT_14caf4e00,0);
  FUN_145e9a41a();
  lVar16 = uStack_230;
  lVar6 = CONCAT44(fStack_234,local_238);
  local_318 = DAT_14caf4ed0;
  if (lVar15 != 0) {
    lVar11 = *(longlong *)(lVar4 + 8);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + (longlong)*(int *)(lVar15 + 0xd4) * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar11,(longlong)*(int *)(lVar15 + 0xd4),1);
    }
  }
  uStack_310 = uVar10;
  if (lVar6 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)
              (*(longlong *)(*(longlong *)(uStack_230 + 8) + 0x50) +
              (longlong)*(int *)(lVar6 + 0xd4) * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(*(longlong *)(uStack_230 + 8),(longlong)*(int *)(lVar6 + 0xd4),1);
    }
  }
  local_2c0 = 0;
  local_308 = lVar11;
  lVar11 = FUN_140028f18(param_2);
  if ((lVar11 != 0) && ((local_250._0_4_ & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_2f8;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_2f8._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_2f0;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_2f0._4_4_;
    *(undefined4 *)(param_2 + 0x33) = (undefined4)local_308;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_308._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_300;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_300._4_4_;
    param_2[0x31] = local_318;
    param_2[0x32] = uStack_310;
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar18 + 4;
    if ((undefined8 *)param_2[1] < puVar8) {
      FUN_140023dd8(param_2,0x28);
      puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar18 + 4;
    }
    *param_2 = (ulonglong)puVar8;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar18;
    param_2[6] = (ulonglong)(puVar18 + 1);
    puVar18[1] = 0;
    *puVar18 = &PTR_LAB_14a37d348;
    puVar18[2] = lVar11;
    *(undefined4 *)(puVar18 + 3) = 0;
    *(undefined1 *)((longlong)puVar18 + 0x1c) = 1;
  }
  local_238 = 512.0 / (float)(int)local_420;
  fStack_234 = 512.0 / (float)(int)local_41c;
  uStack_230 = CONCAT44(120.0 / (float)(int)local_41c + -1.0,120.0 / (float)(int)local_420 + -1.0);
  FUN_145f62262();
  local_470 = 1;
  local_478 = (float *)((ulonglong)local_478._4_4_ << 0x20);
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_438,&local_238,DAT_14caf4c20);
  lVar11 = local_438;
  if (local_438 == 0) {
    FUN_145f62262();
    local_430 = '\x02';
    if (DAT_14caf4c19 != '\x03') {
      local_430 = DAT_14caf4c19;
    }
    local_438 = 0;
  }
  else {
    LOCK();
    *(int *)(local_438 + 8) = *(int *)(local_438 + 8) + 1;
    UNLOCK();
    if (local_438 != 0) {
      LOCK();
      puVar1 = (uint *)(local_438 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_438 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          local_458 = lVar16;
          bVar2 = *(byte *)(local_438 + 0xd);
          plVar12 = (longlong *)FUN_14001cc68(0x10,8);
          plVar12[1] = local_438;
          plVar14 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          lVar16 = local_458;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar12 = (longlong)plVar14;
              LOCK();
              bVar19 = plVar14 != DAT_14ca843c0;
              plVar13 = plVar12;
              if (bVar19) {
                plVar14 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar12 = (longlong)plVar13;
              LOCK();
              bVar19 = plVar13 != DAT_14ca843c8;
              plVar14 = plVar12;
              if (bVar19) {
                plVar13 = DAT_14ca843c8;
                plVar14 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar14;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
    FUN_145f62262();
    local_430 = '\x02';
    if (DAT_14caf4c19 != '\x03') {
      local_430 = DAT_14caf4c19;
    }
    LOCK();
    puVar1 = (uint *)(local_438 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_438 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_438 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = lVar11;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar19 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar19) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar19 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar19) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  if (lVar15 == 0) {
    lVar11 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 8);
    lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x50) + (longlong)*(int *)(lVar15 + 0xd4) * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar4,(longlong)*(int *)(lVar15 + 0xd4),1);
    }
  }
  FUN_145f947d2();
  local_478 = (float *)&local_438;
  FUN_1449cc26b(param_2,lVar11,lVar15,&DAT_14caf5400);
  local_238 = local_45c;
  uStack_230 = *(undefined8 *)(local_440 + 0x20 + local_450 * 0x40);
  local_228 = DAT_14c9c0d80;
  local_220 = local_448;
  local_218 = DAT_14c9c0d80;
  if (lVar6 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar16 + 8) + 0x50) +
              (longlong)*(int *)(lVar6 + 0xd4) * 8);
    if (lVar15 == 0) {
      lVar15 = FUN_1400bafc2(*(longlong *)(lVar16 + 8),(longlong)*(int *)(lVar6 + 0xd4),1);
    }
  }
  FUN_145e9a688();
  local_478 = &local_238;
  FUN_1449cc26b(param_2,lVar15,lVar6,&DAT_14caf5488);
  uVar5 = DAT_14caf6058;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar18 + 5;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x30);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar18 + 5;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar18 + 2) = 0;
  puVar18[3] = uVar5;
  *(undefined4 *)(puVar18 + 4) = 0;
  uVar5 = DAT_14caf6040;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar18 + 6;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x38);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar18 + 6;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb5b0;
  puVar18[2] = uVar5;
  puVar18[3] = 0;
  puVar18[4] = 4;
  puVar18[5] = &DAT_100000002;
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar18 + 2;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x18);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar18 + 2;
  }
  lVar6 = local_330;
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  if (local_330 != 0) {
    LOCK();
    puVar1 = (uint *)(local_330 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_330 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_330 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = lVar6;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar19 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar19) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar19 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar19) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435e6dae FUN_1435e6dae body=29 status=ok
// SIG undefined FUN_1435e6dae(void)

void FUN_1435e6dae(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435e6dcc FUN_1435e6dcc body=29 status=ok
// SIG undefined FUN_1435e6dcc(void)

undefined8 FUN_1435e6dcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435e6dea FUN_1435e6dea body=282 status=ok
// SIG undefined FUN_1435e6dea(void)

undefined8 * FUN_1435e6dea(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1435e6f04 FUN_1435e6f04 body=105 status=ok
// SIG undefined FUN_1435e6f04(void)

void FUN_1435e6f04(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1435e617c(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1435e617c(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435e6f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1435e6f6d FUN_1435e6f6d body=2161 status=ok
// SIG undefined FUN_1435e6f6d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435e6f6d(void)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  code *pcStack_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_88,&DAT_14caf3d10);
  if (cVar1 == '\0') {
    _DAT_14caf3d10 = 0;
    uRam000000014caf3d18 = 0;
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = (code *)0x0;
  local_b8 = (code *)0x0;
  pcStack_b0 = (code *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa01170,1,0);
  local_b8._0_4_ = 4;
  FUN_141471170(&DAT_14caf3d38,L"fx.GPUSimulationTextureSizeX",&DAT_14c7616c4,
                L"GPU Particle simulation texture X dimension (default=1024); set in project renderer settings, potentially overridden by device profile."
               );
  atexit(FUN_1435d0468);
  local_b8._0_4_ = 4;
  FUN_141471170(&DAT_14caf3d48,L"fx.GPUSimulationTextureSizeY",&DAT_14c7616c8,
                L"GPU Particle simulation texture Y dimension (default=1024); set in project renderer settings, potentially overridden by device profile."
               );
  atexit(FUN_1435d04ad);
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14caf3d58,L"fx.Cascade.GpuSpriteRenderingEnabled",&DAT_14c7616cc,
                L"Controls if gpu sprite rendering is enabled for Cascade");
  atexit(FUN_1435d04f2);
  local_b8._0_4_ = 4;
  FUN_141471170(&DAT_14caf3d68,L"fx.GPUSimulationDynTextureSizeXY",&DAT_14c7616d0,
                L"GPU Particle simulation texture XY dimension when dynamic resizing is enabled (default=16)"
               );
  atexit(FUN_1435d0537);
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14caf3d78,L"fx.Cascade.GpuSpriteDynamicAllocations",&DAT_14caf3d88,
                L"Controls if gpu sprite are allocated dynamically");
  atexit(FUN_1435d057c);
  local_88._0_4_ = 0x3d088889;
  local_b8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14caf3d90,L"r.GPUParticle.FixDeltaSeconds",&local_88,
                L"GPU particle fix delta seconds.");
  atexit(FUN_1435d05c1);
  local_88._0_4_ = 0x3dcccccd;
  local_b8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14caf3da8,L"r.GPUParticle.FixTolerance",&local_88,
                L"Delta second tolerance before switching to a fix delta seconds.");
  atexit(FUN_1435d0606);
  local_88._0_4_ = 3;
  local_b8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caf3dc0,L"r.GPUParticle.MaxNumIterations",&local_88,
                L"Max number of iteration when using a fix delta seconds.");
  atexit(FUN_1435d064b);
  local_88 = (code *)CONCAT44(local_88._4_4_,1);
  local_b8 = (code *)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_14078dbce(&DAT_14caf3dd8,L"r.GPUParticle.Simulate",&local_88,
                L"Enable or disable GPU particle simulation");
  atexit(FUN_1435d0690);
  local_80 = FUN_145fccdfe;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf3e78,&local_88);
  local_80 = FUN_145e39154;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf3f10,&local_88);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_1435e5766;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caf3f88,6,&local_88);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_1435e5780;
  local_88 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caf3ff8,6,&local_88);
  _DAT_14caf4008 = 0xffffffff;
  _DAT_14caf400c = 0x105;
  DAT_14caf400e = 0;
  DAT_14caf4010 = 0;
  DAT_14caf4000 = &PTR_FUN_14aa042f0;
  FUN_1463f045e();
  atexit(FUN_1435d06ed);
  local_98 = &LAB_1435d072e;
  local_a0 = &LAB_1435d071c;
  local_a8 = FUN_1435d0739;
  pcStack_b0 = FUN_1435d0786;
  local_b8 = FUN_1435d07b9;
  FUN_141585c60(&DAT_14caf4018,L"FGPUSpriteVertexFactory",
                L"/Engine/Private/ParticleGPUSpriteVertexFactory.ush",0x200a);
  atexit((_func_5014 *)&LAB_1435d0828);
  local_80 = FUN_145ef21da;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf4110,&local_88);
  local_80 = FUN_145ef0be0;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf41a8,&local_88);
  local_80 = FUN_145e46ec0;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf42d0,&local_88);
  local_80 = FUN_145dc22a2;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf43f8,&local_88);
  local_80 = FUN_14608f480;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4520,&local_88);
  local_80 = FUN_14608f6ec;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4648,&local_88);
  local_80 = FUN_146085702;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4770,&local_88);
  _DAT_14caf4788 = 0xffffffff;
  _DAT_14caf478c = 0x105;
  DAT_14caf478e = 0;
  DAT_14caf4790 = 0;
  DAT_14caf4780 = &PTR_FUN_14aa045e0;
  FUN_1463f0730();
  atexit(FUN_1435d0888);
  _DAT_14caf47a0 = 0xffffffff;
  _DAT_14caf47a4 = 0x105;
  DAT_14caf47a6 = 0;
  DAT_14caf47a8 = 0;
  DAT_14caf4798 = &PTR_FUN_14aa04640;
  FUN_1463f085a();
  atexit(FUN_1435d08b7);
  local_80 = FUN_145ef34b8;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf4838,&local_88);
  local_80 = FUN_146085968;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4960,&local_88);
  local_80 = FUN_146085bce;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4a88,&local_88);
  local_80 = FUN_146085e34;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4bb0,&local_88);
  _DAT_14caf4bc8 = 0xffffffff;
  _DAT_14caf4bcc = 0x105;
  DAT_14caf4bce = 0;
  DAT_14caf4bd0 = 0;
  DAT_14caf4bc0 = &PTR_FUN_14aa046b0;
  FUN_1463f0992();
  atexit(FUN_1435d2a11);
  local_80 = FUN_145f62262;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf4c60,&local_88);
  local_80 = FUN_145f94564;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4d88,&local_88);
  local_80 = FUN_145e9a41a;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf4eb0,&local_88);
  _DAT_14caf4ec8 = 0xffffffff;
  _DAT_14caf4ecc = 0x105;
  DAT_14caf4ece = 0;
  DAT_14caf4ed0 = 0;
  DAT_14caf4ec0 = &PTR_FUN_14aa04710;
  FUN_1463f0af6();
  atexit(FUN_1435d2a64);
  local_80 = FUN_145e085a2;
  local_88 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf4f60,&local_88);
  local_80 = FUN_145f5c3b8;
  local_88 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf5088,&local_88);
  uVar2 = (ulonglong)DAT_14c9ebd80;
  DAT_14caf5098 = DAT_14c9ebd80;
  DAT_14c9ebd80 = DAT_14c9ebd80 + 1;
  (&DAT_14cafe3e0)[uVar2 * 2] = FUN_1435dac96;
  (&DAT_14cafe3e8)[uVar2 * 2] = L"ParticleGPUSimulationGlobalPSOCollector";
  atexit((_func_5014 *)&LAB_1435db08b);
  local_88 = (code *)CONCAT71(local_88._1_7_,1);
  local_b8 = (code *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14caf50a0,L"fx.Cascade.UseVelocityForMotionBlur",&local_88,
                L"When enabled velocity will be used to approximate velocity for vertex factories that support this."
               );
  atexit(FUN_1435db0a4);
  local_88._0_4_ = 2;
  local_b8._0_4_ = 0x40;
  FUN_14078dbce(&DAT_14caf50b8,L"r.ParticleLightQuality",&local_88,
                L"0: No lights. 1:Only simple lights. 2:Simple+HQ lights");
  atexit(FUN_1435db7f5);
  local_88._0_4_ = 0;
  local_b8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caf50d0,L"fx.ParticleDefaultLightInverseExposureBlend",&local_88,
                L"Blend Factor used to blend between Intensity and Intensity / Exposure.");
  atexit(FUN_1435db83a);
  local_88 = (code *)CONCAT44(local_88._4_4_,0xffffffff);
  local_b8._0_4_ = 0;
  FUN_14078dbce(&DAT_14caf50f0,L"r.MeshParticle.MinDetailModeForMotionBlur",&local_88,
                L"Sets the minimum detail mode before mesh particles emit motion blur (Low  = 0, Med = 1, High = 2, Max = 3). Set to -1 to disable mesh particles motion blur entirely. Defaults to -1."
               );
  atexit(FUN_1435db87f);
  local_b8 = (code *)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_1415c789c(&DAT_14caf5118,L"fx.ParticleCollisionIgnoreInvisibleTime",&DAT_14c7616d4,
                L"The time a particle system component has to be invisible for to have all collision ignored. \n"
               );
  atexit(FUN_1435dbade);
  local_88 = (code *)&DAT_14a19662d;
  local_80 = (code *)CONCAT35(local_80._5_3_,4);
  FUN_14001a6c0(&local_88,1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e77ee FUN_1435e77ee body=41 status=ok
// SIG undefined FUN_1435e77ee(void)

void FUN_1435e77ee(void)

{
  DAT_14caf5a70 = 0;
  if (DAT_14caf5a68 != 0) {
    FUN_1400020a8();
  }
  FUN_1461bd316();
  return;
}



// FUNCTION 1435e7817 FUN_1435e7817 body=49 status=ok
// SIG undefined FUN_1435e7817(void)

void FUN_1435e7817(void)

{
  FUN_1435ffe79(DAT_14caf5a78,DAT_14caf5a80);
  if (DAT_14caf5a78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435e7854 FUN_1435e7854 body=69 status=ok
// SIG undefined FUN_1435e7854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435e7854(void)

{
  _DAT_14caf5b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435e7896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5b28,1);
  return;
}



// FUNCTION 1435e7899 FUN_1435e7899 body=69 status=ok
// SIG undefined FUN_1435e7899(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435e7899(void)

{
  _DAT_14caf5b30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435e78db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5b38,1);
  return;
}



// FUNCTION 1435e78de FUN_1435e78de body=667 status=ok
// SIG undefined FUN_1435e78de(void)

void FUN_1435e78de(void)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  uint *local_68;
  longlong local_60;
  int local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14080c2b4();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  iVar2 = DAT_14caf5a50;
  lVar1 = DAT_14caf5a28;
  if (DAT_14caf5a50 == 0) {
    uVar15 = 1;
    uVar13 = 0;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = &DAT_14caf5a38;
    if (DAT_14caf5a48 != (uint *)0x0) {
      puVar7 = DAT_14caf5a48;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar11 = DAT_14caf5a50 + 0x1e;
      if (-1 < DAT_14caf5a50 + -1) {
        iVar11 = DAT_14caf5a50 + -1;
      }
      uVar13 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar13) goto LAB_1435e7a70;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar15 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (DAT_14caf5a50 <= iVar6) {
      iVar6 = DAT_14caf5a50;
    }
  }
  if (iVar6 != DAT_14caf5a50) {
    puVar7 = &DAT_14caf5a38;
    if (DAT_14caf5a48 != (uint *)0x0) {
      puVar7 = DAT_14caf5a48;
    }
    iVar12 = DAT_14caf5a50 + 0x1e;
    if (-1 < DAT_14caf5a50 + -1) {
      iVar12 = DAT_14caf5a50 + -1;
    }
    iVar12 = iVar12 >> 5;
    local_68 = puVar7 + 1;
    uVar14 = 0xffffffff;
    do {
      lVar8 = FUN_1409ca440(lVar1 + (longlong)iVar6 * 0x18);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x798) = 0;
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      iVar6 = (int)uVar13;
      lVar8 = (longlong)iVar6;
      uVar4 = puVar7[lVar8] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar12;
        if (iVar12 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar12 <= iVar6) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = local_68[lVar8 + lVar10];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar8 == lVar10) goto LAB_1435e7a70;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar15 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1435e7a70:
  FUN_147c41bba();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  FUN_147c2ed02(&local_60);
  uVar13 = (ulonglong)local_50;
  if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
    do {
      lVar1 = *(longlong *)(local_60 + (uVar13 & 0xffffffff) * 8);
      if ((~*(byte *)(lVar1 + 0x9c) & 3) == 0) {
        bVar3 = *(byte *)(lVar1 + 0x9d);
        if ((bVar3 & 1) != 0) {
          if ((*(longlong *)(lVar1 + 0xb0) != 0) || (lVar8 = FUN_1448abda6(lVar1), lVar8 != 0))
          goto LAB_1435e7b02;
          bVar3 = *(byte *)(lVar1 + 0x9d);
        }
        *(byte *)(lVar1 + 0x9d) = bVar3 | 1;
        FUN_1401057d4(lVar1);
        FUN_14010586c(&DAT_14cad0140,lVar1);
      }
LAB_1435e7b02:
      uVar13 = (longlong)(int)local_50;
      do {
        uVar9 = uVar13;
        uVar13 = uVar9 + 1;
        local_50 = (uint)uVar13;
        if ((longlong)local_58 <= (longlong)uVar13) break;
      } while (*(longlong *)(local_60 + uVar13 * 8) == 0);
    } while ((-2 < (longlong)uVar9) && ((int)local_50 < local_58));
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e7b7a FUN_1435e7b7a body=1383 status=ok
// SIG undefined FUN_1435e7b7a(void)

void FUN_1435e7b7a(code *param_1)

{
  undefined ***pppuVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar16 = *(undefined8 *)param_1;
  pppuVar18 = *(undefined ****)(param_1 + 8);
  if (pppuVar18 != (undefined ***)0x0) {
    LOCK();
    *(int *)(pppuVar18 + 1) = *(int *)(pppuVar18 + 1) + 1;
    UNLOCK();
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_1435e7bcd;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_1435e7bd2;
      goto LAB_1435e7c1d;
    }
LAB_1435e7bd2:
    if (pppuVar18 == (undefined ***)0x0) goto LAB_1435e7fd2;
    LOCK();
    pppuVar1 = pppuVar18 + 1;
    *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
    UNLOCK();
    if (*(int *)pppuVar1 != 0) goto LAB_1435e7fd2;
    (*(code *)**pppuVar18)(pppuVar18);
    LOCK();
    piVar2 = (int *)((longlong)pppuVar18 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_1435e7fd2;
    ppuVar15 = *pppuVar18;
  }
  else {
LAB_1435e7bcd:
    if (iVar10 == 0x10) goto LAB_1435e7bd2;
LAB_1435e7c1d:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar6 + 0xc60), iVar10 == 2))
      goto LAB_1435e7bd2;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_1435e7bd2;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar4 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar4;
      if (puVar14 != (uint *)0x0) goto LAB_1435e7cf3;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_1436004c3);
        }
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar6 + 0x310);
        *(undefined8 *)(lVar6 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar4 = puVar13;
        FUN_140217a48(puVar4);
        puVar14 = (uint *)*puVar4;
LAB_1435e7cf3:
        puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar20 + 0x17);
        uVar17 = puVar14[0x12];
        if (puVar19 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar5 = *puVar14;
          *puVar14 = *puVar14 + uVar17 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar17) != 0xffffffff) break;
          puVar14 = (uint *)*puVar4;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar4 = puVar14;
          puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar20 + 0x17);
          uVar17 = 0;
          if (puVar19 <= puVar14 + 0x4000) {
            uVar17 = 1;
            goto LAB_1435e7d73;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_1435e7d73:
      *(uint **)(puVar14 + 0x10) = puVar19;
      puVar14[0x12] = uVar17;
      iVar10 = 0;
      FUN_1447247dc(puVar20,0);
      *puVar20 = &PTR_FUN_14aa074d8;
      puVar20[0x15] = uVar16;
      puVar20[0x16] = pppuVar18;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar17 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
          iVar10 = 0;
        }
        else {
          uVar21 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar21 = 5;
      }
      if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
      }
      puVar20[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar20[9] = puVar20;
      puVar20[10] = puVar20;
      lVar6 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar6 == 0) {
        uVar8 = 1;
        if ((char)uVar21 != '\x06') {
          uVar8 = uVar21;
        }
        uVar21 = uVar8;
        uVar16 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
        }
        uVar16 = *(undefined8 *)(lVar6 + 0x30);
      }
      puVar20[0xf] = uVar16;
      puVar20[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar20 + 0x1c) = iVar10;
      if (puVar20 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar20);
        LOCK();
        piVar2 = (int *)(puVar20 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar20)(puVar20,1);
        }
      }
      goto LAB_1435e7fd2;
    }
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aa07470;
    local_78[0] = FUN_143600412;
    local_50 = uVar16;
    local_48 = pppuVar18;
    FUN_14005a792(&DAT_14ca9a440,L"FRemoveParticlePerfStatsListenerCmd",&DAT_14caf5f80);
    if (local_78[0] == (code *)0x0) goto LAB_1435e7fd2;
    pppuVar18 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar18 = &local_58;
    }
    ppuVar15 = *pppuVar18;
  }
  (*(code *)ppuVar15[2])(pppuVar18);
LAB_1435e7fd2:
  (**(code **)(**(longlong **)param_1 + 0x10))();
  local_78[0] = param_1;
  FUN_147c41a9a();
  cVar9 = (**(code **)(**(longlong **)param_1 + 0x58))();
  if (cVar9 != '\0') {
    LOCK();
    DAT_14caf6068 = DAT_14caf6068 + -1;
    UNLOCK();
  }
  cVar9 = (**(code **)(**(longlong **)param_1 + 0x60))();
  if (cVar9 != '\0') {
    LOCK();
    DAT_14caf6060 = DAT_14caf6060 + -1;
    UNLOCK();
  }
  cVar9 = (**(code **)(**(longlong **)param_1 + 0x68))();
  if (cVar9 != '\0') {
    LOCK();
    DAT_14caf6064 = DAT_14caf6064 + -1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e80e2 FUN_1435e80e2 body=2695 status=ok
// SIG undefined FUN_1435e80e2(void)

void FUN_1435e80e2(void)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_218 [32];
  undefined1 **local_1f8;
  int local_1ec;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8 [16];
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138 [16];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (((DAT_14c7616fc & 1) == 0) || (DAT_14caf6068 < 1)) {
    if (DAT_14caf5b10 != 0) {
      do {
        puVar13 = DAT_14caf5b08;
        if (DAT_14caf5b08 == (undefined8 *)0x0) {
          puVar13 = &DAT_14caf5a88;
        }
        local_1e8 = puVar13[(longlong)(DAT_14caf5b10 + -1) * 2];
        local_1e0 = puVar13[(longlong)(DAT_14caf5b10 + -1) * 2 + 1];
        if (local_1e0 != 0) {
          LOCK();
          *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
          UNLOCK();
        }
        FUN_1435e7b7a(&local_1e8);
      } while (DAT_14caf5b10 != 0);
    }
    goto LAB_1435e8181;
  }
  local_b8 = (undefined8 *)0x0;
  puVar13 = DAT_14caf5b08;
  if (DAT_14caf5b08 == (undefined8 *)0x0) {
    puVar13 = &DAT_14caf5a88;
  }
  local_b0 = 0x800000000;
  lVar24 = (longlong)DAT_14caf5b10;
  iVar21 = 0;
  if (lVar24 != 0) {
    lVar22 = 0;
    do {
      plVar20 = *(longlong **)((longlong)puVar13 + lVar22);
      if (plVar20 == (longlong *)0x0) {
LAB_1435e8242:
        uVar16 = local_b0;
        lVar18 = (longlong)(int)local_b0;
        uVar4 = (int)local_b0 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,uVar4);
        if (local_b0._4_4_ < uVar4) {
          FUN_147c41994(local_138,uVar16 & 0xffffffff);
        }
        puVar7 = local_b8;
        if (local_b8 == (undefined8 *)0x0) {
          puVar7 = local_138;
        }
        puVar7[lVar18 * 2] = *(undefined8 *)((longlong)puVar13 + lVar22);
        lVar2 = *(longlong *)((longlong)puVar13 + lVar22 + 8);
        puVar7[lVar18 * 2 + 1] = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
      }
      else {
        lVar18 = *(longlong *)((longlong)puVar13 + lVar22 + 8);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 8) == 1)) {
          cVar3 = (**(code **)(*plVar20 + 0x70))();
          if (cVar3 == '\0') goto LAB_1435e8242;
          plVar20 = *(longlong **)((longlong)puVar13 + lVar22);
        }
        cVar3 = (**(code **)(*plVar20 + 0x18))();
        if (cVar3 == '\0') goto LAB_1435e8242;
      }
      lVar22 = lVar22 + 0x10;
      iVar21 = DAT_14caf5b10;
    } while (lVar24 * 0x10 != lVar22);
  }
  local_148 = 0;
  puVar13 = DAT_14caf5b08;
  if (DAT_14caf5b08 == (undefined8 *)0x0) {
    puVar13 = &DAT_14caf5a88;
  }
  FUN_147c41f3a(local_1c8,puVar13,iVar21);
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar21 = *(int *)(lVar24 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar21 != 2) {
      if (iVar21 != 1) goto LAB_1435e82fd;
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1435e8306;
      goto LAB_1435e8675;
    }
LAB_1435e8306:
    FUN_1436006ae(local_1c8);
  }
  else {
LAB_1435e82fd:
    if (iVar21 == 0x10) goto LAB_1435e8306;
LAB_1435e8675:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar21 = *(int *)(lVar24 + 0xc60), iVar21 == 2))
      goto LAB_1435e8306;
      if (iVar21 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_1435e8306;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar13 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar15 = (uint *)*puVar13;
      if (puVar15 != (uint *)0x0) goto LAB_1435e8753;
LAB_1435e86d5:
      uVar4 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar4 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar4 | 1;
        __tlregdtor(&LAB_1436004c3);
      }
      lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar8 = *(undefined4 **)(lVar24 + 0x310);
      *(undefined8 *)(lVar24 + 0x310) = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar8 = 0xffffffff;
      *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar13 = puVar8;
      FUN_140217a48(puVar13);
      puVar15 = (uint *)*puVar13;
LAB_1435e8753:
      uVar16 = *(longlong *)(puVar15 + 0x10) + 7;
      uVar4 = puVar15[0x12];
LAB_1435e8770:
      puVar7 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
      if (puVar7 + 0x27 <= puVar15 + 0x4000) {
        *(undefined8 **)(puVar15 + 0x10) = puVar7 + 0x27;
        puVar15[0x12] = uVar4 + 1;
        FUN_1447247dc(puVar7,0);
        *puVar7 = &PTR_FUN_14aa07558;
        puVar7[0x25] = 0;
        if (local_148 == 0) {
          plVar20 = local_1c8;
          plVar19 = puVar7 + 0x15;
          for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
            *plVar19 = *plVar20;
            plVar20 = plVar20 + 1;
            plVar19 = plVar19 + 1;
          }
        }
        puVar7[0x25] = local_148;
        local_148 = 0;
        *(undefined4 *)(puVar7 + 0x26) = (undefined4)local_140;
        *(undefined4 *)((longlong)puVar7 + 0x134) = local_140._4_4_;
        local_140 = 0x800000000;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar4 = DAT_14c7585c8 >> 10 & 3;
          iVar21 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar4 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar21 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
        }
        puVar7[0xe] = LowLevelTasks::
                      TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                      TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                      ::vftable;
        puVar7[9] = puVar7;
        puVar7[10] = puVar7;
        lVar24 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar24 == 0) {
          uVar14 = 1;
          if ((char)uVar16 != '\x06') {
            uVar14 = uVar16;
          }
          uVar16 = uVar14;
          uVar9 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar24 + 0x38) >> 0x3b;
          }
          uVar9 = *(undefined8 *)(lVar24 + 0x30);
        }
        puVar7[0xf] = uVar9;
        puVar7[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar7 + 0x1c) = iVar21;
        if (puVar7 == (undefined8 *)0x0) {
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
          UNLOCK();
          local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar7);
          LOCK();
          piVar1 = (int *)(puVar7 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
        goto LAB_1435e8310;
      }
      *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
      LOCK();
      uVar10 = *puVar15;
      *puVar15 = *puVar15 + uVar4 + 1;
      UNLOCK();
      if ((uVar10 ^ uVar4) == 0xffffffff) goto code_r0x0001435e8796;
      goto LAB_1435e86d5;
    }
    local_a8[0] = (undefined1 *)0x0;
    local_98 = (longlong *)FUN_14001cc68(0x98,8);
    *local_98 = (longlong)&PTR_LAB_14aa074f0;
    local_98[0x11] = 0;
    if (local_148 == 0) {
      plVar20 = local_1c8;
      plVar19 = local_98 + 1;
      for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
        *plVar19 = *plVar20;
        plVar20 = plVar20 + 1;
        plVar19 = plVar19 + 1;
      }
    }
    local_98[0x11] = local_148;
    local_148 = 0;
    *(undefined4 *)(local_98 + 0x12) = (undefined4)local_140;
    *(undefined4 *)((longlong)local_98 + 0x94) = local_140._4_4_;
    local_140 = 0x800000000;
    if (local_98 + 1 != (longlong *)0x0) {
      local_a8[0] = &LAB_1436008b6;
    }
    local_1f8 = local_a8;
    FUN_14005a792(&DAT_14ca9a440,L"FParticlePerfStatsListenersRTTick",&DAT_14caf5f84);
    if (local_a8[0] != (undefined1 *)0x0) {
      plVar20 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar20 = local_88;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
  }
LAB_1435e8310:
  FUN_145cfed70(local_1c8);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  if (DAT_14caf5a50 == 0) {
    uVar23 = 1;
    uVar16 = 0;
    iVar21 = 0;
    iVar17 = 0;
  }
  else {
    puVar15 = &DAT_14caf5a38;
    if (DAT_14caf5a48 != (uint *)0x0) {
      puVar15 = DAT_14caf5a48;
    }
    uVar4 = *puVar15;
    if (uVar4 == 0) {
      iVar21 = DAT_14caf5a50 + 0x1e;
      if (-1 < DAT_14caf5a50 + -1) {
        iVar21 = DAT_14caf5a50 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar21 = 0;
      do {
        if (uVar14 == uVar16) goto LAB_1435e85cc;
        iVar21 = iVar21 + 0x20;
        uVar4 = puVar15[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar16 = 0;
      iVar21 = 0;
    }
    uVar23 = (ulonglong)(-uVar4 & uVar4);
    uVar14 = uVar23 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar17 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    if (DAT_14caf5a50 <= iVar17) {
      iVar17 = DAT_14caf5a50;
    }
  }
  if (iVar17 < DAT_14caf5a50) {
    uVar4 = 0xffffffff;
    do {
      lVar24 = (longlong)iVar17;
      iVar11 = *(int *)(DAT_14caf5a28 + 4 + lVar24 * 0x18);
      if ((((iVar11 == 0) || (uVar10 = *(uint *)(DAT_14caf5a28 + lVar24 * 0x18), (int)uVar10 < 0))
          || (DAT_14c9647dc <= (int)uVar10)) ||
         (((plVar20 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
           plVar20 == (longlong *)0x0 || ((int)plVar20[2] != iVar11)) ||
          ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) {
        puVar7 = (undefined8 *)(DAT_14caf5a28 + lVar24 * 0x18 + 8);
        puVar13 = (undefined8 *)*puVar7;
LAB_1435e8539:
        *puVar7 = 0;
        uVar10 = DAT_14caf5a80;
        lVar22 = (longlong)(int)DAT_14caf5a80;
        DAT_14caf5a80 = DAT_14caf5a80 + 1;
        local_1ec = iVar21;
        if (DAT_14caf5a84 < DAT_14caf5a80) {
          FUN_147c42026(uVar10);
        }
        *(undefined8 **)(DAT_14caf5a78 + lVar22 * 8) = puVar13;
        puVar13 = DAT_14caf5b08;
        if (DAT_14caf5b08 == (undefined8 *)0x0) {
          puVar13 = &DAT_14caf5a88;
        }
        lVar22 = (longlong)DAT_14caf5b10;
        if (lVar22 != 0) {
          lVar18 = 0;
          do {
            (**(code **)(**(longlong **)((longlong)puVar13 + lVar18) + 0x30))
                      (*(longlong **)((longlong)puVar13 + lVar18),DAT_14caf5a28 + lVar24 * 0x18);
            lVar18 = lVar18 + 0x10;
          } while (lVar22 * 0x10 != lVar18);
        }
        FUN_147c420b4(iVar17);
        iVar21 = local_1ec;
      }
      else {
        puVar13 = *(undefined8 **)(DAT_14caf5a28 + 8 + lVar24 * 0x18);
        if (*plVar20 == 0) {
          puVar7 = (undefined8 *)(DAT_14caf5a28 + lVar24 * 0x18 + 8);
          goto LAB_1435e8539;
        }
        *puVar13 = 0;
        puVar13[1] = 0;
        LOCK();
        puVar13[2] = 0;
        UNLOCK();
        puVar13[3] = 0;
        LOCK();
        puVar13[4] = 0;
        UNLOCK();
        LOCK();
        puVar13[5] = 0;
        UNLOCK();
        puVar13[6] = 0;
      }
      uVar4 = uVar4 & ~(uint)uVar23;
      puVar15 = DAT_14caf5a48;
      if (DAT_14caf5a48 == (uint *)0x0) {
        puVar15 = &DAT_14caf5a38;
      }
      iVar17 = (int)uVar16;
      lVar24 = (longlong)iVar17;
      uVar10 = puVar15[lVar24] & uVar4;
      if (uVar10 == 0) {
        iVar11 = DAT_14caf5a50 + 0x1e;
        if (-1 < DAT_14caf5a50 + -1) {
          iVar11 = DAT_14caf5a50 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar17) {
          iVar12 = iVar17;
        }
        if (iVar11 <= iVar17) break;
        lVar22 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar10 = puVar15[lVar24 + lVar22 + 1];
          if (uVar10 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar12 - lVar24 == lVar22) goto LAB_1435e85cc;
        }
        uVar16 = (ulonglong)(iVar17 + (int)lVar22 + 1);
        uVar4 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar10 & uVar10);
      uVar14 = uVar23 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar17 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    } while (iVar17 < DAT_14caf5a50);
  }
LAB_1435e85cc:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  puVar13 = local_b8;
  if (local_b8 == (undefined8 *)0x0) {
    puVar13 = local_138;
  }
  if ((longlong)(int)local_b0 != 0) {
    puVar7 = puVar13 + (longlong)(int)local_b0 * 2;
    do {
      local_1d8 = *puVar13;
      local_1d0 = puVar13[1];
      if (local_1d0 != 0) {
        LOCK();
        *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
        UNLOCK();
      }
      FUN_1435e7b7a(&local_1d8);
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar7);
  }
  FUN_145cfed70(local_138);
LAB_1435e8181:
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001435e8796:
  puVar15 = (uint *)*puVar13;
  *puVar15 = 0xffffffff;
  *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
  puVar15[0x12] = 0;
  *puVar13 = puVar15;
  uVar16 = (longlong)puVar15 + 0x5f;
  uVar4 = 0;
  goto LAB_1435e8770;
}



// FUNCTION 1435e8b6a FUN_1435e8b6a body=604 status=ok
// SIG undefined FUN_1435e8b6a(void)

void FUN_1435e8b6a(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  LPCRITICAL_SECTION local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  iVar2 = DAT_14caf5a50;
  local_60 = lpCriticalSection;
  if (DAT_14caf5a50 == 0) {
    uVar13 = 1;
    uVar8 = 0;
    iVar9 = 0;
    iVar3 = 0;
  }
  else {
    puVar12 = &DAT_14caf5a38;
    if (DAT_14caf5a48 != (uint *)0x0) {
      puVar12 = DAT_14caf5a48;
    }
    uVar10 = *puVar12;
    if (uVar10 == 0) {
      iVar3 = DAT_14caf5a50 + 0x1e;
      if (-1 < DAT_14caf5a50 + -1) {
        iVar3 = DAT_14caf5a50 + -1;
      }
      uVar8 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar8;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar8) goto LAB_1435e8c3a;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar12[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar3 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (DAT_14caf5a50 <= iVar3) {
      iVar3 = DAT_14caf5a50;
    }
  }
  if (iVar3 != DAT_14caf5a50) {
    uVar10 = 0xffffffff;
    do {
      lVar14 = (longlong)iVar3 * 0x18 + DAT_14caf5a28;
      uVar4 = FUN_14001cc68(0x2b8,0x10);
      FUN_147c2f11e(uVar4);
      local_58 = lVar14;
      FUN_147c4275e((longlong *)(param_1 + 0x48),&local_4c,&local_58);
      lVar14 = *(longlong *)(param_1 + 0x48);
      lVar11 = *(longlong *)(lVar14 + 8 + (longlong)local_4c * 0x18);
      *(undefined8 *)(lVar14 + 8 + (longlong)local_4c * 0x18) = uVar4;
      if (lVar11 != 0) {
        FUN_147c42cfe(lVar11);
        FUN_1400020a8(lVar11);
      }
      uVar10 = uVar10 & ~(uint)uVar13;
      puVar12 = DAT_14caf5a48;
      if (DAT_14caf5a48 == (uint *)0x0) {
        puVar12 = &DAT_14caf5a38;
      }
      iVar3 = (int)uVar8;
      lVar14 = (longlong)iVar3;
      uVar7 = puVar12[lVar14] & uVar10;
      if (uVar7 == 0) {
        iVar5 = DAT_14caf5a50 + 0x1e;
        if (-1 < DAT_14caf5a50 + -1) {
          iVar5 = DAT_14caf5a50 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar3 < iVar5) {
          lVar11 = 0;
          do {
            uVar7 = puVar12[lVar14 + lVar11 + 1];
            if (uVar7 != 0) {
              uVar8 = (ulonglong)(iVar3 + (int)lVar11 + 1);
              uVar10 = 0xffffffff;
              goto LAB_1435e8d6b;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar6 - lVar14 != lVar11);
          uVar10 = 0xffffffff;
          iVar3 = iVar6;
        }
        uVar8 = (ulonglong)(iVar3 + 1);
        iVar3 = DAT_14caf5a50;
      }
      else {
LAB_1435e8d6b:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar3 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (DAT_14caf5a50 <= iVar3) {
          iVar3 = DAT_14caf5a50;
        }
      }
    } while (iVar3 != iVar2);
  }
LAB_1435e8c3a:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435e8c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(local_60);
  return;
}



// FUNCTION 1435e8dc8 FUN_1435e8dc8 body=787 status=ok
// SIG undefined FUN_1435e8dc8(void)

undefined8 FUN_1435e8dc8(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  uint *local_a8;
  LPCRITICAL_SECTION local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  puVar14 = (uint *)(param_1 + 0x58);
  uVar15 = *(uint *)(param_1 + 0x70);
  uVar17 = (ulonglong)uVar15;
  if (uVar15 == 0) {
    uVar16 = 1;
    uVar11 = 0;
    iVar9 = 0;
    uVar3 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar4 = puVar14;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar9 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar9 = uVar15 - 1;
      }
      uVar11 = 0;
      uVar16 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar16 = uVar11;
      }
      iVar9 = 0;
      do {
        if (uVar16 == uVar11) goto LAB_1435e909a;
        iVar9 = iVar9 + 0x20;
        uVar3 = puVar4[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar11 = 0;
      iVar9 = 0;
    }
    uVar16 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar3 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar3) {
      uVar3 = uVar15;
    }
  }
  if (uVar3 != uVar15) {
    uVar15 = 0xffffffff;
    local_b0 = uVar17;
    local_a0 = lpCriticalSection;
    do {
      uVar1 = local_50;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)uVar3 * 0x18);
      if ((((puVar4[1] == 0) || (uVar3 = *puVar4, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
         || (((plVar8 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != puVar4[1])) ||
             (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (*plVar8 == 0)))))) {
        lVar12 = (longlong)(int)local_50;
        uVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar3);
        if (local_50._4_4_ < uVar3) {
          local_a8 = puVar14;
          FUN_147c42efa(local_98,uVar1 & 0xffffffff);
          puVar14 = local_a8;
        }
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_98;
        }
        *(undefined8 *)(puVar5 + lVar12 * 8) = *(undefined8 *)puVar4;
        uVar17 = local_b0;
      }
      else if (*(longlong *)(*plVar8 + 0x798) != 0) {
        FUN_147c2ee10(*(undefined8 *)(puVar4 + 2));
        uVar17 = local_b0;
      }
      uVar15 = uVar15 & ~(uint)uVar16;
      puVar4 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar4 = puVar14;
      }
      uVar2 = *(uint *)(param_1 + 0x70);
      iVar10 = (int)uVar11;
      lVar12 = (longlong)iVar10;
      uVar3 = puVar4[lVar12] & uVar15;
      if (uVar3 == 0) {
        iVar6 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar6 = uVar2 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar13 = 0;
          do {
            uVar3 = puVar4[lVar12 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar11 = (ulonglong)(iVar10 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1435e8feb;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar11 = (ulonglong)(iVar10 + 1);
        uVar17 = local_b0;
        uVar3 = uVar2;
      }
      else {
LAB_1435e8feb:
        uVar16 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar3 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)uVar17);
    lVar12 = (longlong)(int)local_50;
    puVar5 = local_98;
    if (local_58 != (undefined1 *)0x0) {
      puVar5 = local_58;
    }
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        FUN_147c42fee((longlong *)(param_1 + 0x48),*(undefined8 *)(puVar5 + lVar13));
        lVar13 = lVar13 + 8;
      } while (lVar12 * 8 != lVar13);
    }
    lpCriticalSection = local_a0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1435e909a:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1435e90dc FUN_1435e90dc body=833 status=ok
// SIG undefined FUN_1435e90dc(void)

void FUN_1435e90dc(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  uint *local_a8;
  LPCRITICAL_SECTION local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  puVar14 = (uint *)(param_1 + 0x58);
  uVar9 = *(uint *)(param_1 + 0x70);
  uVar13 = (ulonglong)uVar9;
  if (uVar9 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar10 = 0;
    uVar3 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar4 = puVar14;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar10 = uVar9 + 0x1e;
      if (-1 < (int)(uVar9 - 1)) {
        iVar10 = uVar9 - 1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_1435e93dd;
        iVar10 = iVar10 + 0x20;
        uVar3 = puVar4[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar17 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar9 <= (int)uVar3) {
      uVar3 = uVar9;
    }
  }
  if (uVar3 != uVar9) {
    uVar9 = 0xffffffff;
    local_b0 = uVar13;
    local_a8 = puVar14;
    local_a0 = lpCriticalSection;
    do {
      uVar1 = local_50;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)uVar3 * 0x18);
      if ((((puVar4[1] == 0) || (uVar3 = *puVar4, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
         || (((plVar8 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != puVar4[1])) ||
             (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (*plVar8 == 0)))))) {
        lVar11 = (longlong)(int)local_50;
        uVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar3);
        if (local_50._4_4_ < uVar3) {
          FUN_147c42efa(local_98,uVar1 & 0xffffffff);
          uVar13 = local_b0;
          puVar14 = local_a8;
        }
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_98;
        }
        *(undefined8 *)(puVar5 + lVar11 * 8) = *(undefined8 *)puVar4;
      }
      else {
        lVar11 = *(longlong *)(*plVar8 + 0x798);
        if (lVar11 != 0) {
          lVar12 = *(longlong *)(puVar4 + 2);
          FUN_147c2efd2(lVar12 + 0x100,lVar11);
          FUN_147c2f0ba(lVar12 + 0x1e0,lVar11);
          uVar13 = local_b0;
          puVar14 = local_a8;
        }
      }
      uVar9 = uVar9 & ~(uint)uVar15;
      puVar4 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar4 = puVar14;
      }
      uVar2 = *(uint *)(param_1 + 0x70);
      iVar16 = (int)uVar17;
      lVar11 = (longlong)iVar16;
      uVar3 = puVar4[lVar11] & uVar9;
      if (uVar3 == 0) {
        iVar6 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar6 = uVar2 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar16) {
          iVar7 = iVar16;
        }
        uVar13 = local_b0;
        if (iVar16 < iVar6) {
          lVar12 = 0;
          do {
            uVar3 = puVar4[lVar11 + lVar12 + 1];
            if (uVar3 != 0) {
              uVar17 = (ulonglong)(iVar16 + (int)lVar12 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1435e932d;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar9 = 0xffffffff;
          iVar16 = iVar7;
        }
        uVar17 = (ulonglong)(iVar16 + 1);
        uVar3 = uVar2;
      }
      else {
LAB_1435e932d:
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)uVar13);
    lVar11 = (longlong)(int)local_50;
    puVar5 = local_98;
    if (local_58 != (undefined1 *)0x0) {
      puVar5 = local_58;
    }
    if (lVar11 != 0) {
      lVar12 = 0;
      do {
        FUN_147c42fee((longlong *)(param_1 + 0x48),*(undefined8 *)(puVar5 + lVar12));
        lVar12 = lVar12 + 8;
      } while (lVar11 * 8 != lVar12);
    }
    lpCriticalSection = local_a0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1435e93dd:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435e941e FUN_1435e941e body=2457 status=ok
// SIG undefined FUN_1435e941e(void)

void FUN_1435e941e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  DWORD DVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  double dVar21;
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
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_128 [44];
  DWORD local_fc;
  uint local_f8;
  int local_f4;
  int *local_f0;
  uint *local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined2 *local_b8;
  ulonglong uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14080c2b4();
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  puVar4 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_2 + 0x10))(param_2,L",**** Particle Performance Stats",*puVar4,puVar4 + 4);
  puVar4 = (undefined1 *)FUN_1400d7a00();
  (**(code **)(*param_2 + 0x10))
            (param_2,
             L",Name,Average PerFrame GameThread,Average PerInstance GameThread,Average PerFrame RenderThread,Average PerInstance RenderThread,NumFrames,Total Instances,Total Tick GameThread,Total Tick Concurrent,Total Finalize,Total End Of Frame,Total Render Update,Total Get Dynamic Mesh Elements,Max PerFrame GameThread,Max Range PerFrame GameThread,Max PerFrame RenderThread,Max Range PerFrame RenderThread"
             ,*puVar4,puVar4 + 4);
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    puVar4 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_2 + 0x10))(param_2,L",** Per World Stats",*puVar4);
    puVar6 = (uint *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar19 = 0;
      iVar16 = 0;
      iVar7 = 0;
    }
    else {
      puVar11 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar11 = puVar6;
      }
      uVar13 = *puVar11;
      if (uVar13 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar19 = 0;
        uVar14 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar14 = uVar19;
        }
        iVar16 = 0;
        do {
          if (uVar14 == uVar19) goto LAB_1435e9d54;
          iVar16 = iVar16 + 0x20;
          uVar13 = puVar11[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar19 = 0;
        iVar16 = 0;
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13);
      uVar5 = uVar14 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar7 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar7) {
        iVar7 = iVar2;
      }
    }
    if (iVar7 < iVar2) {
      local_f0 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
      ;
      uVar13 = 0xffffffff;
      local_e8 = puVar6;
      local_e0 = param_1;
      local_d8 = param_2;
      do {
        lVar18 = *(longlong *)(param_1 + 0x48);
        lVar12 = (longlong)iVar7;
        iVar7 = *(int *)(lVar18 + 4 + lVar12 * 0x18);
        if (((((iVar7 != 0) && (uVar8 = *(uint *)(lVar18 + lVar12 * 0x18), -1 < (int)uVar8)) &&
             ((int)uVar8 < DAT_14c9647dc)) &&
            ((plVar17 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar7)))) &&
           (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (*plVar17 != 0)))) {
          puVar11 = *(uint **)(lVar18 + 8 + lVar12 * 0x18);
          local_d0 = *(undefined8 *)(*plVar17 + 0x18);
          FUN_1400021e4(&local_d0,&local_c8);
          if (puVar11 != (uint *)0x0) {
            if ((DAT_14c86a9f8 == '\x01') && (*local_f0 == 1)) {
              local_fc = FUN_140ad26c0();
              DVar3 = GetCurrentThreadId();
              if ((local_fc != DVar3) && ((DAT_14c86a9fc == 0 && (*local_f0 == 1)))) {
                FUN_140ad26c0();
                GetCurrentThreadId();
              }
            }
            if ((puVar11[0x40] != 0 || *puVar11 != 0) &&
               (*(longlong *)(puVar11 + 0x42) != 0 || *(longlong *)(puVar11 + 0x32) != 0)) {
              bVar20 = (longlong)uStack_b0 < 0;
              uStack_b0 = uStack_b0 & 0xffffffff00000000;
              if (bVar20) {
                FUN_1446f8c06(&local_b8,0);
              }
              if (local_b8 != (undefined2 *)0x0) {
                *local_b8 = 0;
              }
              puVar15 = &DAT_149dfb77a;
              if (local_c0 != 0) {
                puVar15 = local_c8;
              }
              FUN_1407c8b48(&local_b8,&DAT_149e00c18,puVar15);
              dVar34 = 0.0;
              dVar21 = 0.0;
              if (*puVar11 != 0) {
                uVar5 = (ulonglong)
                        (*(longlong *)(puVar11 + 0x3a) + *(longlong *)(puVar11 + 0x36) +
                        *(longlong *)(puVar11 + 0x3c) +
                        *(longlong *)(puVar11 + 0x38) + *(longlong *)(puVar11 + 0x34) +
                        *(longlong *)(puVar11 + 0x3e)) / (ulonglong)*puVar11;
                auVar22._8_4_ = (int)(uVar5 >> 0x20);
                auVar22._0_8_ = uVar5;
                auVar22._12_4_ = 0x45300000;
                dVar21 = ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
                         (auVar22._8_8_ - 1.9342813113834067e+25);
              }
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)(dVar21 * DAT_14c83f418 * 1000.0 * 1000.0));
              if (*(longlong *)(puVar11 + 0x32) != 0) {
                uVar5 = (ulonglong)
                        (*(longlong *)(puVar11 + 0x3a) + *(longlong *)(puVar11 + 0x36) +
                        *(longlong *)(puVar11 + 0x3c) +
                        *(longlong *)(puVar11 + 0x38) + *(longlong *)(puVar11 + 0x34) +
                        *(longlong *)(puVar11 + 0x3e)) / *(ulonglong *)(puVar11 + 0x32);
                auVar35._8_4_ = (int)(uVar5 >> 0x20);
                auVar35._0_8_ = uVar5;
                auVar35._12_4_ = 0x45300000;
                dVar34 = ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
                         (auVar35._8_8_ - 1.9342813113834067e+25);
              }
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)(dVar34 * DAT_14c83f418 * 1000.0 * 1000.0));
              dVar34 = 0.0;
              dVar21 = 0.0;
              if ((ulonglong)puVar11[0x40] != 0) {
                uVar5 = (ulonglong)(*(longlong *)(puVar11 + 0x46) + *(longlong *)(puVar11 + 0x44)) /
                        (ulonglong)puVar11[0x40];
                auVar23._8_4_ = (int)(uVar5 >> 0x20);
                auVar23._0_8_ = uVar5;
                auVar23._12_4_ = 0x45300000;
                dVar21 = ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
                         (auVar23._8_8_ - 1.9342813113834067e+25);
              }
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)(dVar21 * DAT_14c83f418 * 1000.0 * 1000.0));
              if (*(ulonglong *)(puVar11 + 0x42) != 0) {
                uVar5 = (ulonglong)(*(longlong *)(puVar11 + 0x46) + *(longlong *)(puVar11 + 0x44)) /
                        *(ulonglong *)(puVar11 + 0x42);
                auVar36._8_4_ = (int)(uVar5 >> 0x20);
                auVar36._0_8_ = uVar5;
                auVar36._12_4_ = 0x45300000;
                dVar34 = ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
                         (auVar36._8_8_ - 1.9342813113834067e+25);
              }
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)(dVar34 * DAT_14c83f418 * 1000.0 * 1000.0));
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,*puVar11);
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,puVar11[0x32]);
              uVar1 = *(undefined8 *)(puVar11 + 0x34);
              auVar24._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
              auVar24._0_8_ = uVar1;
              auVar24._12_4_ = 0x45300000;
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)
                            ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                             (auVar24._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0 *
                            1000.0));
              uVar1 = *(undefined8 *)(puVar11 + 0x36);
              auVar25._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
              auVar25._0_8_ = uVar1;
              auVar25._12_4_ = 0x45300000;
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)
                            ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                             (auVar25._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0 *
                            1000.0));
              uVar1 = *(undefined8 *)(puVar11 + 0x38);
              auVar26._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
              auVar26._0_8_ = uVar1;
              auVar26._12_4_ = 0x45300000;
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)
                            ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                             (auVar26._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0 *
                            1000.0));
              uVar1 = *(undefined8 *)(puVar11 + 0x3a);
              auVar27._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
              auVar27._0_8_ = uVar1;
              auVar27._12_4_ = 0x45300000;
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)
                            ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                             (auVar27._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0 *
                            1000.0));
              uVar1 = *(undefined8 *)(puVar11 + 0x44);
              auVar28._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
              auVar28._0_8_ = uVar1;
              auVar28._12_4_ = 0x45300000;
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)
                            ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                             (auVar28._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0 *
                            1000.0));
              uVar1 = *(undefined8 *)(puVar11 + 0x46);
              auVar29._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
              auVar29._0_8_ = uVar1;
              auVar29._12_4_ = 0x45300000;
              FUN_1407c8b48(&local_b8,&DAT_14aa06e82,
                            (longlong)
                            ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                             (auVar29._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0 *
                            1000.0));
              if ((int)puVar11[0x18] < 1) {
                dVar21 = 0.0;
              }
              else {
                puVar6 = *(uint **)(puVar11 + 0x16);
                if (*(uint **)(puVar11 + 0x16) == (uint *)0x0) {
                  puVar6 = puVar11 + 2;
                }
                uVar1 = *(undefined8 *)puVar6;
                auVar30._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
                auVar30._0_8_ = uVar1;
                auVar30._12_4_ = 0x45300000;
                dVar21 = ((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                         (auVar30._8_8_ - 1.9342813113834067e+25);
              }
              local_f8 = uVar13;
              local_f4 = iVar16;
              FUN_1407c8b48(&local_b8,L",%u,[ ",(longlong)(dVar21 * DAT_14c83f418 * 1000.0 * 1000.0)
                           );
              puVar6 = puVar11 + 2;
              if (*(uint **)(puVar11 + 0x16) != (uint *)0x0) {
                puVar6 = *(uint **)(puVar11 + 0x16);
              }
              uVar13 = puVar11[0x18];
              if ((longlong)(int)uVar13 != 0) {
                lVar18 = 0;
                do {
                  uVar1 = *(undefined8 *)((longlong)puVar6 + lVar18);
                  auVar31._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
                  auVar31._0_8_ = uVar1;
                  auVar31._12_4_ = 0x45300000;
                  FUN_1407c8b48(&local_b8,&DAT_14aa06e98,
                                (longlong)
                                ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                                 (auVar31._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0
                                * 1000.0));
                  lVar18 = lVar18 + 8;
                } while ((longlong)(int)uVar13 * 8 != lVar18);
              }
              FUN_1400020e8(&local_b8,&DAT_149e2b50c,1);
              if ((int)puVar11[0x76] < 1) {
                dVar21 = 0.0;
              }
              else {
                puVar6 = puVar11 + 0x60;
                if (*(uint **)(puVar11 + 0x74) != (uint *)0x0) {
                  puVar6 = *(uint **)(puVar11 + 0x74);
                }
                uVar1 = *(undefined8 *)puVar6;
                auVar32._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
                auVar32._0_8_ = uVar1;
                auVar32._12_4_ = 0x45300000;
                dVar21 = ((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                         (auVar32._8_8_ - 1.9342813113834067e+25);
              }
              FUN_1407c8b48(&local_b8,L",%u,[ ",(longlong)(dVar21 * DAT_14c83f418 * 1000.0 * 1000.0)
                           );
              puVar6 = puVar11 + 0x48;
              if (*(uint **)(puVar11 + 0x5c) != (uint *)0x0) {
                puVar6 = *(uint **)(puVar11 + 0x5c);
              }
              uVar13 = puVar11[0x5e];
              if ((longlong)(int)uVar13 != 0) {
                lVar18 = 0;
                do {
                  uVar1 = *(undefined8 *)((longlong)puVar6 + lVar18);
                  auVar33._8_4_ = (int)((ulonglong)uVar1 >> 0x20);
                  auVar33._0_8_ = uVar1;
                  auVar33._12_4_ = 0x45300000;
                  FUN_1407c8b48(&local_b8,&DAT_14aa06e98,
                                (longlong)
                                ((((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
                                 (auVar33._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0
                                * 1000.0));
                  lVar18 = lVar18 + 8;
                } while ((longlong)(int)uVar13 * 8 != lVar18);
              }
              FUN_1400020e8(&local_b8,&DAT_149e2b50c,1);
              uVar13 = local_f8;
              puVar15 = &DAT_149dfb77a;
              if ((int)uStack_b0 != 0) {
                puVar15 = local_b8;
              }
              puVar4 = (undefined1 *)FUN_1400d7a00();
              (**(code **)(*local_d8 + 0x10))(local_d8,puVar15,*puVar4,puVar4 + 4);
              puVar6 = local_e8;
              param_1 = local_e0;
              iVar16 = local_f4;
            }
          }
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar2 = *(int *)(param_1 + 0x70);
        }
        uVar13 = uVar13 & ~(uint)uVar14;
        puVar11 = *(uint **)(param_1 + 0x68);
        if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
          puVar11 = puVar6;
        }
        iVar7 = (int)uVar19;
        lVar18 = (longlong)iVar7;
        uVar8 = puVar11[lVar18] & uVar13;
        if (uVar8 == 0) {
          iVar9 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar9 = iVar2 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar9 <= iVar7) break;
          lVar12 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar8 = puVar11[lVar18 + lVar12 + 1];
            if (uVar8 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar10 - lVar18 == lVar12) goto LAB_1435e9d45;
          }
          uVar19 = (ulonglong)(iVar7 + (int)lVar12 + 1);
          uVar13 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar5 = uVar14 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar7 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
LAB_1435e9d45:
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1435e9d54:
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e9db8 FUN_1435e9db8 body=240 status=ok
// SIG undefined FUN_1435e9db8(void)

void FUN_1435e9db8(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14caf6048 = &PTR_FUN_14aa07570;
  FUN_144725486(&DAT_14caf6048);
  lVar4 = DAT_14caf6058;
  DAT_14caf6048 = &PTR_FUN_14a38cff0;
  if (DAT_14caf6058 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14caf6058 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  DAT_14caf6048 = &PTR_FUN_14a38cd70;
  DAT_14caf6056 = 2;
  if ((DAT_14caf6050 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1435e9ea8 FUN_1435e9ea8 body=240 status=ok
// SIG undefined FUN_1435e9ea8(void)

void FUN_1435e9ea8(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14caf5b40 = &PTR_FUN_14aa075a0;
  FUN_144725486(&DAT_14caf5b40);
  lVar4 = DAT_14caf5b50;
  DAT_14caf5b40 = &PTR_FUN_14a38cff0;
  if (DAT_14caf5b50 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14caf5b50 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  DAT_14caf5b40 = &PTR_FUN_14a38cd70;
  DAT_14caf5b4e = 2;
  if ((DAT_14caf5b48 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1435e9f98 FUN_1435e9f98 body=1293 status=ok
// SIG undefined FUN_1435e9f98(void)

/* WARNING: Removing unreachable block (ram,0x0001435ea253) */
/* WARNING: Removing unreachable block (ram,0x0001435ea236) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435e9f98(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 auVar4 [12];
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar9 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar20;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iVar33;
  int iVar37;
  int iVar38;
  undefined1 auVar34 [16];
  int iVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 *local_140;
  longlong local_130;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  uint local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  undefined1 auVar16 [12];
  undefined1 auVar18 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 1;
  local_104 = 0;
  uStack_fc = 0;
  local_f4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_f0 = 0;
  local_ec = 0;
  local_e8 = L"FParticleIndexBuffer";
  local_e0 = 0;
  uStack_d8 = 0;
  local_124 = 0x200030000;
  local_11c = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_140 = &local_118;
    local_148 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_130,param_2,&local_124);
    *(undefined4 *)(local_130 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_140 = &local_118;
    local_148 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_130,param_2,&local_124);
    *(undefined4 *)(local_130 + 0x18) = 8;
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_130) {
    lVar5 = *plVar7;
    *plVar7 = local_130;
    local_130 = 0;
    if (lVar5 == 0) goto LAB_1435ea0f2;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_130 != 0) {
    LOCK();
    puVar1 = (uint *)(local_130 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1435ea0f2:
  lVar5 = *plVar7;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_140 = (undefined8 *)CONCAT44(local_140._4_4_,1);
  local_148 = 0x30000;
  lVar5 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  auVar8._8_8_ = extraout_XMM0_Qb;
  auVar8._0_8_ = extraout_XMM0_Qa;
  if (cVar3 == '\0') {
    auVar8._0_8_ = FUN_14002049c(param_2,0);
    auVar8._8_8_ = extraout_XMM0_Qb_00;
  }
  auVar8 = pmovsxbw(auVar8,0x706050403020100);
  lVar6 = 0;
  auVar10 = pmovsxbw(in_XMM2,0x303030303030303);
  auVar11 = pmovsxbw(in_XMM3,0x101010101010101);
  auVar12 = pmovsxbw(in_XMM4,0x808080808080808);
  do {
    auVar17 = psllw(auVar8,2);
    auVar34 = auVar17 | _DAT_149c36080;
    auVar14 = auVar17 | auVar10;
    auVar23 = auVar17 | auVar11;
    auVar27._0_12_ = auVar17._0_12_;
    auVar27._12_2_ = auVar17._6_2_;
    auVar27._14_2_ = auVar34._6_2_;
    auVar26._12_4_ = auVar27._12_4_;
    auVar26._0_10_ = auVar17._0_10_;
    auVar26._10_2_ = auVar34._4_2_;
    auVar25._10_6_ = auVar26._10_6_;
    auVar25._0_8_ = auVar17._0_8_;
    auVar25._8_2_ = auVar17._4_2_;
    auVar4._4_8_ = auVar25._8_8_;
    auVar4._2_2_ = auVar34._2_2_;
    auVar4._0_2_ = auVar17._2_2_;
    auVar24._0_4_ = CONCAT22(auVar34._0_2_,auVar17._0_2_);
    auVar24._4_12_ = auVar4;
    auVar21 = pshuflw(unaff_XMM7,auVar24,0xaa);
    auVar30 = pshuflw(unaff_XMM10,auVar14,0xe5);
    auVar30 = pblendw(auVar30,auVar21,0xfa);
    auVar36._0_12_ = auVar30._0_12_;
    auVar36._12_4_ = auVar30._4_4_;
    auVar21 = pshufhw(auVar36,auVar36,0x24);
    auVar30 = pmovzxwd(auVar30,auVar23);
    auVar21 = pblendw(auVar30,auVar21,0xf3);
    iVar33 = auVar34._0_4_;
    iVar37 = auVar34._4_4_;
    iVar38 = auVar34._8_4_;
    iVar39 = auVar34._12_4_;
    auVar22._4_4_ = iVar33;
    auVar22._0_4_ = iVar33;
    auVar22._8_4_ = iVar37;
    auVar22._12_4_ = iVar37;
    unaff_XMM7 = pblendw(auVar22,auVar21,0xf7);
    uVar15 = CONCAT22(auVar34._8_2_,auVar17._8_2_);
    auVar16._0_8_ = CONCAT26(auVar34._10_2_,CONCAT24(auVar17._10_2_,uVar15));
    auVar16._8_2_ = auVar17._12_2_;
    auVar16._10_2_ = auVar34._12_2_;
    auVar18._12_2_ = auVar17._14_2_;
    auVar18._0_12_ = auVar16;
    auVar18._14_2_ = auVar34._14_2_;
    uVar20 = (undefined4)((ulonglong)auVar16._0_8_ >> 0x20);
    auVar31._4_4_ = uVar20;
    auVar31._0_4_ = uVar15;
    auVar31._8_4_ = auVar16._8_4_;
    auVar31._12_4_ = uVar20;
    auVar17 = pblendw(auVar31,auVar14,0x30);
    auVar32._0_4_ = auVar17._0_4_;
    auVar32._8_4_ = auVar17._8_4_;
    auVar32._12_4_ = auVar17._12_4_;
    auVar32._4_4_ = auVar32._8_4_;
    auVar17 = pshuflw(unaff_XMM12,auVar32,0x24);
    auVar17 = pblendw(auVar17,auVar23,0x30);
    unaff_XMM14 = pshuflw(unaff_XMM14,auVar34,0xe8);
    auVar44._4_4_ = iVar38;
    auVar44._0_4_ = iVar38;
    auVar44._8_4_ = iVar39;
    auVar44._12_4_ = iVar39;
    unaff_XMM15 = pshufhw(unaff_XMM15,auVar34,0xe8);
    auVar35._0_4_ = iVar33 << 0x10;
    auVar35._4_4_ = iVar37 << 0x10;
    auVar35._8_4_ = iVar38 << 0x10;
    auVar35._12_4_ = iVar39 << 0x10;
    auVar36 = pblendw(auVar35,auVar17,0xdf);
    auVar40._4_4_ = auVar4._0_4_;
    auVar40._0_4_ = auVar24._0_4_;
    auVar40._8_4_ = auVar25._8_4_;
    auVar40._12_4_ = auVar4._0_4_;
    auVar17 = pshuflw(auVar40,auVar40,0x24);
    auVar30._4_4_ = auVar14._0_4_;
    auVar30._0_4_ = auVar14._0_4_;
    auVar30._8_4_ = auVar14._4_4_;
    auVar30._12_4_ = auVar14._4_4_;
    auVar21 = pblendw(auVar30,auVar17,0xfb);
    auVar41._0_8_ = auVar23._0_8_;
    auVar41._8_4_ = auVar23._0_4_;
    auVar41._12_4_ = auVar23._4_4_;
    auVar42 = pblendw(auVar41,auVar21,0xcf);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar34._0_8_ << 0x10;
    unaff_XMM10 = pblendw(auVar17 << 0x40,auVar42,0xdf);
    auVar17 = pshufhw(auVar21,auVar24,0xae);
    auVar34._0_4_ = auVar17._0_4_;
    auVar34._12_4_ = auVar17._12_4_;
    auVar34._4_4_ = auVar17._8_4_;
    auVar34._8_4_ = auVar34._12_4_;
    uVar13 = auVar14._0_8_;
    auVar28._0_8_ = uVar13 << 0x10;
    auVar28._8_8_ = auVar14._8_8_ << 0x10 | uVar13 >> 0x30;
    auVar21 = pblendw(auVar28,auVar34,0xef);
    auVar17 = pshuflw(auVar34,auVar23,0xf6);
    auVar9._0_12_ = auVar17._0_12_;
    auVar9._12_4_ = auVar17._4_4_;
    auVar17 = pblendw(auVar9,auVar21,0x3c);
    auVar29._0_12_ = unaff_XMM14._0_12_;
    auVar29._12_4_ = unaff_XMM14._4_4_;
    auVar30 = pblendw(auVar29,auVar17,0x7d);
    auVar17 = pshuflw(auVar17,auVar18,0xaa);
    auVar17 = pshufhw(auVar17,auVar17,0x24);
    auVar21 = pshufhw(auVar42,auVar14,0xe5);
    auVar43._4_4_ = auVar21._4_4_;
    auVar43._8_4_ = auVar21._8_4_;
    auVar43._12_4_ = auVar21._12_4_;
    auVar43._0_4_ = auVar43._8_4_;
    unaff_XMM12 = pblendw(auVar43,auVar17,0xbe);
    auVar17 = pshufhw(auVar17,auVar23,0xf6);
    auVar21 = pblendw(auVar23 >> 0x30,unaff_XMM12,0xf3);
    auVar34 = pblendw(auVar44,auVar21,0xf7);
    auVar21 = pshufhw(auVar18,auVar18,0xae);
    auVar19._0_4_ = auVar21._0_4_;
    auVar19._12_4_ = auVar21._12_4_;
    auVar19._4_4_ = auVar21._8_4_;
    auVar19._8_4_ = auVar19._12_4_;
    auVar23._0_8_ = uVar13 >> 0x30;
    auVar23._8_8_ = auVar14._8_8_ >> 0x30;
    auVar21 = pblendw(auVar23,auVar19,0xef);
    auVar14._4_4_ = auVar17._4_4_;
    auVar14._8_4_ = auVar17._8_4_;
    auVar14._12_4_ = auVar17._12_4_;
    auVar14._0_4_ = auVar14._8_4_;
    auVar17 = pblendw(auVar14,auVar21,0x3c);
    auVar42._4_4_ = unaff_XMM15._4_4_;
    auVar42._0_4_ = unaff_XMM15._8_4_;
    auVar42._8_4_ = unaff_XMM15._8_4_;
    auVar42._12_4_ = unaff_XMM15._12_4_;
    auVar17 = pblendw(auVar42,auVar17,0x7d);
    *(undefined1 (*) [16])(lVar5 + 0x50 + lVar6) = auVar17;
    *(undefined1 (*) [16])(lVar5 + 0x40 + lVar6) = auVar34;
    *(undefined1 (*) [16])(lVar5 + 0x20 + lVar6) = auVar30;
    *(undefined1 (*) [16])(lVar5 + lVar6) = unaff_XMM10;
    *(undefined1 (*) [16])(lVar5 + 0x30 + lVar6) = auVar36;
    *(undefined1 (*) [16])(lVar5 + 0x10 + lVar6) = unaff_XMM7;
    auVar21._0_2_ = auVar8._0_2_ + auVar12._0_2_;
    auVar21._2_2_ = auVar8._2_2_ + auVar12._2_2_;
    auVar21._4_2_ = auVar8._4_2_ + auVar12._4_2_;
    auVar21._6_2_ = auVar8._6_2_ + auVar12._6_2_;
    auVar21._8_2_ = auVar8._8_2_ + auVar12._8_2_;
    auVar21._10_2_ = auVar8._10_2_ + auVar12._10_2_;
    auVar21._12_2_ = auVar8._12_2_ + auVar12._12_2_;
    auVar21._14_2_ = auVar8._14_2_ + auVar12._14_2_;
    lVar6 = lVar6 + 0x60;
    auVar8 = auVar21;
  } while (lVar6 != 0x30000);
  lVar5 = *plVar7;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((local_d0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ea4a6 FUN_1435ea4a6 body=47 status=ok
// SIG undefined FUN_1435ea4a6(void)

void FUN_1435ea4a6(void)

{
  DAT_14caf6030 = &PTR_FUN_14aa075d0;
  FUN_144725486(&DAT_14caf6030);
  FUN_14003f39a(&DAT_14caf6030);
  return;
}



// FUNCTION 1435ea4d6 FUN_1435ea4d6 body=734 status=ok
// SIG undefined FUN_1435ea4d6(void)

void FUN_1435ea4d6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  short *psVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FSixTriangleParticleIndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x200048000;
  local_7c = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_90) {
    lVar5 = *plVar7;
    *plVar7 = local_90;
    local_90 = 0;
    if (lVar5 == 0) goto LAB_1435ea5ce;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1435ea5ce:
  lVar5 = *plVar7;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x48000;
  lVar5 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  psVar6 = (short *)(lVar5 + 0x22);
  lVar5 = -0x10000;
  do {
    sVar4 = (short)lVar5;
    psVar6[-0x11] = sVar4;
    psVar6[-0x10] = sVar4 + 1;
    psVar6[-0xf] = sVar4 + 2;
    psVar6[-0xe] = sVar4;
    psVar6[-0xd] = sVar4 + 2;
    psVar6[-0xc] = sVar4 + 3;
    psVar6[-0xb] = sVar4;
    psVar6[-10] = sVar4 + 3;
    psVar6[-9] = sVar4 + 4;
    psVar6[-8] = sVar4;
    psVar6[-7] = sVar4 + 4;
    psVar6[-6] = sVar4 + 5;
    psVar6[-5] = sVar4;
    psVar6[-4] = sVar4 + 5;
    psVar6[-3] = sVar4 + 6;
    psVar6[-2] = sVar4;
    psVar6[-1] = sVar4 + 6;
    *psVar6 = sVar4 + 7;
    psVar6 = psVar6 + 0x12;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0);
  lVar5 = *plVar7;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ea7b5 FUN_1435ea7b5 body=47 status=ok
// SIG undefined FUN_1435ea7b5(void)

void FUN_1435ea7b5(void)

{
  DAT_14caf5b58 = &PTR_FUN_14aa07600;
  FUN_144725486(&DAT_14caf5b58);
  FUN_14003f39a(&DAT_14caf5b58);
  return;
}



// FUNCTION 1435ea7e4 FUN_1435ea7e4 body=942 status=ok
// SIG undefined FUN_1435ea7e4(void)

void FUN_1435ea7e4(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
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
  local_58 = L"FParticleScratchVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0x10000;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4104);
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
  lVar9 = local_a0;
  plVar8 = (longlong *)(param_1 + 0x10);
  if (plVar8 == &local_a0) {
LAB_1435ea97a:
    lVar9 = local_a0;
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
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar9;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar9 = *plVar8;
  }
  else {
    lVar4 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
      goto LAB_1435ea97a;
    }
  }
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x10100;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar8 = (longlong *)(param_1 + 0x18);
  if (plVar8 != &local_a0) {
    lVar9 = *plVar8;
    *plVar8 = local_a0;
    local_a0 = 0;
    if (lVar9 == 0) goto LAB_1435eab04;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar9 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar9 = local_a0;
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
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_1435eab04:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435eab93 FUN_1435eab93 body=47 status=ok
// SIG undefined FUN_1435eab93(void)

void FUN_1435eab93(void)

{
  DAT_14caf6010 = &PTR_FUN_14aa07630;
  FUN_144725486(&DAT_14caf6010);
  FUN_1463f15c0(&DAT_14caf6010);
  return;
}



// FUNCTION 1435eabda FUN_1435eabda body=1700 status=ok
// SIG undefined FUN_1435eabda(void)

undefined8
FUN_1435eabda(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,int param_6,int param_7)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  uint uVar13;
  size_t _Size;
  longlong lVar14;
  longlong lVar15;
  void *_Dst;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0.0;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  uStack_6c = 0x3f800000;
  uVar7 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_6 * 2) * 8);
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  FUN_145eb3c06();
  uVar6 = 0;
  FUN_1448e935e(uVar7,&local_88,&DAT_14caf5c70,0);
  FUN_145eb3c06();
  if (local_88 != 0) {
    uVar6 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(local_80 + 8) + 0x50) +
             (longlong)*(int *)(local_88 + 0xd4) * 8);
    if (uVar6 == 0) {
      uVar6 = FUN_1400bafc2(*(longlong *)(local_80 + 8),(longlong)*(int *)(local_88 + 0xd4),1);
    }
  }
  uVar7 = FUN_140029432(param_1,uVar6,0);
  param_1[0x37] = uVar6;
  puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar8 + 3;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x20);
    puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar8 + 3;
  }
  uVar5 = local_98;
  uVar4 = local_a0;
  *param_1 = (ulonglong)puVar11;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar8;
  param_1[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a37d340;
  puVar8[2] = uVar7;
  puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar8 + 2;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x18);
    puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar8 + 2;
  }
  *param_1 = (ulonglong)puVar11;
  *puVar8 = uVar4;
  puVar8[1] = uVar5;
  puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar9 + 4;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x28);
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar9 + 4;
  }
  *param_1 = (ulonglong)puVar11;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar9;
  param_1[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a2dc3b0;
  puVar9[2] = puVar8;
  *(undefined4 *)(puVar9 + 3) = 2;
  if ((longlong)(int)param_5[1] != 0) {
    lVar15 = *param_5;
    lVar14 = (longlong)(int)param_5[1] << 6;
    do {
      if (*(int *)(lVar15 + 0x34) == param_7) {
        local_58 = *(int *)(lVar15 + 0x20);
        local_64 = local_58 + 0x3fU >> 6;
        uVar13 = 0x80;
        if (local_64 < 0x80) {
          uVar13 = local_64;
        }
        uVar13 = uVar13 + (uVar13 == 0);
        fStack_70 = (float)*(double *)(lVar15 + 0x18);
        fStack_74 = (float)*(double *)(lVar15 + 0x10);
        local_78 = (float)*(double *)(lVar15 + 8);
        uStack_6c = 0x3f800000;
        local_68 = local_64 / uVar13;
        local_64 = local_64 % uVar13;
        local_60 = *(undefined4 *)(lVar15 + 0x30);
        local_5c = *(int *)(lVar15 + 0x38) << 0x10;
        if (local_88 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_80 + 8) + 0x50) +
                    (longlong)*(int *)(local_88 + 0xd4) * 8);
          if (lVar10 == 0) {
            lVar10 = FUN_1400bafc2(*(longlong *)(local_80 + 8),(longlong)*(int *)(local_88 + 0xd4),1
                                  );
          }
        }
        local_b8 = &local_90;
        local_c0 = &local_98;
        local_c8 = &local_a0;
        local_b0 = lVar15;
        FUN_147c432ce(param_1,&local_88,lVar10,&local_78);
        puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar8 + 4;
        if ((undefined8 *)param_1[1] < puVar11) {
          FUN_140023dd8(param_1,0x28);
          puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar8 + 4;
        }
        *param_1 = (ulonglong)puVar11;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar8;
        param_1[6] = (ulonglong)(puVar8 + 1);
        puVar8[1] = 0;
        *puVar8 = &PTR_LAB_14a1fbc30;
        *(uint *)(puVar8 + 2) = uVar13;
        *(undefined1 **)((longlong)puVar8 + 0x14) = &DAT_100000001;
      }
      lVar15 = lVar15 + 0x40;
      lVar14 = lVar14 + -0x40;
    } while (lVar14 != 0);
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    if ((*(char *)(local_88 + 0xe2) != '\0') && (*(char *)(local_88 + 0xe3) != '\x06')) {
      uVar2 = *(undefined2 *)(local_88 + 0xe0);
      iVar3 = (int)param_1[0x13];
      *(uint *)(param_1 + 0x13) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
        FUN_1447477d8(puVar1,iVar3);
      }
      uVar6 = *puVar1;
      *(undefined2 *)(uVar6 + (longlong)iVar3 * 4) = uVar2;
      *(undefined1 *)(uVar6 + 2 + (longlong)iVar3 * 4) = 0;
    }
    if ((*(char *)(local_88 + 0xee) != '\0') && (*(char *)(local_88 + 0xef) != '\x06')) {
      uVar2 = *(undefined2 *)(local_88 + 0xec);
      iVar3 = (int)param_1[0x13];
      *(uint *)(param_1 + 0x13) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
        FUN_1447477d8(puVar1,iVar3);
      }
      uVar6 = *puVar1;
      *(undefined2 *)(uVar6 + (longlong)iVar3 * 4) = uVar2;
      *(undefined1 *)(uVar6 + 2 + (longlong)iVar3 * 4) = 1;
    }
    if ((*(char *)(local_88 + 0xf2) != '\0') && (*(char *)(local_88 + 0xf3) != '\x06')) {
      uVar2 = *(undefined2 *)(local_88 + 0xf0);
      iVar3 = (int)param_1[0x13];
      *(uint *)(param_1 + 0x13) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
        FUN_1447477d8(puVar1,iVar3);
      }
      uVar6 = *puVar1;
      *(undefined2 *)(uVar6 + (longlong)iVar3 * 4) = uVar2;
      *(undefined1 *)(uVar6 + 2 + (longlong)iVar3 * 4) = 1;
    }
    if (local_88 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_80 + 8) + 0x50) +
                (longlong)*(int *)(local_88 + 0xd4) * 8);
      if (lVar15 == 0) {
        lVar15 = FUN_1400bafc2(*(longlong *)(local_80 + 8),(longlong)*(int *)(local_88 + 0xd4),1);
      }
    }
    uVar6 = param_1[0x13];
    lVar14 = (longlong)(int)uVar6;
    if (0 < lVar14) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar8 + 5;
        if ((undefined8 *)param_1[1] < puVar11) {
          FUN_140023dd8(param_1,0x30);
          puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar8 + 5;
        }
        *param_1 = (ulonglong)puVar11;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar8;
        param_1[6] = (ulonglong)(puVar8 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar14 * 4);
        _Size = lVar14 * 4;
        if ((void *)param_1[1] < pvVar12) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar8[1] = 0;
        *puVar8 = &PTR_FUN_14a1fbc38;
        puVar8[2] = lVar15;
        puVar8[3] = _Dst;
        *(int *)(puVar8 + 4) = (int)uVar6;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  uVar4 = local_98;
  uVar7 = local_a0;
  puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar8 + 2;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x18);
    puVar8 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar8 + 2;
  }
  *param_1 = (ulonglong)puVar11;
  *puVar8 = uVar7;
  puVar8[1] = uVar4;
  puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar9 + 4;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x28);
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar9 + 4;
  }
  *param_1 = (ulonglong)puVar11;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar9;
  param_1[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a2dc3b8;
  puVar9[2] = puVar8;
  *(undefined4 *)(puVar9 + 3) = 2;
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1435eb280 FUN_1435eb280 body=2714 status=ok
// SIG undefined FUN_1435eb280(void)

void FUN_1435eb280(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  uint local_84;
  char local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c8 = param_1 + 0x10;
  local_d0 = param_1 + 0x20;
  local_d8 = param_1 + 0x30;
  local_e0 = param_1 + 0x40;
  local_e8 = param_1 + 0x50;
  local_f0 = param_1 + 0x60;
  lVar11 = 0;
  bVar12 = true;
  local_f8 = param_1;
  do {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_98 = 1;
    local_94 = 0;
    uStack_8c = 0;
    local_84 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_80 = '\0';
    local_7c = 0;
    local_78 = L"PartialSortKeyBuffer";
    local_70 = 0;
    uStack_68 = 0;
    iVar5 = *(uint *)(local_f8 + 0x70) << 2;
    local_b8 = (undefined1)iVar5;
    uStack_b7 = (undefined1)((uint)iVar5 >> 8);
    uStack_b6 = (undefined1)((uint)iVar5 >> 0x10);
    uStack_b5 = (undefined1)((uint)iVar5 >> 0x18);
    uStack_b4 = 0;
    uStack_b0 = 0x4109;
    if ((*(uint *)(local_f8 + 0x70) & 0x3fffffff) == 0) {
      FUN_14570b4be(param_2,local_a8,0x4109,0);
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_100 = local_a8;
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0xc00);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0xc00;
      FUN_14002049c(param_2,0);
    }
    else {
      local_100 = local_a8;
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0xc00);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0xc00;
    }
    lVar10 = local_c0;
    plVar9 = (longlong *)(local_c8 + lVar11 * 8);
    if (plVar9 == &local_c0) {
LAB_1435eb48b:
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar10;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar10 = *plVar9;
    }
    else {
      lVar4 = *plVar9;
      *plVar9 = local_c0;
      local_c0 = 0;
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar4 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_1435eb48b;
      }
    }
    if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
      uStack_b7 = 0x1c;
      uStack_b6 = 1;
    }
    else {
      uStack_b7 = 0;
      uStack_b6 = 4;
    }
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b5 = 0;
    local_b8 = 0;
    local_108 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2);
    plVar8 = (longlong *)(local_d0 + lVar11 * 8);
    if (plVar8 == &local_c0) {
LAB_1435eb5b2:
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar10;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar10 = *plVar8;
      *plVar8 = local_c0;
      local_c0 = 0;
      if (lVar10 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar10 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar10 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar10 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar10;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_1435eb5b2;
      }
    }
    if ((*plVar9 == 0) || ((*(byte *)(*plVar9 + 0x28) & 0x10) == 0)) {
      uStack_b7 = 0x1c;
      uStack_b6 = 1;
    }
    else {
      uStack_b7 = 0;
      uStack_b6 = 4;
    }
    local_b8 = 1;
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b5 = 0;
    local_108 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_c0,param_2);
    plVar9 = (longlong *)(local_d8 + lVar11 * 8);
    if (plVar9 == &local_c0) {
LAB_1435eb6e1:
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar10;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar10 = *plVar9;
      *plVar9 = local_c0;
      local_c0 = 0;
      if (lVar10 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar10 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar10 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar10 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar10;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_1435eb6e1;
      }
    }
    local_78 = L"PartialSortVertexBuffer";
    if (local_80 == '\x01') {
      local_b8 = 0;
      uStack_b7 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0x100000;
    }
    else {
      iVar5 = *(uint *)(local_f8 + 0x70) << 2;
      local_b8 = (undefined1)iVar5;
      uStack_b7 = (undefined1)((uint)iVar5 >> 8);
      uStack_b6 = (undefined1)((uint)iVar5 >> 0x10);
      uStack_b5 = (undefined1)((uint)iVar5 >> 0x18);
      uStack_b4 = 0;
      uStack_b0 = 0x4109;
      if ((*(uint *)(local_f8 + 0x70) & 0x3fffffff) == 0) {
        FUN_14570b4be(param_2,local_a8,0x4109,0);
      }
    }
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_100 = local_a8;
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0xc00);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0xc00;
      FUN_14002049c(param_2,0);
    }
    else {
      local_100 = local_a8;
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0xc00);
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,&local_b8);
      *(undefined4 *)(local_c0 + 0x18) = 0xc00;
    }
    lVar10 = local_c0;
    plVar9 = (longlong *)(local_e0 + lVar11 * 8);
    if (plVar9 == &local_c0) {
LAB_1435eb8a0:
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar10;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar10 = *plVar9;
    }
    else {
      lVar4 = *plVar9;
      *plVar9 = local_c0;
      local_c0 = 0;
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar4 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_1435eb8a0;
      }
    }
    if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x28) & 0x10) == 0)) {
      uStack_b7 = 0x1c;
      uStack_b6 = 1;
    }
    else {
      uStack_b7 = 0;
      uStack_b6 = 4;
    }
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b5 = 0;
    local_b8 = 0;
    local_108 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_c0,param_2);
    plVar8 = (longlong *)(local_e8 + lVar11 * 8);
    if (plVar8 == &local_c0) {
LAB_1435eb9c7:
      lVar10 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar10;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar10 = *plVar8;
      *plVar8 = local_c0;
      local_c0 = 0;
      if (lVar10 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar10 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar10 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar10 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar10;
            plVar8 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar13) {
                  plVar8 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar13 = plVar7 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar13) {
                  plVar7 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_1435eb9c7;
      }
    }
    if ((*plVar9 == 0) || ((*(byte *)(*plVar9 + 0x28) & 0x10) == 0)) {
      uStack_b7 = 0x1c;
      uStack_b6 = 1;
    }
    else {
      uStack_b7 = 0;
      uStack_b6 = 4;
    }
    local_b8 = 1;
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b5 = 0;
    local_108 = &local_b8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_c0,param_2);
    plVar9 = (longlong *)(local_f0 + lVar11 * 8);
    if (plVar9 == &local_c0) {
LAB_1435ebaf6:
      lVar11 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_c0 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_c0 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_c0 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar11;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar11 = *plVar9;
      *plVar9 = local_c0;
      local_c0 = 0;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar11 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar11 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar11;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar13 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar13) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar13 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar13) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_1435ebaf6;
      }
    }
    lVar11 = 1;
    bVar13 = !bVar12;
    bVar12 = false;
    if (bVar13) {
      if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1435ebd1b FUN_1435ebd1b body=69 status=ok
// SIG undefined FUN_1435ebd1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ebd1b(void)

{
  _DAT_14caf5d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ebd5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5d50,1);
  return;
}



// FUNCTION 1435ebd60 FUN_1435ebd60 body=69 status=ok
// SIG undefined FUN_1435ebd60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ebd60(void)

{
  _DAT_14caf5d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ebda2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5d60,1);
  return;
}



// FUNCTION 1435ebda5 FUN_1435ebda5 body=106 status=ok
// SIG undefined FUN_1435ebda5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ebda5(void)

{
  _DAT_14caf5d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5d90,1);
  if (DAT_14caf5d78 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf5d68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435ebe0f FUN_1435ebe0f body=41 status=ok
// SIG undefined FUN_1435ebe0f(void)

void FUN_1435ebe0f(void)

{
  DAT_14caf6008 = 0;
  if (DAT_14caf6000 != 0) {
    FUN_1400020a8();
  }
  FUN_145bccb7e();
  return;
}



// FUNCTION 1435ebe38 FUN_1435ebe38 body=132 status=ok
// SIG undefined FUN_1435ebe38(void)

void FUN_1435ebe38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1;
  uVar1 = FUN_14001cc68(0xb8,0x10);
  FUN_1412dba70(uVar1,param_1);
  local_30 = &local_38;
  FUN_145adb672(&local_24);
  *(undefined8 *)(DAT_14caf5fc0 + 8 + (longlong)local_24 * 0x18) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ebebe FUN_1435ebebe body=192 status=ok
// SIG undefined FUN_1435ebebe(void)

void FUN_1435ebebe(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14caf5fc8 != DAT_14caf5ff4) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14caf5ff8;
    if (DAT_14caf6000 != (undefined *)0x0) {
      puVar5 = DAT_14caf6000;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14caf6008 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14caf5fc0 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
          return;
        }
        puVar3 = (undefined8 *)puVar1[1];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        FUN_1458c95b4(param_1);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 1435ebf7e FUN_1435ebf7e body=192 status=ok
// SIG undefined FUN_1435ebf7e(void)

void FUN_1435ebf7e(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14caf5fc8 != DAT_14caf5ff4) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14caf5ff8;
    if (DAT_14caf6000 != (undefined *)0x0) {
      puVar5 = DAT_14caf6000;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14caf6008 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14caf5fc0 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
          return;
        }
        puVar3 = (undefined8 *)puVar1[1];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        FUN_1458c95b4(param_1);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 1435ec03e FUN_1435ec03e body=192 status=ok
// SIG undefined FUN_1435ec03e(void)

void FUN_1435ec03e(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14caf5fc8 != DAT_14caf5ff4) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14caf5ff8;
    if (DAT_14caf6000 != (undefined *)0x0) {
      puVar5 = DAT_14caf6000;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14caf6008 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14caf5fc0 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
          return;
        }
        puVar3 = (undefined8 *)puVar1[1];
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        FUN_1458c95b4(param_1);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 1435ec0fe FUN_1435ec0fe body=274 status=ok
// SIG undefined FUN_1435ec0fe(void)

void FUN_1435ec0fe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar3 = 0;
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x28);
        lVar1 = *(longlong *)(lVar2 + lVar5 * 8);
        if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
          *(undefined8 *)(lVar2 + lVar5 * 8) = 0;
        }
        else {
          (**(code **)(*param_2 + 0x88))(param_2,lVar2 + lVar3,0,0);
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar4);
        if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar4) = 0;
        }
        else {
          (**(code **)(*param_2 + 0x88))(param_2);
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x10;
        lVar3 = lVar3 + 8;
      } while (lVar5 < *(int *)(param_1 + 0x30));
    }
    if (0 < *(int *)(param_1 + 0x70)) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x68);
        lVar2 = *(longlong *)(lVar5 + lVar4 * 8);
        if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
          *(undefined8 *)(lVar5 + lVar4 * 8) = 0;
        }
        else {
          (**(code **)(*param_2 + 0x88))(param_2,lVar5 + lVar3,0,0);
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < *(int *)(param_1 + 0x70));
    }
  }
  return;
}



// FUNCTION 1435ec210 FUN_1435ec210 body=196 status=ok
// SIG undefined FUN_1435ec210(void)

undefined8 FUN_1435ec210(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_2 + 0x698);
  if (uVar2 * 4 == -4) {
    if ((uVar2 >> 0x1e & 1) == 0) {
      uVar2 = *(uint *)(param_1 + 0x70);
      *(uint *)(param_1 + 0x70) = uVar2 + 1;
      if (*(uint *)(param_1 + 0x74) < uVar2 + 1) {
        FUN_147c43a0c((longlong *)(param_1 + 0x68),uVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar2 * 8) = param_2;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      *(uint *)(param_2 + 0x698) =
           (*(uint *)(param_2 + 0x698) & 0x80000000) + (uVar2 & 0x3fffffff) + 0x40000000;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
    if ((uVar2 >> 0x1e & 1) == 0) {
      lVar4 = (longlong)((int)(uVar2 * 4) >> 2) * 0x10;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0xd + lVar4);
      if ((bVar1 & 2) != 0) {
        *(byte *)(*(longlong *)(param_1 + 0x38) + lVar4 + 0xd) = bVar1 | 4;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1435ec2d4 FUN_1435ec2d4 body=251 status=ok
// SIG undefined FUN_1435ec2d4(void)

void FUN_1435ec2d4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar2 = *(uint *)(param_2 + 0x698);
  if (uVar2 * 4 != -4) {
    uVar8 = (int)(uVar2 * 4) >> 2;
    lVar10 = (longlong)(int)uVar8;
    if ((uVar2 >> 0x1e & 1) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      pbVar1 = (byte *)(lVar3 + 0xd + lVar10 * 0x10);
      *pbVar1 = *pbVar1 | 2;
      *(byte *)(param_2 + 0x69b) = *(byte *)(param_2 + 0x69b) | 0x80;
      pbVar1 = (byte *)(lVar3 + 0xd + lVar10 * 0x10);
      *pbVar1 = *pbVar1 & 0xfb;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar10 * 8);
      uVar5 = uVar2;
      lVar4 = param_2;
      if (lVar3 != 0) {
        uVar5 = *(uint *)(lVar3 + 0x698);
        lVar4 = lVar3;
      }
      *(uint *)(lVar4 + 0x698) = uVar5 | 0x3fffffff;
      iVar6 = *(int *)(param_1 + 0x70);
      iVar7 = ~uVar8 + iVar6;
      if (iVar7 != 0) {
        iVar9 = 1;
        if (iVar7 < 1) {
          iVar9 = iVar7;
        }
        memmove((void *)(*(longlong *)(param_1 + 0x68) + lVar10 * 8),
                (void *)(*(longlong *)(param_1 + 0x68) + (longlong)(iVar6 - iVar9) * 8),
                (longlong)iVar9 << 3);
        iVar6 = *(int *)(param_1 + 0x70);
      }
      *(int *)(param_1 + 0x70) = iVar6 + -1;
      if ((int)uVar8 < iVar6 + -1 && -1 < (int)uVar8) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar10 * 8);
        *(uint *)(lVar10 + 0x698) = *(uint *)(lVar10 + 0x698) & 0xc0000000 | uVar2 & 0x3fffffff;
      }
      *(byte *)(param_2 + 0x69b) = *(byte *)(param_2 + 0x69b) & 0xbf;
    }
  }
  return;
}



// FUNCTION 1435ec3cf FUN_1435ec3cf body=69 status=ok
// SIG undefined FUN_1435ec3cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ec3cf(void)

{
  _DAT_14caf5da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ec411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5db0,1);
  return;
}



// FUNCTION 1435ec414 FUN_1435ec414 body=69 status=ok
// SIG undefined FUN_1435ec414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ec414(void)

{
  _DAT_14caf5dc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ec456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5dd0,1);
  return;
}



// FUNCTION 1435ec459 FUN_1435ec459 body=69 status=ok
// SIG undefined FUN_1435ec459(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ec459(void)

{
  _DAT_14caf5dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ec49b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5de0,1);
  return;
}



// FUNCTION 1435ec49e FUN_1435ec49e body=69 status=ok
// SIG undefined FUN_1435ec49e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ec49e(void)

{
  _DAT_14caf5de8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ec4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5df0,1);
  return;
}



// FUNCTION 1435ec4e3 FUN_1435ec4e3 body=69 status=ok
// SIG undefined FUN_1435ec4e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ec4e3(void)

{
  _DAT_14caf5df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ec525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e00,1);
  return;
}



// FUNCTION 1435ec528 FUN_1435ec528 body=69 status=ok
// SIG undefined FUN_1435ec528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ec528(void)

{
  _DAT_14caf5e08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ec56a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e10,1);
  return;
}



// FUNCTION 1435ec56e FUN_1435ec56e body=992 status=ok
// SIG undefined FUN_1435ec56e(void)

ulonglong FUN_1435ec56e(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,
                       int param_5,int param_6,undefined8 param_7,undefined8 *param_8,
                       longlong *param_9,undefined8 *param_10,longlong *param_11,
                       undefined8 *param_12)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar7 = (undefined8 *)(param_2 + 0x100);
  puVar9 = param_12;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  if ((((((9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x100))) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x108)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x110)))) ||
       ((9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x120)) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x128)))))) ||
      ((9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x130)) ||
       ((9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x140)) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x148)))))))) ||
     (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x150)))) {
    FUN_14007522e(&local_c8,(undefined8 *)(param_2 + 0x100));
  }
  else {
    puVar7 = &DAT_14c846400;
    puVar9 = &local_c8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  puVar7 = &local_c8;
  puVar9 = param_12 + 0x10;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  param_12[0x20] = param_3;
  iVar8 = param_5 * param_4;
  local_d8 = param_8 + 1;
  if (*(int *)(param_8 + 2) == 0) {
LAB_1435ec7e3:
    uVar3 = FUN_1400f777c(&DAT_14ca8c130,*param_8,iVar8,0);
    iVar1 = *(int *)(param_8 + 2);
    *(uint *)(param_8 + 2) = iVar1 + 1U;
    if (*(uint *)((longlong)param_8 + 0x14) < iVar1 + 1U) {
      FUN_1400f7990(local_d8,iVar1);
    }
    *(undefined8 *)(param_8[1] + (longlong)iVar1 * 8) = uVar3;
    lVar5 = *(longlong *)(param_8[1] + (longlong)(*(int *)(param_8 + 2) + -1) * 8);
    uVar4 = *(uint *)(lVar5 + 0x24);
  }
  else {
    lVar5 = *(longlong *)(*local_d8 + (longlong)(*(int *)(param_8 + 2) + -1) * 8);
    uVar4 = *(uint *)(lVar5 + 0x24);
    if (*(uint *)(lVar5 + 0x20) < uVar4 + iVar8) goto LAB_1435ec7e3;
  }
  lVar6 = (ulonglong)uVar4 + *(longlong *)(lVar5 + 0x18);
  *(uint *)(lVar5 + 0x24) = (iVar8 + 0xfU & 0xfffffff0) + uVar4;
  *param_9 = lVar6;
  param_9[1] = lVar5;
  *(uint *)(param_9 + 2) = uVar4;
  if (0 < DAT_14c760dc4) {
    lVar6 = *param_9;
  }
  param_12[0x22] = lVar6;
  *(int *)(param_12 + 0x21) = param_4;
  *(int *)((longlong)param_12 + 0x10c) = param_5;
  (**(code **)(*param_1 + 0x58))(param_1,&local_cc,&local_d0);
  FUN_1403f624c(param_7,&local_c8,local_cc,local_d0);
  param_10[2] = local_b8;
  *(undefined4 *)param_10 = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_10 + 4) = local_c8._4_4_;
  *(undefined4 *)(param_10 + 1) = uStack_c0;
  *(undefined4 *)((longlong)param_10 + 0xc) = uStack_bc;
  param_12[0x24] = *param_10;
  uVar2 = (ulonglong)local_cc;
  *(uint *)(param_12 + 0x23) = local_cc;
  param_12[0x26] = 0;
  if ((*(byte *)(param_1 + 4) & 1) == 0) goto LAB_1435ec7b5;
  param_4 = param_4 * param_6;
  if (*(int *)(param_8 + 2) == 0) {
LAB_1435ec84e:
    uVar3 = FUN_1400f777c(&DAT_14ca8c130,*param_8,param_4,0);
    iVar8 = *(int *)(param_8 + 2);
    *(uint *)(param_8 + 2) = iVar8 + 1U;
    if (*(uint *)((longlong)param_8 + 0x14) < iVar8 + 1U) {
      FUN_1400f7990(local_d8,iVar8);
    }
    *(undefined8 *)(param_8[1] + (longlong)iVar8 * 8) = uVar3;
    uVar2 = *(ulonglong *)(param_8[1] + (longlong)(*(int *)(param_8 + 2) + -1) * 8);
    uVar4 = *(uint *)(uVar2 + 0x24);
  }
  else {
    uVar2 = *(ulonglong *)(*local_d8 + (longlong)(*(int *)(param_8 + 2) + -1) * 8);
    uVar4 = *(uint *)(uVar2 + 0x24);
    if (*(uint *)(uVar2 + 0x20) < uVar4 + param_4) goto LAB_1435ec84e;
  }
  lVar5 = (ulonglong)uVar4 + *(longlong *)(uVar2 + 0x18);
  *(uint *)(uVar2 + 0x24) = (param_4 + 0xfU & 0xfffffff0) + uVar4;
  *param_11 = lVar5;
  param_11[1] = uVar2;
  *(uint *)(param_11 + 2) = uVar4;
  if (0 < DAT_14c760dc4) {
    uVar2 = (ulonglong)DAT_14ca8c188;
    lVar5 = *param_11;
  }
  param_12[0x26] = lVar5;
LAB_1435ec7b5:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1435ec950 FUN_1435ec950 body=1865 status=ok
// SIG undefined FUN_1435ec950(void)

void FUN_1435ec950(longlong param_1,float *param_2,undefined4 *param_3,longlong param_4,
                  double *param_5,double *param_6,int param_7)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  ulonglong uVar11;
  double *pdVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_228 [32];
  double *local_208;
  longlong local_1f8;
  longlong local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  longlong local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar13 = *(uint *)(param_1 + 0x34);
  uVar2 = *(uint *)(param_1 + 0xc0);
  uVar9 = uVar2;
  if ((int)uVar13 < (int)uVar2) {
    uVar9 = uVar13;
  }
  if ((int)uVar2 < 0) {
    uVar9 = uVar13;
  }
  local_1b8 = *param_5;
  uVar24 = SUB84(local_1b8,0);
  uVar20 = (undefined4)((ulonglong)local_1b8 >> 0x20);
  local_1c8 = param_5[1];
  uVar18 = SUB84(local_1c8,0);
  uVar23 = (undefined4)((ulonglong)local_1c8 >> 0x20);
  local_1a8._8_8_ = 0;
  local_1a8._0_8_ = param_5[2];
  if (*(char *)(param_1 + 0xe4) == '\x01') {
    if ((((((9.99999993922529e-09 < ABS(*param_6)) || (9.99999993922529e-09 < ABS(param_6[1]))) ||
          (9.99999993922529e-09 < ABS(param_6[2]))) ||
         ((9.99999993922529e-09 < ABS(param_6[4]) || (9.99999993922529e-09 < ABS(param_6[5]))))) ||
        ((9.99999993922529e-09 < ABS(param_6[6]) ||
         ((9.99999993922529e-09 < ABS(param_6[8]) || (9.99999993922529e-09 < ABS(param_6[9])))))))
       || (9.99999993922529e-09 < ABS(param_6[10]))) {
      FUN_14007522e(local_178,param_6);
      local_1a8._8_8_ = 0;
      local_1a8._0_8_ = param_5[2];
      uVar24 = SUB84(*param_5,0);
      uVar20 = (undefined4)((ulonglong)*param_5 >> 0x20);
      uVar18 = SUB84(param_5[1],0);
      uVar23 = (undefined4)((ulonglong)param_5[1] >> 0x20);
    }
    else {
      pdVar10 = (double *)&DAT_14c846400;
      pdVar12 = local_178;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar12 = *pdVar10;
        pdVar10 = pdVar10 + 1;
        pdVar12 = pdVar12 + 1;
      }
    }
    dVar16 = local_1a8._0_8_;
    local_1b8 = dVar16 * local_138 +
                (double)CONCAT44(uVar23,uVar18) * local_158 +
                (double)CONCAT44(uVar20,uVar24) * local_178[0] + local_118;
    local_1c8 = dVar16 * dStack_130 +
                (double)CONCAT44(uVar23,uVar18) * dStack_150 +
                (double)CONCAT44(uVar20,uVar24) * local_178[1] + dStack_110;
    local_1a8._0_8_ =
         dVar16 * local_128 +
         (double)CONCAT44(uVar20,uVar24) * local_178[2] +
         (double)CONCAT44(uVar23,uVar18) * local_148 + local_108;
    dStack_1b0 = local_1c8;
  }
  else {
    dStack_1b0 = 0.0;
  }
  dStack_1c0 = dStack_1b0;
  if (0 < (int)uVar9) {
    local_1d0 = param_1 + 0x28;
    local_1f0 = *(longlong *)(param_1 + 0x50);
    local_1f8 = *(longlong *)(param_1 + 0x58);
    dVar16 = (double)*(float *)(param_1 + 0xbc) * 65536.0;
    dVar5 = (double)*(float *)(param_1 + 0xb8) * 65536.0;
    dVar6 = (double)*(float *)(param_1 + 0xb4) * 65536.0;
    uVar23 = 0x3f800000;
    fVar21 = 0.0;
    uVar11 = 0;
    uVar18 = 0x3f800000;
    uVar20 = 0x3f800000;
    uVar24 = 0x3f800000;
    do {
      iVar8 = (int)uVar11;
      if (param_4 != 0) {
        iVar8 = *(int *)(param_4 + uVar11 * 8);
      }
      uVar11 = uVar11 + 1;
      pdVar10 = (double *)
                ((longlong)*(int *)(param_1 + 0x38) *
                 (ulonglong)*(ushort *)(local_1f8 + (longlong)iVar8 * 2) + local_1f0);
      fVar22 = ABS(*(float *)(pdVar10 + 0xc) * *(float *)(param_1 + 0x60));
      fVar19 = ABS(*(float *)((longlong)pdVar10 + 100) * *(float *)(param_1 + 100));
      if ((*(byte *)(param_1 + 0xe6) < 7) &&
         ((0x43U >> (*(byte *)(param_1 + 0xe6) & 0x1f) & 1) != 0)) {
        fVar19 = fVar22;
      }
      local_178[2] = pdVar10[5];
      local_178[0] = pdVar10[3];
      local_178[1] = pdVar10[4];
      local_198 = *pdVar10;
      dStack_190 = pdVar10[1];
      local_188 = pdVar10[2];
      local_208 = &local_198;
      FUN_147c307b7(pdVar10,local_1d0,param_6,local_178);
      if ((longlong)*(int *)(param_1 + 0xd4) != 0) {
        local_1d8 = local_178[2];
        dVar14 = (double)local_1a8._0_8_ - local_178[2];
        local_1e0 = local_178[1];
        dVar15 = local_1c8 - local_178[1];
        local_1e8 = local_178[0];
        dVar4 = local_1b8 - local_178[0];
        dVar3 = dVar14 * dVar14 + dVar4 * dVar4 + dVar15 * dVar15;
        if (9.99999993922529e-09 < dVar3) {
          dVar17 = 1.0 / SQRT(dVar3);
          dVar4 = dVar4 * dVar17;
          dVar15 = dVar15 * dVar17;
          dVar14 = dVar14 * dVar17;
        }
        fVar1 = *(float *)((longlong)pdVar10 + (longlong)*(int *)(param_1 + 0xd4) + 4);
        dVar17 = (double)fVar1;
        dVar14 = dVar14 * dVar17;
        dVar15 = dVar15 * dVar17;
        dVar4 = dVar4 * dVar17;
        if ((float)dVar3 <= fVar1 * fVar1) {
          dVar14 = dVar14 * 4398046511104.0;
          dVar15 = dVar15 * 4398046511104.0;
          dVar4 = dVar4 * 4398046511104.0;
        }
        local_178[0] = local_178[0] + dVar4;
        local_178[1] = local_178[1] + dVar15;
        local_178[2] = local_178[2] + dVar14;
        local_198 = dVar4 + local_198;
        dStack_190 = dVar15 + dStack_190;
        local_188 = dVar14 + local_188;
      }
      if (0 < (longlong)*(int *)(param_1 + 0xd8)) {
        fVar21 = *(float *)((longlong)pdVar10 + (longlong)*(int *)(param_1 + 0xd8));
      }
      lVar7 = (longlong)*(int *)(param_1 + 200);
      if (0 < lVar7) {
        uVar24 = *(undefined4 *)((longlong)pdVar10 + lVar7);
        uVar20 = *(undefined4 *)((longlong)pdVar10 + lVar7 + 4);
        uVar18 = *(undefined4 *)((longlong)pdVar10 + lVar7 + 8);
        uVar23 = *(undefined4 *)((longlong)pdVar10 + lVar7 + 0xc);
      }
      iVar8 = param_7;
      do {
        *param_2 = (float)(local_178[0] - dVar6);
        param_2[1] = (float)(local_178[1] - dVar5);
        param_2[2] = (float)(local_178[2] - dVar16);
        param_2[3] = *(float *)(pdVar10 + 0x12);
        param_2[4] = (float)(local_198 - dVar6);
        param_2[5] = (float)(dStack_190 - dVar5);
        param_2[6] = (float)(local_188 - dVar16);
        param_2[7] = (float)(*(uint *)((longlong)pdVar10 + 0x6c) & 0x1ffffff) / 10000.0;
        uVar13 = -(uint)(*(float *)((longlong)pdVar10 + 0x54) < 0.0);
        param_2[8] = (float)(~-(uint)(*(float *)(pdVar10 + 10) < 0.0) & (uint)fVar22 |
                            -(uint)(*(float *)(pdVar10 + 10) < 0.0) & (uint)-fVar22);
        param_2[9] = (float)(~uVar13 & (uint)fVar19 | uVar13 & (uint)-fVar19);
        param_2[10] = *(float *)((longlong)pdVar10 + 0x3c);
        param_2[0xb] = fVar21;
        dVar3 = pdVar10[0xf];
        *(double *)(param_2 + 0xc) = pdVar10[0xe];
        *(double *)(param_2 + 0xe) = dVar3;
        if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
          *param_3 = uVar24;
          param_3[1] = uVar20;
          param_3[2] = uVar18;
          param_3[3] = uVar23;
          param_3 = param_3 + 4;
        }
        param_2 = param_2 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    } while (uVar11 != uVar9);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435ed09a FUN_1435ed09a body=4808 status=ok
// SIG undefined FUN_1435ed09a(void)

void FUN_1435ed09a(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,longlong *param_6)

{
  byte *pbVar1;
  double dVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined *puVar14;
  uint *puVar15;
  byte bVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  int *piVar22;
  ulonglong uVar23;
  uint *puVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  undefined **ppuVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  int iVar36;
  bool bVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  int local_1b4;
  undefined8 *local_1b0;
  int local_1a4;
  longlong local_1a0;
  undefined *local_198;
  int local_18c;
  undefined8 *local_188;
  longlong local_180;
  undefined8 *local_178;
  uint *local_170;
  longlong local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  longlong local_140;
  undefined1 local_138 [112];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar28 = *(undefined4 *)(param_3 + 0x3090);
  lVar13 = param_6[0x22];
  lVar8 = (**(code **)(*param_1 + 0x50))();
  if (((lVar8 == 0) || ((*(uint *)((longlong)param_1 + 0xc) & 2) == 0)) || (DAT_14c7616dc != '\x01')
     ) goto LAB_1435ed78a;
  cVar6 = *(char *)(lVar8 + 0xc0);
  if (cVar6 == '\x02') {
    plVar10 = param_6 + 10;
    if ((longlong *)param_6[0xc] != (longlong *)0x0) {
      plVar10 = (longlong *)param_6[0xc];
    }
    lVar13 = plVar10[param_5];
    lVar8 = *param_1;
    local_1f8 = CONCAT71(local_1f8._1_7_,1);
LAB_1435ed1ff:
    (**(code **)(lVar8 + 0x60))(param_1,param_2,lVar13,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_218);
  }
  if (cVar6 == '\x01') {
    plVar10 = param_6 + 10;
    if ((longlong *)param_6[0xc] != (longlong *)0x0) {
      plVar10 = (longlong *)param_6[0xc];
    }
    lVar13 = plVar10[param_5];
    lVar8 = *param_1;
    local_1f8 = (ulonglong)local_1f8._1_7_ << 8;
    goto LAB_1435ed1ff;
  }
  if (cVar6 != '\0') goto LAB_1435ed78a;
  local_1d8 = (ulonglong)*(int *)(lVar8 + 0xc);
  local_1b4 = (**(code **)(*param_1 + 0x40))(param_1,uVar28);
  lVar32 = *(longlong *)(lVar8 + 0x68);
  local_1c0 = param_3;
  local_180 = lVar8;
  if ((*(byte *)(lVar32 + 0x28) & 1) == 0) {
    local_18c = 2;
    local_1cc = 1;
    local_178 = &DAT_14caf6048;
    if ((*(char *)(param_3 + 0x23f2) == '\x01') && (local_1a4 = 4, *(int *)(param_3 + 0x1dd0) != 0))
    {
      uVar20 = FUN_144b2acba(param_3);
      local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,uVar20);
      local_1cc = (uVar20 & 0xff) + 1;
    }
    else {
      local_1a4 = 4;
      local_1e0 = (longlong *)((ulonglong)local_1e0 & 0xffffffff00000000);
    }
  }
  else {
    iVar27 = *(int *)(lVar32 + 4);
    local_18c = *(int *)(lVar32 + 8);
    local_1cc = 1;
    if (*(char *)(param_3 + 0x23f2) == '\x01') {
      if (*(int *)(param_3 + 0x1dd0) == 0) {
        local_1e0 = (longlong *)((ulonglong)local_1e0._4_4_ << 0x20);
      }
      else {
        uVar20 = FUN_144b2acba(param_3);
        local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,uVar20);
        local_1cc = (uVar20 & 0xff) + 1;
      }
    }
    else {
      local_1e0 = (longlong *)((ulonglong)local_1e0._4_4_ << 0x20);
    }
    local_178 = &DAT_14caf6048;
    local_1a4 = iVar27;
    if (iVar27 != 4) {
      local_178 = &DAT_14caf5b40;
    }
  }
  plVar10 = (longlong *)param_6[0x1d];
  puVar34 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8)
  ;
  puVar15 = (uint *)*puVar34;
  if (puVar15 != (uint *)0x0) goto LAB_1435ed29b;
  while( true ) {
    FUN_14472e504(puVar34);
    puVar15 = (uint *)*puVar34;
LAB_1435ed29b:
    lVar8 = local_180;
    puVar35 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar20 = puVar15[0x12];
    if (puVar35 + 0x30 <= puVar15 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
      LOCK();
      uVar30 = *puVar15;
      *puVar15 = *puVar15 + uVar20 + 1;
      UNLOCK();
      if ((uVar30 ^ uVar20) != 0xffffffff) break;
      puVar15 = (uint *)*puVar34;
      *puVar15 = 0xffffffff;
      *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
      puVar15[0x12] = 0;
      *puVar34 = puVar15;
      puVar35 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
      uVar20 = 0;
      if (puVar35 + 0x30 <= puVar15 + 0x4000) {
        uVar20 = 1;
        goto LAB_1435ed319;
      }
    }
  }
  uVar20 = uVar20 + 1;
LAB_1435ed319:
  *(undefined8 **)(puVar15 + 0x10) = puVar35 + 0x31;
  puVar15[0x12] = uVar20;
  *(int *)(puVar35 + -1) = ((int)puVar35 + -8) - (int)puVar15;
  *(undefined4 *)((longlong)puVar35 + -4) = 0x180;
  puVar35[1] = 0;
  *puVar35 = &PTR_FUN_14aa07718;
  lVar32 = *plVar10;
  do {
    puVar35[1] = lVar32;
    LOCK();
    lVar21 = *plVar10;
    bVar37 = lVar32 == lVar21;
    if (bVar37) {
      *plVar10 = (longlong)puVar35;
      lVar21 = lVar32;
    }
    UNLOCK();
    lVar32 = lVar21;
  } while (!bVar37);
  puVar35[2] = &PTR_FUN_14aa07720;
  *(undefined4 *)(puVar35 + 4) = 0xffffffff;
  *(char *)((longlong)puVar35 + 0x24) = (char)uVar28;
  *(undefined2 *)((longlong)puVar35 + 0x25) = 1;
  puVar35[0x15] = 0;
  puVar35[0x16] = 0x800000000;
  puVar35[0x1b] = 0;
  puVar35[0x1c] = 0x200000000;
  puVar35[0x23] = 0;
  puVar35[0x24] = 0x300000000;
  puVar35[0x25] = 0;
  puVar35[0x26] = 0;
  puVar35[0x27] = 0;
  *(undefined4 *)(puVar35 + 0x28) = 0x1ffffff;
  ppuVar29 = &PTR_FUN_14aa07730;
  puVar35[3] = &PTR_FUN_14aa07730;
  uVar7 = 0;
  *(undefined4 *)(puVar35 + 0x2a) = 0;
  puVar35[0x2b] = 0;
  *(undefined4 *)(puVar35 + 0x2c) = 0;
  puVar35[0x2d] = 0;
  *(undefined2 *)(puVar35 + 0x2e) = 0x100;
  *(undefined4 *)((longlong)puVar35 + 0x174) = 0;
  puVar35[0x2f] = 0;
  *(undefined4 *)(puVar35 + 0x29) = 0;
  uVar17 = 4;
  if ((*(byte *)(*(longlong *)(local_180 + 0x68) + 0x28) & 1) != 0) {
    uVar17 = *(undefined4 *)(*(longlong *)(local_180 + 0x68) + 4);
  }
  puVar34 = puVar35 + 3;
  *(undefined4 *)(puVar35 + 0x2a) = uVar17;
  bVar16 = (byte)*(uint *)(param_1 + 4);
  if ((*(uint *)(param_1 + 4) & 1) != 0) {
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    bVar16 = (byte)(int)param_1[4];
    ppuVar29 = (undefined **)*puVar34;
  }
  *(byte *)((longlong)puVar35 + 0x171) = bVar16 & 1;
  *(undefined4 *)((longlong)puVar35 + 0x174) = uVar7;
  local_188 = puVar35 + 2;
  (*(code *)ppuVar29[3])(puVar34,lVar13);
  if (*(char *)(lVar8 + 0xbc) == '\0') {
    FUN_147c30ee2(param_2,lVar13);
  }
  puVar35 = (undefined8 *)param_6[0x20];
  bVar16 = (byte)local_1e0 & 0x1f;
  iVar36 = (int)local_1d8 << bVar16;
  iVar27 = local_1b4 * iVar36;
  plVar10 = puVar35 + 1;
  if (*(int *)(puVar35 + 2) == 0) {
LAB_1435edef6:
    local_1e0 = plVar10;
    local_1b0 = puVar35;
    puVar14 = (undefined *)FUN_1400f777c(&DAT_14ca8c130,*puVar35,iVar27,0);
    lVar13 = (longlong)*(int *)(local_1b0 + 2);
    uVar20 = *(int *)(local_1b0 + 2) + 1;
    *(uint *)(local_1b0 + 2) = uVar20;
    if (*(uint *)((longlong)local_1b0 + 0x14) < uVar20) {
      local_1c8 = lVar13;
      local_198 = puVar14;
      FUN_1400f7990(local_1e0,lVar13);
      puVar14 = local_198;
      lVar13 = local_1c8;
    }
    *(undefined **)(local_1b0[1] + lVar13 * 8) = puVar14;
    lVar13 = *(longlong *)(local_1b0[1] + (longlong)(*(int *)(local_1b0 + 2) + -1) * 8);
    uVar20 = *(uint *)(lVar13 + 0x24);
    plVar10 = local_1e0;
    puVar35 = local_1b0;
  }
  else {
    lVar13 = *(longlong *)(*plVar10 + (longlong)(*(int *)(puVar35 + 2) + -1) * 8);
    uVar20 = *(uint *)(lVar13 + 0x24);
    if (*(uint *)(lVar13 + 0x20) < uVar20 + iVar27) goto LAB_1435edef6;
  }
  plVar12 = (longlong *)(ulonglong)uVar20;
  lVar32 = (longlong)plVar12 + *(longlong *)(lVar13 + 0x18);
  *(uint *)(lVar13 + 0x24) = (iVar27 + 0xfU & 0xfffffff0) + uVar20;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    puVar14 = (undefined *)0x0;
    uVar23 = (ulonglong)(uint)(0 << bVar16);
    puVar35 = (undefined8 *)0x0;
  }
  else {
    iVar36 = iVar36 * 0x10;
    if (*(int *)(puVar35 + 2) == 0) {
LAB_1435edf7f:
      local_1e0 = plVar12;
      local_1c8 = lVar13;
      local_1b0 = puVar35;
      local_1a0 = lVar32;
      local_198 = (undefined *)FUN_1400f777c(&DAT_14ca8c130,*puVar35,iVar36,0);
      iVar27 = *(int *)(local_1b0 + 2);
      *(uint *)(local_1b0 + 2) = iVar27 + 1U;
      if (*(uint *)((longlong)local_1b0 + 0x14) < iVar27 + 1U) {
        FUN_1400f7990(plVar10,iVar27);
      }
      *(undefined **)(local_1b0[1] + (longlong)iVar27 * 8) = local_198;
      puVar14 = *(undefined **)(local_1b0[1] + (longlong)(*(int *)(local_1b0 + 2) + -1) * 8);
      uVar20 = *(uint *)(puVar14 + 0x24);
      uVar30 = iVar36 + uVar20;
      plVar12 = local_1e0;
      lVar13 = local_1c8;
      lVar32 = local_1a0;
    }
    else {
      puVar14 = *(undefined **)(*plVar10 + (longlong)(*(int *)(puVar35 + 2) + -1) * 8);
      uVar20 = *(uint *)(puVar14 + 0x24);
      uVar30 = uVar20 + iVar36;
      if (*(uint *)(puVar14 + 0x20) < uVar30) goto LAB_1435edf7f;
    }
    puVar35 = (undefined8 *)(ulonglong)uVar20;
    uVar23 = (longlong)puVar35 + *(longlong *)(puVar14 + 0x18);
    *(uint *)(puVar14 + 0x24) = uVar30;
  }
  if ((lVar32 != 0) && (((*(byte *)(param_1 + 4) & 1) == 0 || (uVar23 != 0)))) {
    local_1e0 = plVar12;
    local_1c8 = lVar13;
    local_1b0 = puVar35;
    local_198 = puVar14;
    if ((*(int *)(lVar8 + 0x44) != 0) &&
       (((param_1[3] != 0 &&
         (local_1a0 = lVar32, plVar10 = (longlong *)FUN_14485b2b4(param_1[3],uVar28),
         lVar32 = local_1a0, plVar10 != (longlong *)0x0)) &&
        ((cVar6 = FUN_1400de82f(plVar10), uVar25 = local_1d8, cVar6 != '\0' ||
         (((iVar27 = (**(code **)(*plVar10 + 0x270))(plVar10), uVar25 = local_1d8, iVar27 == 5 ||
           (iVar27 = (**(code **)(*plVar10 + 0x270))(plVar10), uVar25 = local_1d8, iVar27 == 6)) ||
          (lVar32 = local_1a0, *(int *)(lVar8 + 0x44) - 3U < 2)))))))) {
      lVar13 = uVar25 * 8;
      puVar35 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xde8);
      puVar15 = (uint *)*puVar35;
      local_1d8 = uVar23;
      if (puVar15 != (uint *)0x0) goto LAB_1435edce9;
LAB_1435edcd3:
      FUN_144769a66(puVar35);
      puVar15 = (uint *)*puVar35;
LAB_1435edce9:
      uVar23 = *(longlong *)(puVar15 + 0x10) + 0xfU & 0xfffffffffffffff0;
      puVar24 = (uint *)(lVar13 + uVar23);
      if (puVar15 + 0x4000 < puVar24) {
        if (lVar13 + 0x68U < 0x10001) goto code_r0x0001435edd1a;
        puVar15 = (uint *)FUN_14472e5b2(lVar13 + 0x68U,8);
        *puVar15 = 0xffffffff;
        puVar15[0x12] = 0;
        uVar23 = (longlong)puVar15 + 0x67U & 0xfffffffffffffff0;
        *(uint **)(puVar15 + 0x10) = puVar15 + uVar25 * 2 + 0x1a;
        *puVar15 = 1;
      }
      else {
        uVar20 = puVar15[0x12];
LAB_1435edd70:
        *(uint **)(puVar15 + 0x10) = puVar24 + 2;
        puVar15[0x12] = uVar20 + 1;
      }
      local_170 = (uint *)(uVar23 - 8);
      *(int *)(uVar23 - 8) = (int)local_170 - (int)puVar15;
      *(int *)(uVar23 - 4) = (int)lVar13;
      if (3 < *(int *)(lVar8 + 0x44) - 1U) goto LAB_1435ee1bd;
      lVar13 = *(longlong *)(lVar8 + 0x30);
      lVar21 = (longlong)*(int *)(lVar8 + 0x10);
      lVar32 = *(longlong *)(lVar8 + 0x28);
      uVar20 = *(uint *)(lVar8 + 0xc);
      uVar25 = (ulonglong)uVar20;
      cVar6 = *(char *)(lVar8 + 0xbc);
      switch(*(int *)(lVar8 + 0x44)) {
      case 1:
        if (0 < (int)uVar20) {
          uVar31 = 0;
          do {
            lVar8 = (ulonglong)*(ushort *)(lVar13 + uVar31 * 2) * lVar21;
            dVar38 = *(double *)(lVar32 + 0x28 + lVar8);
            dVar39 = *(double *)(lVar32 + 0x18 + lVar8);
            dVar41 = *(double *)(lVar32 + 0x20 + lVar8);
            if (cVar6 == '\0') {
              dVar2 = dVar38 * *(double *)(local_1c0 + 0xb08);
              dVar40 = dVar41 * *(double *)(local_1c0 + 0xae8);
            }
            else {
              dVar2 = (dVar39 * *(double *)(param_2 + 0x110) + dVar41 * *(double *)(param_2 + 0x130)
                       + dVar38 * *(double *)(param_2 + 0x150) + *(double *)(param_2 + 0x170)) *
                      *(double *)(local_1c0 + 0xb08);
              dVar40 = (dVar38 * *(double *)(param_2 + 0x148) +
                        dVar41 * *(double *)(param_2 + 0x128) +
                        dVar39 * *(double *)(param_2 + 0x108) +
                       SUB168(*(undefined1 (*) [16])(param_2 + 0x160),8)) *
                       *(double *)(local_1c0 + 0xae8);
              dVar39 = dVar38 * *(double *)(param_2 + 0x140) +
                       dVar41 * *(double *)(param_2 + 0x120) + dVar39 * *(double *)(param_2 + 0x100)
                       + SUB168(*(undefined1 (*) [16])(param_2 + 0x160),0);
            }
            dVar38 = *(double *)(local_1c0 + 0xac8);
            dVar41 = *(double *)(local_1c0 + 0xb28);
            *(int *)(uVar23 + uVar31 * 8) = (int)uVar31;
            *(float *)(uVar23 + 4 + uVar31 * 8) = (float)(dVar39 * dVar38 + dVar40 + dVar2 + dVar41)
            ;
            uVar31 = uVar31 + 1;
          } while (uVar25 != uVar31);
        }
        break;
      case 2:
        if (0 < (int)uVar20) {
          uVar31 = 0;
          do {
            lVar8 = (ulonglong)*(ushort *)(lVar13 + uVar31 * 2) * lVar21;
            if (cVar6 == '\0') {
              dVar38 = *(double *)(lVar32 + 0x18 + lVar8);
              dVar39 = *(double *)(lVar32 + 0x20 + lVar8);
              dVar41 = *(double *)(lVar32 + 0x28 + lVar8);
            }
            else {
              dVar41 = *(double *)(lVar32 + 0x28 + lVar8);
              dVar2 = *(double *)(lVar32 + 0x18 + lVar8);
              dVar40 = *(double *)(lVar32 + 0x20 + lVar8);
              dVar38 = dVar41 * *(double *)(param_2 + 0x140) +
                       dVar40 * *(double *)(param_2 + 0x120) + dVar2 * *(double *)(param_2 + 0x100)
                       + SUB168(*(undefined1 (*) [16])(param_2 + 0x160),0);
              dVar39 = dVar41 * *(double *)(param_2 + 0x148) +
                       dVar40 * *(double *)(param_2 + 0x128) + dVar2 * *(double *)(param_2 + 0x108)
                       + SUB168(*(undefined1 (*) [16])(param_2 + 0x160),8);
              dVar41 = dVar2 * *(double *)(param_2 + 0x110) + dVar40 * *(double *)(param_2 + 0x130)
                       + dVar41 * *(double *)(param_2 + 0x150) + *(double *)(param_2 + 0x170);
            }
            dVar41 = *(double *)(local_1c0 + 0x1058) - dVar41;
            dVar38 = *(double *)(local_1c0 + 0x1048) - dVar38;
            dVar39 = *(double *)(local_1c0 + 0x1050) - dVar39;
            *(int *)(uVar23 + uVar31 * 8) = (int)uVar31;
            *(float *)(uVar23 + 4 + uVar31 * 8) =
                 (float)(dVar41 * dVar41 + dVar38 * dVar38 + dVar39 * dVar39);
            uVar31 = uVar31 + 1;
          } while (uVar25 != uVar31);
        }
        break;
      case 3:
        if (0 < (int)uVar20) {
          uVar31 = 0;
          do {
            uVar3 = *(ushort *)(lVar13 + uVar31 * 2);
            *(int *)(uVar23 + uVar31 * 8) = (int)uVar31;
            *(uint *)(uVar23 + 4 + uVar31 * 8) =
                 *(uint *)(lVar32 + 0x6c + (ulonglong)uVar3 * lVar21) & 0x1ffffff;
            uVar31 = uVar31 + 1;
          } while (uVar25 != uVar31);
        }
        goto LAB_1435ee07b;
      case 4:
        if (0 < (int)uVar20) {
          uVar31 = 0;
          do {
            uVar3 = *(ushort *)(lVar13 + uVar31 * 2);
            *(int *)(uVar23 + uVar31 * 8) = (int)uVar31;
            *(uint *)(uVar23 + 4 + uVar31 * 8) =
                 ~*(uint *)(lVar32 + 0x6c + (ulonglong)uVar3 * lVar21) & 0x1ffffff;
            uVar31 = uVar31 + 1;
          } while (uVar25 != uVar31);
        }
LAB_1435ee07b:
        FUN_147c43fba(uVar23);
        goto LAB_1435ee1bd;
      }
      FUN_147c43c3e(uVar23);
LAB_1435ee1bd:
      lVar13 = local_1c0;
      local_1f8 = local_1c0 + 0x1048;
      local_1e8 = local_1cc;
      local_1f0 = param_2 + 0x100;
      FUN_1435ec950(param_1,local_1a0,local_1d8,uVar23);
      if (uVar23 != 0) {
        piVar22 = (int *)((longlong)local_170 - (ulonglong)*local_170);
        LOCK();
        *piVar22 = *piVar22 + -1;
        UNLOCK();
        if (*piVar22 == 0) {
          if (*(longlong *)(piVar22 + 0x10) - (longlong)piVar22 == 0x10000) {
            lVar13 = DAT_14c872d30;
            if (DAT_14c872d30 == 0) {
              lVar13 = FUN_145bdc178();
            }
            FUN_140028df4(lVar13,piVar22);
            lVar13 = local_1c0;
          }
          else {
            FUN_144705e74(piVar22);
            lVar13 = local_1c0;
          }
        }
      }
      goto LAB_1435ed86b;
    }
    lVar13 = local_1c0;
    local_1f0 = param_2 + 0x100;
    local_1f8 = local_1c0 + 0x1048;
    local_1e8 = local_1cc;
    FUN_1435ec950(param_1,lVar32,uVar23,0);
LAB_1435ed86b:
    memcpy(local_138,param_1 + 0x20,0xb0);
    FUN_1435ee368(param_2,lVar13,&local_150,&local_160);
    local_bc = (float)local_158;
    local_c0 = (float)local_160;
    local_c4 = (float)local_148;
    local_c8 = (float)local_150;
    lVar13 = FUN_145fa0c36();
    local_1f0 = CONCAT44(local_1f0._4_4_,1);
    local_1f8 = CONCAT44(local_1f8._4_4_,1);
    (**(code **)(*DAT_14ca83900 + 0x138))
              (DAT_14ca83900,&local_140,local_138,*(undefined8 *)(lVar13 + 0x48));
    if (local_140 != 0) {
      LOCK();
      *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
      UNLOCK();
      if (local_140 != 0) {
        LOCK();
        puVar15 = (uint *)(local_140 + 8);
        uVar20 = *puVar15;
        *puVar15 = *puVar15 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar15 = (uint *)(local_140 + 8);
          LOCK();
          uVar20 = *puVar15;
          *puVar15 = *puVar15 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar16 = *(byte *)(local_140 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = local_140;
            plVar10 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar16 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar10;
                LOCK();
                bVar37 = plVar10 != DAT_14ca843c0;
                plVar12 = plVar11;
                if (bVar37) {
                  plVar10 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar37);
            }
            else {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar37 = plVar12 != DAT_14ca843c8;
                plVar10 = plVar11;
                if (bVar37) {
                  plVar12 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar37);
            }
          }
        }
      }
    }
    lVar13 = local_188[0x2d];
    local_188[0x2d] = local_140;
    if (lVar13 != 0) {
      LOCK();
      puVar15 = (uint *)(lVar13 + 8);
      uVar20 = *puVar15;
      *puVar15 = *puVar15 - 1;
      UNLOCK();
      if ((uVar20 & 0x3fffffff) == 1) {
        puVar15 = (uint *)(lVar13 + 8);
        LOCK();
        uVar20 = *puVar15;
        *puVar15 = *puVar15 | 0x40000000;
        UNLOCK();
        if ((uVar20 >> 0x1e & 1) == 0) {
          bVar16 = *(byte *)(lVar13 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar16 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar10;
              LOCK();
              bVar37 = plVar10 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar37) {
                plVar10 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar37);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar37 = plVar12 != DAT_14ca843c8;
              plVar10 = plVar11;
              if (bVar37) {
                plVar12 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar37);
          }
        }
      }
      local_140 = local_188[0x2d];
    }
    lVar13 = local_188[0x29];
    if (lVar13 != local_140) {
      local_188[0x29] = local_140;
      if (local_140 != 0) {
        LOCK();
        *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
        UNLOCK();
      }
      if (lVar13 != 0) {
        LOCK();
        puVar15 = (uint *)(lVar13 + 8);
        uVar20 = *puVar15;
        *puVar15 = *puVar15 - 1;
        UNLOCK();
        if ((uVar20 & 0x3fffffff) == 1) {
          puVar15 = (uint *)(lVar13 + 8);
          LOCK();
          uVar20 = *puVar15;
          *puVar15 = *puVar15 | 0x40000000;
          UNLOCK();
          if ((uVar20 >> 0x1e & 1) == 0) {
            bVar16 = *(byte *)(lVar13 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar13;
            plVar10 = DAT_14ca843c0;
            plVar12 = DAT_14ca843c8;
            if ((bVar16 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar10;
                LOCK();
                bVar37 = plVar10 != DAT_14ca843c0;
                plVar12 = plVar11;
                if (bVar37) {
                  plVar10 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar12;
                UNLOCK();
              } while (bVar37);
            }
            else {
              do {
                *plVar11 = (longlong)plVar12;
                LOCK();
                bVar37 = plVar12 != DAT_14ca843c8;
                plVar10 = plVar11;
                if (bVar37) {
                  plVar12 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar37);
            }
          }
        }
      }
    }
    puVar9 = local_188;
    puVar35 = local_188 + 3;
    puVar33 = (undefined8 *)local_188[0x13];
    if ((undefined8 *)local_188[0x13] == (undefined8 *)0x0) {
      puVar33 = puVar35;
    }
    puVar33[2] = local_1c8;
    *(short *)((longlong)puVar33 + 0x1c) = (short)local_1b4;
    *(int *)(puVar33 + 3) = (int)local_1e0;
    (**(code **)(*param_1 + 0x48))();
    uVar28 = SUB84(local_1b0,0);
    puVar14 = local_198;
    if (local_198 == (undefined *)0x0) {
      uVar28 = 0;
      puVar14 = &DAT_14caf6f28;
    }
    puVar33 = (undefined8 *)puVar9[0x13];
    if ((undefined8 *)puVar9[0x13] == (undefined8 *)0x0) {
      puVar33 = puVar35;
    }
    puVar33[4] = puVar14;
    *(undefined4 *)(puVar33 + 5) = uVar28;
    lVar13 = *(longlong *)(local_180 + 0x68);
    if ((*(byte *)(lVar13 + 0x28) & 1) != 0) {
      uVar4 = *(undefined8 *)(lVar13 + 0x20);
      *(undefined4 *)(puVar9 + 0x2a) = *(undefined4 *)(lVar13 + 4);
      puVar9[0x2b] = uVar4;
    }
    if ((undefined8 *)puVar9[0x13] != (undefined8 *)0x0) {
      puVar35 = (undefined8 *)puVar9[0x13];
    }
    *puVar35 = local_178;
  }
  iVar27 = *(int *)((longlong)param_1 + 0x34);
  iVar36 = (int)param_1[0x18];
  iVar26 = iVar36;
  if (iVar27 < iVar36) {
    iVar26 = iVar27;
  }
  if (iVar36 < 0) {
    iVar26 = iVar27;
  }
  iVar27 = (int)param_6[1];
  iVar36 = (int)param_6[2];
  iVar5 = (iVar36 + 0x44) / 0x44;
  *(int *)(param_6 + 2) = iVar36 + 1;
  lVar13 = param_2;
  if (iVar27 < iVar5) {
    do {
      local_168 = lVar13;
      local_1b4 = iVar27;
      lVar13 = FUN_14001cc68(0x3fc0,0x10);
      lVar8 = 0;
      do {
        *(undefined8 *)(lVar13 + 0xa8 + lVar8) = 0;
        puVar35 = (undefined8 *)(lVar13 + 0xb8 + lVar8);
        *puVar35 = 0;
        puVar35[1] = 0;
        *(undefined8 *)(lVar13 + 200 + lVar8) = 0;
        *(undefined8 *)(lVar13 + 0xd0 + lVar8) = 0xffffffff;
        *(undefined8 *)(lVar13 + 0xd8 + lVar8) = 0xff0000ffffffff;
        *(undefined1 *)(lVar13 + 0xe0 + lVar8) = 0;
        *(undefined4 *)(lVar13 + 0xe4 + lVar8) = 0x40c00f07;
        pbVar1 = (byte *)(lVar13 + 0xe8 + lVar8);
        *pbVar1 = *pbVar1 & 0xfc;
        *(undefined1 **)(lVar13 + 0xb0 + lVar8) = &DAT_100000001;
        FUN_14470b9e0(lVar13 + lVar8,1);
        lVar8 = lVar8 + 0xf0;
      } while (lVar8 != 0x3fc0);
      iVar27 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar27 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar27 + 1U) {
        FUN_14002baf6(param_6,iVar27);
      }
      *(longlong *)(*param_6 + (longlong)iVar27 * 8) = lVar13;
      iVar27 = local_1b4 + 1;
      param_2 = local_168;
      lVar13 = local_168;
    } while (iVar27 != iVar5);
  }
  lVar13 = *(longlong *)(*param_6 + (longlong)(iVar36 / 0x44) * 8);
  lVar8 = (ulonglong)(uint)(iVar36 % 0x44) * 0xf0;
  puVar35 = (undefined8 *)(lVar13 + lVar8);
  puVar9 = *(undefined8 **)(lVar13 + 0xa8 + lVar8);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = puVar35;
  }
  puVar33 = &DAT_14caf5b58;
  if (local_18c == 2) {
    puVar33 = &DAT_14caf6030;
  }
  puVar9[3] = puVar33;
  *(int *)((longlong)puVar9 + 0x5c) = local_18c;
  *(int *)(puVar9 + 0xc) = iVar26;
  *(undefined4 *)(puVar9 + 0xb) = 0;
  *(undefined8 **)(lVar13 + 0xb8 + lVar8) = puVar34;
  *(undefined8 *)(lVar13 + 200 + lVar8) = 0;
  puVar34 = (undefined8 *)(param_2 + 0x308);
  if (*(char *)(local_180 + 0xbc) != '\0') {
    puVar34 = (undefined8 *)(param_2 + 0x250);
  }
  *puVar9 = *puVar34;
  *(undefined4 *)(puVar9 + 0xd) = 0;
  *(int *)((longlong)puVar9 + 0x6c) = local_1a4 * iVar26 + -1;
  uVar30 = (*(byte *)(param_2 + 0x2b0) & 1) << 8;
  uVar20 = *(uint *)(lVar13 + 0xe4 + lVar8);
  *(uint *)(lVar13 + 0xe4 + lVar8) = uVar20 & 0xfffffeff | uVar30;
  if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
    uVar23 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar23) == *(longlong *)(local_1c0 + 0x4c0))
      {
        if ((int)(~uVar23 >> 3) != 0) {
          bVar16 = *(byte *)(param_2 + 0x6d) >> 3;
          goto LAB_1435ed714;
        }
        break;
      }
      uVar23 = uVar23 + 8;
    } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar23);
  }
  bVar16 = *(byte *)(param_2 + 0x6d);
LAB_1435ed714:
  uVar18 = (bVar16 & 7) << 0x11;
  *(uint *)((longlong)puVar35 + 0xe4) = uVar20 & 0xfff1feff | uVar30 | uVar18;
  uVar19 = (*(byte *)(param_2 + 0x77) & 0x40) << 7;
  *(uint *)((longlong)puVar35 + 0xe4) = uVar20 & 0xfff1deff | uVar30 | uVar18 | uVar19;
  puVar35[0x18] = param_1[3];
  *(uint *)((longlong)puVar35 + 0xe4) = uVar20 & 0xffe01eff | uVar30 | uVar18 | uVar19 | 0x100000;
  *(uint *)((longlong)puVar35 + 0xe4) =
       uVar20 & 0xffc01eff | uVar30 | uVar18 | uVar19 | 0x100000 |
       (uint)((*(byte *)(param_2 + 0x6c) & 6) != 0) << 0x15;
  FUN_1436a14f8(param_6,param_5);
LAB_1435ed78a:
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001435edd1a:
  uVar20 = puVar15[0x12];
  while( true ) {
    *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
    LOCK();
    uVar30 = *puVar15;
    *puVar15 = *puVar15 + uVar20 + 1;
    UNLOCK();
    if ((uVar30 ^ uVar20) != 0xffffffff) break;
    puVar15 = (uint *)*puVar35;
    *puVar15 = 0xffffffff;
    *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
    puVar15[0x12] = 0;
    *puVar35 = puVar15;
    uVar23 = (longlong)puVar15 + 0x67U & 0xfffffffffffffff0;
    puVar24 = (uint *)(lVar13 + uVar23);
    uVar20 = 0;
    if (puVar24 <= puVar15 + 0x4000) goto LAB_1435edd70;
  }
  goto LAB_1435edcd3;
}



// FUNCTION 1435ee368 FUN_1435ee368 body=1096 status=ok
// SIG undefined FUN_1435ee368(void)

void FUN_1435ee368(longlong param_1,longlong param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  int *piVar5;
  double dVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar4 = *(longlong *)(param_1 + 0x2c8);
  dVar14 = *(double *)(lVar4 + 0x88);
  dVar1 = *(double *)(lVar4 + 0x78);
  dVar2 = *(double *)(lVar4 + 0x80);
  dVar11 = *(double *)(param_2 + 0xab8);
  dVar6 = *(double *)(param_2 + 0xad8);
  dVar12 = *(double *)(param_2 + 0xaf8);
  dVar3 = *(double *)(param_2 + 0xb18);
  dVar10 = dVar1 * *(double *)(param_2 + 0xac8) + dVar2 * *(double *)(param_2 + 0xae8) +
           dVar14 * *(double *)(param_2 + 0xb08) + *(double *)(param_2 + 0xb28);
  if (dVar10 <= 9.999999747378752e-06) {
    dVar10 = 9.999999747378752e-06;
  }
  *param_3 = (1.0 / dVar10) *
             (dVar14 * *(double *)(param_2 + 0xaf0) +
              dVar2 * *(double *)(param_2 + 0xad0) + dVar1 * *(double *)(param_2 + 0xab0) +
             *(double *)(param_2 + 0xb10));
  param_3[1] = (dVar14 * dVar12 + dVar2 * dVar6 + dVar1 * dVar11 + dVar3) * (1.0 / dVar10);
  piVar5 = *(int **)(param_1 + 0x2c8);
  fVar13 = (float)piVar5[0x24];
  dVar14 = *(double *)(piVar5 + 0x1e);
  dVar1 = *(double *)(piVar5 + 0x20);
  dVar2 = *(double *)(piVar5 + 0x22);
  piVar8 = piVar5 + 2;
  if (*(int **)(piVar5 + 0x1a) != (int *)0x0) {
    piVar8 = *(int **)(piVar5 + 0x1a);
  }
  pcVar9 = (char *)(**(code **)(**(longlong **)(piVar8 + (longlong)*piVar5 * 2) + 0x38))();
  if (*pcVar9 == '\x01') {
    dVar2 = (double)*(float *)(pcVar9 + 0x10);
    dVar11 = (double)*(float *)(pcVar9 + 0xc);
    fVar13 = *(float *)(pcVar9 + 4);
    dVar3 = (double)*(float *)(pcVar9 + 8);
    dVar14 = *(double *)(param_1 + 0x160) * 0.0 +
             dVar2 * *(double *)(param_1 + 0x140) +
             dVar11 * *(double *)(param_1 + 0x120) + dVar3 * *(double *)(param_1 + 0x100);
    dVar1 = *(double *)(param_1 + 0x168) * 0.0 +
            dVar2 * *(double *)(param_1 + 0x148) +
            dVar11 * *(double *)(param_1 + 0x128) + dVar3 * *(double *)(param_1 + 0x108);
    dVar2 = dVar3 * *(double *)(param_1 + 0x110) + dVar11 * *(double *)(param_1 + 0x130) +
            dVar2 * *(double *)(param_1 + 0x150) + *(double *)(param_1 + 0x170) * 0.0;
  }
  *param_4 = 0.0;
  param_4[1] = 0.0;
  if (0.0 < fVar13) {
    dVar12 = (double)fVar13;
    dVar3 = *(double *)(param_2 + 0xc70) * dVar12 + dVar2;
    dVar6 = *(double *)(param_2 + 0xc50) * dVar12 + dVar1;
    dVar11 = *(double *)(param_2 + 0xc30) * dVar12 + dVar14;
    dVar3 = (dVar3 * *(double *)(param_2 + 0xaf0) +
             dVar6 * *(double *)(param_2 + 0xad0) + dVar11 * *(double *)(param_2 + 0xab0) +
            *(double *)(param_2 + 0xb10)) /
            (dVar3 * *(double *)(param_2 + 0xb08) +
             dVar6 * *(double *)(param_2 + 0xae8) + dVar11 * *(double *)(param_2 + 0xac8) +
            *(double *)(param_2 + 0xb28)) - *param_3;
    if (8796093022208.0 <= dVar3) {
      dVar3 = 8796093022208.0;
    }
    if ((dVar3 != 0.0) || (NAN(dVar3))) {
      dVar2 = dVar2 + *(double *)(param_2 + 0xc78) * dVar12;
      dVar1 = dVar1 + *(double *)(param_2 + 0xc58) * dVar12;
      dVar14 = dVar14 + dVar12 * *(double *)(param_2 + 0xc38);
      auVar15._0_8_ =
           *(double *)(param_2 + 0xb10) +
           *(double *)(param_2 + 0xaf0) * dVar2 +
           *(double *)(param_2 + 0xad0) * dVar1 + *(double *)(param_2 + 0xab0) * dVar14;
      auVar15._8_8_ =
           *(double *)(param_2 + 0xb18) +
           *(double *)(param_2 + 0xaf8) * dVar2 +
           *(double *)(param_2 + 0xad8) * dVar1 + *(double *)(param_2 + 0xab8) * dVar14;
      dVar11 = *(double *)(param_2 + 0xb28) +
               *(double *)(param_2 + 0xb08) * dVar2 +
               *(double *)(param_2 + 0xae8) * dVar1 + *(double *)(param_2 + 0xac8) * dVar14;
      auVar16._8_4_ = SUB84(dVar11,0);
      auVar16._0_8_ =
           *(double *)(param_2 + 0xb20) +
           *(double *)(param_2 + 0xb00) * dVar2 +
           *(double *)(param_2 + 0xae0) * dVar1 + *(double *)(param_2 + 0xac0) * dVar14;
      auVar16._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar16 = divpd(auVar15,auVar16);
      dVar14 = auVar16._8_8_ - param_3[1];
      if (8796093022208.0 <= dVar14) {
        dVar14 = 8796093022208.0;
      }
      if ((dVar14 != 0.0) || (NAN(dVar14))) {
        iVar7 = _isnan(dVar3);
        if (iVar7 == 0) {
          iVar7 = _finite(dVar3);
          if (iVar7 != 0) {
            iVar7 = _isnan(dVar14);
            if (iVar7 == 0) {
              iVar7 = _finite(dVar14);
              if (iVar7 != 0) {
                *param_4 = 1.0 / dVar3;
                param_4[1] = -1.0 / dVar14;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1435ee7b0 FUN_1435ee7b0 body=6752 status=ok
// SIG undefined FUN_1435ee7b0(void)

void FUN_1435ee7b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  longlong *param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  ushort uVar8;
  double dVar9;
  undefined1 auVar10 [12];
  ulonglong uVar11;
  char cVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  longlong *plVar19;
  float *pfVar20;
  longlong *plVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  undefined7 uVar33;
  int iVar34;
  undefined8 *puVar35;
  double *pdVar36;
  double *pdVar37;
  undefined8 *puVar38;
  double *pdVar39;
  longlong lVar40;
  longlong *plVar41;
  longlong lVar42;
  undefined8 *puVar43;
  ulonglong uVar44;
  bool bVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_468 [32];
  double *local_448;
  float local_440;
  longlong local_438;
  float *local_430;
  float *local_428;
  int local_41c;
  ulonglong local_418;
  ulonglong local_410;
  int local_404;
  float *local_400;
  ulonglong local_3f8;
  longlong local_3f0;
  undefined8 *local_3e8;
  longlong local_3e0;
  ulonglong local_3d8;
  int local_3d0;
  undefined4 local_3cc;
  longlong *local_3c8;
  ulonglong local_3c0;
  ulonglong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  ulonglong local_3a0;
  undefined8 *local_398;
  longlong local_390;
  float local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  double local_370 [3];
  float local_358;
  float local_354;
  undefined8 local_350;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_338;
  undefined8 local_328;
  undefined4 local_320;
  undefined4 local_31c;
  double local_318 [14];
  double local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined2 local_25c;
  undefined1 local_25a;
  undefined8 local_258 [14];
  undefined1 local_1e8;
  double local_1d8 [5];
  double local_1b0;
  double local_1a8;
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double local_170;
  undefined1 local_168 [12];
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
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
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 local_108;
  undefined2 local_106;
  undefined2 local_104;
  undefined2 local_102;
  float local_100;
  undefined4 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (((*(byte *)((longlong)param_1 + 0xc) & 2) == 0) || (DAT_14c7616dd != '\x01'))
  goto LAB_1435eef4a;
  cVar12 = (char)param_1[0x1d];
  if (cVar12 == '\x01') {
    plVar21 = param_6 + 10;
    if ((longlong *)param_6[0xc] != (longlong *)0x0) {
      plVar21 = (longlong *)param_6[0xc];
    }
    lVar23 = plVar21[param_5];
    lVar42 = *param_1;
    local_448 = (double *)((ulonglong)local_448._1_7_ << 8);
  }
  else {
    if (cVar12 != '\x02') {
      if (cVar12 != '\0') goto LAB_1435eef4a;
      local_400 = (float *)param_6[0x22];
      piVar17 = &DAT_14c760db4;
      if (*(longlong *)(param_4 + 0x40) != 0) {
        piVar17 = (int *)(*(longlong *)(param_4 + 0x40) + 8);
      }
      iVar34 = *piVar17;
      local_430 = (float *)(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar34 * 2);
      iVar15 = *(int *)((longlong)param_1 + 0x34);
      iVar22 = (int)param_1[0x18];
      local_404 = iVar22;
      if (iVar15 < iVar22) {
        local_404 = iVar15;
      }
      if (iVar22 < 0) {
        local_404 = iVar15;
      }
      local_438 = param_3;
      local_410 = (**(code **)(*param_1 + 0x40))(param_1,iVar34);
      local_41c = (int)local_410;
      uVar14 = (**(code **)(*param_1 + 0x48))(param_1);
      local_418 = CONCAT44(local_418._4_4_,uVar14);
      local_3f0 = param_2;
      iVar15 = FUN_147c31d2e(param_1,param_2);
      local_3e0 = *(longlong *)(**(longlong **)(param_1[0x27] + 0xe0) + (longlong)iVar15 * 8);
      plVar21 = (longlong *)param_6[0x1d];
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xea8);
      puVar18 = (uint *)*puVar1;
      if (puVar18 != (uint *)0x0) goto LAB_1435ee962;
      while( true ) {
        FUN_14472e504(puVar1);
        puVar18 = (uint *)*puVar1;
LAB_1435ee962:
        puVar43 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
        uVar16 = puVar18[0x12];
        if (puVar43 + 0x5b <= puVar18 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
          LOCK();
          uVar29 = *puVar18;
          *puVar18 = *puVar18 + uVar16 + 1;
          UNLOCK();
          if ((uVar29 ^ uVar16) != 0xffffffff) break;
          puVar18 = (uint *)*puVar1;
          *puVar18 = 0xffffffff;
          *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
          puVar18[0x12] = 0;
          *puVar1 = puVar18;
          puVar43 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
          uVar16 = 0;
          if (puVar43 + 0x5b <= puVar18 + 0x4000) {
            uVar16 = 1;
            goto LAB_1435ee9de;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_1435ee9de:
      *(undefined8 **)(puVar18 + 0x10) = puVar43 + 0x5c;
      puVar18[0x12] = uVar16;
      *(int *)(puVar43 + -1) = ((int)puVar43 + -8) - (int)puVar18;
      *(undefined4 *)((longlong)puVar43 + -4) = 0x2d8;
      puVar43[1] = 0;
      *puVar43 = &PTR_FUN_14aa07788;
      lVar23 = *plVar21;
      do {
        puVar43[1] = lVar23;
        LOCK();
        lVar42 = *plVar21;
        bVar45 = lVar23 == lVar42;
        if (bVar45) {
          *plVar21 = (longlong)puVar43;
          lVar42 = lVar23;
        }
        UNLOCK();
        lVar23 = lVar42;
      } while (!bVar45);
      puVar43[2] = &PTR_FUN_14aa07790;
      puVar1 = puVar43 + 3;
      *(undefined4 *)(puVar43 + 4) = 0xffffffff;
      *(char *)((longlong)puVar43 + 0x24) = (char)iVar34;
      *(undefined2 *)((longlong)puVar43 + 0x25) = 1;
      bVar45 = false;
      puVar43[0x15] = 0;
      puVar43[0x16] = 0x800000000;
      puVar43[0x1b] = 0;
      puVar43[0x1c] = 0x200000000;
      puVar43[0x23] = 0;
      puVar43[0x24] = 0x300000000;
      puVar43[0x25] = 0;
      puVar43[0x26] = 0;
      puVar43[0x27] = 0;
      *(undefined4 *)(puVar43 + 0x28) = 0x1ffffff;
      puVar43[3] = &PTR_FUN_14aa077a0;
      local_3e8 = puVar43 + 0x2a;
      *(undefined4 *)(puVar43 + 0x38) = 0;
      puVar43[0x2a] = 0;
      puVar43[0x2b] = 0;
      puVar43[0x2c] = 0;
      puVar43[0x2d] = 0;
      puVar43[0x2e] = 0;
      puVar43[0x2f] = 0;
      *(undefined4 *)((longlong)puVar43 + 0x1c4) = 4;
      puVar43[0x39] = 0;
      puVar43[0x3a] = 0;
      puVar43[0x3b] = 0;
      puVar43[0x3c] = 0;
      puVar43[0x3d] = 0;
      puVar43[0x3e] = 0;
      puVar43[0x3f] = 0;
      puVar43[0x40] = 0;
      *(undefined4 *)(puVar43 + 0x41) = 0xffffffff;
      *(undefined2 *)((longlong)puVar43 + 0x20c) = 0xff;
      *(undefined1 *)((longlong)puVar43 + 0x20e) = 0;
      puVar43[0x42] = 0;
      puVar43[0x43] = 0;
      puVar43[0x44] = 0;
      puVar43[0x45] = 0;
      puVar43[0x46] = 0;
      puVar43[0x47] = 0;
      puVar43[0x48] = 0;
      puVar43[0x49] = 0;
      puVar43[0x4a] = 0;
      puVar43[0x4b] = 0;
      puVar43[0x4c] = 0;
      puVar43[0x4d] = 0;
      puVar43[0x4e] = 0;
      puVar43[0x4f] = 0;
      *(undefined1 *)(puVar43 + 0x50) = 0;
      puVar43[0x55] = 0;
      puVar43[0x56] = 0;
      *(undefined4 *)(puVar43 + 0x57) = 0;
      puVar43[0x54] = &PTR_FUN_14a3875e8;
      puVar43[0x58] = 0;
      puVar43[0x5a] = 0;
      puVar32 = local_258;
      local_2a8 = 8.48798316386109e-314;
      local_318[0] = 0.0;
      local_318[1] = 0.0;
      local_318[2] = 0.0;
      local_318[3] = 0.0;
      local_318[4] = 0.0;
      local_318[5] = 0.0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      uStack_278 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_260 = 0xffffffff;
      local_25c = 0xff;
      local_25a = 0;
      local_258[0] = 0;
      local_258[1] = 0;
      local_258[2] = 0;
      local_258[3] = 0;
      local_258[4] = 0;
      local_258[5] = 0;
      local_258[6] = 0;
      local_258[7] = 0;
      local_258[8] = 0;
      local_258[9] = 0;
      local_258[10] = 0;
      local_258[0xb] = 0;
      local_258[0xc] = 0;
      local_258[0xd] = 0;
      local_1e8 = 0;
      local_3f8 = (longlong)iVar34;
      FUN_147c34a25(puVar1,local_3e0,local_318);
      FUN_1447807a6(local_3e8,local_318);
      pfVar20 = local_400;
      puVar35 = puVar32;
      puVar38 = puVar43 + 0x42;
      for (lVar23 = 0xe; lVar23 != 0; lVar23 = lVar23 + -1) {
        *puVar38 = *puVar35;
        puVar35 = puVar35 + 1;
        puVar38 = puVar38 + 1;
      }
      *(undefined1 *)(puVar43 + 0x50) = local_1e8;
      FUN_1447fd100(puVar1,local_400);
      *(char *)(puVar43 + 0x51) = (char)iVar15;
      uVar16 = *(uint *)(param_1 + 4);
      *(int *)((longlong)puVar43 + 0x28c) = local_41c;
      *(uint *)(puVar43 + 0x52) = -(uVar16 & 1) & (uint)local_418;
      local_3e8 = puVar1;
      (**(code **)(puVar43[3] + 0x18))(puVar1,pfVar20);
      local_390 = (**(code **)(*param_1 + 0x50))(param_1);
      local_358 = 1.0;
      local_354 = 1.0;
      if (local_390 != 0) {
        local_354 = 1.0 / (float)*(int *)(local_390 + 0xb8);
        local_358 = 1.0 / (float)*(int *)(local_390 + 0xb4);
        bVar45 = 0 < *(int *)(local_390 + 0xb0);
      }
      local_350 = 0;
      local_348 = (uint)bVar45;
      local_344 = (uint)(bVar45 ^ 1);
      local_340 = (uint)((int)param_1[0x23] != 0);
      local_338 = (uint)*(byte *)((longlong)param_1 + 0xe4);
      local_328 = *(undefined8 *)((longlong)param_1 + 0xb4);
      local_320 = *(undefined4 *)((longlong)param_1 + 0xbc);
      local_31c = 0;
      if ((*(byte *)(param_1[0x12] + 0x28) & 2) != 0) {
        local_31c = 0x3f800000;
      }
      lVar23 = FUN_145e40e04();
      local_440 = 1.4013e-45;
      local_448 = (double *)CONCAT44(local_448._4_4_,2);
      (**(code **)(*DAT_14ca83900 + 0x138))
                (DAT_14ca83900,local_318,&local_358,*(undefined8 *)(lVar23 + 0x48));
      dVar51 = local_318[0];
      if (local_318[0] != 0.0) {
        LOCK();
        *(int *)((longlong)local_318[0] + 8) = *(int *)((longlong)local_318[0] + 8) + 1;
        UNLOCK();
        if (local_318[0] != 0.0) {
          LOCK();
          puVar18 = (uint *)((longlong)local_318[0] + 8);
          uVar16 = *puVar18;
          *puVar18 = *puVar18 - 1;
          UNLOCK();
          if ((uVar16 & 0x3fffffff) == 1) {
            puVar18 = (uint *)((longlong)local_318[0] + 8);
            LOCK();
            uVar16 = *puVar18;
            *puVar18 = *puVar18 | 0x40000000;
            UNLOCK();
            if ((uVar16 >> 0x1e & 1) == 0) {
              bVar28 = *(byte *)((longlong)local_318[0] + 0xd);
              puVar32 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar32 >> 8),bVar28);
              plVar19 = (longlong *)FUN_14001cc68(0x10,8);
              plVar19[1] = (longlong)dVar51;
              plVar21 = DAT_14ca843c0;
              plVar41 = DAT_14ca843c8;
              if ((bVar28 & 2) == 0) {
                do {
                  *plVar19 = (longlong)plVar21;
                  LOCK();
                  bVar45 = plVar21 != DAT_14ca843c0;
                  plVar41 = plVar19;
                  if (bVar45) {
                    plVar21 = DAT_14ca843c0;
                    plVar41 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar41;
                  UNLOCK();
                } while (bVar45);
              }
              else {
                do {
                  *plVar19 = (longlong)plVar41;
                  LOCK();
                  bVar45 = plVar41 != DAT_14ca843c8;
                  plVar21 = plVar19;
                  if (bVar45) {
                    plVar41 = DAT_14ca843c8;
                    plVar21 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar21;
                  UNLOCK();
                } while (bVar45);
              }
            }
          }
        }
      }
      lVar23 = puVar43[0x5a];
      puVar43[0x5a] = dVar51;
      if (lVar23 != 0) {
        LOCK();
        puVar18 = (uint *)(lVar23 + 8);
        uVar16 = *puVar18;
        *puVar18 = *puVar18 - 1;
        UNLOCK();
        if ((uVar16 & 0x3fffffff) == 1) {
          puVar18 = (uint *)(lVar23 + 8);
          LOCK();
          uVar16 = *puVar18;
          *puVar18 = *puVar18 | 0x40000000;
          UNLOCK();
          if ((uVar16 >> 0x1e & 1) == 0) {
            bVar28 = *(byte *)(lVar23 + 0xd);
            plVar19 = (longlong *)FUN_14001cc68(0x10,8);
            plVar19[1] = lVar23;
            plVar21 = DAT_14ca843c0;
            plVar41 = DAT_14ca843c8;
            if ((bVar28 & 2) == 0) {
              do {
                *plVar19 = (longlong)plVar21;
                LOCK();
                bVar45 = plVar21 != DAT_14ca843c0;
                plVar41 = plVar19;
                if (bVar45) {
                  plVar21 = DAT_14ca843c0;
                  plVar41 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar41;
                UNLOCK();
              } while (bVar45);
            }
            else {
              do {
                *plVar19 = (longlong)plVar41;
                LOCK();
                bVar45 = plVar41 != DAT_14ca843c8;
                plVar21 = plVar19;
                if (bVar45) {
                  plVar41 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar45);
            }
          }
        }
        dVar51 = (double)puVar43[0x5a];
      }
      puVar43[0x53] = dVar51;
      if ((int)local_3f8 < 3) {
        uVar14 = 0;
      }
      else {
        uVar33 = (undefined7)((ulonglong)puVar32 >> 8);
        uVar14 = (undefined4)CONCAT71(uVar33,1);
        if ((int)param_1[0x23] == 0) {
          if ((*(longlong *)(&DAT_14ca814b0 + (longlong)local_430 * 0x3c) != DAT_14ca81490) &&
             (*(longlong *)(&DAT_14ca814b0 + (longlong)local_430 * 0x3c) != DAT_14ca838f8)) {
            uVar26 = CONCAT71(uVar33,*(undefined1 *)
                                      ((longlong)&DAT_14ca814d0 + (longlong)local_430 * 0x3c)) &
                     0xffffffffffffff10;
            uVar14 = (undefined4)CONCAT71((int7)(uVar26 >> 8),(byte)uVar26 >> 4);
          }
        }
      }
      local_398 = puVar43 + 2;
      if ((*(char *)(local_438 + 0x23f2) == '\x01') &&
         (local_428 = (float *)0x1, *(int *)(local_438 + 0x1dd0) != 0)) {
        bVar28 = FUN_144b2acba(local_438);
        local_428 = (float *)(ulonglong)(bVar28 + 1);
      }
      else {
        local_428 = (float *)&DAT_00000001;
        bVar28 = 0;
      }
      puVar1 = (undefined8 *)param_6[0x20];
      iVar34 = local_404 << (bVar28 & 0x1f);
      iVar15 = (int)local_410 * iVar34;
      plVar21 = puVar1 + 1;
      if (*(int *)(puVar1 + 2) == 0) {
LAB_1435f00d6:
        local_410 = FUN_1400f777c(&DAT_14ca8c130,*puVar1,iVar15,0);
        iVar22 = *(int *)(puVar1 + 2);
        *(uint *)(puVar1 + 2) = iVar22 + 1U;
        if (*(uint *)((longlong)puVar1 + 0x14) < iVar22 + 1U) {
          FUN_1400f7990(plVar21,iVar22);
        }
        *(ulonglong *)(puVar1[1] + (longlong)iVar22 * 8) = local_410;
        local_3a8 = *(longlong *)(puVar1[1] + (longlong)(*(int *)(puVar1 + 2) + -1) * 8);
        uVar16 = *(uint *)(local_3a8 + 0x24);
      }
      else {
        local_3a8 = *(longlong *)(*plVar21 + (longlong)(*(int *)(puVar1 + 2) + -1) * 8);
        uVar16 = *(uint *)(local_3a8 + 0x24);
        if (*(uint *)(local_3a8 + 0x20) < uVar16 + iVar15) goto LAB_1435f00d6;
      }
      local_3a0 = (ulonglong)uVar16;
      lVar23 = local_3a0 + *(longlong *)(local_3a8 + 0x18);
      *(uint *)(local_3a8 + 0x24) = (iVar15 + 0xfU & 0xfffffff0) + uVar16;
      if ((*(byte *)(param_1 + 4) & 1) == 0) {
        lVar42 = 0;
        local_3b0 = 0;
        local_3b8 = 0;
      }
      else {
        iVar34 = iVar34 * (uint)local_418;
        if (*(int *)(puVar1 + 2) == 0) {
LAB_1435f0136:
          local_418 = FUN_1400f777c(&DAT_14ca8c130,*puVar1,iVar34,0);
          iVar15 = *(int *)(puVar1 + 2);
          *(uint *)(puVar1 + 2) = iVar15 + 1U;
          if (*(uint *)((longlong)puVar1 + 0x14) < iVar15 + 1U) {
            FUN_1400f7990(plVar21,iVar15);
          }
          *(ulonglong *)(puVar1[1] + (longlong)iVar15 * 8) = local_418;
          local_3b0 = *(longlong *)(puVar1[1] + (longlong)(*(int *)(puVar1 + 2) + -1) * 8);
          uVar16 = *(uint *)(local_3b0 + 0x24);
        }
        else {
          local_3b0 = *(longlong *)(*plVar21 + (longlong)(*(int *)(puVar1 + 2) + -1) * 8);
          uVar16 = *(uint *)(local_3b0 + 0x24);
          if (*(uint *)(local_3b0 + 0x20) < uVar16 + iVar34) goto LAB_1435f0136;
        }
        local_3b8 = (ulonglong)uVar16;
        lVar42 = local_3b8 + *(longlong *)(local_3b0 + 0x18);
        *(uint *)(local_3b0 + 0x24) = (iVar34 + 0xfU & 0xfffffff0) + uVar16;
      }
      local_3cc = uVar14;
      if (((char)uVar14 == '\0') ||
         (pfVar20 = (float *)FUN_147bc8dd0(local_3e8), lVar25 = local_438, pfVar20 == (float *)0x0))
      {
LAB_1435ef126:
        local_430 = (float *)0x0;
        pfVar20 = local_430;
      }
      else if ((int)param_1[0x23] == 0) {
        uVar16 = *(uint *)((longlong)param_1 + 0x34);
        uVar29 = *(uint *)(param_1 + 0x18);
        uVar30 = uVar29;
        if ((int)uVar16 < (int)uVar29) {
          uVar30 = uVar16;
        }
        if ((int)uVar29 < 0) {
          uVar30 = uVar16;
        }
        if (0 < (int)uVar30) {
          uVar26 = (ulonglong)uVar30 + 1;
          do {
            uVar8 = *(ushort *)(param_1[0xb] + -4 + uVar26 * 2);
            lVar27 = param_1[7];
            lVar24 = param_1[10];
            local_448 = local_318;
            pdVar37 = (double *)&DAT_14c846400;
            pdVar36 = local_448;
            for (lVar40 = 0x10; lVar40 != 0; lVar40 = lVar40 + -1) {
              *pdVar36 = *pdVar37;
              pdVar37 = pdVar37 + 1;
              pdVar36 = pdVar36 + 1;
            }
            FUN_147c31dee(param_1,(longlong)(int)lVar27 * (ulonglong)uVar8 + lVar24,local_3f0,lVar25
                         );
            *pfVar20 = (float)local_318[0];
            pfVar20[1] = (float)local_318[4];
            pfVar20[2] = (float)local_318[8];
            pfVar20[3] = (float)local_318[0xc];
            pfVar20[4] = (float)local_318[1];
            pfVar20[5] = (float)local_318[5];
            pfVar20[6] = (float)local_318[9];
            pfVar20[7] = (float)local_318[0xd];
            pfVar20[8] = (float)local_318[2];
            pfVar20[9] = (float)local_318[6];
            pfVar20[10] = (float)local_318[10];
            pfVar20[0xb] = (float)local_2a8;
            pfVar20 = pfVar20 + 0xc;
            uVar26 = uVar26 - 1;
          } while (1 < uVar26);
        }
        goto LAB_1435ef126;
      }
      local_430 = pfVar20;
      if ((lVar23 != 0) && (((*(uint *)(param_1 + 4) & 1) == 0 || (lVar42 != 0)))) {
        local_3d0 = (int)param_1[0x21];
        uVar16 = *(uint *)((longlong)param_1 + 0x34);
        uVar29 = *(uint *)(param_1 + 0x18);
        uVar30 = uVar29;
        if ((int)uVar16 < (int)uVar29) {
          uVar30 = uVar16;
        }
        if ((int)uVar29 < 0) {
          uVar30 = uVar16;
        }
        *(undefined4 *)(param_1 + 0x2e) = 8;
        if (0 < (int)uVar30) {
          fVar54 = (float)(~-(uint)(DAT_14cb0cc18 != 0.0) & 0x3f800000 |
                          (uint)(1.0 / DAT_14cb0cc18) & -(uint)(DAT_14cb0cc18 != 0.0)) *
                   *(float *)((longlong)param_1 + 0x16c);
          iVar34 = (*(uint *)(param_1 + 4) & 1) * 0x10;
          local_3c0 = (ulonglong)(uint)(iVar34 * (int)local_428);
          local_3f8 = (ulonglong)local_428 & 0xffffffff;
          local_3d8 = (ulonglong)(uint)((int)local_428 * 0x60);
          local_410 = (ulonglong)uVar30;
          local_428 = local_430;
          uStack_384 = 0;
          uStack_380 = 0;
          uStack_37c = 0;
          local_388 = fVar54;
          do {
            lVar27 = local_3f0;
            lVar25 = param_1[10];
            uVar8 = *(ushort *)(param_1[0xb] + -2 + local_410 * 2);
            lVar24 = param_1[7];
            lVar40 = 0x1c;
            do {
              *(undefined8 *)(local_168 + lVar40 + 4) = 0;
              *(undefined8 *)((longlong)&uStack_15c + lVar40) = 0x3f80000000000000;
              lVar40 = lVar40 + 0x10;
            } while (lVar40 != 0x4c);
            lVar24 = (longlong)(int)lVar24 * (ulonglong)uVar8;
            pdVar37 = (double *)(lVar25 + lVar24);
            local_118 = 0;
            uStack_110 = 0x3f80000000000000;
            puVar2 = (undefined4 *)(lVar25 + 0x70 + lVar24);
            uStack_15c._4_4_ = *puVar2;
            uStack_154 = puVar2[1];
            uStack_150 = puVar2[2];
            uStack_14c = puVar2[3];
            local_448 = local_318;
            pdVar36 = (double *)&DAT_14c846400;
            pdVar39 = local_448;
            for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
              *pdVar39 = *pdVar36;
              pdVar36 = pdVar36 + 1;
              pdVar39 = pdVar39 + 1;
            }
            local_418 = local_410;
            local_410 = local_410 - 1;
            FUN_147c31dee(param_1,pdVar37,local_3f0,local_438);
            local_148 = (float)local_318[0];
            fStack_144 = (float)local_318[4];
            fStack_140 = (float)local_318[8];
            fStack_13c = (float)local_318[0xc];
            local_138 = (float)local_318[1];
            fStack_134 = (float)local_318[5];
            fStack_130 = (float)local_318[9];
            fStack_12c = (float)local_318[0xd];
            local_128 = (float)local_318[2];
            fStack_124 = (float)local_318[6];
            fStack_120 = (float)local_318[10];
            fStack_11c = (float)local_2a8;
            if (*(char *)((longlong)param_1 + 0x169) == '\x01') {
              dVar51 = pdVar37[3];
              dVar46 = pdVar37[4];
              local_1d8[2] = pdVar37[5];
              local_1d8[0] = dVar51;
              local_1d8[1] = dVar46;
              if (*(char *)((longlong)param_1 + 0xe4) == '\x01') {
                local_1d8[0] = local_1d8[2] * *(double *)(lVar27 + 0x140) +
                               dVar46 * *(double *)(lVar27 + 0x120) +
                               dVar51 * *(double *)(lVar27 + 0x100) + *(double *)(lVar27 + 0x160);
                local_1d8[1] = local_1d8[2] * *(double *)(lVar27 + 0x148) +
                               dVar46 * *(double *)(lVar27 + 0x128) +
                               dVar51 * *(double *)(lVar27 + 0x108) + *(double *)(lVar27 + 0x168);
                local_1d8[2] = local_1d8[2] * *(double *)(lVar27 + 0x150) +
                               dVar46 * *(double *)(lVar27 + 0x130) +
                               dVar51 * *(double *)(lVar27 + 0x110) + *(double *)(lVar27 + 0x170);
              }
              local_370[0] = 1.0;
              local_370[1] = 1.0;
              local_370[2] = 1.0;
              lVar25 = 0;
              do {
                dVar51 = *(double *)((longlong)local_318 + lVar25 * 4);
                dVar46 = *(double *)((longlong)local_318 + lVar25 * 4 + 8);
                dVar7 = *(double *)((longlong)local_318 + lVar25 * 4 + 0x10);
                dVar51 = dVar7 * dVar7 + dVar51 * dVar51 + dVar46 * dVar46;
                *(ulonglong *)((longlong)local_370 + lVar25) =
                     -(ulonglong)(9.99999993922529e-09 < dVar51) & (ulonglong)SQRT(dVar51);
                lVar25 = lVar25 + 8;
              } while (lVar25 != 0x18);
              dVar51 = SQRT(local_370[2] * local_370[2] +
                            local_370[0] * local_370[0] + local_370[1] * local_370[1]) * 0.5 *
                       *(double *)(param_1[0x27] + 0x230);
              auVar10._4_8_ = (ulonglong)dVar51 >> 0x20;
              auVar10._0_4_ = (float)dVar51;
              local_1d8[3] = 1.0;
              local_448 = (double *)((ulonglong)local_448 & 0xffffffff00000000);
              local_440 = fVar54;
              cVar12 = FUN_1405e275b(*(undefined8 *)(param_1[0x27] + 0xe0),local_1d8,auVar10._0_8_,
                                     local_438);
              if (*(longlong *)(param_1[0x27] + 0xe0) == 0) {
                iVar15 = 0;
              }
              else {
                iVar15 = *(int *)(*(longlong *)(param_1[0x27] + 0xe0) + 8);
              }
              iVar22 = iVar15 + -1;
              if ((int)cVar12 < iVar15 + -1) {
                iVar22 = (int)cVar12;
              }
              if ((int)param_1[0x2e] <= iVar22) {
                iVar22 = (int)param_1[0x2e];
              }
              *(int *)(param_1 + 0x2e) = iVar22;
            }
            lVar25 = local_3f0;
            if (local_430 != (float *)0x0) {
              if ((int)param_1[0x23] == 0) {
                *(longlong *)local_428 = CONCAT44(fStack_144,local_148);
                *(longlong *)(local_428 + 2) = CONCAT44(fStack_13c,fStack_140);
                *(longlong *)(local_428 + 4) = CONCAT44(fStack_134,local_138);
                *(longlong *)(local_428 + 6) = CONCAT44(fStack_12c,fStack_130);
                *(longlong *)(local_428 + 8) = CONCAT44(fStack_124,local_128);
                *(longlong *)(local_428 + 10) = CONCAT44(fStack_11c,fStack_120);
                lVar25 = lVar27;
              }
              else {
                local_448 = local_1d8;
                pdVar36 = (double *)&DAT_14c846400;
                pdVar39 = local_448;
                for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *pdVar39 = *pdVar36;
                  pdVar36 = pdVar36 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                FUN_147c346a8(param_1,pdVar37,local_3f0,local_438);
                *local_428 = (float)local_1d8[0];
                local_428[1] = (float)local_1d8[4];
                local_428[2] = (float)local_198;
                local_428[3] = (float)local_178;
                local_428[4] = (float)local_1d8[1];
                local_428[5] = (float)local_1b0;
                local_428[6] = (float)local_190;
                local_428[7] = (float)local_170;
                local_428[8] = (float)local_1d8[2];
                local_428[9] = (float)local_1a8;
                local_428[10] = (float)local_188;
                local_428[0xb] = (float)(double)local_168._0_8_;
                fVar54 = local_388;
              }
              local_428 = local_428 + 0xc;
              lVar27 = lVar25;
            }
            dVar51 = *pdVar37;
            dVar46 = pdVar37[3];
            lVar25 = (longlong)*(int *)((longlong)param_1 + 0xc4);
            if (lVar25 == 0) {
              dVar7 = pdVar37[5] - pdVar37[2];
              dVar52 = pdVar37[4] - pdVar37[1];
            }
            else {
              dVar46 = dVar46 + (double)*(float *)((longlong)pdVar37 + lVar25 + 0xc);
              dVar7 = (pdVar37[5] + (double)*(float *)((longlong)pdVar37 + lVar25 + 0x14)) -
                      (pdVar37[2] + (double)*(float *)((longlong)pdVar37 + lVar25 + 0x44));
              dVar52 = (pdVar37[4] + (double)*(float *)((longlong)pdVar37 + lVar25 + 0x10)) -
                       (pdVar37[1] + (double)*(float *)((longlong)pdVar37 + lVar25 + 0x40));
              dVar51 = dVar51 + (double)*(float *)((longlong)pdVar37 + lVar25 + 0x3c);
            }
            dVar46 = dVar46 - dVar51;
            if ((((dVar46 != 0.0) || (NAN(dVar46))) || (dVar52 != 0.0)) || (NAN(dVar52))) {
LAB_1435ef7cb:
              if (*(char *)((longlong)param_1 + 0xe4) == '\x01') {
                dVar9 = dVar46 * *(double *)(lVar27 + 0x108);
                dVar47 = dVar46 * *(double *)(lVar27 + 0x110);
                dVar51 = dVar52 * *(double *)(lVar27 + 0x130);
                dVar46 = dVar7 * *(double *)(lVar27 + 0x140) +
                         dVar52 * *(double *)(lVar27 + 0x120) + dVar46 * *(double *)(lVar27 + 0x100)
                         + *(double *)(lVar27 + 0x160) * 0.0;
                dVar52 = dVar7 * *(double *)(lVar27 + 0x148) +
                         dVar52 * *(double *)(lVar27 + 0x128) + dVar9 +
                         *(double *)(lVar27 + 0x168) * 0.0;
                dVar7 = dVar7 * *(double *)(lVar27 + 0x150) + dVar51 + dVar47 +
                        *(double *)(lVar27 + 0x170) * 0.0;
              }
              fVar49 = (float)SQRT(dVar7 * dVar7 + dVar46 * dVar46 + dVar52 * dVar52);
              dVar51 = DAT_14c8464f0;
              dVar9 = DAT_14c8464e8;
              dVar47 = DAT_14c8464e0;
              if (1e-08 < fVar49) {
                dVar47 = (double)(1.0 / fVar49);
                dVar51 = dVar7 * dVar47;
                dVar9 = dVar52 * dVar47;
                dVar47 = dVar46 * dVar47;
              }
              fVar50 = (float)dVar51;
              fVar55 = (float)dVar9;
              fVar53 = (float)dVar47;
            }
            else {
              fVar53 = 0.0;
              fVar55 = 0.0;
              fVar50 = 0.0;
              fVar49 = 0.0;
              if ((dVar7 != 0.0) || (NAN(dVar7))) goto LAB_1435ef7cb;
            }
            local_118 = CONCAT44(fVar55,fVar53);
            uStack_110 = CONCAT44(fVar49,fVar50);
            if (((*(byte *)(param_1 + 4) & 1) != 0) &&
               (lVar25 = (longlong)(int)param_1[0x19], 0 < lVar25)) {
              uVar14 = *(undefined4 *)((longlong)pdVar37 + lVar25);
              uVar4 = *(undefined4 *)((longlong)pdVar37 + lVar25 + 4);
              uVar5 = *(undefined4 *)((longlong)pdVar37 + lVar25 + 8);
              uVar6 = *(undefined4 *)((longlong)pdVar37 + lVar25 + 0xc);
              uVar16 = 0;
              uVar26 = local_3f8;
              do {
                uVar31 = (ulonglong)uVar16;
                *(undefined4 *)(lVar42 + uVar31) = uVar14;
                *(undefined4 *)(lVar42 + 4 + uVar31) = uVar4;
                *(undefined4 *)(lVar42 + 8 + uVar31) = uVar5;
                *(undefined4 *)(lVar42 + 0xc + uVar31) = uVar6;
                uVar16 = uVar16 + iVar34;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
              lVar42 = lVar42 + local_3c0;
            }
            if (((int)param_1[0x20] != 0) && (0 < (longlong)*(int *)((longlong)param_1 + 0x104))) {
              local_100 = *(float *)((longlong)pdVar37 +
                                    (longlong)*(int *)((longlong)param_1 + 0x104));
              auVar48 = roundss(ZEXT816(0),ZEXT416((uint)local_100),0xb);
              iVar22 = (int)ROUND(local_100 + local_100 + -0.5);
              iVar15 = iVar22 >> 1;
              lVar25 = CONCAT44(iVar22 >> 0x1f,iVar15);
              local_106 = (undefined2)(lVar25 / (longlong)local_3d0);
              local_108 = (undefined2)(lVar25 % (longlong)local_3d0);
              iVar15 = iVar15 + 1;
              local_102 = (undefined2)(iVar15 / local_3d0);
              local_104 = (undefined2)(iVar15 % local_3d0);
              local_100 = local_100 - auVar48._0_4_;
            }
            local_fc = *(undefined4 *)(pdVar37 + 0x12);
            uVar16 = 0;
            uVar26 = local_3f8;
            do {
              memcpy((void *)((ulonglong)uVar16 + lVar23),(void *)((longlong)&uStack_15c + 4),0x60);
              uVar16 = uVar16 + 0x60;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
            lVar23 = lVar23 + local_3d8;
          } while (1 < (longlong)local_418);
        }
      }
      if ((char)local_3cc != '\0') {
        FUN_1431f8bac(puVar43 + 0x54);
      }
      puVar1 = local_398;
      plVar21 = local_398 + 3;
      plVar41 = (longlong *)local_398[0x13];
      if ((longlong *)local_398[0x13] == (longlong *)0x0) {
        plVar41 = plVar21;
      }
      *plVar41 = local_3a8;
      plVar41 = (longlong *)local_398[0x13];
      if ((longlong *)local_398[0x13] == (longlong *)0x0) {
        plVar41 = plVar21;
      }
      *(int *)(plVar41 + 1) = (int)local_3a0;
      plVar41 = (longlong *)local_398[0x13];
      if ((longlong *)local_398[0x13] == (longlong *)0x0) {
        plVar41 = plVar21;
      }
      *(short *)((longlong)plVar41 + 0xc) = (short)local_41c;
      (**(code **)(*param_1 + 0x48))(param_1);
      lVar42 = local_3e0;
      param_2 = local_3f0;
      lVar23 = local_438;
      plVar41 = (longlong *)puVar1[0x13];
      if ((longlong *)puVar1[0x13] == (longlong *)0x0) {
        plVar41 = plVar21;
      }
      if (local_3b0 == 0) {
        plVar41[2] = (longlong)&DAT_14caf6f28;
        uVar13 = 0;
        uVar14 = 0;
      }
      else {
        plVar41[2] = local_3b0;
        uVar13 = *(undefined2 *)(puVar1 + 0x50);
        uVar14 = (undefined4)local_3b8;
      }
      plVar41 = (longlong *)puVar1[0x13];
      if ((longlong *)puVar1[0x13] == (longlong *)0x0) {
        plVar41 = plVar21;
      }
      *(undefined2 *)((longlong)plVar41 + 0x1c) = uVar13;
      plVar41 = (longlong *)puVar1[0x13];
      if ((longlong *)puVar1[0x13] == (longlong *)0x0) {
        plVar41 = plVar21;
      }
      *(undefined4 *)(plVar41 + 3) = uVar14;
      FUN_147c30ee2(local_3f0,local_400);
      puVar1[0x57] = 0;
      iVar34 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar34 != 0x40000002) && (iVar34 == 1)) && (DAT_14c86a9f8 != '\0')) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
      iVar34 = *(int *)(lVar42 + 0x38);
      if (0 < iVar34) {
        uVar26 = lVar42 + 0x10;
        local_430 = (float *)(param_1 + 0x28);
        local_400 = (float *)(param_2 + 0x308);
        local_428 = (float *)(param_2 + 0x250);
        local_3d8 = lVar42 + 0x198;
        lVar25 = 0;
        local_3f8 = uVar26;
        do {
          if (lVar25 < (int)param_1[0x2b]) {
            pfVar20 = (float *)param_1[0x2a];
            if ((float *)param_1[0x2a] == (float *)0x0) {
              pfVar20 = local_430;
            }
            uVar31 = *(ulonglong *)(pfVar20 + lVar25 * 2);
          }
          else {
            uVar31 = 0;
          }
          uVar44 = *(ulonglong *)(lVar42 + 0x30);
          if (*(ulonglong *)(lVar42 + 0x30) == 0) {
            uVar44 = uVar26;
          }
          uVar11 = lVar25 * 0x1c;
          if ((*(int *)(uVar44 + 8 + uVar11) != 0) && (uVar31 != 0)) {
            iVar34 = (int)param_6[1];
            iVar15 = (int)param_6[2];
            iVar22 = (iVar15 + 0x44) / 0x44;
            *(int *)(param_6 + 2) = iVar15 + 1;
            local_418 = uVar31;
            local_410 = uVar11;
            plVar21 = param_1;
            if (iVar34 < iVar22) {
              do {
                local_3c8 = plVar21;
                local_41c = iVar34;
                lVar23 = FUN_14001cc68(0x3fc0,0x10);
                lVar42 = 0;
                do {
                  *(undefined8 *)(lVar23 + 0xa8 + lVar42) = 0;
                  puVar1 = (undefined8 *)(lVar23 + 0xb8 + lVar42);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(lVar23 + 200 + lVar42) = 0;
                  *(undefined8 *)(lVar23 + 0xd0 + lVar42) = 0xffffffff;
                  *(undefined8 *)(lVar23 + 0xd8 + lVar42) = 0xff0000ffffffff;
                  *(undefined1 *)(lVar23 + 0xe0 + lVar42) = 0;
                  *(undefined4 *)(lVar23 + 0xe4 + lVar42) = 0x40c00f07;
                  pbVar3 = (byte *)(lVar23 + 0xe8 + lVar42);
                  *pbVar3 = *pbVar3 & 0xfc;
                  *(undefined1 **)(lVar23 + 0xb0 + lVar42) = &DAT_100000001;
                  FUN_14470b9e0(lVar23 + lVar42,1);
                  lVar42 = lVar42 + 0xf0;
                } while (lVar42 != 0x3fc0);
                iVar34 = (int)param_6[1];
                *(uint *)(param_6 + 1) = iVar34 + 1U;
                if (*(uint *)((longlong)param_6 + 0xc) < iVar34 + 1U) {
                  FUN_14002baf6(param_6,iVar34);
                }
                *(longlong *)(*param_6 + (longlong)iVar34 * 8) = lVar23;
                iVar34 = local_41c + 1;
                lVar23 = local_438;
                param_2 = local_3f0;
                param_1 = local_3c8;
                plVar21 = local_3c8;
              } while (iVar34 != iVar22);
            }
            lVar42 = local_3e0;
            lVar24 = *(longlong *)(*param_6 + (longlong)(iVar15 / 0x44) * 8);
            lVar27 = (ulonglong)(uint)(iVar15 % 0x44) * 0xf0;
            *(undefined8 **)(lVar24 + 0xb8 + lVar27) = local_3e8;
            *(undefined8 *)(lVar24 + 200 + lVar27) = 0;
            uVar16 = *(uint *)(lVar24 + 0xe4 + lVar27);
            uVar29 = (*(byte *)(param_2 + 0x6b) & 1) << 6;
            *(uint *)(lVar24 + 0xe4 + lVar27) = uVar16 & 0xffffffbf | uVar29;
            uVar30 = (*(byte *)(param_2 + 0x2b0) & 1) << 8;
            *(uint *)(lVar24 + 0xe4 + lVar27) = uVar16 & 0xfffffebf | uVar29 | uVar30;
            if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) &&
               ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
              uVar26 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar26) ==
                    *(longlong *)(lVar23 + 0x4c0)) {
                  if ((~uVar26 & 0x7fffffff8) != 0) {
                    bVar28 = *(byte *)(param_2 + 0x6d) >> 3;
                    goto LAB_1435efd54;
                  }
                  break;
                }
                uVar26 = uVar26 + 8;
              } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar26);
            }
            bVar28 = *(byte *)(param_2 + 0x6d);
LAB_1435efd54:
            plVar41 = (longlong *)(lVar24 + lVar27);
            plVar21 = (longlong *)plVar41[0x15];
            if ((longlong *)plVar41[0x15] == (longlong *)0x0) {
              plVar21 = plVar41;
            }
            *(uint *)((longlong)plVar41 + 0xe4) =
                 uVar16 & 0xfff1febf | uVar29 | uVar30 | (bVar28 & 7) << 0x11;
            pfVar20 = local_428;
            if ((local_390 != 0) && (pfVar20 = local_400, *(char *)(local_390 + 0xbc) != '\0')) {
              pfVar20 = local_428;
            }
            lVar24 = uVar44 + local_410;
            *plVar21 = *(longlong *)pfVar20;
            *(undefined4 *)(plVar21 + 0xb) = *(undefined4 *)(lVar24 + 4);
            *(undefined4 *)(plVar21 + 0xd) = *(undefined4 *)(lVar24 + 0xc);
            *(undefined4 *)((longlong)plVar21 + 0x6c) = *(undefined4 *)(lVar24 + 0x10);
            *(int *)(plVar21 + 0xc) = local_404;
            *(uint *)((longlong)plVar41 + 0xe4) = *(uint *)((longlong)plVar41 + 0xe4) & 0xfffe3fff;
            plVar41[0x18] = local_418;
            plVar21[3] = local_3d8;
            *(undefined4 *)(plVar21 + 0xb) = *(undefined4 *)(lVar24 + 4);
            *(undefined4 *)((longlong)plVar21 + 0x5c) = *(undefined4 *)(lVar24 + 8);
            uVar16 = *(uint *)((longlong)plVar41 + 0xe4);
            *(uint *)((longlong)plVar41 + 0xe4) = uVar16 | 0x100000;
            *(uint *)((longlong)plVar41 + 0xe4) =
                 uVar16 & 0xffdfffff | 0x100000 |
                 (uint)((*(byte *)(param_2 + 0x6c) & 6) != 0) << 0x15;
            FUN_1436a14f8(param_6,param_5);
            iVar34 = *(int *)(lVar42 + 0x38);
            uVar26 = local_3f8;
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < iVar34);
      }
      goto LAB_1435eef4a;
    }
    plVar21 = param_6 + 10;
    if ((longlong *)param_6[0xc] != (longlong *)0x0) {
      plVar21 = (longlong *)param_6[0xc];
    }
    lVar23 = plVar21[param_5];
    lVar42 = *param_1;
    local_448 = (double *)CONCAT71(local_448._1_7_,1);
  }
  (**(code **)(lVar42 + 0x60))(param_1,param_2,lVar23,param_3);
LAB_1435eef4a:
  if ((*(char *)((longlong)param_1 + 0x169) == '\x01') &&
     ((int)param_1[2] < *(int *)(param_2 + 0x2a0))) {
    *(int *)(*(longlong *)(param_2 + 0x298) + (longlong)(int)param_1[2] * 4) = (int)param_1[0x2e];
  }
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435f0212 FUN_1435f0212 body=876 status=ok
// SIG undefined FUN_1435f0212(void)

void FUN_1435f0212(longlong param_1,longlong param_2)

{
  int iVar1;
  short *psVar2;
  int *piVar3;
  short *psVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  short *psVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  
  iVar10 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x108) == 2) {
    if (0 < iVar10) {
      psVar2 = *(short **)(param_2 + 0x120);
      iVar7 = 0;
      iVar16 = 0;
      iVar12 = 0;
      psVar15 = psVar2;
      do {
        lVar13 = (longlong)iVar16 * (longlong)*(int *)(param_1 + 0x38) +
                 *(longlong *)(param_1 + 0x50);
        lVar9 = (longlong)*(int *)(param_1 + 0x124);
        if ((*(int *)(lVar9 + 0xa0 + lVar13) != 0) &&
           ((*(int *)(param_1 + 0x184) < 1 || (*(int *)(lVar13 + 0x98 + lVar9) != 0)))) {
          sVar11 = (short)iVar12;
          if (sVar11 == 0) {
            if ((longlong)psVar15 - (longlong)psVar2 < 0x1fffc) {
              psVar15[0] = 0;
              psVar15[1] = 1;
              psVar15 = psVar15 + 2;
              iVar12 = 2;
            }
            else {
              iVar12 = 0;
            }
          }
          else if ((longlong)psVar15 - (longlong)psVar2 < 0x1fff8) {
            *psVar15 = sVar11 + -1;
            psVar15[1] = sVar11;
            psVar15[2] = sVar11;
            iVar12 = iVar12 + 2;
            psVar15[3] = sVar11 + 1;
            psVar15 = psVar15 + 4;
            iVar7 = iVar7 + 4;
          }
          iVar10 = 0;
          do {
            iVar18 = *(int *)(param_1 + 0x14c);
            if (iVar18 <= iVar10) break;
            iVar1 = *(int *)(lVar13 + 0xa0 + lVar9);
            if (iVar1 < 1) {
              lVar17 = (longlong)psVar15 - (longlong)psVar2;
            }
            else {
              lVar6 = (2 - (longlong)psVar2) + (longlong)psVar15;
              iVar18 = 0;
              psVar4 = psVar15;
              do {
                iVar8 = iVar18;
                lVar17 = lVar6;
                psVar15 = psVar4 + 1;
                *psVar4 = (short)iVar12 + (short)iVar8;
                if (0x1fffe < lVar17) break;
                lVar6 = lVar17 + 2;
                iVar18 = iVar8 + 1;
                psVar4 = psVar15;
              } while (iVar8 + 1 < *(int *)(lVar13 + 0xa0 + lVar9));
              iVar18 = *(int *)(param_1 + 0x14c);
              iVar12 = iVar12 + iVar8 + 1;
            }
            iVar7 = iVar1 + iVar7;
            iVar10 = iVar10 + 1;
            if ((iVar10 < iVar18) && (lVar17 < 0x1fff8)) {
              sVar11 = (short)iVar12;
              *psVar15 = sVar11 + -1;
              psVar15[1] = sVar11;
              psVar15[2] = sVar11;
              iVar12 = iVar12 + 2;
              psVar15[3] = sVar11 + 1;
              psVar15 = psVar15 + 4;
              iVar7 = iVar7 + 4;
              lVar17 = (longlong)psVar15 - (longlong)psVar2;
            }
          } while (lVar17 < 0x1ffff);
          iVar10 = *(int *)(param_1 + 0x34);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar10);
      goto LAB_1435f0562;
    }
  }
  else if (0 < iVar10) {
    piVar3 = *(int **)(param_2 + 0x120);
    iVar7 = 0;
    iVar16 = 0;
    iVar12 = 0;
    piVar14 = piVar3;
    do {
      lVar9 = (longlong)iVar16 * (longlong)*(int *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x50);
      lVar13 = (longlong)*(int *)(param_1 + 0x124);
      if ((*(int *)(lVar13 + 0xa0 + lVar9) != 0) &&
         ((*(int *)(param_1 + 0x184) < 1 || (*(int *)(lVar9 + 0x98 + lVar13) != 0)))) {
        if (iVar12 == 0) {
          iVar12 = 0;
          if ((longlong)piVar14 - (longlong)piVar3 < 0x3fff8) {
            piVar14[0] = 0;
            piVar14[1] = 1;
            piVar14 = piVar14 + 2;
            iVar12 = 2;
          }
        }
        else if ((longlong)piVar14 - (longlong)piVar3 < 0x3fff0) {
          *piVar14 = iVar12 + -1;
          piVar14[1] = iVar12;
          iVar10 = iVar12 + 1;
          piVar14[2] = iVar12;
          iVar12 = iVar12 + 2;
          piVar14[3] = iVar10;
          piVar14 = piVar14 + 4;
          iVar7 = iVar7 + 4;
        }
        iVar10 = 0;
        do {
          iVar18 = *(int *)(param_1 + 0x14c);
          if (iVar18 <= iVar10) break;
          iVar1 = *(int *)(lVar9 + 0xa0 + lVar13);
          if (iVar1 < 1) {
            lVar17 = (longlong)piVar14 - (longlong)piVar3;
          }
          else {
            lVar6 = (4 - (longlong)piVar3) + (longlong)piVar14;
            iVar18 = 0;
            piVar5 = piVar14;
            do {
              iVar8 = iVar18;
              lVar17 = lVar6;
              piVar14 = piVar5 + 1;
              *piVar5 = iVar12 + iVar8;
              if (0x3fffc < lVar17) break;
              lVar6 = lVar17 + 4;
              iVar18 = iVar8 + 1;
              piVar5 = piVar14;
            } while (iVar8 + 1 < *(int *)(lVar9 + 0xa0 + lVar13));
            iVar18 = *(int *)(param_1 + 0x14c);
            iVar12 = iVar12 + iVar8 + 1;
          }
          iVar7 = iVar1 + iVar7;
          iVar10 = iVar10 + 1;
          if ((iVar10 < iVar18) && (lVar17 < 0x3fff0)) {
            *piVar14 = iVar12 + -1;
            piVar14[1] = iVar12;
            iVar18 = iVar12 + 1;
            piVar14[2] = iVar12;
            iVar12 = iVar12 + 2;
            piVar14[3] = iVar18;
            piVar14 = piVar14 + 4;
            iVar7 = iVar7 + 4;
            lVar17 = (longlong)piVar14 - (longlong)piVar3;
          }
        } while (lVar17 < 0x3fffd);
        iVar10 = *(int *)(param_1 + 0x34);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar10);
    goto LAB_1435f0562;
  }
  iVar7 = 0;
LAB_1435f0562:
  *(int *)(param_2 + 0x128) = iVar7;
  return;
}



// FUNCTION 1435f057e FUN_1435f057e body=19071 status=ok
// SIG undefined FUN_1435f057e(void)

void FUN_1435f057e(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 (*pauVar10) [16];
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
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
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar57;
  undefined4 uVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  undefined8 uVar68;
  float *pfVar69;
  double *pdVar70;
  longlong lVar71;
  undefined1 (*pauVar72) [16];
  uint uVar73;
  ulonglong uVar74;
  double *pdVar75;
  float *pfVar76;
  double *pdVar77;
  double *pdVar78;
  longlong lVar79;
  int iVar80;
  ulonglong uVar81;
  int iVar82;
  float *pfVar83;
  float *pfVar84;
  float fVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  float fVar99;
  undefined4 uVar100;
  float fVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  float local_350;
  float local_34c;
  double local_330;
  double local_320;
  float local_314;
  double dStack_2d0;
  undefined1 local_298 [16];
  undefined1 local_288 [40];
  double dStack_260;
  longlong local_250;
  undefined1 local_248 [112];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [152];
  double dStack_120;
  
  if (0 < *(int *)(param_1 + 0x184)) {
    FUN_147c371e0(param_1);
    return;
  }
  uVar73 = *(int *)(param_1 + 0x154) + (uint)(*(int *)(param_1 + 0x154) == 0);
  iVar82 = 1;
  if (1 < *(int *)(param_1 + 0x150)) {
    iVar82 = *(int *)(param_1 + 0x150);
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    dVar15 = param_2[0x20];
    dVar4 = *(double *)((longlong)dVar15 + 0xa50);
    dVar5 = *(double *)((longlong)dVar15 + 0xa58);
    dVar6 = *(double *)((longlong)dVar15 + 0xa60);
    dVar7 = *(double *)((longlong)dVar15 + 0xa90);
    dVar8 = *(double *)((longlong)dVar15 + 0xa98);
    fVar90 = 1.0 / (float)(int)uVar73;
    fVar88 = 1.0 / (float)(int)(iVar82 * uVar73);
    dVar21 = (double)*(float *)(param_1 + 0xbc) * 65536.0;
    dVar25 = (double)*(float *)(param_1 + 0xb8) * 65536.0;
    dVar33 = (double)*(float *)(param_1 + 0xb4) * 65536.0;
    uVar57 = *(undefined4 *)(param_2 + 0x10);
    uVar58 = *(undefined4 *)((longlong)param_2 + 0x84);
    pfVar84 = (float *)param_2[0x22];
    uVar86 = SUB84(param_2[0x11],0);
    uVar87 = (undefined4)((ulonglong)param_2[0x11] >> 0x20);
    pauVar2 = (undefined1 (*) [16])(param_1 + 0x15c);
    dVar22 = param_2[0xc] * 0.0;
    auVar20._8_4_ = SUB84(param_2[0xd] * 0.0,0);
    auVar20._0_8_ = dVar22;
    auVar20._12_4_ = (int)((ulonglong)(param_2[0xd] * 0.0) >> 0x20);
    dVar16 = param_2[0xe] * 0.0;
    fVar89 = fVar88 + 0.0;
    uVar74 = (ulonglong)uVar73;
    iVar82 = 0;
    dVar15 = *(double *)((longlong)dVar15 + 0xaa0);
    dVar9 = param_2[0x12];
    dVar59 = *param_2;
    dVar60 = param_2[1];
    dVar61 = param_2[2];
    dVar62 = param_2[4];
    dVar63 = param_2[5];
    dVar64 = param_2[6];
    dVar65 = param_2[8];
    dVar66 = param_2[9];
    dVar67 = param_2[10];
    uVar91 = 0;
    uVar92 = 0;
    uVar98 = 0;
    uVar100 = 0;
    uVar96 = 0;
    uVar97 = 0;
    do {
      lVar79 = (longlong)iVar82 * (longlong)*(int *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x50)
      ;
      local_320 = (double)CONCAT44(uVar92,uVar91);
      if (*(int *)((longlong)*(int *)(param_1 + 0x124) + 0xa0 + lVar79) != 0) {
        pfVar76 = (float *)(lVar79 + *(int *)(param_1 + 300));
        if ((longlong)*(int *)(param_1 + 300) == -1) {
          pfVar76 = (float *)0x0;
        }
        pdVar77 = (double *)(lVar79 + *(int *)(param_1 + 0x134));
        if ((longlong)*(int *)(param_1 + 0x134) == -1) {
          pdVar77 = (double *)0x0;
        }
        pdVar78 = (double *)(lVar79 + *(int *)(param_1 + 0x138));
        if ((longlong)*(int *)(param_1 + 0x138) == -1) {
          pdVar78 = (double *)0x0;
        }
        pfVar83 = (float *)(lVar79 + *(int *)(param_1 + 0x13c));
        if ((longlong)*(int *)(param_1 + 0x13c) == -1) {
          pfVar83 = (float *)0x0;
        }
        fVar85 = 1.0;
        if ((longlong)*(int *)(param_1 + 0x140) != -1) {
          fVar85 = 1.0;
          pfVar69 = (float *)(*(int *)(param_1 + 0x140) + lVar79);
          if (pfVar69 != (float *)0x0) {
            fVar85 = *pfVar69;
          }
        }
        if (pdVar77 != (double *)0x0) {
          pauVar10 = (undefined1 (*) [16])(*(int *)(param_1 + 0x124) + lVar79);
          fVar93 = *(float *)(lVar79 + 0x60) * *(float *)(param_1 + 0x60);
          dVar26 = (double)fVar93;
          uVar91 = SUB84(dVar9,0);
          uVar92 = (undefined4)((ulonglong)dVar9 >> 0x20);
          dStack_120 = auVar20._8_8_;
          if ((int)uVar73 < 2) {
            pauVar72 = pauVar2;
            uVar102 = uVar57;
            uVar103 = uVar58;
            uVar104 = uVar86;
            uVar105 = uVar87;
            if (*(char *)(param_1 + 0x147) != '\0') {
              uVar102 = *(undefined4 *)(pauVar10[1] + 8);
              uVar103 = *(undefined4 *)(pauVar10[1] + 0xc);
              uVar104 = *(undefined4 *)pauVar10[2];
              uVar105 = *(undefined4 *)(pauVar10[2] + 4);
              uVar91 = (undefined4)*(undefined8 *)(pauVar10[2] + 8);
              uVar92 = (undefined4)((ulonglong)*(undefined8 *)(pauVar10[2] + 8) >> 0x20);
              pauVar72 = pauVar10 + 3;
            }
            dStack_2d0 = (double)CONCAT44(uVar105,uVar104);
            dVar50 = (double)CONCAT44(uVar103,uVar102);
            dVar34 = (double)CONCAT44(uVar92,uVar91);
            dVar27 = dVar34 * (double)CONCAT44(uVar92,uVar91) +
                     dVar50 * (double)CONCAT44(uVar103,uVar102) +
                     (double)CONCAT44(uVar105,uVar104) * dStack_2d0;
            if (9.99999993922529e-09 < dVar27) {
              dVar34 = 1.0 / SQRT(dVar27);
              dVar50 = (double)CONCAT44(uVar103,uVar102) * dVar34;
              dStack_2d0 = (double)CONCAT44(uVar105,uVar104) * dVar34;
              dVar34 = (double)CONCAT44(uVar92,uVar91) * dVar34;
            }
            if (0 < *(int *)(param_1 + 0x14c)) {
              iVar14 = *(int *)(pauVar10[6] + 0xc);
              dVar27 = (double)*(float *)*pauVar72;
              dVar50 = dVar50 * dVar27;
              dStack_2d0 = dStack_2d0 * dVar27;
              local_314 = *(float *)*pauVar2;
              dVar34 = dVar34 * dVar27;
              dVar27 = (double)fVar85;
              dVar17 = (double)*(float *)(param_1 + 0x158);
              puVar1 = (undefined8 *)(lVar79 + 0x70);
              iVar80 = 0;
              do {
                auVar45._8_4_ = SUB84(dStack_2d0,0);
                auVar45._0_8_ = dVar50;
                auVar45._12_4_ = (int)((ulonglong)dStack_2d0 >> 0x20);
                dVar43 = *(double *)*pauVar10;
                dStack_260 = *(double *)(*pauVar10 + 8);
                local_288._0_16_ = *pauVar10;
                dVar11 = *(double *)pauVar10[9];
                dVar12 = *(double *)pauVar10[1];
                local_330 = *(double *)(pauVar10[8] + 8) * dVar11 + dVar12;
                dVar13 = *(double *)(*pauVar10 + 8);
                dVar42 = *(double *)pauVar10[8] * dVar11 + dVar13;
                dVar11 = dVar11 * *(double *)(pauVar10[7] + 8) + dVar43;
                if ((0.0 <= *(float *)(param_1 + 0x16c)) && (*(char *)(param_1 + 0x146) == '\x01'))
                {
                  dVar39 = pdVar78[2] - pdVar77[2];
                  dVar41 = pdVar78[1] - pdVar77[1];
                  dVar40 = *pdVar78 - *pdVar77;
                  dVar51 = dVar39 * dVar39 + dVar40 * dVar40 + dVar41 * dVar41;
                  if (9.99999993922529e-09 < dVar51) {
                    dVar51 = 1.0 / SQRT(dVar51);
                    dVar40 = dVar40 * dVar51;
                    dVar41 = dVar41 * dVar51;
                    dVar39 = dVar39 * dVar51;
                  }
                  dVar51 = (double)*pfVar76;
                  dVar39 = pdVar77[2] + (double)*(float *)(param_1 + 0x168) * dVar39 * dVar51;
                  dVar41 = pdVar77[1] + (double)*(float *)(param_1 + 0x164) * dVar41 * dVar51;
                  dVar40 = *pdVar77 + (double)*(float *)(param_1 + 0x160) * dVar40 * dVar51;
                  fVar85 = *(float *)(param_1 + 0x170);
                  if (((fVar85 <= ABS((float)(dVar40 - *pdVar78))) ||
                      (fVar85 <= ABS((float)(dVar41 - pdVar78[1])))) ||
                     (fVar85 <= ABS((float)(dVar39 - pdVar78[2])))) {
                    *pdVar77 = dVar40;
                    pdVar77[1] = dVar41;
                    pdVar77[2] = dVar39;
                  }
                  else {
                    pdVar77[2] = pdVar78[2];
                    dVar39 = pdVar78[1];
                    *pdVar77 = *pdVar78;
                    pdVar77[1] = dVar39;
                  }
                }
                dVar39 = pdVar77[2] * dVar27;
                dVar40 = pdVar77[1] * dVar27;
                dVar41 = *pdVar77 * dVar27;
                dVar52 = dVar12 - ((dVar39 * dVar67 + dVar40 * dVar64 + dVar41 * dVar61 + dVar16) *
                                   dVar17 + local_330);
                dVar51 = dVar13 - ((dVar39 * dVar66 + dVar40 * dVar63 + dVar41 * dVar60 + dStack_120
                                   ) * dVar17 + dVar42);
                dVar40 = dVar43 - ((dVar39 * dVar65 + dVar40 * dVar62 + dVar41 * dVar59 + dVar22) *
                                   dVar17 + dVar11);
                dVar39 = dVar52 * dVar52 + dVar40 * dVar40 + dVar51 * dVar51;
                if (9.99999993922529e-09 < dVar39) {
                  dVar39 = 1.0 / SQRT(dVar39);
                  dVar40 = dVar40 * dVar39;
                  dVar51 = dVar51 * dVar39;
                  dVar52 = dVar52 * dVar39;
                }
                if ((*(int *)(param_1 + 0x120) == 0) ||
                   (dVar41 = (double)CONCAT44(uVar97,uVar96),
                   dVar39 = (double)CONCAT44(uVar100,uVar98),
                   *(int *)(param_1 + 0x120) == 1 && iVar82 == 0)) {
                  dVar19 = dVar40 * (dVar13 - dVar8) - (dVar43 - dVar7) * dVar51;
                  dVar18 = dVar52 * (dVar43 - dVar7) - (dVar12 - dVar15) * dVar40;
                  dVar23 = dVar51 * (dVar12 - dVar15) - (dVar13 - dVar8) * dVar52;
                  dVar28 = dVar19 * dVar19 + dVar23 * dVar23 + dVar18 * dVar18;
                  dVar41 = dVar4;
                  dVar39 = dVar5;
                  local_320 = dVar6;
                  if (9.99999993922529e-09 < dVar28) {
                    local_320 = 1.0 / SQRT(dVar28);
                    dVar41 = dVar23 * local_320;
                    dVar39 = dVar18 * local_320;
                    local_320 = dVar19 * local_320;
                  }
                }
                dVar23 = local_320;
                dVar18 = dVar39;
                dVar19 = dVar41;
                if (iVar80 != 0) {
                  dVar19 = (double)((float)iVar80 * (3.1415927 / (float)*(int *)(param_1 + 0x14c)))
                           * 0.5;
                  dVar18 = sin(dVar19);
                  dVar19 = cos(dVar19);
                  dVar40 = dVar40 * dVar18;
                  dVar51 = dVar51 * dVar18;
                  dVar52 = dVar52 * dVar18;
                  dVar28 = dVar40 * dVar39 - dVar41 * dVar51;
                  dVar29 = dVar52 * dVar41 - local_320 * dVar40;
                  dVar35 = dVar51 * local_320 - dVar39 * dVar52;
                  dVar28 = dVar28 + dVar28;
                  dVar29 = dVar29 + dVar29;
                  dVar35 = dVar35 + dVar35;
                  dVar23 = (dVar40 * dVar29 - dVar35 * dVar51) + dVar19 * dVar28 + local_320;
                  dVar18 = (dVar52 * dVar35 - dVar28 * dVar40) + dVar19 * dVar29 + dVar39;
                  dVar19 = (dVar51 * dVar28 - dVar29 * dVar52) + dVar19 * dVar35 + dVar41;
                }
                local_350 = 1.0;
                if (*(char *)(param_1 + 0x180) != '\0') {
                  local_350 = *pfVar83;
                }
                dVar52 = (double)local_350;
                dVar40 = dVar19 * dVar26 * dVar52;
                dVar51 = dVar18 * dVar26 * dVar52;
                dVar52 = dVar23 * dVar26 * dVar52;
                *pfVar84 = (float)((dVar43 + dVar40) - dVar33);
                pfVar84[1] = (float)((dVar13 + dVar51) - dVar25);
                pfVar84[2] = (float)((dVar12 + dVar52) - dVar21);
                pfVar84[4] = (float)(dVar43 - dVar33);
                pfVar84[5] = (float)(dVar13 - dVar25);
                pfVar84[6] = (float)(dVar12 - dVar21);
                pfVar84[7] = 0.0;
                pfVar84[8] = fVar93;
                pfVar84[9] = fVar93;
                pfVar84[0x10] = 0.0;
                pfVar84[0x11] = 0.0;
                pfVar84[10] = *(float *)(lVar79 + 0x3c);
                uVar68 = *(undefined8 *)(lVar79 + 0x78);
                *(undefined8 *)(pfVar84 + 0xc) = *puVar1;
                *(undefined8 *)(pfVar84 + 0xe) = uVar68;
                pfVar84[0x14] = (float)((dVar43 - dVar40) - dVar33);
                pfVar84[0x15] = (float)((dVar13 - dVar51) - dVar25);
                pfVar84[0x16] = (float)((dVar12 - dVar52) - dVar21);
                pfVar84[0x18] = (float)(dVar43 - dVar33);
                pfVar84[0x19] = (float)(dVar13 - dVar25);
                pfVar84[0x1a] = (float)(dVar12 - dVar21);
                pfVar84[0x1b] = 0.0;
                pfVar84[0x1c] = fVar93;
                pfVar84[0x1d] = fVar93;
                pfVar84[0x24] = 0.0;
                pfVar84[0x25] = 1.0;
                pfVar84[0x1e] = *(float *)(lVar79 + 0x3c);
                uVar68 = *(undefined8 *)(lVar79 + 0x78);
                *(undefined8 *)(pfVar84 + 0x20) = *puVar1;
                *(undefined8 *)(pfVar84 + 0x22) = uVar68;
                pfVar84 = pfVar84 + 0x28;
                dStack_2d0 = auVar45._8_8_;
                local_34c = fVar89;
                if (0 < *(int *)(pauVar10[9] + 8)) {
                  local_250 = 0;
                  local_298._0_8_ = dVar12;
                  local_1d8._0_8_ = dVar34;
                  local_1b8._8_8_ = dStack_2d0;
                  local_1b8._0_8_ = dVar50;
                  pfVar69 = pfVar83;
                  dVar42 = dStack_260;
                  local_330 = dVar12;
                  dVar11 = dVar43;
                  do {
                    dVar34 = *(double *)pauVar10[9];
                    dVar50 = *(double *)(pauVar10[8] + 8);
                    dVar12 = *(double *)pauVar10[8];
                    dVar13 = *(double *)(pauVar10[7] + 8);
                    if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                       (*(char *)(param_1 + 0x146) == '\x01')) {
                      dVar43 = pdVar78[local_250 * 3 + 2] - pdVar77[local_250 * 3 + 2];
                      dVar51 = pdVar78[local_250 * 3 + 1] - pdVar77[local_250 * 3 + 1];
                      dVar40 = pdVar78[local_250 * 3] - pdVar77[local_250 * 3];
                      dVar52 = dVar43 * dVar43 + dVar40 * dVar40 + dVar51 * dVar51;
                      if (9.99999993922529e-09 < dVar52) {
                        dVar52 = 1.0 / SQRT(dVar52);
                        dVar40 = dVar40 * dVar52;
                        dVar51 = dVar51 * dVar52;
                        dVar43 = dVar43 * dVar52;
                      }
                      pdVar75 = pdVar77 + local_250 * 3;
                      dVar52 = (double)*pfVar76;
                      dVar43 = pdVar77[local_250 * 3 + 2] +
                               (double)*(float *)(param_1 + 0x168) * dVar43 * dVar52;
                      dVar51 = pdVar77[local_250 * 3 + 1] +
                               (double)*(float *)(param_1 + 0x164) * dVar51 * dVar52;
                      dVar40 = pdVar77[local_250 * 3] +
                               (double)*(float *)(param_1 + 0x160) * dVar40 * dVar52;
                      fVar85 = *(float *)(param_1 + 0x170);
                      if (((fVar85 <= ABS((float)(dVar40 - pdVar78[local_250 * 3]))) ||
                          (fVar85 <= ABS((float)(dVar51 - pdVar78[local_250 * 3 + 1])))) ||
                         (fVar85 <= ABS((float)(dVar43 - pdVar78[local_250 * 3 + 2])))) {
                        *pdVar75 = dVar40;
                        pdVar75[1] = dVar51;
                        pdVar75[2] = dVar43;
                      }
                      else {
                        pdVar70 = pdVar78 + local_250 * 3;
                        pdVar75[2] = pdVar70[2];
                        dVar43 = pdVar70[1];
                        *pdVar75 = *pdVar70;
                        pdVar75[1] = dVar43;
                      }
                    }
                    local_330 = local_330 + dVar50 * dVar34;
                    dVar42 = dVar42 + dVar12 * dVar34;
                    dVar11 = dVar34 * dVar13 + dVar11;
                    dVar52 = pdVar77[local_250 * 3 + 2] * dVar27;
                    dVar40 = pdVar77[local_250 * 3 + 1] * dVar27;
                    dVar12 = *(double *)pauVar10[9];
                    dVar34 = *(double *)(pauVar10[8] + 8);
                    dVar13 = *(double *)pauVar10[8];
                    dVar43 = *(double *)(pauVar10[7] + 8);
                    dVar51 = pdVar77[local_250 * 3] * dVar27;
                    if ((iVar14 < 0) && (local_250 + 1U == (ulonglong)*(uint *)(pauVar10[9] + 8))) {
                      if (((*(char *)(param_1 + 0x149) == '\x01') &&
                          (0.0 <= *(float *)(param_1 + 0x16c))) &&
                         (*(char *)(param_1 + 0x146) == '\x01')) {
                        lVar71 = (longlong)*(int *)(param_1 + 0x150);
                        dVar34 = pdVar78[lVar71 * 3 + 2] - pdVar77[lVar71 * 3 + 2];
                        dVar12 = pdVar78[lVar71 * 3 + 1] - pdVar77[lVar71 * 3 + 1];
                        dVar50 = pdVar78[lVar71 * 3] - pdVar77[lVar71 * 3];
                        dVar13 = dVar34 * dVar34 + dVar50 * dVar50 + dVar12 * dVar12;
                        if (9.99999993922529e-09 < dVar13) {
                          dVar13 = 1.0 / SQRT(dVar13);
                          dVar50 = dVar50 * dVar13;
                          dVar12 = dVar12 * dVar13;
                          dVar34 = dVar34 * dVar13;
                        }
                        pdVar75 = pdVar77 + lVar71 * 3;
                        dVar13 = (double)*pfVar76;
                        dVar34 = pdVar77[lVar71 * 3 + 2] +
                                 (double)*(float *)(param_1 + 0x168) * dVar34 * dVar13;
                        dVar12 = pdVar77[lVar71 * 3 + 1] +
                                 (double)*(float *)(param_1 + 0x164) * dVar12 * dVar13;
                        dVar50 = pdVar77[lVar71 * 3] +
                                 (double)*(float *)(param_1 + 0x160) * dVar50 * dVar13;
                        fVar85 = *(float *)(param_1 + 0x170);
                        if (((fVar85 <= ABS((float)(dVar50 - pdVar78[lVar71 * 3]))) ||
                            (fVar85 <= ABS((float)(dVar12 - pdVar78[lVar71 * 3 + 1])))) ||
                           (fVar85 <= ABS((float)(dVar34 - pdVar78[lVar71 * 3 + 2])))) {
                          *pdVar75 = dVar50;
                          pdVar75[1] = dVar12;
                          pdVar75[2] = dVar34;
                        }
                        else {
                          pdVar70 = pdVar78 + lVar71 * 3;
                          pdVar75[2] = pdVar70[2];
                          dVar34 = pdVar70[1];
                          *pdVar75 = *pdVar70;
                          pdVar75[1] = dVar34;
                        }
                      }
                      dVar50 = *(double *)pauVar10[5];
                      dStack_2d0 = *(double *)(pauVar10[5] + 8);
                      dVar34 = *(double *)pauVar10[6];
                      local_314 = *(float *)(pauVar10[6] + 8);
                    }
                    else {
                      if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                         (*(char *)(param_1 + 0x146) == '\x01')) {
                        dVar50 = pdVar78[local_250 * 3 + 5] - pdVar77[local_250 * 3 + 5];
                        dVar19 = pdVar78[local_250 * 3 + 4] - pdVar77[local_250 * 3 + 4];
                        dVar18 = pdVar78[local_250 * 3 + 3] - pdVar77[local_250 * 3 + 3];
                        dVar23 = dVar50 * dVar50 + dVar18 * dVar18 + dVar19 * dVar19;
                        if (9.99999993922529e-09 < dVar23) {
                          dVar23 = 1.0 / SQRT(dVar23);
                          dVar18 = dVar18 * dVar23;
                          dVar19 = dVar19 * dVar23;
                          dVar50 = dVar50 * dVar23;
                        }
                        dVar23 = (double)*pfVar76;
                        dVar50 = pdVar77[local_250 * 3 + 5] +
                                 (double)*(float *)(param_1 + 0x168) * dVar50 * dVar23;
                        dVar19 = pdVar77[local_250 * 3 + 4] +
                                 (double)*(float *)(param_1 + 0x164) * dVar19 * dVar23;
                        dVar18 = pdVar77[local_250 * 3 + 3] +
                                 (double)*(float *)(param_1 + 0x160) * dVar18 * dVar23;
                        fVar85 = *(float *)(param_1 + 0x170);
                        if (((fVar85 <= ABS((float)(dVar18 - pdVar78[local_250 * 3 + 3]))) ||
                            (fVar85 <= ABS((float)(dVar19 - pdVar78[local_250 * 3 + 4])))) ||
                           (fVar85 <= ABS((float)(dVar50 - pdVar78[local_250 * 3 + 5])))) {
                          pdVar77[local_250 * 3 + 3] = dVar18;
                          pdVar77[local_250 * 3 + 4] = dVar19;
                          pdVar77[local_250 * 3 + 5] = dVar50;
                        }
                        else {
                          pdVar77[local_250 * 3 + 5] = pdVar78[local_250 * 3 + 5];
                          dVar50 = pdVar78[local_250 * 3 + 4];
                          pdVar77[local_250 * 3 + 3] = pdVar78[local_250 * 3 + 3];
                          pdVar77[local_250 * 3 + 4] = dVar50;
                        }
                      }
                      dVar18 = pdVar77[local_250 * 3 + 5] * dVar27;
                      dVar19 = pdVar77[local_250 * 3 + 4] * dVar27;
                      dVar23 = pdVar77[local_250 * 3 + 3] * dVar27;
                      dVar50 = (double)((1.0 - *(float *)(param_1 + 0x174)) * 0.5);
                      dVar34 = ((dVar34 * dVar12 + local_330 +
                                (dVar18 * dVar67 + dVar19 * dVar64 + dVar23 * dVar61 + dVar16) *
                                dVar17) - (double)local_298._0_8_) * dVar50;
                      dStack_2d0 = ((dVar13 * dVar12 + dVar42 +
                                    (dVar18 * dVar66 + dVar19 * dVar63 + dVar23 * dVar60 +
                                    dStack_120) * dVar17) - (double)local_288._8_8_) * dVar50;
                      dVar50 = ((dVar12 * dVar43 + dVar11 +
                                (dVar18 * dVar65 + dVar19 * dVar62 + dVar23 * dVar59 + dVar22) *
                                dVar17) - (double)local_288._0_8_) * dVar50;
                    }
                    dVar12 = dVar34 * dVar34 + dVar50 * dVar50 + dStack_2d0 * dStack_2d0;
                    if (9.99999993922529e-09 < dVar12) {
                      dVar12 = 1.0 / SQRT(dVar12);
                      dVar50 = dVar50 * dVar12;
                      dStack_2d0 = dStack_2d0 * dVar12;
                      dVar34 = dVar34 * dVar12;
                    }
                    dStack_260 = (dVar52 * dVar66 + dVar40 * dVar63 + dVar51 * dVar60 + dStack_120)
                                 * dVar17 + dVar42;
                    dVar43 = (dVar52 * dVar65 + dVar40 * dVar62 + dVar51 * dVar59 + dVar22) * dVar17
                             + dVar11;
                    dVar12 = (double)local_314;
                    dVar50 = dVar50 * dVar12;
                    dStack_2d0 = dStack_2d0 * dVar12;
                    dVar34 = dVar34 * dVar12;
                    dVar12 = (dVar52 * dVar67 + dVar40 * dVar64 + dVar51 * dVar61 + dVar16) * dVar17
                             + local_330;
                    if (0 < (int)uVar73) {
                      auVar46._8_4_ = SUB84(dStack_2d0,0);
                      auVar46._0_8_ = dVar50;
                      auVar46._12_4_ = (int)((ulonglong)dStack_2d0 >> 0x20);
                      auVar55._8_4_ = SUB84(dStack_260,0);
                      auVar55._0_8_ = dVar43;
                      auVar55._12_4_ = (int)((ulonglong)dStack_260 >> 0x20);
                      uVar81 = 0;
                      dVar13 = (double)local_288._8_8_;
                      dVar40 = (double)local_298._0_8_;
                      dVar51 = (double)local_288._0_8_;
                      do {
                        uVar3 = uVar81 + 1;
                        fVar101 = (float)(int)uVar3 * fVar90;
                        fVar95 = fVar101 * fVar101;
                        fVar85 = fVar101 * fVar95;
                        fVar94 = fVar85 - fVar95;
                        fVar99 = ((fVar85 + fVar85) - fVar95 * 3.0) + 1.0;
                        fVar101 = (fVar85 - (fVar95 + fVar95)) + fVar101;
                        fVar85 = fVar95 * 3.0 - (fVar85 + fVar85);
                        dVar19 = (double)fVar85 * dVar43 + (double)fVar94 * dVar50 +
                                 (double)fVar101 * (double)local_1b8._0_8_ +
                                 (double)fVar99 * (double)local_288._0_8_;
                        dVar23 = (double)fVar85 * dStack_260 + (double)fVar94 * dStack_2d0 +
                                 (double)fVar101 * (double)local_1b8._8_8_ +
                                 (double)fVar99 * (double)local_288._8_8_;
                        dVar18 = (double)fVar94 * dVar34 + (double)fVar85 * dVar12 +
                                 (double)fVar99 * (double)local_298._0_8_ +
                                 (double)fVar101 * (double)local_1d8._0_8_;
                        dVar28 = dVar40 - dVar18;
                        dVar35 = dVar13 - dVar23;
                        dVar29 = dVar51 - dVar19;
                        dVar52 = dVar28 * dVar28 + dVar29 * dVar29 + dVar35 * dVar35;
                        if (9.99999993922529e-09 < dVar52) {
                          dVar52 = 1.0 / SQRT(dVar52);
                          dVar29 = dVar29 * dVar52;
                          dVar35 = dVar35 * dVar52;
                          dVar28 = dVar28 * dVar52;
                        }
                        dVar24 = dVar41;
                        dVar30 = dVar39;
                        dVar52 = local_320;
                        if (*(int *)(param_1 + 0x120) == 0) {
                          dVar36 = dVar29 * (dVar13 - dVar8) - (dVar51 - dVar7) * dVar35;
                          dVar51 = dVar28 * (dVar51 - dVar7) - (dVar40 - dVar15) * dVar29;
                          dVar40 = dVar35 * (dVar40 - dVar15) - (dVar13 - dVar8) * dVar28;
                          dVar13 = dVar36 * dVar36 + dVar40 * dVar40 + dVar51 * dVar51;
                          dVar24 = dVar4;
                          dVar30 = dVar5;
                          dVar52 = dVar6;
                          if (9.99999993922529e-09 < dVar13) {
                            dVar52 = 1.0 / SQRT(dVar13);
                            dVar24 = dVar40 * dVar52;
                            dVar30 = dVar51 * dVar52;
                            dVar52 = dVar36 * dVar52;
                          }
                        }
                        if (iVar80 != 0) {
                          dVar40 = (double)((3.1415927 / (float)*(int *)(param_1 + 0x14c)) *
                                           (float)iVar80) * 0.5;
                          dVar13 = sin(dVar40);
                          dVar40 = cos(dVar40);
                          dVar29 = dVar29 * dVar13;
                          dVar35 = dVar35 * dVar13;
                          dVar28 = dVar28 * dVar13;
                          dVar51 = dVar35 * dVar52 - dVar30 * dVar28;
                          dVar51 = dVar51 + dVar51;
                          dVar36 = dVar29 * dVar30 - dVar24 * dVar35;
                          dVar36 = dVar36 + dVar36;
                          dVar13 = dVar28 * dVar24 - dVar52 * dVar29;
                          dVar13 = dVar13 + dVar13;
                          dVar52 = (dVar29 * dVar13 - dVar51 * dVar35) + dVar40 * dVar36 + dVar52;
                          dVar30 = (dVar28 * dVar51 - dVar36 * dVar29) + dVar40 * dVar13 + dVar30;
                          dVar24 = (dVar35 * dVar36 - dVar13 * dVar28) + dVar40 * dVar51 + dVar24;
                        }
                        if (*(char *)(param_1 + 0x180) != '\0') {
                          local_350 = pfVar69[uVar81];
                        }
                        dVar13 = (double)local_350;
                        dVar40 = dVar24 * dVar26 * dVar13;
                        dVar51 = dVar30 * dVar26 * dVar13;
                        dVar13 = dVar52 * dVar26 * dVar13;
                        *pfVar84 = (float)((dVar19 + dVar40) - dVar33);
                        pfVar84[1] = (float)((dVar23 + dVar51) - dVar25);
                        pfVar84[2] = (float)((dVar18 + dVar13) - dVar21);
                        pfVar84[4] = (float)(dVar19 - dVar33);
                        pfVar84[5] = (float)(dVar23 - dVar25);
                        pfVar84[6] = (float)(dVar18 - dVar21);
                        pfVar84[7] = 0.0;
                        pfVar84[8] = fVar93;
                        pfVar84[9] = fVar93;
                        pfVar84[0x10] = local_34c;
                        pfVar84[0x11] = 0.0;
                        pfVar84[10] = *(float *)(lVar79 + 0x3c);
                        uVar68 = *(undefined8 *)(lVar79 + 0x78);
                        *(undefined8 *)(pfVar84 + 0xc) = *puVar1;
                        *(undefined8 *)(pfVar84 + 0xe) = uVar68;
                        pfVar84[0x14] = (float)((dVar19 - dVar40) - dVar33);
                        pfVar84[0x15] = (float)((dVar23 - dVar51) - dVar25);
                        pfVar84[0x16] = (float)((dVar18 - dVar13) - dVar21);
                        pfVar84[0x18] = (float)(dVar19 - dVar33);
                        pfVar84[0x19] = (float)(dVar23 - dVar25);
                        pfVar84[0x1a] = (float)(dVar18 - dVar21);
                        pfVar84[0x1b] = 0.0;
                        pfVar84[0x1c] = fVar93;
                        pfVar84[0x1d] = fVar93;
                        pfVar84[0x24] = local_34c;
                        pfVar84[0x25] = 1.0;
                        pfVar84[0x1e] = *(float *)(lVar79 + 0x3c);
                        uVar68 = *(undefined8 *)(lVar79 + 0x78);
                        *(undefined8 *)(pfVar84 + 0x20) = *puVar1;
                        *(undefined8 *)(pfVar84 + 0x22) = uVar68;
                        pfVar84 = pfVar84 + 0x28;
                        local_34c = local_34c + fVar88;
                        dStack_2d0 = auVar46._8_8_;
                        dStack_260 = auVar55._8_8_;
                        uVar81 = uVar3;
                        dVar13 = dVar23;
                        dVar40 = dVar18;
                        dVar51 = dVar19;
                      } while (uVar74 != uVar3);
                    }
                    local_250 = local_250 + 1;
                    pfVar69 = pfVar69 + uVar74;
                    local_298._0_8_ = dVar12;
                    local_288._8_4_ = SUB84(dStack_260,0);
                    local_288._0_8_ = dVar43;
                    local_288._12_4_ = (int)((ulonglong)dStack_260 >> 0x20);
                    local_1d8._0_8_ = dVar34;
                    local_1b8._8_4_ = SUB84(dStack_2d0,0);
                    local_1b8._0_8_ = dVar50;
                    local_1b8._12_4_ = (int)((ulonglong)dStack_2d0 >> 0x20);
                  } while (local_250 < *(int *)(pauVar10[9] + 8));
                }
                if (iVar14 < 0) {
                  dVar51 = *(double *)*(undefined1 (*) [16])(pauVar10[3] + 8);
                  dVar40 = *(double *)pauVar10[4];
                  local_1d8._0_16_ = *(undefined1 (*) [16])(pauVar10[3] + 8);
                  dVar13 = *(double *)(pauVar10[4] + 8);
                  if (*(char *)(param_1 + 0x149) == '\x01') {
                    if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                       (*(char *)(param_1 + 0x146) == '\x01')) {
                      lVar71 = (longlong)*(int *)(param_1 + 0x150);
                      dVar52 = pdVar78[lVar71 * 3 + 2] - pdVar77[lVar71 * 3 + 2];
                      dVar19 = pdVar78[lVar71 * 3 + 1] - pdVar77[lVar71 * 3 + 1];
                      dVar18 = pdVar78[lVar71 * 3] - pdVar77[lVar71 * 3];
                      dVar23 = dVar52 * dVar52 + dVar18 * dVar18 + dVar19 * dVar19;
                      if (9.99999993922529e-09 < dVar23) {
                        dVar23 = 1.0 / SQRT(dVar23);
                        dVar18 = dVar18 * dVar23;
                        dVar19 = dVar19 * dVar23;
                        dVar52 = dVar52 * dVar23;
                      }
                      pdVar75 = pdVar77 + lVar71 * 3;
                      dVar23 = (double)*pfVar76;
                      dVar52 = pdVar77[lVar71 * 3 + 2] +
                               (double)*(float *)(param_1 + 0x168) * dVar52 * dVar23;
                      dVar19 = pdVar77[lVar71 * 3 + 1] +
                               (double)*(float *)(param_1 + 0x164) * dVar19 * dVar23;
                      dVar18 = pdVar77[lVar71 * 3] +
                               (double)*(float *)(param_1 + 0x160) * dVar18 * dVar23;
                      fVar85 = *(float *)(param_1 + 0x170);
                      if (((fVar85 <= ABS((float)(dVar18 - pdVar78[lVar71 * 3]))) ||
                          (fVar85 <= ABS((float)(dVar19 - pdVar78[lVar71 * 3 + 1])))) ||
                         (fVar85 <= ABS((float)(dVar52 - pdVar78[lVar71 * 3 + 2])))) {
                        *pdVar75 = dVar18;
                        pdVar75[1] = dVar19;
                        pdVar75[2] = dVar52;
                      }
                      else {
                        pdVar70 = pdVar78 + lVar71 * 3;
                        pdVar75[2] = pdVar70[2];
                        dVar52 = pdVar70[1];
                        *pdVar75 = *pdVar70;
                        pdVar75[1] = dVar52;
                      }
                    }
                    lVar71 = (longlong)*(int *)(param_1 + 0x150);
                    dVar52 = pdVar77[lVar71 * 3 + 2] * dVar27;
                    dVar18 = pdVar77[lVar71 * 3 + 1] * dVar27;
                    dVar19 = pdVar77[lVar71 * 3] * dVar27;
                    dVar40 = dVar40 + (dVar52 * dVar66 + dVar18 * dVar63 + dVar19 * dVar60 +
                                      dStack_120) * dVar17;
                    dVar13 = dVar13 + (dVar52 * dVar67 + dVar18 * dVar64 + dVar19 * dVar61 + dVar16)
                                      * dVar17;
                    local_1d8._8_4_ = SUB84(dVar40,0);
                    local_1d8._0_8_ =
                         (dVar52 * dVar65 + dVar18 * dVar62 + dVar19 * dVar59 + dVar22) * dVar17 +
                         dVar51;
                    local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                  }
                  local_298._0_8_ = dVar13;
                  if (*(char *)(param_1 + 0x148) == '\x01') {
                    dVar52 = *(double *)pauVar10[5];
                    local_1b8._8_8_ = *(undefined8 *)(pauVar10[5] + 8);
                    dVar40 = *(double *)pauVar10[6];
                  }
                  else {
                    dVar51 = *(double *)pauVar10[9];
                    dVar52 = (double)((1.0 - *(float *)(param_1 + 0x174)) * 0.5);
                    dVar40 = ((local_330 + *(double *)(pauVar10[8] + 8) * dVar51) - dVar12) * dVar52
                    ;
                    local_1b8._8_8_ =
                         ((dVar42 + *(double *)pauVar10[8] * dVar51) - dStack_260) * dVar52;
                    dVar52 = ((dVar51 * *(double *)(pauVar10[7] + 8) + dVar11) - dVar43) * dVar52;
                  }
                  dVar11 = dVar40 * dVar40 +
                           dVar52 * dVar52 + (double)local_1b8._8_8_ * (double)local_1b8._8_8_;
                  if (9.99999993922529e-09 < dVar11) {
                    dVar11 = 1.0 / SQRT(dVar11);
                    dVar52 = dVar52 * dVar11;
                    local_1b8._8_8_ = (double)local_1b8._8_8_ * dVar11;
                    dVar40 = dVar40 * dVar11;
                  }
                  if (0 < (int)uVar73) {
                    dVar11 = (double)local_314;
                    local_1b8._8_8_ = (double)local_1b8._8_8_ * dVar11;
                    lVar71 = 0;
                    auVar47._8_4_ = SUB84(dStack_2d0,0);
                    auVar47._0_8_ = dVar50;
                    auVar47._12_4_ = (int)((ulonglong)dStack_2d0 >> 0x20);
                    auVar56._8_4_ = SUB84(dStack_260,0);
                    auVar56._0_8_ = dVar43;
                    auVar56._12_4_ = (int)((ulonglong)dStack_260 >> 0x20);
                    auVar53._8_4_ = (int)local_1b8._8_8_;
                    auVar53._0_8_ = dVar52 * dVar11;
                    auVar53._12_4_ = (int)((ulonglong)local_1b8._8_8_ >> 0x20);
                    dVar42 = dVar12;
                    dVar51 = dVar43;
                    dVar18 = dStack_260;
                    do {
                      fVar101 = (float)((int)lVar71 + 1) * fVar90;
                      fVar95 = fVar101 * fVar101;
                      fVar85 = fVar101 * fVar95;
                      fVar94 = fVar85 - fVar95;
                      fVar99 = ((fVar85 + fVar85) - fVar95 * 3.0) + 1.0;
                      fVar101 = (fVar85 - (fVar95 + fVar95)) + fVar101;
                      fVar85 = fVar95 * 3.0 - (fVar85 + fVar85);
                      dVar35 = (double)fVar85 * (double)local_1d8._0_8_ +
                               (double)fVar94 * dVar52 * dVar11 +
                               (double)fVar101 * dVar50 + (double)fVar99 * dVar43;
                      dVar24 = (double)fVar85 * (double)local_1d8._8_8_ +
                               (double)fVar94 * (double)local_1b8._8_8_ +
                               (double)fVar101 * dStack_2d0 + (double)fVar99 * dStack_260;
                      dVar19 = (double)fVar94 * dVar40 * dVar11 + (double)fVar85 * dVar13 +
                               (double)fVar99 * dVar12 + (double)fVar101 * dVar34;
                      dVar28 = dVar42 - dVar19;
                      dVar29 = dVar18 - dVar24;
                      dVar30 = dVar51 - dVar35;
                      dVar23 = dVar28 * dVar28 + dVar30 * dVar30 + dVar29 * dVar29;
                      if (9.99999993922529e-09 < dVar23) {
                        dVar23 = 1.0 / SQRT(dVar23);
                        dVar30 = dVar30 * dVar23;
                        dVar29 = dVar29 * dVar23;
                        dVar28 = dVar28 * dVar23;
                      }
                      dVar36 = dVar41;
                      dVar32 = dVar39;
                      dVar23 = local_320;
                      if (*(int *)(param_1 + 0x120) == 0) {
                        dVar37 = dVar30 * (dVar18 - dVar8) - (dVar51 - dVar7) * dVar29;
                        dVar31 = dVar28 * (dVar51 - dVar7) - (dVar42 - dVar15) * dVar30;
                        dVar51 = dVar29 * (dVar42 - dVar15) - (dVar18 - dVar8) * dVar28;
                        dVar42 = dVar37 * dVar37 + dVar51 * dVar51 + dVar31 * dVar31;
                        dVar36 = dVar4;
                        dVar32 = dVar5;
                        dVar23 = dVar6;
                        if (9.99999993922529e-09 < dVar42) {
                          dVar23 = 1.0 / SQRT(dVar42);
                          dVar36 = dVar51 * dVar23;
                          dVar32 = dVar31 * dVar23;
                          dVar23 = dVar37 * dVar23;
                        }
                      }
                      if (iVar80 != 0) {
                        dVar51 = (double)((3.1415927 / (float)*(int *)(param_1 + 0x14c)) *
                                         (float)iVar80) * 0.5;
                        dVar42 = sin(dVar51);
                        dVar51 = cos(dVar51);
                        dVar30 = dVar30 * dVar42;
                        dVar29 = dVar29 * dVar42;
                        dVar28 = dVar28 * dVar42;
                        dVar18 = dVar29 * dVar23 - dVar32 * dVar28;
                        dVar18 = dVar18 + dVar18;
                        dVar31 = dVar30 * dVar32 - dVar36 * dVar29;
                        dVar31 = dVar31 + dVar31;
                        dVar42 = dVar28 * dVar36 - dVar23 * dVar30;
                        dVar42 = dVar42 + dVar42;
                        dVar23 = (dVar30 * dVar42 - dVar18 * dVar29) + dVar51 * dVar31 + dVar23;
                        dVar32 = (dVar28 * dVar18 - dVar31 * dVar30) + dVar51 * dVar42 + dVar32;
                        dVar36 = (dVar29 * dVar31 - dVar42 * dVar28) + dVar51 * dVar18 + dVar36;
                      }
                      dStack_2d0 = auVar47._8_8_;
                      if (*(char *)(param_1 + 0x180) != '\0') {
                        local_350 = pfVar83[(longlong)*(int *)(pauVar10[9] + 8) *
                                            (longlong)(int)uVar73 + lVar71];
                      }
                      dVar42 = (double)local_350;
                      dVar18 = dVar36 * dVar26 * dVar42;
                      dVar51 = dVar32 * dVar26 * dVar42;
                      dVar42 = dVar23 * dVar26 * dVar42;
                      *pfVar84 = (float)((dVar35 + dVar18) - dVar33);
                      pfVar84[1] = (float)((dVar24 + dVar51) - dVar25);
                      pfVar84[2] = (float)((dVar19 + dVar42) - dVar21);
                      pfVar84[4] = (float)(dVar35 - dVar33);
                      pfVar84[5] = (float)(dVar24 - dVar25);
                      pfVar84[6] = (float)(dVar19 - dVar21);
                      pfVar84[7] = 0.0;
                      pfVar84[8] = fVar93;
                      pfVar84[9] = fVar93;
                      pfVar84[0x10] = local_34c;
                      pfVar84[0x11] = 0.0;
                      pfVar84[10] = *(float *)(lVar79 + 0x3c);
                      uVar68 = *(undefined8 *)(lVar79 + 0x78);
                      *(undefined8 *)(pfVar84 + 0xc) = *puVar1;
                      *(undefined8 *)(pfVar84 + 0xe) = uVar68;
                      pfVar84[0x14] = (float)((dVar35 - dVar18) - dVar33);
                      pfVar84[0x15] = (float)((dVar24 - dVar51) - dVar25);
                      pfVar84[0x16] = (float)((dVar19 - dVar42) - dVar21);
                      pfVar84[0x18] = (float)(dVar35 - dVar33);
                      pfVar84[0x19] = (float)(dVar24 - dVar25);
                      pfVar84[0x1a] = (float)(dVar19 - dVar21);
                      pfVar84[0x1b] = 0.0;
                      pfVar84[0x1c] = fVar93;
                      pfVar84[0x1d] = fVar93;
                      pfVar84[0x24] = local_34c;
                      pfVar84[0x25] = 1.0;
                      pfVar84[0x1e] = *(float *)(lVar79 + 0x3c);
                      uVar68 = *(undefined8 *)(lVar79 + 0x78);
                      *(undefined8 *)(pfVar84 + 0x20) = *puVar1;
                      *(undefined8 *)(pfVar84 + 0x22) = uVar68;
                      pfVar84 = pfVar84 + 0x28;
                      local_34c = local_34c + fVar88;
                      lVar71 = lVar71 + 1;
                      dStack_260 = auVar56._8_8_;
                      local_1b8._8_8_ = auVar53._8_8_;
                      dVar42 = dVar19;
                      dVar51 = dVar35;
                      dVar18 = dVar24;
                    } while (uVar73 != (uint)lVar71);
                  }
                }
                iVar80 = iVar80 + 1;
                uVar96 = SUB84(dVar41,0);
                uVar97 = (undefined4)((ulonglong)dVar41 >> 0x20);
                uVar98 = SUB84(dVar39,0);
                uVar100 = (undefined4)((ulonglong)dVar39 >> 0x20);
              } while (iVar80 < *(int *)(param_1 + 0x14c));
            }
          }
          else {
            pauVar72 = pauVar2;
            uVar102 = uVar57;
            uVar103 = uVar58;
            uVar104 = uVar86;
            uVar105 = uVar87;
            if (*(char *)(param_1 + 0x147) != '\0') {
              uVar102 = *(undefined4 *)(pauVar10[1] + 8);
              uVar103 = *(undefined4 *)(pauVar10[1] + 0xc);
              uVar104 = *(undefined4 *)pauVar10[2];
              uVar105 = *(undefined4 *)(pauVar10[2] + 4);
              uVar91 = (undefined4)*(undefined8 *)(pauVar10[2] + 8);
              uVar92 = (undefined4)((ulonglong)*(undefined8 *)(pauVar10[2] + 8) >> 0x20);
              pauVar72 = pauVar10 + 3;
            }
            dVar27 = (double)CONCAT44(uVar105,uVar104);
            dVar17 = (double)CONCAT44(uVar103,uVar102);
            dVar34 = (double)CONCAT44(uVar92,uVar91);
            dVar50 = dVar34 * (double)CONCAT44(uVar92,uVar91) +
                     dVar17 * (double)CONCAT44(uVar103,uVar102) +
                     (double)CONCAT44(uVar105,uVar104) * dVar27;
            if (9.99999993922529e-09 < dVar50) {
              dVar34 = 1.0 / SQRT(dVar50);
              dVar17 = (double)CONCAT44(uVar103,uVar102) * dVar34;
              dVar27 = (double)CONCAT44(uVar105,uVar104) * dVar34;
              dVar34 = (double)CONCAT44(uVar92,uVar91) * dVar34;
            }
            if (0 < *(int *)(param_1 + 0x14c)) {
              iVar14 = *(int *)(pauVar10[6] + 0xc);
              dVar50 = (double)*(float *)*pauVar72;
              dVar17 = dVar17 * dVar50;
              dVar27 = dVar27 * dVar50;
              local_314 = *(float *)*pauVar2;
              dVar34 = dVar34 * dVar50;
              dVar50 = (double)fVar85;
              dVar11 = (double)*(float *)(param_1 + 0x158);
              puVar1 = (undefined8 *)(lVar79 + 0x70);
              iVar80 = 0;
              do {
                auVar48._8_4_ = SUB84(dVar27,0);
                auVar48._0_8_ = dVar17;
                auVar48._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
                local_248._0_16_ = *pauVar10;
                dVar42 = local_248._0_8_;
                dVar12 = *(double *)pauVar10[9];
                dVar13 = *(double *)pauVar10[1];
                dVar40 = *(double *)(pauVar10[8] + 8) * dVar12 + dVar13;
                dVar43 = *(double *)(*pauVar10 + 8);
                dVar39 = *(double *)pauVar10[8] * dVar12 + dVar43;
                dVar12 = dVar12 * *(double *)(pauVar10[7] + 8) + dVar42;
                if ((0.0 <= *(float *)(param_1 + 0x16c)) && (*(char *)(param_1 + 0x146) == '\x01'))
                {
                  dVar41 = pdVar78[2] - pdVar77[2];
                  dVar52 = pdVar78[1] - pdVar77[1];
                  dVar51 = *pdVar78 - *pdVar77;
                  dVar18 = dVar41 * dVar41 + dVar51 * dVar51 + dVar52 * dVar52;
                  if (9.99999993922529e-09 < dVar18) {
                    dVar18 = 1.0 / SQRT(dVar18);
                    dVar51 = dVar51 * dVar18;
                    dVar52 = dVar52 * dVar18;
                    dVar41 = dVar41 * dVar18;
                  }
                  dVar18 = (double)*pfVar76;
                  dVar41 = pdVar77[2] + (double)*(float *)(param_1 + 0x168) * dVar41 * dVar18;
                  dVar52 = pdVar77[1] + (double)*(float *)(param_1 + 0x164) * dVar52 * dVar18;
                  dVar51 = *pdVar77 + (double)*(float *)(param_1 + 0x160) * dVar51 * dVar18;
                  fVar85 = *(float *)(param_1 + 0x170);
                  if (((fVar85 <= ABS((float)(dVar51 - *pdVar78))) ||
                      (fVar85 <= ABS((float)(dVar52 - pdVar78[1])))) ||
                     (fVar85 <= ABS((float)(dVar41 - pdVar78[2])))) {
                    *pdVar77 = dVar51;
                    pdVar77[1] = dVar52;
                    pdVar77[2] = dVar41;
                  }
                  else {
                    pdVar77[2] = pdVar78[2];
                    dVar41 = pdVar78[1];
                    *pdVar77 = *pdVar78;
                    pdVar77[1] = dVar41;
                  }
                }
                dVar41 = pdVar77[2] * dVar50;
                dVar51 = pdVar77[1] * dVar50;
                dVar52 = *pdVar77 * dVar50;
                dVar19 = dVar13 - ((dVar41 * dVar67 + dVar51 * dVar64 + dVar52 * dVar61 + dVar16) *
                                   dVar11 + dVar40);
                dVar18 = dVar43 - ((dVar41 * dVar66 + dVar51 * dVar63 + dVar52 * dVar60 + dStack_120
                                   ) * dVar11 + dVar39);
                dVar51 = dVar42 - ((dVar41 * dVar65 + dVar51 * dVar62 + dVar52 * dVar59 + dVar22) *
                                   dVar11 + dVar12);
                dVar41 = dVar19 * dVar19 + dVar51 * dVar51 + dVar18 * dVar18;
                if (9.99999993922529e-09 < dVar41) {
                  dVar41 = 1.0 / SQRT(dVar41);
                  dVar51 = dVar51 * dVar41;
                  dVar18 = dVar18 * dVar41;
                  dVar19 = dVar19 * dVar41;
                }
                if ((*(int *)(param_1 + 0x120) == 0) ||
                   (dVar52 = (double)CONCAT44(uVar97,uVar96),
                   dVar41 = (double)CONCAT44(uVar100,uVar98),
                   *(int *)(param_1 + 0x120) == 1 && iVar82 == 0)) {
                  dVar28 = dVar51 * (dVar43 - dVar8) - (dVar42 - dVar7) * dVar18;
                  dVar23 = dVar19 * (dVar42 - dVar7) - (dVar13 - dVar15) * dVar51;
                  dVar29 = dVar18 * (dVar13 - dVar15) - (dVar43 - dVar8) * dVar19;
                  dVar35 = dVar28 * dVar28 + dVar29 * dVar29 + dVar23 * dVar23;
                  dVar52 = dVar4;
                  dVar41 = dVar5;
                  local_320 = dVar6;
                  if (9.99999993922529e-09 < dVar35) {
                    local_320 = 1.0 / SQRT(dVar35);
                    dVar52 = dVar29 * local_320;
                    dVar41 = dVar23 * local_320;
                    local_320 = dVar28 * local_320;
                  }
                }
                dVar29 = local_320;
                dVar23 = dVar41;
                dVar28 = dVar52;
                if (iVar80 != 0) {
                  dVar28 = (double)((float)iVar80 * (3.1415927 / (float)*(int *)(param_1 + 0x14c)))
                           * 0.5;
                  dVar23 = sin(dVar28);
                  dVar28 = cos(dVar28);
                  dVar51 = dVar51 * dVar23;
                  dVar18 = dVar18 * dVar23;
                  dVar19 = dVar19 * dVar23;
                  dVar35 = dVar51 * dVar41 - dVar52 * dVar18;
                  dVar24 = dVar19 * dVar52 - local_320 * dVar51;
                  dVar30 = dVar18 * local_320 - dVar41 * dVar19;
                  dVar35 = dVar35 + dVar35;
                  dVar24 = dVar24 + dVar24;
                  dVar30 = dVar30 + dVar30;
                  dVar29 = (dVar51 * dVar24 - dVar30 * dVar18) + dVar28 * dVar35 + local_320;
                  dVar23 = (dVar19 * dVar30 - dVar35 * dVar51) + dVar28 * dVar24 + dVar41;
                  dVar28 = (dVar18 * dVar35 - dVar24 * dVar19) + dVar28 * dVar30 + dVar52;
                }
                local_350 = 1.0;
                if (*(char *)(param_1 + 0x180) != '\0') {
                  local_350 = *pfVar83;
                }
                dVar19 = (double)local_350;
                dVar51 = dVar28 * dVar26 * dVar19;
                dVar18 = dVar23 * dVar26 * dVar19;
                dVar19 = dVar29 * dVar26 * dVar19;
                dVar23 = local_248._8_8_;
                *pfVar84 = (float)((dVar42 + dVar51) - dVar33);
                pfVar84[1] = (float)((dVar43 + dVar18) - dVar25);
                pfVar84[2] = (float)((dVar13 + dVar19) - dVar21);
                pfVar84[4] = (float)(dVar42 - dVar33);
                pfVar84[5] = (float)(dVar43 - dVar25);
                pfVar84[6] = (float)(dVar13 - dVar21);
                pfVar84[7] = 0.0;
                pfVar84[8] = fVar93;
                pfVar84[9] = fVar93;
                pfVar84[0x10] = 0.0;
                pfVar84[0x11] = 0.0;
                pfVar84[10] = *(float *)(lVar79 + 0x3c);
                uVar68 = *(undefined8 *)(lVar79 + 0x78);
                *(undefined8 *)(pfVar84 + 0xc) = *puVar1;
                *(undefined8 *)(pfVar84 + 0xe) = uVar68;
                pfVar84[0x14] = (float)((dVar42 - dVar51) - dVar33);
                pfVar84[0x15] = (float)((dVar43 - dVar18) - dVar25);
                pfVar84[0x16] = (float)((dVar13 - dVar19) - dVar21);
                pfVar84[0x18] = (float)(dVar42 - dVar33);
                pfVar84[0x19] = (float)(dVar43 - dVar25);
                pfVar84[0x1a] = (float)(dVar13 - dVar21);
                pfVar84[0x1b] = 0.0;
                pfVar84[0x1c] = fVar93;
                pfVar84[0x1d] = fVar93;
                pfVar84[0x24] = 0.0;
                pfVar84[0x25] = 1.0;
                pfVar84[0x1e] = *(float *)(lVar79 + 0x3c);
                uVar68 = *(undefined8 *)(lVar79 + 0x78);
                *(undefined8 *)(pfVar84 + 0x20) = *puVar1;
                *(undefined8 *)(pfVar84 + 0x22) = uVar68;
                pfVar84 = pfVar84 + 0x28;
                if (*(int *)(pauVar10[9] + 8) < 1) {
                  local_248._8_8_ = dVar39;
                  local_248._0_8_ = dVar12;
                  local_34c = fVar89;
                }
                else {
                  local_330 = 0.0;
                  local_298._0_8_ = dVar13;
                  local_1d8._0_8_ = dVar34;
                  dStack_2d0 = auVar48._8_8_;
                  local_1b8._8_8_ = dStack_2d0;
                  local_1b8._0_8_ = dVar17;
                  pfVar69 = pfVar83;
                  local_34c = fVar89;
                  local_288._0_16_ = local_248._0_16_;
                  dVar40 = dVar13;
                  do {
                    dVar34 = *(double *)pauVar10[9];
                    dVar27 = *(double *)(pauVar10[8] + 8);
                    dVar17 = *(double *)pauVar10[8];
                    dVar12 = *(double *)(pauVar10[7] + 8);
                    if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                       (*(char *)(param_1 + 0x146) == '\x01')) {
                      dVar13 = pdVar78[(longlong)local_330 * 3 + 2] -
                               pdVar77[(longlong)local_330 * 3 + 2];
                      dVar42 = pdVar78[(longlong)local_330 * 3 + 1] -
                               pdVar77[(longlong)local_330 * 3 + 1];
                      dVar43 = pdVar78[(longlong)local_330 * 3] - pdVar77[(longlong)local_330 * 3];
                      dVar39 = dVar13 * dVar13 + dVar43 * dVar43 + dVar42 * dVar42;
                      if (9.99999993922529e-09 < dVar39) {
                        dVar39 = 1.0 / SQRT(dVar39);
                        dVar43 = dVar43 * dVar39;
                        dVar42 = dVar42 * dVar39;
                        dVar13 = dVar13 * dVar39;
                      }
                      pdVar75 = pdVar77 + (longlong)local_330 * 3;
                      dVar39 = (double)*pfVar76;
                      dVar13 = pdVar77[(longlong)local_330 * 3 + 2] +
                               (double)*(float *)(param_1 + 0x168) * dVar13 * dVar39;
                      dVar42 = pdVar77[(longlong)local_330 * 3 + 1] +
                               (double)*(float *)(param_1 + 0x164) * dVar42 * dVar39;
                      dVar43 = pdVar77[(longlong)local_330 * 3] +
                               (double)*(float *)(param_1 + 0x160) * dVar43 * dVar39;
                      fVar85 = *(float *)(param_1 + 0x170);
                      if (((fVar85 <= ABS((float)(dVar43 - pdVar78[(longlong)local_330 * 3]))) ||
                          (fVar85 <= ABS((float)(dVar42 - pdVar78[(longlong)local_330 * 3 + 1]))))
                         || (fVar85 <= ABS((float)(dVar13 - pdVar78[(longlong)local_330 * 3 + 2]))))
                      {
                        *pdVar75 = dVar43;
                        pdVar75[1] = dVar42;
                        pdVar75[2] = dVar13;
                      }
                      else {
                        pdVar70 = pdVar78 + (longlong)local_330 * 3;
                        pdVar75[2] = pdVar70[2];
                        dVar13 = pdVar70[1];
                        *pdVar75 = *pdVar70;
                        pdVar75[1] = dVar13;
                      }
                    }
                    dVar40 = dVar40 + dVar27 * dVar34;
                    dVar23 = (double)local_248._8_8_ + dVar17 * dVar34;
                    dVar42 = dVar34 * dVar12 + (double)local_248._0_8_;
                    dVar51 = pdVar77[(longlong)local_330 * 3 + 2] * dVar50;
                    dVar43 = pdVar77[(longlong)local_330 * 3 + 1] * dVar50;
                    dVar12 = *(double *)pauVar10[9];
                    dVar34 = *(double *)(pauVar10[8] + 8);
                    dVar27 = *(double *)pauVar10[8];
                    dVar13 = *(double *)(pauVar10[7] + 8);
                    dVar39 = pdVar77[(longlong)local_330 * 3] * dVar50;
                    if ((iVar14 < 0) &&
                       ((longlong)local_330 + 1U == (ulonglong)*(uint *)(pauVar10[9] + 8))) {
                      if (((*(char *)(param_1 + 0x149) == '\x01') &&
                          (0.0 <= *(float *)(param_1 + 0x16c))) &&
                         (*(char *)(param_1 + 0x146) == '\x01')) {
                        lVar71 = (longlong)*(int *)(param_1 + 0x150);
                        dVar34 = pdVar78[lVar71 * 3 + 2] - pdVar77[lVar71 * 3 + 2];
                        dVar17 = pdVar78[lVar71 * 3 + 1] - pdVar77[lVar71 * 3 + 1];
                        dVar27 = pdVar78[lVar71 * 3] - pdVar77[lVar71 * 3];
                        dVar12 = dVar34 * dVar34 + dVar27 * dVar27 + dVar17 * dVar17;
                        if (9.99999993922529e-09 < dVar12) {
                          dVar12 = 1.0 / SQRT(dVar12);
                          dVar27 = dVar27 * dVar12;
                          dVar17 = dVar17 * dVar12;
                          dVar34 = dVar34 * dVar12;
                        }
                        pdVar75 = pdVar77 + lVar71 * 3;
                        dVar12 = (double)*pfVar76;
                        dVar34 = pdVar77[lVar71 * 3 + 2] +
                                 (double)*(float *)(param_1 + 0x168) * dVar34 * dVar12;
                        dVar17 = pdVar77[lVar71 * 3 + 1] +
                                 (double)*(float *)(param_1 + 0x164) * dVar17 * dVar12;
                        dVar27 = pdVar77[lVar71 * 3] +
                                 (double)*(float *)(param_1 + 0x160) * dVar27 * dVar12;
                        fVar85 = *(float *)(param_1 + 0x170);
                        if (((fVar85 <= ABS((float)(dVar27 - pdVar78[lVar71 * 3]))) ||
                            (fVar85 <= ABS((float)(dVar17 - pdVar78[lVar71 * 3 + 1])))) ||
                           (fVar85 <= ABS((float)(dVar34 - pdVar78[lVar71 * 3 + 2])))) {
                          *pdVar75 = dVar27;
                          pdVar75[1] = dVar17;
                          pdVar75[2] = dVar34;
                        }
                        else {
                          pdVar70 = pdVar78 + lVar71 * 3;
                          pdVar75[2] = pdVar70[2];
                          dVar34 = pdVar70[1];
                          *pdVar75 = *pdVar70;
                          pdVar75[1] = dVar34;
                        }
                      }
                      dVar17 = *(double *)pauVar10[5];
                      dVar27 = *(double *)(pauVar10[5] + 8);
                      dVar34 = *(double *)pauVar10[6];
                      local_314 = *(float *)(pauVar10[6] + 8);
                    }
                    else {
                      if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                         (*(char *)(param_1 + 0x146) == '\x01')) {
                        dVar18 = pdVar78[(longlong)local_330 * 3 + 5] -
                                 pdVar77[(longlong)local_330 * 3 + 5];
                        dVar19 = pdVar78[(longlong)local_330 * 3 + 4] -
                                 pdVar77[(longlong)local_330 * 3 + 4];
                        dVar17 = pdVar78[(longlong)local_330 * 3 + 3] -
                                 pdVar77[(longlong)local_330 * 3 + 3];
                        dVar28 = dVar18 * dVar18 + dVar17 * dVar17 + dVar19 * dVar19;
                        if (9.99999993922529e-09 < dVar28) {
                          dVar28 = 1.0 / SQRT(dVar28);
                          dVar17 = dVar17 * dVar28;
                          dVar19 = dVar19 * dVar28;
                          dVar18 = dVar18 * dVar28;
                        }
                        dVar28 = (double)*pfVar76;
                        dVar18 = pdVar77[(longlong)local_330 * 3 + 5] +
                                 (double)*(float *)(param_1 + 0x168) * dVar18 * dVar28;
                        dVar19 = pdVar77[(longlong)local_330 * 3 + 4] +
                                 (double)*(float *)(param_1 + 0x164) * dVar19 * dVar28;
                        dVar17 = pdVar77[(longlong)local_330 * 3 + 3] +
                                 (double)*(float *)(param_1 + 0x160) * dVar17 * dVar28;
                        fVar85 = *(float *)(param_1 + 0x170);
                        if (((fVar85 <= ABS((float)(dVar17 - pdVar78[(longlong)local_330 * 3 + 3])))
                            || (fVar85 <= ABS((float)(dVar19 - pdVar78[(longlong)local_330 * 3 + 4])
                                             ))) ||
                           (fVar85 <= ABS((float)(dVar18 - pdVar78[(longlong)local_330 * 3 + 5]))))
                        {
                          pdVar77[(longlong)local_330 * 3 + 3] = dVar17;
                          pdVar77[(longlong)local_330 * 3 + 4] = dVar19;
                          pdVar77[(longlong)local_330 * 3 + 5] = dVar18;
                        }
                        else {
                          pdVar77[(longlong)local_330 * 3 + 5] =
                               pdVar78[(longlong)local_330 * 3 + 5];
                          dVar17 = pdVar78[(longlong)local_330 * 3 + 4];
                          pdVar77[(longlong)local_330 * 3 + 3] =
                               pdVar78[(longlong)local_330 * 3 + 3];
                          pdVar77[(longlong)local_330 * 3 + 4] = dVar17;
                        }
                      }
                      dVar18 = pdVar77[(longlong)local_330 * 3 + 5] * dVar50;
                      dVar19 = pdVar77[(longlong)local_330 * 3 + 4] * dVar50;
                      dVar28 = pdVar77[(longlong)local_330 * 3 + 3] * dVar50;
                      dVar17 = (double)((1.0 - *(float *)(param_1 + 0x174)) * 0.5);
                      dVar34 = ((dVar34 * dVar12 + dVar40 +
                                (dVar18 * dVar67 + dVar19 * dVar64 + dVar28 * dVar61 + dVar16) *
                                dVar11) - (double)local_298._0_8_) * dVar17;
                      dVar27 = ((dVar27 * dVar12 + dVar23 +
                                (dVar18 * dVar66 + dVar19 * dVar63 + dVar28 * dVar60 + dStack_120) *
                                dVar11) - (double)local_288._8_8_) * dVar17;
                      dVar17 = ((dVar12 * dVar13 + dVar42 +
                                (dVar18 * dVar65 + dVar19 * dVar62 + dVar28 * dVar59 + dVar22) *
                                dVar11) - (double)local_288._0_8_) * dVar17;
                    }
                    dVar12 = dVar34 * dVar34 + dVar17 * dVar17 + dVar27 * dVar27;
                    if (9.99999993922529e-09 < dVar12) {
                      dVar12 = 1.0 / SQRT(dVar12);
                      dVar17 = dVar17 * dVar12;
                      dVar27 = dVar27 * dVar12;
                      dVar34 = dVar34 * dVar12;
                    }
                    local_248._8_4_ = SUB84(dVar23,0);
                    local_248._0_8_ = dVar42;
                    local_248._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                    dVar23 = (dVar51 * dVar66 + dVar43 * dVar63 + dVar39 * dVar60 + dStack_120) *
                             dVar11 + dVar23;
                    dVar42 = (dVar51 * dVar65 + dVar43 * dVar62 + dVar39 * dVar59 + dVar22) * dVar11
                             + dVar42;
                    dVar13 = (dVar51 * dVar67 + dVar43 * dVar64 + dVar39 * dVar61 + dVar16) * dVar11
                             + dVar40;
                    dVar12 = (double)local_314;
                    dVar17 = dVar17 * dVar12;
                    dVar27 = dVar27 * dVar12;
                    dVar34 = dVar34 * dVar12;
                    auVar49._8_4_ = SUB84(dVar27,0);
                    auVar49._0_8_ = dVar17;
                    auVar49._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
                    auVar54._8_4_ = SUB84(dVar23,0);
                    auVar54._0_8_ = dVar42;
                    auVar54._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                    uVar81 = 0;
                    dVar12 = (double)local_288._8_8_;
                    dVar43 = dVar23;
                    dVar39 = dVar27;
                    dVar51 = (double)local_298._0_8_;
                    dVar18 = (double)local_288._0_8_;
                    do {
                      uVar3 = uVar81 + 1;
                      fVar101 = (float)(int)uVar3 * fVar90;
                      fVar95 = fVar101 * fVar101;
                      fVar85 = fVar101 * fVar95;
                      fVar94 = fVar85 - fVar95;
                      fVar99 = ((fVar85 + fVar85) - fVar95 * 3.0) + 1.0;
                      fVar101 = (fVar85 - (fVar95 + fVar95)) + fVar101;
                      fVar85 = fVar95 * 3.0 - (fVar85 + fVar85);
                      dVar28 = (double)fVar85 * dVar42 + (double)fVar94 * dVar17 +
                               (double)fVar101 * (double)local_1b8._0_8_ +
                               (double)fVar99 * (double)local_288._0_8_;
                      dVar29 = (double)fVar85 * dVar43 + (double)fVar94 * dVar39 +
                               (double)fVar101 * (double)local_1b8._8_8_ +
                               (double)fVar99 * (double)local_288._8_8_;
                      dVar19 = (double)fVar94 * dVar34 + (double)fVar85 * dVar13 +
                               (double)fVar99 * (double)local_298._0_8_ +
                               (double)fVar101 * (double)local_1d8._0_8_;
                      dVar24 = dVar51 - dVar19;
                      dVar39 = dVar12 - dVar29;
                      dVar35 = dVar18 - dVar28;
                      dVar43 = dVar24 * dVar24 + dVar35 * dVar35 + dVar39 * dVar39;
                      if (9.99999993922529e-09 < dVar43) {
                        dVar43 = 1.0 / SQRT(dVar43);
                        dVar35 = dVar35 * dVar43;
                        dVar39 = dVar39 * dVar43;
                        dVar24 = dVar24 * dVar43;
                      }
                      dVar30 = dVar52;
                      dVar36 = dVar41;
                      dVar43 = local_320;
                      if (*(int *)(param_1 + 0x120) == 0) {
                        dVar32 = dVar35 * (dVar12 - dVar8) - (dVar18 - dVar7) * dVar39;
                        dVar18 = dVar24 * (dVar18 - dVar7) - (dVar51 - dVar15) * dVar35;
                        dVar51 = dVar39 * (dVar51 - dVar15) - (dVar12 - dVar8) * dVar24;
                        dVar12 = dVar32 * dVar32 + dVar51 * dVar51 + dVar18 * dVar18;
                        dVar30 = dVar4;
                        dVar36 = dVar5;
                        dVar43 = dVar6;
                        if (9.99999993922529e-09 < dVar12) {
                          dVar43 = 1.0 / SQRT(dVar12);
                          dVar30 = dVar51 * dVar43;
                          dVar36 = dVar18 * dVar43;
                          dVar43 = dVar32 * dVar43;
                        }
                      }
                      if (iVar80 != 0) {
                        dVar51 = (double)((3.1415927 / (float)*(int *)(param_1 + 0x14c)) *
                                         (float)iVar80) * 0.5;
                        dVar12 = sin(dVar51);
                        dVar51 = cos(dVar51);
                        dVar35 = dVar35 * dVar12;
                        dVar39 = dVar39 * dVar12;
                        dVar24 = dVar24 * dVar12;
                        dVar18 = dVar39 * dVar43 - dVar36 * dVar24;
                        dVar18 = dVar18 + dVar18;
                        dVar32 = dVar35 * dVar36 - dVar30 * dVar39;
                        dVar32 = dVar32 + dVar32;
                        dVar12 = dVar24 * dVar30 - dVar43 * dVar35;
                        dVar12 = dVar12 + dVar12;
                        dVar43 = (dVar35 * dVar12 - dVar18 * dVar39) + dVar51 * dVar32 + dVar43;
                        dVar36 = (dVar24 * dVar18 - dVar32 * dVar35) + dVar51 * dVar12 + dVar36;
                        dVar30 = (dVar39 * dVar32 - dVar12 * dVar24) + dVar51 * dVar18 + dVar30;
                      }
                      if (*(char *)(param_1 + 0x180) != '\0') {
                        local_350 = pfVar69[uVar81];
                      }
                      dVar12 = (double)local_350;
                      dVar39 = dVar30 * dVar26 * dVar12;
                      dVar51 = dVar36 * dVar26 * dVar12;
                      dVar12 = dVar43 * dVar26 * dVar12;
                      *pfVar84 = (float)((dVar28 + dVar39) - dVar33);
                      pfVar84[1] = (float)((dVar29 + dVar51) - dVar25);
                      pfVar84[2] = (float)((dVar19 + dVar12) - dVar21);
                      pfVar84[4] = (float)(dVar28 - dVar33);
                      pfVar84[5] = (float)(dVar29 - dVar25);
                      pfVar84[6] = (float)(dVar19 - dVar21);
                      pfVar84[7] = 0.0;
                      pfVar84[8] = fVar93;
                      pfVar84[9] = fVar93;
                      pfVar84[0x10] = local_34c;
                      pfVar84[0x11] = 0.0;
                      pfVar84[10] = *(float *)(lVar79 + 0x3c);
                      uVar68 = *(undefined8 *)(lVar79 + 0x78);
                      *(undefined8 *)(pfVar84 + 0xc) = *puVar1;
                      *(undefined8 *)(pfVar84 + 0xe) = uVar68;
                      pfVar84[0x14] = (float)((dVar28 - dVar39) - dVar33);
                      pfVar84[0x15] = (float)((dVar29 - dVar51) - dVar25);
                      pfVar84[0x16] = (float)((dVar19 - dVar12) - dVar21);
                      pfVar84[0x18] = (float)(dVar28 - dVar33);
                      pfVar84[0x19] = (float)(dVar29 - dVar25);
                      pfVar84[0x1a] = (float)(dVar19 - dVar21);
                      pfVar84[0x1b] = 0.0;
                      pfVar84[0x1c] = fVar93;
                      pfVar84[0x1d] = fVar93;
                      pfVar84[0x24] = local_34c;
                      pfVar84[0x25] = 1.0;
                      pfVar84[0x1e] = *(float *)(lVar79 + 0x3c);
                      uVar68 = *(undefined8 *)(lVar79 + 0x78);
                      *(undefined8 *)(pfVar84 + 0x20) = *puVar1;
                      *(undefined8 *)(pfVar84 + 0x22) = uVar68;
                      pfVar84 = pfVar84 + 0x28;
                      local_34c = local_34c + fVar88;
                      dVar39 = auVar49._8_8_;
                      dVar43 = auVar54._8_8_;
                      uVar81 = uVar3;
                      dVar12 = dVar29;
                      dVar51 = dVar19;
                      dVar18 = dVar28;
                    } while (uVar74 != uVar3);
                    local_330 = (double)((longlong)local_330 + 1);
                    pfVar69 = pfVar69 + uVar74;
                    local_298._0_8_ = dVar13;
                    local_1d8._0_8_ = dVar34;
                    local_288._0_16_ = auVar54;
                    local_1b8._0_16_ = auVar49;
                  } while ((longlong)local_330 < (longlong)*(int *)(pauVar10[9] + 8));
                }
                auVar44 = local_1d8._0_16_;
                if (iVar14 < 0) {
                  dVar39 = *(double *)*(undefined1 (*) [16])(pauVar10[3] + 8);
                  dVar43 = *(double *)pauVar10[4];
                  local_298 = *(undefined1 (*) [16])(pauVar10[3] + 8);
                  dVar12 = *(double *)(pauVar10[4] + 8);
                  if (*(char *)(param_1 + 0x149) == '\x01') {
                    if ((0.0 <= *(float *)(param_1 + 0x16c)) &&
                       (*(char *)(param_1 + 0x146) == '\x01')) {
                      lVar71 = (longlong)*(int *)(param_1 + 0x150);
                      dVar51 = pdVar78[lVar71 * 3 + 2] - pdVar77[lVar71 * 3 + 2];
                      dVar19 = pdVar78[lVar71 * 3 + 1] - pdVar77[lVar71 * 3 + 1];
                      dVar18 = pdVar78[lVar71 * 3] - pdVar77[lVar71 * 3];
                      dVar28 = dVar51 * dVar51 + dVar18 * dVar18 + dVar19 * dVar19;
                      if (9.99999993922529e-09 < dVar28) {
                        dVar28 = 1.0 / SQRT(dVar28);
                        dVar18 = dVar18 * dVar28;
                        dVar19 = dVar19 * dVar28;
                        dVar51 = dVar51 * dVar28;
                      }
                      pdVar75 = pdVar77 + lVar71 * 3;
                      dVar28 = (double)*pfVar76;
                      dVar51 = pdVar77[lVar71 * 3 + 2] +
                               (double)*(float *)(param_1 + 0x168) * dVar51 * dVar28;
                      dVar19 = pdVar77[lVar71 * 3 + 1] +
                               (double)*(float *)(param_1 + 0x164) * dVar19 * dVar28;
                      dVar18 = pdVar77[lVar71 * 3] +
                               (double)*(float *)(param_1 + 0x160) * dVar18 * dVar28;
                      fVar85 = *(float *)(param_1 + 0x170);
                      if (((fVar85 <= ABS((float)(dVar18 - pdVar78[lVar71 * 3]))) ||
                          (fVar85 <= ABS((float)(dVar19 - pdVar78[lVar71 * 3 + 1])))) ||
                         (fVar85 <= ABS((float)(dVar51 - pdVar78[lVar71 * 3 + 2])))) {
                        *pdVar75 = dVar18;
                        pdVar75[1] = dVar19;
                        pdVar75[2] = dVar51;
                      }
                      else {
                        pdVar70 = pdVar78 + lVar71 * 3;
                        pdVar75[2] = pdVar70[2];
                        dVar51 = pdVar70[1];
                        *pdVar75 = *pdVar70;
                        pdVar75[1] = dVar51;
                      }
                    }
                    lVar71 = (longlong)*(int *)(param_1 + 0x150);
                    dVar51 = pdVar77[lVar71 * 3 + 2] * dVar50;
                    dVar18 = pdVar77[lVar71 * 3 + 1] * dVar50;
                    dVar19 = pdVar77[lVar71 * 3] * dVar50;
                    dVar43 = dVar43 + (dVar51 * dVar66 + dVar18 * dVar63 + dVar19 * dVar60 +
                                      dStack_120) * dVar11;
                    dVar12 = dVar12 + (dVar51 * dVar67 + dVar18 * dVar64 + dVar19 * dVar61 + dVar16)
                                      * dVar11;
                    local_298._8_4_ = SUB84(dVar43,0);
                    local_298._0_8_ =
                         (dVar51 * dVar65 + dVar18 * dVar62 + dVar19 * dVar59 + dVar22) * dVar11 +
                         dVar39;
                    local_298._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
                  }
                  if (*(char *)(param_1 + 0x148) == '\x01') {
                    dVar51 = *(double *)pauVar10[5];
                    local_1d8._8_8_ = *(undefined8 *)(pauVar10[5] + 8);
                    dVar43 = *(double *)pauVar10[6];
                  }
                  else {
                    dVar39 = *(double *)pauVar10[9];
                    dVar51 = (double)((1.0 - *(float *)(param_1 + 0x174)) * 0.5);
                    dVar43 = ((dVar40 + *(double *)(pauVar10[8] + 8) * dVar39) - dVar13) * dVar51;
                    local_1d8._8_8_ =
                         (((double)local_248._8_8_ + *(double *)pauVar10[8] * dVar39) - dVar23) *
                         dVar51;
                    dVar51 = ((dVar39 * *(double *)(pauVar10[7] + 8) + (double)local_248._0_8_) -
                             dVar42) * dVar51;
                  }
                  dVar39 = dVar43 * dVar43 +
                           dVar51 * dVar51 + (double)local_1d8._8_8_ * (double)local_1d8._8_8_;
                  if (9.99999993922529e-09 < dVar39) {
                    dVar39 = 1.0 / SQRT(dVar39);
                    dVar51 = dVar51 * dVar39;
                    local_1d8._8_8_ = (double)local_1d8._8_8_ * dVar39;
                    dVar43 = dVar43 * dVar39;
                  }
                  dVar39 = (double)local_314;
                  local_1d8._8_8_ = (double)local_1d8._8_8_ * dVar39;
                  lVar71 = 0;
                  auVar44._8_4_ = (int)local_1d8._8_8_;
                  auVar44._0_8_ = dVar51 * dVar39;
                  auVar44._12_4_ = (int)((ulonglong)local_1d8._8_8_ >> 0x20);
                  dVar40 = dVar23;
                  dVar18 = dVar13;
                  dVar19 = dVar42;
                  do {
                    fVar101 = (float)((int)lVar71 + 1) * fVar90;
                    fVar95 = fVar101 * fVar101;
                    fVar85 = fVar101 * fVar95;
                    fVar94 = fVar85 - fVar95;
                    fVar99 = ((fVar85 + fVar85) - fVar95 * 3.0) + 1.0;
                    fVar101 = (fVar85 - (fVar95 + fVar95)) + fVar101;
                    fVar85 = fVar95 * 3.0 - (fVar85 + fVar85);
                    dVar35 = (double)fVar85 * (double)local_298._0_8_ +
                             (double)fVar94 * dVar51 * dVar39 +
                             (double)fVar101 * dVar17 + (double)fVar99 * dVar42;
                    dVar24 = (double)fVar85 * (double)local_298._8_8_ +
                             (double)fVar94 * (double)local_1d8._8_8_ +
                             (double)fVar101 * dVar27 + (double)fVar99 * dVar23;
                    dVar29 = (double)fVar94 * dVar43 * dVar39 + (double)fVar85 * dVar12 +
                             (double)fVar99 * dVar13 + (double)fVar101 * dVar34;
                    dVar36 = dVar18 - dVar29;
                    dVar30 = dVar40 - dVar24;
                    dVar32 = dVar19 - dVar35;
                    dVar28 = dVar36 * dVar36 + dVar32 * dVar32 + dVar30 * dVar30;
                    if (9.99999993922529e-09 < dVar28) {
                      dVar28 = 1.0 / SQRT(dVar28);
                      dVar32 = dVar32 * dVar28;
                      dVar30 = dVar30 * dVar28;
                      dVar36 = dVar36 * dVar28;
                    }
                    dVar31 = dVar52;
                    dVar37 = dVar41;
                    dVar28 = local_320;
                    if (*(int *)(param_1 + 0x120) == 0) {
                      dVar38 = dVar32 * (dVar40 - dVar8) - (dVar19 - dVar7) * dVar30;
                      dVar19 = dVar36 * (dVar19 - dVar7) - (dVar18 - dVar15) * dVar32;
                      dVar18 = dVar30 * (dVar18 - dVar15) - (dVar40 - dVar8) * dVar36;
                      dVar40 = dVar38 * dVar38 + dVar18 * dVar18 + dVar19 * dVar19;
                      dVar31 = dVar4;
                      dVar37 = dVar5;
                      dVar28 = dVar6;
                      if (9.99999993922529e-09 < dVar40) {
                        dVar28 = 1.0 / SQRT(dVar40);
                        dVar31 = dVar18 * dVar28;
                        dVar37 = dVar19 * dVar28;
                        dVar28 = dVar38 * dVar28;
                      }
                    }
                    if (iVar80 != 0) {
                      dVar18 = (double)((3.1415927 / (float)*(int *)(param_1 + 0x14c)) *
                                       (float)iVar80) * 0.5;
                      dVar40 = sin(dVar18);
                      dVar18 = cos(dVar18);
                      dVar32 = dVar32 * dVar40;
                      dVar30 = dVar30 * dVar40;
                      dVar36 = dVar36 * dVar40;
                      dVar19 = dVar30 * dVar28 - dVar37 * dVar36;
                      dVar19 = dVar19 + dVar19;
                      dVar38 = dVar32 * dVar37 - dVar31 * dVar30;
                      dVar38 = dVar38 + dVar38;
                      dVar40 = dVar36 * dVar31 - dVar28 * dVar32;
                      dVar40 = dVar40 + dVar40;
                      dVar28 = (dVar32 * dVar40 - dVar19 * dVar30) + dVar18 * dVar38 + dVar28;
                      dVar37 = (dVar36 * dVar19 - dVar38 * dVar32) + dVar18 * dVar40 + dVar37;
                      dVar31 = (dVar30 * dVar38 - dVar40 * dVar36) + dVar18 * dVar19 + dVar31;
                    }
                    if (*(char *)(param_1 + 0x180) != '\0') {
                      local_350 = pfVar83[(longlong)*(int *)(pauVar10[9] + 8) *
                                          (longlong)(int)uVar73 + lVar71];
                    }
                    dVar40 = (double)local_350;
                    dVar19 = dVar31 * dVar26 * dVar40;
                    dVar18 = dVar37 * dVar26 * dVar40;
                    dVar40 = dVar28 * dVar26 * dVar40;
                    *pfVar84 = (float)((dVar35 + dVar19) - dVar33);
                    pfVar84[1] = (float)((dVar24 + dVar18) - dVar25);
                    pfVar84[2] = (float)((dVar29 + dVar40) - dVar21);
                    pfVar84[4] = (float)(dVar35 - dVar33);
                    pfVar84[5] = (float)(dVar24 - dVar25);
                    pfVar84[6] = (float)(dVar29 - dVar21);
                    pfVar84[7] = 0.0;
                    pfVar84[8] = fVar93;
                    pfVar84[9] = fVar93;
                    pfVar84[0x10] = local_34c;
                    pfVar84[0x11] = 0.0;
                    pfVar84[10] = *(float *)(lVar79 + 0x3c);
                    uVar68 = *(undefined8 *)(lVar79 + 0x78);
                    *(undefined8 *)(pfVar84 + 0xc) = *puVar1;
                    *(undefined8 *)(pfVar84 + 0xe) = uVar68;
                    pfVar84[0x14] = (float)((dVar35 - dVar19) - dVar33);
                    pfVar84[0x15] = (float)((dVar24 - dVar18) - dVar25);
                    pfVar84[0x16] = (float)((dVar29 - dVar40) - dVar21);
                    pfVar84[0x18] = (float)(dVar35 - dVar33);
                    pfVar84[0x19] = (float)(dVar24 - dVar25);
                    pfVar84[0x1a] = (float)(dVar29 - dVar21);
                    pfVar84[0x1b] = 0.0;
                    pfVar84[0x1c] = fVar93;
                    pfVar84[0x1d] = fVar93;
                    pfVar84[0x24] = local_34c;
                    pfVar84[0x25] = 1.0;
                    pfVar84[0x1e] = *(float *)(lVar79 + 0x3c);
                    uVar68 = *(undefined8 *)(lVar79 + 0x78);
                    *(undefined8 *)(pfVar84 + 0x20) = *puVar1;
                    *(undefined8 *)(pfVar84 + 0x22) = uVar68;
                    pfVar84 = pfVar84 + 0x28;
                    local_34c = local_34c + fVar88;
                    lVar71 = lVar71 + 1;
                    local_1d8._8_8_ = auVar44._8_8_;
                    dVar40 = dVar24;
                    dVar18 = dVar29;
                    dVar19 = dVar35;
                  } while (uVar73 != (uint)lVar71);
                }
                local_1d8._0_16_ = auVar44;
                iVar80 = iVar80 + 1;
                uVar96 = SUB84(dVar52,0);
                uVar97 = (undefined4)((ulonglong)dVar52 >> 0x20);
                uVar98 = SUB84(dVar41,0);
                uVar100 = (undefined4)((ulonglong)dVar41 >> 0x20);
              } while (iVar80 < *(int *)(param_1 + 0x14c));
            }
          }
        }
      }
      iVar82 = iVar82 + 1;
      uVar91 = SUB84(local_320,0);
      uVar92 = (undefined4)((ulonglong)local_320 >> 0x20);
    } while (iVar82 < *(int *)(param_1 + 0x34));
  }
  return;
}



// FUNCTION 1435f4ffe FUN_1435f4ffe body=5629 status=ok
// SIG undefined FUN_1435f4ffe(void)

void FUN_1435f4ffe(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
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
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar25;
  double *pdVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  float *pfVar31;
  double *pdVar32;
  double *pdVar33;
  float *pfVar34;
  int iVar35;
  int iVar36;
  longlong lVar37;
  uint uVar38;
  float fVar39;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  double local_228;
  float local_220;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_148;
  
  lVar27 = *(longlong *)(param_2 + 0x100);
  pfVar31 = *(float **)(param_2 + 0x110);
  dVar2 = *(double *)(lVar27 + 0xa50);
  dVar3 = *(double *)(lVar27 + 0xa58);
  dVar4 = *(double *)(lVar27 + 0xa60);
  dVar5 = *(double *)(lVar27 + 0xa90);
  dVar6 = *(double *)(lVar27 + 0xa98);
  dVar7 = *(double *)(lVar27 + 0xaa0);
  iVar30 = *(int *)(param_1 + 0x184);
  iVar36 = *(int *)(param_1 + 0x34);
  dVar14 = (double)*(float *)(param_1 + 0xbc) * 65536.0;
  dVar16 = (double)*(float *)(param_1 + 0xb8) * 65536.0;
  dVar19 = (double)*(float *)(param_1 + 0xb4) * 65536.0;
  if ((int)(iVar30 + (uint)(iVar30 == 0)) < 2) {
    if (0 < iVar36) {
      iVar30 = 0;
      do {
        pdVar33 = (double *)
                  ((longlong)iVar30 * (longlong)*(int *)(param_1 + 0x38) +
                  *(longlong *)(param_1 + 0x50));
        lVar27 = (longlong)*(int *)(param_1 + 0x124);
        if (*(int *)(lVar27 + 0xa0 + (longlong)pdVar33) != 0) {
          pfVar34 = (float *)0x0;
          if ((longlong)*(int *)(param_1 + 0x13c) != -1) {
            pfVar34 = (float *)((longlong)pdVar33 + (longlong)*(int *)(param_1 + 0x13c));
          }
          dVar8 = pdVar33[3];
          dVar9 = pdVar33[4];
          dVar10 = pdVar33[5];
          dVar11 = *(double *)((longlong)pdVar33 + lVar27);
          dVar44 = *(double *)((longlong)pdVar33 + lVar27 + 8);
          dVar12 = *(double *)((longlong)pdVar33 + lVar27 + 0x10);
          dVar21 = dVar12 - dVar10;
          dVar23 = dVar44 - dVar9;
          dVar24 = dVar11 - dVar8;
          dVar13 = dVar21 * dVar21 + dVar24 * dVar24 + dVar23 * dVar23;
          if (9.99999993922529e-09 < dVar13) {
            dVar13 = 1.0 / SQRT(dVar13);
            dVar24 = dVar24 * dVar13;
            dVar23 = dVar23 * dVar13;
            dVar21 = dVar21 * dVar13;
          }
          if ((*(int *)(param_1 + 0x120) == 0) ||
             (dVar13 = DAT_14c8464e0, dVar48 = DAT_14c8464e8, dVar41 = DAT_14c8464f0,
             *(int *)(param_1 + 0x120) == 1 && iVar30 == 0)) {
            dVar17 = dVar24 * (dVar44 - dVar6) - (dVar11 - dVar5) * dVar23;
            dVar45 = dVar21 * (dVar11 - dVar5) - (dVar12 - dVar7) * dVar24;
            dVar47 = dVar23 * (dVar12 - dVar7) - (dVar44 - dVar6) * dVar21;
            dVar15 = dVar17 * dVar17 + dVar47 * dVar47 + dVar45 * dVar45;
            dVar13 = dVar2;
            dVar48 = dVar3;
            dVar41 = dVar4;
            if (9.99999993922529e-09 < dVar15) {
              dVar41 = 1.0 / SQRT(dVar15);
              dVar13 = dVar47 * dVar41;
              dVar48 = dVar45 * dVar41;
              dVar41 = dVar17 * dVar41;
            }
          }
          if (*(float *)(param_1 + 0x17c) <= 0.0001) {
            fVar40 = (float)*(int *)(param_1 + 0x178);
            if (fVar40 <= 1.0) {
              fVar40 = 1.0;
            }
          }
          else {
            dVar45 = *(double *)((longlong)pdVar33 + lVar27 + 0x48) - dVar12;
            dVar47 = *(double *)((longlong)pdVar33 + lVar27 + 0x40) - dVar44;
            dVar17 = *(double *)((longlong)pdVar33 + lVar27 + 0x38) - dVar11;
            fVar40 = (float)SQRT(dVar45 * dVar45 + dVar17 * dVar17 + dVar47 * dVar47) /
                     *(float *)(param_1 + 0x17c);
          }
          iVar29 = *(int *)(param_1 + 0x14c);
          if (0 < iVar29) {
            fVar39 = *(float *)(pdVar33 + 0xc) * *(float *)(param_1 + 0x60);
            dVar45 = (double)fVar39;
            fVar57 = *(float *)((longlong)pdVar33 + lVar27 + 0x9c);
            uVar38 = -(uint)(0.0001 < fVar57);
            local_198._0_4_ = ~uVar38 & (uint)fVar40 | (uint)(fVar40 * fVar57) & uVar38;
            pdVar32 = pdVar33 + 0xe;
            iVar36 = 0;
            do {
              dVar17 = dVar41;
              dVar15 = dVar48;
              dVar47 = dVar13;
              if (iVar36 != 0) {
                dVar17 = (double)((float)iVar36 * (3.1415927 / (float)iVar29)) * 0.5;
                dVar47 = sin(dVar17);
                dVar43 = cos(dVar17);
                dVar15 = dVar24 * dVar47;
                dVar18 = dVar23 * dVar47;
                dVar47 = dVar47 * dVar21;
                dVar42 = dVar15 * dVar48 - dVar13 * dVar18;
                dVar20 = dVar47 * dVar13 - dVar41 * dVar15;
                dVar22 = dVar18 * dVar41 - dVar48 * dVar47;
                dVar42 = dVar42 + dVar42;
                dVar20 = dVar20 + dVar20;
                dVar22 = dVar22 + dVar22;
                dVar17 = (dVar15 * dVar20 - dVar22 * dVar18) + dVar43 * dVar42 + dVar41;
                dVar15 = (dVar47 * dVar22 - dVar42 * dVar15) + dVar43 * dVar20 + dVar48;
                dVar47 = (dVar18 * dVar42 - dVar20 * dVar47) + dVar43 * dVar22 + dVar13;
              }
              fVar40 = 1.0;
              if (*(char *)(param_1 + 0x180) != '\0') {
                fVar40 = *pfVar34;
              }
              dVar43 = (double)fVar40;
              dVar18 = dVar47 * dVar45 * dVar43;
              dVar20 = dVar15 * dVar45 * dVar43;
              dVar43 = dVar43 * dVar17 * dVar45;
              *pfVar31 = (float)((dVar11 + dVar18) - dVar19);
              pfVar31[1] = (float)((dVar44 + dVar20) - dVar16);
              pfVar31[2] = (float)((dVar12 + dVar43) - dVar14);
              pfVar31[4] = (float)(dVar11 - dVar19);
              pfVar31[5] = (float)(dVar44 - dVar16);
              pfVar31[6] = (float)(dVar12 - dVar14);
              pfVar31[7] = 0.0;
              pfVar31[8] = fVar39;
              pfVar31[9] = fVar39;
              *(undefined1 (*) [16])(pfVar31 + 0x10) = ZEXT416(0);
              pfVar31[10] = *(float *)((longlong)pdVar33 + 0x3c);
              dVar22 = pdVar33[0xf];
              *(double *)(pfVar31 + 0xc) = *pdVar32;
              *(double *)(pfVar31 + 0xe) = dVar22;
              pfVar31[0x14] = (float)((dVar11 - dVar18) - dVar19);
              pfVar31[0x15] = (float)((dVar44 - dVar20) - dVar16);
              pfVar31[0x16] = (float)((dVar12 - dVar43) - dVar14);
              pfVar31[0x18] = (float)(dVar11 - dVar19);
              pfVar31[0x19] = (float)(dVar44 - dVar16);
              pfVar31[0x1a] = (float)(dVar12 - dVar14);
              pfVar31[0x1b] = 0.0;
              pfVar31[0x1c] = fVar39;
              pfVar31[0x1d] = fVar39;
              pfVar31[0x24] = 0.0;
              pfVar31[0x25] = 1.0;
              pfVar31[0x26] = 0.0;
              pfVar31[0x27] = 1.0;
              pfVar31[0x1e] = *(float *)((longlong)pdVar33 + 0x3c);
              dVar22 = pdVar33[0xf];
              *(double *)(pfVar31 + 0x20) = *pdVar32;
              *(double *)(pfVar31 + 0x22) = dVar22;
              if (*(char *)(param_1 + 0x180) != '\0') {
                dVar43 = (double)pfVar34[1];
                dVar18 = dVar47 * dVar45 * dVar43;
                dVar20 = dVar15 * dVar45 * dVar43;
                dVar43 = dVar17 * dVar45 * dVar43;
              }
              pfVar31[0x28] = (float)((dVar8 + dVar18) - dVar19);
              pfVar31[0x29] = (float)((dVar9 + dVar20) - dVar16);
              pfVar31[0x2a] = (float)((dVar10 + dVar43) - dVar14);
              dVar17 = pdVar33[2];
              dVar47 = pdVar33[1];
              pfVar31[0x2c] = (float)(*pdVar33 - dVar19);
              pfVar31[0x2d] = (float)(dVar47 - dVar16);
              pfVar31[0x2e] = (float)(dVar17 - dVar14);
              pfVar31[0x2f] = 0.0;
              pfVar31[0x30] = fVar39;
              pfVar31[0x31] = fVar39;
              pfVar31[0x38] = (float)local_198._0_4_;
              pfVar31[0x39] = 0.0;
              pfVar31[0x3a] = 1.0;
              pfVar31[0x3b] = 0.0;
              pfVar31[0x32] = *(float *)((longlong)pdVar33 + 0x3c);
              dVar17 = pdVar33[0xf];
              *(double *)(pfVar31 + 0x34) = *pdVar32;
              *(double *)(pfVar31 + 0x36) = dVar17;
              pfVar31[0x3c] = (float)((dVar8 - dVar18) - dVar19);
              pfVar31[0x3d] = (float)((dVar9 - dVar20) - dVar16);
              pfVar31[0x3e] = (float)((dVar10 - dVar43) - dVar14);
              dVar17 = pdVar33[2];
              dVar47 = pdVar33[1];
              pfVar31[0x40] = (float)(*pdVar33 - dVar19);
              pfVar31[0x41] = (float)(dVar47 - dVar16);
              pfVar31[0x42] = (float)(dVar17 - dVar14);
              pfVar31[0x43] = 0.0;
              pfVar31[0x44] = fVar39;
              pfVar31[0x45] = fVar39;
              pfVar31[0x4c] = (float)local_198._0_4_;
              *(undefined1 **)(pfVar31 + 0x4d) = &DAT_3f8000003f800000;
              pfVar31[0x4f] = 1.0;
              pfVar31[0x46] = *(float *)((longlong)pdVar33 + 0x3c);
              dVar17 = pdVar33[0xf];
              *(double *)(pfVar31 + 0x48) = *pdVar32;
              *(double *)(pfVar31 + 0x4a) = dVar17;
              pfVar31 = pfVar31 + 0x50;
              iVar36 = iVar36 + 1;
              iVar29 = *(int *)(param_1 + 0x14c);
            } while (iVar36 < iVar29);
            iVar36 = *(int *)(param_1 + 0x34);
          }
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < iVar36);
    }
  }
  else if (0 < iVar36) {
    local_220 = 1.0 / (float)iVar30;
    iVar30 = 0;
    do {
      lVar37 = (longlong)iVar30 * (longlong)*(int *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x50)
      ;
      lVar27 = (longlong)*(int *)(param_1 + 0x124);
      if (*(int *)(lVar27 + 0xa0 + lVar37) != 0) {
        pdVar33 = (double *)(lVar37 + *(int *)(param_1 + 0x128));
        if ((longlong)*(int *)(param_1 + 0x128) == -1) {
          pdVar33 = (double *)0x0;
        }
        pdVar32 = (double *)(lVar37 + *(int *)(param_1 + 0x13c));
        if ((longlong)*(int *)(param_1 + 0x13c) == -1) {
          pdVar32 = (double *)0x0;
        }
        if (0.0001 < *(float *)(param_1 + 0x17c)) {
          dVar8 = *(double *)(lVar37 + 0x48 + lVar27) - *(double *)(lVar37 + 0x10 + lVar27);
          dVar9 = *(double *)(lVar37 + 0x40 + lVar27) - *(double *)(lVar37 + 8 + lVar27);
          dVar10 = *(double *)(lVar37 + 0x38 + lVar27) - *(double *)(lVar37 + lVar27);
          local_220 = ((float)SQRT(dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9) /
                      *(float *)(param_1 + 0x17c)) / (float)*(int *)(param_1 + 0x184);
        }
        iVar29 = *(int *)(param_1 + 0x14c);
        if (0 < iVar29) {
          fVar40 = *(float *)(lVar37 + 0x60) * *(float *)(param_1 + 0x60);
          dVar8 = (double)fVar40;
          iVar36 = *(int *)(lVar37 + 0x98 + lVar27);
          uVar60 = SUB84(DAT_14c8464f0,0);
          uVar61 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          uVar55 = SUB84(DAT_14c8464e8,0);
          uVar56 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
          uVar51 = SUB84(DAT_14c8464e0,0);
          uVar52 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
          puVar1 = (undefined8 *)(lVar37 + 0x70);
          local_228 = 0.0;
          fVar57 = 0.0;
          iVar35 = 0;
          local_178 = ZEXT816(0);
          local_198 = ZEXT816(0);
          local_188 = ZEXT816(0);
          do {
            dVar9 = *(double *)(lVar37 + lVar27);
            uVar49 = SUB84(dVar9,0);
            uVar50 = (undefined4)((ulonglong)dVar9 >> 0x20);
            dVar10 = *(double *)(lVar37 + 8 + lVar27);
            uVar58 = SUB84(dVar10,0);
            uVar59 = (undefined4)((ulonglong)dVar10 >> 0x20);
            dVar11 = *(double *)(lVar37 + 0x10 + lVar27);
            uVar53 = SUB84(dVar11,0);
            uVar54 = (undefined4)((ulonglong)dVar11 >> 0x20);
            dVar21 = dVar11 - pdVar33[2];
            dVar12 = dVar10 - pdVar33[1];
            dVar13 = dVar9 - *pdVar33;
            dVar44 = dVar21 * dVar21 + dVar13 * dVar13 + dVar12 * dVar12;
            if (9.99999993922529e-09 < dVar44) {
              dVar44 = 1.0 / SQRT(dVar44);
              dVar13 = dVar13 * dVar44;
              dVar12 = dVar12 * dVar44;
              dVar21 = dVar21 * dVar44;
            }
            dVar24 = (double)CONCAT44(uVar52,uVar51);
            dVar23 = (double)CONCAT44(uVar56,uVar55);
            dVar44 = (double)CONCAT44(uVar61,uVar60);
            if (*(int *)(param_1 + 0x120) == 0) {
              dVar48 = dVar13 * (dVar10 - dVar6) - (dVar9 - dVar5) * dVar12;
              dVar41 = dVar21 * (dVar9 - dVar5) - (dVar11 - dVar7) * dVar13;
              dVar45 = dVar12 * (dVar11 - dVar7) - (dVar10 - dVar6) * dVar21;
              dVar17 = dVar48 * dVar48 + dVar45 * dVar45 + dVar41 * dVar41;
              dVar24 = dVar2;
              dVar23 = dVar3;
              dVar44 = dVar4;
              if (9.99999993922529e-09 < dVar17) {
                dVar44 = 1.0 / SQRT(dVar17);
                dVar24 = dVar45 * dVar44;
                dVar23 = dVar41 * dVar44;
                dVar44 = dVar48 * dVar44;
              }
            }
            dVar45 = dVar24;
            dVar41 = dVar44;
            dVar48 = dVar23;
            if (iVar35 != 0) {
              dVar48 = (double)((float)iVar35 * (3.1415927 / (float)iVar29)) * 0.5;
              dVar45 = sin(dVar48);
              local_228 = cos(dVar48);
              dVar48 = dVar13 * dVar45;
              dVar15 = dVar12 * dVar45;
              dVar45 = dVar45 * dVar21;
              dVar47 = dVar48 * dVar23 - dVar24 * dVar15;
              dVar17 = dVar45 * dVar24 - dVar44 * dVar48;
              dVar43 = dVar15 * dVar44 - dVar23 * dVar45;
              dVar47 = dVar47 + dVar47;
              dVar17 = dVar17 + dVar17;
              dVar43 = dVar43 + dVar43;
              dVar41 = (dVar48 * dVar17 - dVar43 * dVar15) + local_228 * dVar47 + dVar44;
              local_198._8_8_ = 0;
              local_198._0_8_ = dVar15;
              local_188._8_8_ = 0;
              local_188._0_8_ = dVar48;
              dVar48 = (dVar45 * dVar43 - dVar47 * dVar48) + local_228 * dVar17 + dVar23;
              local_178._8_4_ = extraout_XMM0_Dc;
              local_178._0_8_ = dVar45;
              local_178._12_4_ = extraout_XMM0_Dd;
              dVar45 = (dVar15 * dVar47 - dVar17 * dVar45) + local_228 * dVar43 + dVar24;
            }
            fVar39 = 1.0;
            if (*(char *)(param_1 + 0x180) != '\0') {
              fVar39 = *(float *)pdVar32;
            }
            dVar17 = (double)fVar39;
            dVar45 = dVar45 * dVar8 * dVar17;
            dVar48 = dVar48 * dVar8 * dVar17;
            dVar17 = dVar41 * dVar8 * dVar17;
            *pfVar31 = (float)((dVar9 + dVar45) - dVar19);
            pfVar31[1] = (float)((dVar10 + dVar48) - dVar16);
            pfVar31[2] = (float)((dVar11 + dVar17) - dVar14);
            pfVar31[4] = (float)(dVar9 - dVar19);
            pfVar31[5] = (float)(dVar10 - dVar16);
            pfVar31[6] = (float)(dVar11 - dVar14);
            pfVar31[7] = 0.0;
            pfVar31[8] = fVar40;
            pfVar31[9] = fVar40;
            pfVar31[0x10] = 0.0;
            pfVar31[0x11] = 0.0;
            pfVar31[0x12] = 0.0;
            pfVar31[0x13] = 0.0;
            pfVar31[10] = *(float *)(lVar37 + 0x3c);
            uVar25 = *(undefined8 *)(lVar37 + 0x78);
            *(undefined8 *)(pfVar31 + 0xc) = *puVar1;
            *(undefined8 *)(pfVar31 + 0xe) = uVar25;
            pfVar31[0x14] = (float)((dVar9 - dVar45) - dVar19);
            pfVar31[0x15] = (float)((dVar10 - dVar48) - dVar16);
            pfVar31[0x16] = (float)((dVar11 - dVar17) - dVar14);
            pfVar31[0x18] = (float)(dVar9 - dVar19);
            pfVar31[0x19] = (float)(dVar10 - dVar16);
            pfVar31[0x1a] = (float)(dVar11 - dVar14);
            pfVar31[0x1b] = 0.0;
            pfVar31[0x1c] = fVar40;
            pfVar31[0x1d] = fVar40;
            pfVar31[0x24] = 0.0;
            pfVar31[0x25] = 1.0;
            pfVar31[0x26] = 0.0;
            pfVar31[0x27] = 1.0;
            pfVar31[0x1e] = *(float *)(lVar37 + 0x3c);
            uVar25 = *(undefined8 *)(lVar37 + 0x78);
            *(undefined8 *)(pfVar31 + 0x20) = *puVar1;
            *(undefined8 *)(pfVar31 + 0x22) = uVar25;
            pfVar31 = pfVar31 + 0x28;
            uVar51 = SUB84(dVar24,0);
            uVar52 = (undefined4)((ulonglong)dVar24 >> 0x20);
            uVar55 = SUB84(dVar23,0);
            uVar56 = (undefined4)((ulonglong)dVar23 >> 0x20);
            uVar60 = SUB84(dVar44,0);
            uVar61 = (undefined4)((ulonglong)dVar44 >> 0x20);
            if (0 < *(int *)(lVar37 + 0x98 + lVar27)) {
              dVar9 = local_188._0_8_;
              local_148 = -dVar9;
              fVar46 = 0.0;
              lVar28 = 0;
              pdVar26 = pdVar33 + 2;
              do {
                dVar44 = (double)CONCAT44(uVar52,uVar51);
                dVar11 = (double)CONCAT44(uVar56,uVar55);
                dVar10 = (double)CONCAT44(uVar61,uVar60);
                if (*(int *)(param_1 + 0x120) == 0) {
                  dVar11 = (double)CONCAT44(uVar54,uVar53) - dVar7;
                  dVar44 = (double)CONCAT44(uVar59,uVar58) - dVar6;
                  dVar10 = (double)CONCAT44(uVar50,uVar49) - dVar5;
                  dVar24 = dVar13 * dVar44 + dVar10 * -dVar12;
                  dVar48 = dVar11 * -dVar13 + dVar21 * dVar10;
                  dVar41 = dVar44 * -dVar21 + dVar12 * dVar11;
                  dVar23 = dVar24 * dVar24 + dVar41 * dVar41 + dVar48 * dVar48;
                  dVar44 = dVar2;
                  dVar11 = dVar3;
                  dVar10 = dVar4;
                  if (9.99999993922529e-09 < dVar23) {
                    dVar10 = 1.0 / SQRT(dVar23);
                    dVar44 = dVar41 * dVar10;
                    dVar11 = dVar48 * dVar10;
                    dVar10 = dVar24 * dVar10;
                  }
                }
                dVar48 = dVar10;
                dVar23 = dVar44;
                dVar24 = dVar11;
                if (iVar35 != 0) {
                  dVar17 = local_198._0_8_;
                  dVar45 = dVar9 * dVar11 + dVar44 * -dVar17;
                  dVar41 = (double)local_178._0_8_ * dVar44 + dVar10 * local_148;
                  dVar23 = dVar17 * dVar10 + dVar11 * -(double)local_178._0_8_;
                  dVar45 = dVar45 + dVar45;
                  dVar41 = dVar41 + dVar41;
                  dVar23 = dVar23 + dVar23;
                  dVar48 = dVar9 * dVar41 + dVar23 * -dVar17 + local_228 * dVar45 + dVar10;
                  dVar24 = dVar45 * local_148 + (double)local_178._0_8_ * dVar23 +
                           local_228 * dVar41 + dVar11;
                  dVar23 = dVar41 * -(double)local_178._0_8_ + dVar17 * dVar45 +
                           local_228 * dVar23 + dVar44;
                }
                if (*(char *)(param_1 + 0x180) != '\0') {
                  fVar39 = *(float *)((longlong)pdVar32 + lVar28 * 4 + 4);
                }
                dVar41 = pdVar26[-2];
                uVar49 = SUB84(dVar41,0);
                uVar50 = (undefined4)((ulonglong)dVar41 >> 0x20);
                dVar45 = pdVar26[-1];
                uVar58 = SUB84(dVar45,0);
                uVar59 = (undefined4)((ulonglong)dVar45 >> 0x20);
                dVar17 = *pdVar26;
                uVar53 = SUB84(dVar17,0);
                uVar54 = (undefined4)((ulonglong)dVar17 >> 0x20);
                dVar47 = (double)fVar39;
                dVar23 = dVar23 * dVar8 * dVar47;
                dVar24 = dVar24 * dVar8 * dVar47;
                dVar47 = dVar48 * dVar8 * dVar47;
                fVar57 = fVar57 + 1.0 / (float)iVar36;
                *pfVar31 = (float)((dVar41 + dVar23) - dVar19);
                pfVar31[1] = (float)((dVar45 + dVar24) - dVar16);
                pfVar31[2] = (float)((dVar17 + dVar47) - dVar14);
                pfVar31[4] = (float)(dVar41 - dVar19);
                pfVar31[5] = (float)(dVar45 - dVar16);
                pfVar31[6] = (float)(dVar17 - dVar14);
                pfVar31[7] = 0.0;
                pfVar31[8] = fVar40;
                pfVar31[9] = fVar40;
                fVar46 = fVar46 + local_220;
                pfVar31[0x10] = fVar46;
                pfVar31[0x11] = 0.0;
                pfVar31[0x12] = fVar57;
                pfVar31[0x13] = 0.0;
                pfVar31[10] = *(float *)(lVar37 + 0x3c);
                uVar25 = *(undefined8 *)(lVar37 + 0x78);
                *(undefined8 *)(pfVar31 + 0xc) = *puVar1;
                *(undefined8 *)(pfVar31 + 0xe) = uVar25;
                pfVar31[0x14] = (float)((dVar41 - dVar23) - dVar19);
                pfVar31[0x15] = (float)((dVar45 - dVar24) - dVar16);
                pfVar31[0x16] = (float)((dVar17 - dVar47) - dVar14);
                pfVar31[0x18] = (float)(dVar41 - dVar19);
                pfVar31[0x19] = (float)(dVar45 - dVar16);
                pfVar31[0x1a] = (float)(dVar17 - dVar14);
                pfVar31[0x1b] = 0.0;
                pfVar31[0x1c] = fVar40;
                pfVar31[0x1d] = fVar40;
                pfVar31[0x24] = fVar46;
                pfVar31[0x25] = 1.0;
                pfVar31[0x26] = fVar57;
                pfVar31[0x27] = 1.0;
                pfVar31[0x1e] = *(float *)(lVar37 + 0x3c);
                uVar25 = *(undefined8 *)(lVar37 + 0x78);
                *(undefined8 *)(pfVar31 + 0x20) = *puVar1;
                *(undefined8 *)(pfVar31 + 0x22) = uVar25;
                lVar28 = lVar28 + 1;
                pfVar31 = pfVar31 + 0x28;
                pdVar26 = pdVar26 + 3;
                uVar51 = SUB84(dVar44,0);
                uVar52 = (undefined4)((ulonglong)dVar44 >> 0x20);
                uVar55 = SUB84(dVar11,0);
                uVar56 = (undefined4)((ulonglong)dVar11 >> 0x20);
                uVar60 = SUB84(dVar10,0);
                uVar61 = (undefined4)((ulonglong)dVar10 >> 0x20);
              } while (lVar28 < *(int *)(lVar37 + 0x98 + lVar27));
            }
            iVar35 = iVar35 + 1;
            iVar29 = *(int *)(param_1 + 0x14c);
          } while (iVar35 < iVar29);
          iVar36 = *(int *)(param_1 + 0x34);
        }
      }
      iVar30 = iVar30 + 1;
    } while (iVar30 < iVar36);
  }
  return;
}



// FUNCTION 1435f65fc FUN_1435f65fc body=240 status=ok
// SIG undefined FUN_1435f65fc(void)

longlong * FUN_1435f65fc(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_145e41118();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_28,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_28;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1435f66ee FUN_1435f66ee body=2320 status=ok
// SIG undefined FUN_1435f66ee(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1435f66ee(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,longlong *param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 *local_258;
  undefined8 *local_250;
  longlong *local_248;
  undefined1 *local_240;
  undefined4 local_230;
  uint local_22c;
  longlong local_228;
  longlong *local_220;
  undefined8 *local_218;
  longlong local_210 [3];
  undefined4 local_1f8;
  undefined8 local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1a8 [296];
  uint local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (((*(byte *)((longlong)param_1 + 0xc) & 2) != 0) &&
     (((lVar11 = param_1[0x20], (int)lVar11 != 0 || (*(int *)((longlong)param_1 + 0x104) != 0)) &&
      (DAT_14c7616de == '\x01')))) {
    local_228 = param_6[0x22];
    local_1b8 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    local_1e8 = 0;
    lStack_1e0 = 0;
    local_1f8 = 0;
    local_210[1] = 0;
    local_210[2] = 0;
    memset(local_1a8,0,0x140);
    local_268 = (undefined4)param_6[0x1f];
    uStack_264 = *(undefined4 *)((longlong)param_6 + 0xfc);
    uStack_260 = (undefined4)param_6[0x20];
    uStack_25c = *(undefined4 *)((longlong)param_6 + 0x104);
    local_258 = &local_1c8;
    local_270 = 0;
    local_278 = 0x50;
    local_250 = &local_1e8;
    local_248 = local_210 + 1;
    local_240 = local_1a8;
    FUN_1435ec56e(param_1,param_2,param_3,(int)lVar11);
    (**(code **)(*param_1 + 0x68))(param_1,local_1a8);
    if (local_80 != 0) {
      if (*(char *)((longlong)param_1 + 0xe4) == '\0') {
        FUN_147c30ee2(param_2,local_228);
      }
      local_220 = param_1 + 5;
      local_230 = *(undefined4 *)(param_3 + 0x3090);
      plVar10 = (longlong *)param_6[0x1d];
      puVar9 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xea8);
      puVar6 = (uint *)*puVar9;
      if (puVar6 != (uint *)0x0) goto LAB_1435f68be;
      while( true ) {
        FUN_14472e504(puVar9);
        puVar6 = (uint *)*puVar9;
LAB_1435f68be:
        uVar19 = local_230;
        puVar20 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        uVar5 = puVar6[0x12];
        if (puVar20 + 0x2e <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar16 = *puVar6;
          *puVar6 = *puVar6 + uVar5 + 1;
          UNLOCK();
          if ((uVar16 ^ uVar5) != 0xffffffff) break;
          puVar6 = (uint *)*puVar9;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar9 = puVar6;
          puVar20 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          uVar5 = 0;
          if (puVar20 + 0x2e <= puVar6 + 0x4000) {
            uVar5 = 1;
            goto LAB_1435f693c;
          }
        }
      }
      uVar5 = uVar5 + 1;
LAB_1435f693c:
      local_22c = local_80;
      *(undefined8 **)(puVar6 + 0x10) = puVar20 + 0x2f;
      puVar6[0x12] = uVar5;
      *(int *)(puVar20 + -1) = ((int)puVar20 + -8) - (int)puVar6;
      *(undefined4 *)((longlong)puVar20 + -4) = 0x170;
      puVar20[1] = 0;
      *puVar20 = &PTR_FUN_14aa077f8;
      lVar21 = *plVar10;
      puVar20[1] = lVar21;
      LOCK();
      lVar11 = *plVar10;
      bVar22 = lVar21 == lVar11;
      if (bVar22) {
        *plVar10 = (longlong)puVar20;
        lVar11 = lVar21;
      }
      UNLOCK();
      while (!bVar22) {
        puVar20[1] = lVar11;
        LOCK();
        lVar21 = *plVar10;
        bVar22 = lVar11 == lVar21;
        if (bVar22) {
          *plVar10 = (longlong)puVar20;
          lVar21 = lVar11;
        }
        UNLOCK();
        lVar11 = lVar21;
      }
      puVar20[2] = &PTR_FUN_14aa07800;
      local_218 = puVar20 + 3;
      *(undefined4 *)(puVar20 + 4) = 0xffffffff;
      *(char *)((longlong)puVar20 + 0x24) = (char)local_230;
      *(undefined2 *)((longlong)puVar20 + 0x25) = 1;
      puVar20[0x15] = 0;
      puVar20[0x16] = 0x800000000;
      puVar20[0x1b] = 0;
      puVar20[0x1c] = 0x200000000;
      puVar20[0x23] = 0;
      puVar20[0x24] = 0x300000000;
      puVar20[0x25] = 0;
      puVar20[0x26] = 0;
      puVar20[0x27] = 0;
      *(undefined4 *)(puVar20 + 0x28) = 0x1ffffff;
      puVar20[3] = &PTR_FUN_14aa07810;
      puVar20[0x2a] = 0;
      puVar20[0x2b] = 0;
      puVar20[0x2c] = 0;
      *(undefined1 *)(puVar20 + 0x2d) = 1;
      *(undefined4 *)(puVar20 + 0x29) = 1;
      *(byte *)(puVar20 + 0x2d) = *(byte *)(param_1 + 4) & 1;
      FUN_14006bf18(local_218,local_228);
      FUN_147c34bdf(local_210,param_2,local_220,param_3);
      lVar11 = puVar20[0x2a];
      lVar21 = local_210[0];
      if (lVar11 != local_210[0]) {
        puVar20[0x2a] = local_210[0];
        if (local_210[0] != 0) {
          LOCK();
          *(int *)(local_210[0] + 8) = *(int *)(local_210[0] + 8) + 1;
          UNLOCK();
        }
        if (lVar11 != 0) {
          LOCK();
          puVar6 = (uint *)(lVar11 + 8);
          uVar5 = *puVar6;
          *puVar6 = *puVar6 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            puVar6 = (uint *)(lVar11 + 8);
            LOCK();
            uVar5 = *puVar6;
            *puVar6 = *puVar6 | 0x40000000;
            UNLOCK();
            if ((uVar5 >> 0x1e & 1) == 0) {
              bVar12 = *(byte *)(lVar11 + 0xd);
              plVar7 = (longlong *)FUN_14001cc68(0x10,8);
              plVar7[1] = lVar11;
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c8;
              lVar21 = local_210[0];
              if ((bVar12 & 2) == 0) {
                do {
                  *plVar7 = (longlong)plVar10;
                  LOCK();
                  bVar22 = plVar10 != DAT_14ca843c0;
                  plVar8 = plVar7;
                  if (bVar22) {
                    plVar10 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar8;
                  UNLOCK();
                } while (bVar22);
              }
              else {
                do {
                  *plVar7 = (longlong)plVar8;
                  LOCK();
                  bVar22 = plVar8 != DAT_14ca843c8;
                  plVar10 = plVar7;
                  if (bVar22) {
                    plVar8 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar22);
              }
            }
          }
        }
      }
      uVar5 = local_22c;
      if (lVar21 != 0) {
        LOCK();
        puVar6 = (uint *)(lVar21 + 8);
        uVar16 = *puVar6;
        *puVar6 = *puVar6 - 1;
        UNLOCK();
        if ((uVar16 & 0x3fffffff) == 1) {
          puVar6 = (uint *)(lVar21 + 8);
          LOCK();
          uVar16 = *puVar6;
          *puVar6 = *puVar6 | 0x40000000;
          UNLOCK();
          if ((uVar16 >> 0x1e & 1) == 0) {
            bVar12 = *(byte *)(lVar21 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar21;
            plVar10 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar12 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar10;
                LOCK();
                bVar22 = plVar10 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar22) {
                  plVar10 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar22);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar22 = plVar8 != DAT_14ca843c8;
                plVar10 = plVar7;
                if (bVar22) {
                  plVar8 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar22);
            }
          }
        }
      }
      uVar4 = (**(code **)(*param_1 + 0x40))(param_1,uVar19);
      puVar9 = (undefined8 *)puVar20[0x15];
      if ((undefined8 *)puVar20[0x15] == (undefined8 *)0x0) {
        puVar9 = puVar20 + 5;
      }
      *puVar9 = uStack_1c0;
      *(undefined2 *)((longlong)puVar9 + 0xc) = uVar4;
      *(undefined4 *)(puVar9 + 1) = local_1b8;
      puVar9 = (undefined8 *)puVar20[0x15];
      if ((undefined8 *)puVar20[0x15] == (undefined8 *)0x0) {
        puVar9 = puVar20 + 5;
      }
      puVar9[2] = &DAT_14caf6f28;
      *(undefined2 *)((longlong)puVar9 + 0x1c) = 0;
      *(undefined4 *)(puVar9 + 3) = 0;
      puVar20[0x2b] = lStack_1e0;
      *(undefined4 *)(puVar20 + 0x2c) = local_1d8;
      *(uint *)((longlong)puVar20 + 0x164) = uVar5;
      iVar13 = (int)param_6[1];
      iVar2 = (int)param_6[2];
      iVar3 = (iVar2 + 0x44) / 0x44;
      *(int *)(param_6 + 2) = iVar2 + 1;
      lVar11 = lStack_1e0;
      uVar19 = local_1d8;
      if (iVar13 < iVar3) {
        local_228 = lStack_1e0;
        local_230 = local_1d8;
        do {
          local_220 = (longlong *)CONCAT44(local_220._4_4_,iVar13);
          lVar11 = FUN_14001cc68(0x3fc0,0x10);
          lVar21 = 0;
          do {
            *(undefined8 *)(lVar11 + 0xa8 + lVar21) = 0;
            puVar9 = (undefined8 *)(lVar11 + 0xb8 + lVar21);
            *puVar9 = 0;
            puVar9[1] = 0;
            *(undefined8 *)(lVar11 + 200 + lVar21) = 0;
            *(undefined8 *)(lVar11 + 0xd0 + lVar21) = 0xffffffff;
            *(undefined8 *)(lVar11 + 0xd8 + lVar21) = 0xff0000ffffffff;
            *(undefined1 *)(lVar11 + 0xe0 + lVar21) = 0;
            *(undefined4 *)(lVar11 + 0xe4 + lVar21) = 0x40c00f07;
            pbVar1 = (byte *)(lVar11 + 0xe8 + lVar21);
            *pbVar1 = *pbVar1 & 0xfc;
            *(undefined1 **)(lVar11 + 0xb0 + lVar21) = &DAT_100000001;
            FUN_14470b9e0(lVar11 + lVar21,1);
            lVar21 = lVar21 + 0xf0;
          } while (lVar21 != 0x3fc0);
          iVar13 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar13 + 1U) {
            FUN_14002baf6(param_6,iVar13);
          }
          *(longlong *)(*param_6 + (longlong)iVar13 * 8) = lVar11;
          iVar13 = (int)local_220 + 1;
          lVar11 = local_228;
          uVar5 = local_22c;
          uVar19 = local_230;
        } while (iVar13 != iVar3);
      }
      lVar21 = *(longlong *)(*param_6 + (longlong)(iVar2 / 0x44) * 8);
      lVar14 = (ulonglong)(uint)(iVar2 % 0x44) * 0xf0;
      puVar9 = (undefined8 *)(lVar21 + lVar14);
      puVar20 = *(undefined8 **)(lVar21 + 0xa8 + lVar14);
      if (puVar20 == (undefined8 *)0x0) {
        puVar20 = puVar9;
      }
      puVar20[3] = lVar11;
      *(undefined4 *)(puVar20 + 0xb) = uVar19;
      *(undefined8 **)(lVar21 + 0xb8 + lVar14) = local_218;
      *(undefined8 *)(lVar21 + 200 + lVar14) = 0;
      puVar18 = (undefined8 *)(param_2 + 0x308);
      if (*(char *)((longlong)param_1 + 0xe4) != '\0') {
        puVar18 = (undefined8 *)(param_2 + 0x250);
      }
      *puVar20 = *puVar18;
      *(uint *)((longlong)puVar20 + 0x5c) = uVar5 & 0xfffffffe;
      *(undefined4 *)(puVar20 + 0xd) = 0;
      *(int *)((longlong)puVar20 + 0x6c) = (int)param_1[0x20] + -1;
      uVar5 = *(uint *)(lVar21 + 0xe4 + lVar14);
      uVar16 = (*(byte *)(param_2 + 0x6b) & 1) << 6;
      *(uint *)(lVar21 + 0xe4 + lVar14) = uVar5 & 0xffffffbf | uVar16;
      uVar17 = (*(byte *)(param_2 + 0x2b0) & 1) << 8;
      *(uint *)(lVar21 + 0xe4 + lVar14) = uVar5 & 0xfffffebf | uVar16 | uVar17;
      if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
        uVar15 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar15) ==
              *(longlong *)(param_3 + 0x4c0)) {
            if ((int)(~uVar15 >> 3) != 0) {
              bVar12 = *(byte *)(param_2 + 0x6d) >> 3;
              goto LAB_1435f6d8f;
            }
            break;
          }
          uVar15 = uVar15 + 8;
        } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar15);
      }
      bVar12 = *(byte *)(param_2 + 0x6d);
LAB_1435f6d8f:
      uVar5 = uVar5 & 0xfff1febf | uVar16 | uVar17 | (bVar12 & 7) << 0x11;
      *(uint *)((longlong)puVar9 + 0xe4) = uVar5;
      iVar13 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar13 != 0x40000002) && (iVar13 == 1)) && (DAT_14c86a9f8 != '\0')) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        uVar5 = *(uint *)((longlong)puVar9 + 0xe4);
      }
      puVar9[0x18] = param_1[3];
      *(uint *)((longlong)puVar9 + 0xe4) = uVar5 & 0xffee3fff | 0x104000;
      *(uint *)((longlong)puVar9 + 0xe4) =
           uVar5 & 0xffce3fff | 0x104000 | (uint)((*(byte *)(param_2 + 0x6c) & 6) != 0) << 0x15;
      FUN_1436a14f8(param_6,param_5,puVar9);
      if (*(char *)((longlong)param_1 + 0x189) == '\x01') {
        plVar10 = param_6 + 10;
        if ((longlong *)param_6[0xc] != (longlong *)0x0) {
          plVar10 = (longlong *)param_6[0xc];
        }
        (**(code **)(*param_1 + 0x70))(param_1,param_2,plVar10[param_5],param_3);
      }
      if ((*(char *)((longlong)param_1 + 0x18a) != '\0') ||
         (*(char *)((longlong)param_1 + 0x18b) == '\x01')) {
        plVar10 = param_6 + 10;
        if ((longlong *)param_6[0xc] != (longlong *)0x0) {
          plVar10 = (longlong *)param_6[0xc];
        }
        (**(code **)(*param_1 + 0x78))(param_1,param_2,plVar10[param_5],param_3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435f7000 FUN_1435f7000 body=1901 status=ok
// SIG undefined FUN_1435f7000(void)

void FUN_1435f7000(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  longlong *param_6)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  byte bVar15;
  undefined *puVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_298 [32];
  uint local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 *local_258;
  undefined8 *local_250;
  longlong *local_248;
  undefined1 *local_240;
  ulonglong local_238;
  int local_230;
  undefined4 local_22c;
  undefined8 local_228;
  longlong local_220;
  longlong local_218;
  undefined4 local_20c;
  longlong local_208;
  undefined *puStack_200;
  undefined4 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1a8 [296];
  int local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (((((*(byte *)((longlong)param_1 + 0xc) & 2) != 0) &&
       (lVar13 = param_1[5], 0 < *(int *)(lVar13 + 0xdc))) && (0 < *(int *)(lVar13 + 0xc))) &&
     ((2 < *(int *)(lVar13 + 0xe0) && (DAT_14c7616df == '\x01')))) {
    lVar13 = param_6[0x22];
    uVar7 = 0;
    local_1b8 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = 0;
    local_208 = 0;
    puStack_200 = (undefined *)0x0;
    memset(local_1a8,0,0x140);
    puVar8 = &DAT_14c760db4;
    if (*(longlong *)(param_4 + 0x40) != 0) {
      puVar8 = (undefined4 *)(*(longlong *)(param_4 + 0x40) + 8);
    }
    local_20c = *puVar8;
    uVar6 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    }
    (**(code **)(*param_1 + 0x68))(param_1,local_1a8);
    local_268 = (undefined4)param_6[0x1f];
    uStack_264 = *(undefined4 *)((longlong)param_6 + 0xfc);
    uStack_260 = (undefined4)param_6[0x20];
    uStack_25c = *(undefined4 *)((longlong)param_6 + 0x104);
    local_248 = &local_208;
    local_250 = &local_1e8;
    local_258 = &local_1c8;
    local_278 = uVar6;
    local_270 = uVar7;
    local_240 = local_1a8;
    FUN_1435ec56e(param_1,param_2,param_3,*(undefined4 *)(param_1[5] + 0xdc));
    (**(code **)(*param_1 + 0x68))(param_1,local_1a8);
    if ((local_80 != 0) && ((*(byte *)((longlong)param_1 + 0x34) & 2) != 0)) {
      if (*(char *)(param_1[5] + 0xbc) == '\0') {
        FUN_147c30ee2(param_2,lVar13);
      }
      uVar9 = FUN_147c34fb8(param_6,&local_20c);
      local_220 = uVar9 + 8;
      *(undefined4 *)(uVar9 + 0x138) = 1;
      *(byte *)(uVar9 + 0x158) = *(byte *)(param_1 + 4) & 1;
      local_238 = uVar9;
      (**(code **)(*(longlong *)(uVar9 + 8) + 0x18))(local_220,lVar13);
      FUN_147c34bdf(&local_218,param_2,param_1[5],param_3);
      lVar13 = *(longlong *)(uVar9 + 0x140);
      lVar18 = local_218;
      if (lVar13 != local_218) {
        *(longlong *)(local_238 + 0x140) = local_218;
        if (local_218 != 0) {
          LOCK();
          *(int *)(local_218 + 8) = *(int *)(local_218 + 8) + 1;
          UNLOCK();
        }
        if (lVar13 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar13 + 8);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar6 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar13 + 8);
            LOCK();
            uVar6 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar6 >> 0x1e & 1) == 0) {
              bVar15 = *(byte *)(lVar13 + 0xd);
              plVar10 = (longlong *)FUN_14001cc68(0x10,8);
              plVar10[1] = lVar13;
              plVar14 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c8;
              lVar18 = local_218;
              if ((bVar15 & 2) == 0) {
                do {
                  *plVar10 = (longlong)plVar14;
                  LOCK();
                  bVar24 = plVar14 != DAT_14ca843c0;
                  plVar11 = plVar10;
                  if (bVar24) {
                    plVar14 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar11;
                  UNLOCK();
                } while (bVar24);
              }
              else {
                do {
                  *plVar10 = (longlong)plVar11;
                  LOCK();
                  bVar24 = plVar11 != DAT_14ca843c8;
                  plVar14 = plVar10;
                  if (bVar24) {
                    plVar11 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar24);
              }
            }
          }
        }
      }
      if (lVar18 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar18 + 8);
        uVar6 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar6 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar18 + 8);
          LOCK();
          uVar6 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar6 >> 0x1e & 1) == 0) {
            bVar15 = *(byte *)(lVar18 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar18;
            plVar14 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            if ((bVar15 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar14;
                LOCK();
                bVar24 = plVar14 != DAT_14ca843c0;
                plVar11 = plVar10;
                if (bVar24) {
                  plVar14 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar24);
            }
            else {
              do {
                *plVar10 = (longlong)plVar11;
                LOCK();
                bVar24 = plVar11 != DAT_14ca843c8;
                plVar14 = plVar10;
                if (bVar24) {
                  plVar11 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar24);
            }
          }
        }
      }
      uVar5 = (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)(param_3 + 0x3090));
      uVar4 = local_238;
      puVar21 = *(undefined8 **)(local_238 + 0x98);
      if (*(undefined8 **)(local_238 + 0x98) == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)(uVar9 + 0x18);
      }
      *puVar21 = uStack_1c0;
      *(undefined2 *)((longlong)puVar21 + 0xc) = uVar5;
      *(undefined4 *)(puVar21 + 1) = local_1b8;
      uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
      puVar16 = (undefined *)0x0;
      if (local_208 != 0) {
        puVar16 = puStack_200;
      }
      uVar7 = local_1f8;
      if (puVar16 == (undefined *)0x0) {
        uVar7 = 0;
        uVar5 = 0;
        puVar16 = &DAT_14caf6f28;
      }
      puVar21 = (undefined8 *)(uVar9 + 0x18);
      if (*(undefined8 **)(uVar4 + 0x98) != (undefined8 *)0x0) {
        puVar21 = *(undefined8 **)(uVar4 + 0x98);
      }
      puVar21[2] = puVar16;
      *(undefined2 *)((longlong)puVar21 + 0x1c) = uVar5;
      *(undefined4 *)(puVar21 + 3) = uVar7;
      *(undefined8 *)(uVar4 + 0x148) = uStack_1e0;
      *(undefined4 *)(uVar4 + 0x150) = local_1d8;
      *(int *)(uVar4 + 0x154) = local_80;
      iVar17 = (int)param_6[1];
      uVar6 = *(uint *)(param_6 + 2);
      iVar3 = (int)(uVar6 + 0x44) / 0x44;
      *(uint *)(param_6 + 2) = uVar6 + 1;
      uVar22 = uStack_1e0;
      uVar7 = local_1d8;
      if (iVar17 < iVar3) {
        local_228 = uStack_1e0;
        local_22c = local_1d8;
        local_238 = (ulonglong)uVar6;
        do {
          local_230 = iVar17;
          lVar13 = FUN_14001cc68(0x3fc0,0x10);
          lVar18 = 0;
          do {
            *(undefined8 *)(lVar13 + 0xa8 + lVar18) = 0;
            puVar21 = (undefined8 *)(lVar13 + 0xb8 + lVar18);
            *puVar21 = 0;
            puVar21[1] = 0;
            *(undefined8 *)(lVar13 + 200 + lVar18) = 0;
            *(undefined8 *)(lVar13 + 0xd0 + lVar18) = 0xffffffff;
            *(undefined8 *)(lVar13 + 0xd8 + lVar18) = 0xff0000ffffffff;
            *(undefined1 *)(lVar13 + 0xe0 + lVar18) = 0;
            *(undefined4 *)(lVar13 + 0xe4 + lVar18) = 0x40c00f07;
            pbVar2 = (byte *)(lVar13 + 0xe8 + lVar18);
            *pbVar2 = *pbVar2 & 0xfc;
            *(undefined1 **)(lVar13 + 0xb0 + lVar18) = &DAT_100000001;
            FUN_14470b9e0(lVar13 + lVar18,1);
            lVar18 = lVar18 + 0xf0;
          } while (lVar18 != 0x3fc0);
          iVar17 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar17 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar17 + 1U) {
            FUN_14002baf6(param_6,iVar17);
          }
          *(longlong *)(*param_6 + (longlong)iVar17 * 8) = lVar13;
          iVar17 = local_230 + 1;
          uVar6 = (uint)local_238;
          uVar22 = local_228;
          uVar7 = local_22c;
        } while (iVar17 != iVar3);
      }
      lVar13 = *(longlong *)(*param_6 + (longlong)((int)uVar6 / 0x44) * 8);
      lVar18 = (ulonglong)(uint)((int)uVar6 % 0x44) * 0xf0;
      puVar21 = (undefined8 *)(lVar13 + lVar18);
      puVar12 = *(undefined8 **)(lVar13 + 0xa8 + lVar18);
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = puVar21;
      }
      puVar12[3] = uVar22;
      *(undefined4 *)(puVar12 + 0xb) = uVar7;
      *(longlong *)(lVar13 + 0xb8 + lVar18) = local_220;
      *(undefined8 *)(lVar13 + 200 + lVar18) = 0;
      puVar23 = (undefined8 *)(param_2 + 0x308);
      if (*(char *)(param_1[5] + 0xbc) != '\0') {
        puVar23 = (undefined8 *)(param_2 + 0x250);
      }
      *puVar12 = *puVar23;
      *(int *)((longlong)puVar12 + 0x5c) = local_80;
      *(undefined4 *)(puVar12 + 0xd) = 0;
      *(int *)((longlong)puVar12 + 0x6c) = *(int *)(param_1[5] + 0xdc) + -1;
      uVar6 = *(uint *)(lVar13 + 0xe4 + lVar18);
      uVar19 = (*(byte *)(param_2 + 0x6b) & 1) << 6;
      *(uint *)(lVar13 + 0xe4 + lVar18) = uVar6 & 0xffffffbf | uVar19;
      uVar20 = (*(byte *)(param_2 + 0x2b0) & 1) << 8;
      *(uint *)(lVar13 + 0xe4 + lVar18) = uVar6 & 0xfffffebf | uVar19 | uVar20;
      if (((*(byte *)(param_2 + 0x6c) & 0x20) != 0) && ((longlong)*(int *)(param_2 + 0xf0) != 0)) {
        uVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_2 + 0xe8) + uVar9) == *(longlong *)(param_3 + 0x4c0)
             ) {
            if ((int)(~uVar9 >> 3) != 0) {
              bVar15 = *(byte *)(param_2 + 0x6d) >> 3;
              goto LAB_1435f754d;
            }
            break;
          }
          uVar9 = uVar9 + 8;
        } while ((longlong)*(int *)(param_2 + 0xf0) * 8 != uVar9);
      }
      bVar15 = *(byte *)(param_2 + 0x6d);
LAB_1435f754d:
      uVar6 = uVar6 & 0xfff1febf | uVar19 | uVar20 | (bVar15 & 7) << 0x11;
      *(uint *)((longlong)puVar21 + 0xe4) = uVar6;
      iVar17 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar17 != 0x40000002) && (iVar17 == 1)) && (DAT_14c86a9f8 != '\0')) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        uVar6 = *(uint *)((longlong)puVar21 + 0xe4);
      }
      lVar13 = param_1[3];
      puVar21[0x18] = lVar13;
      *(uint *)((longlong)puVar21 + 0xe4) = uVar6 & 0xffee3fff | 0x104000;
      *(uint *)((longlong)puVar21 + 0xe4) =
           uVar6 & 0xffce3fff | 0x104000 | (uint)((*(byte *)(param_2 + 0x6c) & 6) != 0) << 0x15;
      if (lVar13 != 0) {
        FUN_1436a14f8(param_6,param_5,puVar21);
      }
      plVar14 = param_6 + 10;
      if ((longlong *)param_6[0xc] != (longlong *)0x0) {
        plVar14 = (longlong *)param_6[0xc];
      }
      local_278 = local_278 & 0xffffff00;
      (**(code **)(*param_1 + 0x60))(param_1,param_2,plVar14[param_5],param_3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435f776e FUN_1435f776e body=228 status=ok
// SIG undefined FUN_1435f776e(void)

void FUN_1435f776e(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short sVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar9 + 0xc) < 1) {
    iVar2 = 0;
  }
  else {
    lVar10 = 0;
    iVar2 = 0;
    sVar12 = 0;
    iVar11 = 0;
    psVar7 = *(short **)(param_2 + 0x120);
    do {
      lVar3 = (longlong)*(int *)(lVar9 + 0x10) *
              (ulonglong)*(ushort *)(*(longlong *)(lVar9 + 0x30) + lVar10 * 2) +
              *(longlong *)(lVar9 + 0x28);
      uVar5 = *(uint *)(*(int *)(lVar9 + 0xe8) + lVar3) & 0xf0000000;
      psVar4 = psVar7;
      if (((uVar5 == 0x40000000) || (uVar5 == 0x10000000)) &&
         (iVar1 = *(int *)(lVar3 + 8 + (longlong)*(int *)(lVar9 + 0xe8)), iVar1 != 0)) {
        if (iVar11 == 0) {
          psVar4 = psVar7 + 2;
          sVar13 = sVar12 + 1;
          sVar8 = sVar12;
        }
        else {
          psVar7[2] = sVar12;
          psVar4 = psVar7 + 4;
          psVar7[3] = sVar12 + 1;
          iVar2 = iVar2 + 4;
          sVar13 = sVar12;
          sVar8 = sVar12 + -1;
        }
        *psVar7 = sVar8;
        psVar7[1] = sVar13;
        sVar12 = sVar12 + 2;
        iVar6 = iVar1;
        if (0 < iVar1) {
          do {
            *psVar4 = sVar12;
            sVar12 = sVar12 + 1;
            psVar4 = psVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar2 = iVar2 + iVar1;
        }
        iVar11 = iVar11 + 1;
        lVar9 = *(longlong *)(param_1 + 0x28);
      }
      lVar10 = lVar10 + 1;
      psVar7 = psVar4;
    } while (lVar10 < *(int *)(lVar9 + 0xc));
  }
  *(int *)(param_2 + 0x128) = iVar2;
  return;
}



// FUNCTION 1435f7852 FUN_1435f7852 body=4350 status=ok
// SIG undefined FUN_1435f7852(void)

undefined8 FUN_1435f7852(longlong param_1,longlong param_2)

{
  uint *puVar1;
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
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
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
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  float *pfVar35;
  float *pfVar36;
  uint uVar37;
  uint *puVar38;
  int iVar39;
  double *pdVar40;
  double *pdVar41;
  longlong lVar42;
  byte bVar43;
  uint *puVar44;
  double *pdVar45;
  longlong lVar46;
  float *pfVar47;
  longlong lVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  double local_218;
  double local_210;
  double local_208;
  double dStack_120;
  double dStack_100;
  
  pfVar35 = *(float **)(param_2 + 0x130);
  iVar39 = *(int *)(param_1 + 0x54);
  if (0 < iVar39) {
    lVar17 = *(longlong *)(param_2 + 0x100);
    dVar34 = *(double *)(lVar17 + 0xa90);
    dVar21 = *(double *)(lVar17 + 0xa50) * 0.0 + *(double *)(lVar17 + 0xa30) * 0.0 +
             *(double *)(lVar17 + 0xa70) + dVar34 * 0.0;
    dVar23 = *(double *)(lVar17 + 0xa58) * 0.0 + *(double *)(lVar17 + 0xa38) * 0.0 +
             *(double *)(lVar17 + 0xa78) + *(double *)(lVar17 + 0xa98) * 0.0;
    dVar14 = *(double *)(lVar17 + 0xaa0);
    dVar56 = *(double *)(lVar17 + 0xa40) * 0.0 + *(double *)(lVar17 + 0xa60) * 0.0 +
             *(double *)(lVar17 + 0xa80) + dVar14 * 0.0;
    dVar15 = *(double *)(lVar17 + 0xa98);
    bVar43 = pfVar35 != (float *)0x0 & *(byte *)(param_1 + 0x20);
    lVar17 = *(longlong *)(param_1 + 0x70);
    dVar20 = (double)*(float *)(param_1 + 0xdc) * 65536.0;
    dVar22 = (double)*(float *)(param_1 + 0xd8) * 65536.0;
    dVar57 = (double)*(float *)(param_1 + 0xd4) * 65536.0;
    pfVar36 = *(float **)(param_2 + 0x110);
    lVar46 = 0;
    do {
      pdVar40 = (double *)
                ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x78) + lVar46 * 2) *
                 (longlong)*(int *)(param_1 + 0x58) + lVar17);
      uVar16 = *(uint *)((longlong)*(int *)(param_1 + 0x130) + (longlong)pdVar40);
      uVar37 = uVar16 & 0xf0000000;
      if (((uVar37 == 0x40000000) || (uVar37 == 0x10000000)) && ((~uVar16 & 0x3fff) != 0)) {
        puVar44 = (uint *)((longlong)*(int *)(param_1 + 0x130) + (longlong)pdVar40);
        if (bVar43 == 0) {
          lVar48 = 0;
          bVar18 = false;
        }
        else {
          bVar18 = 0 < *(int *)(param_1 + 0xe8);
          lVar48 = 0x10;
        }
        if ((*(byte *)(param_1 + 0x148) & 3) == 0) {
          dVar29 = pdVar40[5] - dVar14;
          dVar28 = pdVar40[4] - dVar15;
          dVar58 = pdVar40[3] - dVar34;
          dVar66 = dVar29 * dVar29 + dVar58 * dVar58 + dVar28 * dVar28;
          if (9.99999993922529e-09 < dVar66) {
            dVar66 = 1.0 / SQRT(dVar66);
            dVar58 = dVar58 * dVar66;
            dVar28 = dVar28 * dVar66;
            dVar29 = dVar29 * dVar66;
          }
          dVar67 = (double)(float)puVar44[0xc];
          dVar59 = (double)(float)puVar44[0xb];
          dVar66 = (double)(float)puVar44[10];
          dVar27 = dVar67 * dVar67 + dVar66 * dVar66 + dVar59 * dVar59;
          if (9.99999993922529e-09 < dVar27) {
            dVar27 = 1.0 / SQRT(dVar27);
            dVar66 = dVar66 * dVar27;
            dVar59 = dVar59 * dVar27;
            dVar67 = dVar67 * dVar27;
          }
          dVar27 = dVar66 * dVar28 - dVar58 * dVar59;
          dVar58 = dVar67 * dVar58 - dVar29 * dVar66;
          dVar67 = dVar59 * dVar29 - dVar28 * dVar67;
          dVar66 = dVar56;
          dVar29 = dVar23;
          dVar28 = dVar21;
          if ((9.999999747378752e-05 < ABS(dVar58) || 9.999999747378752e-05 < ABS(dVar67)) ||
              9.999999747378752e-05 < ABS(dVar27)) {
            dVar66 = dVar27;
            dVar29 = dVar58;
            dVar28 = dVar67;
          }
          dVar58 = dVar66 * dVar66 + dVar28 * dVar28 + dVar29 * dVar29;
          if (9.99999993922529e-09 < dVar58) {
            dVar58 = 1.0 / SQRT(dVar58);
            dVar28 = dVar28 * dVar58;
            dVar29 = dVar29 * dVar58;
            dVar66 = dVar66 * dVar58;
          }
        }
        else {
          dVar66 = (double)(float)puVar44[0xf];
          dVar29 = (double)(float)puVar44[0xe];
          dVar28 = (double)(float)puVar44[0xd];
        }
        if (puVar44 != (uint *)0x0) {
          fVar51 = 1.0 / ((float)(int)puVar44[2] * 0.5);
          local_208 = 0.0;
          fVar72 = 0.0;
          pfVar47 = (float *)0x0;
          local_210 = 1.0;
          local_218 = 0.0;
          puVar38 = (uint *)0x0;
          pdVar45 = (double *)0x0;
          do {
            dVar27 = dVar66;
            dVar67 = dVar29;
            dVar58 = dVar28;
            pdVar41 = pdVar40;
            fVar50 = *(float *)(param_1 + 0x80);
            fVar49 = *(float *)(pdVar41 + 0xc) * fVar50;
            uVar16 = puVar44[7];
            if ((int)uVar16 < 2) {
              if (bVar18) {
                pfVar47 = (float *)((longlong)*(int *)(param_1 + 0xe8) + (longlong)pdVar41);
              }
              fVar50 = fVar72;
              if ((*(byte *)(param_1 + 0x34) & 0x20) != 0) {
                fVar50 = (float)puVar44[5];
              }
              dVar28 = pdVar41[5];
              dVar29 = pdVar41[4];
              dVar66 = (double)fVar49;
              *pfVar36 = (float)((pdVar41[3] - dVar57) + dVar66 * dVar58);
              pfVar36[1] = (float)((dVar29 - dVar22) + dVar67 * dVar66);
              pfVar36[2] = (float)((dVar28 - dVar20) + dVar27 * dVar66);
              dVar28 = pdVar41[2];
              dVar29 = pdVar41[1];
              pfVar36[4] = (float)(*pdVar41 - dVar57);
              pfVar36[5] = (float)(dVar29 - dVar22);
              pfVar36[6] = (float)(dVar28 - dVar20);
              pfVar36[7] = 0.0;
              pfVar36[8] = fVar49;
              pfVar36[9] = fVar49;
              pfVar36[0x10] = fVar72;
              pfVar36[0x11] = 0.0;
              pfVar36[0x12] = fVar50;
              pfVar36[0x13] = 0.0;
              pfVar36[10] = *(float *)((longlong)pdVar41 + 0x3c);
              dVar28 = pdVar41[0xf];
              *(double *)(pfVar36 + 0xc) = pdVar41[0xe];
              *(double *)(pfVar36 + 0xe) = dVar28;
              if (bVar43 != 0) {
                if (pfVar47 == (float *)0x0) {
                  *(undefined1 **)pfVar35 = &DAT_3f8000003f800000;
                  pfVar35[2] = 1.0;
                  fVar64 = 1.0;
                }
                else {
                  *pfVar35 = *pfVar47;
                  pfVar35[1] = pfVar47[1];
                  pfVar35[2] = pfVar47[2];
                  fVar64 = pfVar47[3];
                }
                pfVar35[3] = fVar64;
                pfVar35 = (float *)((longlong)pfVar35 + lVar48);
              }
              dVar28 = pdVar41[5];
              dVar29 = pdVar41[4];
              pfVar36[0x14] = (float)((pdVar41[3] - dVar57) - dVar66 * dVar58);
              pfVar36[0x15] = (float)((dVar29 - dVar22) - dVar67 * dVar66);
              pfVar36[0x16] = (float)((dVar28 - dVar20) - dVar27 * dVar66);
              dVar28 = pdVar41[2];
              dVar29 = pdVar41[1];
              pfVar36[0x18] = (float)(*pdVar41 - dVar57);
              pfVar36[0x19] = (float)(dVar29 - dVar22);
              pfVar36[0x1a] = (float)(dVar28 - dVar20);
              pfVar36[0x1b] = 0.0;
              pfVar36[0x1c] = fVar49;
              pfVar36[0x1d] = fVar49;
              pfVar36[0x24] = fVar72;
              pfVar36[0x25] = 1.0;
              pfVar36[0x26] = fVar50;
              pfVar36[0x27] = 1.0;
              pfVar36[0x1e] = *(float *)((longlong)pdVar41 + 0x3c);
              fVar50 = *(float *)((longlong)pdVar41 + 0x74);
              fVar49 = *(float *)(pdVar41 + 0xf);
              fVar64 = *(float *)((longlong)pdVar41 + 0x7c);
              pfVar36[0x20] = *(float *)(pdVar41 + 0xe);
              pfVar36[0x21] = fVar50;
              pfVar36[0x22] = fVar49;
              pfVar36[0x23] = fVar64;
              if (bVar43 != 0) {
                if (pfVar47 == (float *)0x0) {
                  *(undefined1 **)pfVar35 = &DAT_3f8000003f800000;
                  pfVar35[2] = 1.0;
                  fVar50 = 1.0;
                }
                else {
                  *pfVar35 = *pfVar47;
                  pfVar35[1] = pfVar47[1];
                  pfVar35[2] = pfVar47[2];
                  fVar50 = pfVar47[3];
                }
                pfVar35[3] = fVar50;
                pfVar35 = (float *)((longlong)pfVar35 + lVar48);
              }
              pfVar36 = pfVar36 + 0x28;
              fVar72 = fVar72 + fVar51;
            }
            else {
              fVar64 = *(float *)(pdVar45 + 0xc);
              fVar65 = 0.0;
              fVar62 = 0.0;
              fVar69 = 0.0;
              fVar75 = 1.0;
              fVar54 = 0.0;
              fVar79 = 0.0;
              fVar74 = 0.0;
              fVar78 = 1.0;
              if (bVar18) {
                lVar42 = (longlong)*(int *)(param_1 + 0xe8);
                fVar54 = *(float *)((longlong)pdVar41 + lVar42);
                fVar79 = *(float *)((longlong)pdVar41 + lVar42 + 4);
                fVar74 = *(float *)((longlong)pdVar41 + lVar42 + 8);
                fVar78 = *(float *)((longlong)pdVar41 + lVar42 + 0xc);
                fVar65 = *(float *)((longlong)pdVar45 + lVar42);
                fVar62 = *(float *)((longlong)pdVar45 + lVar42 + 4);
                fVar69 = *(float *)((longlong)pdVar45 + lVar42 + 8);
                fVar75 = *(float *)((longlong)pdVar45 + lVar42 + 0xc);
              }
              dVar66 = pdVar41[3];
              dVar59 = pdVar41[4];
              dVar28 = pdVar41[5];
              fVar2 = (float)puVar44[0xc];
              fVar3 = (float)puVar44[10];
              auVar19._8_4_ = SUB84((double)(float)puVar44[0xb],0);
              auVar19._0_8_ = (double)fVar3;
              auVar19._12_4_ = (int)((ulonglong)(double)(float)puVar44[0xb] >> 0x20);
              fVar4 = *(float *)(pdVar41 + 0xe);
              fVar5 = *(float *)((longlong)pdVar41 + 0x74);
              fVar6 = *(float *)(pdVar41 + 0xf);
              fVar7 = *(float *)((longlong)pdVar41 + 0x7c);
              dVar26 = pdVar45[3];
              dVar60 = pdVar45[4];
              dVar29 = pdVar45[5];
              fVar8 = (float)puVar38[10];
              auVar33._8_4_ = SUB84((double)(float)puVar38[0xb],0);
              auVar33._0_8_ = (double)fVar8;
              auVar33._12_4_ = (int)((ulonglong)(double)(float)puVar38[0xb] >> 0x20);
              fVar9 = *(float *)(pdVar45 + 0xe);
              fVar10 = *(float *)((longlong)pdVar45 + 0x74);
              fVar11 = *(float *)(pdVar45 + 0xf);
              fVar12 = *(float *)((longlong)pdVar45 + 0x7c);
              uVar37 = uVar16 + 1;
              fVar13 = (float)puVar38[0xc];
              local_238 = 1.0;
              local_23c = 1.0;
              local_240 = 1.0;
              local_244 = 1.0;
              do {
                fVar70 = (float)(int)(uVar37 - 2) * (1.0 / (float)(int)uVar16);
                fVar63 = fVar70 * fVar70;
                fVar52 = fVar70 * fVar63;
                fVar55 = ((fVar52 + fVar52) - fVar63 * 3.0) + 1.0;
                if (bVar18) {
                  local_238 = (fVar75 - fVar78) * fVar70 + fVar78;
                  local_23c = (fVar69 - fVar74) * fVar70 + fVar74;
                  local_240 = (fVar62 - fVar79) * fVar70 + fVar79;
                  local_244 = (fVar65 - fVar54) * fVar70 + fVar54;
                }
                fVar76 = (fVar52 - (fVar63 + fVar63)) + fVar70;
                fVar53 = fVar52 - fVar63;
                fVar52 = fVar63 * 3.0 - (fVar52 + fVar52);
                dStack_100 = auVar19._8_8_;
                dStack_120 = auVar33._8_8_;
                dVar68 = (double)fVar52 * dVar26 + (double)fVar53 * (double)fVar8 +
                         (double)fVar76 * (double)fVar3 + (double)fVar55 * dVar66;
                dVar61 = (double)fVar52 * dVar60 + (double)fVar53 * dStack_120 +
                         (double)fVar76 * dStack_100 + (double)fVar55 * dVar59;
                dVar32 = (double)fVar53 * (double)fVar13 + (double)fVar52 * dVar29 +
                         (double)fVar55 * dVar28 + (double)fVar76 * (double)fVar2;
                dVar30 = (double)fVar70;
                fVar77 = (fVar12 - fVar7) * fVar70 + fVar7;
                fVar63 = (fVar11 - fVar6) * fVar70 + fVar6;
                fVar53 = (fVar10 - fVar5) * fVar70 + fVar5;
                fVar76 = (fVar9 - fVar4) * fVar70 + fVar4;
                fVar55 = fVar70 * (fVar50 * fVar64 - fVar49) + fVar49;
                fVar52 = fVar72;
                if ((*(byte *)(param_1 + 0x34) & 0x20) != 0) {
                  fVar52 = fVar70 * ((float)puVar38[5] - (float)puVar44[5]) + (float)puVar44[5];
                }
                dVar25 = (double)fVar55;
                dVar24 = ((local_210 - dVar27) * dVar30 + dVar27) * dVar25;
                dVar31 = ((local_208 - dVar67) * dVar30 + dVar67) * dVar25;
                dVar25 = (dVar30 * (local_218 - dVar58) + dVar58) * dVar25;
                fVar71 = (float)((dVar24 + dVar32) - dVar20);
                fVar70 = (float)((dVar61 + dVar31) - dVar22);
                fVar73 = (float)((dVar68 + dVar25) - dVar57);
                *pfVar36 = fVar73;
                pfVar36[1] = fVar70;
                pfVar36[2] = fVar71;
                pfVar36[4] = fVar73;
                pfVar36[5] = fVar70;
                pfVar36[6] = fVar71;
                pfVar36[7] = 0.0;
                pfVar36[8] = fVar55;
                pfVar36[9] = fVar55;
                pfVar36[0x10] = fVar72;
                pfVar36[0x11] = 0.0;
                pfVar36[0x12] = fVar52;
                pfVar36[0x13] = 0.0;
                pfVar36[10] = *(float *)((longlong)pdVar41 + 0x3c);
                pfVar36[0xc] = fVar76;
                pfVar36[0xd] = fVar53;
                pfVar36[0xe] = fVar63;
                pfVar36[0xf] = fVar77;
                if (bVar43 != 0) {
                  *pfVar35 = local_244;
                  pfVar35[1] = local_240;
                  pfVar35[2] = local_23c;
                  pfVar35[3] = local_238;
                  pfVar35 = (float *)((longlong)pfVar35 + lVar48);
                }
                fVar71 = (float)((dVar32 - dVar24) - dVar20);
                fVar73 = (float)((dVar61 - dVar31) - dVar22);
                fVar70 = (float)((dVar68 - dVar25) - dVar57);
                pfVar36[0x14] = fVar70;
                pfVar36[0x15] = fVar73;
                pfVar36[0x16] = fVar71;
                pfVar36[0x18] = fVar70;
                pfVar36[0x19] = fVar73;
                pfVar36[0x1a] = fVar71;
                pfVar36[0x1b] = 0.0;
                pfVar36[0x1c] = fVar55;
                pfVar36[0x1d] = fVar55;
                pfVar36[0x24] = fVar72;
                pfVar36[0x25] = 1.0;
                pfVar36[0x26] = fVar52;
                pfVar36[0x27] = 1.0;
                pfVar36[0x1e] = *(float *)((longlong)pdVar41 + 0x3c);
                pfVar36[0x20] = fVar76;
                pfVar36[0x21] = fVar53;
                pfVar36[0x22] = fVar63;
                pfVar36[0x23] = fVar77;
                if (bVar43 != 0) {
                  *pfVar35 = local_244;
                  pfVar35[1] = local_240;
                  pfVar35[2] = local_23c;
                  pfVar35[3] = local_238;
                  pfVar35 = (float *)((longlong)pfVar35 + lVar48);
                }
                pfVar36 = pfVar36 + 0x28;
                fVar72 = fVar72 + fVar51;
                uVar37 = uVar37 - 1;
              } while (1 < uVar37);
            }
            if (((ulonglong)*puVar44 & 0x3fff) == 0x3fff) break;
            pdVar40 = (double *)
                      ((longlong)*(int *)(param_1 + 0x58) * ((ulonglong)*puVar44 & 0x3fff) + lVar17)
            ;
            lVar42 = (longlong)*(int *)(param_1 + 0x130);
            puVar1 = (uint *)((longlong)pdVar40 + lVar42);
            if ((*(byte *)(param_1 + 0x148) & 3) == 0) {
              dVar28 = pdVar40[5] - dVar14;
              dVar29 = pdVar40[4] - dVar15;
              dVar66 = pdVar40[3] - dVar34;
              dVar59 = dVar28 * dVar28 + dVar66 * dVar66 + dVar29 * dVar29;
              if (9.99999993922529e-09 < dVar59) {
                dVar59 = 1.0 / SQRT(dVar59);
                dVar66 = dVar66 * dVar59;
                dVar29 = dVar29 * dVar59;
                dVar28 = dVar28 * dVar59;
              }
              dVar68 = (double)(float)puVar1[0xc];
              dVar59 = (double)(float)puVar1[0xb];
              dVar60 = (double)(float)puVar1[10];
              dVar26 = dVar68 * dVar68 + dVar60 * dVar60 + dVar59 * dVar59;
              if (9.99999993922529e-09 < dVar26) {
                dVar26 = 1.0 / SQRT(dVar26);
                dVar60 = dVar60 * dVar26;
                dVar59 = dVar59 * dVar26;
                dVar68 = dVar68 * dVar26;
              }
              dVar61 = dVar60 * dVar29 - dVar66 * dVar59;
              dVar26 = dVar68 * dVar66 - dVar28 * dVar60;
              dVar59 = dVar59 * dVar28 - dVar29 * dVar68;
              dVar29 = dVar23;
              dVar28 = dVar21;
              dVar66 = dVar56;
              if ((9.999999747378752e-05 < ABS(dVar26) || 9.999999747378752e-05 < ABS(dVar59)) ||
                  9.999999747378752e-05 < ABS(dVar61)) {
                dVar29 = dVar26;
                dVar28 = dVar59;
                dVar66 = dVar61;
              }
              dVar59 = dVar66 * dVar66 + dVar28 * dVar28 + dVar29 * dVar29;
              if (9.99999993922529e-09 < dVar59) {
                dVar59 = 1.0 / SQRT(dVar59);
                dVar28 = dVar28 * dVar59;
                dVar29 = dVar29 * dVar59;
                dVar66 = dVar66 * dVar59;
              }
            }
            else {
              dVar66 = (double)*(float *)(lVar42 + 0x3c + (longlong)pdVar40);
              dVar29 = (double)*(float *)(lVar42 + 0x38 + (longlong)pdVar40);
              dVar28 = (double)*(float *)(lVar42 + 0x34 + (longlong)pdVar40);
            }
            puVar38 = puVar44;
            puVar44 = puVar1;
            pdVar45 = pdVar41;
            local_218 = dVar58;
            local_210 = dVar27;
            local_208 = dVar67;
          } while (puVar1 != (uint *)0x0);
          iVar39 = *(int *)(param_1 + 0x54);
        }
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 < iVar39);
  }
  return 0;
}



// FUNCTION 1435f8950 FUN_1435f8950 body=69 status=ok
// SIG undefined FUN_1435f8950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435f8950(void)

{
  _DAT_14caf5e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435f8992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e28,1);
  return;
}



// FUNCTION 1435f8996 FUN_1435f8996 body=2295 status=ok
// SIG undefined FUN_1435f8996(void)

undefined8 FUN_1435f8996(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  double *pdVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined4 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_208 [32];
  double *local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float local_17c;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148 [24];
  longlong local_130;
  longlong local_128;
  double *local_120;
  uint *puStack_118;
  double *local_110;
  uint *puStack_108;
  double *local_100;
  uint *local_f8;
  double *local_f0;
  uint *puStack_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puVar18 = *(undefined4 **)(param_2 + 0x130);
  iVar7 = *(int *)(param_1 + 0x54);
  if (0 < iVar7) {
    bVar10 = puVar18 != (undefined4 *)0x0 & *(byte *)(param_1 + 0x20);
    fVar20 = 1.0 / ((float)*(int *)(param_2 + 0x108) * 0.5);
    local_1b8 = param_1 + 0x48;
    lVar12 = *(longlong *)(param_1 + 0x70);
    dVar4 = (double)*(float *)(param_1 + 0xdc) * 65536.0;
    dVar5 = (double)*(float *)(param_1 + 0xd8) * 65536.0;
    dVar6 = (double)*(float *)(param_1 + 0xd4) * 65536.0;
    pfVar15 = *(float **)(param_2 + 0x110);
    lVar17 = 0;
    local_1c0 = lVar12;
    do {
      pdVar9 = (double *)
               ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x78) + lVar17 * 2) *
                (longlong)*(int *)(param_1 + 0x58) + lVar12);
      lVar13 = (longlong)*(int *)(param_1 + 0x130);
      uVar8 = *(uint *)(lVar13 + (longlong)pdVar9) & 0xf0000000;
      if (((uVar8 == 0x40000000) || (uVar8 == 0x10000000)) &&
         (uVar14 = (longlong)(int)*(uint *)(lVar13 + (longlong)pdVar9) & 0x3fff, uVar14 != 0x3fff))
      {
        local_f8 = (uint *)((longlong)pdVar9 + lVar13);
        local_130 = local_1b8;
        local_128 = *(longlong *)(param_1 + 0x70);
        local_110 = (double *)0x0;
        puStack_108 = (uint *)0x0;
        local_120 = (double *)0x0;
        puStack_118 = (uint *)0x0;
        local_f0 = (double *)(uVar14 * (longlong)*(int *)(param_1 + 0x58) + local_128);
        puStack_e8 = (uint *)(lVar13 + (longlong)local_f0);
        if (bVar10 == 0) {
          lVar13 = 0;
          bVar3 = false;
        }
        else {
          bVar3 = 0 < *(int *)(param_1 + 0xe8);
          lVar13 = 0x10;
        }
        local_100 = pdVar9;
        if (pdVar9 != (double *)0x0) {
          puVar16 = (undefined8 *)0x0;
          if (bVar3) {
            puVar16 = &local_1a8;
          }
          fVar21 = 0.0;
          local_1b0 = lVar17;
          while( true ) {
            uVar8 = local_f8[7];
            if (((int)uVar8 < 2) || (local_110 == (double *)0x0)) {
              local_1a8 = &DAT_3f8000003f800000;
              uStack_1a0 = &DAT_3f8000003f800000;
              local_1d0 = &local_190;
              local_1d8 = &local_180;
              local_1e0 = &local_17c;
              local_1e8 = &local_178;
              local_1c8 = puVar16;
              FUN_147c3c0cc(&local_130,0,local_148,&local_160);
              fVar19 = fVar21;
              if ((*(byte *)(param_1 + 0x34) & 0x20) != 0) {
                fVar19 = local_17c;
              }
              *pfVar15 = (float)(local_160 - dVar6);
              pfVar15[1] = (float)(local_158 - dVar5);
              pfVar15[2] = (float)(local_150 - dVar4);
              dVar1 = local_100[2];
              dVar2 = local_100[1];
              pfVar15[4] = (float)(*local_100 - dVar6);
              pfVar15[5] = (float)(dVar2 - dVar5);
              pfVar15[6] = (float)(dVar1 - dVar4);
              pfVar15[7] = 0.0;
              pfVar15[8] = local_180;
              pfVar15[9] = local_180;
              pfVar15[0x10] = fVar21;
              pfVar15[0x11] = 0.0;
              pfVar15[0x12] = fVar19;
              pfVar15[0x13] = 0.0;
              pfVar15[10] = *(float *)((longlong)local_100 + 0x3c);
              *(ulonglong *)(pfVar15 + 0xc) = CONCAT44(fStack_18c,local_190);
              *(ulonglong *)(pfVar15 + 0xe) = CONCAT44(fStack_184,fStack_188);
              if (bVar10 != 0) {
                *puVar18 = (undefined4)local_1a8;
                puVar18[1] = local_1a8._4_4_;
                puVar18[2] = (undefined4)uStack_1a0;
                puVar18[3] = uStack_1a0._4_4_;
                puVar18 = (undefined4 *)((longlong)puVar18 + lVar13);
              }
              pfVar15[0x14] = (float)(local_178 - dVar6);
              pfVar15[0x15] = (float)(local_170 - dVar5);
              pfVar15[0x16] = (float)(local_168 - dVar4);
              dVar1 = local_100[2];
              dVar2 = local_100[1];
              pfVar15[0x18] = (float)(*local_100 - dVar6);
              pfVar15[0x19] = (float)(dVar2 - dVar5);
              pfVar15[0x1a] = (float)(dVar1 - dVar4);
              pfVar15[0x1b] = 0.0;
              pfVar15[0x1c] = local_180;
              pfVar15[0x1d] = local_180;
              pfVar15[0x24] = fVar21;
              pfVar15[0x25] = 1.0;
              pfVar15[0x26] = fVar19;
              pfVar15[0x27] = 1.0;
              pfVar15[0x1e] = *(float *)((longlong)local_100 + 0x3c);
              *(ulonglong *)(pfVar15 + 0x20) = CONCAT44(fStack_18c,local_190);
              *(ulonglong *)(pfVar15 + 0x22) = CONCAT44(fStack_184,fStack_188);
              if (bVar10 != 0) {
                *puVar18 = (undefined4)local_1a8;
                puVar18[1] = local_1a8._4_4_;
                puVar18[2] = (undefined4)uStack_1a0;
                puVar18[3] = uStack_1a0._4_4_;
                puVar18 = (undefined4 *)((longlong)puVar18 + lVar13);
              }
              pfVar15 = pfVar15 + 0x28;
              fVar21 = fVar21 + fVar20;
            }
            else {
              local_1a8 = &DAT_3f8000003f800000;
              uStack_1a0 = &DAT_3f8000003f800000;
              uVar11 = uVar8 + 1;
              do {
                local_1d0 = &local_190;
                local_1d8 = &local_180;
                local_1e0 = &local_17c;
                local_1e8 = &local_178;
                local_1c8 = puVar16;
                FUN_147c3c0cc(&local_130,(float)(int)(uVar11 - 2) * (1.0 / (float)(int)uVar8),
                              local_148,&local_160);
                fVar19 = fVar21;
                if ((*(byte *)(param_1 + 0x34) & 0x20) != 0) {
                  fVar19 = local_17c;
                }
                *pfVar15 = (float)(local_160 - dVar6);
                pfVar15[1] = (float)(local_158 - dVar5);
                pfVar15[2] = (float)(local_150 - dVar4);
                pfVar15[4] = (float)(local_160 - dVar6);
                pfVar15[5] = (float)(local_158 - dVar5);
                pfVar15[6] = (float)(local_150 - dVar4);
                pfVar15[7] = 0.0;
                pfVar15[8] = local_180;
                pfVar15[9] = local_180;
                pfVar15[0x10] = fVar21;
                pfVar15[0x11] = 0.0;
                pfVar15[0x12] = fVar19;
                pfVar15[0x13] = 0.0;
                pfVar15[10] = *(float *)((longlong)local_100 + 0x3c);
                *(ulonglong *)(pfVar15 + 0xc) = CONCAT44(fStack_18c,local_190);
                *(ulonglong *)(pfVar15 + 0xe) = CONCAT44(fStack_184,fStack_188);
                if (bVar10 != 0) {
                  *puVar18 = (undefined4)local_1a8;
                  puVar18[1] = local_1a8._4_4_;
                  puVar18[2] = (undefined4)uStack_1a0;
                  puVar18[3] = uStack_1a0._4_4_;
                  puVar18 = (undefined4 *)((longlong)puVar18 + lVar13);
                }
                pfVar15[0x14] = (float)(local_178 - dVar6);
                pfVar15[0x15] = (float)(local_170 - dVar5);
                pfVar15[0x16] = (float)(local_168 - dVar4);
                pfVar15[0x18] = (float)(local_178 - dVar6);
                pfVar15[0x19] = (float)(local_170 - dVar5);
                pfVar15[0x1a] = (float)(local_168 - dVar4);
                pfVar15[0x1b] = 0.0;
                pfVar15[0x1c] = local_180;
                pfVar15[0x1d] = local_180;
                pfVar15[0x24] = fVar21;
                pfVar15[0x25] = 1.0;
                pfVar15[0x26] = fVar19;
                pfVar15[0x27] = 1.0;
                pfVar15[0x1e] = *(float *)((longlong)local_100 + 0x3c);
                pfVar15[0x20] = local_190;
                pfVar15[0x21] = fStack_18c;
                pfVar15[0x22] = fStack_188;
                pfVar15[0x23] = fStack_184;
                if (bVar10 != 0) {
                  *puVar18 = (undefined4)local_1a8;
                  puVar18[1] = local_1a8._4_4_;
                  puVar18[2] = (undefined4)uStack_1a0;
                  puVar18[3] = uStack_1a0._4_4_;
                  puVar18 = (undefined4 *)((longlong)puVar18 + lVar13);
                }
                pfVar15 = pfVar15 + 0x28;
                fVar21 = fVar21 + fVar20;
                uVar11 = uVar11 - 1;
              } while (1 < uVar11);
            }
            local_120 = local_110;
            puStack_118 = puStack_108;
            local_110 = local_100;
            puStack_108 = local_f8;
            local_100 = local_f0;
            local_f8 = puStack_e8;
            if (local_f0 == (double *)0x0) break;
            if (((ulonglong)*puStack_e8 & 0x3fff) == 0x3fff) {
              local_f0 = (double *)0x0;
              puStack_e8 = (uint *)0x0;
            }
            else {
              local_f0 = (double *)
                         ((longlong)*(int *)(local_130 + 0x10) * ((ulonglong)*puStack_e8 & 0x3fff) +
                         local_128);
              puStack_e8 = (uint *)((longlong)*(int *)(local_130 + 0xe8) + (longlong)local_f0);
            }
          }
          iVar7 = *(int *)(param_1 + 0x54);
          lVar12 = local_1c0;
          lVar17 = local_1b0;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar7);
  }
  if ((local_e0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435f928e FUN_1435f928e body=102 status=ok
// SIG undefined FUN_1435f928e(void)

void FUN_1435f928e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x70))) {
    lVar4 = 0;
    do {
      lVar3 = lVar2 + 8;
      if (*(longlong *)(lVar2 + 0x68) != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x68);
      }
      plVar1 = *(longlong **)(lVar3 + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        lVar2 = *(longlong *)(param_1 + 0x2c8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar2 + 0x70));
  }
  FUN_144725486(param_1 + 0x2f0);
  return;
}



// FUNCTION 1435f92f4 FUN_1435f92f4 body=596 status=ok
// SIG undefined FUN_1435f92f4(void)

void FUN_1435f92f4(longlong param_1,longlong *param_2,longlong param_3,uint param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  LARGE_INTEGER LVar9;
  double _X;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  longlong local_80;
  undefined1 local_78 [16];
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = *(byte *)(param_1 + 0x2b0);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x3d0))();
  local_98 = CONCAT31(local_98._1_3_,(bVar1 & 2) >> 1);
  FUN_147af13d2(local_78,uVar4,0,1);
  lVar8 = *(longlong *)(param_1 + 0x3a0);
  LVar9.QuadPart = -1;
  if (lVar8 != 0) {
    QueryPerformanceCounter(&local_68);
    LVar9 = local_68;
  }
  if ((*(byte *)(param_3 + 0x53) & 8) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x2c8);
    if ((puVar5 != (undefined4 *)0x0) && (0 < (int)puVar5[0x1c])) {
      lVar7 = 0;
      local_88 = LVar9;
      local_80 = lVar8;
      do {
        puVar6 = puVar5 + 2;
        if (*(undefined4 **)(puVar5 + 0x1a) != (undefined4 *)0x0) {
          puVar6 = *(undefined4 **)(puVar5 + 0x1a);
        }
        plVar2 = *(longlong **)(puVar6 + lVar7 * 2);
        if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0xc) & 2) != 0)) {
          *puVar5 = (int)lVar7;
          iVar3 = (int)param_2[1];
          if (0 < iVar3) {
            lVar8 = 0;
            do {
              if ((param_4 >> ((uint)lVar8 & 0x1f) & 1) != 0) {
                local_90 = param_5;
                local_98 = (uint)lVar8;
                (**(code **)(*plVar2 + 0x18))
                          (plVar2,param_1,*(undefined8 *)(*param_2 + lVar8 * 8),param_3);
                iVar3 = (int)param_2[1];
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar3);
          }
        }
        lVar7 = lVar7 + 1;
        puVar5 = *(undefined4 **)(param_1 + 0x2c8);
      } while (lVar7 < (int)puVar5[0x1c]);
      lVar8 = local_80;
      LVar9 = local_88;
      if ((*(byte *)(param_3 + 0x53) & 8) == 0) goto LAB_1435f94ef;
    }
    iVar3 = (int)param_2[1];
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        if (((param_4 >> ((uint)lVar7 & 0x1f) & 1) != 0) &&
           ((~*(byte *)(param_1 + 0x2b0) & 0xc) == 0)) {
          _X = *(double *)(param_1 + 0x140) * *(double *)(param_1 + 0x140) +
               *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x120) +
               *(double *)(param_1 + 0x100) * *(double *)(param_1 + 0x100);
          dVar10 = *(double *)(param_1 + 0x148) * *(double *)(param_1 + 0x148) +
                   *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x128) +
                   *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x108);
          dVar11 = *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x150) +
                   *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x110) +
                   *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x130);
          if (_X <= dVar10) {
            _X = dVar10;
          }
          if (_X <= dVar11) {
            _X = dVar11;
          }
          if (_X < 0.0) {
            sqrt(_X);
          }
          iVar3 = (int)param_2[1];
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar3);
    }
  }
LAB_1435f94ef:
  if (LVar9.QuadPart != -1) {
    QueryPerformanceCounter(&local_68);
    if (lVar8 != 0) {
      *(longlong *)(lVar8 + 0x48) =
           *(longlong *)(lVar8 + 0x48) + (local_68.QuadPart - (longlong)LVar9);
    }
  }
  FUN_147af14b0(local_78);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435f954a FUN_1435f954a body=88 status=ok
// SIG undefined FUN_1435f954a(void)

void FUN_1435f954a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x70))) {
    lVar4 = 0;
    do {
      lVar3 = lVar2 + 8;
      if (*(longlong *)(lVar2 + 0x68) != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x68);
      }
      plVar1 = *(longlong **)(lVar3 + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,param_1);
        lVar2 = *(longlong *)(param_1 + 0x2c8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(lVar2 + 0x70));
  }
  return;
}



// FUNCTION 1435f95a2 FUN_1435f95a2 body=1335 status=ok
// SIG undefined FUN_1435f95a2(void)

void FUN_1435f95a2(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  LARGE_INTEGER LVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  LARGE_INTEGER *local_78;
  LARGE_INTEGER local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1435f95e7;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1435f95f0;
      goto LAB_1435f96a2;
    }
  }
  else {
LAB_1435f95e7:
    if (iVar7 != 0x10) {
LAB_1435f96a2:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_1435f95f0;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1435f95f0;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1435f9806;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_1436004c3);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1435f9806:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_1435f9886;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_1435f9886:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa078c8;
        puVar16[0x15] = param_1;
        puVar16[0x16] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar7;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0].s.LowPart._0_1_ = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0].s.LowPart._0_1_ = 1;
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa07870;
        local_68[0].QuadPart = (LONGLONG)FUN_1436015c2;
        local_40 = param_1;
        local_38 = param_2;
        FUN_14005a792(&DAT_14ca9a440,L"ParticleUpdateDataCommand",&DAT_14caf5fb8);
        if ((code *)local_68[0].QuadPart != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1435f9745;
    }
  }
LAB_1435f95f0:
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x98);
    *(longlong *)(param_1 + 0x3a0) = lVar4;
    if (lVar4 != 0) {
      QueryPerformanceCounter(local_68);
      LVar5 = local_68[0];
      FUN_1435f9aee(param_1,param_2);
      if ((code *)LVar5.QuadPart != (code *)0xffffffffffffffff) {
        QueryPerformanceCounter(local_68);
        *(longlong *)(lVar4 + 0x40) =
             *(longlong *)(lVar4 + 0x40) + (local_68[0].QuadPart - (longlong)LVar5);
        *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + 1;
      }
LAB_1435f9745:
      if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 1435f9aee FUN_1435f9aee body=313 status=ok
// SIG undefined FUN_1435f9aee(void)

void FUN_1435f9aee(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  byte local_48;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_1 + 0x2b0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x3d0))();
  local_48 = (bVar1 & 2) >> 1;
  FUN_147af13d2(local_38,uVar3,0,1);
  lVar5 = *(longlong *)(param_1 + 0x2c8);
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x70)) {
      lVar6 = 0;
      do {
        lVar4 = lVar5 + 8;
        if (*(longlong *)(lVar5 + 0x68) != 0) {
          lVar4 = *(longlong *)(lVar5 + 0x68);
        }
        plVar2 = *(longlong **)(lVar4 + lVar6 * 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
          lVar5 = *(longlong *)(param_1 + 0x2c8);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar5 + 0x70));
    }
    if (lVar5 != 0 && lVar5 != param_2) {
      FUN_147c4179e(lVar5);
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar5);
    }
  }
  *(longlong *)(param_1 + 0x2c8) = param_2;
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x70))) {
    lVar5 = 0;
    do {
      lVar6 = param_2 + 8;
      if (*(longlong *)(param_2 + 0x68) != 0) {
        lVar6 = *(longlong *)(param_2 + 0x68);
      }
      plVar2 = *(longlong **)(lVar6 + lVar5 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,param_1);
        param_2 = *(longlong *)(param_1 + 0x2c8);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 0x70));
  }
  FUN_147af14b0(local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435f9c28 FUN_1435f9c28 body=69 status=ok
// SIG undefined FUN_1435f9c28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435f9c28(void)

{
  _DAT_14caf5e38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435f9c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e40,1);
  return;
}



// FUNCTION 1435f9c6e FUN_1435f9c6e body=289 status=ok
// SIG undefined FUN_1435f9c6e(void)

ulonglong * FUN_1435f9c6e(longlong param_1,ulonglong *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  
  param_2[1] = 0;
  param_2[2] = 0;
  cVar4 = FUN_14480c900(0,param_3);
  uVar11 = 0;
  uVar6 = 0;
  if (cVar4 != '\0') {
    uVar6 = *(uint *)(*(longlong *)(param_3 + 8) + 0x50) >> 0x19 & 4;
  }
  bVar5 = FUN_144914152(param_1,param_3);
  if (DAT_14c761ae8 - 1U < 3) {
    uVar11 = (uint)(*(byte *)(param_1 + 0x78) >> 1 & 0x20);
  }
  uVar7 = (*(byte *)(param_1 + 0x6e) & 8) << 4;
  cVar4 = *(char *)(param_1 + 0x82);
  bVar1 = *(byte *)(param_1 + 0x72);
  bVar2 = *(byte *)(param_1 + 0x77);
  uVar3 = *(ulonglong *)(param_1 + 0x2b8);
  *param_2 = uVar3;
  uVar10 = uVar3 >> 0x20;
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    bVar9 = (byte)(uVar3 >> 0x20) | 2;
    uVar10 = (ulonglong)bVar9;
    *(byte *)((longlong)param_2 + 4) = bVar9;
  }
  if (((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0))
      || (uVar8 = 0, (*(byte *)(param_1 + 0x75) & 200) != 0)) && (uVar8 = 0, (uVar10 & 2) != 0)) {
    uVar8 = ((uint)bVar5 << 3 & 0xffffff80 | uVar7) >> 3;
  }
  *(uint *)(param_2 + 2) =
       (uint)bVar5 << 3 & 0xffffffed | uVar6 | uVar11 | uVar7 | (uint)(cVar4 != '\x01') << 0xd |
       (bVar1 & 1) << 0xe | (bVar2 & 0x40) << 10 | uVar8 | 0x1002;
  return param_2;
}



// FUNCTION 1435f9d90 FUN_1435f9d90 body=210 status=ok
// SIG undefined FUN_1435f9d90(void)

void FUN_1435f9d90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  byte local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = *(byte *)(param_1 + 0x2b0);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x210) + 0x3d0))();
  local_48 = (bVar1 & 2) >> 1;
  FUN_147af13d2(local_40,uVar3,0,1);
  lVar4 = *(longlong *)(param_1 + 0x2c8);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x70))) {
    lVar6 = 0;
    do {
      lVar5 = lVar4 + 8;
      if (*(longlong *)(lVar4 + 0x68) != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x68);
      }
      plVar2 = *(longlong **)(lVar5 + lVar6 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,param_3);
        lVar4 = *(longlong *)(param_1 + 0x2c8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar4 + 0x70));
  }
  FUN_147af14b0(local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435f9e64 FUN_1435f9e64 body=369 status=ok
// SIG undefined FUN_1435f9e64(void)

undefined8 FUN_1435f9e64(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 unaff_RBP;
  undefined1 auStack_68 [32];
  byte local_48;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0x9e) & 0x10) != 0) &&
     (lVar3 = *(longlong *)(param_1 + 0x668), lVar3 != 0)) {
    if ((*(byte *)(param_1 + 0x330) & 1) == 0) {
      if (DAT_14c7616bc == 3) {
        FUN_147bffcda(lVar3);
        lVar3 = *(longlong *)(param_1 + 0x668);
      }
      FUN_1417e4cb4(param_1,lVar3);
    }
    cVar2 = FUN_14490dacc(param_1,1);
    if ((cVar2 == '\0') || (DAT_14c761950 != 1)) {
      bVar1 = *(byte *)(param_1 + 0x691);
      lVar3 = *(longlong *)(param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(param_1);
      }
      local_48 = bVar1 >> 7;
      FUN_147af13d2(local_38,lVar3,0,0);
      if (0 < *(int *)(param_1 + 0x8e8)) {
        FUN_147c0251e(param_1,*(undefined8 *)(param_1 + 0x668));
      }
      *(byte *)(param_1 + 0x693) = *(byte *)(param_1 + 0x693) | 0x10;
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218);
      }
      uVar4 = FUN_1435c072e(param_1,*(undefined4 *)(lVar3 + 8));
      *(byte *)(param_1 + 0x693) = *(byte *)(param_1 + 0x693) & 0xef;
      lVar3 = *(longlong *)(param_1 + 0x668);
      if ((*(char *)(lVar3 + 0xf1) == '\0') ||
         ((*(char *)(lVar3 + 0xf1) != '\x02' && (*(char *)(lVar3 + 0xd8) == '\0')))) {
        uVar6 = 0;
      }
      else {
        *(undefined1 *)(lVar3 + 0x148) = 1;
        uVar6 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      }
      uVar5 = FUN_14001cc68(0x3b0,0x10);
      FUN_147c3d3cc(uVar5,param_1,uVar4,uVar6);
      FUN_147af14b0(local_38);
      goto LAB_1435f9ed5;
    }
  }
  uVar5 = 0;
LAB_1435f9ed5:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435f9fd6 FUN_1435f9fd6 body=69 status=ok
// SIG undefined FUN_1435f9fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435f9fd6(void)

{
  _DAT_14caf5e48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435fa018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e50,1);
  return;
}



// FUNCTION 1435fa01b FUN_1435fa01b body=69 status=ok
// SIG undefined FUN_1435fa01b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435fa01b(void)

{
  _DAT_14caf5e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435fa05d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e60,1);
  return;
}



// FUNCTION 1435fa060 FUN_1435fa060 body=69 status=ok
// SIG undefined FUN_1435fa060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435fa060(void)

{
  _DAT_14caf5e68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435fa0a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e70,1);
  return;
}



// FUNCTION 1435fa0a6 FUN_1435fa0a6 body=31 status=ok
// SIG undefined FUN_1435fa0a6(void)

void FUN_1435fa0a6(longlong *param_1)

{
  FUN_1435bb06c();
                    /* WARNING: Could not recover jumptable at 0x0001435fa0be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x230))(param_1);
  return;
}



// FUNCTION 1435fa0c6 FUN_1435fa0c6 body=430 status=ok
// SIG undefined FUN_1435fa0c6(void)

void FUN_1435fa0c6(longlong *param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined4 uVar3;
  float fVar4;
  
  if (param_1[2] == 0) {
    *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
    return;
  }
  fVar1 = *(float *)((longlong)param_1 + 0x19c);
  fVar4 = 0.0;
  lVar2 = param_1[3];
  (**(code **)(*param_1 + 0x28))(param_1,param_2,lVar2);
  (**(code **)(*param_1 + 0x238))
            (param_1,param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),fVar1 <= 0.0) & 0xffffffff);
  (**(code **)(*param_1 + 0xe0))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_2,lVar2,param_3,fVar1 <= 0.0);
  *(undefined4 *)(param_1 + 0x33) = uVar3;
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,lVar2);
  (**(code **)(*param_1 + 0x40))(param_1,param_2,lVar2);
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,lVar2);
  (**(code **)(*param_1 + 0x220))(param_1,param_2,lVar2);
  param_1[0x47] = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x20c) = 1;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x45) + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x51) = param_2 + *(float *)(param_1 + 0x51);
  lVar2 = *(longlong *)(param_1[2] + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6();
    if (lVar2 == 0) goto LAB_1435fa20a;
    lVar2 = *(longlong *)(param_1[2] + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
  }
  fVar4 = (float)*(double *)(lVar2 + 0x6d0);
LAB_1435fa20a:
  *(float *)((longlong)param_1 + 0x28c) = fVar4;
  lVar2 = DAT_14c8464e8;
  param_1[0x48] = DAT_14c8464e0;
  param_1[0x49] = lVar2;
  param_1[0x4a] = DAT_14c8464f0;
  return;
}



// FUNCTION 1435fa274 FUN_1435fa274 body=2135 status=ok
// SIG undefined FUN_1435fa274(void)

void FUN_1435fa274(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  double *local_108;
  double local_100;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  if (((*(byte *)(lVar9 + 0x692) & 4) == 0) && (*(longlong *)(lVar9 + 0x668) != 0)) {
    lVar18 = *(longlong *)(param_1 + 8);
    lVar17 = **(longlong **)(lVar18 + 0x40);
    if ((*(byte *)(*(longlong *)(lVar9 + 0x668) + 0xec) & 2) != 0) goto LAB_1435fa372;
    if ((*(byte *)(*(longlong *)(lVar17 + 0x30) + 0x71) & 1) == 0) {
      uVar14 = *(undefined8 *)(lVar9 + 0x268);
      uVar5 = *(undefined8 *)(lVar9 + 0x270);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar9 + 0x260);
      *(undefined8 *)(param_1 + 0x1e0) = uVar14;
      *(undefined8 *)(param_1 + 0x1e8) = uVar5;
      uVar14 = *(undefined8 *)(lVar9 + 0x268);
      uVar5 = *(undefined8 *)(lVar9 + 0x270);
      *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(lVar9 + 0x260);
      *(undefined8 *)(param_1 + 0x1c8) = uVar14;
      *(undefined8 *)(param_1 + 0x1d0) = uVar5;
    }
    else {
      *(double *)(param_1 + 0x1e8) = DAT_14c8464f0;
      dVar26 = DAT_14c8464e8;
      *(double *)(param_1 + 0x1d8) = DAT_14c8464e0;
      *(double *)(param_1 + 0x1e0) = dVar26;
      dVar26 = DAT_14c8464e8;
      *(double *)(param_1 + 0x1c0) = DAT_14c8464e0;
      *(double *)(param_1 + 0x1c8) = dVar26;
      *(double *)(param_1 + 0x1d0) = DAT_14c8464f0;
    }
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    uVar16 = *(uint *)(param_1 + 0x18c);
    if ((int)uVar16 < 1) goto LAB_1435fa7de;
    local_100 = *(double *)(lVar9 + 0x290);
    bVar20 = true;
  }
  else {
    lVar18 = *(longlong *)(param_1 + 8);
    lVar17 = **(longlong **)(lVar18 + 0x40);
LAB_1435fa372:
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    uVar16 = *(uint *)(param_1 + 0x18c);
    if ((int)uVar16 < 1) {
      return;
    }
    local_100 = *(double *)(lVar9 + 0x290);
    bVar20 = false;
  }
  local_108 = (double *)(param_1 + 0x1c0);
  bVar7 = *(byte *)(lVar18 + 0x37);
  dVar26 = *(double *)(lVar9 + 0x280);
  dVar24 = *(double *)(lVar9 + 0x288);
  uVar39 = 0xe0000000;
  uVar40 = 0xc7efffff;
  dVar35 = -3.4028234663852886e+38;
  dVar31 = -3.4028234663852886e+38;
  dVar12 = 3.4028234663852886e+38;
  dVar10 = 3.4028234663852886e+38;
  uVar19 = 0;
  dVar29 = dVar10;
  do {
    while( true ) {
      uVar19 = uVar19 + 1;
      lVar9 = *(longlong *)(param_1 + 0x168);
      lVar18 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + uVar19 * 2) *
               (longlong)*(int *)(param_1 + 0x188);
      puVar1 = (undefined8 *)(lVar9 + lVar18);
      fVar2 = *(float *)(lVar9 + 0x68 + lVar18);
      fVar3 = *(float *)(lVar9 + 0x60 + lVar18);
      fVar4 = *(float *)(lVar9 + 100 + lVar18);
      uVar8 = *(uint *)(lVar9 + 0x6c + lVar18);
      *(uint *)(lVar9 + 0x6c + lVar18) = uVar8 & 0xfdffffff;
      bVar15 = (byte)(uVar8 >> 0x19) & (bVar7 & 1) == 0;
      dVar36 = DAT_14c8464e8;
      dVar13 = DAT_14c8464f0;
      dVar33 = DAT_14c8464e0;
      if (bVar15 != 1) {
        dVar36 = (double)(*(float *)((longlong)puVar1 + 0x44) * param_2);
        dVar13 = (double)(*(float *)(puVar1 + 9) * param_2);
        dVar33 = (double)(*(float *)(puVar1 + 8) * param_2);
      }
      dVar23 = (double)puVar1[3];
      puVar1[3] = dVar33 + dVar23;
      dVar6 = (double)puVar1[4];
      puVar1[4] = dVar36 + dVar6;
      dVar28 = (double)puVar1[5];
      puVar1[5] = dVar13 + dVar28;
      fVar21 = 0.0;
      if (bVar15 == 0) {
        fVar21 = *(float *)((longlong)puVar1 + 0x5c) * param_2;
      }
      *(float *)((longlong)puVar1 + 0x3c) = fVar21 + *(float *)((longlong)puVar1 + 0x3c);
      dVar33 = dVar33 + dVar23 + *(double *)(param_1 + 0x240);
      puVar1[3] = dVar33;
      dVar36 = dVar36 + dVar6 + *(double *)(param_1 + 0x248);
      puVar1[4] = dVar36;
      dVar13 = dVar13 + dVar28 + *(double *)(param_1 + 0x250);
      puVar1[5] = dVar13;
      uVar5 = puVar1[5];
      puVar1[2] = uVar5;
      *puVar1 = puVar1[3];
      puVar1[1] = puVar1[4];
      if (bVar20) break;
      uVar22 = FUN_1447c7e44(uVar5,0x40c90fdb);
      *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar22;
      if (uVar19 == uVar16) {
        return;
      }
    }
    dVar32 = (double)fVar2 * local_100;
    dVar28 = (double)fVar4 * dVar24;
    dVar6 = (double)fVar3 * dVar26;
    dVar23 = dVar13 - dVar32;
    dVar32 = dVar32 + dVar13;
    dVar13 = dVar36 - dVar28;
    dVar28 = dVar28 + dVar36;
    dVar36 = dVar33 - dVar6;
    dVar6 = dVar6 + dVar33;
    dVar33 = dVar36;
    if (dVar10 <= dVar36) {
      dVar33 = dVar10;
    }
    dVar25 = dVar13;
    if (dVar12 <= dVar13) {
      dVar25 = dVar12;
    }
    dVar27 = dVar23;
    if (dVar29 <= dVar23) {
      dVar27 = dVar29;
    }
    if (dVar36 <= dVar35) {
      dVar36 = dVar35;
    }
    if (dVar13 <= dVar31) {
      dVar13 = dVar31;
    }
    if (dVar23 <= (double)CONCAT44(uVar40,uVar39)) {
      dVar23 = (double)CONCAT44(uVar40,uVar39);
    }
    dVar10 = dVar6;
    if (dVar33 <= dVar6) {
      dVar10 = dVar33;
    }
    dVar12 = dVar28;
    if (dVar25 <= dVar28) {
      dVar12 = dVar25;
    }
    dVar29 = dVar32;
    if (dVar27 <= dVar32) {
      dVar29 = dVar27;
    }
    dVar35 = dVar6;
    if (dVar6 <= dVar36) {
      dVar35 = dVar36;
    }
    dVar31 = dVar28;
    if (dVar28 <= dVar13) {
      dVar31 = dVar13;
    }
    uVar39 = SUB84(dVar32,0);
    uVar40 = (undefined4)((ulonglong)dVar32 >> 0x20);
    if (dVar32 <= dVar23) {
      uVar39 = SUB84(dVar23,0);
      uVar40 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    uVar22 = FUN_1447c7e44(uVar5,0x40c90fdb);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar22;
  } while (uVar19 != uVar16);
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    *(double *)(param_1 + 0x1d8) = dVar10;
    *(double *)(param_1 + 0x1e0) = dVar12;
    *(double *)(param_1 + 0x1e8) = dVar29;
    *local_108 = (double)*(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    dVar26 = *(double *)(param_1 + 0x1c0);
    dVar24 = *(double *)(param_1 + 0x1c8);
    dVar13 = *(double *)(param_1 + 0x1d0);
    dVar33 = dVar10;
    dVar10 = dVar29;
    dVar36 = dVar12;
  }
  else {
    dVar26 = *(double *)(param_1 + 0x1c0);
    if (dVar10 <= *(double *)(param_1 + 0x1c0)) {
      dVar26 = dVar10;
    }
    dVar24 = *(double *)(param_1 + 0x1c8);
    if (dVar12 <= *(double *)(param_1 + 0x1c8)) {
      dVar24 = dVar12;
    }
    dVar13 = *(double *)(param_1 + 0x1d0);
    if (dVar29 <= *(double *)(param_1 + 0x1d0)) {
      dVar13 = dVar29;
    }
    dVar33 = *(double *)(param_1 + 0x1d8);
    if (*(double *)(param_1 + 0x1d8) <= dVar10) {
      dVar33 = dVar10;
    }
    dVar36 = *(double *)(param_1 + 0x1e0);
    if (*(double *)(param_1 + 0x1e0) <= dVar12) {
      dVar36 = dVar12;
    }
    dVar10 = *(double *)(param_1 + 0x1e8);
    if (*(double *)(param_1 + 0x1e8) <= dVar29) {
      dVar10 = dVar29;
    }
  }
  if (dVar35 <= dVar26) {
    dVar26 = dVar35;
  }
  *(double *)(param_1 + 0x1c0) = dVar26;
  if (dVar31 <= dVar24) {
    dVar24 = dVar31;
  }
  *(double *)(param_1 + 0x1c8) = dVar24;
  if ((double)CONCAT44(uVar40,uVar39) <= dVar13) {
    dVar13 = (double)CONCAT44(uVar40,uVar39);
  }
  *(double *)(param_1 + 0x1d0) = dVar13;
  if (dVar33 <= dVar35) {
    dVar33 = dVar35;
  }
  *(double *)(param_1 + 0x1d8) = dVar33;
  if (dVar36 <= dVar31) {
    dVar36 = dVar31;
  }
  *(double *)(param_1 + 0x1e0) = dVar36;
  if (dVar10 <= (double)CONCAT44(uVar40,uVar39)) {
    dVar10 = (double)CONCAT44(uVar40,uVar39);
  }
  *(double *)(param_1 + 0x1e8) = dVar10;
LAB_1435fa7de:
  local_108 = (double *)(param_1 + 0x1c0);
  if ((*(byte *)(*(longlong *)(lVar17 + 0x30) + 0x71) & 1) != 0) {
    bVar20 = *(char *)(param_1 + 0x1f0) == '\0';
    if (bVar20) {
      dVar24 = 0.0;
      dVar10 = 0.0;
      dVar26 = 0.0;
      dVar35 = 0.0;
      dVar29 = 0.0;
      dVar31 = 0.0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x10);
      dVar33 = *(double *)(lVar9 + 0x240);
      dVar23 = *(double *)(lVar9 + 0x248);
      dVar12 = *(double *)(lVar9 + 0x250);
      dVar35 = *(double *)(lVar9 + 0x280);
      dVar6 = *(double *)(lVar9 + 0x288);
      dVar32 = *(double *)(lVar9 + 0x290);
      dVar13 = dVar12 + dVar12;
      dVar29 = dVar33 + dVar33;
      dVar31 = dVar23 + dVar23;
      dVar10 = *(double *)(lVar9 + 0x240) * dVar13;
      dVar24 = *(double *)(lVar9 + 600);
      dVar26 = *(double *)(lVar9 + 600);
      dVar28 = dVar31 * dVar24;
      auVar30._0_8_ = (dVar28 + dVar10) * dVar32;
      auVar30._8_8_ =
           (dVar29 * dVar26 + *(double *)(lVar9 + 0x240) * dVar29) * *(double *)(lVar9 + 0x298);
      dVar24 = dVar13 * dVar24;
      dVar26 = dVar29 * dVar26;
      dVar36 = (1.0 - (dVar13 * dVar12 + dVar31 * dVar23)) * dVar35;
      dVar12 = (1.0 - (dVar13 * dVar12 + dVar29 * dVar33)) * dVar6;
      dVar25 = (dVar24 + dVar31 * dVar33) * dVar35;
      dVar27 = (dVar26 + dVar13 * dVar23) * dVar6;
      dVar35 = (dVar10 - dVar28) * dVar35;
      auVar37._0_8_ = dVar6 * (dVar31 * dVar33 - dVar24);
      auVar37._8_8_ = dVar32 * (dVar13 * dVar23 - dVar26);
      auVar30 = blendpd(auVar30,auVar37,2);
      auVar38._8_4_ = SUB84(dVar12,0);
      auVar38._0_8_ = dVar36;
      auVar38._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      auVar38 = blendpd(auVar37,auVar38,2);
      dVar32 = (1.0 - (dVar29 * dVar33 + dVar31 * dVar23)) * dVar32;
      dVar13 = (*(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1d8)) * 0.5;
      dVar33 = (*(double *)(param_1 + 0x1c8) + *(double *)(param_1 + 0x1e0)) * 0.5;
      dVar34 = (*(double *)(param_1 + 0x1d0) + *(double *)(param_1 + 0x1e8)) * 0.5;
      dVar26 = (*(double *)(param_1 + 0x1d8) - *(double *)(param_1 + 0x1c0)) * 0.5;
      dVar12 = (*(double *)(param_1 + 0x1e0) - *(double *)(param_1 + 0x1c8)) * 0.5;
      dVar6 = dVar34 * auVar30._0_8_ + dVar33 * auVar38._0_8_ + dVar13 * dVar36 +
              *(double *)(lVar9 + 0x260);
      dVar28 = dVar34 * auVar30._8_8_ + dVar33 * auVar38._8_8_ + dVar13 * dVar25 +
               *(double *)(lVar9 + 0x268);
      dVar23 = (*(double *)(param_1 + 0x1e8) - *(double *)(param_1 + 0x1d0)) * 0.5;
      dVar24 = ABS(dVar23 * auVar30._0_8_) + ABS(auVar38._0_8_ * dVar12) + ABS(dVar26 * dVar36);
      dVar10 = ABS(dVar23 * auVar30._8_8_) + ABS(auVar38._8_8_ * dVar12) + ABS(dVar26 * dVar25);
      dVar29 = dVar6 - dVar24;
      dVar31 = dVar28 - dVar10;
      dVar24 = dVar24 + dVar6;
      dVar10 = dVar10 + dVar28;
      dVar12 = ABS(dVar12 * dVar27) + ABS(dVar26 * dVar35) + ABS(dVar23 * dVar32);
      dVar35 = dVar34 * dVar32 + dVar33 * dVar27 + dVar13 * dVar35 + *(double *)(lVar9 + 0x270);
      dVar26 = dVar35 - dVar12;
      dVar35 = dVar35 + dVar12;
    }
    *local_108 = dVar29;
    *(double *)(param_1 + 0x1c8) = dVar31;
    *(double *)(param_1 + 0x1d0) = dVar26;
    auVar11._8_4_ = SUB84(dVar10,0);
    auVar11._0_8_ = dVar24;
    auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x1d8) = auVar11;
    *(double *)(param_1 + 0x1e8) = dVar35;
    *(bool *)(param_1 + 0x1f0) = !bVar20;
  }
  return;
}



// FUNCTION 1435faacc FUN_1435faacc body=1059 status=ok
// SIG undefined FUN_1435faacc(void)

void FUN_1435faacc(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  
  if (*(int *)(param_1 + 0x18c) < 1) {
    return;
  }
  fVar14 = 0.0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6();
      if (lVar7 == 0) goto LAB_1435fab14;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0);
      if (lVar7 == 0) {
        lVar7 = FUN_1448abda6();
      }
    }
    fVar14 = (float)*(double *)(lVar7 + 0x6d0);
  }
LAB_1435fab14:
  uVar8 = *(uint *)(param_1 + 0x18c);
  if (0 < (longlong)(int)uVar8) {
    bVar10 = 0;
    lVar7 = (longlong)(int)uVar8;
    do {
      lVar9 = *(longlong *)(param_1 + 0x168);
      uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + lVar7 * 2);
      iVar4 = *(int *)(param_1 + 0x188);
      lVar13 = (longlong)(int)(iVar4 * (uint)uVar3);
      lVar1 = lVar9 + lVar13;
      lVar11 = (longlong)*(int *)(param_1 + 0x24);
      if ((1.0 < *(float *)(lVar9 + 0x90 + lVar13)) ||
         ((((fVar14 != 0.0 || (NAN(fVar14))) && ((*(uint *)(param_1 + 0x2d8) & 2) != 0)) &&
          (1.0 / *(float *)(lVar1 + 0x94) < fVar14 - *(float *)(param_1 + 0x28c))))) {
        uVar8 = *(uint *)(lVar1 + lVar11);
        uVar12 = uVar8 & 0xf0000000;
        if ((int)uVar12 < 0x20000000) {
          if (SBORROW4(0,uVar12)) {
            uVar8 = uVar8 >> 0xe & 0x3fff;
            if (uVar8 == 0x3fff) goto LAB_1435fad81;
            lVar9 = lVar9 + (int)(uVar8 * iVar4);
            uVar8 = *(uint *)(lVar11 + lVar9);
            if ((uVar8 & 0xf0000000) != 0x40000000) {
              if ((uVar8 & 0xf0000000) == 0x10000000) {
                *(undefined4 *)(lVar9 + 8 + lVar11) = 0;
                *(undefined4 *)(lVar9 + 0x1c + lVar11) = 1;
              }
              else {
                uVar8 = uVar8 & 0xfffffff | 0x80000000;
              }
            }
            uVar8 = uVar8 | 0x3fff;
          }
          else {
            if (uVar12 != 0x10000000) goto LAB_1435fad85;
LAB_1435fac02:
            if ((uVar8 & 0x3fff) == 0x3fff) goto LAB_1435fad81;
            lVar9 = lVar9 + (int)((uVar8 & 0x3fff) * iVar4);
            uVar8 = *(uint *)(lVar11 + lVar9);
            if (SBORROW4(0,uVar8 & 0xf0000000)) {
              if (uVar12 == 0x10000000) {
LAB_1435fad0d:
                uVar8 = uVar8 & 0xfffffff | 0x10000000;
              }
              else if (uVar12 == 0x40000000) goto LAB_1435facff;
            }
            else {
              if (uVar12 != 0x40000000) goto LAB_1435fad0d;
LAB_1435facff:
              uVar8 = uVar8 & 0xfffffff | 0x40000000;
            }
            uVar8 = uVar8 | 0xfffc000;
          }
          *(uint *)(lVar9 + lVar11) = uVar8;
LAB_1435fad81:
          uVar8 = *(uint *)(lVar1 + lVar11);
        }
        else {
          if (uVar12 == 0x20000000) {
            uVar12 = uVar8 >> 0xe & 0x3fff;
            if (uVar12 != 0x3fff) {
              lVar9 = lVar9 + (int)(uVar12 * iVar4);
              uVar12 = *(uint *)(lVar11 + lVar9);
              if ((uVar12 & 0xf0000000) != 0x40000000) {
                if ((uVar12 & 0xf0000000) == 0x10000000) {
                  *(undefined4 *)(lVar9 + 8 + lVar11) = 0;
                  *(undefined4 *)(lVar9 + 0x1c + lVar11) = 1;
                }
                else {
                  uVar12 = uVar12 & 0xfffffff | 0x80000000;
                }
              }
              *(uint *)(lVar9 + lVar11) = uVar12 | 0x3fff;
            }
            uVar8 = uVar8 & 0x3fff;
            if (uVar8 != 0x3fff) {
              do {
                lVar9 = (longlong)(int)uVar8 * (longlong)*(int *)(param_1 + 0x188) +
                        *(longlong *)(param_1 + 0x168);
                uVar8 = *(uint *)(*(int *)(param_1 + 0x24) + lVar9);
                *(uint *)(*(int *)(param_1 + 0x24) + lVar9) = uVar8 & 0xfffffff;
                uVar8 = uVar8 & 0x3fff;
              } while (uVar8 != 0x3fff);
              bVar10 = 1;
            }
            goto LAB_1435fad81;
          }
          if (uVar12 == 0x40000000) goto LAB_1435fac02;
        }
LAB_1435fad85:
        if (0xfffffff < uVar8) {
          if ((uVar8 & 0x3fff) != 0x3fff) {
            puVar2 = (uint *)((longlong)*(int *)(param_1 + 0x24) +
                             (longlong)*(int *)(param_1 + 0x188) * (ulonglong)(uVar8 & 0x3fff) +
                             *(longlong *)(param_1 + 0x168));
            *puVar2 = *puVar2 | 0xfffc000;
            uVar8 = *(uint *)(lVar1 + lVar11);
          }
          uVar12 = uVar8 >> 0xe & 0x3fff;
          if (uVar12 != 0x3fff) {
            puVar2 = (uint *)((longlong)*(int *)(param_1 + 0x24) +
                             (longlong)*(int *)(param_1 + 0x188) * (ulonglong)uVar12 +
                             *(longlong *)(param_1 + 0x168));
            *puVar2 = *puVar2 | 0x3fff;
            uVar8 = *(uint *)(lVar1 + lVar11);
          }
        }
        *(uint *)(lVar1 + lVar11) = uVar8 | 0xfffffff;
        *(undefined2 *)(*(longlong *)(param_1 + 0x170) + (lVar7 + -1) * 2) =
             *(undefined2 *)
              (*(longlong *)(param_1 + 0x170) + -2 + (longlong)*(int *)(param_1 + 0x18c) * 2);
        *(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + (longlong)*(int *)(param_1 + 0x18c) * 2) =
             uVar3;
        uVar8 = *(int *)(param_1 + 0x18c) - 1;
        *(uint *)(param_1 + 0x18c) = uVar8;
      }
      bVar5 = 1 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar5);
    if ((bool)(bVar10 & 0 < (int)uVar8)) {
      uVar6 = (ulonglong)uVar8 + 1;
      do {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x170) + -4 + uVar6 * 2);
        lVar7 = (longlong)*(int *)(param_1 + 0x188) * (ulonglong)uVar3 +
                *(longlong *)(param_1 + 0x168);
        if (*(uint *)(*(int *)(param_1 + 0x24) + lVar7) < 0x10000000) {
          *(undefined4 *)(lVar7 + *(int *)(param_1 + 0x24)) = 0xfffffff;
          *(undefined2 *)(*(longlong *)(param_1 + 0x170) + -4 + uVar6 * 2) =
               *(undefined2 *)
                (*(longlong *)(param_1 + 0x170) + -2 + (longlong)*(int *)(param_1 + 0x18c) * 2);
          *(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + (longlong)*(int *)(param_1 + 0x18c) * 2)
               = uVar3;
          *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
        }
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
  }
  return;
}



// FUNCTION 1435faef0 FUN_1435faef0 body=449 status=ok
// SIG undefined FUN_1435faef0(void)

void FUN_1435faef0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x2e0) + 0x40) & 0x10) == 0) ||
     (iVar3 = *(int *)(param_1 + 0x284), iVar3 < 1)) {
    return;
  }
  uVar8 = 0;
LAB_1435faf2b:
  if (0 < (longlong)*(int *)(param_1 + 0x18c)) {
    lVar4 = (longlong)*(int *)(param_1 + 0x24);
    lVar7 = 0;
    do {
      lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar7 * 2) *
              (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168);
      uVar2 = *(uint *)(lVar4 + lVar5);
      if (((uVar2 & 0xf0000000) == 0x40000000) &&
         (puVar9 = (uint *)(lVar5 + lVar4), puVar9[1] == uVar8)) {
        if ((((~uVar2 & 0x40003fff) != 0) &&
            (((lVar5 != 0 && (puVar9 != (uint *)0x0)) &&
             (((longlong)(int)uVar2 & 0x3fffU) != 0x3fff)))) &&
           (lVar7 = *(longlong *)(param_1 + 0x168) +
                    ((longlong)(int)uVar2 & 0x3fffU) * (longlong)*(int *)(param_1 + 0x188),
           lVar7 != 0)) {
          puVar1 = (uint *)(lVar7 + lVar4);
          FUN_147c3ee5e(lVar5,puVar9,lVar7,puVar1,
                        *(float *)(lVar5 + 0xc + lVar4) - *(float *)(lVar7 + 0xc + lVar4),puVar9);
          if (puVar1 != (uint *)0x0) goto LAB_1435faff3;
          lVar4 = lVar7;
          puVar6 = (uint *)0x0;
          goto LAB_1435fb070;
        }
        break;
      }
      lVar7 = lVar7 + 1;
    } while (*(int *)(param_1 + 0x18c) != lVar7);
  }
  goto LAB_1435faf86;
  while( true ) {
    puVar1 = (uint *)(lVar7 + *(int *)(param_1 + 0x24));
    FUN_147c3ee5e(lVar5,puVar9,lVar7,puVar1,
                  (float)puVar6[3] - *(float *)(lVar7 + 0xc + (longlong)*(int *)(param_1 + 0x24)),
                  puVar6);
    lVar5 = lVar4;
    puVar9 = puVar6;
    if (puVar1 == (uint *)0x0) break;
LAB_1435faff3:
    puVar6 = puVar1;
    lVar4 = lVar7;
    if ((((ulonglong)*puVar6 & 0x3fff) == 0x3fff) ||
       (lVar7 = (longlong)*(int *)(param_1 + 0x188) * ((ulonglong)*puVar6 & 0x3fff) +
                *(longlong *)(param_1 + 0x168), lVar7 == 0)) goto LAB_1435fb070;
  }
  lVar4 = lVar7;
  puVar6 = (uint *)0x0;
LAB_1435fb070:
  FUN_147c3ee5e(lVar5,puVar9,lVar4,puVar6,(float)puVar9[3] - (float)puVar6[3],puVar6);
  iVar3 = *(int *)(param_1 + 0x284);
LAB_1435faf86:
  uVar8 = uVar8 + 1;
  if (iVar3 <= (int)uVar8) {
    return;
  }
  goto LAB_1435faf2b;
}



// FUNCTION 1435fb0b2 FUN_1435fb0b2 body=8963 status=ok
// SIG undefined FUN_1435fb0b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435fb0b2(longlong *param_1,float param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  uint uVar3;
  float fVar4;
  byte bVar5;
  ushort uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  double dVar10;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint *in_RDX;
  longlong lVar25;
  uint *puVar26;
  int iVar27;
  double *pdVar28;
  uint *puVar29;
  undefined8 *puVar30;
  undefined1 *puVar31;
  uint *puVar32;
  undefined1 *puVar33;
  bool bVar34;
  int iVar35;
  ulonglong uVar36;
  longlong lVar37;
  double dVar38;
  ulonglong uVar39;
  int iVar40;
  undefined1 *puVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined4 uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  double dVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auStack_318 [32];
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  byte local_2e1;
  uint local_2e0;
  float local_2dc;
  double local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  uint *local_2a8;
  double local_2a0;
  double local_298;
  float local_290;
  uint local_28c;
  double local_288;
  double local_280;
  longlong *local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_240;
  double local_238;
  float local_230;
  int local_22c;
  int local_228;
  float local_224;
  float local_220;
  float local_21c;
  double local_218;
  double dStack_210;
  uint *local_208;
  undefined8 uStack_200;
  double local_1f0;
  undefined1 local_1e8 [16];
  longlong local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  undefined8 uStack_170;
  double local_168;
  uint local_158 [26];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2dc = param_2;
  if (0 < *(int *)((longlong)param_1 + 0x284)) {
    local_22c = *(int *)(param_1[0x5c] + 0x3c);
    lVar7 = **(longlong **)(param_1[1] + 0x40);
    local_2e1 = 1;
    local_188 = ZEXT816(0x3ff0000000000000) << 0x40;
    uVar39 = 0;
    do {
      iVar35 = local_22c;
      if (param_1[0x5d] == 0) {
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        if (*(char *)(param_1[0x5d] + 0x28) < '\0') {
          local_158[0] = 0;
          auVar55._12_4_ = 0;
          auVar55._0_12_ = stack0xfffffffffffffe8c;
          _local_178 = auVar55 << 0x20;
          local_2f8 = local_178;
          local_2e1 = (**(code **)(*param_1 + 600))(param_1,param_2,uVar39 & 0xffffffff);
          uVar36 = (ulonglong)local_158[0];
        }
      }
      iVar27 = *(int *)((longlong)param_1 + 0x18c);
      if (0 < iVar35) {
        uVar19 = (uint)uVar36;
        if (0 < (int)((uVar19 - iVar35) + iVar27)) {
          (**(code **)(*param_1 + 0x228))(param_1,uVar39 & 0xffffffff);
          iVar27 = *(int *)((longlong)param_1 + 0x18c);
        }
        uVar22 = iVar35 - iVar27;
        in_RDX = (uint *)0x0;
        if ((int)uVar22 < 1) {
          uVar22 = 0;
        }
        if ((int)(iVar27 + uVar19) <= iVar35) {
          uVar22 = uVar19;
        }
        uVar36 = (ulonglong)uVar22;
      }
      iVar27 = iVar27 + (int)uVar36;
      local_2c8 = uVar36;
      if (iVar27 < *(int *)((longlong)param_1 + 0x194)) {
LAB_1435fb2b5:
        iVar35 = (int)local_2c8;
        uVar36 = 0xffffffff;
        if ((longlong)*(int *)((longlong)param_1 + 0x18c) < 1) {
          puVar21 = (uint *)0x0;
          puVar41 = (undefined1 *)0x0;
        }
        else {
          in_RDX = (uint *)param_1[0x2e];
          lVar37 = 0;
          do {
            uVar36 = (ulonglong)*(ushort *)((longlong)in_RDX + lVar37 * 2);
            puVar41 = (undefined1 *)((longlong)(int)param_1[0x31] * uVar36 + param_1[0x2d]);
            if ((uVar39 == *(uint *)(puVar41 + (longlong)*(int *)((longlong)param_1 + 0x24) + 4)) &&
               (puVar21 = (uint *)(puVar41 + *(int *)((longlong)param_1 + 0x24)),
               (*puVar21 & 0xf0000000) == 0x40000000)) goto LAB_1435fb333;
            lVar37 = lVar37 + 1;
          } while (*(int *)((longlong)param_1 + 0x18c) != lVar37);
          puVar21 = (uint *)0x0;
          puVar41 = (undefined1 *)0x0;
          uVar36 = 0xffffffff;
        }
LAB_1435fb333:
        uVar19 = *(uint *)(param_1[0x5c] + 0x40);
        if (((uVar19 & 2) == 0) ||
           (in_RDX = (uint *)param_1[0x7b], fVar42 = *(float *)(param_1[0x7d] + uVar39 * 4),
           fVar42 < (float)in_RDX[uVar39] || fVar42 == (float)in_RDX[uVar39])) {
          in_RDX = (uint *)CONCAT71((int7)((ulonglong)in_RDX >> 8),puVar41 == (undefined1 *)0x0);
          uVar22 = (uint)in_RDX;
          local_2e0 = uVar22;
          if (0 < iVar35) {
            uVar3 = *(uint *)(param_1[0x5c] + 0x50);
            local_290 = *(float *)(param_1 + 0x51);
            fVar42 = *(float *)(param_1[0x53] + uVar39 * 4);
            if (*(float *)((longlong)param_1 + 0x19c) <= fVar42 &&
                fVar42 != *(float *)((longlong)param_1 + 0x19c)) {
              lVar25 = uVar39 * 0x18;
              lVar37 = param_1[0x60];
              lVar23 = param_1[0x6a];
              dVar38 = *(double *)(lVar37 + 0x10 + lVar25);
              dVar51 = *(double *)(lVar23 + 0x10 + lVar25);
              dVar49 = *(double *)(lVar37 + 8 + lVar25);
              dVar46 = *(double *)(lVar23 + 8 + lVar25);
              dVar58 = 1.0 / (double)local_290;
              lVar20 = param_1[0x70];
              *(double *)(lVar20 + lVar25) =
                   dVar58 * (*(double *)(lVar37 + lVar25) - *(double *)(lVar23 + lVar25));
              *(double *)(lVar20 + 8 + lVar25) = (dVar49 - dVar46) * dVar58;
              *(double *)(lVar20 + 0x10 + lVar25) = (dVar38 - dVar51) * dVar58;
              uVar19 = *(uint *)(param_1[0x5c] + 0x40);
            }
            if (((puVar41 != (undefined1 *)0x0) && (puVar21 != (uint *)0x0)) &&
               ((uVar19 & 0x18) == 8)) {
              bVar5 = (byte)puVar21[9];
              puVar29 = puVar21;
              puVar31 = puVar41;
              while ((bVar5 & 1) != 0) {
                if (((ulonglong)*puVar29 & 0x3fff) == 0x3fff) goto LAB_1435fbadd;
                puVar31 = (undefined1 *)
                          ((longlong)(int)param_1[0x31] * ((ulonglong)*puVar29 & 0x3fff) +
                          param_1[0x2d]);
                puVar29 = (uint *)(puVar31 + *(int *)((longlong)param_1 + 0x24));
                bVar5 = puVar31[(longlong)*(int *)((longlong)param_1 + 0x24) + 0x24];
              }
              if ((puVar29 != (uint *)0x0) && (puVar31 != (undefined1 *)0x0)) {
                bVar34 = false;
                puVar33 = puVar31;
                puVar32 = puVar29;
                while ((!bVar34 || ((puVar32[9] & 1) != 0))) {
                  if (((ulonglong)*puVar32 & 0x3fff) == 0x3fff) goto LAB_1435fbadd;
                  puVar33 = (undefined1 *)
                            ((longlong)(int)param_1[0x31] * ((ulonglong)*puVar32 & 0x3fff) +
                            param_1[0x2d]);
                  bVar34 = true;
                  puVar32 = (uint *)(puVar33 + *(int *)((longlong)param_1 + 0x24));
                }
                if (puVar33 != (undefined1 *)0x0) {
                  fVar42 = local_290 - (float)puVar32[3];
                  if (fVar42 <= 1e-08) {
                    local_2b0 = DAT_14c8464e0;
                    local_298 = DAT_14c8464e8;
                    local_2a0 = DAT_14c8464f0;
                  }
                  else {
                    lVar37 = param_1[0x60];
                    local_2b0 = 1.0 / (double)fVar42;
                    local_2a0 = ((*(double *)(lVar37 + 0x10 + uVar39 * 0x18) - (double)param_1[0x4a]
                                 ) - *(double *)(puVar33 + 0x28)) * local_2b0;
                    local_298 = ((*(double *)(lVar37 + 8 + uVar39 * 0x18) - (double)param_1[0x49]) -
                                *(double *)(puVar33 + 0x20)) * local_2b0;
                    local_2b0 = local_2b0 *
                                ((*(double *)(lVar37 + uVar39 * 0x18) - (double)param_1[0x48]) -
                                *(double *)(puVar33 + 0x18));
                  }
                  if (0 < (int)puVar29[6]) {
                    fVar42 = 1.0 / (float)(int)puVar29[6];
                    puVar30 = (undefined8 *)
                              ((ulonglong)(*puVar32 >> 0xe & 0x3fff) * (longlong)(int)param_1[0x31]
                              + param_1[0x2d]);
                    puVar26 = (uint *)((longlong)*(int *)((longlong)param_1 + 0x24) +
                                      (longlong)puVar30);
                    dVar38 = (double)((float)puVar29[3] - (float)puVar32[3]);
                    dVar51 = local_2a0 * dVar38;
                    dStack_210 = local_298 * dVar38;
                    dVar38 = dVar38 * local_2b0;
                    uStack_260 = 0;
                    uStack_270 = 0;
                    local_280 = dVar51 + dVar51;
                    uStack_200 = 0;
                    local_258 = dVar38 + dVar38;
                    uStack_250 = 0;
                    local_2b8 = (double)CONCAT44(local_2b8._4_4_,fVar42);
                    local_288 = (double)fVar42;
                    iVar27 = 1;
                    while( true ) {
                      fVar43 = (float)iVar27 * fVar42;
                      local_2d8 = (double)(float)puVar32[0xc];
                      dVar53 = (double)(float)puVar32[10];
                      fVar73 = fVar43 * fVar43;
                      fVar67 = fVar43 * fVar73;
                      fVar72 = fVar67 - fVar73;
                      dVar45 = (double)fVar73;
                      fVar44 = ((fVar67 + fVar67) - fVar73 * 3.0) + 1.0;
                      fVar74 = fVar73 * 3.0 - (fVar67 + fVar67);
                      dVar57 = *(double *)(puVar33 + 0x18);
                      dVar12 = *(double *)(puVar31 + 0x18);
                      dVar52 = dVar12 * 6.0;
                      dVar61 = (double)fVar43;
                      dVar10 = (double)(float)puVar32[0xb];
                      fVar43 = (fVar67 - (fVar73 + fVar73)) + fVar43;
                      dVar49 = *(double *)(puVar33 + 0x28);
                      dVar46 = *(double *)(puVar31 + 0x28);
                      dVar47 = (double)fVar74 * *(double *)(puVar31 + 0x20) +
                               (double)fVar72 * dStack_210 +
                               (double)fVar43 * dVar10 +
                               (double)fVar44 * *(double *)(puVar33 + 0x20);
                      dVar58 = *(double *)(puVar33 + 0x20);
                      dVar56 = dVar46 * 6.0;
                      dVar62 = *(double *)(puVar31 + 0x20);
                      *puVar30 = puVar30[3];
                      puVar30[1] = puVar30[4];
                      puVar30[2] = puVar30[5];
                      auVar59._8_4_ = SUB84(dVar47,0);
                      auVar59._0_8_ =
                           (double)fVar74 * dVar12 + (double)fVar72 * dVar38 +
                           (double)fVar43 * dVar53 + (double)fVar44 * dVar57;
                      auVar59._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
                      *(undefined1 (*) [16])(puVar30 + 3) = auVar59;
                      puVar30[5] = (double)fVar72 * dVar51 + (double)fVar74 * dVar46 +
                                   (double)fVar44 * dVar49 + (double)fVar43 * local_2d8;
                      puVar26[10] = (uint)(float)(((((dVar57 * -6.0 - dVar53 * 4.0) - local_258) +
                                                   dVar52) * dVar61 +
                                                   ((dVar53 * 3.0 + dVar57 * 6.0 + dVar38 * 3.0) -
                                                   dVar52) * dVar45 + dVar53) * local_288);
                      puVar26[0xb] = (uint)(float)(((((dVar58 * -6.0 - dVar10 * 4.0) -
                                                     (dStack_210 + dStack_210)) + dVar62 * 6.0) *
                                                    dVar61 + ((dVar10 * 3.0 + dVar58 * 6.0 +
                                                              dStack_210 * 3.0) - dVar62 * 6.0) *
                                                             dVar45 + dVar10) * local_288);
                      puVar26[0xc] = (uint)(float)(((((dVar49 * -6.0 - local_2d8 * 4.0) - local_280)
                                                    + dVar56) * dVar61 +
                                                    ((local_2d8 * 3.0 + dVar49 * 6.0 + dVar51 * 3.0)
                                                    - dVar56) * dVar45 + local_2d8) * local_288);
                      if ((int)puVar29[6] <= iVar27) break;
                      puVar30 = (undefined8 *)
                                ((longlong)(int)param_1[0x31] *
                                 (ulonglong)(*puVar26 >> 0xe & 0x3fff) + param_1[0x2d]);
                      puVar26 = (uint *)((longlong)*(int *)((longlong)param_1 + 0x24) +
                                        (longlong)puVar30);
                      iVar27 = iVar27 + 1;
                    }
                  }
                  lVar37 = param_1[0x70];
                  *(double *)(lVar37 + uVar39 * 0x18) = local_2b0;
                  *(double *)(lVar37 + 8 + uVar39 * 0x18) = local_298;
                  *(double *)(lVar37 + 0x10 + uVar39 * 0x18) = local_2a0;
                  param_2 = local_2dc;
                }
              }
            }
LAB_1435fbadd:
            local_1e8 = ZEXT416(uVar3 & 0x7fffffff);
            local_230 = (float)iVar35;
            local_21c = local_290 - *(float *)(param_1[0x53] + uVar39 * 4);
            fVar42 = 1.0 / local_230;
            local_224 = param_2 / local_230;
            puVar30 = (undefined8 *)(param_1[2] + 0x240);
            puVar29 = local_158;
            for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
              *(undefined8 *)puVar29 = *puVar30;
              puVar30 = puVar30 + 1;
              puVar29 = puVar29 + 2;
            }
            dVar38 = (double)local_21c;
            local_1d0 = (double)fVar42;
            local_228 = iVar35 + -1;
            local_2c0 = 0.0;
            puVar29 = (uint *)0x0;
            local_268 = 1.0;
            local_278 = (longlong *)0x0;
            local_2d0 = uVar39;
            local_2a8 = puVar21;
            local_220 = fVar42;
            local_1c8 = dVar38;
            do {
              fVar43 = fVar42;
              if (1.0 <= fVar42) {
                fVar43 = 1.0;
              }
              if (fVar43 <= 0.0) {
                fVar43 = 0.0;
              }
              lVar20 = param_1[0x60];
              lVar37 = param_1[0x66];
              lVar11 = local_2d0 * 0x18;
              lVar24 = param_1[0x70];
              lVar25 = param_1[0x6a];
              fVar74 = fVar43 * fVar43;
              fVar44 = fVar43 * fVar74;
              fVar73 = ((fVar44 + fVar44) - fVar74 * 3.0) + 1.0;
              fVar72 = (fVar44 - (fVar74 + fVar74)) + fVar43;
              local_2a0 = (double)CONCAT44(local_2a0._4_4_,fVar74);
              fVar67 = fVar44 - fVar74;
              fVar44 = fVar74 * 3.0 - (fVar44 + fVar44);
              dVar51 = (double)fVar44 * ((double *)(lVar20 + lVar11))[1] +
                       (double)fVar67 * *(double *)(lVar37 + 8 + lVar11) * dVar38 +
                       (double)fVar72 * *(double *)(lVar24 + 8 + lVar11) * dVar38 +
                       (double)fVar73 * ((double *)(lVar25 + lVar11))[1];
              unique0x10000f82 = SUB84(dVar51,0);
              local_178 = (undefined1  [8])
                          ((double)fVar44 * *(double *)(lVar20 + lVar11) +
                           (double)fVar67 * *(double *)(lVar37 + lVar11) * dVar38 +
                          (double)fVar72 * *(double *)(lVar24 + lVar11) * dVar38 +
                          (double)fVar73 * *(double *)(lVar25 + lVar11));
              unique0x10000f86 = (int)((ulonglong)dVar51 >> 0x20);
              local_168 = (double)fVar67 * *(double *)(lVar37 + 0x10 + lVar11) * dVar38 +
                          (double)fVar44 * *(double *)(lVar20 + 0x10 + lVar11) +
                          (double)fVar72 * *(double *)(lVar24 + 0x10 + lVar11) * dVar38 +
                          (double)fVar73 * *(double *)(lVar25 + 0x10 + lVar11);
              local_298 = (double)CONCAT44(local_298._4_4_,fVar43);
              local_218 = (double)fVar43;
              dVar52 = (double)(local_2d0 * 0x20);
              lVar37 = param_1[0x62];
              lVar23 = param_1[0x6c];
              dVar51 = *(double *)(lVar23 + (longlong)dVar52);
              uVar18 = SUB84(dVar51,0);
              uVar50 = (undefined4)((ulonglong)dVar51 >> 0x20);
              dVar47 = *(double *)(lVar23 + 8 + (longlong)dVar52);
              dVar56 = *(double *)(lVar37 + (longlong)dVar52);
              dVar49 = *(double *)(lVar37 + 8 + (longlong)dVar52);
              uVar63 = SUB84(dVar49,0);
              uVar64 = (undefined4)((ulonglong)dVar49 >> 0x20);
              dVar53 = *(double *)(lVar23 + 0x10 + (longlong)dVar52);
              dVar46 = *(double *)(lVar37 + 0x10 + (longlong)dVar52);
              uVar65 = SUB84(dVar46,0);
              uVar66 = (undefined4)((ulonglong)dVar46 >> 0x20);
              dVar58 = *(double *)(lVar23 + 0x18 + (longlong)dVar52);
              uVar68 = SUB84(dVar58,0);
              uVar69 = (undefined4)((ulonglong)dVar58 >> 0x20);
              dVar62 = *(double *)(lVar37 + 0x18 + (longlong)dVar52);
              uVar70 = SUB84(dVar62,0);
              uVar71 = (undefined4)((ulonglong)dVar62 >> 0x20);
              dVar51 = dVar58 * dVar62 + dVar53 * dVar46 + dVar51 * dVar56 + dVar47 * dVar49;
              dVar46 = dVar51 * (double)(&DAT_149931160)[0.0 <= dVar51];
              dVar49 = 1.0 - local_218;
              dVar51 = (double)(&DAT_149931160)[0.0 <= dVar51] * local_218;
              local_280 = (double)CONCAT44(local_280._4_4_,fVar42);
              local_2e0 = uVar22;
              local_208 = puVar29;
              if (dVar46 < 0.9999) {
                pdVar28 = (double *)(lVar37 + (longlong)dVar52);
                puVar30 = (undefined8 *)(lVar23 + (longlong)dVar52);
                dVar58 = dVar46;
                if (1.0 <= dVar46) {
                  dVar58 = 1.0;
                }
                dVar46 = acos((double)(-(ulonglong)(dVar46 < -1.0) & 0xbff0000000000000 |
                                      ~-(ulonglong)(dVar46 < -1.0) & (ulonglong)dVar58));
                dVar58 = sin(dVar46);
                dVar49 = sin(dVar49 * dVar46);
                dVar49 = dVar49 * (1.0 / dVar58);
                dVar51 = sin(dVar51 * dVar46);
                dVar51 = dVar51 * (1.0 / dVar58);
                uVar68 = (undefined4)puVar30[3];
                uVar69 = (undefined4)((ulonglong)puVar30[3] >> 0x20);
                uVar70 = SUB84(pdVar28[3],0);
                uVar71 = (undefined4)((ulonglong)pdVar28[3] >> 0x20);
                dVar53 = (double)puVar30[2];
                uVar65 = SUB84(pdVar28[2],0);
                uVar66 = (undefined4)((ulonglong)pdVar28[2] >> 0x20);
                uVar18 = (undefined4)*puVar30;
                uVar50 = (undefined4)((ulonglong)*puVar30 >> 0x20);
                dVar47 = (double)puVar30[1];
                dVar56 = *pdVar28;
                uVar63 = SUB84(pdVar28[1],0);
                uVar64 = (undefined4)((ulonglong)pdVar28[1] >> 0x20);
                lVar20 = param_1[0x60];
                lVar25 = param_1[0x6a];
                lVar24 = param_1[0x70];
              }
              local_28c = (uint)uVar36;
              dVar58 = (double)CONCAT44(uVar69,uVar68) * dVar49 +
                       (double)CONCAT44(uVar71,uVar70) * dVar51;
              dVar62 = dVar53 * dVar49 + (double)CONCAT44(uVar66,uVar65) * dVar51;
              dVar53 = dVar47 * dVar49 + (double)CONCAT44(uVar64,uVar63) * dVar51;
              dVar46 = (double)CONCAT44(uVar50,uVar18) * dVar49 + dVar56 * dVar51;
              dVar51 = dVar62 * dVar62 + dVar46 * dVar46;
              dVar49 = dVar58 * dVar58 + dVar53 * dVar53;
              auVar54._0_8_ = dVar51 + dVar49;
              auVar54._8_8_ = dVar51 + dVar49;
              auVar48._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
              auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
              auVar55 = sqrtpd(auVar54,auVar54);
              auVar59 = divpd(_DAT_149934d80,auVar55);
              auVar60._0_8_ = auVar59._0_8_ * dVar62;
              auVar60._8_8_ = auVar59._8_8_ * dVar58;
              uVar39 = (ulonglong)(dVar53 * auVar59._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
              auVar55 = blendvpd(local_188,auVar60,auVar48);
              lVar37 = param_1[0x66];
              local_238 = *(double *)(lVar37 + 0x10 + lVar11) * dVar38;
              dVar58 = *(double *)(lVar37 + 8 + lVar11) * dVar38;
              local_2d8 = *(double *)(lVar37 + lVar11) * dVar38;
              dVar62 = *(double *)(lVar24 + 0x10 + lVar11) * dVar38;
              local_2b8 = *(double *)(lVar24 + 8 + lVar11) * dVar38;
              local_258 = *(double *)(lVar24 + lVar11) * dVar38;
              dVar38 = *(double *)(lVar25 + 0x10 + lVar11);
              dVar51 = *(double *)(lVar25 + lVar11);
              dVar49 = *(double *)(lVar25 + 8 + lVar11);
              local_190 = *(double *)(lVar20 + 0x10 + lVar11) * 6.0;
              local_198 = *(double *)(lVar20 + 8 + lVar11) * 6.0;
              local_1a0 = *(double *)(lVar20 + lVar11) * 6.0;
              if (*(char *)(param_1[0x5c] + 0x44) == '\x02') {
                local_278 = (longlong *)0x0;
                local_2c0 = 0.0;
                local_268 = 1.0;
              }
              else if (*(char *)(param_1[0x5c] + 0x44) == '\x01') {
                lVar37 = param_1[100];
                lVar23 = param_1[0x6e];
                local_268 = *(double *)(lVar23 + 0x10 + lVar11);
                local_2c0 = *(double *)(lVar23 + 8 + lVar11);
                local_268 = (*(double *)(lVar37 + 0x10 + lVar11) - local_268) * local_218 +
                            local_268;
                local_2c0 = (*(double *)(lVar37 + 8 + lVar11) - local_2c0) * local_218 + local_2c0;
                local_278 = (longlong *)
                            ((*(double *)(lVar37 + lVar11) - *(double *)(lVar23 + lVar11)) *
                             local_218 + *(double *)(lVar23 + lVar11));
              }
              local_240 = dVar38 * 6.0;
              local_1a8 = dVar49 * 6.0;
              local_1b0 = dVar51 * 6.0;
              local_2b0 = (double)(ulonglong)
                                  *(ushort *)
                                   (param_1[0x2e] +
                                   (longlong)*(int *)((longlong)param_1 + 0x18c) * 2);
              puVar31 = (undefined1 *)
                        ((longlong)(int)param_1[0x31] * (longlong)local_2b0 + param_1[0x2d]);
              iVar17 = (int)local_208;
              lVar37 = param_1[2];
              iVar35 = *(int *)((longlong)param_1 + 0x24);
              fVar42 = local_2dc - (float)iVar17 * local_224;
              *(byte *)(lVar37 + 0x1f8) = *(byte *)(lVar37 + 0x1f8) | 1;
              dVar56 = local_2b8 * 3.0;
              auVar9._8_4_ = (int)uVar39;
              auVar9._0_8_ = (ulonglong)(dVar46 * auVar59._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
              auVar9._12_4_ = (int)(uVar39 >> 0x20);
              *(undefined1 (*) [16])(lVar37 + 0x240) = auVar9;
              dVar46 = local_258 * 3.0;
              *(undefined1 (*) [16])(lVar37 + 0x250) = auVar55;
              local_1b8 = dVar62 * 4.0;
              *(undefined1 (*) [8])(lVar37 + 0x260) = local_178;
              *(undefined8 *)(lVar37 + 0x268) = uStack_170;
              local_1c0 = local_2b8 * 4.0;
              *(double *)(lVar37 + 0x270) = local_168;
              *(undefined8 *)(lVar37 + 0x278) = 0;
              dVar53 = local_258 * 4.0;
              *(undefined8 *)(lVar37 + 0x280) = 0x3ff0000000000000;
              *(undefined8 *)(lVar37 + 0x288) = 0x3ff0000000000000;
              *(undefined8 *)(lVar37 + 0x290) = 0x3ff0000000000000;
              *(undefined8 *)(lVar37 + 0x298) = 0;
              local_288 = dVar52;
              local_1d8 = lVar11;
              (**(code **)(*param_1 + 200))(param_1,puVar31,local_178,&DAT_14c8464e0);
              iVar27 = *(int *)(lVar7 + 0x78);
              if (0 < iVar27) {
                lVar37 = 0;
                do {
                  plVar8 = *(longlong **)(*(longlong *)(lVar7 + 0x70) + lVar37 * 8);
                  if ((plVar8 != (longlong *)0x0) && ((char)plVar8[5] < '\0')) {
                    uVar18 = FUN_147bf6ddc(param_1,plVar8);
                    local_2f8 = puVar31;
                    (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,uVar18);
                    iVar27 = *(int *)(lVar7 + 0x78);
                  }
                  lVar37 = lVar37 + 1;
                } while (lVar37 < iVar27);
              }
              dVar57 = dVar62 * 3.0 + local_240;
              dVar56 = dVar56 + local_1a8;
              dVar46 = dVar46 + local_1b0;
              dVar61 = local_238 * 3.0;
              dVar52 = local_2d8 * 3.0;
              dVar47 = dVar38 * -6.0 - local_1b8;
              dVar49 = dVar49 * -6.0 - local_1c0;
              dVar10 = local_238 + local_238;
              local_238 = dVar58 + dVar58;
              local_2d8 = local_2d8 + local_2d8;
              plVar8 = *(longlong **)(lVar7 + 0x48);
              local_1f0 = dVar62;
              if (plVar8 != (longlong *)0x0) {
                local_2f8 = puVar31;
                local_240 = dVar57;
                (**(code **)(*plVar8 + 0x2a8))
                          (plVar8,param_1,*(undefined4 *)((longlong)param_1 + 0x24));
                dVar57 = local_240;
              }
              dVar38 = local_1c8;
              dVar51 = (dVar51 * -6.0 - dVar53) - local_2d8;
              dVar62 = (double)local_2a0._0_4_;
              iVar17 = iVar17 + 1;
              local_2d8 = (double)CONCAT44(local_2d8._4_4_,iVar17);
              if (DAT_14c7616e8 == 0) {
                fVar43 = 1.0 - (float)iVar17 / local_230;
              }
              else {
                fVar43 = 0.0;
              }
              dVar53 = local_1f0 +
                       ((dVar47 - dVar10) + local_190) * local_218 +
                       ((dVar61 + dVar57) - local_190) * dVar62;
              dVar49 = local_2b8 +
                       ((dVar49 - local_238) + local_198) * local_218 +
                       ((dVar58 * 3.0 + dVar56) - local_198) * dVar62;
              dVar51 = local_258 +
                       (dVar51 + local_1a0) * local_218 + ((dVar52 + dVar46) - local_1a0) * dVar62;
              in_RDX = (uint *)(puVar31 + iVar35);
              fVar44 = (1.0 - local_298._0_4_) * local_21c;
              fVar67 = local_298._0_4_ * local_21c;
              (**(code **)(*param_1 + 0xd0))(param_1,puVar31,fVar43);
              uVar39 = local_2d0;
              local_2f0 = puVar31 + 0x60;
              local_2f8 = puVar31 + 0x94;
              uVar19 = (uint)local_2d0;
              FUN_147c3f3d2(param_1,local_2d0 & 0xffffffff,puVar31,local_2e0 & 0xffffff01);
              *(float *)(puVar31 + 0x90) = fVar42 * *(float *)(puVar31 + 0x94);
              *(undefined4 *)(puVar31 + 100) = *(undefined4 *)(puVar31 + 0x60);
              *(undefined4 *)(puVar31 + 0x58) = *(undefined4 *)(puVar31 + 0x68);
              *(undefined8 *)(puVar31 + 0x50) = *(undefined8 *)(puVar31 + 0x60);
              lVar37 = param_1[2];
              pbVar1 = (byte *)(lVar37 + 0x1f8);
              *pbVar1 = *pbVar1 | 1;
              puVar21 = local_158;
              puVar30 = (undefined8 *)(lVar37 + 0x240);
              for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
                *puVar30 = *(undefined8 *)puVar21;
                puVar21 = puVar21 + 2;
                puVar30 = puVar30 + 1;
              }
              *in_RDX = *in_RDX | 0xfffffff;
              uVar22 = in_RDX[9] | 3;
              if ((int)local_208 == local_228) {
                uVar22 = in_RDX[9] & 0xfffffffc | 2;
              }
              in_RDX[1] = uVar19;
              in_RDX[10] = (uint)(float)(dVar51 * local_1d0);
              in_RDX[0xb] = (uint)(float)(dVar49 * local_1d0);
              in_RDX[0xc] = (uint)(float)(dVar53 * local_1d0);
              in_RDX[3] = (uint)(local_290 - fVar44);
              in_RDX[4] = (uint)fVar67;
              in_RDX[0xd] = (uint)(float)(double)local_278;
              in_RDX[0xe] = (uint)(float)local_2c0;
              in_RDX[0xf] = (uint)(float)local_268;
              in_RDX[9] = uVar22;
              in_RDX[6] = (uint)local_2c8;
              if ((local_2e0 & 1) == 0) {
                if (puVar41 != (undefined1 *)0x0) {
                  if ((*local_2a8 & 0xf0003fff) == 0x40003fff) {
                    uVar19 = (SUB84(local_2b0,0) & 0x3fff) << 0xe | 0x80003fff;
                  }
                  else {
                    uVar19 = (*local_2a8 & 0x3fff) + (SUB84(local_2b0,0) & 0x3fff) * 0x4000 +
                             0x20000000;
                  }
                  *local_2a8 = uVar19;
                  *in_RDX = local_28c & 0x4fffffff | 0x4fffc000;
                  goto LAB_1435fc758;
                }
                dVar51 = (double)(ulonglong)local_28c;
                puVar31 = (undefined1 *)0x0;
                in_RDX = local_2a8;
              }
              else {
                *in_RDX = 0x4fffffff;
                *(undefined4 *)(param_1[0x59] + uVar39 * 4) = 0;
                in_RDX[5] = 0;
LAB_1435fc758:
                if (1e-08 < (float)local_1e8._0_4_) {
                  if (puVar41 == (undefined1 *)0x0) {
                    fVar42 = 0.0;
                  }
                  else {
                    *(float *)(param_1[0x59] + local_2d0 * 4) =
                         (float)((double)*(float *)(param_1[0x59] + local_2d0 * 4) +
                                SQRT((*(double *)(puVar31 + 0x28) - *(double *)(puVar41 + 0x28)) *
                                     (*(double *)(puVar31 + 0x28) - *(double *)(puVar41 + 0x28)) +
                                     (*(double *)(puVar31 + 0x18) - *(double *)(puVar41 + 0x18)) *
                                     (*(double *)(puVar31 + 0x18) - *(double *)(puVar41 + 0x18)) +
                                     (*(double *)(puVar31 + 0x20) - *(double *)(puVar41 + 0x20)) *
                                     (*(double *)(puVar31 + 0x20) - *(double *)(puVar41 + 0x20))));
                    fVar42 = *(float *)(param_1[0x59] + local_2d0 * 4) /
                             *(float *)(param_1[0x5c] + 0x50);
                  }
                  in_RDX[5] = (uint)fVar42;
                }
                *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
                dVar51 = local_2b0;
              }
              fVar42 = local_280._0_4_ + local_220;
              uVar22 = 0;
              puVar29 = (uint *)((ulonglong)local_2d8 & 0xffffffff);
              uVar36 = (ulonglong)dVar51 & 0xffffffff;
              puVar41 = puVar31;
              local_2a8 = in_RDX;
            } while (local_2d8._0_4_ != (uint)local_2c8);
            lVar37 = param_1[0x60];
            lVar23 = param_1[0x6a];
            *(undefined8 *)(lVar23 + 0x10 + local_1d8) = *(undefined8 *)(lVar37 + 0x10 + local_1d8);
            puVar30 = (undefined8 *)(lVar37 + local_1d8);
            uVar13 = puVar30[1];
            puVar2 = (undefined8 *)(lVar23 + local_1d8);
            *puVar2 = *puVar30;
            puVar2[1] = uVar13;
            lVar37 = param_1[0x6c];
            puVar30 = (undefined8 *)(param_1[0x62] + (longlong)local_288);
            uVar13 = *puVar30;
            uVar14 = puVar30[1];
            puVar30 = (undefined8 *)(param_1[0x62] + 0x10 + (longlong)local_288);
            uVar15 = puVar30[1];
            puVar2 = (undefined8 *)(lVar37 + 0x10 + (longlong)local_288);
            *puVar2 = *puVar30;
            puVar2[1] = uVar15;
            puVar30 = (undefined8 *)(lVar37 + (longlong)local_288);
            *puVar30 = uVar13;
            puVar30[1] = uVar14;
            lVar37 = param_1[0x66];
            lVar23 = param_1[0x70];
            *(undefined8 *)(lVar23 + 0x10 + local_1d8) = *(undefined8 *)(lVar37 + 0x10 + local_1d8);
            puVar30 = (undefined8 *)(lVar37 + local_1d8);
            uVar13 = puVar30[1];
            puVar2 = (undefined8 *)(lVar23 + local_1d8);
            *puVar2 = *puVar30;
            puVar2[1] = uVar13;
            lVar37 = param_1[100];
            lVar23 = param_1[0x6e];
            *(undefined8 *)(lVar23 + 0x10 + local_1d8) = *(undefined8 *)(lVar37 + 0x10 + local_1d8);
            puVar30 = (undefined8 *)(lVar37 + local_1d8);
            uVar13 = puVar30[1];
            puVar2 = (undefined8 *)(lVar23 + local_1d8);
            *puVar2 = *puVar30;
            puVar2[1] = uVar13;
            *(float *)(param_1[0x53] + local_2d0 * 4) = local_290;
            *(undefined4 *)(param_1[0x7d] + local_2d0 * 4) =
                 *(undefined4 *)(param_1[0x7b] + local_2d0 * 4);
            uVar39 = local_2d0;
            param_2 = local_2dc;
            if (((param_1[0x5e] != 0) && (*(char *)(param_1[0x5e] + 0x30) == '\x01')) &&
               (1.0 < *(float *)(param_1[0x7b] + local_2d0 * 4))) {
              *in_RDX = *in_RDX & 0xfffffff | 0x10000000;
              *(undefined4 *)(param_1[0x79] + local_2d0 * 4) = 0xffffffff;
            }
          }
        }
        else {
          if (puVar21 != (uint *)0x0) {
            *puVar21 = *puVar21 & 0xfffffff | 0x10000000;
          }
          lVar20 = uVar39 * 0x18;
          lVar37 = param_1[0x60];
          lVar23 = param_1[0x6a];
          *(undefined8 *)(lVar23 + 0x10 + lVar20) = *(undefined8 *)(lVar37 + 0x10 + lVar20);
          puVar30 = (undefined8 *)(lVar37 + lVar20);
          uVar13 = puVar30[1];
          puVar2 = (undefined8 *)(lVar23 + lVar20);
          *puVar2 = *puVar30;
          puVar2[1] = uVar13;
          lVar23 = uVar39 * 0x20;
          lVar37 = param_1[0x6c];
          puVar30 = (undefined8 *)(param_1[0x62] + lVar23);
          uVar13 = *puVar30;
          uVar14 = puVar30[1];
          puVar30 = (undefined8 *)(param_1[0x62] + 0x10 + lVar23);
          uVar15 = puVar30[1];
          puVar2 = (undefined8 *)(lVar37 + 0x10 + lVar23);
          *puVar2 = *puVar30;
          puVar2[1] = uVar15;
          puVar30 = (undefined8 *)(lVar37 + lVar23);
          *puVar30 = uVar13;
          puVar30[1] = uVar14;
          lVar37 = param_1[0x66];
          lVar23 = param_1[0x70];
          *(undefined8 *)(lVar23 + 0x10 + lVar20) = *(undefined8 *)(lVar37 + 0x10 + lVar20);
          puVar30 = (undefined8 *)(lVar37 + lVar20);
          uVar13 = puVar30[1];
          puVar2 = (undefined8 *)(lVar23 + lVar20);
          *puVar2 = *puVar30;
          puVar2[1] = uVar13;
          lVar37 = param_1[100];
          in_RDX = (uint *)param_1[0x6e];
          *(undefined8 *)(in_RDX + uVar39 * 6 + 4) = *(undefined8 *)(lVar37 + 0x10 + lVar20);
          puVar30 = (undefined8 *)(lVar37 + lVar20);
          uVar13 = puVar30[1];
          *(undefined8 *)(in_RDX + uVar39 * 6) = *puVar30;
          *(undefined8 *)(in_RDX + uVar39 * 6 + 2) = uVar13;
          *(undefined4 *)(param_1[0x7d] + uVar39 * 4) = *(undefined4 *)(param_1[0x7b] + uVar39 * 4);
          *(undefined4 *)(param_1[0x79] + uVar39 * 4) = 0xffffffff;
        }
      }
      else {
        fVar42 = (float)iVar27;
        if (fVar42 < 0.0) {
          fVar42 = sqrtf(fVar42);
        }
        else {
          fVar42 = SQRT(fVar42);
        }
        in_RDX = (uint *)(ulonglong)(uint)(iVar27 + 1 + (int)fVar42);
        cVar16 = (**(code **)(*param_1 + 0x18))(param_1,in_RDX,param_2 < 0.25);
        if (cVar16 != '\0') goto LAB_1435fb2b5;
      }
      uVar39 = uVar39 + 1;
    } while ((longlong)uVar39 < (longlong)*(int *)((longlong)param_1 + 0x284));
    if ((local_2e1 & 1) == 0) goto LAB_1435fc965;
  }
  lVar7 = **(longlong **)(param_1[1] + 0x40);
  fVar42 = *(float *)(param_1 + 0x33);
  FUN_147a77524(*(longlong *)(lVar7 + 0x50) + 0x68,(int)param_1[0x34],param_1[2],0);
  FUN_147c2c0c2(*(undefined8 *)(lVar7 + 0x50));
  fVar43 = (float)FUN_147bff2aa(param_1[1]);
  fVar44 = (float)FUN_147a77524(*(longlong *)(lVar7 + 0x50) + 0x38,(int)param_1[0x34],param_1[2],0);
  dVar38 = (double)fVar43;
  if (1.0 <= dVar38) {
    dVar38 = 1.0;
  }
  if (dVar38 <= 0.0) {
    dVar38 = 0.0;
  }
  fVar67 = (float)(dVar38 * (double)fVar44 + 0.0);
  iVar35 = *(int *)(param_1[0x5c] + 0x3c);
  fVar43 = param_2 * fVar67 + fVar42;
  iVar40 = (int)ROUND(fVar43 + fVar43 + -0.5) >> 1;
  fVar44 = (float)iVar40;
  *(float *)(param_1 + 0x33) = fVar43 - fVar44;
  iVar27 = *(int *)((longlong)param_1 + 0x18c);
  iVar17 = iVar40;
  if (0 < iVar35) {
    if (0 < (iVar40 - iVar35) + iVar27) {
      (**(code **)(*param_1 + 0x228))(param_1,0);
      iVar27 = *(int *)((longlong)param_1 + 0x18c);
    }
    iVar17 = iVar35;
    if (iVar35 <= iVar40) {
      iVar17 = iVar40;
    }
  }
  iVar27 = iVar27 + iVar17;
  if (*(int *)((longlong)param_1 + 0x194) <= iVar27) {
    fVar43 = (float)iVar27;
    if (fVar43 < 0.0) {
      fVar43 = sqrtf(fVar43);
    }
    else {
      fVar43 = SQRT(fVar43);
    }
    cVar16 = (**(code **)(*param_1 + 0x18))(param_1,iVar27 + 1 + (int)fVar43,param_2 < 0.25);
    if (cVar16 == '\0') goto LAB_1435fc965;
  }
  iVar35 = *(int *)((longlong)param_1 + 0x18c);
  dVar38 = 2.12199579047121e-314;
  if (0 < (longlong)iVar35) {
    lVar37 = 0;
    do {
      uVar6 = *(ushort *)(param_1[0x2e] + lVar37 * 2);
      puVar41 = (undefined1 *)((longlong)(int)param_1[0x31] * (ulonglong)uVar6 + param_1[0x2d]);
      if (((*(uint *)(puVar41 + *(int *)((longlong)param_1 + 0x24)) & 0xf0000000) == 0x40000000) &&
         (puVar21 = (uint *)(puVar41 + *(int *)((longlong)param_1 + 0x24)), puVar21[1] == 0)) {
        dVar38 = (double)(ulonglong)uVar6;
        goto LAB_1435fcbb7;
      }
      lVar37 = lVar37 + 1;
    } while (iVar35 != lVar37);
  }
  puVar21 = (uint *)0x0;
  puVar41 = (undefined1 *)0x0;
LAB_1435fcbb7:
  local_2d8 = (double)CONCAT44(local_2d8._4_4_,
                               (int)CONCAT71((int7)(int3)((uint)iVar35 >> 8),
                                             puVar41 == (undefined1 *)0x0));
  lVar37 = param_1[0x5c];
  fVar43 = *(float *)(lVar37 + 0x50);
  if ((*(longlong *)(lVar7 + 0x58) == 0) ||
     (puVar29 = (uint *)FUN_147bf7da6(), puVar29 == (uint *)0x0)) {
    puVar29 = (uint *)0x0;
  }
  else if (((*puVar29 & 1) == 0) && ((*puVar29 & 8) == 0)) {
    puVar29 = (uint *)0x0;
  }
  if ((0.0 < fVar67) && (0 < iVar40)) {
    fVar67 = 1.0 / fVar67;
    dVar51 = 0.0;
    dVar49 = 0.0;
    local_258 = (double)CONCAT44(local_258._4_4_,0x3f800000);
    if (*(char *)(lVar37 + 0x44) == '\x01') {
      lVar37 = param_1[2];
      dVar51 = *(double *)(lVar37 + 0x280) * 0.0;
      dVar52 = *(double *)(lVar37 + 0x288) * 0.0;
      dVar47 = *(double *)(lVar37 + 0x290) * 1.0;
      dVar56 = *(double *)(lVar37 + 0x240);
      dVar53 = *(double *)(lVar37 + 0x248);
      dVar49 = *(double *)(lVar37 + 0x250);
      dVar46 = *(double *)(lVar37 + 600);
      dVar58 = dVar52 * dVar56 - dVar51 * dVar53;
      dVar61 = dVar47 * dVar53 - dVar52 * dVar49;
      dVar62 = dVar51 * dVar49 - dVar56 * dVar47;
      dVar61 = dVar61 + dVar61;
      dVar62 = dVar62 + dVar62;
      dVar58 = dVar58 + dVar58;
      dVar51 = (dVar58 * dVar53 - dVar62 * dVar49) + dVar46 * dVar61 + dVar51;
      dVar49 = (dVar49 * dVar61 - dVar56 * dVar58) + *(double *)(lVar37 + 600) * dVar62 + dVar52;
      local_258 = (double)CONCAT44(local_258._4_4_,
                                   (float)(dVar58 * dVar46 + dVar47 +
                                          (dVar62 * dVar56 - dVar61 * dVar53)));
    }
    local_218 = (double)CONCAT44(local_218._4_4_,(int)param_1[0x51]);
    local_2a8 = (uint *)(param_1 + 9);
    local_2c0 = (double)CONCAT44(local_2c0._4_4_,(float)dVar51);
    local_268 = (double)CONCAT44(local_268._4_4_,(float)dVar49);
    local_2e0 = 0;
    local_2c8 = CONCAT44(local_2c8._4_4_,iVar40);
    local_278 = param_1 + 0x33;
    local_208 = puVar29;
LAB_1435fcd95:
    local_2d0 = CONCAT44(local_2d0._4_4_,SUB84(dVar38,0));
    local_2b8 = (double)(ulonglong)
                        *(ushort *)
                         (param_1[0x2e] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 2);
    puVar31 = (undefined1 *)((longlong)(int)param_1[0x31] * (longlong)local_2b8 + param_1[0x2d]);
    fVar73 = (float)(int)local_2e0;
    iVar35 = *(int *)((longlong)param_1 + 0x24);
    local_2e0 = local_2e0 + 1;
    fVar72 = (float)(int)local_2e0;
    fVar74 = (1.0 / fVar44) * fVar72;
    if (1.0 <= fVar74) {
      fVar74 = 1.0;
    }
    (**(code **)(*param_1 + 200))(param_1,puVar31,local_2a8,&DAT_14c8464e0);
    plVar8 = *(longlong **)(lVar7 + 0x48);
    if (plVar8 != (longlong *)0x0) {
      local_2f8 = puVar31;
      (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,*(undefined4 *)((longlong)param_1 + 0x24));
    }
    iVar27 = *(int *)(lVar7 + 0x78);
    if (0 < iVar27) {
      lVar37 = 0;
      do {
        plVar8 = *(longlong **)(*(longlong *)(lVar7 + 0x70) + lVar37 * 8);
        if ((char)plVar8[5] < '\0') {
          uVar18 = FUN_147bf6ddc(param_1,plVar8);
          local_2f8 = puVar31;
          (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,uVar18);
          iVar27 = *(int *)(lVar7 + 0x78);
        }
        lVar37 = lVar37 + 1;
      } while (lVar37 < iVar27);
    }
    (**(code **)(*param_1 + 0xd0))(param_1,puVar31,1.0 - fVar72 / fVar44);
    dVar38 = local_2d8;
    local_2f0 = puVar31 + 0x60;
    local_2f8 = puVar31 + 0x94;
    FUN_147c3f3d2(param_1,0,puVar31);
    *(float *)(puVar31 + 0x90) =
         (((fVar42 * fVar67 + param_2) - fVar67) - fVar73 * fVar67) * *(float *)(puVar31 + 0x94);
    *(undefined4 *)(puVar31 + 100) = *(undefined4 *)(puVar31 + 0x60);
    *(undefined4 *)(puVar31 + 0x58) = *(undefined4 *)(puVar31 + 0x68);
    *(undefined8 *)(puVar31 + 0x50) = *(undefined8 *)(puVar31 + 0x60);
    if (local_208 != (uint *)0x0) {
      (**(code **)(**(longlong **)(lVar7 + 0x58) + 0x388))();
    }
    puVar29 = (uint *)(puVar31 + iVar35);
    if (fVar74 <= 0.0) {
      fVar74 = 0.0;
    }
    *puVar29 = *puVar29 | 0xfffffff;
    puVar29[1] = 0;
    fVar72 = *(float *)(puVar31 + 0x44);
    fVar4 = *(float *)(puVar31 + 0x48);
    puVar29[10] = (uint)(-*(float *)(puVar31 + 0x40) * local_2dc);
    puVar29[0xb] = (uint)(-fVar72 * local_2dc);
    puVar29[0xc] = (uint)(-fVar4 * local_2dc);
    puVar29[3] = (uint)(fVar74 * local_2dc + local_218._0_4_);
    puVar29[4] = (uint)(fVar73 * fVar67);
    puVar29[0xd] = local_2c0._0_4_;
    puVar29[0xe] = local_268._0_4_;
    puVar29[0xf] = local_258._0_4_;
    *(byte *)(puVar29 + 9) = (byte)puVar29[9] & 0xfc;
    puVar29[6] = 1;
    if (((ulonglong)dVar38 & 1) != 0) {
      *puVar29 = 0x4fffffff;
      *(undefined4 *)param_1[0x59] = 0;
      puVar29[5] = 0;
LAB_1435fd072:
      if (1e-08 < ABS(fVar43)) {
        if (puVar41 == (undefined1 *)0x0) {
          fVar72 = 0.0;
        }
        else {
          *(float *)param_1[0x59] =
               (float)((double)*(float *)param_1[0x59] +
                      SQRT((*(double *)(puVar31 + 0x28) - *(double *)(puVar41 + 0x28)) *
                           (*(double *)(puVar31 + 0x28) - *(double *)(puVar41 + 0x28)) +
                           (*(double *)(puVar31 + 0x18) - *(double *)(puVar41 + 0x18)) *
                           (*(double *)(puVar31 + 0x18) - *(double *)(puVar41 + 0x18)) +
                           (*(double *)(puVar31 + 0x20) - *(double *)(puVar41 + 0x20)) *
                           (*(double *)(puVar31 + 0x20) - *(double *)(puVar41 + 0x20))));
          fVar72 = *(float *)param_1[0x59] / *(float *)(param_1[0x5c] + 0x50);
        }
        puVar29[5] = (uint)fVar72;
      }
      *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
      if ((((ABS((float)puVar29[10]) <= 0.0001) && (ABS((float)puVar29[0xb]) <= 0.0001)) &&
          (ABS((float)puVar29[0xc]) <= 0.0001)) &&
         (puVar29 != (uint *)0x0 && puVar31 != (undefined1 *)0x0)) {
        bVar34 = false;
        puVar21 = puVar29;
        puVar41 = puVar31;
        while ((!bVar34 || ((puVar21[9] & 1) != 0))) {
          if (((ulonglong)*puVar21 & 0x3fff) == 0x3fff) goto LAB_1435fd167;
          puVar41 = (undefined1 *)
                    ((longlong)(int)param_1[0x31] * ((ulonglong)*puVar21 & 0x3fff) + param_1[0x2d]);
          bVar34 = true;
          puVar21 = (uint *)(puVar41 + *(int *)((longlong)param_1 + 0x24));
        }
        if (puVar41 != (undefined1 *)0x0) {
          dVar38 = *(double *)(puVar31 + 0x28);
          dVar51 = *(double *)(puVar41 + 0x28);
          dVar49 = *(double *)(puVar31 + 0x20);
          dVar46 = *(double *)(puVar41 + 0x20);
          dVar58 = 1.0 / (double)((float)puVar29[3] - (float)puVar21[3]);
          puVar29[10] = (uint)(float)(dVar58 * (*(double *)(puVar31 + 0x18) -
                                               *(double *)(puVar41 + 0x18)));
          puVar29[0xb] = (uint)(float)((dVar49 - dVar46) * dVar58);
          puVar29[0xc] = (uint)(float)((dVar38 - dVar51) * dVar58);
        }
      }
LAB_1435fd167:
      if (((*(uint *)(param_1[0x5c] + 0x40) & 0x18) == 8) &&
         (puVar29 != (uint *)0x0 && puVar31 != (undefined1 *)0x0)) {
        bVar34 = false;
        puVar21 = puVar29;
        puVar41 = puVar31;
        while ((!bVar34 || ((puVar21[9] & 1) != 0))) {
          if (((ulonglong)*puVar21 & 0x3fff) == 0x3fff) goto LAB_1435fd358;
          puVar41 = (undefined1 *)
                    ((longlong)(int)param_1[0x31] * ((ulonglong)*puVar21 & 0x3fff) + param_1[0x2d]);
          bVar34 = true;
          puVar21 = (uint *)(puVar41 + *(int *)((longlong)param_1 + 0x24));
        }
        puVar33 = puVar41;
        puVar32 = puVar21;
        if ((puVar21 != (uint *)0x0) && (puVar41 != (undefined1 *)0x0)) {
          bVar34 = false;
          puVar26 = puVar21;
          goto LAB_1435fd1e6;
        }
        if (puVar41 != (undefined1 *)0x0) goto LAB_1435fd2f0;
      }
      goto LAB_1435fd358;
    }
    if (puVar41 != (undefined1 *)0x0) {
      puVar29[1] = 0;
      if ((*puVar21 & 0xf0003fff) == 0x40003fff) {
        uVar19 = (SUB84(local_2b8,0) & 0x3fff) << 0xe | 0x80003fff;
      }
      else {
        uVar19 = (*puVar21 & 0x3fff) + (SUB84(local_2b8,0) & 0x3fff) * 0x4000 + 0x20000000;
      }
      *puVar21 = uVar19;
      *puVar29 = (uint)local_2d0 & 0x4fffffff | 0x4fffc000;
      goto LAB_1435fd072;
    }
    dVar38 = (double)(local_2d0 & 0xffffffff);
    puVar31 = (undefined1 *)0x0;
    goto LAB_1435fd36b;
  }
LAB_1435fc965:
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1435fd1e6:
  if ((!bVar34) || ((puVar26[9] & 1) != 0)) {
    puVar33 = puVar41;
    if (((ulonglong)*puVar26 & 0x3fff) == 0x3fff) goto LAB_1435fd2f0;
    puVar33 = (undefined1 *)
              ((longlong)(int)param_1[0x31] * ((ulonglong)*puVar26 & 0x3fff) + param_1[0x2d]);
    puVar26 = (uint *)(puVar33 + *(int *)((longlong)param_1 + 0x24));
    bVar34 = true;
    goto LAB_1435fd1e6;
  }
  puVar32 = puVar26;
  if (puVar33 == (undefined1 *)0x0) {
    puVar33 = puVar41;
    puVar32 = puVar21;
  }
LAB_1435fd2f0:
  dVar38 = *(double *)(puVar31 + 0x28);
  dVar51 = *(double *)(puVar33 + 0x28);
  dVar49 = *(double *)(puVar31 + 0x20);
  dVar46 = *(double *)(puVar33 + 0x20);
  dVar58 = 1.0 / (double)((float)puVar29[3] - (float)puVar32[3]);
  puVar21[10] = (uint)(float)(dVar58 * (*(double *)(puVar31 + 0x18) - *(double *)(puVar33 + 0x18)));
  puVar21[0xb] = (uint)(float)((dVar49 - dVar46) * dVar58);
  puVar21[0xc] = (uint)(float)((dVar38 - dVar51) * dVar58);
LAB_1435fd358:
  *(uint *)param_1[0x53] = puVar29[3];
  puVar21 = puVar29;
  dVar38 = local_2b8;
LAB_1435fd36b:
  local_2d8 = (double)((ulonglong)local_2d8 & 0xffffffff00000000);
  puVar41 = puVar31;
  if (local_2e0 == (uint)local_2c8) goto LAB_1435fc965;
  goto LAB_1435fcd95;
}



// FUNCTION 1435fd3b6 FUN_1435fd3b6 body=3234 status=ok
// SIG undefined FUN_1435fd3b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435fd3b6(longlong param_1,int param_2,double *param_3,double *param_4,
                  undefined1 (*param_5) [16],double *param_6,float *param_7)

{
  double dVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_188 [32];
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x693) & 0x10) == 0) && (DAT_14c86a9f8 == '\x01')
      ) && (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar7 = *(longlong *)(param_1 + 0x2f0);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x30) == '\x02') {
      if (*(longlong *)(lVar7 + 0x34) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x3a0);
        if (lVar7 == 0) {
          FUN_147c3eb06(param_1);
          lVar7 = *(longlong *)(param_1 + 0x3a0);
          if (lVar7 == 0) goto LAB_1435fdd17;
        }
        pdVar8 = (double *)&DAT_14c846480;
        if (*(longlong *)(lVar7 + 0x1c8) != 0) {
          pdVar8 = (double *)(*(longlong *)(lVar7 + 0x1c8) + 0x240);
        }
        dVar1 = *pdVar8;
        dVar16 = pdVar8[1];
        dVar22 = pdVar8[2];
        dStack_100 = pdVar8[3];
        dVar24 = pdVar8[5];
        dVar13 = pdVar8[6];
        dVar18 = pdVar8[8] * 0.0;
        dVar21 = pdVar8[9] * 0.0;
        local_148 = pdVar8[10] * 1.0;
        dStack_140 = pdVar8[0xb] * 0.0;
        local_168 = pdVar8[3];
        dStack_160 = pdVar8[3];
        *param_3 = pdVar8[4];
        param_3[1] = dVar24;
        param_3[2] = dVar13;
        local_118 = dVar1;
        dStack_110 = dVar16;
        local_108 = dVar22;
        FUN_1448052ee(&local_118,&local_138);
        auVar20._8_8_ = dStack_130;
        auVar20._0_8_ = local_138;
        auVar17 = divpd(auVar20,_DAT_1499387d0);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_128;
        auVar20 = divpd(auVar19,_DAT_1499387d0);
        auVar17 = roundpd(auVar17,auVar17,3);
        auVar20 = roundpd(auVar20,auVar20,3);
        dVar26 = (local_138 - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar23 = (dStack_130 - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar13 = (local_128 - auVar20._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar24 = (0.0 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        local_158 = sin(dVar26);
        dVar25 = sin(dVar23);
        dVar14 = sin(dVar13);
        sin(dVar24);
        dVar26 = cos(dVar26);
        dVar23 = cos(dVar23);
        dVar15 = cos(dVar13);
        cos(dVar24);
        dVar13 = dVar25 * local_158 * dVar14 + dVar23 * dVar26 * dVar15;
        *param_4 = local_158 * dVar25 * dVar15 - dVar26 * dVar23 * dVar14;
        param_4[1] = -(local_158 * dVar23 * dVar15) - dVar26 * dVar25 * dVar14;
        auVar17._8_4_ = SUB84(dVar13,0);
        auVar17._0_8_ = -(dVar23 * local_158 * dVar14) + dVar25 * dVar26 * dVar15;
        auVar17._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(param_4 + 2) = auVar17;
        (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0x328))
                  (*(longlong **)(param_1 + 0x3a0),&local_118);
        param_6[2] = local_108;
        *param_6 = local_118;
        param_6[1] = dStack_110;
        *param_7 = (float)(param_6[2] * param_6[2] + *param_6 * *param_6 + param_6[1] * param_6[1]);
        dVar13 = dVar21 * dVar1 - dVar16 * dVar18;
        dVar24 = local_148 * dVar16 - dVar22 * dVar21;
        dVar26 = dVar18 * dVar22 - dVar1 * local_148;
        dVar24 = dVar24 + dVar24;
        dVar26 = dVar26 + dVar26;
        dVar13 = dVar13 + dVar13;
        *(double *)*param_5 = (dVar13 * dVar16 - dVar26 * dVar22) + local_168 * dVar24 + dVar18;
        *(double *)(*param_5 + 8) =
             (dVar22 * dVar24 - dVar1 * dVar13) + dStack_160 * dVar26 + dVar21;
        *(double *)param_5[1] = dVar13 * local_168 + local_148 + (dVar26 * dVar1 - dVar24 * dVar16);
        goto LAB_1435fdfc3;
      }
    }
    else if (*(char *)(lVar7 + 0x30) == '\x01') {
      plVar10 = *(longlong **)(param_1 + 0x3b8);
      if (plVar10 == (longlong *)0x0) {
        FUN_147c3eb06(param_1);
        plVar10 = *(longlong **)(param_1 + 0x3b8);
        if (plVar10 == (longlong *)0x0) goto LAB_1435fdd17;
      }
      if ((plVar10[0x2e] != 0) && (0 < *(int *)((longlong)plVar10 + 0x18c))) {
        dVar13 = (double)(longlong)param_2;
        if ((*(int *)(*(longlong *)(param_1 + 0x3c8) + (longlong)dVar13 * 4) != -1) &&
           ((lVar7 = (**(code **)(*plVar10 + 0x110))(), lVar7 == 0 ||
            (1.0 < *(float *)(lVar7 + 0x90))))) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x3c8) + (longlong)dVar13 * 4) = 0xffffffff;
        }
        plVar10 = *(longlong **)(param_1 + 0x3b8);
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x3c8) + (longlong)dVar13 * 4);
        if (iVar6 == -1) {
          if (0 < *(int *)((longlong)plVar10 + 0x18c)) {
            cVar2 = *(char *)(*(longlong *)(param_1 + 0x2f0) + 0x88);
            lVar7 = 0;
            if (cVar2 == '\x01') {
              iVar11 = *(int *)(param_1 + 0x3c0) + 1;
              *(int *)(param_1 + 0x3c0) = iVar11;
              iVar6 = 0;
              if (iVar11 < *(int *)((longlong)plVar10 + 0x18c)) {
                iVar6 = iVar11;
              }
              *(int *)(param_1 + 0x3c0) = iVar6;
              if (0 < *(int *)(param_1 + 0x284)) {
                do {
                  lVar7 = 0;
                  bVar12 = false;
                  do {
                    if (param_2 != (int)lVar7) {
                      bVar12 = (bool)(bVar12 | *(uint *)(*(longlong *)(param_1 + 0x3c8) + lVar7 * 4)
                                               == (uint)*(ushort *)
                                                         (plVar10[0x2e] + (longlong)iVar6 * 2));
                    }
                    lVar7 = lVar7 + 1;
                  } while ((int)lVar7 < *(int *)(param_1 + 0x284));
                  if (!bVar12) break;
                  iVar6 = iVar6 + 1;
                  *(int *)(param_1 + 0x3c0) = iVar6;
                } while (iVar6 < *(int *)((longlong)plVar10 + 0x18c));
              }
              local_168 = dVar13;
              if (iVar6 < *(int *)((longlong)plVar10 + 0x18c)) {
LAB_1435fd989:
                if (iVar6 != -1) {
                  plVar10 = *(longlong **)(param_1 + 0x3b8);
                  lVar7 = (longlong)iVar6;
                  goto LAB_1435fd9ac;
                }
              }
              else {
                *(undefined4 *)(param_1 + 0x3c0) = 0xffffffff;
              }
              uVar9 = 0xffffffff;
            }
            else {
              if (cVar2 == '\0') {
                lVar7 = FUN_147c05556(param_1);
                if (lVar7 == 0) {
                  lVar7 = *(longlong *)(param_1 + 0x10) + 0x8f0;
                }
                plVar10 = *(longlong **)(param_1 + 0x3b8);
                iVar6 = *(int *)((longlong)plVar10 + 0x18c);
                if (0 < iVar6) {
                  uVar9 = *(int *)(lVar7 + 4) * 0xbb38435 + 0x3619636b;
                  *(uint *)(lVar7 + 4) = uVar9;
                  iVar6 = (int)((float)iVar6 * ((float)(uVar9 >> 9 | 0x3f800000) + -1.0));
                  goto LAB_1435fd989;
                }
                lVar7 = 0;
              }
LAB_1435fd9ac:
              uVar9 = (uint)*(ushort *)(plVar10[0x2e] + lVar7 * 2);
            }
            *(uint *)(*(longlong *)(param_1 + 0x3c8) + (longlong)dVar13 * 4) = uVar9;
            plVar10 = *(longlong **)(param_1 + 0x3b8);
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x3c8) + (longlong)dVar13 * 4);
            goto LAB_1435fd9d4;
          }
LAB_1435fdb75:
          lVar7 = plVar10[2];
          dVar26 = *(double *)(lVar7 + 0x268);
          dVar24 = *(double *)(lVar7 + 0x270);
          *param_3 = *(double *)(lVar7 + 0x260);
          param_3[1] = dVar26;
          param_3[2] = dVar24;
          lVar7 = *(longlong *)(param_1 + 0x10);
          param_6[2] = *(double *)(lVar7 + 0x720);
          dVar24 = *(double *)(lVar7 + 0x718);
          *param_6 = *(double *)(lVar7 + 0x710);
          param_6[1] = dVar24;
          *(undefined4 *)(*(longlong *)(param_1 + 0x3d8) + (longlong)dVar13 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x3c8) + (longlong)dVar13 * 4) = 0xffffffff;
LAB_1435fdbcb:
          bVar12 = false;
        }
        else {
LAB_1435fd9d4:
          if (iVar6 < 0) goto LAB_1435fdb75;
          local_168 = dVar13;
          pdVar8 = (double *)(**(code **)(*plVar10 + 0x110))();
          plVar10 = *(longlong **)(param_1 + 0x3b8);
          dVar13 = local_168;
          if (pdVar8 == (double *)0x0) goto LAB_1435fdb75;
          dVar13 = (double)plVar10[0x2a];
          dVar24 = (double)plVar10[0x28];
          dVar26 = (double)plVar10[0x29];
          iVar6 = _finite(pdVar8[3]);
          if ((((((iVar6 != 0) && (iVar6 = _finite(pdVar8[4]), iVar6 != 0)) &&
                (iVar6 = _finite(pdVar8[5]), iVar6 != 0)) &&
               ((iVar6 = _finite(*pdVar8), iVar6 != 0 && (iVar6 = _finite(pdVar8[1]), iVar6 != 0))))
              && ((iVar6 = _finite(pdVar8[2]), iVar6 != 0 &&
                  ((iVar6 = _finite(dVar24), iVar6 != 0 && (iVar6 = _finite(dVar26), iVar6 != 0)))))
              ) && (iVar6 = _finite(dVar13), iVar6 != 0)) {
            dVar23 = pdVar8[5];
            dVar18 = pdVar8[4];
            *param_3 = dVar24 + pdVar8[3];
            param_3[1] = dVar26 + dVar18;
            param_3[2] = dVar13 + dVar23;
            dVar13 = pdVar8[5];
            dVar24 = pdVar8[2];
            dVar26 = pdVar8[4];
            dVar23 = pdVar8[1];
            *param_6 = pdVar8[3] - *pdVar8;
            param_6[1] = dVar26 - dVar23;
            param_6[2] = dVar13 - dVar24;
            *(undefined4 *)(*(longlong *)(param_1 + 0x3d8) + (longlong)local_168 * 4) =
                 *(undefined4 *)(pdVar8 + 0x12);
            goto LAB_1435fdbcb;
          }
          plVar10 = *(longlong **)(param_1 + 0x3b8);
          bVar12 = true;
          if (0 < *(int *)((longlong)plVar10 + 0x18c)) {
            iVar6 = 0;
            do {
              (**(code **)(*plVar10 + 0x110))(plVar10,iVar6);
              iVar6 = iVar6 + 1;
              plVar10 = *(longlong **)(param_1 + 0x3b8);
            } while (iVar6 < *(int *)((longlong)plVar10 + 0x18c));
            bVar12 = true;
          }
        }
        *param_7 = (float)(param_6[2] * param_6[2] + *param_6 * *param_6 + param_6[1] * param_6[1]);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x3b8) + 0x10);
        dVar16 = *(double *)(lVar7 + 0x290) * 1.0;
        dVar22 = *(double *)(lVar7 + 0x280) * 0.0;
        dVar23 = *(double *)(lVar7 + 0x288) * 0.0;
        dVar18 = *(double *)(lVar7 + 0x240);
        dVar21 = *(double *)(lVar7 + 0x248);
        dVar1 = *(double *)(lVar7 + 0x250);
        dVar13 = *(double *)(lVar7 + 600);
        dVar24 = dVar23 * dVar18 - dVar22 * dVar21;
        dVar25 = dVar16 * dVar21 - dVar23 * dVar1;
        dVar26 = dVar22 * dVar1 - dVar18 * dVar16;
        dVar25 = dVar25 + dVar25;
        dVar26 = dVar26 + dVar26;
        dVar24 = dVar24 + dVar24;
        dVar23 = (dVar1 * dVar25 - dVar18 * dVar24) + *(double *)(lVar7 + 600) * dVar26 + dVar23;
        auVar4._8_4_ = SUB84(dVar23,0);
        auVar4._0_8_ = (dVar24 * dVar21 - dVar26 * dVar1) + dVar13 * dVar25 + dVar22;
        auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        *param_5 = auVar4;
        *(double *)param_5[1] = dVar24 * dVar13 + dVar16 + (dVar26 * dVar18 - dVar25 * dVar21);
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        param_4[3] = 1.0;
        if (!bVar12) goto LAB_1435fdfc3;
      }
    }
  }
LAB_1435fdd17:
  lVar7 = *(longlong *)(param_1 + 0x10);
  dVar24 = *(double *)(lVar7 + 0x260);
  dVar26 = *(double *)(lVar7 + 0x268);
  dVar13 = *(double *)(lVar7 + 0x270);
  *param_3 = dVar24;
  param_3[1] = dVar26;
  param_3[2] = dVar13;
  lVar7 = *(longlong *)(param_1 + 0x2f0);
  if (((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x74))) && (param_2 < *(int *)(lVar7 + 0x80))) {
    pdVar8 = (double *)(*(longlong *)(lVar7 + 0x78) + (longlong)param_2 * 0x18);
    dVar18 = *pdVar8;
    dVar21 = pdVar8[1];
    dVar23 = *(double *)(*(longlong *)(lVar7 + 0x78) + 0x10 + (longlong)param_2 * 0x18);
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x71) & 1) == 0)) {
      lVar7 = *(longlong *)(param_1 + 0x10);
      dVar18 = dVar18 * *(double *)(lVar7 + 0x280);
      dVar21 = dVar21 * *(double *)(lVar7 + 0x288);
      dVar23 = dVar23 * *(double *)(lVar7 + 0x290);
      dVar14 = *(double *)(lVar7 + 0x240);
      dVar15 = *(double *)(lVar7 + 0x248);
      dVar5 = *(double *)(lVar7 + 0x250);
      dVar1 = *(double *)(lVar7 + 600);
      dVar16 = dVar21 * dVar14 - dVar18 * dVar15;
      dVar22 = dVar23 * dVar15 - dVar21 * dVar5;
      dVar25 = dVar18 * dVar5 - dVar14 * dVar23;
      dVar22 = dVar22 + dVar22;
      dVar25 = dVar25 + dVar25;
      dVar16 = dVar16 + dVar16;
      dVar18 = (dVar16 * dVar15 - dVar25 * dVar5) + dVar1 * dVar22 + dVar18;
      dVar21 = (dVar5 * dVar22 - dVar14 * dVar16) + *(double *)(lVar7 + 600) * dVar25 + dVar21;
      dVar23 = dVar16 * dVar1 + dVar23 + (dVar25 * dVar14 - dVar22 * dVar15);
    }
    *param_3 = dVar18 + dVar24;
    param_3[1] = dVar21 + dVar26;
    param_3[2] = dVar13 + dVar23;
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  dVar13 = *(double *)(lVar7 + 0x248);
  dVar24 = *(double *)(lVar7 + 0x250);
  dVar26 = *(double *)(lVar7 + 600);
  *param_4 = *(double *)(lVar7 + 0x240);
  param_4[1] = dVar13;
  param_4[2] = dVar24;
  param_4[3] = dVar26;
  lVar7 = *(longlong *)(param_1 + 0x10);
  dVar13 = *(double *)(lVar7 + 0x718);
  *param_6 = *(double *)(lVar7 + 0x710);
  param_6[1] = dVar13;
  param_6[2] = *(double *)(lVar7 + 0x720);
  *param_7 = (float)(param_6[2] * param_6[2] + *param_6 * *param_6 + param_6[1] * param_6[1]);
  lVar7 = *(longlong *)(param_1 + 0x10);
  dVar22 = *(double *)(lVar7 + 0x280) * 0.0;
  dVar23 = *(double *)(lVar7 + 0x288) * 0.0;
  dVar16 = *(double *)(lVar7 + 0x290) * 1.0;
  dVar18 = *(double *)(lVar7 + 0x240);
  dVar21 = *(double *)(lVar7 + 0x248);
  dVar1 = *(double *)(lVar7 + 0x250);
  dVar13 = *(double *)(lVar7 + 600);
  dVar24 = dVar23 * dVar18 - dVar22 * dVar21;
  dVar25 = dVar16 * dVar21 - dVar23 * dVar1;
  dVar26 = dVar22 * dVar1 - dVar18 * dVar16;
  dVar25 = dVar25 + dVar25;
  dVar26 = dVar26 + dVar26;
  dVar24 = dVar24 + dVar24;
  dVar23 = (dVar1 * dVar25 - dVar18 * dVar24) + *(double *)(lVar7 + 600) * dVar26 + dVar23;
  auVar3._8_4_ = SUB84(dVar23,0);
  auVar3._0_8_ = (dVar24 * dVar21 - dVar26 * dVar1) + dVar13 * dVar25 + dVar22;
  auVar3._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *param_5 = auVar3;
  *(double *)param_5[1] = dVar24 * dVar13 + dVar16 + (dVar26 * dVar18 - dVar25 * dVar21);
LAB_1435fdfc3:
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435fe05a FUN_1435fe05a body=386 status=ok
// SIG undefined FUN_1435fe05a(void)

longlong * FUN_1435fe05a(longlong *param_1,undefined4 param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(int *)(param_1[1] + 0x48) < 1) {
    lVar6 = 0;
  }
  else {
    lVar6 = **(longlong **)(param_1[1] + 0x40);
  }
  cVar3 = (**(code **)(*param_1 + 0x118))(param_1,lVar6);
  if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    plVar5 = (longlong *)FUN_147bf8190(0x150);
    FUN_147c011fc(plVar5,*(undefined8 *)(lVar6 + 0x30));
    uVar4 = *(uint *)(param_1[0x5c] + 0x40) >> 2 & 1;
    uVar2 = *(uint *)((longlong)plVar5 + 0x34);
    *(uint *)((longlong)plVar5 + 0x34) = uVar2 & 0xfffffffe | uVar4;
    uVar2 = (uVar2 & 0xfffffffc | uVar4) + (*(uint *)(param_1[0x5c] + 0x4c) & 1) * 2;
    *(uint *)((longlong)plVar5 + 0x34) = uVar2;
    uVar2 = (uVar2 & 0xfffffffb) + (*(uint *)(param_1[0x5c] + 0x4c) & 2) * 2;
    *(uint *)((longlong)plVar5 + 0x34) = uVar2;
    uVar2 = (uVar2 & 0xfffffff7) + (*(uint *)(param_1[0x5c] + 0x4c) & 4) * 2;
    *(uint *)((longlong)plVar5 + 0x34) = uVar2;
    uVar2 = (uVar2 & 0xffffffef) + (*(uint *)(param_1[0x5c] + 0x4c) & 8) * 2;
    *(uint *)((longlong)plVar5 + 0x34) = uVar2;
    *(undefined4 *)(plVar5 + 7) = *(undefined4 *)(param_1[0x5c] + 0x54);
    *(undefined4 *)((longlong)plVar5 + 0x3c) = *(undefined4 *)(param_1[0x5c] + 0x5c);
    *(uint *)(plVar5 + 0x29) =
         *(uint *)(plVar5 + 0x29) & 0xfffffffc | *(byte *)(param_1[0x5c] + 0x44) & 3;
    fVar1 = *(float *)(param_1[0x5c] + 0x50);
    *(float *)(plVar5 + 8) = fVar1;
    *(uint *)((longlong)plVar5 + 0x34) = (uint)(0.0 < fVar1) << 5 | uVar2 & 0xffffffdf;
    cVar3 = (**(code **)(*param_1 + 0x218))(param_1,plVar5 + 9);
    if (cVar3 != '\0') {
      (**(code **)(*plVar5 + 0x70))(plVar5,param_2);
      return plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)*plVar5)(plVar5,1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1435fe1dc FUN_1435fe1dc body=329 status=ok
// SIG undefined FUN_1435fe1dc(void)

undefined8 FUN_1435fe1dc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  if (((((0 < *(int *)(param_1 + 0x18c)) && ((*(byte *)(param_1 + 0x160) & 1) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x48))) &&
      ((lVar2 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40), lVar2 != 0 &&
       ((*(byte *)(lVar2 + 0x2c) & 1) != 0)))) &&
     ((FUN_147c3fcfc(param_1), *(int *)(param_1 + 0x27c) < 0xfffe &&
      ((cVar3 = FUN_1435bcde2(param_1,param_2), cVar3 != '\0' && (0 < *(int *)(param_1 + 0x27c))))))
     ) {
    *(undefined4 *)(param_2 + 8) = 4;
    plVar6 = *(longlong **)(param_1 + 0x238);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar6 + 0x340))(plVar6,2), cVar3 == '\0')) {
      FUN_14003fbd6();
      plVar6 = DAT_14caea080;
    }
    *(longlong **)(param_1 + 0x238) = plVar6;
    *(longlong **)(param_2 + 0x60) = plVar6;
    *(undefined2 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_1 + 0x194);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x2e0) + 0x30);
    *(uint *)(param_2 + 0xf8) = iVar4 + (uint)(iVar4 == 0);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x2e0) + 0x34);
    iVar4 = iVar4 + (uint)(iVar4 == 0);
    iVar5 = 1;
    if (1 < iVar4) {
      iVar5 = iVar4;
    }
    *(int *)(param_2 + 0xf4) = iVar5;
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_1 + 0x278);
    *(int *)(param_2 + 0xe0) = *(int *)(param_1 + 0x27c) + 2;
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x27c);
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_1 + 0x280);
    *(undefined4 *)(param_2 + 0xe4) = 2;
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 0xe8) = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 1435fe326 FUN_1435fe326 body=317 status=ok
// SIG undefined FUN_1435fe326(void)

void FUN_1435fe326(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  
  if (((*(byte *)(param_1[0x5c] + 0x30) & 4) != 0) &&
     (0 < (longlong)*(int *)((longlong)param_1 + 0x18c))) {
    lVar7 = (longlong)*(int *)((longlong)param_1 + 0x24);
    lVar6 = 0;
    do {
      lVar3 = (ulonglong)*(ushort *)(param_1[0x2e] + lVar6 * 2) * (longlong)(int)param_1[0x31];
      lVar1 = param_1[0x2d] + lVar3;
      uVar2 = *(uint *)(lVar7 + lVar1);
      if (((uVar2 & 0xf0000000) == 0x40000000) && (puVar5 = (uint *)(lVar1 + lVar7), puVar5[1] == 0)
         ) {
        if ((~uVar2 & 0x40003fff) == 0) {
          return;
        }
        if (lVar1 == 0) {
          return;
        }
        if (puVar5 == (uint *)0x0) {
          return;
        }
        if (((longlong)(int)uVar2 & 0x3fffU) == 0x3fff) {
          return;
        }
        lVar4 = ((longlong)(int)uVar2 & 0x3fffU) * (longlong)(int)param_1[0x31];
        lVar6 = param_1[0x2d] + lVar4;
        if (lVar6 == 0) {
          return;
        }
        if ((int)lVar3 == (int)lVar4) {
          return;
        }
        lVar3 = lVar1;
        puVar8 = (uint *)(lVar7 + lVar6);
        while( true ) {
          if ((puVar8 == (uint *)0x0) || (((ulonglong)*puVar8 & 0x3fff) == 0x3fff)) {
            lVar7 = 0;
            puVar9 = (uint *)0x0;
          }
          else {
            lVar7 = (longlong)(int)param_1[0x31] * ((ulonglong)*puVar8 & 0x3fff) + param_1[0x2d];
            puVar9 = (uint *)(*(int *)((longlong)param_1 + 0x24) + lVar7);
          }
          (**(code **)(*param_1 + 600))(param_1,lVar3,puVar5,lVar6,puVar8,lVar7,puVar9);
          if (lVar7 == 0) break;
          lVar3 = lVar6;
          lVar6 = lVar7;
          puVar5 = puVar8;
          puVar8 = puVar9;
          if (lVar1 == lVar7) {
            return;
          }
        }
        return;
      }
      lVar6 = lVar6 + 1;
    } while (*(int *)((longlong)param_1 + 0x18c) != lVar6);
  }
  return;
}



// FUNCTION 1435fe464 FUN_1435fe464 body=2289 status=ok
// SIG undefined FUN_1435fe464(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1435fe464(longlong *param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 (*pauVar11) [16];
  int iVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  longlong *plVar22;
  undefined1 (*pauVar23) [16];
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_1d8 [32];
  undefined1 (*local_1b8) [16];
  undefined1 (*local_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 local_198 [32];
  double local_178;
  double local_170;
  double local_168;
  undefined1 local_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  fVar29 = *(float *)(param_1 + 0x33);
  fVar24 = (float)param_2 * 0.0 + fVar29;
  iVar16 = (int)ROUND(fVar24 + fVar24 + -0.5) >> 1;
  *(float *)(param_1 + 0x33) = fVar24 - (float)iVar16;
  iVar9 = iVar16 + *(int *)((longlong)param_1 + 0x18c);
  iVar12 = iVar9 + 1;
  if (0x3ffe < iVar12) goto LAB_1435fe6b8;
  if (*(int *)((longlong)param_1 + 0x194) <= iVar12) {
    fVar24 = (float)iVar12;
    if (fVar24 < 0.0) {
      fVar24 = sqrtf(fVar24);
    }
    else {
      fVar24 = SQRT(fVar24);
    }
    cVar7 = (**(code **)(*param_1 + 0x18))(param_1,iVar9 + 2 + (int)fVar24,(float)param_2 < 0.25);
    if (cVar7 == '\0') goto LAB_1435fe6b8;
  }
  uVar15 = 0xffffffff;
  if (0 < (longlong)*(int *)((longlong)param_1 + 0x18c)) {
    lVar18 = (longlong)*(int *)((longlong)param_1 + 0x24) + param_1[0x2d];
    lVar20 = 0;
    do {
      uVar2 = *(ushort *)(param_1[0x2e] + lVar20 * 2);
      lVar13 = (longlong)(int)param_1[0x31] * (ulonglong)uVar2;
      if (((*(uint *)(lVar18 + lVar13) & 0xf0000000) == 0x40000000) &&
         (*(int *)(lVar18 + 4 + lVar13) == 0)) {
        uVar15 = (uint)uVar2;
        break;
      }
      lVar20 = lVar20 + 1;
    } while (*(int *)((longlong)param_1 + 0x18c) != lVar20);
  }
  lVar18 = *(longlong *)(param_1[2] + 0x120);
  if (lVar18 != 0) {
    fVar29 = *(float *)(param_1[0x5c] + 0x34);
    lVar20 = FUN_14081cebe();
    lVar18 = *(longlong *)(lVar18 + 0x10);
    if ((((*(int *)(lVar20 + 0x38) <= *(int *)(lVar18 + 0x38)) && (-1 < iVar16)) &&
        (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) ==
         lVar20 + 0x30)) && (*(char *)((longlong)param_1 + 0x311) == '\x01')) {
      fVar24 = *(float *)(param_1 + 0x51);
      fVar30 = *(float *)param_1[0x53];
      lVar18 = **(longlong **)(param_1[1] + 0x40);
      uVar2 = *(ushort *)
               (param_1[0x2e] +
               ((longlong)iVar16 + (longlong)*(int *)((longlong)param_1 + 0x18c)) * 2);
      pauVar14 = (undefined1 (*) [16])
                 ((longlong)(int)param_1[0x31] * (ulonglong)uVar2 + param_1[0x2d]);
      iVar9 = *(int *)((longlong)param_1 + 0x24);
      (**(code **)(*param_1 + 200))(param_1,pauVar14,param_1 + 9,&DAT_14c8464e0);
      iVar12 = *(int *)(lVar18 + 0x78);
      if (0 < iVar12) {
        lVar20 = 0;
        do {
          plVar22 = *(longlong **)(*(longlong *)(lVar18 + 0x70) + lVar20 * 8);
          if ((plVar22 != (longlong *)0x0) && ((char)plVar22[5] < '\0')) {
            uVar8 = FUN_147bf6ddc(param_1,plVar22);
            local_1b8 = pauVar14;
            (**(code **)(*plVar22 + 0x2a8))(plVar22,param_1,uVar8,param_2);
            iVar12 = *(int *)(lVar18 + 0x78);
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar12);
      }
      if (1.0 / *(float *)(pauVar14[9] + 4) < 0.001) {
        *(undefined4 *)(pauVar14[9] + 4) = 0x4479ffff;
      }
      plVar22 = *(longlong **)(lVar18 + 0x48);
      if (plVar22 != (longlong *)0x0) {
        local_1b8 = pauVar14;
        (**(code **)(*plVar22 + 0x2a8))
                  (plVar22,param_1,*(undefined4 *)((longlong)param_1 + 0x24),param_2);
      }
      pauVar17 = (undefined1 (*) [16])(*pauVar14 + iVar9);
      (**(code **)(*param_1 + 0xd0))(param_1,pauVar14,0x3f800000,param_2);
      plVar22 = *(longlong **)(param_1[2] + 0x120);
      if (plVar22 == (longlong *)0x0) {
LAB_1435fe8b5:
        plVar22 = (longlong *)0x0;
      }
      else {
        lVar18 = FUN_14081cebe();
        if ((*(int *)(plVar22[2] + 0x38) < *(int *)(lVar18 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8)
            != lVar18 + 0x30)) goto LAB_1435fe8b5;
      }
      (**(code **)(*plVar22 + 0x4a8))(plVar22,local_138,param_1[0x5e],0);
      (**(code **)(*plVar22 + 0x4a8))(plVar22,local_198,param_1[0x5f],0);
      *(uint *)*pauVar17 = *(uint *)*pauVar17 | 0xfffffff;
      *(undefined4 *)(*pauVar17 + 4) = 0;
      *(float *)(*pauVar17 + 0xc) = fVar30 + (fVar24 - fVar30);
      *(float *)pauVar17[1] = (float)iVar16;
      pauVar17[2][4] = pauVar17[2][4] & 0xfe;
      *(undefined4 *)(pauVar17[1] + 8) = 1;
      dVar25 = local_168 - local_108;
      dVar27 = local_170 - dStack_110;
      dVar26 = local_178 - local_118;
      fVar24 = (float)SQRT(dVar25 * dVar25 + dVar26 * dVar26 + dVar27 * dVar27);
      dVar5 = DAT_14c8464f0;
      dVar6 = DAT_14c8464e8;
      dVar28 = DAT_14c8464e0;
      if (1e-08 < fVar24) {
        dVar28 = (double)(1.0 / fVar24);
        dVar5 = dVar25 * dVar28;
        dVar6 = dVar27 * dVar28;
        dVar28 = dVar26 * dVar28;
      }
      iVar9 = *(int *)((longlong)param_1 + 0x304);
      if (iVar9 == 2) {
        fVar24 = fVar24 * *(float *)(param_1 + 0x60) * 0.5;
        dVar25 = (double)fVar24;
        local_108 = local_168 - dVar5 * dVar25;
        dStack_110 = local_170 - dVar6 * dVar25;
        local_118 = local_178 - dVar25 * dVar28;
      }
      else {
        if (iVar9 == 1) {
          fVar24 = fVar24 * *(float *)(param_1 + 0x60) * 0.5;
          fVar30 = fVar24;
        }
        else {
          if (iVar9 != 0) {
            FUN_140033559(".\\Runtime/Engine/Private/Particles/ParticleTrail2EmitterInstance.cpp",
                          0xc84,L"Invalid Width Mode for trail: %u");
            goto LAB_1435feaf4;
          }
          fVar30 = fVar24 * 0.5;
          fVar24 = fVar30 * *(float *)(param_1 + 0x60);
        }
        dVar25 = (double)fVar30;
        dStack_110 = dStack_110 + dVar6 * dVar25;
        local_108 = local_108 + dVar5 * dVar25;
        local_118 = dVar25 * dVar28 + local_118;
      }
LAB_1435feaf4:
      uVar8 = (undefined4)((ulonglong)dStack_110 >> 0x20);
      auVar3._8_4_ = SUB84(dStack_110,0);
      auVar3._0_8_ = local_118;
      auVar3._12_4_ = uVar8;
      *(undefined1 (*) [16])(pauVar14[1] + 8) = auVar3;
      *(double *)(pauVar14[2] + 8) = local_108;
      auVar4._8_4_ = SUB84(dStack_110,0);
      auVar4._0_8_ = local_118;
      auVar4._12_4_ = uVar8;
      *pauVar14 = auVar4;
      *(double *)pauVar14[1] = local_108;
      *(float *)(pauVar17[2] + 8) = (float)dVar28;
      *(float *)(pauVar17[2] + 0xc) = (float)dVar6;
      *(float *)pauVar17[3] = (float)dVar5;
      *(float *)pauVar17[4] = fVar24;
      if (uVar15 == 0xffffffff) {
        *(undefined4 *)*pauVar17 = 0x4fffffff;
        *(undefined4 *)param_1[0x59] = 0;
        *(undefined4 *)(pauVar17[1] + 4) = 0;
        *(undefined4 *)(pauVar17[4] + 4) = 0;
        fVar24 = 0.0;
        if (1e-08 < ABS(fVar29)) goto LAB_1435fed46;
      }
      else {
        pauVar23 = (undefined1 (*) [16])
                   ((longlong)(int)uVar15 * (longlong)(int)param_1[0x31] + param_1[0x2d]);
        pauVar1 = (undefined1 (*) [16])(*pauVar23 + *(int *)((longlong)param_1 + 0x24));
        local_1b8 = pauVar17;
        local_1b0 = pauVar23;
        pauStack_1a8 = pauVar1;
        if ((*(uint *)(*pauVar23 + *(int *)((longlong)param_1 + 0x24)) & 0xf0003fff) == 0x40003fff)
        {
          *(uint *)*pauVar1 = (uVar2 & 0x3fff) << 0xe | 0x80003fff;
          *(uint *)*pauVar17 = uVar15 & 0x4fffffff | 0x4fffc000;
          (**(code **)(*param_1 + 600))(param_1,0,0,pauVar14);
          lVar18 = *param_1;
          local_1b0 = (undefined1 (*) [16])0x0;
          pauStack_1a8 = (undefined1 (*) [16])0x0;
          pauVar11 = pauVar14;
          pauVar19 = pauVar17;
          pauVar21 = pauVar23;
          local_1b8 = pauVar1;
        }
        else {
          *(uint *)*pauVar1 =
               (*(uint *)(*pauVar23 + *(int *)((longlong)param_1 + 0x24)) & 0x3fff) +
               (uVar2 & 0x3fff) * 0x4000 + 0x20000000;
          *(uint *)*pauVar17 = uVar15 & 0x4fffffff | 0x4fffc000;
          lVar18 = *param_1;
          pauVar11 = (undefined1 (*) [16])0x0;
          pauVar19 = (undefined1 (*) [16])0x0;
          pauVar21 = pauVar14;
        }
        (**(code **)(lVar18 + 600))(param_1,pauVar11,pauVar19,pauVar21);
        if ((*(uint *)(param_1[0x5c] + 0x30) & 6) == 2) {
          uVar10 = (ulonglong)*(uint *)*pauVar1 & 0x3fff;
          if (uVar10 == 0x3fff) {
            local_1b0 = (undefined1 (*) [16])0x0;
            pauStack_1a8 = (undefined1 (*) [16])0x0;
          }
          else {
            local_1b0 = (undefined1 (*) [16])((longlong)(int)param_1[0x31] * uVar10 + param_1[0x2d])
            ;
            pauStack_1a8 = (undefined1 (*) [16])(*local_1b0 + *(int *)((longlong)param_1 + 0x24));
          }
          local_1b8 = pauVar1;
          (**(code **)(*param_1 + 600))(param_1,pauVar14,pauVar17,pauVar23);
          *(undefined4 *)(pauVar17[3] + 0xc) = *(undefined4 *)(pauVar1[3] + 0xc);
          *(undefined8 *)(pauVar17[3] + 4) = *(undefined8 *)(pauVar1[3] + 4);
        }
        if (1e-08 < ABS(fVar29)) {
          dVar25 = *(double *)(pauVar14[2] + 8) - *(double *)(pauVar23[2] + 8);
          dVar27 = *(double *)pauVar14[2] - *(double *)pauVar23[2];
          dVar26 = *(double *)(pauVar14[1] + 8) - *(double *)(pauVar23[1] + 8);
          *(float *)param_1[0x59] =
               (float)((double)*(float *)param_1[0x59] +
                      SQRT(dVar25 * dVar25 + dVar26 * dVar26 + dVar27 * dVar27));
          fVar24 = *(float *)param_1[0x59] / *(float *)(param_1[0x5c] + 0x34);
LAB_1435fed46:
          *(float *)(pauVar17[1] + 4) = fVar24;
        }
      }
      *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
    }
  }
  *(int *)param_1[0x53] = (int)param_1[0x51];
  if ((char)param_1[0x62] == '\x01') {
    iVar9 = *(int *)((longlong)param_1 + 0x18c);
    if (0 < iVar9) {
      lVar18 = 0;
      do {
        lVar20 = (longlong)(int)param_1[0x31] * (ulonglong)*(ushort *)(param_1[0x2e] + lVar18 * 2) +
                 param_1[0x2d];
        lVar13 = (longlong)*(int *)((longlong)param_1 + 0x24);
        if ((*(int *)(lVar13 + 4 + lVar20) == 0) &&
           ((*(uint *)(lVar20 + lVar13) & 0xf0000000) == 0x40000000)) {
          *(uint *)(lVar20 + lVar13) = *(uint *)(lVar20 + lVar13) & 0xfffffff | 0x10000000;
          iVar9 = *(int *)((longlong)param_1 + 0x18c);
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar9);
    }
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  _DAT_14caf5e78 = _DAT_14caf5e78 + 1;
  fVar29 = *(float *)(param_1 + 0x33);
LAB_1435fe6b8:
  if ((local_d0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return fVar29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435fed56 FUN_1435fed56 body=2284 status=ok
// SIG undefined FUN_1435fed56(void)

void FUN_1435fed56(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  double local_118;
  double *local_110;
  
  lVar18 = *(longlong *)(param_1 + 0x10);
  if (lVar18 == 0) {
    return;
  }
  if (((*(byte *)(lVar18 + 0x692) & 4) == 0) && (*(longlong *)(lVar18 + 0x668) != 0)) {
    lVar20 = *(longlong *)(param_1 + 8);
    lVar17 = **(longlong **)(lVar20 + 0x40);
    if ((*(byte *)(*(longlong *)(lVar18 + 0x668) + 0xec) & 2) != 0) goto LAB_1435fee56;
    if ((*(byte *)(*(longlong *)(lVar17 + 0x30) + 0x71) & 1) == 0) {
      uVar14 = *(undefined8 *)(lVar18 + 0x268);
      uVar3 = *(undefined8 *)(lVar18 + 0x270);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar18 + 0x260);
      *(undefined8 *)(param_1 + 0x1e0) = uVar14;
      *(undefined8 *)(param_1 + 0x1e8) = uVar3;
      uVar14 = *(undefined8 *)(lVar18 + 0x268);
      uVar3 = *(undefined8 *)(lVar18 + 0x270);
      *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(lVar18 + 0x260);
      *(undefined8 *)(param_1 + 0x1c8) = uVar14;
      *(undefined8 *)(param_1 + 0x1d0) = uVar3;
    }
    else {
      *(double *)(param_1 + 0x1e8) = DAT_14c8464f0;
      dVar8 = DAT_14c8464e8;
      *(double *)(param_1 + 0x1d8) = DAT_14c8464e0;
      *(double *)(param_1 + 0x1e0) = dVar8;
      dVar8 = DAT_14c8464e8;
      *(double *)(param_1 + 0x1c0) = DAT_14c8464e0;
      *(double *)(param_1 + 0x1c8) = dVar8;
      *(double *)(param_1 + 0x1d0) = DAT_14c8464f0;
    }
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    uVar16 = *(uint *)(param_1 + 0x18c);
    if ((int)uVar16 < 1) goto LAB_1435ff352;
    bVar22 = true;
  }
  else {
    lVar20 = *(longlong *)(param_1 + 8);
    lVar17 = **(longlong **)(lVar20 + 0x40);
LAB_1435fee56:
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    uVar16 = *(uint *)(param_1 + 0x18c);
    if ((int)uVar16 < 1) {
      return;
    }
    bVar22 = false;
  }
  local_110 = (double *)(param_1 + 0x1c0);
  lVar18 = *(longlong *)(param_1 + 0x168);
  lVar19 = (ulonglong)**(ushort **)(param_1 + 0x170) * (longlong)*(int *)(param_1 + 0x188);
  bVar4 = *(byte *)(lVar20 + 0x37);
  dVar8 = -3.4028234663852886e+38;
  dVar32 = -3.4028234663852886e+38;
  dVar9 = 3.4028234663852886e+38;
  uVar21 = 0;
  local_118 = 3.4028234663852886e+38;
  dVar38 = 3.4028234663852886e+38;
  dVar33 = *(double *)(lVar18 + 0x18 + lVar19) + *(double *)(param_1 + 0x240);
  dVar30 = *(double *)(lVar18 + 0x20 + lVar19) + *(double *)(param_1 + 0x248);
  fVar41 = *(float *)((longlong)*(int *)(param_1 + 0x24) + 0x40 + lVar18 + lVar19);
  dVar7 = *(double *)(lVar18 + 0x28 + lVar19) + *(double *)(param_1 + 0x250);
  dVar11 = dVar32;
  do {
    while( true ) {
      uVar21 = uVar21 + 1;
      lVar18 = *(longlong *)(param_1 + 0x168);
      lVar20 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + uVar21 * 2) *
               (longlong)*(int *)(param_1 + 0x188);
      puVar2 = (undefined8 *)(lVar18 + lVar20);
      iVar5 = *(int *)(param_1 + 0x24);
      uVar6 = *(uint *)(lVar18 + 0x6c + lVar20);
      *(uint *)(lVar18 + 0x6c + lVar20) = uVar6 & 0xfdffffff;
      bVar15 = (byte)(uVar6 >> 0x19) & (bVar4 & 1) == 0;
      dVar35 = DAT_14c8464f0;
      dVar12 = DAT_14c8464e8;
      dVar13 = DAT_14c8464e0;
      if (bVar15 != 1) {
        dVar35 = (double)(*(float *)(puVar2 + 9) * param_2);
        dVar12 = (double)(*(float *)((longlong)puVar2 + 0x44) * param_2);
        dVar13 = (double)(*(float *)(puVar2 + 8) * param_2);
      }
      dVar31 = (double)puVar2[3];
      puVar2[3] = dVar13 + dVar31;
      dVar28 = (double)puVar2[4];
      puVar2[4] = dVar12 + dVar28;
      dVar34 = (double)puVar2[5];
      puVar2[5] = dVar35 + dVar34;
      fVar23 = 0.0;
      if (bVar15 == 0) {
        fVar23 = *(float *)((longlong)puVar2 + 0x5c) * param_2;
      }
      puVar1 = puVar2 + 3;
      *(float *)((longlong)puVar2 + 0x3c) = fVar23 + *(float *)((longlong)puVar2 + 0x3c);
      dVar13 = dVar13 + dVar31 + *(double *)(param_1 + 0x240);
      puVar2[3] = dVar13;
      dVar12 = dVar12 + dVar28 + *(double *)(param_1 + 0x248);
      puVar2[4] = dVar12;
      dVar35 = dVar35 + dVar34 + *(double *)(param_1 + 0x250);
      puVar2[5] = dVar35;
      lVar18 = (longlong)
               (int)(*(int *)(param_1 + 0x188) *
                    (uint)*(ushort *)(*(longlong *)(param_1 + 0x170) + uVar21 * 2));
      puVar2[2] = puVar2[5];
      *puVar2 = *puVar1;
      puVar2[1] = puVar2[4];
      if (bVar22) break;
      uVar24 = FUN_1447c7e44(puVar1,0x40c90fdb,lVar18);
      *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar24;
      if (uVar21 == uVar16) {
        return;
      }
    }
    fVar23 = *(float *)((longlong)puVar2 + (longlong)iVar5 + 0x40);
    dVar7 = SQRT((dVar35 - dVar7) * (dVar35 - dVar7) +
                 (dVar13 - dVar33) * (dVar13 - dVar33) + (dVar12 - dVar30) * (dVar12 - dVar30)) *
            0.25 + (double)((fVar23 - fVar41) * 0.25 + fVar23);
    dVar28 = dVar35 - dVar7;
    dVar30 = dVar12 - dVar7;
    dVar33 = dVar13 - dVar7;
    dVar31 = dVar33;
    if (dVar38 <= dVar33) {
      dVar31 = dVar38;
    }
    dVar34 = dVar30;
    if (local_118 <= dVar30) {
      dVar34 = local_118;
    }
    dVar36 = dVar28;
    if (dVar9 <= dVar28) {
      dVar36 = dVar9;
    }
    if (dVar33 <= dVar8) {
      dVar33 = dVar8;
    }
    dVar37 = dVar35 + dVar7;
    if (dVar30 <= dVar11) {
      dVar30 = dVar11;
    }
    dVar11 = dVar12 + dVar7;
    dVar8 = dVar7 + dVar13;
    if (dVar28 <= dVar32) {
      dVar28 = dVar32;
    }
    dVar38 = dVar8;
    if (dVar31 <= dVar8) {
      dVar38 = dVar31;
    }
    dVar31 = dVar11;
    if (dVar34 <= dVar11) {
      dVar31 = dVar34;
    }
    dVar9 = dVar37;
    if (dVar36 <= dVar37) {
      dVar9 = dVar36;
    }
    if (dVar8 <= dVar33) {
      dVar8 = dVar33;
    }
    if (dVar11 <= dVar30) {
      dVar11 = dVar30;
    }
    dVar32 = dVar37;
    if (dVar37 <= dVar28) {
      dVar32 = dVar28;
    }
    uVar24 = FUN_1447c7e44(puVar1,0x40c90fdb,lVar18);
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar24;
    local_118 = dVar31;
    dVar33 = dVar13;
    dVar30 = dVar12;
    fVar41 = fVar23;
    dVar7 = dVar35;
  } while (uVar21 != uVar16);
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    *(double *)(param_1 + 0x1d8) = dVar38;
    *(double *)(param_1 + 0x1e0) = dVar31;
    *(double *)(param_1 + 0x1e8) = dVar9;
    *local_110 = (double)*(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    uVar26 = (undefined4)*(undefined8 *)(param_1 + 0x1c0);
    uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1c0) >> 0x20);
    uVar24 = (undefined4)*(undefined8 *)(param_1 + 0x1c8);
    uVar25 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20);
    dVar7 = *(double *)(param_1 + 0x1d0);
    dVar30 = dVar9;
    dVar33 = dVar38;
  }
  else {
    dVar7 = *(double *)(param_1 + 0x1c0);
    uVar26 = SUB84(dVar7,0);
    uVar27 = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar30 = *(double *)(param_1 + 0x1c8);
    uVar24 = SUB84(dVar30,0);
    uVar25 = (undefined4)((ulonglong)dVar30 >> 0x20);
    if (dVar38 <= dVar7) {
      uVar26 = SUB84(dVar38,0);
      uVar27 = (undefined4)((ulonglong)dVar38 >> 0x20);
    }
    if (dVar31 <= dVar30) {
      uVar24 = SUB84(dVar31,0);
      uVar25 = (undefined4)((ulonglong)dVar31 >> 0x20);
    }
    dVar7 = *(double *)(param_1 + 0x1d0);
    if (dVar9 <= *(double *)(param_1 + 0x1d0)) {
      dVar7 = dVar9;
    }
    dVar33 = *(double *)(param_1 + 0x1d8);
    if (*(double *)(param_1 + 0x1d8) <= dVar38) {
      dVar33 = dVar38;
    }
    local_118 = *(double *)(param_1 + 0x1e0);
    if (*(double *)(param_1 + 0x1e0) <= dVar31) {
      local_118 = dVar31;
    }
    dVar30 = *(double *)(param_1 + 0x1e8);
    if (*(double *)(param_1 + 0x1e8) <= dVar9) {
      dVar30 = dVar9;
    }
  }
  dVar9 = (double)CONCAT44(uVar27,uVar26);
  if (dVar8 <= (double)CONCAT44(uVar27,uVar26)) {
    dVar9 = dVar8;
  }
  *(double *)(param_1 + 0x1c0) = dVar9;
  dVar9 = (double)CONCAT44(uVar25,uVar24);
  if (dVar11 <= (double)CONCAT44(uVar25,uVar24)) {
    dVar9 = dVar11;
  }
  *(double *)(param_1 + 0x1c8) = dVar9;
  if (dVar32 <= dVar7) {
    dVar7 = dVar32;
  }
  *(double *)(param_1 + 0x1d0) = dVar7;
  if (dVar33 <= dVar8) {
    dVar33 = dVar8;
  }
  *(double *)(param_1 + 0x1d8) = dVar33;
  if (local_118 <= dVar11) {
    local_118 = dVar11;
  }
  *(double *)(param_1 + 0x1e0) = local_118;
  if (dVar30 <= dVar32) {
    dVar30 = dVar32;
  }
  *(double *)(param_1 + 0x1e8) = dVar30;
LAB_1435ff352:
  local_110 = (double *)(param_1 + 0x1c0);
  if ((*(byte *)(*(longlong *)(lVar17 + 0x30) + 0x71) & 1) != 0) {
    bVar22 = *(char *)(param_1 + 0x1f0) == '\0';
    if (bVar22) {
      dVar11 = 0.0;
      dVar7 = 0.0;
      dVar8 = 0.0;
      dVar32 = 0.0;
      dVar30 = 0.0;
      dVar33 = 0.0;
    }
    else {
      lVar18 = *(longlong *)(param_1 + 0x10);
      dVar12 = *(double *)(lVar18 + 0x240);
      dVar13 = *(double *)(lVar18 + 0x248);
      dVar30 = *(double *)(lVar18 + 0x250);
      dVar32 = *(double *)(lVar18 + 0x280);
      dVar31 = *(double *)(lVar18 + 0x288);
      dVar28 = *(double *)(lVar18 + 0x290);
      dVar35 = dVar30 + dVar30;
      dVar34 = dVar12 + dVar12;
      dVar36 = dVar13 + dVar13;
      dVar7 = *(double *)(lVar18 + 0x240) * dVar35;
      dVar11 = *(double *)(lVar18 + 600);
      dVar8 = *(double *)(lVar18 + 600);
      dVar37 = dVar36 * dVar11;
      auVar29._0_8_ = (dVar37 + dVar7) * dVar28;
      auVar29._8_8_ =
           (dVar34 * dVar8 + *(double *)(lVar18 + 0x240) * dVar34) * *(double *)(lVar18 + 0x298);
      dVar11 = dVar35 * dVar11;
      dVar8 = dVar34 * dVar8;
      dVar33 = (1.0 - (dVar35 * dVar30 + dVar36 * dVar13)) * dVar32;
      dVar38 = (1.0 - (dVar35 * dVar30 + dVar34 * dVar12)) * dVar31;
      dVar30 = (dVar11 + dVar36 * dVar12) * dVar32;
      dVar9 = (dVar8 + dVar35 * dVar13) * dVar31;
      dVar32 = (dVar7 - dVar37) * dVar32;
      auVar39._0_8_ = dVar31 * (dVar36 * dVar12 - dVar11);
      auVar39._8_8_ = dVar28 * (dVar35 * dVar13 - dVar8);
      auVar29 = blendpd(auVar29,auVar39,2);
      auVar40._8_4_ = SUB84(dVar38,0);
      auVar40._0_8_ = dVar33;
      auVar40._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar40 = blendpd(auVar39,auVar40,2);
      dVar28 = (1.0 - (dVar34 * dVar12 + dVar36 * dVar13)) * dVar28;
      dVar8 = (*(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1d8)) * 0.5;
      dVar38 = (*(double *)(param_1 + 0x1c8) + *(double *)(param_1 + 0x1e0)) * 0.5;
      dVar31 = (*(double *)(param_1 + 0x1d0) + *(double *)(param_1 + 0x1e8)) * 0.5;
      dVar34 = (*(double *)(param_1 + 0x1d8) - *(double *)(param_1 + 0x1c0)) * 0.5;
      dVar36 = (*(double *)(param_1 + 0x1e0) - *(double *)(param_1 + 0x1c8)) * 0.5;
      dVar12 = dVar31 * auVar29._0_8_ + dVar38 * auVar40._0_8_ + dVar8 * dVar33 +
               *(double *)(lVar18 + 0x260);
      dVar13 = dVar31 * auVar29._8_8_ + dVar38 * auVar40._8_8_ + dVar8 * dVar30 +
               *(double *)(lVar18 + 0x268);
      dVar35 = (*(double *)(param_1 + 0x1e8) - *(double *)(param_1 + 0x1d0)) * 0.5;
      dVar11 = ABS(dVar35 * auVar29._0_8_) + ABS(auVar40._0_8_ * dVar36) + ABS(dVar34 * dVar33);
      dVar7 = ABS(dVar35 * auVar29._8_8_) + ABS(auVar40._8_8_ * dVar36) + ABS(dVar34 * dVar30);
      dVar30 = dVar12 - dVar11;
      dVar33 = dVar13 - dVar7;
      dVar11 = dVar11 + dVar12;
      dVar7 = dVar7 + dVar13;
      dVar35 = ABS(dVar36 * dVar9) + ABS(dVar34 * dVar32) + ABS(dVar35 * dVar28);
      dVar32 = dVar31 * dVar28 + dVar38 * dVar9 + dVar8 * dVar32 + *(double *)(lVar18 + 0x270);
      dVar8 = dVar32 - dVar35;
      dVar32 = dVar32 + dVar35;
    }
    *local_110 = dVar30;
    *(double *)(param_1 + 0x1c8) = dVar33;
    *(double *)(param_1 + 0x1d0) = dVar8;
    auVar10._8_4_ = SUB84(dVar7,0);
    auVar10._0_8_ = dVar11;
    auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x1d8) = auVar10;
    *(double *)(param_1 + 0x1e8) = dVar32;
    *(bool *)(param_1 + 0x1f0) = !bVar22;
  }
  return;
}



// FUNCTION 1435ff642 FUN_1435ff642 body=202 status=ok
// SIG undefined FUN_1435ff642(void)

longlong * FUN_1435ff642(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(int *)(param_1[1] + 0x48) < 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = **(longlong **)(param_1[1] + 0x40);
  }
  cVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar5);
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    plVar4 = (longlong *)FUN_147bf8190(0x140);
    FUN_147c01286(plVar4,*(undefined8 *)(lVar5 + 0x30));
    uVar3 = *(uint *)((longlong)plVar4 + 0x34) & 0xffffffe0;
    uVar1 = uVar3 + 3;
    *(uint *)((longlong)plVar4 + 0x34) = uVar1;
    uVar3 = uVar3 | 0x23;
    if (*(float *)(param_1[0x5c] + 0x34) <= 0.0) {
      uVar3 = uVar1 & 0xffffffc3;
    }
    *(uint *)((longlong)plVar4 + 0x34) = uVar3;
    cVar2 = (**(code **)(*param_1 + 0x218))(param_1,plVar4 + 9);
    if (cVar2 != '\0') {
      (**(code **)(*plVar4 + 0x70))(plVar4,param_2);
      return plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)*plVar4)(plVar4,1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1435ff70c FUN_1435ff70c body=1311 status=ok
// SIG undefined FUN_1435ff70c(void)

undefined8 FUN_1435ff70c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  uint *puVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  
  if (*(int *)(param_1 + 0x18c) < 1) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x160) & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) < 1) {
    return 0;
  }
  lVar22 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  if (lVar22 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar22 + 0x2c) & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  lVar22 = *(longlong *)(param_1 + 0x2e0);
  fVar2 = *(float *)(lVar22 + 0x38);
  fVar3 = *(float *)(lVar22 + 0x3c);
  fVar4 = *(float *)(lVar22 + 0x40);
  uVar5 = *(uint *)(lVar22 + 0x30);
  fVar27 = (float)FUN_1447c7e44(fVar3,0x43340000);
  if (*(int *)(param_1 + 0x18c) < 1) {
    *(undefined4 *)(param_1 + 0x280) = 0;
  }
  else {
    lVar22 = 0;
    iVar26 = 0;
    iVar14 = 0;
    do {
      iVar10 = DAT_14c7616f0;
      iVar9 = DAT_14c7616ec;
      lVar19 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar22 * 2) *
               (longlong)*(int *)(param_1 + 0x188);
      lVar1 = *(longlong *)(param_1 + 0x168) + lVar19;
      lVar18 = (longlong)*(int *)(param_1 + 0x24);
      puVar16 = (uint *)(lVar1 + lVar18);
      uVar23 = *(uint *)(lVar18 + lVar1);
      uVar21 = uVar23 & 0xf0000000;
      if (SBORROW4(0,uVar21)) {
        uVar23 = uVar23 >> 0xe & 0x3fff;
        if (uVar23 != 0x3fff) {
          lVar24 = (ulonglong)uVar23 * (longlong)*(int *)(param_1 + 0x188);
          if ((int)lVar19 == (int)lVar24) {
            iVar17 = *(int *)(param_1 + 0x278);
            uVar23 = 0;
          }
          else {
            lVar24 = *(longlong *)(param_1 + 0x168) + lVar24;
            uVar23 = 0;
            puVar11 = puVar16;
            puVar12 = (uint *)(lVar18 + lVar24);
            puVar25 = (uint *)0x0;
            lVar18 = lVar1;
            do {
              puVar16 = puVar12;
              lVar19 = lVar24;
              puVar15 = puVar11;
              uVar21 = 1;
              if (1e-08 < ABS(fVar2)) {
                dVar29 = *(double *)(lVar18 + 0x28) - *(double *)(lVar19 + 0x28);
                dVar8 = *(double *)(lVar18 + 0x20) - *(double *)(lVar19 + 0x20);
                dVar7 = *(double *)(lVar18 + 0x18) - *(double *)(lVar19 + 0x18);
                iVar17 = (int)((float)SQRT(dVar29 * dVar29 + dVar7 * dVar7 + dVar8 * dVar8) /
                              *(float *)(*(longlong *)(param_1 + 0x2e0) + 0x38));
                if (iVar9 <= iVar17) {
                  iVar17 = iVar9;
                }
                uVar21 = iVar17 + 1;
              }
              if (1e-08 < ABS(fVar3)) {
                fVar28 = ((float)puVar16[0xf] * (float)puVar15[0xf] +
                          (float)puVar16[0xd] * (float)puVar15[0xd] +
                          (float)puVar16[0xe] * (float)puVar15[0xe] + -1.0) * -0.5;
                if ((((uVar5 & 2) != 0) && (puVar25 != (uint *)0x0)) &&
                   (fVar30 = ((float)puVar15[0xf] * (float)puVar25[0xf] +
                              (float)puVar15[0xd] * (float)puVar25[0xd] +
                              (float)puVar15[0xe] * (float)puVar25[0xe] + -1.0) * -0.5,
                   fVar28 <= fVar30)) {
                  fVar28 = fVar30;
                }
                iVar17 = (int)(fVar28 / (fVar27 / 180.0));
                if (iVar10 <= iVar17) {
                  iVar17 = iVar10;
                }
                uVar21 = iVar17 + uVar21;
              }
              if (1e-08 < ABS(fVar4)) {
                fVar28 = ABS((float)puVar15[0x10] - (float)puVar16[0x10]);
                if ((puVar25 != (uint *)0x0) &&
                   (fVar30 = ABS((float)puVar25[0x10] - (float)puVar15[0x10]), fVar28 <= fVar30)) {
                  fVar28 = fVar30;
                }
                uVar21 = (int)(fVar28 / *(float *)(*(longlong *)(param_1 + 0x2e0) + 0x40)) + uVar21;
              }
              puVar15[7] = uVar21;
              iVar17 = uVar21 * 2 + *(int *)(param_1 + 0x278);
              *(int *)(param_1 + 0x278) = iVar17;
              uVar23 = uVar23 + uVar21 * 2;
              uVar21 = *puVar16 >> 0xe & 0x3fff;
              if (uVar21 == 0x3fff) break;
              lVar24 = (longlong)*(int *)(param_1 + 0x188) * (ulonglong)uVar21 +
                       *(longlong *)(param_1 + 0x168);
              puVar11 = puVar16;
              puVar12 = (uint *)(*(int *)(param_1 + 0x24) + lVar24);
              puVar25 = puVar15;
              lVar18 = lVar19;
            } while (lVar1 != lVar24);
          }
          *(int *)(param_1 + 0x278) = iVar17 + 2;
          puVar16[2] = uVar23;
          puVar16[7] = 1;
          iVar14 = iVar14 + uVar23 + 2;
          iVar26 = iVar26 + 1;
        }
      }
      else if (((uVar21 == 0x40000000) || (uVar21 == 0x10000000)) && ((~uVar23 & 0x3fff) == 0)) {
        puVar16[7] = 0;
        puVar16[2] = 0;
        *(int *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + 1;
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_1 + 0x18c));
    *(int *)(param_1 + 0x280) = iVar26;
    if (0 < iVar26) {
      iVar14 = iVar14 + iVar26 * 2 + -4;
      *(int *)(param_1 + 0x27c) = iVar14;
      if (0xfffd < iVar14) {
        return 0;
      }
      goto LAB_1435ffb10;
    }
  }
  *(undefined4 *)(param_1 + 0x27c) = 0;
LAB_1435ffb10:
  cVar13 = FUN_1435bcde2(param_1,param_2);
  if ((cVar13 != '\0') && (0 < *(int *)(param_1 + 0x27c))) {
    *(undefined4 *)(param_2 + 8) = 5;
    plVar20 = *(longlong **)(param_1 + 0x238);
    if ((plVar20 == (longlong *)0x0) ||
       (cVar13 = (**(code **)(*plVar20 + 0x340))(plVar20,2), cVar13 == '\0')) {
      FUN_14003fbd6();
      plVar20 = DAT_14caea080;
    }
    *(longlong **)(param_1 + 0x238) = plVar20;
    *(longlong **)(param_2 + 0x60) = plVar20;
    *(undefined2 *)(param_2 + 0xbc) = 0;
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_1 + 0x194);
    *(undefined4 *)(param_2 + 0xf4) = 1;
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_1 + 0x278);
    *(int *)(param_2 + 0xe0) = *(int *)(param_1 + 0x280) * 2 + *(int *)(param_1 + 0x27c);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x27c);
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_1 + 0x280);
    *(undefined4 *)(param_2 + 0xe4) = 2;
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 0xe8) = uVar6;
    return CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
  }
  return 0;
}



// FUNCTION 1435ffc2e FUN_1435ffc2e body=99 status=ok
// SIG undefined FUN_1435ffc2e(void)

void FUN_1435ffc2e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < *(int *)((longlong)param_1 + 0x18c)) {
    lVar2 = 0;
    do {
      uVar3 = (ulonglong)*(ushort *)(param_1[0x2e] + lVar2 * 2);
      lVar1 = (longlong)(int)param_1[0x31] * uVar3 + param_1[0x2d];
      (**(code **)(*param_1 + 0x240))
                (param_1,lVar1,*(int *)((longlong)param_1 + 0x24) + lVar1,uVar3,0xffffffff);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)((longlong)param_1 + 0x18c));
  }
  return;
}



// FUNCTION 1435ffc92 FUN_1435ffc92 body=401 status=ok
// SIG undefined FUN_1435ffc92(void)

void FUN_1435ffc92(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  int local_78;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)((longlong)param_1 + 0x18c);
  if (0 < iVar4) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    lVar6 = 0;
    do {
      uVar3 = uStack_60;
      uVar1 = *(ushort *)(param_1[0x2e] + lVar6 * 2);
      uVar9 = (ulonglong)uVar1;
      lVar10 = (longlong)(int)param_1[0x31] * uVar9 + param_1[0x2d];
      iVar2 = *(int *)((longlong)param_1 + 0x24);
      uVar5 = *(uint *)(iVar2 + lVar10) & 0xf0000000;
      if ((uVar5 == 0x40000000) || (uVar5 == 0x10000000)) {
        lVar8 = (longlong)(int)uStack_60;
        uVar5 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
        if (uStack_60._4_4_ < uVar5) {
          FUN_1446f48e2(&local_68,uVar3 & 0xffffffff);
        }
        puVar7 = (uint *)(iVar2 + lVar10);
        *(uint *)(local_68 + lVar8 * 4) = (uint)uVar1;
        while( true ) {
          uVar3 = uStack_50;
          lVar8 = (longlong)(int)uStack_50;
          uVar5 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
          if (uStack_50._4_4_ < uVar5) {
            FUN_1446f48e2(&local_58,uVar3 & 0xffffffff);
          }
          *(int *)(local_58 + lVar8 * 4) = (int)uVar9;
          local_78 = (int)uStack_60 + -1;
          (**(code **)(*param_1 + 0x240))(param_1,lVar10,puVar7,uVar9);
          uVar9 = (ulonglong)*puVar7 & 0x3fff;
          if (uVar9 == 0x3fff) break;
          lVar10 = (longlong)(int)param_1[0x31] * uVar9 + param_1[0x2d];
          puVar7 = (uint *)(*(int *)((longlong)param_1 + 0x24) + lVar10);
        }
        iVar4 = *(int *)((longlong)param_1 + 0x18c);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
    if ((int)uStack_50 != iVar4) {
      (**(code **)(*param_1 + 0x248))(param_1);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ffe24 FUN_1435ffe24 body=69 status=ok
// SIG undefined FUN_1435ffe24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435ffe24(void)

{
  _DAT_14caf5e80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435ffe66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5e88,1);
  return;
}



// FUNCTION 1435ffe79 FUN_1435ffe79 body=47 status=ok
// SIG undefined FUN_1435ffe79(void)

void FUN_1435ffe79(longlong param_1,int param_2)

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



// FUNCTION 1435ffea8 FUN_1435ffea8 body=28 status=ok
// SIG undefined FUN_1435ffea8(void)

undefined8 FUN_1435ffea8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435ffec4 FUN_1435ffec4 body=1 status=ok
// SIG undefined FUN_1435ffec4(void)

void FUN_1435ffec4(void)

{
  return;
}



// FUNCTION 1435ffeda FUN_1435ffeda body=85 status=ok
// SIG undefined FUN_1435ffeda(void)

void FUN_1435ffeda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa07370;
  return;
}



// FUNCTION 1435fff30 FUN_1435fff30 body=85 status=ok
// SIG undefined FUN_1435fff30(void)

void FUN_1435fff30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa07370;
  return;
}



// FUNCTION 1435fff86 FUN_1435fff86 body=118 status=ok
// SIG undefined FUN_1435fff86(void)

void FUN_1435fff86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa07370;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435fffed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435ffffc FUN_1435ffffc body=27 status=ok
// SIG undefined FUN_1435ffffc(void)

undefined1 FUN_1435ffffc(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0xa8))(param_2);
  uVar1 = DAT_14c7616fc;
  LOCK();
  DAT_14c7616fc = uVar2;
  UNLOCK();
  return uVar1;
}



// FUNCTION 143600018 FUN_143600018 body=29 status=ok
// SIG undefined FUN_143600018(void)

undefined8 FUN_143600018(undefined8 param_1,longlong *param_2)

{
  DAT_14c7616fc = (**(code **)(*param_2 + 0xa8))(param_2);
  LOCK();
  UNLOCK();
  return 1;
}



// FUNCTION 143600036 FUN_143600036 body=29 status=ok
// SIG undefined FUN_143600036(void)

undefined8 FUN_143600036(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143600068 FUN_143600068 body=85 status=ok
// SIG undefined FUN_143600068(void)

void FUN_143600068(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa073e0;
  return;
}



// FUNCTION 1436000be FUN_1436000be body=85 status=ok
// SIG undefined FUN_1436000be(void)

void FUN_1436000be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa073e0;
  return;
}



// FUNCTION 143600114 FUN_143600114 body=118 status=ok
// SIG undefined FUN_143600114(void)

void FUN_143600114(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa073e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014360017b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143600192 FUN_143600192 body=19 status=ok
// SIG undefined FUN_143600192(void)

undefined1 FUN_143600192(undefined8 param_1,undefined8 param_2)

{
  FUN_1436001a6(param_2);
  return 1;
}



// FUNCTION 1436001a6 FUN_1436001a6 body=493 status=ok
// SIG undefined FUN_1436001a6(void)

void FUN_1436001a6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined8 unaff_RBX;
  undefined7 uVar10;
  undefined4 uVar11;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] < 1) goto LAB_1436001e9;
  if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)*param_1;
  }
  iVar5 = _wtoi(pwVar8);
  if (iVar5 < 1) goto LAB_1436001e9;
  uVar10 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar9 = (undefined4)CONCAT71(uVar10,1);
  if ((int)param_1[1] < 2) {
    uVar12 = 0;
LAB_143600286:
    uVar11 = 0;
  }
  else {
    if (*(int *)(*param_1 + 0x18) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(*param_1 + 0x10);
    }
    iVar6 = _wtoi(pwVar8);
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar6 != 0);
    if ((int)param_1[1] < 3) goto LAB_143600286;
    if (*(int *)(*param_1 + 0x28) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(*param_1 + 0x20);
    }
    iVar6 = _wtoi(pwVar8);
    uVar9 = (undefined4)CONCAT71(uVar10,iVar6 != 0);
    if ((int)param_1[1] < 4) goto LAB_143600286;
    if (*(int *)(*param_1 + 0x38) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = *(wchar_t **)(*param_1 + 0x30);
    }
    iVar6 = _wtoi(pwVar8);
    uVar11 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar6 != 0);
  }
  plVar7 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aa07450;
  plVar1 = plVar7 + 2;
  FUN_147c2f420(plVar1,uVar12 & 0xffffffff,uVar9,uVar11);
  plVar7[2] = (longlong)&PTR_FUN_14aa05600;
  *(int *)(plVar7 + 0x15) = iVar5;
  local_48 = plVar1;
  local_40 = plVar7;
  FUN_147c418ec(&local_48,plVar1);
  plVar4 = local_40;
  if (plVar7 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
    local_48 = plVar1;
    FUN_147c2ec06(&local_48,1);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_48 = plVar1;
    local_40 = plVar7;
    FUN_147c2ec06(&local_48,1);
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_1436001e9:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436003aa FUN_1436003aa body=104 status=ok
// SIG undefined FUN_1436003aa(void)

void FUN_1436003aa(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aa06ea0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_147c412c6(param_1 + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143600406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143600412 FUN_143600412 body=71 status=ok
// SIG undefined FUN_143600412(void)

void FUN_143600412(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014360044e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143600464 FUN_143600464 body=12 status=ok
// SIG undefined FUN_143600464(void)

void FUN_143600464(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014360046d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143600470 FUN_143600470 body=83 status=ok
// SIG undefined FUN_143600470(void)

undefined8 * FUN_143600470(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14aa07470;
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



// FUNCTION 1436004ea FUN_1436004ea body=282 status=ok
// SIG undefined FUN_1436004ea(void)

undefined8 * FUN_1436004ea(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1436004c3);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143600604 FUN_143600604 body=170 status=ok
// SIG undefined FUN_143600604(void)

ulonglong FUN_143600604(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  param_1[0x15] = 0;
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x16] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar4 = (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    plVar3 = (longlong *)param_1[0x16];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        uVar4 = (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436006a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 1436006ae FUN_1436006ae body=519 status=ok
// SIG undefined FUN_1436006ae(void)

void FUN_1436006ae(undefined8 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  
  puVar14 = (undefined8 *)param_1[0x10];
  if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
    puVar14 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x11) != 0) {
    puVar9 = puVar14 + (longlong)*(int *)(param_1 + 0x11) * 2;
    do {
      plVar3 = (longlong *)*puVar14;
      plVar4 = (longlong *)puVar14[1];
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(*plVar3 + 0x20))();
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar9);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  iVar6 = DAT_14caf5a50;
  lVar5 = DAT_14caf5a28;
  if (DAT_14caf5a50 == 0) {
    uVar18 = 1;
    uVar7 = 0;
    iVar8 = 0;
    iVar12 = 0;
  }
  else {
    puVar15 = &DAT_14caf5a38;
    if (DAT_14caf5a48 != (uint *)0x0) {
      puVar15 = DAT_14caf5a48;
    }
    uVar16 = *puVar15;
    if (uVar16 == 0) {
      iVar12 = DAT_14caf5a50 + 0x1e;
      if (-1 < DAT_14caf5a50 + -1) {
        iVar12 = DAT_14caf5a50 + -1;
      }
      uVar7 = 0;
      uVar18 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar18 = uVar7;
      }
      iVar8 = 0;
      do {
        if (uVar18 == uVar7) goto LAB_143600895;
        iVar8 = iVar8 + 0x20;
        uVar16 = puVar15[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar7 = 0;
      iVar8 = 0;
    }
    uVar18 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar18 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar12 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (DAT_14caf5a50 <= iVar12) {
      iVar12 = DAT_14caf5a50;
    }
  }
  if (iVar12 < DAT_14caf5a50) {
    puVar15 = &DAT_14caf5a38;
    if (DAT_14caf5a48 != (uint *)0x0) {
      puVar15 = DAT_14caf5a48;
    }
    iVar19 = DAT_14caf5a50 + 0x1e;
    if (-1 < DAT_14caf5a50 + -1) {
      iVar19 = DAT_14caf5a50 + -1;
    }
    iVar19 = iVar19 >> 5;
    uVar16 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(lVar5 + 8 + (longlong)iVar12 * 0x18);
      uVar16 = ~(uint)uVar18 & uVar16;
      iVar12 = (int)uVar7;
      lVar10 = (longlong)iVar12;
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(undefined8 *)(lVar11 + 0x50) = 0;
      *(undefined8 *)(lVar11 + 0x38) = 0;
      *(undefined8 *)(lVar11 + 0x40) = 0;
      *(undefined8 *)(lVar11 + 0x58) = 0;
      uVar13 = puVar15[lVar10] & uVar16;
      if (uVar13 == 0) {
        iVar17 = iVar19;
        if (iVar19 < iVar12) {
          iVar17 = iVar12;
        }
        if (iVar19 <= iVar12) break;
        lVar11 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar13 = puVar15[lVar10 + lVar11 + 1];
          if (uVar13 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar17 - lVar10 == lVar11) goto LAB_143600895;
        }
        uVar7 = (ulonglong)(iVar12 + (int)lVar11 + 1);
        uVar16 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar18 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar12 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar6);
  }
LAB_143600895:
                    /* WARNING: Could not recover jumptable at 0x0001436008a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  return;
}



// FUNCTION 1436008c6 FUN_1436008c6 body=29 status=ok
// SIG undefined FUN_1436008c6(void)

void FUN_1436008c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1436008e4 FUN_1436008e4 body=52 status=ok
// SIG undefined FUN_1436008e4(void)

undefined8 * FUN_1436008e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa074f0;
  FUN_145cfed70(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143600918 FUN_143600918 body=282 status=ok
// SIG undefined FUN_143600918(void)

undefined8 * FUN_143600918(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1436004c3);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143600a32 FUN_143600a32 body=116 status=ok
// SIG undefined FUN_143600a32(void)

void FUN_143600a32(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1436006ae(0xa8);
    FUN_145cfed70(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1436006ae(param_1 + 0x15);
  FUN_145cfed70(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143600a9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143600aa6 FUN_143600aa6 body=48 status=ok
// SIG undefined FUN_143600aa6(void)

void FUN_143600aa6(int param_1)

{
  if (*(longlong *)(DAT_14caf5a28 + 8 + (longlong)param_1 * 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_147c42112(param_1);
  return;
}



// FUNCTION 143600ad6 FUN_143600ad6 body=156 status=ok
// SIG undefined FUN_143600ad6(void)

undefined8 FUN_143600ad6(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14caf5a30 - DAT_14caf5a5c != 1) {
    local_30 = *param_2;
    iVar5 = FUN_147c4221a();
    if (iVar5 != -1) {
      puVar1 = (undefined4 *)(DAT_14caf5a28 + (longlong)iVar5 * 0x18);
      if (*(longlong *)(puVar1 + 2) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)((longlong)param_2 + 4);
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
      *puVar1 = *(undefined4 *)param_2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_147c42112(*param_3);
      *param_3 = iVar5;
      uVar6 = 1;
      goto LAB_143600b01;
    }
  }
  uVar6 = 0;
LAB_143600b01:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143600b74 FUN_143600b74 body=246 status=ok
// SIG undefined FUN_143600b74(void)

longlong * FUN_143600b74(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e4142c();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14caf5bb8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143600c6b FUN_143600c6b body=49 status=ok
// SIG undefined FUN_143600c6b(void)

void FUN_143600c6b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143600ca8 FUN_143600ca8 body=282 status=ok
// SIG undefined FUN_143600ca8(void)

undefined8 * FUN_143600ca8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1436004c3);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143600dc2 FUN_143600dc2 body=896 status=ok
// SIG undefined FUN_143600dc2(void)

void FUN_143600dc2(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar11 = *piVar2;
  if (iVar11 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar11 = *piVar2;
  }
  *piVar2 = 0x40000002;
  plVar13 = (longlong *)param_1[5];
  if ((longlong *)param_1[5] == (longlong *)0x0) {
    plVar13 = param_1 + 1;
  }
  lVar5 = param_1[6];
  if ((longlong)(int)lVar5 != 0) {
    lVar12 = 0;
    do {
      FUN_1435c3640(*(undefined8 *)
                     (*(longlong *)(*param_1 + 0x28) +
                     (longlong)*(int *)((longlong)plVar13 + lVar12) * 8));
      lVar12 = lVar12 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar12);
  }
  puVar3 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar7 = (uint *)*puVar3;
  if (puVar7 != (uint *)0x0) goto LAB_143600ef2;
  while( true ) {
    uVar9 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar9 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar9 | 1;
      __tlregdtor(&LAB_1436004c3);
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = *(undefined4 **)(lVar5 + 0x310);
    *(undefined8 *)(lVar5 + 0x310) = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar6 = 0xffffffff;
    *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
    puVar6[0x12] = 0;
    *puVar3 = puVar6;
    FUN_140217a48(puVar3);
    puVar7 = (uint *)*puVar3;
LAB_143600ef2:
    puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar10 = (uint *)(puVar14 + 0x1c);
    uVar9 = puVar7[0x12];
    if (puVar10 <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar4 = *puVar7;
      *puVar7 = *puVar7 + uVar9 + 1;
      UNLOCK();
      if ((uVar4 ^ uVar9) != 0xffffffff) break;
      puVar7 = (uint *)*puVar3;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar3 = puVar7;
      puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
      puVar10 = (uint *)(puVar14 + 0x1c);
      uVar9 = 0;
      if (puVar10 <= puVar7 + 0x4000) {
        uVar9 = 1;
        goto LAB_143600f72;
      }
    }
  }
  uVar9 = uVar9 + 1;
LAB_143600f72:
  *(uint **)(puVar7 + 0x10) = puVar10;
  puVar7[0x12] = uVar9;
  FUN_1447247dc(puVar14,0);
  *puVar14 = &PTR_FUN_14aa07708;
  FUN_147c43bcc(puVar14 + 0x15,*param_1,param_1 + 1);
  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
  }
  puVar14[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar14[9] = puVar14;
  puVar14[10] = puVar14;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar14[0xf] = uVar8;
  puVar14[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar14 + 0x1c) = 3;
  if (puVar14 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
  }
  local_49 = 1;
  FUN_1447439e4(puVar14);
  uVar8 = *param_2;
  local_58 = puVar14;
  if (puVar14 == (undefined8 *)0x0) {
    FUN_14002c244(uVar8,&local_58);
  }
  else {
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
    FUN_14002c244(uVar8,&local_58);
    LOCK();
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar14)(puVar14,1);
    }
  }
  *piVar2 = iVar11;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143601144 FUN_143601144 body=282 status=ok
// SIG undefined FUN_143601144(void)

undefined8 * FUN_143601144(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1436004c3);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14360125e FUN_14360125e body=159 status=ok
// SIG undefined FUN_14360125e(void)

void FUN_14360125e(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)param_1[0x1a];
  puVar4 = param_1 + 0x16;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  iVar2 = *(int *)(param_1 + 0x1b);
  if ((longlong)iVar2 != 0) {
    lVar5 = 0;
    do {
      FUN_1435c3904(*(undefined8 *)
                     (*(longlong *)(param_1[0x15] + 0x28) +
                     (longlong)*(int *)((longlong)puVar4 + lVar5) * 8));
      lVar5 = lVar5 + 4;
    } while ((longlong)iVar2 * 4 != lVar5);
    puVar3 = (undefined8 *)param_1[0x1a];
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001436012ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1436012fe FUN_1436012fe body=450 status=ok
// SIG undefined FUN_1436012fe(void)

void FUN_1436012fe(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_143601419:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_143601456:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_143601354;
LAB_143601349:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_143601354:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000143601380;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1436013d6:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_143601456;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_143601419;
code_r0x000143601380:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1436013d6;
    }
  }
  goto LAB_143601349;
}



// FUNCTION 1436014c0 FUN_1436014c0 body=258 status=ok
// SIG undefined FUN_1436014c0(void)

undefined8 * FUN_1436014c0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_1436014f6;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_1436014f6:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x2e <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 0x2e <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_143601572;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_143601572:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x2f;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x170;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14aa077f8;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 1436015c2 FUN_1436015c2 body=180 status=ok
// SIG undefined FUN_1436015c2(void)

void FUN_1436015c2(longlong *param_1)

{
  longlong lVar1;
  LARGE_INTEGER LVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1[1] + 0x98);
  }
  *(undefined8 *)(*param_1 + 0x3a0) = uVar3;
  lVar1 = *(longlong *)(*param_1 + 0x3a0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  QueryPerformanceCounter(&local_28);
  LVar2 = local_28;
  FUN_1435f9aee(*param_1,param_1[1]);
  if (LVar2.QuadPart != -1) {
    QueryPerformanceCounter(&local_28);
    *(longlong *)(lVar1 + 0x40) =
         *(longlong *)(lVar1 + 0x40) + (local_28.QuadPart - (longlong)LVar2);
    *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143601694 FUN_143601694 body=12 status=ok
// SIG undefined FUN_143601694(void)

void FUN_143601694(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014360169d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1436016a0 FUN_1436016a0 body=29 status=ok
// SIG undefined FUN_1436016a0(void)

undefined8 FUN_1436016a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436016be FUN_1436016be body=282 status=ok
// SIG undefined FUN_1436016be(void)

undefined8 * FUN_1436016be(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1436004c3);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1436017d8 FUN_1436017d8 body=238 status=ok
// SIG undefined FUN_1436017d8(void)

void FUN_1436017d8(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  LARGE_INTEGER LVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (param_1[0x16] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1[0x16] + 0x98);
  }
  *(undefined8 *)(param_1[0x15] + 0x3a0) = uVar4;
  lVar2 = *(longlong *)(param_1[0x15] + 0x3a0);
  if (lVar2 == 0) {
    FUN_1435f9aee(param_1[0x15],param_1[0x16]);
  }
  else {
    QueryPerformanceCounter(&local_30);
    LVar3 = local_30;
    FUN_1435f9aee(param_1[0x15],param_1[0x16]);
    if (LVar3.QuadPart != -1) {
      QueryPerformanceCounter(&local_30);
      *(longlong *)(lVar2 + 0x40) =
           *(longlong *)(lVar2 + 0x40) + (local_30.QuadPart - (longlong)LVar3);
      *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + 1;
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436018c7 FUN_1436018c7 body=2298 status=ok
// SIG undefined FUN_1436018c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436018c7(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14caf59a8);
  if (cVar2 == '\0') {
    _DAT_14caf59a8 = 0;
    uRam000000014caf59b0 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  DAT_14caf59f8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14caf5a00);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14caf5a00,4000);
  atexit((_func_5014 *)&LAB_1435e77e0);
  DAT_14caf5a48 = 0;
  DAT_14caf5a50 = 0;
  DAT_14caf5a28 = 0;
  _DAT_14caf5a30 = 0;
  _DAT_14caf5a54 = 0xffffffff00000080;
  DAT_14caf5a5c = 0;
  DAT_14caf5a68 = 0;
  DAT_14caf5a70 = 0;
  atexit(FUN_1435e77ee);
  DAT_14caf5a78 = 0;
  _DAT_14caf5a80 = 0;
  atexit(FUN_1435e7817);
  DAT_14caf5b08 = 0;
  _DAT_14caf5b10 = 0x800000000;
  atexit((_func_5014 *)&LAB_1435e7848);
  DAT_14caf5b18 = DAT_14c7616fc & 1;
  local_50 = (undefined8 *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *local_50 = &PTR_LAB_149e170a0;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14aa07370;
  local_60 = (ulonglong)local_60._4_4_ << 0x20;
  local_68 = &local_50;
  FUN_14171ec12(&DAT_14caf5b20,L"fx.ParticlePerfStats.Enabled",&DAT_14caf5b18,
                L"Used to control if stat gathering is enabled or not.\n");
  if ((int)local_48 == 0) {
LAB_143601aa8:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143601aa8;
  }
  atexit(FUN_1435e7854);
  local_50 = (undefined8 *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *local_50 = &PTR_LAB_14a177500;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14aa073e0;
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14156bb10(&DAT_14caf5b30,L"fx.ParticlePerfStats.RunTest",
                L"Runs for a number of frames then logs out the results.\nArg0 = NumFrames.\nArg1 = Gather World Stats (default 0).\nArg2 = Gather System Stats (default 1).\nArg3 = Gather Component Stats (default 0)."
                ,&local_50);
  if ((int)local_48 == 0) {
LAB_143601b89:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143601b89;
  }
  atexit(FUN_1435e7899);
  DAT_14caf6050 = 0xffffffff;
  _DAT_14caf6054 = 0x105;
  DAT_14caf6056 = 0;
  DAT_14caf6058 = 0;
  DAT_14caf6048 = &PTR_FUN_14aa07570;
  FUN_1463f1458();
  atexit(FUN_1435e9db8);
  DAT_14caf5b48 = 0xffffffff;
  _DAT_14caf5b4c = 0x105;
  DAT_14caf5b4e = 0;
  DAT_14caf5b50 = 0;
  DAT_14caf5b40 = &PTR_FUN_14aa075a0;
  FUN_1463f14a0();
  atexit(FUN_1435e9ea8);
  _DAT_14caf6038 = 0xffffffff;
  _DAT_14caf603c = 0x105;
  DAT_14caf603e = 0;
  DAT_14caf6040 = 0;
  DAT_14caf6030 = &PTR_FUN_14aa075d0;
  FUN_1463f14e8();
  atexit(FUN_1435ea4a6);
  _DAT_14caf5b60 = 0xffffffff;
  _DAT_14caf5b64 = 0x105;
  DAT_14caf5b66 = 0;
  _DAT_14caf5b68 = 0;
  DAT_14caf5b58 = &PTR_FUN_14aa07600;
  FUN_1463f1530();
  atexit(FUN_1435ea7b5);
  _DAT_14caf6018 = 0xffffffff;
  _DAT_14caf601c = 0x105;
  DAT_14caf601e = 0;
  DAT_14caf6020 = 0;
  DAT_14caf6028 = 0;
  DAT_14caf6010 = &PTR_FUN_14aa07630;
  FUN_1463f1578();
  atexit(FUN_1435eab93);
  local_48 = FUN_145e4142c;
  local_50 = (undefined8 *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf5bf8,&local_50);
  local_48 = FUN_145eb3c06;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf5d20,&local_50);
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa059b0);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14caf5d48,L"fx.PSCMan.Enable",&DAT_14c7616f8,
                L"If PSC world manager is enabled.");
  atexit(FUN_1435ebd1b);
  local_68._0_4_ = 0x40;
  FUN_141471170(&DAT_14caf5d58,L"fx.ParticleManagerAsyncBatchSize",&DAT_14c7616d8,
                L"How many PSCs the ParticleWorldManager should tick per async task.");
  atexit(FUN_1435ebd60);
  local_68._0_4_ = 0;
  local_60 = CONCAT44(local_60._4_4_,0x200);
  FUN_1412c7f16(&DAT_14caf5d68,L"TaskGraph.TaskPriorities.ParticleManagerAsyncTask",
                L"Task and thread priority for FParticleManagerAsyncTask.",0x400);
  atexit(FUN_1435ebda5);
  DAT_14caf5fe0 = 0;
  DAT_14caf5fe8 = 0;
  DAT_14caf5fc0 = 0;
  _DAT_14caf5fc8 = 0;
  _DAT_14caf5fec = 0xffffffff00000080;
  DAT_14caf5ff4 = 0;
  DAT_14caf6000 = 0;
  DAT_14caf6008 = 0;
  atexit(FUN_1435ebe0f);
  local_50 = (undefined8 *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *local_50 = &PTR_LAB_14a1e1a40;
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
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_14a1e19d0;
  local_50[3] = &DAT_1435ffe78;
  local_68 = (undefined8 **)((ulonglong)local_68._4_4_ << 0x20);
  FUN_14156bb80(&DAT_14caf5da8,L"fx.PSCMan.Dump",
                L"Dumps state information for all current Particle System Managers.",&local_50);
  if ((int)local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143601ef4;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143601ef4:
  atexit(FUN_1435ec3cf);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf5dc8,L"fx.Cascade.SpriteRenderingEnabled",&DAT_14c7616dc,
                L"Controls if sprite rendering is enabled for Cascade");
  atexit(FUN_1435ec414);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf5dd8,L"fx.Cascade.MeshRenderingEnabled",&DAT_14c7616dd,
                L"Controls if mesh rendering is enabled for Cascade");
  atexit(FUN_1435ec459);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf5de8,L"fx.Cascade.BeamRenderingEnabled",&DAT_14c7616de,
                L"Controls if beam rendering is enabled for Cascade");
  atexit(FUN_1435ec49e);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14caf5df8,L"fx.Cascade.TrailRenderingEnabled",&DAT_14c7616df,
                L"Controls if trail rendering is enabled for Cascade");
  atexit(FUN_1435ec4e3);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf5e08,L"fx.FXAllowParticleMeshLODs",&DAT_14caf5e18,
                L"If we allow particle meshes to use LODs or not");
  atexit(FUN_1435ec528);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14caf5e20,L"r.CatmullRomEndParamOffset",&DAT_14c7616e0,
                L"The parameter offset for catmul rom end points.");
  atexit(FUN_1435f8950);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf5e38,L"r.EnableDebugSpam_GetObjectPositionAndScale",&DAT_14c7616e4,
                L"Enables or disables debug log spam for a bug in FParticleSystemSceneProxy::GetObjectPositionAndScale()"
               );
  atexit(FUN_1435f9c28);
  local_50 = (undefined8 *)&DAT_14a19662d;
  local_48 = (code *)CONCAT35(local_48._5_3_,4);
  FUN_14001a6c0(&local_50,1);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf5e48,L"r.Emitter.SkipRibbonSpawnInterp",&DAT_14c7616e8,
                L"Ignore velocity based offsets when interpolating. This prevents ribbon quads from overlapping eachother (default=1)"
               );
  atexit(FUN_1435f9fd6);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf5e58,L"FX.Trail.MaxDistanceTessellation",&DAT_14c7616ec,
                L"Maximum tessellation steps allowed for distance based tessellation.");
  atexit(FUN_1435fa01b);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf5e68,L"FX.Trail.MaxTangentTessellation",&DAT_14c7616f0,
                L"Maximum tessellation steps allowed for tangent based tessellation.");
  atexit(FUN_1435fa060);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf5e80,L"fx.EnableCircularAnimTrailDump",&DAT_14c7616f4,
                L"Controls logging for when circular links are discovered in anim trails.\n0 = No logging.\n1 = Minimal logging.\n2 = Verbose logging."
               );
  atexit(FUN_1435ffe24);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436021d0 FUN_1436021d0 body=240 status=ok
// SIG undefined FUN_1436021d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436021d0(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  _DAT_14caf6f28 = &PTR_FUN_14aa1d8e0;
  FUN_144725486(&DAT_14caf6f28);
  lVar4 = DAT_14caf6f38;
  _DAT_14caf6f28 = &PTR_FUN_14a38cff0;
  if (DAT_14caf6f38 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14caf6f38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  _DAT_14caf6f28 = &PTR_FUN_14a38cd70;
  DAT_14caf6f36 = 2;
  if ((DAT_14caf6f30 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1436022c0 FUN_1436022c0 body=47 status=ok
// SIG undefined FUN_1436022c0(void)

void FUN_1436022c0(void)

{
  DAT_14caf6128 = &PTR_FUN_14aa1d960;
  FUN_144725486(&DAT_14caf6128);
  FUN_1463f4aca(&DAT_14caf6128);
  return;
}



// FUNCTION 1436022ef FUN_1436022ef body=47 status=ok
// SIG undefined FUN_1436022ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436022ef(void)

{
  _DAT_14caf6298 = &PTR_FUN_14aa1da00;
  FUN_144725486(&DAT_14caf6298);
  FUN_1463f4b4c(&DAT_14caf6298);
  return;
}



// FUNCTION 14360231e FUN_14360231e body=47 status=ok
// SIG undefined FUN_14360231e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360231e(void)

{
  _DAT_14caf62b8 = &PTR_FUN_14aa1da00;
  FUN_144725486(&DAT_14caf62b8);
  FUN_1463f4b4c(&DAT_14caf62b8);
  return;
}



// FUNCTION 1436023a0 FUN_1436023a0 body=51 status=ok
// SIG undefined FUN_1436023a0(void)

undefined * FUN_1436023a0(char param_1)

{
  undefined *puVar1;
  
  if (param_1 == '\x03') {
    FUN_146118e30();
    puVar1 = &DAT_14caf6228;
  }
  else if (param_1 == '\0') {
    FUN_145de34a2();
    puVar1 = &DAT_14caf61b8;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



// FUNCTION 1436023d3 FUN_1436023d3 body=58 status=ok
// SIG undefined FUN_1436023d3(void)

undefined4 * FUN_1436023d3(char param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  if (param_1 == '\x03') {
    puVar1 = (undefined4 *)FUN_14001cc68(4,0x10);
    *puVar1 = 0;
  }
  else {
    if (param_1 == '\0') {
      puVar1 = (undefined4 *)FUN_147c6111e(param_2);
      return puVar1;
    }
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}



// FUNCTION 14360241a FUN_14360241a body=1041 status=ok
// SIG undefined FUN_14360241a(void)

void FUN_14360241a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined **ppuVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  int local_a0;
  int local_94 [3];
  ulonglong local_88;
  undefined ***pppuStack_80;
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
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(uint *)(*(undefined8 **)(param_1 + 0x18) + 1);
  if ((int)uVar4 < 1) goto LAB_143602782;
  local_a8 = **(undefined8 **)(param_1 + 0x18);
  local_b0 = &PTR_FUN_14a249130;
  local_a0 = uVar4 << 3;
  local_88 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FSubUVBoundingGeometryBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_94[1] = 0;
  local_94[2] = 0x4101;
  local_94[0] = local_a0;
  pppuStack_80 = &local_b0;
  if ((uVar4 & 0x1fffffff) == 0) {
    FUN_14570b4be(param_2,&local_88,0x4101,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_c0 = &local_88;
    local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b8,param_2,local_94);
    *(undefined4 *)(local_b8 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_c0 = &local_88;
    local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b8,param_2,local_94);
    *(undefined4 *)(local_b8 + 0x18) = 0x78;
  }
  lVar13 = local_b8;
  plVar11 = (longlong *)(param_1 + 0x10);
  if (plVar11 == &local_b8) {
LAB_1436025f8:
    lVar13 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b8 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b8 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b8 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
    lVar13 = *plVar11;
  }
  else {
    lVar5 = *plVar11;
    *plVar11 = local_b8;
    local_b8 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar4 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar4 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar14 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar14) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar14) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
      goto LAB_1436025f8;
    }
  }
  if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x28) & 0x10) == 0)) {
    local_88._0_3_ = 0x11100;
  }
  else {
    local_88._0_3_ = 0x40000;
  }
  local_88 = (ulonglong)(uint3)local_88;
  pppuStack_80 = (undefined ***)0x0;
  local_c8 = &local_88;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  pppuVar12 = (undefined ***)(param_1 + 0x20);
  if (pppuVar12 != &local_b0) {
    ppuVar6 = *pppuVar12;
    *pppuVar12 = local_b0;
    local_b0 = (undefined **)0x0;
    if (ppuVar6 == (undefined **)0x0) goto LAB_143602782;
    LOCK();
    ppuVar2 = ppuVar6 + 1;
    puVar7 = *ppuVar2;
    *(uint *)ppuVar2 = *(uint *)ppuVar2 - 1;
    UNLOCK();
    if (((ulonglong)puVar7 & 0x3fffffff) == 1) {
      ppuVar2 = ppuVar6 + 1;
      LOCK();
      uVar4 = *(uint *)ppuVar2;
      *(uint *)ppuVar2 = *(uint *)ppuVar2 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)ppuVar6 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = (longlong)ppuVar6;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar11;
            LOCK();
            bVar14 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar14) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar14 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar9;
            if (bVar14) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  ppuVar6 = local_b0;
  if (local_b0 != (undefined **)0x0) {
    LOCK();
    ppuVar2 = local_b0 + 1;
    puVar7 = *ppuVar2;
    *(uint *)ppuVar2 = *(uint *)ppuVar2 - 1;
    UNLOCK();
    if (((ulonglong)puVar7 & 0x3fffffff) == 1) {
      ppuVar2 = local_b0 + 1;
      LOCK();
      uVar4 = *(uint *)ppuVar2;
      *(uint *)ppuVar2 = *(uint *)ppuVar2 | 0x40000000;
      UNLOCK();
      if ((uVar4 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)local_b0 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = (longlong)ppuVar6;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar11;
            LOCK();
            bVar14 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar14) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar14 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar9;
            if (bVar14) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
LAB_143602782:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14360282c FUN_14360282c body=55 status=ok
// SIG undefined FUN_14360282c(void)

void FUN_14360282c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf62e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf62e0 = FUN_14171c317(FUN_1463f1728,uVar1,L"EPSCPoolMethod");
  }
  return;
}



// FUNCTION 143602863 FUN_143602863 body=69 status=ok
// SIG undefined FUN_143602863(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143602863(void)

{
  _DAT_14caf6338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436028a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6340,1);
  return;
}



// FUNCTION 1436028a8 FUN_1436028a8 body=69 status=ok
// SIG undefined FUN_1436028a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436028a8(void)

{
  _DAT_14caf6348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436028ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6350,1);
  return;
}



// FUNCTION 1436028ed FUN_1436028ed body=69 status=ok
// SIG undefined FUN_1436028ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436028ed(void)

{
  _DAT_14caf6358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360292f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6360,1);
  return;
}



// FUNCTION 143602932 FUN_143602932 body=113 status=ok
// SIG undefined FUN_143602932(void)

void FUN_143602932(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x69c) = 0;
        plVar3 = *(longlong **)(lVar1 + lVar5);
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_147c61400(param_1,0);
  return;
}



// FUNCTION 1436029a4 FUN_1436029a4 body=589 status=ok
// SIG undefined FUN_1436029a4(void)

longlong * FUN_1436029a4(undefined8 param_1,ulonglong param_2,longlong param_3,undefined1 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 0) || ((*(byte *)(param_3 + 0x155) & 0x20) != 0)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    if (DAT_14c761704 == 0) {
      FUN_140791bba(param_1);
    }
    else if (*(int *)(param_2 + 0x28) != 0) {
      local_38 = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar5 = (longlong *)FUN_147c618a6(param_1,uVar2 >> 0x10 ^ uVar2,&local_38);
      iVar3 = (int)plVar5[1];
      if ((longlong)iVar3 == 0) {
        if (*(longlong *)(param_3 + 0x30) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x2b0);
        }
        if (lVar6 == 0) {
          lVar6 = param_3;
        }
        plVar4 = (longlong *)FUN_147922815(lVar6);
        if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(plVar4);
        }
        *(byte *)((longlong)plVar4 + 0x693) = *(byte *)((longlong)plVar4 + 0x693) & 0xfe;
        *(undefined4 *)((longlong)plVar4 + 0x734) = 0;
        *(byte *)((longlong)plVar4 + 0x9e) = *(byte *)((longlong)plVar4 + 0x9e) & 0xf7;
        FUN_1435c4c78(plVar4,param_2);
        *(byte *)((longlong)plVar4 + 0x692) = *(byte *)((longlong)plVar4 + 0x692) & 0xf7;
        *(byte *)((longlong)plVar4 + 0x691) = *(byte *)((longlong)plVar4 + 0x691) | 0x10;
      }
      else {
        plVar4 = *(longlong **)(*plVar5 + -0x10 + (longlong)iVar3 * 0x10);
        if ((DAT_14c950c29 == 1) && (plVar4 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar4);
          iVar3 = (int)plVar5[1];
        }
        bVar1 = DAT_14c950c29;
        *(int *)(plVar5 + 1) = iVar3 + -1;
        if (((bVar1 & 1) != 0) && (plVar4 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar4);
        }
        FUN_14045627c(plVar4,1,1);
        FUN_1449e3cec(plVar4,0,1);
        lVar6 = plVar4[0x16];
        if (lVar6 == 0) {
          lVar6 = FUN_1448abda6(plVar4);
        }
        if (lVar6 != param_3) {
          (**(code **)(*plVar4 + 0x170))(plVar4,0,param_3,0);
        }
      }
      *(undefined1 *)((longlong)plVar4 + 0x69c) = param_4;
      if (plVar4 != (longlong *)0x0) goto LAB_1436029d3;
    }
    plVar4 = (longlong *)FUN_147922815(param_3);
    *(byte *)((longlong)plVar4 + 0x693) = *(byte *)((longlong)plVar4 + 0x693) | 1;
    *(undefined4 *)((longlong)plVar4 + 0x734) = 0;
    *(byte *)((longlong)plVar4 + 0x9e) = *(byte *)((longlong)plVar4 + 0x9e) & 0xf7;
    FUN_1435c4c78(plVar4,param_2);
    *(byte *)((longlong)plVar4 + 0x692) = *(byte *)((longlong)plVar4 + 0x692) & 0xf7;
  }
LAB_1436029d3:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 143602bf2 FUN_143602bf2 body=1932 status=ok
// SIG undefined FUN_143602bf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143602bf2(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  uint *local_98;
  int local_8c;
  ulonglong local_88;
  ulonglong *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) || ((*(uint *)(param_2 + 1) >> 0x1e & 1) != 0))
  goto LAB_143602fbe;
  if (DAT_14c761704 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
  }
  lVar9 = param_2[0x16];
  if (lVar9 == 0) {
    lVar9 = FUN_1448abda6(param_2);
  }
  fVar20 = (float)*(double *)(lVar9 + 0x6d0);
  local_b0 = param_2;
  if (_DAT_14c761708 < fVar20 - *(float *)(param_1 + 10)) {
    *(float *)(param_1 + 10) = fVar20;
    uVar5 = *(uint *)(param_1 + 5);
    if (uVar5 == 0) {
      uVar17 = 1;
      uVar14 = 0;
      iVar6 = 0;
      uVar8 = 0;
    }
    else {
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        iVar6 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar6 = uVar5 - 1;
        }
        uVar14 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar14;
        }
        iVar6 = 0;
        do {
          if (uVar13 == uVar14) goto LAB_143602d51;
          iVar6 = iVar6 + 0x20;
          uVar8 = puVar10[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar14 = 0;
        iVar6 = 0;
      }
      uVar17 = (ulonglong)(-uVar8 & uVar8);
      uVar13 = uVar17 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar8 = (iVar6 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar8) {
        uVar8 = uVar5;
      }
    }
    if (uVar8 != uVar5) {
      uVar19 = 0xffffffff;
      local_a8 = param_1;
      local_a0 = (ulonglong)uVar5;
      local_98 = (uint *)(param_1 + 2);
      do {
        lVar9 = *local_a8 + (longlong)(int)uVar8 * 0x20;
        plVar16 = (longlong *)(lVar9 + 8);
        iVar15 = *(int *)(lVar9 + 0x10);
        if (0 < iVar15) {
          fVar21 = fVar20 - _DAT_14c761700;
          uVar5 = 0;
          do {
            lVar11 = (longlong)(int)uVar5 * 0x10;
            pfVar1 = (float *)(*plVar16 + 8 + lVar11);
            if (fVar21 < *pfVar1 || fVar21 == *pfVar1) {
              uVar5 = uVar5 + 1;
            }
            else {
              plVar18 = *(longlong **)(*plVar16 + lVar11);
              if (plVar18 != (longlong *)0x0) {
                *(undefined1 *)((longlong)plVar18 + 0x69c) = 0;
                (**(code **)(*plVar18 + 0x420))(plVar18,0);
                iVar15 = *(int *)(lVar9 + 0x10);
              }
              iVar7 = ~uVar5 + iVar15;
              if (iVar7 != 0) {
                if (0 < iVar7) {
                  iVar7 = 1;
                }
                memmove((void *)(lVar11 + *plVar16),
                        (void *)((longlong)(iVar15 - iVar7) * 0x10 + *plVar16),(longlong)iVar7 << 4)
                ;
                iVar15 = *(int *)(lVar9 + 0x10);
              }
              iVar15 = iVar15 + -1;
              *(int *)(lVar9 + 0x10) = iVar15;
            }
          } while ((int)uVar5 < iVar15);
        }
        if (*(int *)(lVar9 + 0x14) != iVar15) {
          FUN_147c61400(plVar16);
        }
        uVar19 = uVar19 & ~(uint)uVar17;
        puVar10 = (uint *)local_a8[4];
        if ((uint *)local_a8[4] == (uint *)0x0) {
          puVar10 = local_98;
        }
        uVar5 = *(uint *)(local_a8 + 5);
        iVar15 = (int)uVar14;
        lVar9 = (longlong)iVar15;
        uVar8 = puVar10[lVar9] & uVar19;
        if (uVar8 == 0) {
          iVar7 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar7 = uVar5 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar12 = iVar7;
          if (iVar7 < iVar15) {
            iVar12 = iVar15;
          }
          if (iVar15 < iVar7) {
            lVar11 = 0;
            do {
              uVar8 = puVar10[lVar9 + lVar11 + 1];
              if (uVar8 != 0) {
                uVar14 = (ulonglong)(iVar15 + (int)lVar11 + 1);
                uVar19 = 0xffffffff;
                goto LAB_143603131;
              }
              iVar6 = iVar6 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar12 - lVar9 != lVar11);
            uVar19 = 0xffffffff;
            iVar15 = iVar12;
          }
          uVar14 = (ulonglong)(iVar15 + 1);
          uVar8 = uVar5;
        }
        else {
LAB_143603131:
          uVar17 = (ulonglong)(-uVar8 & uVar8);
          uVar13 = uVar17 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar8 = (iVar6 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar8) {
            uVar8 = uVar5;
          }
        }
        param_1 = local_a8;
      } while (uVar8 != (uint)local_a0);
    }
  }
LAB_143602d51:
  plVar16 = local_b0;
  uVar14 = local_b0[0xcd];
  if ((uVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar14);
  }
  local_88 = uVar14;
  if ((uVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar14);
  }
  if ((uVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar14);
  }
  uVar5 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar6 = FUN_147c61ae0(param_1,uVar5 >> 0x10 ^ uVar5,&local_88);
  if (iVar6 == -1) {
LAB_143603184:
    FUN_147c619fa(param_1,&local_88);
    puVar2 = local_80;
    uVar14 = plVar16[0xcd];
    *local_80 = uVar14;
    if ((uVar14 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar14);
      uVar14 = *puVar2;
    }
    bVar4 = DAT_14c950c29;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    local_8c = (int)local_88;
    if (((bVar4 & 1) != 0) && (uVar14 != 0)) {
      FUN_1456cec3c(uVar14);
    }
    uVar5 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    cVar3 = FUN_14361a270(param_1,uVar5,puVar2,&local_8c);
    lVar9 = (longlong)local_8c;
    if (cVar3 == '\0') {
      uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      iVar6 = 1;
      if (3 < uVar8) {
        uVar14 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((int)uVar8 < 1) || (iVar6 <= (int)param_1[9])) {
        uVar5 = (int)param_1[9] - 1U & uVar5;
        *(uint *)((longlong)puVar2 + 0x1c) = uVar5;
        plVar18 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar18 = param_1 + 7;
        }
        *(undefined4 *)(puVar2 + 3) =
             *(undefined4 *)
              ((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
        plVar18 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar18 = param_1 + 7;
        }
        *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
             local_8c;
      }
      else {
        *(int *)(param_1 + 9) = iVar6;
        FUN_147c614e6(param_1);
      }
    }
    lVar9 = *param_1 + lVar9 * 0x20;
  }
  else {
    if (*param_1 + (longlong)iVar6 * 0x20 == 0) goto LAB_143603184;
    lVar9 = *param_1 + (longlong)iVar6 * 0x20;
  }
  if ((DAT_14c761704 == 0) || (*(int *)(plVar16[0xcd] + 0x28) <= *(int *)(lVar9 + 0x10))) {
    *(undefined1 *)((longlong)plVar16 + 0x69c) = 0;
    (**(code **)(*plVar16 + 0x420))(plVar16,0);
    goto LAB_143602fbe;
  }
  *(byte *)((longlong)plVar16 + 0x691) = *(byte *)((longlong)plVar16 + 0x691) & 0xf7;
  (**(code **)(*plVar16 + 0x4a0))(plVar16,&DAT_14cadad9c);
  local_88 = 0x3ff0000000000000;
  local_80 = (ulonglong *)&DAT_3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  (**(code **)(*plVar16 + 0x478))(plVar16);
  FUN_14057a3b2(plVar16,0,0,0);
  FUN_1401bf202(plVar16);
  plVar18 = local_b0;
  if (((*(byte *)((longlong)plVar16 + 0x2d6) & 2) != 0) &&
     (*(byte *)((longlong)plVar16 + 0x2d6) = *(byte *)((longlong)plVar16 + 0x2d6) & 0xfd,
     (~*(byte *)((longlong)plVar16 + 0x9c) & 3) == 0)) {
    bVar4 = *(byte *)((longlong)plVar16 + 0x9d);
    if ((bVar4 & 1) != 0) {
      plVar16 = plVar18;
      if ((local_b0[0x16] != 0) || (lVar11 = FUN_1448abda6(local_b0), lVar11 != 0))
      goto LAB_143602e93;
      bVar4 = *(byte *)((longlong)plVar18 + 0x9d);
    }
    plVar16 = local_b0;
    *(byte *)((longlong)local_b0 + 0x9d) = bVar4 | 1;
    FUN_1401057d4(local_b0);
    FUN_14010586c(&DAT_14cad0140,plVar16);
  }
LAB_143602e93:
  FUN_140357fa8(plVar16,0,0);
  *(undefined4 *)(plVar16 + 0xd7) = 0;
  if (*(int *)((longlong)plVar16 + 0x6bc) != 0) {
    FUN_1407d9874(plVar16 + 0xd6,0);
  }
  *(undefined4 *)(plVar16 + 0xd9) = 0;
  if (*(int *)((longlong)plVar16 + 0x6cc) != 0) {
    FUN_1407d9874(plVar16 + 0xd8,0);
  }
  *(undefined4 *)(plVar16 + 0xdb) = 0;
  if (*(int *)((longlong)plVar16 + 0x6dc) != 0) {
    FUN_1407d9874(plVar16 + 0xda,0);
  }
  *(undefined4 *)(plVar16 + 0xdd) = 0;
  if (*(int *)((longlong)plVar16 + 0x6ec) != 0) {
    FUN_1407d9874(plVar16 + 0xdc,0);
  }
  *(byte *)(plVar16 + 0xd2) = *(byte *)(plVar16 + 0xd2) & 0xdf;
  if (*(int *)((longlong)plVar16 + 0x6ac) < 0) {
    *(undefined4 *)(plVar16 + 0xd5) = 0;
    FUN_147c0d2e8(plVar16 + 0xd4,0);
  }
  else {
    *(undefined4 *)(plVar16 + 0xd5) = 0;
  }
  FUN_140bd5bb0(plVar16,0x7f7fffff);
  *(undefined1 *)((longlong)plVar16 + 0x69c) = 4;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(plVar16);
  }
  iVar6 = *(int *)(lVar9 + 0x10);
  *(uint *)(lVar9 + 0x10) = iVar6 + 1U;
  if (*(uint *)(lVar9 + 0x14) < iVar6 + 1U) {
    FUN_147c61460((longlong *)(lVar9 + 8),iVar6);
  }
  lVar9 = *(longlong *)(lVar9 + 8);
  *(longlong **)(lVar9 + (longlong)iVar6 * 0x10) = plVar16;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(plVar16);
  }
  *(float *)(lVar9 + (longlong)iVar6 * 0x10 + 8) = fVar20;
LAB_143602fbe:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436033aa FUN_1436033aa body=69 status=ok
// SIG undefined FUN_1436033aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436033aa(void)

{
  _DAT_14caf6368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436033ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6370,1);
  return;
}



// FUNCTION 1436033ef FUN_1436033ef body=234 status=ok
// SIG undefined FUN_1436033ef(void)

longlong FUN_1436033ef(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf64b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147c45ce0;
    local_40 = &LAB_1463f1ff4;
    local_48 = &DAT_149e063b2;
    local_50 = 0x4000000000;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf64b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436034f6 FUN_1436034f6 body=64 status=ok
// SIG undefined FUN_1436034f6(void)

undefined8 * FUN_1436034f6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if (plVar1 == (longlong *)0x0) {
    param_2[2] = DAT_14c846508;
    uVar2 = DAT_14c846500;
    *param_2 = DAT_14c8464f8;
    param_2[1] = uVar2;
  }
  else {
    (**(code **)(*plVar1 + 0x680))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 143603536 FUN_143603536 body=264 status=ok
// SIG undefined FUN_143603536(void)

void FUN_143603536(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 != FUN_140972dde) {
    lVar4 = (*pcVar2)();
    goto LAB_1436035f0;
  }
  lVar4 = param_1[0x76];
  if (lVar4 != 0) goto LAB_1436035f0;
  pcVar2 = *(code **)(*param_1 + 0x5f8);
  if (pcVar2 == FUN_144784df4) {
    if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
      if (*(int *)((longlong)param_1 + 0x75b4) != 0) {
        uVar1 = *(uint *)(param_1 + 0xeb6);
        lVar4 = 0;
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1436035f0;
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar3 != (longlong *)0x0) &&
           (((int)plVar3[2] == *(int *)((longlong)param_1 + 0x75b4) &&
            ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar3;
          }
          else {
            lVar4 = 0;
          }
          lVar4 = lVar4 + 0x110;
          goto LAB_143603610;
        }
      }
    }
    else {
      lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_143603610:
      if (lVar4 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20);
        goto LAB_143603619;
      }
    }
  }
  else {
    lVar4 = (*pcVar2)();
LAB_143603619:
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x3b0);
      goto LAB_1436035f0;
    }
  }
  lVar4 = 0;
LAB_1436035f0:
  *(bool *)param_3 = lVar4 != 0;
  return;
}



// FUNCTION 14360363e FUN_14360363e body=49 status=ok
// SIG undefined FUN_14360363e(void)

void FUN_14360363e(void)

{
  FUN_144760e21(DAT_14caf6fc8,DAT_14caf6fd0);
  if (DAT_14caf6fc8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143603670 FUN_143603670 body=264 status=ok
// SIG undefined FUN_143603670(void)

void FUN_143603670(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) {
    *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0) {
    return;
  }
  lVar3 = FUN_1447210f0(param_1);
  if (((((char)param_1[0x74] != '\0') || (*(char *)((longlong)param_1 + 0x3a1) == '\0')) ||
      (param_1[0x78] != 0)) || (iVar2 = FUN_14487fd02(param_1), iVar2 == 3)) goto LAB_1436036ad;
  cVar1 = *(char *)((longlong)param_1 + 0x3a1);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x01') {
      if ((*(byte *)(lVar3 + 0x155) & 0x10) == 0) goto LAB_1436036ad;
    }
    else if (cVar1 != '\x02' || (*(byte *)(lVar3 + 0x155) & 0x10) != 0) goto LAB_1436036ad;
  }
  (**(code **)(*param_1 + 0x740))(param_1);
LAB_1436036ad:
  lVar3 = (**(code **)(*param_1 + 0x638))(param_1);
  if ((lVar3 != 0 && (longlong *)param_1[0x39] != (longlong *)0x0) &&
     (*(char *)(lVar3 + 0x18c) == '\x01')) {
    (**(code **)(*(longlong *)param_1[0x39] + 0x540))();
                    /* WARNING: Could not recover jumptable at 0x000143603706. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar3 + 0x178) + 0xb8))(lVar3 + 0x178,param_1);
    return;
  }
  return;
}



// FUNCTION 1436037d4 FUN_1436037d4 body=1441 status=ok
// SIG undefined FUN_1436037d4(void)

void FUN_1436037d4(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  void *_Src;
  undefined8 uVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58 [2];
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  uVar3 = DAT_14cb0d2b0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cadad94 == '\0') {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    cVar5 = FUN_14640a3ca(uVar3,param_1,DAT_14c892fac,DAT_14c892fa8);
    uVar3 = DAT_14cb0d2b0;
    if (cVar5 == '\0') {
      plVar6 = *(longlong **)(param_1 + 0x30);
    }
    else {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      plVar6 = (longlong *)FUN_147d80990(uVar3,param_1,DAT_14c892fac);
      if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar6);
      }
      *(longlong **)(param_1 + 0x30) = plVar6;
    }
    if (plVar6 == (longlong *)0x0) {
      local_48 = L"NetworkDriverInit";
      local_40 = 0x11;
      FUN_1446e940c(local_5c,&local_48);
      local_48 = L"Engine";
      local_40 = 6;
      FUN_1446e940c(local_60,&local_48);
      local_48 = L"Error creating network driver.";
      local_40 = 0x1e;
      goto LAB_14360385d;
    }
    cVar5 = (**(code **)(*plVar6 + 0x2b8))(plVar6,param_1 + 0x28,param_1 + 0x40,param_1 + 0xb0);
    if (cVar5 != '\0') {
      FUN_147c61c9a(param_1);
      plVar6 = (longlong *)FUN_14640a0b0(DAT_14cb0d2b0,param_1);
      if (plVar6 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
      local_48 = (wchar_t *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      pwVar4 = local_48;
      local_40 = 3;
      *(undefined ***)local_48 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)(local_48 + 8) = lVar7;
      *(undefined ***)local_48 = &PTR_FUN_14aa1da80;
      local_48[0xc] = L'\0';
      local_48[0xd] = L'\0';
      local_48[0xe] = L'\0';
      local_48[0xf] = L'\0';
      iVar8 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_48 + 0xc) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar8 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar8 = *(int *)(lVar11 + 0x10);
          bVar12 = iVar8 == 0;
          if (bVar12) {
            *(int *)(lVar11 + 0x10) = iVar9;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar8 = iVar9;
          }
        }
      }
      *(int *)(pwVar4 + 0xe) = iVar8;
      *(longlong *)(pwVar4 + 0x10) = param_1;
      (**(code **)(*plVar6 + 0x300))(plVar6,&local_48);
      if (local_40 != 0) {
        if (local_48 == (wchar_t *)0x0) goto LAB_143603937;
        (*(code *)**(undefined8 **)local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143603937;
    }
    FUN_147d80a1a(DAT_14cb0d2b0,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x200));
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (1 < *(uint *)(param_1 + 0xb8)) goto LAB_143603937;
    local_48 = L"NetworkInit";
    local_40 = 0xb;
    FUN_1446e940c(local_5c,&local_48);
    local_48 = L"Engine";
    local_40 = 6;
    FUN_1446e940c(local_60,&local_48);
    local_48 = L"Error initializing network layer.";
    local_40 = 0x21;
    FUN_140208c1e(local_58,local_60,local_5c,&local_48);
    plVar6 = local_58[0];
    if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_58[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_58[0] + 3;
      if (local_58[0][5] != 0) {
        plVar6 = (longlong *)(local_58[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_58[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_58[0]);
    }
  }
  else {
    local_48 = L"UsedCheatCommands";
    local_40 = 0x11;
    FUN_1446e940c(local_5c,&local_48);
    local_48 = L"Engine";
    local_40 = 6;
    FUN_1446e940c(local_60,&local_48);
    local_48 = 
    L"Console commands were used which are disallowed in netplay.  You must restart the game to create a match."
    ;
    local_40 = 0x69;
LAB_14360385d:
    FUN_140208c1e(local_58,local_60,local_5c,&local_48);
    plVar6 = local_58[0];
    if (*(code **)(*local_58[0] + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*local_58[0] + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    pcVar2 = *(code **)(*local_58[0] + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar6 = local_58[0] + 3;
      if (local_58[0][5] != 0) {
        plVar6 = (longlong *)(local_58[0][5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar6 = local_58[0] + 2;
    }
    else {
      plVar6 = (longlong *)(*pcVar2)(local_58[0]);
    }
  }
  plVar10 = (longlong *)(param_1 + 0xb0);
  if (plVar10 != plVar6) {
    iVar8 = (int)plVar6[1];
    _Src = (void *)*plVar6;
    *(int *)(param_1 + 0xb8) = iVar8;
    if (iVar8 == 0 && *(int *)(param_1 + 0xbc) == 0) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      FUN_1446dd670(plVar10,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*plVar10,_Src,(longlong)iVar8 * 2);
      }
    }
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
LAB_143603937:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143603d8a FUN_143603d8a body=103 status=ok
// SIG undefined FUN_143603d8a(void)

void FUN_143603d8a(longlong param_1,longlong *param_2,longlong param_3)

{
  *(undefined1 *)((longlong)param_2 + 0xd5c) = 4;
  (**(code **)(*param_2 + 0x4d0))(param_2,0);
  (**(code **)(**(longlong **)(param_3 + 0x230) + 0x2b0))();
  *(undefined8 *)(*(longlong *)(param_3 + 0x230) + 0x30) = 0;
  if ((*(char *)(param_1 + 0xc0) == '\x01') && (*(longlong *)(param_3 + 0x360) != 0)) {
    FUN_147dabfe6();
    return;
  }
  return;
}



// FUNCTION 143603df2 FUN_143603df2 body=4033 status=ok
// SIG undefined FUN_143603df2(void)

void FUN_143603df2(longlong param_1,longlong param_2,char param_3,longlong *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *_Src;
  char cVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_1c8 [32];
  undefined ***local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined2 local_188;
  undefined6 uStack_186;
  int local_180;
  longlong local_178;
  int local_170;
  undefined **local_168;
  ulonglong uStack_160;
  longlong local_158;
  longlong local_150;
  undefined4 local_148;
  longlong local_140 [2];
  longlong local_130;
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  undefined **local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  byte local_e0;
  void *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  int local_c8;
  longlong local_c0;
  longlong local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar23 = param_1 + -0x28;
  switch(param_3) {
  case '\x01':
    local_68 = (undefined **)0x0;
    uStack_60 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x40);
    local_88 = (undefined **)0x0;
    uStack_80 = 0;
    FUN_14021219d(param_4,puVar1);
    FUN_14021219d(param_4,&local_68);
    FUN_14021219d(param_4,&local_88);
    if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
      FUN_140810d00(&local_168,0);
      if (*(int *)(param_1 + 0x48) == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)*puVar1;
      }
      FUN_140245d8a(&local_f8,&local_168,puVar15,1);
      iVar22 = local_c8 + -1;
      if (local_c8 == 0) {
        iVar22 = 0;
      }
      FUN_1402980a2(puVar1,CONCAT44(uStack_cc,local_d0),iVar22);
      iVar22 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        iVar22 = 0;
      }
      FUN_1402980a2(param_1 + 0x50,local_88,iVar22);
      FUN_140b7fa3a(param_1 + 0x60,&local_b0);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_b0,local_a8);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_cc,local_d0) != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_120,local_118);
      if (local_120 != 0) {
        FUN_1400020a8();
      }
      if (local_130 != 0) {
        FUN_1400020a8();
      }
      if (local_140[0] != 0) {
        FUN_1400020a8();
      }
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      if (local_168 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if ((int)uStack_60 - 2U < 0x7fffffff) {
        FUN_140002266(&local_168,L"game=%s",local_68);
        ppuVar12 = local_168;
        if ((int)uStack_160 == 0) {
          ppuVar12 = (undefined **)&DAT_149dfb77a;
        }
        FUN_141556918(param_1 + 0x18,ppuVar12);
        if (local_168 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1461c56c8(param_2,param_2 + 0x38);
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_1446f8c06(puVar1,0);
      }
    }
    ppuVar12 = local_68;
    if (local_88 != (undefined **)0x0) {
      FUN_1400020a8();
      ppuVar12 = local_68;
    }
    break;
  case '\x02':
    local_68 = (undefined **)((ulonglong)local_68 & 0xffffffff00000000);
    local_188 = 0;
    FUN_147c61eec(param_4);
    if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
      cVar10 = FUN_1435876a8(param_2,(ulonglong)local_68 & 0xffffffff,local_188,0);
      if (cVar10 == '\0') {
        local_168 = (undefined **)0x14a9e520c;
        uStack_160._0_4_ = 0xe;
        FUN_1446e940c(&local_88,&local_168);
        local_168 = (undefined **)0x149e2b68a;
        uStack_160._0_4_ = 6;
        FUN_1446e940c(&local_178,&local_168);
        local_168 = (undefined **)0x14a9e5118;
        uStack_160 = CONCAT44(uStack_160._4_4_,0x79);
        FUN_140208c1e(&local_f8,&local_178,&local_88,&local_168);
        ppuVar12 = local_f8;
        if (*(code **)(*local_f8 + 0x50) != FUN_144828418) {
          ppuVar12 = (undefined **)(**(code **)(*local_f8 + 0x50))();
        }
        FUN_1447a1fc0(ppuVar12);
        pcVar6 = *(code **)(*local_f8 + 0x28);
        if (pcVar6 == FUN_14482841c) {
          ppuVar12 = local_f8 + 3;
          if (local_f8[5] != (undefined *)0x0) {
            ppuVar12 = (undefined **)(local_f8[5] + 8);
          }
        }
        else if (pcVar6 == (code *)&LAB_14010c34c) {
          ppuVar12 = local_f8 + 2;
        }
        else {
          ppuVar12 = (undefined **)(*pcVar6)(local_f8);
        }
        ppuVar3 = (undefined **)(param_1 + 0x88);
        if (ppuVar3 != ppuVar12) {
          iVar22 = *(int *)(ppuVar12 + 1);
          puVar14 = *ppuVar12;
          *(int *)(param_1 + 0x90) = iVar22;
          if (iVar22 == 0 && *(int *)(param_1 + 0x94) == 0) {
            *(undefined4 *)(param_1 + 0x94) = 0;
          }
          else {
            FUN_1446dd670(ppuVar3,iVar22);
            if (iVar22 != 0) {
              memcpy(*ppuVar3,puVar14,(longlong)iVar22 * 2);
            }
          }
        }
        if (local_f8 != (undefined **)0x0) {
          (**(code **)(*local_f8 + 0x10))();
        }
      }
      else {
        FUN_141663d36(lVar23);
      }
    }
    goto switchD_143603e42_caseD_4;
  case '\x03':
    FUN_14021219d(param_4,param_2 + 0x198);
    if ((*(byte *)((longlong)param_4 + 0x29) & 2) != 0) {
      *(undefined4 *)(param_2 + 0x1a0) = 0;
      if (*(int *)(param_2 + 0x1a4) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
      }
      goto switchD_143603e42_caseD_4;
    }
    local_198 = lVar23;
    local_190 = param_2;
    FUN_145ad1184(&local_168,param_1 + 0x18);
    FUN_14020fad6(&local_158,&DAT_149dfb77a);
    local_148 = DAT_14cb0f198;
    FUN_14020fad6(local_140,&DAT_149dfb77a);
    local_1a0 = param_1;
    if (0 < (longlong)*(int *)(param_1 + 0x68)) {
      plVar11 = (longlong *)(param_1 + 0x60);
      uVar18 = (longlong)*(int *)(param_1 + 0x68);
      do {
        uVar2 = uVar18 - 1;
        iVar22 = *(int *)(*plVar11 + 8 + uVar2 * 0x10);
        puVar15 = &DAT_149dfb77a;
        iVar20 = iVar22 + -1;
        if (iVar22 == 0) {
          iVar20 = 0;
        }
        else {
          puVar15 = *(undefined2 **)(*plVar11 + uVar2 * 0x10);
        }
        if (4 < iVar20) {
          iVar20 = 5;
        }
        if (iVar20 < 1) {
          iVar20 = 0;
        }
        FUN_14006620a(&local_f8,puVar15,iVar20);
        ppuVar12 = local_f8;
        if ((int)uStack_f0 == 0) {
          ppuVar12 = (undefined **)&DAT_149dfb77a;
        }
        lVar23 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)ppuVar12 + lVar23);
          uVar21 = (uint)uVar4;
          uVar5 = *(ushort *)((longlong)L"game=" + lVar23);
          uVar19 = (uint)uVar5;
          if (uVar4 != uVar5) {
            if ((uVar5 | uVar4) < 0x80) {
              uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_143604334;
            }
            iVar22 = uVar21 - uVar19;
            goto LAB_143604360;
          }
          if (uVar4 == 0) break;
LAB_143604334:
          lVar23 = lVar23 + 2;
        }
        iVar22 = 0;
LAB_143604360:
        if (local_f8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (iVar22 == 0) {
          FUN_14101da94(plVar11,uVar2 & 0xffffffff);
          FUN_140b12644(plVar11);
        }
        bVar24 = 1 < uVar18;
        uVar18 = uVar2;
      } while (bVar24);
    }
    lVar23 = local_198;
    plVar11 = (longlong *)FUN_14640a0b0(DAT_14cb0d2b0);
    lVar17 = local_190;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x330))(plVar11,&local_178);
      if (local_170 - 2U < 0x7fffffff) {
        FUN_140002266(&local_f8,L"Name=%s",local_178);
        ppuVar12 = local_f8;
        if ((int)uStack_f0 == 0) {
          ppuVar12 = (undefined **)&DAT_149dfb77a;
        }
        FUN_141556918(&local_168,ppuVar12);
        if (local_f8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      (**(code **)(*plVar11 + 0x338))(plVar11,&local_188);
      if (local_180 - 2U < 0x7fffffff) {
        FUN_140002266(&local_f8,&DAT_149e0625e,CONCAT62(uStack_186,local_188));
        ppuVar12 = (undefined **)&DAT_149dfb77a;
        if ((int)uStack_f0 != 0) {
          ppuVar12 = local_f8;
        }
        FUN_141556918(&local_168,ppuVar12);
        if (local_f8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      (**(code **)(*plVar11 + 0x350))(plVar11,&local_f8);
      if (&local_f8 != (undefined ***)(lVar17 + 0x160)) {
        local_78 = CONCAT71(local_78._1_7_,local_e0);
        (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_e0])(&local_88,&uStack_f0);
        local_58 = local_78;
        local_68 = local_88;
        uStack_60 = uStack_80;
        uVar18 = *(ulonglong *)(lVar17 + 0x178);
        ppuVar12 = *(undefined ***)(lVar17 + 0x168);
        uVar8 = *(undefined8 *)(lVar17 + 0x170);
        *(undefined4 *)(lVar17 + 0x168) = (undefined4)local_88;
        *(undefined4 *)(lVar17 + 0x16c) = local_88._4_4_;
        *(int *)(lVar17 + 0x170) = (int)uStack_80;
        *(undefined4 *)(lVar17 + 0x174) = uStack_80._4_4_;
        *(ulonglong *)(lVar17 + 0x178) = local_78;
        local_88 = ppuVar12;
        uStack_80 = uVar8;
        local_78 = uVar18;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar18 & 0xff])(&local_88);
        _Src = local_d8;
        *(int *)(lVar17 + 0x188) = local_d0;
        if (local_d0 == 0 && *(int *)(lVar17 + 0x18c) == 0) {
          *(undefined4 *)(lVar17 + 0x18c) = 0;
        }
        else {
          FUN_1447a127e((undefined8 *)(lVar17 + 0x180),local_d0);
          if (local_d0 != 0) {
            memcpy(*(void **)(lVar17 + 0x180),_Src,(longlong)local_d0);
          }
        }
      }
      local_f8 = &PTR_FUN_14a5af930;
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_f8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_e0])();
      if (CONCAT62(uStack_186,local_188) != 0) {
        FUN_1400020a8();
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
    }
    lVar9 = local_1a0;
    local_88 = (undefined **)0x0;
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar16 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar16);
        if (*(longlong *)(lVar7 + 0x230) == lVar23) {
          if ((lVar7 != 0) && (plVar11 = *(longlong **)(lVar7 + 0x2a8), plVar11 != (longlong *)0x0))
          {
            (**(code **)(*plVar11 + 1000))(plVar11,&local_88);
          }
          break;
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar16);
    }
    FUN_14020fad6(lVar17 + 0x1a8,&DAT_149e25dfc);
    FUN_141641396(&local_168,&local_f8,0);
    FUN_1400021e4(&local_88,&local_68);
    local_1a8 = &local_68;
    FUN_146214b76(lVar17,lVar17 + 0x1a8,&local_f8,lVar17 + 0x160);
    plVar11 = *(longlong **)(*(longlong *)(lVar9 + 8) + 0xf0);
    (**(code **)(*plVar11 + 0x2f8))(plVar11,0);
    if (local_68 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_120,local_118);
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    if (local_130 != 0) {
      FUN_1400020a8();
    }
    if (local_140[0] != 0) {
      FUN_1400020a8();
    }
    ppuVar12 = local_168;
    if (local_158 != 0) {
      FUN_1400020a8();
      ppuVar12 = local_168;
    }
    break;
  case '\x04':
  case '\x05':
    goto switchD_143603e42_caseD_4;
  case '\x06':
    local_f8 = (undefined **)0x0;
    uStack_f0 = 0;
    FUN_14021219d(param_4,&local_f8);
    ppuVar12 = local_f8;
    if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
      if ((int)uStack_f0 < 2) {
        local_168 = (undefined **)0x14aa0b6d0;
        uStack_160._0_4_ = 0x1e;
        FUN_1446e940c(&local_88,&local_168);
        local_168 = (undefined **)0x14a8a9162;
        uStack_160._0_4_ = 0xd;
        FUN_1446e940c(&local_178,&local_168);
        local_168 = (undefined **)0x14aa0b69a;
        uStack_160 = CONCAT44(uStack_160._4_4_,0x1a);
        FUN_140208c1e(&local_68,&local_178,&local_88,&local_168);
        ppuVar12 = local_68;
        if (*(code **)(*local_68 + 0x50) != FUN_144828418) {
          ppuVar12 = (undefined **)(**(code **)(*local_68 + 0x50))();
        }
        FUN_1447a1fc0(ppuVar12);
        pcVar6 = *(code **)(*local_68 + 0x28);
        if (pcVar6 == FUN_14482841c) {
          pppuVar13 = (undefined ***)(local_68 + 3);
          if (local_68[5] != (undefined *)0x0) {
            pppuVar13 = (undefined ***)(local_68[5] + 8);
          }
        }
        else if (pcVar6 == (code *)&LAB_14010c34c) {
          pppuVar13 = (undefined ***)(local_68 + 2);
        }
        else {
          pppuVar13 = (undefined ***)(*pcVar6)(local_68);
        }
        if (&local_f8 != pppuVar13) {
          uVar19 = *(uint *)(pppuVar13 + 1);
          ppuVar12 = *pppuVar13;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar19);
          if (uVar19 == 0 && uStack_f0._4_4_ == 0) {
            uStack_f0 = (ulonglong)uVar19;
          }
          else {
            FUN_1446dd670(&local_f8,uVar19);
            if (uVar19 != 0) {
              memcpy(local_f8,ppuVar12,(longlong)(int)uVar19 * 2);
            }
          }
        }
        if (local_68 != (undefined **)0x0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      iVar22 = (int)uStack_f0 + -1;
      if ((int)uStack_f0 == 0) {
        iVar22 = 0;
      }
      FUN_1402980a2(param_1 + 0x88,local_f8,iVar22);
      FUN_1459b235e(&local_168,5);
      FUN_143587ad8(param_2,&local_168);
      if (local_140[0] != 0) {
        (**(code **)(local_140[0] + -0x10))(local_140[0] + -0x10);
      }
      ppuVar12 = local_f8;
      if (local_150 != 0) {
        FUN_1400020a8();
        ppuVar12 = local_f8;
      }
    }
    break;
  default:
    if (param_3 == '\x12') {
      local_f8 = (undefined **)0x0;
      local_168 = (undefined **)0x0;
      uStack_160 = 0;
      (**(code **)(*param_4 + 400))(param_4);
      FUN_14021219d(param_4,&local_168);
      ppuVar12 = local_168;
      if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
        plVar11 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xf0) + 0x68);
        (**(code **)(*plVar11 + 0x2b8))(plVar11,&local_f8,&local_168);
        ppuVar12 = local_168;
      }
    }
    else {
      if (param_3 != '\x15') goto switchD_143603e42_caseD_4;
      if ((DAT_14caf27b8 == 0) || (DAT_14caf27b0 == (longlong *)0x0)) {
LAB_1436041a7:
        FUN_14020fad6(param_1 + 0x88,L"No encryption ack handler");
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
      }
      cVar10 = (**(code **)(*DAT_14caf27b0 + 0x30))();
      if (cVar10 == '\0') goto LAB_1436041a7;
      if (param_2 == 0) {
        uVar19 = 0;
        iVar22 = 0;
      }
      else {
        uVar19 = *(uint *)(param_2 + 0xc);
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar22 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar20 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar24) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar20);
          }
          LOCK();
          iVar22 = *(int *)(lVar17 + 0x10);
          bVar24 = iVar22 == 0;
          if (bVar24) {
            *(int *)(lVar17 + 0x10) = iVar20;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar24) {
            iVar22 = iVar20;
          }
        }
      }
      local_168 = (undefined **)0x0;
      uStack_160._0_4_ = 0;
      FUN_1446efa72(&local_168,0,3,0x10);
      ppuVar12 = local_168;
      uStack_160 = CONCAT44(uStack_160._4_4_,3);
      *local_168 = (undefined *)&PTR_LAB_14aa1dbd0;
      local_168[1] = (undefined *)CONCAT44(iVar22,uVar19);
      LOCK();
      UNLOCK();
      puVar14 = (undefined *)(DAT_14c758608 + 1);
      lVar17 = DAT_14c758608 + 1;
      if (puVar14 == (undefined *)0x0) {
        LOCK();
        UNLOCK();
        puVar14 = (undefined *)(DAT_14c758608 + 2);
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      local_168[2] = puVar14;
      *local_168 = (undefined *)&PTR_FUN_14aa1db60;
      local_168[3] = (undefined *)0x0;
      iVar22 = 0;
      if (lVar23 != 0) {
        uVar19 = *(uint *)(param_1 + -0x1c);
        *(uint *)(local_168 + 3) = uVar19;
        if ((int)uVar19 < DAT_14c9647dc) {
          lVar23 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
        }
        else {
          lVar23 = 0;
        }
        iVar22 = *(int *)(lVar23 + 0x10);
        if (*(int *)(lVar23 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar20 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar24) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar20);
          }
          LOCK();
          iVar22 = *(int *)(lVar23 + 0x10);
          bVar24 = iVar22 == 0;
          if (bVar24) {
            *(int *)(lVar23 + 0x10) = iVar20;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar24) {
            iVar22 = iVar20;
          }
        }
      }
      *(int *)((longlong)ppuVar12 + 0x1c) = iVar22;
      ppuVar12[4] = FUN_143604dec;
      *(undefined4 *)(ppuVar12 + 5) = 0;
      plVar11 = DAT_14caf27b0;
      if (DAT_14caf27b8 == 0) {
        plVar11 = (longlong *)0x0;
      }
      (**(code **)(*plVar11 + 0x58))(plVar11,&local_168);
      ppuVar12 = local_168;
      if ((int)uStack_160 != 0) {
        if (local_168 == (undefined **)0x0) goto switchD_143603e42_caseD_4;
        (**(code **)*local_168)(local_168,0);
        FUN_1446efa72(&local_168,0,0,0x10);
        uStack_160 = uStack_160 & 0xffffffff00000000;
        ppuVar12 = local_168;
      }
    }
  }
  if (ppuVar12 != (undefined **)0x0) {
    FUN_1400020a8();
  }
switchD_143603e42_caseD_4:
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143604dec FUN_143604dec body=342 status=ok
// SIG undefined FUN_143604dec(void)

void FUN_143604dec(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_3 >> 0x20 != 0) && (uVar5 = (uint)param_3, -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == (int)(param_3 >> 0x20))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))) {
      if ((1 < *(uint *)(lVar2 + 0x134)) && (*(longlong *)(lVar2 + 0x58) != 0)) {
        bVar1 = *param_2;
        if ((ulonglong)bVar1 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        if (bVar1 < 6) {
          puVar4 = (undefined2 *)(&PTR_u_Failure_14aa1ebd8)[bVar1];
        }
        else {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_140056680(local_30,puVar4);
        FUN_14020fad6(param_1 + 0xb0,L"Encryption ack failure");
        FUN_147a491c6(lVar2);
        if (local_30[0] != 0) {
          FUN_1400020a8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      FUN_14020fad6(param_1 + 0xb0,L"Connection encryption state failure");
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14020fad6(param_1 + 0xb0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58,L"Connection missing during encryption ack");
}



// FUNCTION 143604f6e FUN_143604f6e body=419 status=ok
// SIG undefined FUN_143604f6e(void)

void FUN_143604f6e(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (*(int *)(plVar1[0x1e] + 0x134) == 1) {
    puVar3 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0xb8) != 0) {
      puVar3 = *(undefined2 **)(param_1 + 0xb0);
    }
    lVar4 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)puVar3 + lVar4);
      uVar6 = (ulonglong)uVar5;
      uVar7 = *(ushort *)((longlong)&DAT_149dfb77a + lVar4);
      if (uVar5 != uVar7) break;
      if (uVar5 == 0) goto LAB_143605083;
LAB_143605054:
      lVar4 = lVar4 + 2;
    }
    if ((uVar7 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_143605054;
    }
    if (uVar5 != uVar7) goto LAB_143604fa5;
LAB_143605083:
    local_50 = L"ConnectionFailed";
    local_48 = 0x10;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"Engine";
    local_48 = 6;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Your connection to the host has been lost.");
    uVar2 = FUN_1447a1f4a(&local_50);
    FUN_144a787a6((undefined8 *)(param_1 + 0xb0),uVar2);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
  }
  else {
LAB_143604fa5:
    (**(code **)(*plVar1 + 0x330))(plVar1,param_2);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x338))();
      plVar1 = *(longlong **)(param_1 + 0x30);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x340))(plVar1,param_2);
        if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360512d FUN_14360512d body=69 status=ok
// SIG undefined FUN_14360512d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360512d(void)

{
  _DAT_14caf6540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360516f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6548,1);
  return;
}



// FUNCTION 143605172 FUN_143605172 body=69 status=ok
// SIG undefined FUN_143605172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143605172(void)

{
  _DAT_14caf6558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436051b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6560,1);
  return;
}



// FUNCTION 1436051b7 FUN_1436051b7 body=69 status=ok
// SIG undefined FUN_1436051b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436051b7(void)

{
  _DAT_14caf6570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436051f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6578,1);
  return;
}



// FUNCTION 1436051fc FUN_1436051fc body=69 status=ok
// SIG undefined FUN_1436051fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436051fc(void)

{
  _DAT_14caf6580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360523e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6588,1);
  return;
}



// FUNCTION 143605241 FUN_143605241 body=69 status=ok
// SIG undefined FUN_143605241(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143605241(void)

{
  _DAT_14caf6598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143605283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf65a0,1);
  return;
}



// FUNCTION 143605286 FUN_143605286 body=12 status=ok
// SIG undefined FUN_143605286(void)

undefined4 FUN_143605286(void)

{
  return *DAT_14caf6568;
}



// FUNCTION 143605292 FUN_143605292 body=55 status=ok
// SIG undefined FUN_143605292(void)

void FUN_143605292(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf65b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf65b8 = FUN_14171c317(FUN_1463f2288,uVar1,L"EPerQualityLevels");
  }
  return;
}



// FUNCTION 1436052eb FUN_1436052eb body=69 status=ok
// SIG undefined FUN_1436052eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436052eb(void)

{
  _DAT_14caf6650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360532d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6658,1);
  return;
}



// FUNCTION 143605330 FUN_143605330 body=361 status=ok
// SIG undefined FUN_143605330(void)

void FUN_143605330(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  FUN_1479b7370();
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_14585979a();
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x260) + 0x38) + 0x1c8) + 0x30)
  ;
  *(undefined8 *)(param_1 + 0x128) = 0;
  iVar7 = *(int *)(param_1 + 0x120);
  if (0 < (longlong)iVar7) {
    iVar9 = -iVar7;
    uVar8 = (longlong)iVar7;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + -8 + uVar8 * 8);
      iVar7 = *(int *)(lVar5 + 0x28);
      if (iVar7 == iVar1) {
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        *(longlong *)(param_1 + 0x128) = lVar5;
        iVar7 = *(int *)(lVar5 + 0x28);
      }
      plVar6 = (longlong *)FUN_147c4753a(param_1);
      if (((plVar6 == (longlong *)0x0) ||
          (cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar3 == '\0')) || (DAT_14caf6660 != 0))
      {
        if (iVar7 < iVar1) goto LAB_14360542c;
      }
      else {
        iVar7 = *(int *)(lVar5 + 0x2c);
        *(int *)(lVar5 + 0x2c) = iVar7 + -1;
        if (iVar7 < 2) {
LAB_14360542c:
          uVar4 = *(uint *)(param_1 + 0x120);
          if (uVar8 != uVar4) {
            iVar7 = iVar9 + uVar4;
            if (0 < iVar7) {
              iVar7 = 1;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x118) + uVar8 * 8 + -8),
                    (void *)(*(longlong *)(param_1 + 0x118) + (longlong)(int)(uVar4 - iVar7) * 8),
                    (longlong)iVar7 << 3);
            uVar4 = *(uint *)(param_1 + 0x120);
          }
          *(uint *)(param_1 + 0x120) = uVar4 - 1;
          FUN_147c62208((longlong *)(param_1 + 0x118));
        }
      }
      iVar9 = iVar9 + 1;
      bVar2 = 1 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 143605499 FUN_143605499 body=55 status=ok
// SIG undefined FUN_143605499(void)

void FUN_143605499(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf6670 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf6670 = FUN_14171c317(FUN_1463f24ca,uVar1,L"EDOFMode");
  }
  return;
}



// FUNCTION 1436054d0 FUN_1436054d0 body=69 status=ok
// SIG undefined FUN_1436054d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436054d0(void)

{
  _DAT_14caf66c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143605512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf66d0,1);
  return;
}



// FUNCTION 143605515 FUN_143605515 body=69 status=ok
// SIG undefined FUN_143605515(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143605515(void)

{
  _DAT_14caf66e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143605557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf66e8,1);
  return;
}



// FUNCTION 14360555a FUN_14360555a body=69 status=ok
// SIG undefined FUN_14360555a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360555a(void)

{
  _DAT_14caf66f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360559c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6700,1);
  return;
}



// FUNCTION 14360559f FUN_14360559f body=69 status=ok
// SIG undefined FUN_14360559f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360559f(void)

{
  _DAT_14caf6708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436055e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6710,1);
  return;
}



// FUNCTION 1436055e4 FUN_1436055e4 body=69 status=ok
// SIG undefined FUN_1436055e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436055e4(void)

{
  _DAT_14caf6720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143605626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6728,1);
  return;
}



// FUNCTION 143605629 FUN_143605629 body=69 status=ok
// SIG undefined FUN_143605629(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143605629(void)

{
  _DAT_14caf6730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360566b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6738,1);
  return;
}



// FUNCTION 14360566e FUN_14360566e body=69 status=ok
// SIG undefined FUN_14360566e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360566e(void)

{
  _DAT_14caf6740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436056b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6748,1);
  return;
}



// FUNCTION 1436056b4 FUN_1436056b4 body=90 status=ok
// SIG undefined FUN_1436056b4(void)

void FUN_1436056b4(longlong param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  
  if (((((*(byte *)(param_1 + 0x3e) & 2) != 0) && (DAT_14c76170d == '\x01')) &&
      (fVar1 = *(float *)(param_1 + 0x40), 0.0 <= fVar1)) && (DAT_14c993850 == 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 8);
    dVar2 = *(double *)(lVar3 + 0x228);
    if (0.0 <= dVar2) {
      fVar4 = (float)dVar2;
      if (fVar1 <= fVar4) {
        fVar4 = fVar1;
      }
      *(double *)(lVar3 + 0x228) = (double)fVar4;
    }
  }
  return;
}



// FUNCTION 14360570e FUN_14360570e body=196 status=ok
// SIG undefined FUN_14360570e(void)

undefined8 *
FUN_14360570e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_9;
  param_1[5] = param_6;
  param_1[6] = param_7;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xbf800000;
  param_1[8] = 0;
  param_1[9] = param_8;
  lVar2 = DAT_14caf6750;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  *(bool *)(param_1 + 10) = *(int *)(lVar2 + uVar5 * 4) != 0;
  return param_1;
}



// FUNCTION 1436057d2 FUN_1436057d2 body=69 status=ok
// SIG undefined FUN_1436057d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436057d2(void)

{
  _DAT_14caf6758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143605814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6760,1);
  return;
}



// FUNCTION 143605818 FUN_143605818 body=586 status=ok
// SIG undefined FUN_143605818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143605818(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_98 [40];
  bool *local_70;
  longlong *local_68;
  undefined1 *local_60;
  bool **local_58;
  bool local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      local_49 = DVar7 == DVar8;
      if (local_49) goto LAB_143605a0f;
    }
    else {
      local_49 = false;
    }
  }
  else {
    local_49 = true;
LAB_143605a0f:
    cVar6 = FUN_14361bc72(param_1);
    if (cVar6 == '\0') goto LAB_143605a1f;
  }
  local_70 = &local_49;
  local_58 = &local_70;
  local_60 = &LAB_1405b65d4;
  local_68 = param_1;
  FUN_140711b6e(param_1[6]);
  puVar2 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)puVar2[1];
  if ((undefined8 *)puVar2[1] == (undefined8 *)0x0) {
    puVar10 = puVar2;
  }
  if ((longlong)*(int *)(puVar2 + 2) != 0) {
    puVar2 = puVar10 + *(int *)(puVar2 + 2);
    do {
      uVar3 = *puVar10;
      uVar9 = (ulonglong)DAT_14caf6fb8;
      if (0 < (longlong)uVar9) {
        bVar14 = false;
        DAT_14caf6fc4 = DAT_14caf6fc4 + 1;
        do {
          lVar12 = uVar9 * 0x10 + -8;
          uVar13 = uVar9;
          while (((*(int *)(DAT_14caf6fb0 + lVar12) != 0 &&
                  (plVar4 = *(longlong **)(DAT_14caf6fb0 + -8 + lVar12), plVar4 != (longlong *)0x0))
                 && (cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,uVar3,0), cVar6 != '\0'))) {
            lVar12 = lVar12 + -0x10;
            bVar5 = uVar13 < 2;
            uVar13 = uVar13 - 1;
            if (bVar5) {
              DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
              if (bVar14) goto LAB_143605958;
              goto LAB_1436059cd;
            }
          }
          uVar9 = uVar13 - 1;
          bVar14 = true;
        } while (1 < uVar13);
        DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
LAB_143605958:
        iVar1 = DAT_14caf6fb8;
        if (DAT_14caf6fc4 < 1) {
          if (0 < DAT_14caf6fb8) {
            iVar11 = 0;
            do {
              if (((*(int *)(DAT_14caf6fb0 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(DAT_14caf6fb0 + (longlong)iVar11 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(&DAT_14caf6fb0,iVar11);
                FUN_14005b248(&DAT_14caf6fb0);
              }
              else {
                iVar11 = iVar11 + 1;
              }
            } while (iVar11 < DAT_14caf6fb8);
          }
          _DAT_14caf6fc0 = DAT_14caf6fb8 * 2;
          if (_DAT_14caf6fc0 < 3) {
            _DAT_14caf6fc0 = 2;
          }
          if ((_DAT_14caf6fc0 < iVar1) && (DAT_14caf6fbc != DAT_14caf6fb8)) {
            FUN_14045812c(&DAT_14caf6fb0);
          }
        }
      }
LAB_1436059cd:
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar2);
  }
LAB_143605a1f:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143605a64 FUN_143605a64 body=345 status=ok
// SIG undefined FUN_143605a64(void)

undefined8 * FUN_143605a64(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_2 = param_1[0x27];
  param_2[1] = param_1[0x28];
  *(byte *)(param_2 + 2) = *(byte *)((longlong)param_1 + 0x3b) >> 5 & 1;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[0x14] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (param_1[0x20] == 0) {
    return param_2;
  }
  FUN_1407a4724();
  lVar2 = param_1[0x20];
  plVar1 = (longlong *)(lVar2 + 0x38);
  if (*(int *)(lVar2 + 0x40) == 0) {
LAB_143605b03:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(lVar2 + 0x40) = 0;
      goto LAB_143605b03;
    }
  }
  plVar1 = (longlong *)(lVar2 + 0x28);
  if (*(int *)(lVar2 + 0x30) == 0) {
LAB_143605b42:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(lVar2 + 0x30) = 0;
      goto LAB_143605b42;
    }
  }
  plVar1 = (longlong *)(lVar2 + 0x18);
  if (*(int *)(lVar2 + 0x20) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143605b85;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(lVar2 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143605b85:
  FUN_1400020a8(lVar2);
  param_1[0x20] = 0;
  return param_2;
}



// FUNCTION 143605bbe FUN_143605bbe body=216 status=ok
// SIG undefined FUN_143605bbe(void)

void FUN_143605bbe(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0xc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = *(longlong *)(lVar2 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6(lVar2);
      }
      lVar3 = *(longlong *)(lVar3 + 0x260);
      if (lVar3 != 0) {
        if (*param_1 != 0) {
          FUN_1448b7762(lVar3);
        }
        if ((char)param_1[2] == '\x01') {
          FUN_1406f7bf0(lVar3 + 0xc0,lVar2);
        }
      }
    }
  }
  if (*param_1 != 0) {
    lVar2 = *(longlong *)(*param_1 + 8);
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0x260);
    }
    FUN_142a2e46a(param_1,uVar5,0);
    return;
  }
  return;
}



// FUNCTION 143605c96 FUN_143605c96 body=69 status=ok
// SIG undefined FUN_143605c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143605c96(void)

{
  _DAT_14caf6778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143605cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6780,1);
  return;
}



// FUNCTION 143605cdc FUN_143605cdc body=6 status=ok
// SIG undefined FUN_143605cdc(void)

byte FUN_143605cdc(longlong param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



// FUNCTION 143605ce2 FUN_143605ce2 body=181 status=ok
// SIG undefined FUN_143605ce2(void)

double * FUN_143605ce2(longlong param_1,double *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  
  pdVar9 = (double *)&DAT_14c846480;
  pdVar10 = param_2;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pdVar10 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar10 = pdVar10 + 1;
  }
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x138) != 0)) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x40);
    fVar1 = *(float *)(lVar8 + 0x4c);
    fVar2 = *(float *)(lVar8 + 0x48);
    fVar3 = *(float *)(lVar8 + 0x44);
    dVar6 = *(double *)(lVar8 + 0x20);
    dVar7 = *(double *)(lVar8 + 0x28);
    dVar4 = *(double *)(lVar8 + 0x30);
    *param_2 = (double)*(float *)(lVar8 + 0x40);
    param_2[1] = (double)fVar3;
    param_2[2] = (double)fVar2;
    param_2[3] = (double)fVar1;
    param_2[4] = dVar6;
    param_2[5] = dVar7;
    param_2[6] = dVar4;
    param_2[7] = 0.0;
    param_2[8] = 1.0;
    param_2[9] = 1.0;
    param_2[10] = 1.0;
    param_2[0xb] = 0.0;
    if ((param_3 != '\0') &&
       (((plVar5 = *(longlong **)(param_1 + 0x158), plVar5 != (longlong *)0x0 &&
         ((int)plVar5[1] != 0)) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      (**(code **)(*plVar5 + 0x60))(plVar5,param_1,param_2);
    }
  }
  return param_2;
}



// FUNCTION 143605d98 FUN_143605d98 body=26 status=ok
// SIG undefined FUN_143605d98(void)

void FUN_143605d98(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xef | param_3 << 4;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x110) = *param_2;
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  return;
}



// FUNCTION 143605db2 FUN_143605db2 body=692 status=ok
// SIG undefined FUN_143605db2(void)

void FUN_143605db2(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (DAT_14cb0d2b0 == 0) {
    return;
  }
  if (*(longlong *)(DAT_14cb0d2b0 + 0x898) == 0) {
    return;
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x120) == 0)) {
    if ((param_2 >> 0x20 != 0) &&
       ((uVar1 = (uint)param_2, -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
      uVar9 = (ulonglong)((uint)(param_2 >> 0x10) & 0x7fff);
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar9 * 8));
      if ((plVar2 != (longlong *)0x0) &&
         (((iVar7 = (int)(param_2 >> 0x20), (int)plVar2[2] == iVar7 &&
           ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) &&
          (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)))) {
        if (plVar2[0xa6] == 0) {
          uVar1 = (**(code **)(*plVar2 + 0x7b0))(plVar2);
          FUN_14017a33c(param_3,uVar1);
          if (param_4 != (longlong *)0x0) {
            iVar7 = (int)param_4[1];
            if (iVar7 < (int)uVar1) {
              *(uint *)(param_4 + 1) = uVar1;
              if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar7) < uVar1 - iVar7) {
                FUN_1417e7516(param_4);
              }
            }
            else {
              if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4((ulonglong)uVar1);
              }
              if ((int)uVar1 < iVar7) {
                *(uint *)(param_4 + 1) = uVar1;
                FUN_147c63cda(param_4);
              }
            }
          }
          if ((int)uVar1 < 1) {
            return;
          }
          lVar8 = 0;
          uVar9 = 0;
          do {
            lVar5 = *(longlong *)(DAT_14cb0d2b0 + 0x898);
            plVar4 = (longlong *)(**(code **)(*plVar2 + 0x610))(plVar2,uVar9 & 0xffffffff);
            if (plVar4 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4);
            }
            if (((param_1 != 0) && (*(longlong *)(param_1 + 0x120) != 0)) &&
               (*(longlong *)(DAT_14cb0d2b0 + 0x898) == lVar5)) {
              lVar5 = *(longlong *)(param_1 + 0x120);
            }
            *(longlong *)(*param_3 + uVar9 * 8) = lVar5;
            if (param_4 != (longlong *)0x0) {
              if (plVar4 == (longlong *)0x0) {
                lVar5 = 0;
                plVar4 = (longlong *)0x0;
              }
              else {
                lVar5 = (**(code **)(*plVar4 + 0x300))(plVar4);
                if (lVar5 == 0) {
                  plVar4 = (longlong *)0x0;
                }
              }
              *(longlong *)(*param_4 + lVar8) = lVar5;
              *(longlong **)(*param_4 + 8 + lVar8) = plVar4;
            }
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 0x10;
          } while (uVar1 != uVar9);
          return;
        }
        FUN_14017a33c(param_3,1);
        if ((((int)uVar1 < DAT_14c9647dc) &&
            (plVar2 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + uVar9 * 8)), plVar2 != (longlong *)0x0)) &&
           (((int)plVar2[2] == iVar7 && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
          lVar8 = *plVar2;
        }
        else {
          lVar8 = 0;
        }
        uVar3 = *(undefined8 *)(lVar8 + 0x530);
        puVar6 = (undefined8 *)*param_3;
        goto LAB_143605f09;
      }
    }
    if (param_5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143605f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_5 + 0x20))(param_5,param_3,param_4);
      return;
    }
  }
  else {
    FUN_14017a33c(param_3,1);
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    puVar6 = (undefined8 *)*param_3;
LAB_143605f09:
    *puVar6 = uVar3;
  }
  return;
}



// FUNCTION 143606068 FUN_143606068 body=14 status=ok
// SIG undefined FUN_143606068(void)

void FUN_143606068(undefined8 param_1,undefined8 param_2)

{
  FUN_14597c3ae(param_2,param_1);
  return;
}



// FUNCTION 143606076 FUN_143606076 body=150 status=ok
// SIG undefined FUN_143606076(void)

undefined1
FUN_143606076(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined8 *local_20;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_11;
  local_11 = param_6;
  local_50 = &local_12;
  local_12 = 0;
  local_20 = &local_60;
  local_38 = (undefined1 *)&param_5;
  local_28 = FUN_143623154;
  local_60 = param_3;
  local_58 = param_2;
  local_48 = param_1;
  local_40 = param_4;
  FUN_1448e6002(param_1 + 0x138);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360610e FUN_14360610e body=224 status=ok
// SIG undefined FUN_14360610e(void)

void FUN_14360610e(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*param_1 + 0x10);
  bVar3 = *(byte *)(lVar1 + 0x1c) & 0x1f;
  if (bVar3 == 4 && lVar1 != 0) {
    do {
      lVar1 = *(longlong *)(lVar1 + 0x20);
      bVar3 = *(byte *)(lVar1 + 0x1c) & 0x1f;
    } while (lVar1 != 0 && bVar3 == 4);
  }
  local_18 = param_2;
  if (bVar3 == 0xb) {
    if (param_3[2] == 0) {
      if (param_2 == 0) goto LAB_14360616d;
      plVar2 = local_48;
      goto LAB_14360615e;
    }
    if (param_4 != 0) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      FUN_140175384(local_28,&local_28,param_4);
      goto LAB_14360616d;
    }
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
  }
  else {
    if (param_2 == 0) goto LAB_14360616d;
    plVar2 = local_58;
LAB_14360615e:
    *plVar2 = (longlong)&local_18;
    *(undefined4 *)(plVar2 + 1) = 1;
  }
  FUN_140175890();
LAB_14360616d:
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436061f0 FUN_1436061f0 body=578 status=ok
// SIG undefined FUN_1436061f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436061f0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_98 [40];
  bool *local_70;
  longlong *local_68;
  undefined1 *local_60;
  bool **local_58;
  bool local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      local_49 = DVar7 == DVar8;
      if (local_49) goto LAB_1436063df;
    }
    else {
      local_49 = false;
    }
  }
  else {
    local_49 = true;
LAB_1436063df:
    cVar6 = FUN_1436236ae(param_1);
    if (cVar6 == '\0') goto LAB_1436063ef;
  }
  local_70 = &local_49;
  local_58 = &local_70;
  local_60 = &LAB_1407f55b6;
  local_68 = param_1;
  FUN_140711b6e(param_1[6]);
  lVar10 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)*param_1;
    puVar1 = puVar11 + lVar10;
    do {
      uVar3 = *puVar11;
      uVar9 = (ulonglong)DAT_14caf6fb8;
      if (0 < (longlong)uVar9) {
        bVar14 = false;
        DAT_14caf6fc4 = DAT_14caf6fc4 + 1;
        do {
          lVar10 = uVar9 * 0x10 + -8;
          uVar13 = uVar9;
          while (((*(int *)(DAT_14caf6fb0 + lVar10) != 0 &&
                  (plVar4 = *(longlong **)(DAT_14caf6fb0 + -8 + lVar10), plVar4 != (longlong *)0x0))
                 && (cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,uVar3,0), cVar6 != '\0'))) {
            lVar10 = lVar10 + -0x10;
            bVar5 = uVar13 < 2;
            uVar13 = uVar13 - 1;
            if (bVar5) {
              DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
              if (bVar14) goto LAB_143606328;
              goto LAB_14360639d;
            }
          }
          uVar9 = uVar13 - 1;
          bVar14 = true;
        } while (1 < uVar13);
        DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
LAB_143606328:
        iVar2 = DAT_14caf6fb8;
        if (DAT_14caf6fc4 < 1) {
          if (0 < DAT_14caf6fb8) {
            iVar12 = 0;
            do {
              if (((*(int *)(DAT_14caf6fb0 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(DAT_14caf6fb0 + (longlong)iVar12 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(&DAT_14caf6fb0,iVar12);
                FUN_14005b248(&DAT_14caf6fb0);
              }
              else {
                iVar12 = iVar12 + 1;
              }
            } while (iVar12 < DAT_14caf6fb8);
          }
          _DAT_14caf6fc0 = DAT_14caf6fb8 * 2;
          if (_DAT_14caf6fc0 < 3) {
            _DAT_14caf6fc0 = 2;
          }
          if ((_DAT_14caf6fc0 < iVar2) && (DAT_14caf6fbc != DAT_14caf6fb8)) {
            FUN_14045812c(&DAT_14caf6fb0);
          }
        }
      }
LAB_14360639d:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1);
  }
LAB_1436063ef:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143606434 FUN_143606434 body=206 status=ok
// SIG undefined FUN_143606434(void)

void FUN_143606434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_c8;
  undefined1 local_bb [3];
  undefined1 local_b8 [88];
  longlong local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14025a69a(local_bb,param_4);
  local_c8 = param_6;
  local_e0 = param_5;
  local_e8 = param_4;
  local_d8 = local_bb;
  FUN_143606504(local_b8,param_1,param_2,param_3);
  FUN_1436061f0(local_b8);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143606504 FUN_143606504 body=442 status=ok
// SIG undefined FUN_143606504(void)

longlong *
FUN_143606504(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             longlong param_5,longlong param_6,longlong param_7,undefined8 param_8,longlong *param_9
             )

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  if (param_5 == 0) {
    if (param_9 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*param_9 + 0x10))(param_9);
    }
  }
  else {
    lVar4 = *(longlong *)(param_5 + 0xa8);
  }
  *param_1 = (longlong)(param_1 + 0xb);
  param_1[1] = (longlong)(param_1 + 0xd);
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = (longlong)param_9;
  param_1[5] = lVar4;
  param_1[6] = param_6;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xbf800000;
  param_1[8] = 0;
  param_1[9] = param_7;
  lVar4 = DAT_14caf6750;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar5 = 1;
  }
  *(bool *)(param_1 + 10) = *(int *)(lVar4 + uVar5 * 4) != 0;
  param_1[0xb] = 0;
  param_1[0xb] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 0xc) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 0xe) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  param_1[8] = 0;
  if (*(char *)(param_1[9] + 1) == '\x01') {
    lVar4 = param_1[2];
    if (*(char *)(lVar4 + 0x30) == '\x02') {
      *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
      if (*(char *)(lVar4 + 0x30) != '\x02') {
        return param_1;
      }
      uVar6 = 0x3f800000;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
      uVar6 = 0;
      if (*(char *)(lVar4 + 0x30) != '\x02') {
        return param_1;
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  }
  return param_1;
}



// FUNCTION 1436066be FUN_1436066be body=69 status=ok
// SIG undefined FUN_1436066be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436066be(void)

{
  _DAT_14caf6788 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143606700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6790,1);
  return;
}



// FUNCTION 143606703 FUN_143606703 body=49 status=ok
// SIG undefined FUN_143606703(void)

void FUN_143606703(void)

{
  FUN_144760e21(DAT_14caf6fb0,DAT_14caf6fb8);
  if (DAT_14caf6fb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143606734 FUN_143606734 body=1073 status=ok
// SIG undefined FUN_143606734(void)

void FUN_143606734(longlong param_1,uchar param_2 [8])

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined2 local_210;
  undefined1 local_208;
  undefined1 local_200;
  int local_1ec;
  longlong local_1e8;
  undefined8 uStack_1e0;
  GUID local_1d8;
  GUID *local_1c8;
  GUID **local_1c0;
  longlong local_150;
  uchar local_148 [8];
  longlong local_140;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1c0 = &local_1c8;
  local_1d8._0_8_ = &PTR_FUN_149e37810;
  local_1d8.Data4 = param_2;
  local_1c8 = &local_1d8;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*(longlong *)param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*(longlong *)param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*(longlong *)param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  FUN_1402ac1b3(param_2,(ulong *)(param_1 + 0xe8));
  if (((*(byte *)((longlong)param_2 + 0x28) & 1) != 0) &&
     (((*(int *)(param_1 + 0xec) == 0 && *(int *)(param_1 + 0xe8) == 0) &&
      *(int *)(param_1 + 0xf0) == 0) && *(int *)(param_1 + 0xf4) == 0)) {
    FUN_14282b7b8(param_1);
    local_1d8._0_8_ = (undefined **)0x0;
    local_1d8.Data4[0] = '\0';
    local_1d8.Data4[1] = '\0';
    local_1d8.Data4[2] = '\0';
    local_1d8.Data4[3] = '\0';
    local_1d8.Data4[4] = '\0';
    local_1d8.Data4[5] = '\0';
    local_1d8.Data4[6] = '\0';
    local_1d8.Data4[7] = '\0';
    CoCreateGuid(&local_1d8);
    *(ulong *)(param_1 + 0xe8) = local_1d8.Data1;
    *(undefined4 *)(param_1 + 0xec) = local_1d8._4_4_;
    *(undefined4 *)(param_1 + 0xf0) = local_1d8.Data4._0_4_;
    *(undefined4 *)(param_1 + 0xf4) = local_1d8.Data4._4_4_;
  }
  if (*(longlong *)((longlong)param_2 + 0x68) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x68) + 0x10) != 0;
  }
  puVar3 = *(ulonglong **)((longlong)param_2 + 8);
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_1d8.Data1 = (uint)bVar10;
    (**(code **)(*(longlong *)param_2 + 0x170))(param_2,&local_1d8,4);
    uVar9 = local_1d8.Data1;
    if (1 < local_1d8.Data1) {
      FUN_14572541c(param_2);
      uVar9 = local_1d8.Data1;
    }
  }
  else {
    uVar9 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar9 != 0) {
    if (0x11e < *(int *)((longlong)param_2 + 0x40)) {
      puVar3 = *(ulonglong **)((longlong)param_2 + 8);
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        local_1d8._0_8_ =
             CONCAT44(local_1d8._4_4_,(uint)(*(byte *)(param_1 + 0xb9) >> 2)) & 0xffffffff00000001;
        (**(code **)(*(longlong *)param_2 + 0x170))(param_2,&local_1d8,4);
        uVar5 = local_1d8.Data1;
        if (1 < local_1d8.Data1) {
          FUN_14572541c(param_2);
          uVar5 = local_1d8.Data1;
        }
      }
      else {
        uVar5 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) & 0xfb | (uVar5 != 0) << 2;
    }
    local_208 = 1;
    local_218 = 1;
    local_200 = 0;
    local_210 = 0;
    FUN_14042ff5c(param_1 + 0xd8,param_2,param_1,0);
  }
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if ((0x29 < iVar4) && (iVar4 = FUN_1448332aa(param_2,&DAT_149e3cbc8), iVar4 < 1)) {
    local_1e8 = 0;
    uStack_1e0 = 0;
    FUN_1407134c4(&local_1d8,param_2);
    local_150 = *(longlong *)((longlong)param_2 + 0x88);
    *(GUID **)((longlong)param_2 + 0x88) = &local_1d8;
    local_1d8._0_8_ = &PTR_FUN_149f52ef0;
    local_148 = param_2;
    lVar6 = FUN_14001cc68(0x158,0x10);
    FUN_140dffb3a(lVar6);
    local_1ec = 0;
    local_140 = lVar6;
    if ((*(byte *)((longlong)param_2 + 0x28) & 1) != 0) {
      FUN_144756766(0,0);
      uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
      puVar3 = *(ulonglong **)((longlong)param_2 + 8);
      piVar2 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*(longlong *)param_2 + 0x170))(param_2,&local_1ec,4);
        }
        else {
          FUN_14572512c(param_2,&local_1ec);
        }
      }
      else {
        local_1ec = *(int *)*puVar3;
        *puVar3 = (ulonglong)piVar2;
      }
      if (0 < local_1ec) {
        iVar4 = 0;
        do {
          plVar7 = (longlong *)FUN_14004c990(&local_1d8,0);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0xf8))(plVar7);
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            lVar6 = (longlong)(int)uStack_1e0;
            uVar5 = (int)uStack_1e0 + 1;
            uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar5);
            if (uStack_1e0._4_4_ < uVar5) {
              FUN_140619960(&local_1e8);
            }
            *(longlong **)(local_1e8 + lVar6 * 8) = plVar7;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_1ec);
      }
    }
    lVar6 = local_140;
    local_1d8._0_8_ = &PTR_FUN_149f52ef0;
    if (local_140 != 0) {
      FUN_14041e184(local_140);
      FUN_1400020a8(lVar6);
    }
    FUN_14041e0ea(&local_1d8);
    FUN_144756766(local_1e8,uStack_1e0 & 0xffffffff);
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  if (((uVar9 != 0) && ((*(byte *)((longlong)param_2 + 0x28) & 1) != 0)) &&
     (lVar6 = FUN_1401cf3e6(param_1), lVar6 != 0)) {
    uVar8 = FUN_14001cc68(0x88,0x10);
    FUN_1436270a4(uVar8,lVar6);
    lVar6 = *(longlong *)(param_1 + 0x2f8);
    *(undefined8 *)(param_1 + 0x2f8) = uVar8;
    if (lVar6 != 0) {
      FUN_1402ef326(lVar6);
      FUN_1400020a8(lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143606b66 FUN_143606b66 body=69 status=ok
// SIG undefined FUN_143606b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143606b66(void)

{
  _DAT_14caf67b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143606ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf67b8,1);
  return;
}



// FUNCTION 143606bab FUN_143606bab body=69 status=ok
// SIG undefined FUN_143606bab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143606bab(void)

{
  _DAT_14caf67c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143606bed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf67d0,1);
  return;
}



// FUNCTION 143606bf0 FUN_143606bf0 body=911 status=ok
// SIG undefined FUN_143606bf0(void)

void FUN_143606bf0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  double *pdVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  byte bVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulonglong in_R10;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_198 [32];
  longlong local_178;
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
  longlong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(byte *)(param_1 + 0xb9) & 9) == 0) {
    lVar19 = *(longlong *)(param_1 + 0x2f8);
    if (lVar19 == 0) {
      lVar19 = FUN_1401cf3e6(param_1);
      if (lVar19 == 0) {
        bVar14 = 1;
        if (((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) &&
            (lVar19 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))(), lVar19 != 0)) &&
           ((bVar4 = *(byte *)(lVar19 + 0x152), bVar4 == 1 ||
            ((bVar4 < 7 && ((0x68U >> (bVar4 & 0x1f) & 1) != 0)))))) {
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          uStack_71 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          bVar14 = 0;
          local_f8 = param_1;
          FUN_140c6fb48(param_1);
          FUN_140752078(&local_168);
          FUN_140bc3fca(param_1,&local_168);
          FUN_140627d5e(&local_168);
        }
      }
      else {
        bVar14 = FUN_147c48de4(param_1,lVar19);
        bVar14 = bVar14 ^ 1;
      }
    }
    else {
      local_178 = lVar19 + 0x70;
      param_4 = lVar19 + 0x40;
      FUN_140bc41ce(param_1,lVar19 + 0x20);
      lVar19 = *(longlong *)(param_1 + 0x2f8);
      if (lVar19 != 0) {
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        FUN_1402ef326(lVar19);
        FUN_1400020a8(lVar19);
      }
      bVar14 = 0;
    }
    FUN_144842a8a(param_1,&local_168);
    iVar15 = *(int *)(param_1 + 0x70);
    if ((int)local_168 < 0x134 && 0 < iVar15) {
      lVar16 = 0x90;
      lVar20 = 0;
      do {
        lVar19 = *(longlong *)(param_1 + 0x68);
        dVar25 = *(double *)(lVar19 + lVar16);
        dVar26 = ((double *)(lVar19 + lVar16))[1];
        pdVar1 = (double *)(lVar19 + 0x10 + lVar16);
        dVar12 = *pdVar1;
        dVar13 = pdVar1[1];
        lVar24 = -(ulonglong)((double)((ulonglong)dVar26 & 0x7ff0000000000000) == INFINITY);
        auVar6._8_4_ = (int)lVar24;
        auVar6._0_8_ = -(ulonglong)((double)((ulonglong)dVar25 & 0x7ff0000000000000) == INFINITY);
        auVar6._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
        uVar21 = movmskpd((int)param_4,auVar6);
        param_4 = (ulonglong)uVar21;
        lVar24 = -(ulonglong)((double)((ulonglong)dVar13 & 0x7ff0000000000000) == INFINITY);
        auVar9._8_4_ = (int)lVar24;
        auVar9._0_8_ = -(ulonglong)((double)((ulonglong)dVar12 & 0x7ff0000000000000) == INFINITY);
        auVar9._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
        iVar22 = movmskpd((int)in_R10,auVar9);
        uVar23 = iVar22 << 2 | uVar21;
        in_R10 = (ulonglong)uVar23;
        if (uVar23 == 0) {
          puVar2 = (ulonglong *)(lVar19 + 0x20 + lVar16);
          puVar3 = (ulonglong *)(lVar19 + 0x30 + lVar16);
          lVar24 = -(ulonglong)((double)(puVar2[1] & 0x7ff0000000000000) == INFINITY);
          auVar7._8_4_ = (int)lVar24;
          auVar7._0_8_ = -(ulonglong)((double)(*puVar2 & 0x7ff0000000000000) == INFINITY);
          auVar7._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
          uVar21 = movmskpd(uVar21,auVar7);
          param_4 = (ulonglong)uVar21;
          lVar24 = -(ulonglong)((double)(puVar3[1] & 0x7ff0000000000000) == INFINITY);
          auVar10._8_4_ = (int)lVar24;
          auVar10._0_8_ = -(ulonglong)((double)(*puVar3 & 0x7ff0000000000000) == INFINITY);
          auVar10._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
          iVar22 = movmskpd(0,auVar10);
          uVar23 = iVar22 << 2 | uVar21;
          in_R10 = (ulonglong)uVar23;
          if (uVar23 != 0) goto LAB_143606dc9;
          puVar2 = (ulonglong *)(lVar19 + 0x40 + lVar16);
          puVar3 = (ulonglong *)(lVar19 + 0x50 + lVar16);
          lVar24 = -(ulonglong)((double)(puVar2[1] & 0x7ff0000000000000) == INFINITY);
          auVar8._8_4_ = (int)lVar24;
          auVar8._0_8_ = -(ulonglong)((double)(*puVar2 & 0x7ff0000000000000) == INFINITY);
          auVar8._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
          uVar21 = movmskpd(uVar21,auVar8);
          param_4 = (ulonglong)uVar21;
          lVar24 = -(ulonglong)((double)(puVar3[1] & 0x7ff0000000000000) == INFINITY);
          auVar11._8_4_ = (int)lVar24;
          auVar11._0_8_ = -(ulonglong)((double)(*puVar3 & 0x7ff0000000000000) == INFINITY);
          auVar11._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
          iVar22 = movmskpd(0,auVar11);
          uVar23 = iVar22 << 2 | uVar21;
          in_R10 = (ulonglong)uVar23;
          if (uVar23 != 0) goto LAB_143606dc9;
          dVar25 = dVar12 * dVar12 + dVar25 * dVar25;
          dVar26 = dVar13 * dVar13 + dVar26 * dVar26;
          auVar5._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar25 + dVar26)));
          auVar5._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar25 + dVar26)));
          uVar21 = movmskpd(uVar21,auVar5);
          param_4 = (ulonglong)uVar21;
          if (uVar21 != 0) goto LAB_143606dc9;
        }
        else {
LAB_143606dc9:
          puVar17 = &DAT_14c846480;
          puVar18 = (undefined8 *)(lVar19 + lVar16);
          for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar18 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          }
          iVar15 = *(int *)(param_1 + 0x70);
        }
        lVar20 = lVar20 + 1;
        lVar19 = (longlong)iVar15;
        lVar16 = lVar16 + 0x100;
      } while (lVar20 < lVar19);
    }
    else {
      lVar19 = (longlong)iVar15;
    }
    if (iVar15 != 0) {
      lVar16 = *(longlong *)(param_1 + 0x68);
      lVar19 = lVar19 << 8;
      do {
        FUN_140ab2a56(lVar16,0);
        lVar16 = lVar16 + 0x100;
        lVar19 = lVar19 + -0x100;
      } while (lVar19 != 0);
    }
    if (bVar14 != 0) {
      FUN_1401841e8(param_1);
    }
    *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 1;
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143606f80 FUN_143606f80 body=669 status=ok
// SIG undefined FUN_143606f80(void)

void FUN_143606f80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14001cc68(0x108,0x10);
  FUN_140c6fabc(lVar4,param_1);
  local_40 = lVar4;
  if (((*(char *)(lVar4 + 0xfb) == '\0') && (*(char *)(lVar4 + 0xf8) == '\0')) &&
     (*(char *)(lVar4 + 0xf9) != '\x01')) {
    if (lVar4 != 0) {
      FUN_140627d5e(lVar4);
      FUN_1400020a8(lVar4);
    }
    local_78 = 0;
    local_70 = 0;
    FUN_14114e6dc(&local_78,param_2);
    FUN_147c48f3a(param_1,0,&local_78);
  }
  else {
    FUN_147c48e6e(&local_68,param_1,&local_40,param_2);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    local_50 = 3;
    *local_58 = &PTR_LAB_14aa1dff0;
    local_58[1] = local_68;
    local_68 = (undefined8 *)0x0;
    *(int *)(local_58 + 2) = local_60;
    local_60 = 0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_58[3] = lVar5;
    *local_58 = &PTR_FUN_14aa1df80;
    local_58[4] = lVar4;
    local_58[5] = FUN_143626ff8;
    local_88 = 0xff;
    FUN_142c039ac(&local_48,&local_58);
    if (local_48 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_48 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    if (local_50 == 0) {
LAB_1436070ef:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_1436070ef;
    }
    if (local_60 == 0) {
LAB_143607134:
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      local_60 = 0;
      goto LAB_143607134;
    }
    *(longlong *)(param_1 + 0x2f0) = local_40;
  }
  if ((int)param_2[1] != 0) {
    puVar2 = (undefined8 *)*param_2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143607185;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_143607185:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14360721e FUN_14360721e body=840 status=ok
// SIG undefined FUN_14360721e(void)

void FUN_14360721e(longlong *param_1,longlong param_2,double *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_288 [40];
  undefined8 local_260;
  undefined8 local_258 [12];
  byte local_1f8 [4];
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  uint local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178 [12];
  undefined8 local_118 [12];
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 *local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 **local_58;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_260 = param_4;
  (**(code **)(*param_1 + 0x2a0))();
  if (((ABS(*param_3) <= 9.999999747378752e-05) && (ABS(param_3[1]) <= 9.999999747378752e-05)) &&
     (ABS(param_3[2]) <= 9.999999747378752e-05)) {
    *param_3 = 0.10000000149011612;
    param_3[1] = 0.10000000149011612;
    param_3[2] = 0.10000000149011612;
  }
  local_b0 = 0;
  local_a8 = 0;
  local_1f8[0] = *(byte *)(param_1 + 0x17) >> 3 & 1;
  local_1f4 = *param_7;
  uStack_1f0 = param_7[1];
  uStack_1ec = param_7[2];
  uStack_1e8 = param_7[3];
  local_1e4 = param_7[4];
  uStack_1e0 = param_7[5];
  uStack_1dc = param_7[6];
  uStack_1d8 = param_7[7];
  local_1d4 = param_7[8];
  uStack_1d0 = param_7[9];
  uStack_1cc = param_7[10];
  uStack_1c8 = param_7[0xb];
  local_1c4 = param_7[0xc];
  lVar3 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar5 = (longlong *)FUN_145a62958();
    lVar3 = plVar5[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar3 = plVar5[0x22];
    }
  }
  bVar2 = *(byte *)(lVar3 + 0x75);
  if (*(byte *)((longlong)param_1 + 0x31) != 0) {
    bVar2 = *(byte *)((longlong)param_1 + 0x31);
  }
  local_1c0 = (uint)bVar2;
  local_1b8 = *(undefined4 *)param_3;
  uStack_1b4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_1b0 = *(undefined4 *)(param_3 + 1);
  uStack_1ac = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1a8 = param_3[2];
  local_1a0 = local_260;
  local_198 = *param_5;
  local_190 = *(undefined4 *)(param_5 + 1);
  local_188 = *param_6;
  local_180 = *(undefined4 *)(param_6 + 1);
  puVar6 = local_178;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_8;
    param_8 = param_8 + 1;
    puVar6 = puVar6 + 1;
  }
  local_49 = 0;
  local_4a = 1;
  puVar6 = &DAT_14c846480;
  puVar7 = local_258;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_58 = &local_80;
  local_60 = FUN_1400d78f6;
  local_80 = local_258;
  local_78 = param_2;
  local_70 = &local_4a;
  local_68 = &local_49;
  FUN_1448e6002(param_2 + 0x138);
  puVar6 = local_258;
  puVar7 = local_118;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_b8 = param_1 + 7;
  local_a0 = param_1[0x1f];
  local_98 = (undefined4)param_1[0x20];
  local_90 = 0xffffffff;
  if (((((*(int *)(param_2 + 0x144) != 0) && (uVar1 = *(uint *)(param_2 + 0x140), -1 < (int)uVar1))
       && (((int)uVar1 < DAT_14c9647dc &&
           ((plVar5 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_2 + 0x144))))))) &&
      ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && ((longlong *)*plVar5 != (longlong *)0x0)) {
    plVar4 = (longlong *)0x0;
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      plVar4 = (longlong *)*plVar5;
    }
    local_90 = (**(code **)(*plVar4 + 0x9f0))(plVar4,*(undefined4 *)(param_2 + 0xc));
  }
  FUN_143629c3c(param_2 + 0x138,local_1f8,param_9);
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143607568 FUN_143607568 body=611 status=ok
// SIG undefined FUN_143607568(void)

void FUN_143607568(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_28);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (param_1[4] != 0) {
    FUN_1400337aa();
  }
  FUN_14013683c(param_1 + 0x29,param_1);
  FUN_144842a8a(param_1,&local_28);
  if ((int)local_28 < 0x10b) {
    if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 6) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 6) = 2;
    }
  }
  FUN_144842a8a(param_1,&local_28);
  if (0x11b < (int)local_28) goto LAB_1436076bd;
  if (((((*(int *)((longlong)param_1 + 0x28c) == 0) ||
        (uVar1 = *(uint *)(param_1 + 0x51), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x28c))))) ||
     (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (lVar2 = *plVar4, lVar2 == 0)))) {
LAB_1436076ad:
    pcVar5 = (char *)((longlong)param_1 + 0x15f);
LAB_1436076b4:
    if (*pcVar5 != '\0') goto LAB_1436076bd;
  }
  else if ((*(longlong *)(lVar2 + 0xa8) == 0) ||
          ((*(byte *)(*(longlong *)(lVar2 + 0xa8) + 0x65) & 1) != 0)) {
    if (DAT_14cad2858 == 0) {
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      uStack_70 = CONCAT44(uStack_70._4_4_,0x10);
      local_78 = CONCAT44(local_78._4_4_,0x1180);
      local_40 = &local_28;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_1436076ad;
    pcVar5 = (char *)(lVar2 + 0x427);
    goto LAB_1436076b4;
  }
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
LAB_1436076bd:
  if (DAT_14cad0ec0 == 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436077cc FUN_1436077cc body=234 status=ok
// SIG undefined FUN_1436077cc(void)

undefined8 FUN_1436077cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    fVar4 = 3.4028235e+38;
    uVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x50;
    fVar6 = 3.4028235e+38;
    do {
      uVar3 = FUN_147c49aae(lVar1,param_2,param_3);
      uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar4 = (float)uVar3;
      if (fVar6 <= (float)uVar3) {
        fVar4 = fVar6;
      }
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
      fVar6 = fVar4;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x68;
    do {
      uVar3 = FUN_147c4b260(lVar1,param_2,param_3);
      uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar6 = (float)uVar3;
      if (fVar4 <= (float)uVar3) {
        fVar6 = fVar4;
      }
      fVar4 = fVar6;
      lVar1 = lVar1 + 0x68;
      lVar2 = lVar2 + -0x68;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar2 = (longlong)*(int *)(param_1 + 0x50) * 0x70;
    fVar6 = fVar4;
    do {
      uVar3 = FUN_147c49ef2(lVar1,param_2,param_3);
      uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
      fVar4 = (float)uVar3;
      if (fVar6 <= (float)uVar3) {
        fVar4 = fVar6;
      }
      lVar1 = lVar1 + 0x70;
      lVar2 = lVar2 + -0x70;
      fVar6 = fVar4;
    } while (lVar2 != 0);
  }
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 1436078b6 FUN_1436078b6 body=444 status=ok
// SIG undefined FUN_1436078b6(void)

undefined8
FUN_1436078b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    uVar1 = 0x7f7fffff;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x50;
    uVar1 = 0x7f7fffff;
    do {
      local_98 = &local_90;
      uVar4 = FUN_147c49c68(lVar3,param_2,param_3,&local_78);
      if ((float)uVar4 < (float)uVar1) {
        param_4[2] = local_68;
        *param_4 = local_78;
        param_4[1] = uStack_70;
        param_5[2] = local_80;
        *param_5 = local_90;
        param_5[1] = uStack_88;
        uVar1 = uVar4;
      }
      lVar3 = lVar3 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x68;
    do {
      local_98 = &local_90;
      uVar4 = FUN_147c4ba48(lVar3,param_2,param_3,&local_78);
      if ((float)uVar4 < (float)uVar1) {
        param_4[2] = local_68;
        *param_4 = local_78;
        param_4[1] = uStack_70;
        param_5[2] = local_80;
        *param_5 = local_90;
        param_5[1] = uStack_88;
        uVar1 = uVar4;
      }
      lVar3 = lVar3 + 0x68;
      lVar2 = lVar2 + -0x68;
    } while (lVar2 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
    lVar2 = (longlong)*(int *)(param_1 + 0x50) * 0x70;
    do {
      local_98 = &local_90;
      uVar4 = FUN_147c4a708(lVar3,param_2,param_3,&local_78);
      if ((float)uVar4 < (float)uVar1) {
        param_4[2] = local_68;
        *param_4 = local_78;
        param_4[1] = uStack_70;
        param_5[2] = local_80;
        *param_5 = local_90;
        param_5[1] = uStack_88;
        uVar1 = uVar4;
      }
      lVar3 = lVar3 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 143607a74 FUN_143607a74 body=258 status=ok
// SIG undefined FUN_143607a74(void)

void FUN_143607a74(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  lVar2 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
    if ((*(uint *)(lVar2 + 8) & 0x30) != 0) goto LAB_143607afe;
  }
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0xe8) = local_28.Data1;
  *(undefined4 *)(param_1 + 0xec) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0xf0) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0xf4) = local_28.Data4._4_4_;
LAB_143607afe:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143607b78 FUN_143607b78 body=111 status=ok
// SIG undefined FUN_143607b78(void)

void FUN_143607b78(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  param_1[2] = 0x300000000;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  *(undefined1 *)((longlong)param_1 + 0x19) = 3;
  *(undefined4 *)(param_1 + 4) = 6;
  param_1[5] = param_1;
  *param_1 = &PTR_FUN_14aa0f410;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1e] = 0;
  return;
}



// FUNCTION 143607be7 FUN_143607be7 body=69 status=ok
// SIG undefined FUN_143607be7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143607be7(void)

{
  _DAT_14caf67f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143607c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf67f8,1);
  return;
}



// FUNCTION 143607c2c FUN_143607c2c body=2480 status=ok
// SIG undefined FUN_143607c2c(void)

void FUN_143607c2c(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  ulonglong uVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_2c8 [38];
  char local_2a2;
  char local_2a1;
  longlong local_2a0;
  longlong *local_298;
  undefined8 local_290;
  undefined8 **local_288;
  undefined4 local_280;
  undefined8 *local_278 [3];
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined8 *local_218;
  undefined8 *puStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  char local_1e8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  int local_19c;
  undefined8 *local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  void *local_108;
  uint local_100;
  void *local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x850) == 0)) ||
     ((param_2[0x16] == 0 && (lVar5 = FUN_1448abda6(param_2), lVar5 == 0)))) goto LAB_143607c8b;
  local_e0 = 0;
  uVar4 = *(uint *)((longlong)param_2 + 0xc);
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  uVar17 = *(uint *)(lVar5 + 0x10);
  if (*(uint *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar10 = DAT_14c964868 + 1;
    UNLOCK();
    uVar3 = DAT_14c964868 + 1;
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar10;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar3);
    }
    LOCK();
    uVar17 = *(uint *)(lVar5 + 0x10);
    bVar19 = uVar17 == 0;
    if (bVar19) {
      *(uint *)(lVar5 + 0x10) = uVar3;
      uVar17 = 0;
    }
    UNLOCK();
    if (bVar19) {
      uVar17 = uVar3;
    }
  }
  local_e0 = CONCAT44(uVar17,uVar4);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  cVar2 = (**(code **)(*param_2 + 0x360))(param_2);
  plVar7 = (longlong *)(param_1 + 0x758);
  local_2a0 = param_1;
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x760) != *(int *)(param_1 + 0x78c)) {
      uVar3 = uVar17 >> 0xd ^ uVar4 - uVar17;
      uVar9 = uVar3 << 8 ^ (-0x61c88647 - uVar17) - uVar3;
      uVar11 = uVar9 >> 0xd ^ (uVar17 - uVar3) - uVar9;
      uVar15 = uVar11 >> 0xc ^ (uVar3 - uVar9) - uVar11;
      uVar3 = uVar15 << 0x10 ^ (uVar9 - uVar11) - uVar15;
      uVar9 = uVar3 >> 5 ^ (uVar11 - uVar15) - uVar3;
      uVar11 = uVar9 >> 3 ^ (uVar15 - uVar3) - uVar9;
      uVar3 = uVar11 << 10 ^ (uVar3 - uVar9) - uVar11;
      lVar5 = param_1 + 0x790;
      if (*(longlong *)(param_1 + 0x798) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x798);
      }
      iVar10 = *(int *)(lVar5 + (ulonglong)
                                (*(int *)(param_1 + 0x7a0) - 1U &
                                (uVar3 >> 0xf ^ uVar9 - (uVar11 + uVar3))) * 4);
      if (iVar10 != -1) {
        lVar5 = *plVar7;
        do {
          lVar16 = (longlong)iVar10 * 0x60;
          if ((*(uint *)(lVar5 + lVar16) == uVar4) && (*(uint *)(lVar5 + 4 + lVar16) == uVar17))
          goto LAB_1436083b9;
          iVar10 = *(int *)(lVar16 + lVar5 + 0x58);
        } while (iVar10 != -1);
      }
    }
    lVar5 = param_3[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar16 = *param_3;
      lVar18 = 0;
      do {
        local_188 = (undefined8 *)CONCAT44(0xffffffff,*(undefined4 *)(lVar16 + lVar18));
        FUN_147c647e2(&local_b8,&local_218,&local_188);
        lVar18 = lVar18 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar18);
    }
    local_188 = &local_e0;
    uStack_180 = &local_b8;
    FUN_147c64c72(plVar7,&local_218);
    FUN_147c4f2a2(&local_e8);
    FUN_147c4f218((longlong)param_2 + 0x59e,local_2a0,local_e8);
  }
  else {
    FUN_147c651b6(plVar7,&local_e0);
    plVar7 = param_2 + 0x57;
    (**(code **)(param_2[0x57] + 0x20))(plVar7,&local_f8);
    local_108 = local_f8;
    local_100 = local_f0;
    FUN_14015671e(local_d8);
    _Src = local_f8;
    local_118 = (undefined8 *)0x0;
    uStack_110 = (undefined8 *)0x0;
    iVar10 = (int)param_3[1];
    local_2a1 = param_4;
    if (iVar10 == 0) {
      uStack_110 = (undefined8 *)(ulonglong)local_f0;
      if ((longlong)(int)local_f0 == 0) {
        uStack_110 = (undefined8 *)(ulonglong)local_f0;
        local_298 = param_3;
      }
      else {
        local_298 = param_3;
        FUN_1448634b6(&local_118,local_f0,0);
        memcpy(local_118,_Src,(longlong)(int)local_f0 << 3);
      }
LAB_14360806e:
      param_1 = local_2a0;
      iVar10 = (int)uStack_110;
      if ((int)local_298[1] == 0) goto LAB_143608089;
    }
    else {
      if (iVar10 < 0) goto LAB_1436085b0;
      FUN_14071ff8a(&local_118);
      lVar5 = param_3[1];
      if ((longlong)(int)lVar5 != 0) {
        lVar16 = *param_3;
        lVar18 = 0;
        local_298 = param_3;
        do {
          uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined4 *)(lVar16 + lVar18));
          puVar12 = uStack_110;
          lVar8 = (longlong)(int)uStack_110;
          uVar4 = (int)uStack_110 + 1;
          uStack_110 = (undefined8 *)CONCAT44(uStack_110._4_4_,uVar4);
          if (uStack_110._4_4_ < uVar4) {
            FUN_14075a758(&local_118,(ulonglong)puVar12 & 0xffffffff);
          }
          local_118[lVar8] = uVar6;
          lVar18 = lVar18 + 4;
        } while ((longlong)(int)lVar5 * 4 != lVar18);
        goto LAB_14360806e;
      }
LAB_143608089:
      puVar12 = local_118;
      local_188 = (undefined8 *)0x0;
      uStack_180 = (undefined8 *)0x0;
      if ((int)uStack_110 != 0) {
        lVar5 = (longlong)(int)uStack_110;
        lVar16 = 0;
        do {
          puVar14 = uStack_180;
          plVar7 = *(longlong **)((longlong)puVar12 + lVar16);
          if ((plVar7 == (longlong *)0x0) || (lVar18 = *plVar7, lVar18 == 0)) goto LAB_143608127;
          iVar10 = *(int *)(lVar18 + 0x1c);
          if (iVar10 == 0xb) {
            plVar7 = (longlong *)(lVar18 + 0x40);
LAB_1436080d6:
            lVar18 = *plVar7;
            if ((lVar18 != 0) &&
               ((*(byte *)(lVar18 + 0x90) < 2 || (*(char *)(lVar18 + 0x1b9) == '\0')))) {
              lVar18 = (longlong)(int)uStack_180;
              uVar4 = (int)uStack_180 + 1;
              uStack_180 = (undefined8 *)CONCAT44(uStack_180._4_4_,uVar4);
              if (uStack_180._4_4_ < uVar4) {
                FUN_14075a758(&local_188,(ulonglong)puVar14 & 0xffffffff);
              }
              local_188[lVar18] = *(undefined8 *)((longlong)puVar12 + lVar16);
            }
          }
          else if (iVar10 == 2) {
            iVar10 = (int)plVar7[1];
            if (((-1 < (longlong)iVar10) && (iVar10 < *(int *)(lVar18 + 0x418))) &&
               (lVar8 = (longlong)*(int *)(*(longlong *)(lVar18 + 0x410) + (longlong)iVar10 * 4),
               lVar8 != -1)) {
              plVar7 = (longlong *)(lVar8 * 8 + *(longlong *)(lVar18 + 0x440));
              goto LAB_1436080d6;
            }
          }
          else if (iVar10 == 0xc) {
            plVar7 = (longlong *)(lVar18 + 0x128);
            goto LAB_1436080d6;
          }
LAB_143608127:
          lVar16 = lVar16 + 8;
        } while (lVar5 * 8 != lVar16);
      }
      if (local_118 != (undefined8 *)0x0) {
        FUN_1400020a8(local_118);
      }
      local_118 = local_188;
      uStack_110 = uStack_180;
      iVar10 = (int)uStack_180;
    }
    if (iVar10 != 0) {
      FUN_147c4f35c(&local_b8);
      local_128 = 0;
      uStack_120 = 0;
      iVar10 = (int)uStack_110;
      if ((int)uStack_110 < 0) {
LAB_1436085b0:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      local_190 = 0;
      if ((int)uStack_110 != 0) {
        FUN_1401a2688(&local_128);
        local_190 = (int)uStack_110;
      }
      puVar12 = (undefined8 *)(param_1 + 0x240);
      puVar14 = &local_188;
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      local_198 = local_118;
      local_2a2 = FUN_1401f3138(local_c0);
      puVar12 = local_118;
      lVar5 = (longlong)(int)uStack_110;
      if (lVar5 != 0) {
        lVar16 = 0;
        do {
          lVar18 = *(longlong *)((longlong)puVar12 + lVar16);
          if (((lVar18 != 0) && (lVar8 = FUN_1429e0e24(lVar18), lVar8 != 0)) &&
             (1 < *(byte *)(lVar8 + 0x90))) {
            local_1a0 = *(undefined4 *)(lVar18 + 8);
            local_298 = (longlong *)CONCAT44(local_298._4_4_,local_1a0);
            iVar10 = *(int *)(lVar8 + 0x58);
            local_19c = iVar10;
            FUN_147c65436(&local_b8,&local_218,&local_1a0);
            if (*(longlong *)(local_2a0 + 0x868) != 0) {
              FUN_143608805(&local_218,lVar8);
              local_1b0 = local_e0;
              local_1a8 = local_298._0_4_;
              local_1a4 = iVar10;
              if (iVar10 != -1) {
                local_278[2] = (undefined8 *)local_208;
                local_278[0] = local_218;
                local_278[1] = puStack_210;
                local_250 = local_1f0;
                local_260 = local_200;
                uStack_25c = uStack_1fc;
                uStack_258 = uStack_1f8;
                uStack_254 = uStack_1f4;
                (**(code **)(**(longlong **)(local_2a0 + 0x868) + 0x78))
                          (*(longlong **)(local_2a0 + 0x868),&local_1b0,local_278,local_1e8 != '\0')
                ;
              }
            }
            FUN_146e1fc90(local_c0,&local_218,lVar18);
            FUN_1449437a2(&local_218,local_278,&local_188);
            uVar1 = uStack_120;
            lVar18 = (longlong)(int)uStack_120;
            uVar4 = (int)uStack_120 + 1;
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar4);
            if (uStack_120._4_4_ < uVar4) {
              FUN_144a2c682(&local_128,uVar1 & 0xffffffff);
            }
            ppuVar13 = local_278;
            puVar14 = (undefined8 *)(lVar18 * 0x60 + local_128);
            for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar14 = *ppuVar13;
              ppuVar13 = ppuVar13 + 1;
              puVar14 = puVar14 + 1;
            }
          }
          lVar16 = lVar16 + 8;
        } while (lVar5 * 8 != lVar16);
      }
      lVar5 = local_2a0;
      if (((local_2a2 == '\0') && (*(int *)(local_2a0 + 0x7b0) == *(int *)(local_2a0 + 0x7dc))) &&
         (*(int *)(local_2a0 + 0x6a8) == *(int *)(local_2a0 + 0x6d4))) {
        local_218 = *(undefined8 **)(*(longlong *)(local_2a0 + 0x850) + 0x120);
        local_288 = &local_218;
        local_280 = 1;
        FUN_146e20c4c(local_c0);
      }
      FUN_147c4f45c(&local_290);
      FUN_147c4f3ca((longlong)param_2 + 0x59e,lVar5,local_290);
      if (local_2a1 != '\0') {
        FUN_147c4f524(lVar5,&local_118);
      }
      local_218 = &local_e0;
      puStack_210 = &local_b8;
      FUN_147c64c72(lVar5 + 0x7a8,local_278,&local_218);
      FUN_146ee5d36(*(undefined8 *)(lVar5 + 0x850),&local_118);
      local_218 = (undefined8 *)0x0;
      puStack_210 = (undefined8 *)0x0;
      FUN_147c4f8c8(&local_218,&local_b8);
      FUN_147c4d618(lVar5,param_2,&local_218,&local_128);
      if (local_218 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_118 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1448635f4(local_d8);
    if (local_f8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1436083b9:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_147c5dc52(&local_b8);
LAB_143607c8b:
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436085dd FUN_1436085dd body=69 status=ok
// SIG undefined FUN_1436085dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436085dd(void)

{
  _DAT_14caf6958 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014360861f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6960,1);
  return;
}



// FUNCTION 143608622 FUN_143608622 body=69 status=ok
// SIG undefined FUN_143608622(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143608622(void)

{
  _DAT_14caf6968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143608664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6970,1);
  return;
}



// FUNCTION 143608667 FUN_143608667 body=69 status=ok
// SIG undefined FUN_143608667(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143608667(void)

{
  _DAT_14caf6978 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436086a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6980,1);
  return;
}



// FUNCTION 1436086ac FUN_1436086ac body=69 status=ok
// SIG undefined FUN_1436086ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436086ac(void)

{
  _DAT_14caf6988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436086ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf6990,1);
  return;
}



// FUNCTION 1436086f1 FUN_1436086f1 body=69 status=ok
// SIG undefined FUN_1436086f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436086f1(void)

{
  _DAT_14caf6998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143608733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf69a0,1);
  return;
}



// FUNCTION 143608736 FUN_143608736 body=69 status=ok
// SIG undefined FUN_143608736(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143608736(void)

{
  _DAT_14caf69a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143608778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf69b0,1);
  return;
}



// FUNCTION 14360877b FUN_14360877b body=69 status=ok
// SIG undefined FUN_14360877b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360877b(void)

{
  _DAT_14caf69c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436087bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf69c8,1);
  return;
}



// FUNCTION 1436087c0 FUN_1436087c0 body=69 status=ok
// SIG undefined FUN_1436087c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436087c0(void)

{
  _DAT_14caf69d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143608802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf69d8,1);
  return;
}



// FUNCTION 143608805 FUN_143608805 body=295 status=ok
// SIG undefined FUN_143608805(void)

undefined8 * FUN_143608805(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x50);
    if ((plVar1 == (longlong *)0x0) || (*(char *)((longlong)plVar1 + 0x1a) != '\x01')) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    dStack_90 = (double)*(float *)(param_2 + 0x4c);
    local_98 = (double)*(float *)(param_2 + 0x48);
    local_a8._8_4_ = SUB84((double)*(float *)(param_2 + 0x44),0);
    local_a8._0_8_ = (double)*(float *)(param_2 + 0x40);
    local_a8._12_4_ = (int)((ulonglong)(double)*(float *)(param_2 + 0x44) >> 0x20);
    local_88 = *(undefined8 *)(param_2 + 0x20);
    uStack_80 = *(undefined8 *)(param_2 + 0x28);
    local_78 = *(undefined8 *)(param_2 + 0x30);
    uStack_70 = 0;
    local_68 = 0x3ff0000000000000;
    uStack_60 = 0x3ff0000000000000;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0;
    (**(code **)(*plVar1 + 0x88))(plVar1,&local_48);
    param_1[2] = local_38;
    *param_1 = local_48;
    param_1[1] = uStack_40;
    param_1[5] = local_20;
    *(undefined4 *)(param_1 + 3) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_2c;
    *(undefined4 *)(param_1 + 4) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_24;
    *(undefined1 *)(param_1 + 6) = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14360892e FUN_14360892e body=5077 status=ok
// SIG undefined FUN_14360892e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14360892e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  void **ppvVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  undefined8 uVar13;
  void *_Src;
  char cVar14;
  int iVar15;
  longlong lVar16;
  LPVOID pvVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  PSRWLOCK pRVar21;
  undefined *puVar22;
  uint uVar23;
  longlong *plVar24;
  longlong *plVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  uint uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  longlong lVar34;
  uint uVar35;
  undefined1 *puVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  uint uVar42;
  ulonglong uVar43;
  bool bVar44;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  longlong *local_240;
  longlong local_238;
  longlong *local_230;
  PSRWLOCK local_228;
  longlong local_220;
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  longlong local_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  longlong local_1b0;
  undefined8 local_160;
  ulonglong local_158;
  ulonglong local_150;
  void *local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  longlong local_118;
  undefined8 uStack_110;
  uint local_108 [4];
  uint *local_f8;
  int local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_1[0x10a] == 0) goto LAB_1436089c6;
  lVar39 = param_1[0x16];
  if (lVar39 == 0) {
    lVar39 = FUN_1448abda6(param_1);
    if (lVar39 == 0) goto LAB_1436089c6;
    lVar39 = param_1[0x16];
    if (lVar39 == 0) {
      lVar39 = FUN_1448abda6(param_1);
    }
  }
  lVar39 = *(longlong *)(lVar39 + 0x260);
  if (lVar39 == 0) goto LAB_1436089c6;
  cVar14 = FUN_147c4dfa2(param_1);
  local_220 = param_1[0x10a];
  plVar25 = param_1;
  local_230 = param_1;
  if (cVar14 != '\0') {
    if (*(longlong *)(local_220 + 0x128) == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = *(char *)(*(longlong *)(local_220 + 0x128) + 0x1ac);
    }
    cVar12 = *(char *)(local_220 + 0x130);
    if ((((char)param_1[0x101] != cVar14) || (*(char *)((longlong)param_1 + 0x809) != cVar12)) ||
       (DAT_14caf69b8 == '\0')) {
      if ((DAT_14c761721 == '\x01') && (param_1[0x15] != 0)) {
        FUN_14103d96c();
      }
      plVar25 = local_230;
      *(ushort *)(param_1 + 0x101) = CONCAT11(cVar12,cVar14);
      uVar27 = param_1[7];
      if (uVar27 < 0xffffffff00000000) {
        plVar24 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar24 = (longlong *)0x0;
        }
        (**(code **)(*plVar24 + 0x58))(plVar24,local_230,uVar27,0x11);
      }
      else {
        uVar31 = (uint)uVar27;
        plVar25 = param_1;
        if ((-1 < (int)uVar31) && ((int)uVar31 < DAT_14c998088)) {
          puVar22 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar22 = DAT_14c998080;
          }
          if ((*(uint *)(puVar22 + ((uint)(uVar27 >> 3) & 0xffffffc)) >> (uVar31 & 0x1f) & 1) != 0)
          {
            lVar32 = DAT_14c998060 + (ulonglong)(uVar31 & 0x7fffffff) * 0x68;
            puVar18 = *(uint **)(lVar32 + 0x18);
            if (*(uint **)(lVar32 + 0x18) == (uint *)0x0) {
              puVar18 = (uint *)(lVar32 + 8);
            }
            *puVar18 = *puVar18 | 0x20000;
            *(byte *)(lVar32 + 0x60) = *(byte *)(lVar32 + 0x60) | 1;
          }
        }
      }
      local_220 = plVar25[0x10a];
    }
  }
  lVar32 = local_220;
  local_148 = (void *)0x0;
  uStack_140 = 0;
  if (*(char *)(local_220 + 0x131) == '\x01') {
    iVar15 = *(int *)(local_220 + 0x140);
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    if (iVar15 != 0) {
      FUN_146e2d5bc(&local_148);
    }
  }
  local_240 = plVar25 + 0xff;
  FUN_147c50d62();
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  if (DAT_14c76171b == '\x01') {
    uVar31 = (int)plVar25[0xd5] - *(int *)((longlong)plVar25 + 0x6d4);
    if (uVar31 != 0) {
      if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar31);
      }
      FUN_147c6661e(&local_118);
      iVar15 = 1;
      if (3 < uVar31) {
        uVar31 = (uVar31 | 1) + 0xe;
        iVar15 = 0x1f;
        if (uVar31 != 0) {
          for (; uVar31 >> iVar15 == 0; iVar15 = iVar15 + -1) {
          }
        }
        iVar15 = 1 << ((byte)iVar15 & 0x1f);
      }
      if ((local_d0 == 0) || (local_d0 < iVar15)) {
        local_d0 = iVar15;
        FUN_147c667d6();
      }
    }
  }
  lVar16 = plVar25[0x16];
  if (lVar16 == 0) {
    lVar16 = FUN_1448abda6(plVar25);
  }
  local_138 = local_138 & 0xffffffffffffff00;
  local_210 = param_3;
  local_208 = param_2;
  if (*(longlong *)(lVar16 + 0x260) == 0) {
    uStack_130 = 0;
    local_128 = 0;
  }
  else {
    uStack_130 = *(ulonglong *)(*(longlong *)(lVar16 + 0x260) + 0x38);
    local_128 = 0;
    if (uStack_130 != 0) {
      pRVar21 = *(PSRWLOCK *)(uStack_130 + 0x218);
      pvVar17 = TlsGetValue(*(DWORD *)&pRVar21[1].Ptr);
      TlsSetValue(*(DWORD *)&pRVar21[1].Ptr,
                  (LPVOID)((ulonglong)pvVar17 & 0xffffffff00000000 | (ulonglong)((int)pvVar17 + 1)))
      ;
      if ((int)pvVar17 + (int)((ulonglong)pvVar17 >> 0x20) == 0) {
        AcquireSRWLockShared(pRVar21);
      }
      local_138 = CONCAT71(local_138._1_7_,1);
    }
  }
  if ((longlong)*(int *)(lVar32 + 0x140) != 0) {
    lVar16 = *(longlong *)(lVar32 + 0x138);
    lVar41 = (longlong)*(int *)(lVar32 + 0x140) * 0x90 + lVar16;
    local_218 = plVar25 + 0xdb;
    local_228 = (PSRWLOCK)(lVar39 + 0x280);
    do {
      uVar27 = *(ulonglong *)(lVar16 + 0x70);
      pRVar21 = (PSRWLOCK)0x0;
      if (DAT_14c992a90 != '\0') {
        pRVar21 = local_228;
      }
      if (pRVar21 != (PSRWLOCK)0x0) {
        AcquireSRWLockShared(pRVar21);
      }
      if (*(int *)(lVar39 + 0x2b0) != *(int *)(lVar39 + 0x2dc)) {
        uVar31 = ((uint)(uVar27 >> 0x14) & 0xffff ^ (uint)(uVar27 >> 4)) * -0x7a143595;
        uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
        lVar29 = *(longlong *)(lVar39 + 0x2e8);
        if (*(longlong *)(lVar39 + 0x2e8) == 0) {
          lVar29 = lVar39 + 0x2e0;
        }
        iVar15 = *(int *)(lVar29 + (ulonglong)
                                   (*(int *)(lVar39 + 0x2f0) - 1U & (uVar31 >> 0x10 ^ uVar31)) * 4);
        if (iVar15 != -1) {
          do {
            puVar2 = (ulonglong *)(*(longlong *)(lVar39 + 0x2a8) + (longlong)iVar15 * 0x18);
            if (*puVar2 == uVar27) {
              if (puVar2 != (ulonglong *)0x0) {
                uVar27 = 0;
                if (puVar2 + 1 != (ulonglong *)0x0) {
                  uVar27 = puVar2[1];
                }
                goto LAB_143608e0c;
              }
              break;
            }
            iVar15 = (int)puVar2[2];
          } while (iVar15 != -1);
        }
      }
      uVar27 = 0;
LAB_143608e0c:
      if (pRVar21 != (PSRWLOCK)0x0) {
        ReleaseSRWLockShared(pRVar21);
      }
      local_150 = uVar27;
      if ((uVar27 == 0) || (uVar27 != *(ulonglong *)(lVar16 + 0x78))) {
        if (*(char *)(lVar32 + 0x131) == '\x01') {
          lVar29 = (longlong)(int)uStack_140;
          uVar31 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar31);
          if (uStack_140._4_4_ < uVar31) {
            FUN_146e2d61c(&local_148);
          }
          *(undefined8 *)((longlong)local_148 + lVar29 * 8) = 0;
        }
        iVar15 = (int)plVar25[0x100];
        *(uint *)(plVar25 + 0x100) = iVar15 + 1U;
        if (*(uint *)((longlong)plVar25 + 0x804) < iVar15 + 1U) {
          FUN_147c6707a(local_240);
        }
        lVar29 = *local_240;
        puVar30 = (undefined8 *)(lVar29 + (longlong)iVar15 * 0x18);
        *puVar30 = 0;
        puVar30[1] = 0;
        *(undefined4 *)(lVar29 + 0x10 + (longlong)iVar15 * 0x18) = 0;
      }
      else {
        local_160 = 0;
        uVar31 = *(uint *)(uVar27 + 0xc);
        if ((int)uVar31 < DAT_14c9647dc) {
          lVar32 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8);
        }
        else {
          lVar32 = 0;
        }
        uVar28 = *(uint *)(lVar32 + 0x10);
        if (*(uint *)(lVar32 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          uVar23 = DAT_14c964868 + 1;
          bVar44 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar44) {
            local_238 = CONCAT44(local_238._4_4_,uVar23);
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar23);
            uVar23 = (uint)local_238;
          }
          LOCK();
          uVar28 = *(uint *)(lVar32 + 0x10);
          bVar44 = uVar28 == 0;
          if (bVar44) {
            *(uint *)(lVar32 + 0x10) = uVar23;
            uVar28 = 0;
          }
          UNLOCK();
          if (bVar44) {
            uVar28 = uVar23;
          }
        }
        iVar26 = local_e4;
        local_160 = CONCAT44(uVar28,uVar31);
        iVar15 = (int)uStack_110;
        uVar31 = uVar28 >> 0xd ^ uVar31 - uVar28;
        uVar23 = uVar31 << 8 ^ (-0x61c88647 - uVar28) - uVar31;
        uVar35 = uVar23 >> 0xd ^ (uVar28 - uVar31) - uVar23;
        uVar31 = uVar35 >> 0xc ^ (uVar31 - uVar23) - uVar35;
        uVar28 = uVar31 << 0x10 ^ (uVar23 - uVar35) - uVar31;
        uVar35 = uVar28 >> 5 ^ (uVar35 - uVar31) - uVar28;
        uVar23 = uVar35 >> 3 ^ (uVar31 - uVar28) - uVar35;
        uVar31 = uVar23 << 10 ^ (uVar28 - uVar35) - uVar23;
        local_158 = uVar27;
        local_238 = FUN_147c6699e(&local_118,uVar31 >> 0xf ^ uVar35 - (uVar23 + uVar31),&local_160);
        lVar32 = local_220;
        if (((DAT_14c76171b == '\x01') && (iVar15 - iVar26 < (int)uStack_110 - local_e4)) &&
           ((int)plVar25[0xd5] != *(int *)((longlong)plVar25 + 0x6d4))) {
          uVar28 = local_160._4_4_ >> 0xd ^ (int)local_160 - local_160._4_4_;
          uVar31 = uVar28 << 8 ^ (-0x61c88647 - local_160._4_4_) - uVar28;
          uVar23 = uVar31 >> 0xd ^ (local_160._4_4_ - uVar28) - uVar31;
          uVar35 = uVar23 >> 0xc ^ (uVar28 - uVar31) - uVar23;
          uVar28 = uVar35 << 0x10 ^ (uVar31 - uVar23) - uVar35;
          uVar31 = uVar28 >> 5 ^ (uVar23 - uVar35) - uVar28;
          uVar23 = uVar31 >> 3 ^ (uVar35 - uVar28) - uVar31;
          uVar28 = uVar23 << 10 ^ (uVar28 - uVar31) - uVar23;
          plVar24 = (longlong *)plVar25[0xdc];
          if ((longlong *)plVar25[0xdc] == (longlong *)0x0) {
            plVar24 = local_218;
          }
          iVar15 = *(int *)((longlong)plVar24 +
                           (ulonglong)
                           ((int)plVar25[0xdd] - 1U & (uVar28 >> 0xf ^ uVar31 - (uVar23 + uVar28)))
                           * 4);
          if (iVar15 != -1) {
            lVar29 = plVar25[0xd4];
            do {
              lVar34 = (longlong)iVar15 * 0x38;
              lVar3 = lVar29 + lVar34;
              if ((*(int *)(lVar29 + lVar34) == (int)local_160) &&
                 (*(uint *)(lVar29 + 4 + lVar34) == local_160._4_4_)) {
                if (((lVar3 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar3 + 0x10) != 0)) {
                  iVar15 = (int)((float)*(int *)(lVar3 + 0x10) * _DAT_14c76171c);
                  if (iVar15 < 0) goto LAB_143609cc8;
                  if (*(int *)(local_238 + 0xa4) < iVar15) {
                    FUN_147c66dd4(local_238);
                  }
                }
                break;
              }
              iVar15 = *(int *)(lVar3 + 0x30);
            } while (iVar15 != -1);
          }
        }
        plVar24 = (longlong *)
                  (**(code **)(*(longlong *)(local_150 + 0x2b8) + 0x10))
                            (local_150 + 0x2b8,*(undefined4 *)(lVar16 + 0x80));
        if (((plVar24 == (longlong *)0x0) || (lVar29 = FUN_1429e0e24(), lVar29 == 0)) ||
           (*(byte *)(lVar29 + 0x90) < 2)) {
          lVar29 = 0;
        }
        uVar27 = uStack_140;
        if (*(char *)(lVar32 + 0x131) == '\x01') {
          lVar32 = (longlong)(int)uStack_140;
          uVar31 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar31);
          if (uStack_140._4_4_ < uVar31) {
            FUN_146e2d61c(&local_148,uVar27 & 0xffffffff);
          }
          *(longlong *)((longlong)local_148 + lVar32 * 8) = lVar29;
        }
        iStack_1d8 = -1;
        if (lVar29 != 0) {
          iStack_1d8 = *(int *)(lVar29 + 0x58);
        }
        puVar30 = (undefined8 *)(lVar16 + 0x10);
        puVar33 = &uStack_1c8;
        for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
          *puVar33 = *puVar30;
          puVar30 = puVar30 + 1;
          puVar33 = puVar33 + 1;
        }
        local_1e8 = plVar24;
        local_1e0 = lVar29;
        FUN_147c66ed2(local_238,(undefined4 *)(lVar16 + 0x80),&local_1e8);
        FUN_147c50d8c(&local_200,&local_150);
        local_1f0 = *(undefined4 *)(lVar16 + 0x80);
        iVar15 = (int)plVar25[0x100];
        *(uint *)(plVar25 + 0x100) = iVar15 + 1U;
        if (*(uint *)((longlong)plVar25 + 0x804) < iVar15 + 1U) {
          FUN_147c6707a(local_240,iVar15);
        }
        lVar32 = *local_240;
        *(ulonglong *)(lVar32 + 0x10 + (longlong)iVar15 * 0x18) = CONCAT44(uStack_1ec,local_1f0);
        puVar4 = (undefined4 *)(lVar32 + (longlong)iVar15 * 0x18);
        *puVar4 = local_200;
        puVar4[1] = uStack_1fc;
        puVar4[2] = uStack_1f8;
        puVar4[3] = uStack_1f4;
        lVar32 = local_220;
      }
      lVar16 = lVar16 + 0x90;
    } while (lVar16 != lVar41);
  }
  FUN_1448635f4(&local_138);
  _Src = local_148;
  uVar13 = local_210;
  if (*(char *)(lVar32 + 0x131) != '\0') {
    lVar39 = plVar25[0x10a];
    ppvVar1 = (void **)(lVar39 + 0x160);
    if (ppvVar1 != &local_148) {
      iVar15 = (int)uStack_140;
      lVar32 = (longlong)(int)uStack_140;
      *(int *)(lVar39 + 0x168) = (int)uStack_140;
      if ((int)uStack_140 == 0 && *(int *)(lVar39 + 0x16c) == 0) {
        *(undefined4 *)(lVar39 + 0x16c) = 0;
      }
      else {
        FUN_146eed0bc(ppvVar1);
        if (iVar15 != 0) {
          memcpy(*ppvVar1,_Src,lVar32 << 3);
        }
      }
    }
  }
  iVar15 = local_f0;
  if (local_f0 == 0) {
    uVar43 = 1;
    uVar27 = 0;
    iVar26 = 0;
    iVar38 = 0;
  }
  else {
    puVar18 = local_f8;
    if (local_f8 == (uint *)0x0) {
      puVar18 = local_108;
    }
    uVar31 = *puVar18;
    if (uVar31 == 0) {
      iVar26 = local_f0 + 0x1e;
      if (-1 < local_f0 + -1) {
        iVar26 = local_f0 + -1;
      }
      uVar27 = 0;
      uVar40 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar40 = uVar27;
      }
      iVar26 = 0;
      do {
        if (uVar40 == uVar27) goto LAB_143609397;
        iVar26 = iVar26 + 0x20;
        uVar31 = puVar18[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar31 == 0);
    }
    else {
      uVar27 = 0;
      iVar26 = 0;
    }
    uVar43 = (ulonglong)(-uVar31 & uVar31);
    uVar40 = uVar43 * 2 + 1;
    lVar39 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    iVar38 = (iVar26 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
    if (local_f0 <= iVar38) {
      iVar38 = local_f0;
    }
  }
  if (iVar38 != local_f0) {
    uVar31 = 0xffffffff;
    do {
      local_248 = uVar13;
      FUN_147c50dd6(plVar25,local_118 + (longlong)iVar38 * 0xd0,
                    local_118 + (longlong)iVar38 * 0xd0 + 0x10,local_208);
      uVar31 = ~(uint)uVar43 & uVar31;
      puVar18 = local_f8;
      if (local_f8 == (uint *)0x0) {
        puVar18 = local_108;
      }
      iVar38 = (int)uVar27;
      lVar39 = (longlong)iVar38;
      uVar28 = puVar18[lVar39] & uVar31;
      if (uVar28 == 0) {
        iVar19 = local_f0 + 0x1e;
        if (-1 < local_f0 + -1) {
          iVar19 = local_f0 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar26 = iVar26 + 0x20;
        iVar20 = iVar19;
        if (iVar19 < iVar38) {
          iVar20 = iVar38;
        }
        if (iVar38 < iVar19) {
          lVar32 = 0;
          do {
            uVar28 = puVar18[lVar39 + lVar32 + 1];
            if (uVar28 != 0) {
              uVar27 = (ulonglong)(iVar38 + (int)lVar32 + 1);
              uVar31 = 0xffffffff;
              goto LAB_14360986b;
            }
            iVar26 = iVar26 + 0x20;
            lVar32 = lVar32 + 1;
          } while (iVar20 - lVar39 != lVar32);
          uVar31 = 0xffffffff;
          lVar39 = (longlong)iVar20;
        }
        uVar27 = lVar39 + 1U & 0xffffffff;
        plVar25 = local_230;
        iVar38 = local_f0;
      }
      else {
LAB_14360986b:
        uVar43 = (ulonglong)(-uVar28 & uVar28);
        uVar40 = uVar43 * 2 + 1;
        lVar39 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar39 == 0; lVar39 = lVar39 + -1) {
          }
        }
        iVar38 = (iVar26 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
        if (local_f0 <= iVar38) {
          iVar38 = local_f0;
        }
      }
    } while (iVar38 != iVar15);
  }
LAB_143609397:
  local_240 = plVar25 + 0xd4;
  local_228 = (PSRWLOCK)(plVar25 + 0xd6);
  iVar15 = (int)plVar25[0xd9];
  if (iVar15 == 0) {
    uVar43 = 1;
    uVar27 = 0;
    iVar26 = 0;
    iVar38 = 0;
  }
  else {
    pRVar21 = (PSRWLOCK)plVar25[0xd8];
    if ((PSRWLOCK)plVar25[0xd8] == (PSRWLOCK)0x0) {
      pRVar21 = local_228;
    }
    uVar31 = *(uint *)&pRVar21->Ptr;
    if (uVar31 == 0) {
      iVar26 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar26 = iVar15 + -1;
      }
      uVar27 = 0;
      uVar40 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar40 = uVar27;
      }
      iVar26 = 0;
      do {
        if (uVar40 == uVar27) goto LAB_14360962c;
        iVar26 = iVar26 + 0x20;
        uVar31 = *(uint *)((longlong)&pRVar21->Ptr + uVar27 * 4 + 4);
        uVar27 = uVar27 + 1;
      } while (uVar31 == 0);
    }
    else {
      uVar27 = 0;
      iVar26 = 0;
    }
    uVar43 = (ulonglong)(-uVar31 & uVar31);
    uVar40 = uVar43 * 2 + 1;
    lVar39 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    iVar38 = (iVar26 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar38) {
      iVar38 = iVar15;
    }
  }
  if (iVar38 < iVar15) {
    uVar31 = 0xffffffff;
    do {
      uVar13 = *(undefined8 *)(*local_240 + (longlong)iVar38 * 0x38);
      if ((int)uStack_110 != local_e4) {
        uVar23 = (uint)((ulonglong)uVar13 >> 0x20);
        uVar37 = uVar23 >> 0xd ^ (int)uVar13 - uVar23;
        uVar35 = uVar37 << 8 ^ (-0x61c88647 - uVar37) - uVar23;
        uVar28 = uVar35 >> 0xd ^ (uVar23 - uVar37) - uVar35;
        uVar42 = uVar28 >> 0xc ^ (uVar37 - uVar35) - uVar28;
        uVar37 = uVar42 << 0x10 ^ (uVar35 - uVar28) - uVar42;
        uVar35 = uVar37 >> 5 ^ (uVar28 - uVar42) - uVar37;
        uVar28 = uVar35 >> 3 ^ (uVar42 - uVar37) - uVar35;
        uVar37 = uVar28 << 10 ^ (uVar37 - uVar35) - uVar28;
        puVar36 = local_d8;
        if (local_d8 == (undefined1 *)0x0) {
          puVar36 = local_e0;
        }
        iVar19 = *(int *)(puVar36 +
                         (ulonglong)(local_d0 - 1U & (uVar37 >> 0xf ^ uVar35 - (uVar28 + uVar37))) *
                         4);
        while (plVar25 = local_230, iVar19 != -1) {
          lVar39 = (longlong)iVar19 * 0xd0;
          if ((*(int *)(local_118 + lVar39) == (int)uVar13) &&
             (*(uint *)(local_118 + 4 + lVar39) == uVar23)) goto LAB_143609592;
          iVar19 = *(int *)(lVar39 + local_118 + 0xc0);
        }
      }
      FUN_147c506d2(plVar25,uVar13,(longlong)iVar38 * 0x38 + *local_240 + 8);
      FUN_147c65e44(local_240,iVar38);
      iVar15 = (int)plVar25[0xd9];
LAB_143609592:
      uVar31 = uVar31 & ~(uint)uVar43;
      pRVar21 = (PSRWLOCK)plVar25[0xd8];
      if ((PSRWLOCK)plVar25[0xd8] == (PSRWLOCK)0x0) {
        pRVar21 = local_228;
      }
      iVar38 = (int)uVar27;
      lVar39 = (longlong)iVar38;
      uVar28 = *(uint *)((longlong)&pRVar21->Ptr + lVar39 * 4) & uVar31;
      if (uVar28 == 0) {
        iVar19 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar19 = iVar15 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar20 = iVar19;
        if (iVar19 < iVar38) {
          iVar20 = iVar38;
        }
        if (iVar19 <= iVar38) break;
        lVar32 = 0;
        while( true ) {
          iVar26 = iVar26 + 0x20;
          uVar28 = *(uint *)((longlong)&pRVar21->Ptr + lVar32 * 4 + lVar39 * 4 + 4);
          if (uVar28 != 0) break;
          lVar32 = lVar32 + 1;
          if (iVar20 - lVar39 == lVar32) goto LAB_14360962c;
        }
        uVar27 = (ulonglong)(iVar38 + (int)lVar32 + 1);
        uVar31 = 0xffffffff;
      }
      uVar43 = (ulonglong)(-uVar28 & uVar28);
      uVar40 = uVar43 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      iVar38 = (iVar26 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
    } while (iVar38 < iVar15);
  }
LAB_14360962c:
  dVar5 = (double)plVar25[0x102];
  dVar6 = (double)plVar25[0x103];
  dVar7 = (double)plVar25[0x104];
  dVar8 = (double)plVar25[0x105];
  dVar9 = (double)plVar25[0x106];
  dVar10 = (double)plVar25[0x107];
  dVar11 = (double)plVar25[0x108];
  *(undefined1 *)((longlong)plVar25 + 0x80a) = 0;
  (**(code **)(*plVar25 + 0x540))(plVar25);
  if (((((9.999999747378752e-05 < ABS(dVar5 - (double)plVar25[0x102])) ||
        (9.999999747378752e-05 < ABS(dVar6 - (double)plVar25[0x103]))) ||
       (9.999999747378752e-05 < ABS(dVar7 - (double)plVar25[0x104]))) ||
      ((9.999999747378752e-05 < ABS(dVar8 - (double)plVar25[0x105]) ||
       (9.999999747378752e-05 < ABS(dVar9 - (double)plVar25[0x106]))))) ||
     ((9.999999747378752e-05 < ABS(dVar10 - (double)plVar25[0x107]) ||
      (9.999999747378752e-05 <= ABS(dVar11 - (double)plVar25[0x108]))))) {
    local_1e0 = plVar25[0x102];
    iStack_1d8 = (int)plVar25[0x103];
    uStack_1d4 = *(undefined4 *)((longlong)plVar25 + 0x81c);
    local_1d0 = (undefined4)plVar25[0x104];
    uStack_1cc = *(undefined4 *)((longlong)plVar25 + 0x824);
    uStack_1c8._0_4_ = (undefined4)plVar25[0x105];
    uStack_1c8._4_4_ = *(undefined4 *)((longlong)plVar25 + 0x82c);
    local_1c0 = (undefined4)plVar25[0x106];
    uStack_1bc = *(undefined4 *)((longlong)plVar25 + 0x834);
    uStack_1b8 = (undefined4)plVar25[0x107];
    uStack_1b4 = *(undefined4 *)((longlong)plVar25 + 0x83c);
    local_1b0 = plVar25[0x108];
    local_1e8 = plVar25;
    FUN_1447cd2ec(plVar25 + 0xc9);
  }
  if ((longlong)(int)plVar25[0xd2] != 0) {
    lVar39 = 0;
    do {
      if ((*(int *)(plVar25[0xd1] + 8 + lVar39) != 0) &&
         (*(longlong *)(plVar25[0xd1] + lVar39) != 0)) {
        local_138 = 0;
        uStack_130 = 0;
        iVar15 = (int)plVar25[0xd5] - *(int *)((longlong)plVar25 + 0x6d4);
        if (iVar15 < 0) {
LAB_143609cc8:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar15);
        }
        local_230 = plVar25 + 0xd1;
        if (iVar15 != 0) {
          FUN_140ec0d20();
        }
        iVar15 = (int)plVar25[0xd9];
        if (iVar15 == 0) {
          uVar40 = 1;
          uVar27 = 0;
          iVar38 = 0;
          iVar26 = 0;
          goto LAB_14360997c;
        }
        pRVar21 = (PSRWLOCK)plVar25[0xd8];
        if ((PSRWLOCK)plVar25[0xd8] == (PSRWLOCK)0x0) {
          pRVar21 = local_228;
        }
        uVar31 = *(uint *)&pRVar21->Ptr;
        if (uVar31 != 0) {
          uVar27 = 0;
          iVar38 = 0;
          goto LAB_143609957;
        }
        iVar26 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar26 = iVar15 + -1;
        }
        uVar27 = 0;
        uVar40 = (ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          uVar40 = uVar27;
        }
        iVar38 = 0;
        goto LAB_14360993d;
      }
      lVar39 = lVar39 + 0x10;
    } while ((longlong)(int)plVar25[0xd2] * 0x10 != lVar39);
  }
  goto LAB_143609be4;
  while( true ) {
    iVar38 = iVar38 + 0x20;
    uVar31 = *(uint *)((longlong)&pRVar21->Ptr + uVar27 * 4 + 4);
    uVar27 = uVar27 + 1;
    if (uVar31 != 0) break;
LAB_14360993d:
    if (uVar40 == uVar27) goto LAB_143609b3b;
  }
LAB_143609957:
  uVar40 = (ulonglong)(-uVar31 & uVar31);
  uVar43 = uVar40 * 2 + 1;
  lVar39 = 0x3f;
  if (uVar43 != 0) {
    for (; uVar43 >> lVar39 == 0; lVar39 = lVar39 + -1) {
    }
  }
  iVar26 = (iVar38 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
  if (iVar15 <= iVar26) {
    iVar26 = iVar15;
  }
LAB_14360997c:
  if (iVar26 < iVar15) {
    uVar31 = 0xffffffff;
    do {
      iVar15 = *(int *)(*local_240 + 4 + (longlong)iVar26 * 0x38);
      if (iVar15 == 0) {
LAB_143609b31:
        bVar44 = false;
        lVar39 = 0;
      }
      else {
        uVar28 = *(uint *)(*local_240 + (longlong)iVar26 * 0x38);
        lVar39 = 0;
        bVar44 = false;
        if ((-1 < (int)uVar28) && ((int)uVar28 < DAT_14c9647dc)) {
          plVar24 = (longlong *)
                    ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8));
          if ((plVar24 == (longlong *)0x0) ||
             (((int)plVar24[2] != iVar15 || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0))))
          goto LAB_143609b31;
          lVar39 = *plVar24;
          bVar44 = lVar39 != 0;
          if ((bVar44) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar39);
            bVar44 = true;
          }
        }
      }
      uVar43 = uStack_130;
      lVar32 = (longlong)(int)uStack_130;
      uVar28 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar28);
      if (uStack_130._4_4_ < uVar28) {
        FUN_140e402be(&local_138,uVar43 & 0xffffffff);
      }
      *(longlong *)(local_138 + lVar32 * 8) = lVar39;
      if ((bVar44 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar39);
      }
      uVar31 = uVar31 & ~(uint)uVar40;
      pRVar21 = (PSRWLOCK)plVar25[0xd8];
      if ((PSRWLOCK)plVar25[0xd8] == (PSRWLOCK)0x0) {
        pRVar21 = local_228;
      }
      iVar15 = (int)plVar25[0xd9];
      iVar26 = (int)uVar27;
      lVar39 = (longlong)iVar26;
      uVar28 = *(uint *)((longlong)&pRVar21->Ptr + lVar39 * 4) & uVar31;
      if (uVar28 == 0) {
        iVar19 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar19 = iVar15 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar20 = iVar19;
        if (iVar19 < iVar26) {
          iVar20 = iVar26;
        }
        if (iVar19 <= iVar26) break;
        lVar32 = 0;
        while( true ) {
          iVar38 = iVar38 + 0x20;
          uVar28 = *(uint *)((longlong)&pRVar21->Ptr + lVar32 * 4 + lVar39 * 4 + 4);
          if (uVar28 != 0) break;
          lVar32 = lVar32 + 1;
          if (iVar20 - lVar39 == lVar32) goto LAB_143609b3b;
        }
        uVar27 = (ulonglong)(iVar26 + (int)lVar32 + 1);
        uVar31 = 0xffffffff;
      }
      uVar40 = (ulonglong)(-uVar28 & uVar28);
      uVar43 = uVar40 * 2 + 1;
      lVar39 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      iVar26 = (iVar38 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
    } while (iVar26 < iVar15);
  }
LAB_143609b3b:
  local_1e8 = plVar25;
  if ((plVar25 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar25);
  }
  uVar40 = uStack_130;
  uVar27 = local_138;
  local_1e0 = 0;
  iStack_1d8 = (int)uStack_130;
  if ((int)uStack_130 == 0) {
    uStack_1d4 = 0;
  }
  else {
    FUN_147c5db9c(&local_1e0,uStack_130 & 0xffffffff,0);
    FUN_147c5dbfe(local_1e0,uVar27,uVar40 & 0xffffffff);
  }
  FUN_147c6710e(local_230,&local_1e8);
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_143609be4:
  local_d0 = 0;
  if (local_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_147c5fb8c(&local_118);
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1436089c6:
  if ((local_c0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143609d04 FUN_143609d04 body=455 status=ok
// SIG undefined FUN_143609d04(void)

bool FUN_143609d04(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined4 param_5,longlong param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  code **local_e8;
  code **local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_a9;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1447c0da8(param_2,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x868);
  if (lVar2 == 0) {
    local_88 = (code *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x40,8);
    *local_78 = (longlong)&PTR_FUN_14aa1e130;
    local_78[1] = (longlong)param_3;
    local_78[2] = (longlong)param_4;
    *(undefined4 *)(local_78 + 3) = param_5;
    local_78[4] = param_6;
    local_78[5] = param_7;
    local_78[6] = param_8;
    local_78[7] = param_2;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88 = FUN_143624a00;
    }
    local_e0 = &local_88;
    FUN_147c5203c(param_1,param_5,param_6);
    if (local_88 != (code *)0x0) {
      plVar3 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar3 = local_68;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
      lVar2 = *(longlong *)(param_1 + 0x868);
    }
    local_c0 = &local_90;
    local_88 = (code *)*param_4;
    uStack_80 = param_4[1];
    local_e8 = &local_88;
    local_78 = (longlong *)param_4[2];
    local_a8 = *param_3;
    uStack_a4 = param_3[1];
    uStack_a0 = param_3[2];
    uStack_9c = param_3[3];
    local_98 = *(undefined8 *)(param_3 + 4);
    local_c8 = param_8;
    local_d0 = param_7;
    local_d8 = param_6;
    local_e0 = (code **)CONCAT44(local_e0._4_4_,param_5);
    local_90 = lVar2;
    FUN_1479b324d(lVar1,param_2,&local_a9);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return *(int *)(param_2 + 8) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


