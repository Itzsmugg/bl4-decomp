// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1444a9cf2 FUN_1444a9cf2 body=1086 status=ok
// SIG undefined FUN_1444a9cf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444a9cf2(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  undefined1 local_2a0;
  undefined1 local_298;
  undefined1 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar6 = *param_2;
  if (*(char *)(lVar6 + 0x10) == '\x01') {
    plVar1 = (longlong *)*param_1;
    local_f8[0] = 1;
    FUN_1491d5112(&local_100,lVar6 + 0x14);
    local_10c = 4;
    local_108 = local_100;
    uVar3 = FUN_140813180(plVar1[0x5f]);
    if (*(byte *)(plVar1 + 0x15c) < 2) {
      lVar5 = plVar1[0x5f];
      if (((((int)uVar3 < 0) || (*(int *)(lVar5 + 0xc0) <= (int)uVar3)) ||
          (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar3 * 8), lVar4 == 0))
         || (*(char *)(lVar4 + 0x10) != '\x04')) {
        lVar4 = 0;
      }
      FUN_1401261c4(lVar5,&local_178,lVar4,0);
      FUN_1401571e4(plVar1[0x5f],&local_1d8,lVar6,1);
      FUN_1449437a2(&local_1d8,local_238,&local_178);
      dVar11 = (double)local_228._0_8_ * (double)local_228._0_8_ +
               (double)local_238._0_8_ * (double)local_238._0_8_;
      dVar14 = (double)local_228._8_8_ * (double)local_228._8_8_ +
               (double)local_238._8_8_ * (double)local_238._8_8_;
      auVar12._0_8_ = dVar11 + dVar14;
      auVar12._8_8_ = dVar11 + dVar14;
      uVar7 = -(ulonglong)(1e-08 <= auVar12._8_8_);
      auVar13 = sqrtpd(auVar12,auVar12);
      auVar13 = divpd(_DAT_149934d80,auVar13);
      auVar16._0_8_ = auVar13._0_8_ * (double)local_228._0_8_;
      auVar16._8_8_ = auVar13._8_8_ * (double)local_228._8_8_;
      uVar2 = (ulonglong)((double)local_238._0_8_ * auVar13._0_8_) &
              -(ulonglong)(1e-08 <= auVar12._0_8_);
      uVar8 = (ulonglong)((double)local_238._8_8_ * auVar13._8_8_) & uVar7;
      uVar9 = (undefined4)uVar8;
      uVar10 = (undefined4)(uVar8 >> 0x20);
      auVar17._8_4_ = (int)uVar7;
      auVar17._0_8_ = -(ulonglong)(1e-08 <= auVar12._0_8_);
      auVar17._12_4_ = (int)(uVar7 >> 0x20);
      local_228 = blendvpd(_DAT_149935300,auVar16,auVar17);
      local_238._8_4_ = uVar9;
      local_238._0_8_ = uVar2;
      local_238._12_4_ = uVar10;
      lVar6 = param_1[1];
      local_288 = local_218;
      dStack_280 = dStack_210;
      local_278 = local_208;
      fStack_f0 = (float)uVar9;
      local_f8 = (undefined1  [8])uVar2;
      fStack_ec = (float)uVar10;
      _local_e8 = local_228;
      FUN_1448052ee(local_f8,&local_270);
      local_f8._4_4_ = (float)local_268;
      local_f8._0_4_ = (float)local_270;
      fStack_f0 = (float)local_260;
      fStack_ec = (float)local_288;
      local_e8._4_4_ = (float)local_278;
      local_e8._0_4_ = (float)dStack_280;
      fStack_e0 = (float)local_1f8;
      fStack_dc = (float)local_1f0;
      lVar5 = *plVar1;
    }
    else {
      if (*(byte *)(plVar1 + 0x15c) != 2) goto LAB_1444a9d39;
      FUN_1401571e4(plVar1[0x5f],&local_178,lVar6,1);
      dVar11 = local_168 * local_168 + local_178 * local_178;
      dVar14 = dStack_160 * dStack_160 + dStack_170 * dStack_170;
      auVar15._0_8_ = dVar11 + dVar14;
      auVar15._8_8_ = dVar11 + dVar14;
      uVar8 = -(ulonglong)(1e-08 <= auVar15._8_8_);
      auVar13 = sqrtpd(auVar15,auVar15);
      auVar17 = divpd(_DAT_149934d80,auVar13);
      auVar18._0_8_ = auVar17._0_8_ * local_168;
      auVar18._8_8_ = auVar17._8_8_ * dStack_160;
      uVar2 = (ulonglong)(dStack_170 * auVar17._8_8_) & uVar8;
      auVar13._8_4_ = (int)uVar8;
      auVar13._0_8_ = -(ulonglong)(1e-08 <= auVar15._0_8_);
      auVar13._12_4_ = (int)(uVar8 >> 0x20);
      _local_e8 = blendvpd(_DAT_149935300,auVar18,auVar13);
      lVar6 = param_1[1];
      local_1d8 = local_158;
      dStack_1d0 = dStack_150;
      local_1c8 = local_148;
      fStack_f0 = (float)(int)uVar2;
      local_f8 = (undefined1  [8])
                 ((ulonglong)(local_178 * auVar17._0_8_) & -(ulonglong)(1e-08 <= auVar15._0_8_));
      fStack_ec = (float)(int)(uVar2 >> 0x20);
      FUN_1448052ee(local_f8,&local_1c0);
      local_f8._4_4_ = (float)local_1b8;
      local_f8._0_4_ = (float)local_1c0;
      fStack_f0 = (float)local_1b0;
      fStack_ec = (float)local_1d8;
      local_e8._4_4_ = (float)local_1c8;
      local_e8._0_4_ = (float)dStack_1d0;
      fStack_e0 = (float)local_138;
      fStack_dc = (float)local_130;
      lVar5 = *plVar1;
      local_1e8 = local_128;
    }
    local_d8 = (float)local_1e8;
    local_75 = 0;
    local_77 = 0;
    local_78 = 1;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
    uStack_8c = 0;
    local_94 = 0;
    uStack_9c = 0;
    local_a4 = 0;
    uStack_ac = 0;
    local_b4 = 0;
    uStack_bc = 0;
    local_c4 = 0;
    uStack_cc = 0;
    local_d4 = 0;
    local_290 = 1;
    local_298 = 0;
    local_2a0 = 0;
    local_2a8 = lVar6;
    (**(code **)(lVar5 + 0x3d8))(plVar1,&local_100,local_f8,1);
  }
  else {
    *param_3 = 0;
  }
LAB_1444a9d39:
  if ((local_70 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444aa15c FUN_1444aa15c body=29 status=ok
// SIG undefined FUN_1444aa15c(void)

undefined8 FUN_1444aa15c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444aa17a FUN_1444aa17a body=292 status=ok
// SIG undefined FUN_1444aa17a(void)

void FUN_1444aa17a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = *param_2;
  plVar2 = (longlong *)*param_1;
  local_ac = CONCAT31(local_ac._1_3_,*(undefined1 *)(lVar1 + 0x10));
  FUN_1491d5112(&local_b8,lVar1 + 0x14);
  local_c4 = 4;
  local_c0 = local_b8;
  FUN_140813180();
  local_ac = 0;
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x48) == '\x01')) {
    puVar3 = &DAT_14bb83714;
    if (*(undefined4 **)(lVar1 + 0x50) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(lVar1 + 0x50);
    }
    local_ac = *puVar3;
  }
  local_e8 = param_1[1];
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_2c = 1;
  local_29 = 0;
  local_2b = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  (**(code **)(*plVar2 + 0x3d8))(plVar2,&local_b8,&local_ac,1);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444aa2a0 FUN_1444aa2a0 body=65 status=ok
// SIG undefined FUN_1444aa2a0(void)

void FUN_1444aa2a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [12];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1491d5fec(*param_1,local_14,*param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444aa2e2 FUN_1444aa2e2 body=636 status=ok
// SIG undefined FUN_1444aa2e2(void)

void FUN_1444aa2e2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_588 [32];
  undefined2 **local_568;
  undefined4 *local_560;
  undefined8 *local_558;
  undefined8 *local_550;
  undefined1 local_548;
  undefined1 local_540;
  undefined1 local_530 [12];
  undefined1 local_524;
  undefined8 local_520;
  undefined2 *local_518;
  int local_510;
  int local_50c;
  undefined4 local_360;
  undefined4 uStack_35c;
  int iStack_358;
  int iStack_354;
  undefined4 uStack_350;
  undefined8 local_34c;
  undefined8 uStack_344;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined8 local_32c;
  undefined8 uStack_324;
  undefined8 local_31c;
  undefined8 uStack_314;
  undefined8 local_30c;
  undefined8 uStack_304;
  undefined8 local_2fc;
  undefined8 uStack_2f4;
  undefined8 local_2ec;
  undefined8 uStack_2e4;
  undefined8 local_2d8 [12];
  undefined8 local_278 [13];
  undefined8 local_210;
  undefined1 local_208;
  undefined1 local_207;
  undefined8 local_204;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_588;
  lVar1 = *param_2;
  local_208 = *(undefined1 *)(lVar1 + 0x10);
  FUN_1491d5112(&local_50,lVar1 + 0x14);
  FUN_1491d73b0(&local_208);
  local_207 = 1;
  local_204 = *(undefined8 *)(lVar1 + 0x14);
  FUN_1400021e4(lVar1 + 0x14);
  iVar4 = iStack_354;
  iVar3 = iStack_358;
  iVar5 = (iStack_358 == 0) + 6;
  local_518 = (undefined2 *)CONCAT44(uStack_35c,local_360);
  local_360 = 0;
  uStack_35c = 0;
  local_510 = iStack_358;
  local_50c = iStack_354;
  iStack_358 = 0;
  iStack_354 = 0;
  iVar8 = iVar5 + iVar3;
  if (iVar8 < iVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar4 < iVar8) {
    FUN_1446f8c06(&local_518);
  }
  FUN_1400020e8(&local_518,L" Curve",6);
  puVar9 = local_518;
  if (local_510 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_210,puVar9,1);
  if (local_518 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_35c,local_360) != 0) {
    FUN_1400020a8();
  }
  local_204 = local_210;
  uVar2 = *(undefined8 *)*param_1;
  puVar10 = &DAT_14c846480;
  puVar11 = local_278;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_558 = local_2d8;
  puVar10 = &DAT_14c846480;
  puVar11 = local_558;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = &DAT_14bb83714;
  if (*(undefined4 **)(lVar1 + 0x50) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(lVar1 + 0x50);
  }
  local_360 = *puVar7;
  local_2ec = 0;
  local_2fc = 0;
  uStack_2f4 = 0;
  local_30c = 0;
  uStack_304 = 0;
  local_31c = 0;
  uStack_314 = 0;
  local_32c = 0;
  uStack_324 = 0;
  local_33c = 0;
  uStack_334 = 0;
  local_34c = 0;
  uStack_344 = 0;
  uStack_35c = 0;
  iStack_358 = 0;
  iStack_354 = 0;
  uStack_350 = 0;
  uStack_2e4 = 0x100000000;
  FUN_14918b1f6(&local_518,&local_208);
  local_524 = 0;
  local_520 = 0;
  local_540 = 0;
  local_548 = 0;
  local_568 = &local_518;
  local_560 = &local_360;
  local_550 = local_278;
  FUN_1491ecf78(uVar2,local_530,local_50);
  FUN_14918b3e4(&local_208);
  if ((local_48 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444aa560 FUN_1444aa560 body=1098 status=ok
// SIG undefined FUN_1444aa560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444aa560(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a0;
  undefined8 local_198 [12];
  undefined8 local_138 [12];
  undefined1 local_d8 [16];
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 local_68;
  char local_64 [4];
  undefined2 uStack_60;
  ushort uStack_5e;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar7 = *param_2;
  if (*(char *)(lVar7 + 0x10) == '\x01') {
    lVar3 = *param_1;
    local_58 = *(undefined8 *)(lVar7 + 0x14);
    local_138[0]._0_1_ = 1;
    FUN_1491d5112(local_d8 + 4);
    lVar4 = *(longlong *)(lVar3 + 0x2f8);
    local_d8[0] = 4;
    uVar6 = FUN_140813180(lVar4,local_d8);
    if ((((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar4 + 0xc0))) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)uVar6 * 8), lVar4 != 0)) &&
       (*(char *)(lVar4 + 0x10) == '\x04')) {
      local_68 = *(undefined4 *)(lVar7 + 0x18);
      local_70 = *(undefined8 *)(lVar7 + 0x10);
      FUN_1408130c0(*(undefined8 *)(lVar3 + 0x2f8),local_64);
      auVar5 = _DAT_149934d80;
      local_d8 = ZEXT816(0);
      local_c8 = ZEXT812(0);
      uStack_bc = 0x3ff00000;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = _DAT_149934d80;
      local_88 = 0x3ff0000000000000;
      uStack_80 = 0;
      if ((((uint)uStack_5e < DAT_14c87eb08 + 1U) &&
          (CONCAT44(uStack_5c,CONCAT22(uStack_5e,uStack_60)) != 0)) && (local_64[0] != '\0')) {
        lVar10 = *(longlong *)(lVar3 + 0x2f8);
        iVar2 = *(int *)(lVar7 + 0x1c);
        if (((((longlong)iVar2 < 0) || (*(int *)(lVar10 + 0xc0) <= iVar2)) ||
            (lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xb8) + (longlong)iVar2 * 8), lVar7 == 0))
           || (((bVar1 = *(byte *)(lVar7 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
               ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))) {
          puVar8 = &DAT_14c846480;
          puVar9 = local_138;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        else {
          FUN_1401571e4(lVar10,local_138,lVar7,2);
          lVar10 = *(longlong *)(lVar3 + 0x2f8);
        }
        local_1a0 = uStack_5c;
        uVar6 = FUN_140813180(lVar10);
        if ((((int)uVar6 < 0) || (*(int *)(lVar10 + 0xc0) <= (int)uVar6)) ||
           ((lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xb8) + (ulonglong)uVar6 * 8), lVar7 == 0
            || (((bVar1 = *(byte *)(lVar7 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
                ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))))) {
          puVar8 = &DAT_14c846480;
          puVar9 = local_198;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        else {
          FUN_1401571e4(lVar10,local_198,lVar7,2);
        }
        FUN_1449437a2(local_138,local_d8,local_198);
      }
      else {
        iVar2 = *(int *)(lVar7 + 0x1c);
        if (((((longlong)iVar2 < 0) ||
             (lVar7 = *(longlong *)(lVar3 + 0x2f8), *(int *)(lVar7 + 0xc0) <= iVar2)) ||
            (lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (longlong)iVar2 * 8), lVar10 == 0)
            ) || (((bVar1 = *(byte *)(lVar10 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
                  ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))) {
          puVar8 = &DAT_14c846480;
          puVar9 = local_138;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        else {
          FUN_1401571e4(lVar7,local_138,lVar10,0);
        }
        puVar8 = local_138;
        puVar9 = (undefined8 *)local_d8;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      dVar12 = (double)local_c8._0_8_ * (double)local_c8._0_8_ +
               (double)local_d8._0_8_ * (double)local_d8._0_8_;
      dVar15 = stack0xffffffffffffff40 * stack0xffffffffffffff40 +
               (double)local_d8._8_8_ * (double)local_d8._8_8_;
      auVar13._0_8_ = dVar12 + dVar15;
      auVar13._8_8_ = dVar12 + dVar15;
      uVar11 = -(ulonglong)(1e-08 <= auVar13._8_8_);
      auVar14 = sqrtpd(auVar13,auVar13);
      auVar14 = divpd(auVar5,auVar14);
      auVar16._0_8_ = auVar14._0_8_ * (double)local_c8._0_8_;
      auVar16._8_8_ = auVar14._8_8_ * stack0xffffffffffffff40;
      auVar5._8_4_ = (int)uVar11;
      auVar5._0_8_ = -(ulonglong)(1e-08 <= auVar13._0_8_);
      auVar5._12_4_ = (int)(uVar11 >> 0x20);
      _local_c8 = blendvpd(_DAT_149935300,auVar16,auVar5);
      uVar11 = (ulonglong)((double)local_d8._8_8_ * auVar14._8_8_) & uVar11;
      local_d8._8_4_ = (int)uVar11;
      local_d8._0_8_ =
           (ulonglong)((double)local_d8._0_8_ * auVar14._0_8_) &
           -(ulonglong)(1e-08 <= auVar13._0_8_);
      local_d8._12_4_ = (int)(uVar11 >> 0x20);
      local_1b0 = 0;
      local_1c0 = 0;
      local_1c8 = 0;
      local_1b8 = 1;
      FUN_1491de4e6(*(undefined8 *)(lVar3 + 0x2f8),lVar4,local_d8,0);
    }
  }
  else {
    *param_3 = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444aa9d6 FUN_1444aa9d6 body=29 status=ok
// SIG undefined FUN_1444aa9d6(void)

undefined8 FUN_1444aa9d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444aa9f4 FUN_1444aa9f4 body=463 status=ok
// SIG undefined FUN_1444aa9f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444aa9f4(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  float local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar1 = *(char *)(*param_2 + 0x211);
  if (cVar1 == '\x01') {
    local_f8 = param_1[1];
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_d4 = 0.0;
  }
  else {
    if (cVar1 != '\t') goto LAB_1444aab80;
    local_d4 = (float)_DAT_14c964b58;
    local_f8 = param_1[1];
    local_d0 = CONCAT44((float)_DAT_14c964b68,(float)_DAT_14c964b60);
    uStack_c8 = CONCAT44((float)DAT_14c964b48,(float)DAT_14c964b40);
    local_c0 = CONCAT44((float)_DAT_14c964b70,(float)_DAT_14c964b50);
    uStack_b8 = CONCAT44((float)_DAT_14c964b80,(float)_DAT_14c964b78);
  }
  uStack_58 = 0x100000000;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x3d8))((longlong *)*param_1,*param_2 + 0x14,&local_d4,1);
LAB_1444aab80:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444aabc4 FUN_1444aabc4 body=409 status=ok
// SIG undefined FUN_1444aabc4(void)

void FUN_1444aabc4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_14c [16];
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = *param_2;
  plVar2 = (longlong *)*param_1;
  if (*(char *)(lVar1 + 0x211) == '\x01') {
    local_178 = CONCAT71(local_178._1_7_,1);
    FUN_1444a0032(plVar2[0x5f],&local_c8,lVar1,0);
    local_178 = param_1[1];
    uStack_b4 = 0;
    uStack_ac = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_b8 = 0;
    lVar3 = *plVar2;
  }
  else {
    if (*(char *)(lVar1 + 0x211) != '\t') goto LAB_1444aad34;
    local_178 = CONCAT71(local_178._1_7_,1);
    FUN_1444a0032(plVar2[0x5f],local_14c,lVar1,0);
    local_b8 = local_13c;
    uStack_b4 = CONCAT44(uStack_134,uStack_138);
    uStack_ac = CONCAT44(local_12c,uStack_130);
    local_c8 = (undefined4)local_14c._0_8_;
    uStack_c4 = SUB84(local_14c._0_8_,4);
    uStack_c0 = (undefined4)local_14c._8_8_;
    uStack_bc = SUB84(local_14c._8_8_,4);
    local_178 = param_1[1];
    lVar3 = *plVar2;
  }
  uStack_4c = 0x100000000;
  local_54 = 0;
  uStack_5c = 0;
  local_64 = 0;
  uStack_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  local_84 = 0;
  uStack_8c = 0;
  local_94 = 0;
  uStack_9c = 0;
  local_a4 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  (**(code **)(lVar3 + 0x3d8))(plVar2,lVar1 + 0x14,&local_c8,1);
LAB_1444aad34:
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444aad5e FUN_1444aad5e body=146 status=ok
// SIG undefined FUN_1444aad5e(void)

ulonglong FUN_1444aad5e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(lVar1 + 0x58) == '\0') {
    local_38 = *(undefined4 *)(lVar1 + 0x18);
    local_40 = *(undefined8 *)(lVar1 + 0x10);
    FUN_1491d3868(*(undefined8 *)*param_1,&local_30);
    if (((local_30 != 0) && (*(int *)(param_1 + 1) == (int)local_30)) &&
       (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)local_30 >> 0x20))) {
      *(longlong *)param_1[2] = lVar1;
      uVar2 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444aadf2 FUN_1444aadf2 body=68 status=ok
// SIG undefined FUN_1444aadf2(void)

void FUN_1444aadf2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14920bf0e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405b3ec2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1444aae36 FUN_1444aae36 body=398 status=ok
// SIG undefined FUN_1444aae36(void)

void FUN_1444aae36(undefined8 param_1,longlong *param_2)

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
  
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
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
      FUN_1491dfecc(*param_2 + (longlong)iVar4 * 0x18 + 8);
      uVar6 = ~(uint)uVar14 & uVar6;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)param_2[5];
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
              goto LAB_1444aaf70;
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
LAB_1444aaf70:
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



// FUNCTION 1444aafc4 FUN_1444aafc4 body=277 status=ok
// SIG undefined FUN_1444aafc4(void)

void FUN_1444aafc4(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  lVar4 = *param_1;
  *param_3 = 1;
  *(bool *)(*(longlong *)(lVar4 + 1000) + (longlong)*(int *)(lVar3 + 0x1c)) =
       (*(byte *)(lVar3 + 0x10) & ~*(byte *)(param_1 + 1)) != 0;
  FUN_14449d5e6(lVar4,local_60,lVar3,0);
  puVar6 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar6 = local_60;
  }
  if ((longlong)local_50 != 0) {
    lVar5 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar4 + 1000) +
                   (longlong)*(int *)(*(longlong *)(puVar6 + lVar5) + 0x1c)) == '\0') {
        if ((*(char *)(lVar3 + 0x10) == '\x04') || (*(char *)(lVar3 + 0x10) == '\x02')) {
          uVar1 = *(undefined4 *)(lVar3 + 0x1c);
          iVar2 = *(int *)(lVar4 + 0x400);
          *(uint *)(lVar4 + 0x400) = iVar2 + 1U;
          if (*(uint *)(lVar4 + 0x404) < iVar2 + 1U) {
            FUN_1446f48e2((longlong *)(lVar4 + 0x3f8),iVar2);
          }
          *(undefined4 *)(*(longlong *)(lVar4 + 0x3f8) + (longlong)iVar2 * 4) = uVar1;
        }
        else {
          *(undefined1 *)(*(longlong *)(lVar4 + 1000) + (longlong)*(int *)(lVar3 + 0x1c)) = 0;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)local_50 * 8 != lVar5);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444ab104 FUN_1444ab104 body=29 status=ok
// SIG undefined FUN_1444ab104(void)

undefined8 FUN_1444ab104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444ab122 FUN_1444ab122 body=36 status=ok
// SIG undefined FUN_1444ab122(void)

bool FUN_1444ab122(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((*(byte *)(*param_2 + 0x10) & 0xdf) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_1491db4f2(*param_1);
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 1444ab170 FUN_1444ab170 body=29 status=ok
// SIG undefined FUN_1444ab170(void)

undefined8 FUN_1444ab170(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444ab18e FUN_1444ab18e body=36 status=ok
// SIG undefined FUN_1444ab18e(void)

bool FUN_1444ab18e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((*(byte *)(*param_2 + 0x10) & 0xdf) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_1491db4f2(*param_1);
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 1444ab1dc FUN_1444ab1dc body=29 status=ok
// SIG undefined FUN_1444ab1dc(void)

undefined8 FUN_1444ab1dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444ab20c FUN_1444ab20c body=70 status=ok
// SIG undefined FUN_1444ab20c(void)

void FUN_1444ab20c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149192788(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *(undefined8 *)(param_2 + 0x10);
  return;
}



// FUNCTION 1444ab2b6 FUN_1444ab2b6 body=29 status=ok
// SIG undefined FUN_1444ab2b6(void)

void FUN_1444ab2b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444ab2d4 FUN_1444ab2d4 body=69 status=ok
// SIG undefined FUN_1444ab2d4(void)

undefined8 * FUN_1444ab2d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bb90470;
  FUN_144760e21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444ab31a FUN_1444ab31a body=135 status=ok
// SIG undefined FUN_1444ab31a(void)

void FUN_1444ab31a(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar6 = *param_6;
  uVar7 = *param_5;
  uVar2 = *param_4;
  uVar3 = *param_3;
  param_1 = (longlong *)*param_1;
  uVar1 = *(undefined1 *)(*param_2 + 0x10);
  uVar4 = *(undefined4 *)(*param_2 + 0x1c);
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
    FUN_1444ab3ea(param_1,iVar5);
  }
  lVar8 = *param_1;
  lVar9 = (longlong)iVar5 * 0x20;
  *(undefined4 *)(lVar8 + lVar9) = uVar4;
  *(undefined1 *)(lVar8 + 4 + lVar9) = uVar1;
  *(undefined4 *)(lVar8 + 8 + lVar9) = uVar3;
  *(undefined4 *)(lVar8 + 0xc + lVar9) = uVar2;
  *(undefined8 *)(lVar8 + 0x10 + lVar9) = uVar7;
  *(undefined8 *)(lVar8 + 0x18 + lVar9) = uVar6;
  return;
}



// FUNCTION 1444ab3cc FUN_1444ab3cc body=29 status=ok
// SIG undefined FUN_1444ab3cc(void)

undefined8 FUN_1444ab3cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444ab3ea FUN_1444ab3ea body=248 status=ok
// SIG undefined FUN_1444ab3ea(void)

void FUN_1444ab3ea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1444ab5f0 FUN_1444ab5f0 body=29 status=ok
// SIG undefined FUN_1444ab5f0(void)

undefined8 FUN_1444ab5f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444ab60e FUN_1444ab60e body=416 status=ok
// SIG undefined FUN_1444ab60e(void)

void FUN_1444ab60e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_1;
  if (param_1[2] == 0) {
    uVar6 = *param_2;
  }
  else {
    FUN_1400021e4(param_2,&local_60);
    puVar5 = &DAT_149dfb77a;
    puVar8 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar8 = local_60;
    }
    FUN_1400021e4(param_1 + 2,&local_70);
    puVar7 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar7 = local_70;
    }
    FUN_140002266(&local_50,L"%s::%s",puVar7,puVar8);
    if (local_48 != 0) {
      puVar5 = (undefined2 *)CONCAT44(uStack_4c,local_50);
    }
    FUN_1446f470e(&local_40,puVar5,1);
    if (CONCAT44(uStack_4c,local_50) != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = local_40;
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_50 = CONCAT31(local_50._1_3_,8);
  uStack_4c = (undefined4)uVar6;
  local_48 = (int)((ulonglong)uVar6 >> 0x20);
  iVar4 = FUN_140813180(param_1[1]);
  if (iVar4 == -1) {
    FUN_1491d5fec(uVar1,&local_60,uVar6,0);
    plVar2 = (longlong *)param_1[3];
    iVar4 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
      FUN_149192788(plVar2,iVar4);
    }
    lVar3 = *plVar2;
    *(undefined1 *)(lVar3 + (longlong)iVar4 * 0xc) = 8;
    *(undefined8 *)(lVar3 + 4 + (longlong)iVar4 * 0xc) = uVar6;
  }
  else {
    plVar2 = (longlong *)param_1[3];
    iVar4 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
      FUN_149192788(plVar2,iVar4);
    }
    lVar3 = *plVar2;
    *(int *)(lVar3 + 8 + (longlong)iVar4 * 0xc) = local_48;
    *(ulonglong *)(lVar3 + (longlong)iVar4 * 0xc) = CONCAT44(uStack_4c,local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444ab7b0 FUN_1444ab7b0 body=72 status=ok
// SIG undefined FUN_1444ab7b0(void)

undefined8 FUN_1444ab7b0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if ((*(byte *)(param_2 + 0x10) & ~*(byte *)(param_1 + 2)) != 0) {
    return 0;
  }
  puVar1 = (undefined8 *)FUN_1491d6546(param_2);
  puVar4 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 1) != 0) {
    puVar3 = (undefined2 *)*param_1;
  }
  if (*(int *)(puVar1 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_14681f7ae(puVar3,puVar4);
  return uVar2;
}



// FUNCTION 1444ab7f8 FUN_1444ab7f8 body=115 status=ok
// SIG undefined FUN_1444ab7f8(void)

bool FUN_1444ab7f8(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  
  if ((*(byte *)(param_2 + 0x10) & ~*(byte *)(param_1 + 2)) == 0) {
    uVar2 = FUN_1491d6546(param_2);
    if (*(int *)(param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*param_1;
    }
    if (_Str != (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      iVar1 = FUN_1447ee042(uVar2,_Str,sVar3 & 0xffffffff,1,0,0xffffffff);
      return iVar1 != -1;
    }
  }
  return false;
}



// FUNCTION 1444ab86c FUN_1444ab86c body=751 status=ok
// SIG undefined FUN_1444ab86c(void)

ulonglong FUN_1444ab86c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong unaff_RBP;
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
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
    if (plVar1 != (longlong *)0x0) goto LAB_1444ab9ea;
  }
  else {
    lVar5 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*(longlong *)*param_2 + 0x108))();
      if (lVar5 != 0) {
        plVar6 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x108))();
        uVar4 = (**(code **)(*plVar6 + 0x478))(plVar6);
        unaff_RBP = (ulonglong)uVar4;
        plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x108))();
        cVar3 = (**(code **)(*plVar6 + 0x478))(plVar6);
        if ((char)uVar4 != cVar3) goto LAB_1444aba02;
        lVar5 = (**(code **)(*plVar1 + 0x108))(plVar1);
        lVar7 = FUN_145b9f06c();
        if (DAT_14c951858 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1468c5283;
          local_60 = FUN_142809da0;
          local_68 = L"Engine";
          local_70 = 0x400000000;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar5 = *(longlong *)(lVar5 + 0x20);
        if (lVar5 == 0) {
          lVar9 = 0;
        }
        else {
          do {
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (lVar9 = lVar5,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
              lVar9 = 0;
            }
          } while ((lVar9 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
        }
        lVar5 = (**(code **)(*plVar2 + 0x108))(plVar2);
        lVar7 = FUN_145b9f06c();
        if (DAT_14c951858 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1468c5283;
          local_60 = FUN_142809da0;
          local_68 = L"Engine";
          local_70 = 0x400000000;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar5 = *(longlong *)(lVar5 + 0x20);
        if (lVar5 != 0) {
          do {
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (lVar8 = lVar5,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) {
              lVar8 = 0;
            }
          } while ((lVar8 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
          if ((lVar9 != 0) && (lVar8 != 0)) {
            unaff_RBP = (ulonglong)
                        CONCAT31((int3)(uVar4 >> 8),
                                 *(int *)(lVar9 + 0x210) < *(int *)(lVar8 + 0x210));
            goto LAB_1444aba02;
          }
        }
        goto LAB_1444ab9ff;
      }
    }
LAB_1444ab9ea:
    lVar5 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (lVar5 != 0) {
      unaff_RBP = 0;
      goto LAB_1444aba02;
    }
  }
LAB_1444ab9ff:
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_1444aba02:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444abb5c FUN_1444abb5c body=1579 status=ok
// SIG undefined FUN_1444abb5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444abb5c(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_50,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_50,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_50,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_50,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_50,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_50,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_50,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_50,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_50,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_50,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_50,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_50,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<FString>_14c764ef8,1);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cc074f8);
  if (cVar1 == '\0') {
    _DAT_14cc074f8 = 0;
    uRam000000014cc07500 = 0;
  }
  if (local_50 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_50 = &DAT_14a19662d;
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bb782d0;
  local_68 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb782f0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb786c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb78c70,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb78fb0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bb79740;
  local_68 = 0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb79760,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb79b80);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 7;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb7a1d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb7aee0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb7b0d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb7b5d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb7b840);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb803c0,1,0);
  ppuStack_60 = &PTR_FUN_14bb833e0;
  local_58 = 0xd;
  local_68 = 10;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb83580);
  FUN_1446f470e(&DAT_14cc07d38,L"SocketColor",1);
  FUN_1446f470e(&DAT_14cc07d40,L"SocketDescription",1);
  FUN_1446f470e(&DAT_14cc079a0,L"SocketDesiredParent",1);
  _DAT_14cc07d24 = 0x3f800000;
  uRam000000014cc07d28 = 0x3f800000;
  uRam000000014cc07d2c = 0x3f800000;
  uRam000000014cc07d30 = 0x3f800000;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 0x15;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb84ac0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb851d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb858b0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb85f60);
  DAT_14cc08210 = 0;
  DAT_14cc08200 = 0;
  uRam000000014cc08208 = 0;
  atexit((_func_5014 *)&LAB_1444a835d);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bb863c0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb863e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb868d0,1,0);
  FUN_1446f470e(&DAT_14cc080a8,L"Sequencer_Pose_Name",1);
  _DAT_14cc080b0 = 0xffffffff;
  _DAT_14cc080b4 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb86a70);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb86fa0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb88280,1,&PTR_FUN_14bb881e0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444ac188 FUN_1444ac188 body=1736 status=ok
// SIG undefined FUN_1444ac188(void)

longlong FUN_1444ac188(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  undefined1 *local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = param_2;
  FUN_1407329d4(0,1);
  lVar6 = local_68;
  lVar10 = (longlong)(int)uStack_60;
  if (lVar10 != 0) {
    lVar4 = 0;
    do {
      lVar11 = *(longlong *)(lVar6 + lVar4);
      if (lVar11 != 0) {
        if (DAT_14cad2858 == 0) {
          local_50 = FUN_144a7958c;
          local_80 = FUN_14081d0ea;
          local_88 = (code *)&LAB_146395584;
          local_98 = &LAB_147a0ba80;
          local_a0 = (code *)&LAB_14575ccce;
          local_a8 = L"Engine";
          local_b0 = 0x40000000000;
          local_b8 = 0x10000004;
          local_c0 = 0x10;
          local_c8 = 0x1180;
          local_90 = &local_50;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
          *(undefined1 *)(lVar11 + 0x89c) = 0;
        }
      }
      lVar4 = lVar4 + 8;
    } while (lVar10 * 8 != lVar4);
  }
  cVar2 = FUN_140732d72(param_1);
  lVar6 = *(longlong *)(param_1 + 0xae8);
  if (lVar6 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar7 = FUN_140732678();
    plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
  }
  lVar10 = FUN_145b9ee98();
  lVar4 = FUN_140732678();
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0xd5) & 0x40) == 0)) {
LAB_1444ac3d1:
    bVar3 = 0;
LAB_1444ac41f:
    bVar9 = bVar3;
    bVar3 = 0;
  }
  else {
    if (DAT_14c950d78 == 0) {
      local_90 = &local_50;
      local_50 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_1468b50ee;
      local_a0 = FUN_1427f23a3;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
    }
    bVar9 = 0;
    bVar3 = 0;
    if (lVar10 == 0) goto LAB_1444ac41f;
    bVar3 = 0;
    if (DAT_14c950d78 != lVar4) {
      do {
        if (0 < (longlong)*(int *)(lVar10 + 0x1e0)) {
          lVar11 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x1d8) + lVar11);
            if (((lVar1 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)) {
              plVar5 = (longlong *)FUN_145b9ee98();
              lVar10 = plVar5[0x22];
              if (lVar10 == 0) {
                (**(code **)(*plVar5 + 1000))(plVar5);
                lVar10 = plVar5[0x22];
                if (lVar10 == 0) {
                  bVar3 = 1;
                  goto LAB_1444ac41f;
                }
              }
              uVar7 = FUN_140732678();
              plVar5 = (longlong *)FUN_144718840(lVar10,uVar7);
              bVar9 = 1;
              bVar3 = 1;
              if (plVar5 == (longlong *)0x0) goto LAB_1444ac41f;
              bVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
              goto LAB_1444ac430;
            }
            lVar11 = lVar11 + 0x10;
          } while ((longlong)*(int *)(lVar10 + 0x1e0) * 0x10 != lVar11);
        }
        lVar10 = *(longlong *)(lVar10 + 0x40);
      } while (lVar10 != 0);
      goto LAB_1444ac3d1;
    }
  }
LAB_1444ac430:
  if (cVar2 == '\x01' && plVar8 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0xc5f) != '\x02') {
      FUN_14073397e(param_1,2,1);
    }
    if (*(longlong *)(param_1 + 0xae8) != 0) {
      lVar6 = FUN_145b9ee98();
      if (((((*(longlong *)(param_1 + 0xae8) != 0) && (lVar6 != 0)) &&
           ((lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x10), lVar10 != 0 &&
            ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar10 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)))))) && (lVar6 = FUN_145b9ee98(), lVar6 != 0)) &&
         ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar10 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)))) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xae8) + 0x10);
        lVar10 = FUN_145b9ee98();
        if ((lVar10 == 0) ||
           ((*(int *)(lVar6 + 0x38) < *(int *)(lVar10 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
             lVar10 + 0x30)))) goto LAB_1444ac62a;
        goto LAB_1444ac61c;
      }
    }
    uVar7 = FUN_145b9ee98();
    lVar6 = FUN_1492c463e(param_1,uVar7);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    *(longlong *)(param_1 + 0xae8) = lVar6;
    FUN_140737aec(lVar6,0);
LAB_1444ac5d5:
    *local_70 = 1;
    goto LAB_1444ac62c;
  }
  lVar10 = *(longlong *)(lVar6 + 0x10);
  lVar4 = FUN_145b9ee98();
  if (((lVar4 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    if (plVar8 == (longlong *)0x0) {
      if ((bVar9 & bVar3) == 1) {
LAB_1444ac5e8:
        uVar7 = FUN_145b9ee98();
        lVar10 = FUN_1492c463e(param_1,uVar7);
        if (lVar10 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          uVar7 = FUN_140732678();
          plVar8 = (longlong *)FUN_144718840(lVar10,uVar7);
        }
        cVar2 = (**(code **)(*plVar8 + 0x20))(plVar8);
        if (cVar2 != '\0') {
          if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar10);
          }
          *(longlong *)(param_1 + 0xae8) = lVar10;
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar6);
          FUN_140737aec(*(undefined8 *)(param_1 + 0xae8),0);
          *local_70 = 1;
          lVar6 = 0;
          if (*(longlong *)(param_1 + 0xae8) == 0) goto LAB_1444ac62c;
          goto LAB_1444ac72b;
        }
      }
    }
    else {
      lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
      if (lVar6 == 0) {
        cVar2 = (**(code **)(*plVar8 + 0x20))(plVar8);
        if (cVar2 != '\0') {
          uVar7 = FUN_145b9ee98();
          lVar6 = FUN_1492c463e(param_1,uVar7);
          FUN_140737aec(lVar6,0);
          (**(code **)(*plVar8 + 0x18))(plVar8,lVar6);
          goto LAB_1444ac5d5;
        }
      }
      else {
        lVar10 = *(longlong *)(lVar6 + 0x10);
        lVar4 = FUN_145b9ee98();
        if (((lVar4 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar4 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) {
          if (((bVar9 & bVar3) == 1) &&
             (cVar2 = (**(code **)(*plVar8 + 0x20))(plVar8), cVar2 == '\0')) goto LAB_1444ac5e8;
        }
        else {
          lVar10 = FUN_145b9ee98();
          if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) goto LAB_1444ac62c;
        }
      }
    }
  }
  else {
LAB_1444ac61c:
    if (*(longlong *)(param_1 + 0xae8) != 0) {
LAB_1444ac72b:
      lVar4 = FUN_145b9ee98();
      lVar10 = *(longlong *)(param_1 + 0xae8);
      if (lVar10 != 0) {
        lVar6 = 0;
        if ((lVar4 == 0) || (lVar11 = *(longlong *)(lVar10 + 0x10), lVar11 == 0))
        goto LAB_1444ac62c;
        if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar11 + 0x38)) {
          lVar6 = 0;
          if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30) {
            lVar6 = lVar10;
          }
          goto LAB_1444ac62c;
        }
      }
    }
  }
LAB_1444ac62a:
  lVar6 = 0;
LAB_1444ac62c:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1444ac852 FUN_1444ac852 body=4902 status=ok
// SIG undefined FUN_1444ac852(void)

void FUN_1444ac852(longlong param_1,undefined8 *param_2,undefined8 param_3)

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
  double dVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined *****pppppuVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong *plVar22;
  uint *puVar23;
  longlong *plVar24;
  ulonglong uVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_638 [32];
  undefined8 *local_618;
  undefined ****local_610;
  undefined8 *local_608;
  undefined8 *local_600;
  undefined8 *local_5f8;
  undefined8 *local_5f0;
  int local_5e0;
  float local_5dc;
  longlong local_5d8;
  float local_5d0;
  uint local_5cc;
  undefined ****local_5c8;
  longlong *local_5c0;
  undefined ****local_5b8;
  longlong *local_5b0;
  undefined ****local_5a8;
  longlong *local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined4 local_588;
  float local_580 [3];
  undefined1 local_574;
  undefined ****local_570;
  longlong *local_568;
  longlong local_560;
  longlong local_558;
  longlong *local_550;
  undefined8 local_548;
  undefined4 local_540;
  undefined8 local_538;
  undefined4 local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined ***local_518;
  undefined4 local_510;
  undefined8 local_508;
  undefined4 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined ****local_4c8;
  undefined8 local_4c0;
  float local_4b8;
  undefined8 local_4b4;
  undefined8 local_4ac;
  undefined8 local_4a4;
  float local_49c;
  undefined4 local_498;
  float local_494;
  undefined1 local_490;
  float local_48c;
  byte local_480;
  float local_478;
  undefined8 local_474;
  undefined1 local_46c;
  undefined4 local_468;
  float local_464;
  undefined1 local_460;
  float local_45c;
  longlong local_458 [3];
  longlong *local_440;
  undefined8 local_438;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  longlong local_3a0 [6];
  longlong *local_370;
  undefined8 local_368;
  longlong local_360 [8];
  longlong *local_320;
  undefined8 local_318;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2d0 [20];
  longlong *local_230;
  undefined8 local_228;
  undefined8 local_208;
  undefined8 local_200;
  undefined **local_1f8 [3];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_638;
  if (((((*(int *)(param_1 + 0x18) != 0) && (uVar15 = *(uint *)(param_1 + 0x14), -1 < (int)uVar15))
       && ((int)uVar15 < DAT_14c9647dc)) &&
      ((plVar24 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
       plVar24 != (longlong *)0x0 && ((int)plVar24[2] == *(int *)(param_1 + 0x18))))) &&
     (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 && (lVar11 = *plVar24, lVar11 != 0)))) {
    lVar17 = FUN_145b9ef82();
    if ((((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) &&
        (*(longlong *)(lVar11 + 0x1a8) != 0)) && (cVar14 = FUN_14756ff02(lVar11), cVar14 != '\0')) {
      local_1f8[0] = &PTR_FUN_14bbd45d8;
      uVar25 = 0;
      local_1e0 = 0;
      local_1d8 = 0x8000000000;
      local_1c0 = 0;
      local_1b8 = 0x8000000000;
      local_1a0 = 0;
      local_198 = 0x8000000000;
      local_180 = 0;
      local_178 = 0x8000000000;
      local_160 = 0;
      local_158 = 0x8000000000;
      local_140 = 0;
      local_138 = 0x8000000000;
      local_120 = 0;
      local_118 = 0x8000000000;
      local_100 = 0;
      local_f8 = 0x8000000000;
      local_4d8 = *(undefined8 *)(param_1 + 0x70);
      local_5f0 = &local_4d8;
      local_4d0 = *(undefined4 *)(param_1 + 0x78);
      local_4e8 = *(undefined8 *)(param_1 + 0x60);
      local_5f8 = &local_4e8;
      local_4e0 = *(undefined4 *)(param_1 + 0x68);
      local_4f8 = *(undefined8 *)(param_1 + 0x50);
      local_600 = &local_4f8;
      local_4f0 = *(undefined4 *)(param_1 + 0x58);
      local_508 = *(undefined8 *)(param_1 + 0x40);
      local_608 = &local_508;
      local_500 = *(undefined4 *)(param_1 + 0x48);
      local_518 = *(undefined ****)(param_1 + 0x80);
      local_610 = &local_518;
      local_510 = *(undefined4 *)(param_1 + 0x88);
      local_528 = *(undefined8 *)(param_1 + 0x90);
      local_618 = &local_528;
      local_520 = *(undefined4 *)(param_1 + 0x98);
      local_538 = *(undefined8 *)(param_1 + 0x30);
      local_530 = *(undefined4 *)(param_1 + 0x38);
      local_548 = *(undefined8 *)(param_1 + 0x20);
      local_540 = *(undefined4 *)(param_1 + 0x28);
      FUN_1492144e8(local_1f8,lVar11);
      local_440 = (longlong *)0x0;
      local_438 = 0x200000000;
      local_418 = 0;
      local_410 = 0x200000000;
      local_3f0 = 0;
      local_3e8 = 0x200000000;
      local_3b0 = 0;
      local_3a8 = 0x200000000;
      local_370 = (longlong *)0x0;
      local_368 = 0x200000000;
      local_320 = (longlong *)0x0;
      local_318 = 0x200000000;
      local_2e0 = 0;
      local_2d8 = 0x200000000;
      local_230 = (longlong *)0x0;
      local_228 = 0x200000000;
      local_208 = 0;
      local_200 = 0x200000000;
      FUN_1492150fa(param_1,param_2,local_1f8,local_458);
      FUN_1492166d2(&local_558,*(undefined8 *)(lVar11 + 0x1a8));
      local_5cc = 1;
      if ((*(ushort *)(lVar11 + 0xd9) >> 8 & 1) != 0) {
        local_5cc = (uint)*(ushort *)(lVar11 + 0xd9);
      }
      local_5d0 = (float)FUN_1405622a2(lVar11);
      uVar15 = *(uint *)((longlong)param_2 + 0x24);
      if (SBORROW4(0,uVar15)) {
        puVar23 = (uint *)((longlong)param_2 + 4);
        if (*(int *)(param_2 + 4) == 0) {
          puVar23 = (uint *)(param_2 + 2);
        }
        uVar15 = *puVar23;
        uVar25 = (ulonglong)puVar23[1] << 0x20;
      }
      local_5dc = (float)FUN_147554338(param_1,uVar15 | uVar25);
      if ((*(byte *)(lVar11 + 0x219) & 2) != 0) {
        local_4c8 = (undefined ****)CONCAT44(local_4c8._4_4_,0x3f800000);
        uVar15 = *(uint *)((longlong)param_2 + 0x24);
        if (SBORROW4(0,uVar15)) {
          puVar23 = (uint *)((longlong)param_2 + 4);
          if (*(int *)(param_2 + 4) == 0) {
            puVar23 = (uint *)(param_2 + 2);
          }
          uVar15 = *puVar23;
          uVar25 = (ulonglong)puVar23[1] << 0x20;
        }
        else {
          uVar25 = 0;
        }
        FUN_1400f0204(lVar11 + 0x220,0,uVar15 | uVar25,&local_4c8);
        local_5dc = local_5dc * local_4c8._0_4_;
      }
      plVar24 = local_458;
      if (local_440 != (longlong *)0x0) {
        plVar24 = local_440;
      }
      fVar27 = local_5dc;
      if ((longlong)(int)local_438 != 0) {
        lVar17 = (longlong)(int)local_438 * 0xc;
        do {
          cVar14 = FUN_1491fe288(lVar11,plVar24);
          if (cVar14 != '\0') {
            FUN_149288242(&local_560,*plVar24,local_558);
            lVar18 = local_560;
            uVar20 = FUN_147582be2(param_3);
            local_5d8 = lVar18;
            lVar18 = FUN_1492169c8(uVar20,lVar18);
            if (lVar18 == 0) {
              uVar20 = FUN_147582be2(param_3);
              plVar22 = (longlong *)FUN_14001cc68(0x50,0x10);
              plVar22[1] = (longlong)&DAT_100000001;
              *plVar22 = (longlong)&PTR_FUN_14bc052a0;
              plVar22[3] = 0;
              plVar22[4] = 0;
              plVar22[5] = 0;
              plVar22[6] = 0;
              plVar22[7] = local_560;
              plVar22[2] = (longlong)&PTR_FUN_14bc052c0;
              plVar22[8] = *plVar24;
              *(undefined4 *)((longlong)plVar22 + 0x4c) = 0;
              uVar15 = *(uint *)(lVar11 + 0xc);
              *(uint *)(plVar22 + 9) = uVar15;
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              iVar16 = *(int *)(lVar18 + 0x10);
              if (*(int *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar16 = DAT_14c964868 + 1;
                UNLOCK();
                local_5e0 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar16;
                if (bVar26) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,local_5e0);
                }
                LOCK();
                iVar16 = *(int *)(lVar18 + 0x10);
                bVar26 = iVar16 == 0;
                if (bVar26) {
                  *(int *)(lVar18 + 0x10) = local_5e0;
                  iVar16 = 0;
                }
                UNLOCK();
                fVar27 = local_5dc;
                if (bVar26) {
                  iVar16 = local_5e0;
                }
              }
              pppppuVar19 = (undefined *****)(plVar22 + 2);
              *(int *)((longlong)plVar22 + 0x4c) = iVar16;
              local_4c8 = (undefined ****)pppppuVar19;
              local_4c0 = plVar22;
              FUN_1492c4f7c(&local_4c8,pppppuVar19);
              plVar12 = local_4c0;
              local_570 = (undefined ****)pppppuVar19;
              local_568 = plVar22;
              if (plVar22 == (longlong *)0x0) {
                FUN_147586634(uVar20,local_5d8,&local_570);
              }
              else {
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
                FUN_147586634(uVar20,local_5d8,&local_570);
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar22 = plVar12 + 1;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)*plVar22 == 0) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                    }
                  }
                }
              }
            }
            uVar20 = FUN_147582be2(param_3);
            lVar18 = plVar24[1];
            local_4c0 = (longlong *)((ulonglong)local_4c0 & 0xfffffffffffffffc);
            local_4c8 = (undefined ****)FUN_14001cc68(0x10,8);
            local_610 = (undefined ****)&local_4c8;
            pppppuVar19 = (undefined *****)local_4c8;
            if (((ulonglong)local_4c0 & 2) != 0) {
              pppppuVar19 = (undefined *****)local_610;
            }
            local_4c0 = (longlong *)((ulonglong)local_4c0 | 1);
            *pppppuVar19 = (undefined ****)&PTR_FUN_14bc05320;
            *(int *)(pppppuVar19 + 1) = (int)lVar18;
            local_4b8 = DAT_14cc08218;
            local_4b4 = 0xffffffffffffffff;
            local_4ac = (local_4ac >> 8 & 0xffffff) << 8;
            local_4a4._0_5_ = CONCAT14((char)local_5cc,fVar27);
            local_49c = local_5d0;
            local_580[0] = DAT_14cc08218;
            local_580[1] = -NAN;
            local_580[2] = -NAN;
            local_574 = 0;
            local_588 = 0;
            local_598 = 0;
            uStack_590 = 0;
            local_618 = param_2;
            FUN_149216e50(uVar20,&local_598,local_5d8,local_580);
            if (((ulonglong)local_4c0 & 1) != 0) {
              pppppuVar19 = &local_4c8;
              if (((ulonglong)local_4c0 & 2) == 0) {
                pppppuVar19 = (undefined *****)local_4c8;
              }
              local_4c0 = (longlong *)((ulonglong)local_4c0 & 0xfffffffffffffffe);
              (*(code *)**pppppuVar19)(pppppuVar19,0);
              if (((ulonglong)local_4c0 & 2) == 0) {
                FUN_1400020a8(local_4c8);
              }
            }
          }
          plVar24 = (longlong *)((longlong)plVar24 + 0xc);
          lVar17 = lVar17 + -0xc;
        } while (lVar17 != 0);
      }
      plVar24 = local_370;
      if (local_370 == (longlong *)0x0) {
        plVar24 = local_3a0;
      }
      if ((longlong)(int)local_368 != 0) {
        lVar17 = (longlong)(int)local_368 * 0x18;
        do {
          cVar14 = FUN_1491fe288(lVar11,plVar24);
          if (cVar14 != '\0') {
            FUN_149288242(&local_560,*plVar24,local_558 + 0x10);
            lVar18 = local_560;
            uVar20 = FUN_147582be2(param_3);
            local_5d8 = lVar18;
            lVar18 = FUN_149216aaa(uVar20,lVar18);
            if (lVar18 == 0) {
              uVar20 = FUN_147582be2(param_3);
              plVar22 = (longlong *)FUN_14001cc68(0x50,0x10);
              plVar22[1] = (longlong)&DAT_100000001;
              *plVar22 = (longlong)&PTR_FUN_14bc053c0;
              plVar22[3] = 0;
              plVar22[4] = 0;
              plVar22[5] = 0;
              plVar22[6] = 0;
              plVar22[7] = local_560;
              plVar22[2] = (longlong)&PTR_FUN_14bc053e0;
              plVar22[8] = *plVar24;
              *(undefined4 *)((longlong)plVar22 + 0x4c) = 0;
              uVar15 = *(uint *)(lVar11 + 0xc);
              *(uint *)(plVar22 + 9) = uVar15;
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              iVar16 = *(int *)(lVar18 + 0x10);
              if (*(int *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar16 = DAT_14c964868 + 1;
                UNLOCK();
                local_5e0 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar16;
                if (bVar26) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,local_5e0);
                }
                LOCK();
                iVar16 = *(int *)(lVar18 + 0x10);
                bVar26 = iVar16 == 0;
                if (bVar26) {
                  *(int *)(lVar18 + 0x10) = local_5e0;
                  iVar16 = 0;
                }
                UNLOCK();
                fVar27 = local_5dc;
                if (bVar26) {
                  iVar16 = local_5e0;
                }
              }
              pppppuVar19 = (undefined *****)(plVar22 + 2);
              *(int *)((longlong)plVar22 + 0x4c) = iVar16;
              local_4c8 = (undefined ****)pppppuVar19;
              local_4c0 = plVar22;
              FUN_1492c660e(&local_4c8,pppppuVar19);
              plVar12 = local_4c0;
              local_5a8 = (undefined ****)pppppuVar19;
              local_5a0 = plVar22;
              if (plVar22 == (longlong *)0x0) {
                FUN_147586634(uVar20,local_5d8,&local_5a8);
              }
              else {
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
                FUN_147586634(uVar20,local_5d8,&local_5a8);
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar22 = plVar12 + 1;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)*plVar22 == 0) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                    }
                  }
                }
              }
            }
            dVar2 = (double)plVar24[1];
            dVar3 = (double)plVar24[2];
            uVar20 = FUN_147582be2(param_3);
            local_4b8 = (float)((uint)local_4b8 & 0xfffffffc);
            local_4c8 = (undefined ****)FUN_14001cc68(0x18,8);
            fVar13 = local_4b8;
            local_4b8 = (float)((uint)local_4b8 | 1);
            local_610 = (undefined ****)&local_4c8;
            pppppuVar19 = (undefined *****)local_4c8;
            if (((uint)fVar13 & 2) != 0) {
              pppppuVar19 = (undefined *****)local_610;
            }
            *pppppuVar19 = (undefined ****)&PTR_FUN_14bc05440;
            *(float *)(pppppuVar19 + 1) = (float)dVar2;
            *(float *)((longlong)pppppuVar19 + 0xc) = (float)dVar3;
            *(undefined4 *)(pppppuVar19 + 2) = 3;
            local_4b4 = CONCAT44(DAT_14cc08218,(undefined4)local_4b4);
            local_4ac = 0xffffffffffffffff;
            local_4a4 = (local_4a4 >> 8 & 0xffffff) << 8;
            local_498 = CONCAT31(local_498._1_3_,(char)local_5cc);
            local_494 = local_5d0;
            local_580[0] = DAT_14cc08218;
            local_580[1] = -NAN;
            local_580[2] = -NAN;
            local_574 = 0;
            local_588 = 0;
            local_598 = 0;
            uStack_590 = 0;
            local_618 = param_2;
            local_49c = fVar27;
            FUN_149216ebc(uVar20,&local_598,local_5d8,local_580);
            if (((uint)local_4b8 & 1) != 0) {
              pppppuVar19 = &local_4c8;
              if (((uint)local_4b8 & 2) == 0) {
                pppppuVar19 = (undefined *****)local_4c8;
              }
              local_4b8 = (float)((uint)local_4b8 & 0xfffffffe);
              (*(code *)**pppppuVar19)(pppppuVar19,0);
              if (((uint)local_4b8 & 2) == 0) {
                FUN_1400020a8(local_4c8);
              }
            }
          }
          plVar24 = plVar24 + 3;
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != 0);
      }
      plVar24 = local_320;
      if (local_320 == (longlong *)0x0) {
        plVar24 = local_360;
      }
      if ((longlong)(int)local_318 != 0) {
        lVar17 = (longlong)(int)local_318 << 5;
        do {
          cVar14 = FUN_1491fe288(lVar11,plVar24);
          if (cVar14 != '\0') {
            FUN_149288242(&local_560,*plVar24,local_558 + 0x20);
            lVar18 = local_560;
            uVar20 = FUN_147582be2(param_3);
            lVar21 = FUN_149216aaa(uVar20,lVar18);
            if (lVar21 == 0) {
              local_5d8 = FUN_147582be2(param_3);
              plVar22 = (longlong *)FUN_14001cc68(0x50,0x10);
              plVar22[1] = (longlong)&DAT_100000001;
              *plVar22 = (longlong)&PTR_FUN_14bc05330;
              plVar22[3] = 0;
              plVar22[4] = 0;
              plVar22[5] = 0;
              plVar22[6] = 0;
              plVar22[7] = local_560;
              plVar22[2] = (longlong)&PTR_FUN_14bc05350;
              plVar22[8] = *plVar24;
              *(undefined4 *)((longlong)plVar22 + 0x4c) = 0;
              uVar15 = *(uint *)(lVar11 + 0xc);
              *(uint *)(plVar22 + 9) = uVar15;
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar21 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar21 = 0;
              }
              iVar16 = *(int *)(lVar21 + 0x10);
              if (*(int *)(lVar21 + 0x10) == 0) {
                LOCK();
                iVar16 = DAT_14c964868 + 1;
                UNLOCK();
                local_5e0 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar16;
                if (bVar26) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,local_5e0);
                }
                LOCK();
                iVar16 = *(int *)(lVar21 + 0x10);
                bVar26 = iVar16 == 0;
                if (bVar26) {
                  *(int *)(lVar21 + 0x10) = local_5e0;
                  iVar16 = 0;
                }
                UNLOCK();
                fVar27 = local_5dc;
                if (bVar26) {
                  iVar16 = local_5e0;
                }
              }
              pppppuVar19 = (undefined *****)(plVar22 + 2);
              *(int *)((longlong)plVar22 + 0x4c) = iVar16;
              local_4c8 = (undefined ****)pppppuVar19;
              local_4c0 = plVar22;
              FUN_1492c5a3a(&local_4c8,pppppuVar19);
              plVar12 = local_4c0;
              local_5b8 = (undefined ****)pppppuVar19;
              local_5b0 = plVar22;
              if (plVar22 == (longlong *)0x0) {
                FUN_147586634(local_5d8,lVar18,&local_5b8);
              }
              else {
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
                FUN_147586634(local_5d8,lVar18,&local_5b8);
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar22 = plVar12 + 1;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)*plVar22 == 0) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                    }
                  }
                }
              }
            }
            dVar2 = (double)plVar24[1];
            dVar3 = (double)plVar24[2];
            dVar4 = (double)plVar24[3];
            uVar20 = FUN_147582be2(param_3);
            local_4c8 = (undefined ****)&PTR_FUN_14bc053b0;
            local_4c0 = (longlong *)CONCAT44((float)dVar3,(float)dVar2);
            local_4b4 = CONCAT44((int)(local_4b4 >> 0x20),7) | 0x300000000;
            local_4ac = CONCAT44(DAT_14cc08218,(undefined4)local_4ac);
            local_4a4 = 0xffffffffffffffff;
            local_49c = (float)((uint)local_49c & 0xffffff00);
            local_498 = 0;
            local_490 = (undefined1)local_5cc;
            local_48c = local_5d0;
            local_580[0] = DAT_14cc08218;
            local_580[1] = -NAN;
            local_580[2] = -NAN;
            local_574 = 0;
            local_588 = 0;
            local_598 = 0;
            uStack_590 = 0;
            local_610 = (undefined ****)&local_4c8;
            local_618 = param_2;
            local_4b8 = (float)dVar4;
            local_494 = fVar27;
            FUN_149216f28(uVar20,&local_598,lVar18,local_580);
            if ((local_4b4 & 0x100000000) != 0) {
              pppppuVar19 = &local_4c8;
              if ((local_4b4 & 0x200000000) == 0) {
                pppppuVar19 = (undefined *****)local_4c8;
              }
              local_4b4 = local_4b4 & 0xfffffffeffffffff;
              (*(code *)**pppppuVar19)(pppppuVar19,0);
              if ((local_4b4 & 0x200000000) == 0) {
                FUN_1400020a8(local_4c8);
              }
            }
          }
          plVar24 = plVar24 + 4;
          lVar17 = lVar17 + -0x20;
        } while (lVar17 != 0);
      }
      plVar24 = local_230;
      if (local_230 == (longlong *)0x0) {
        plVar24 = local_2d0;
      }
      if ((longlong)(int)local_228 != 0) {
        lVar17 = (longlong)(int)local_228 * 0x50;
        do {
          cVar14 = FUN_1491fe288(lVar11,plVar24);
          if (cVar14 != '\0') {
            FUN_149288242(&local_560,*plVar24,local_558 + 0x30);
            lVar18 = local_560;
            uVar20 = FUN_147582be2(param_3);
            lVar21 = FUN_149216c6e(uVar20,lVar18);
            if (lVar21 == 0) {
              local_5d8 = FUN_147582be2(param_3);
              plVar22 = (longlong *)FUN_14001cc68(0x50,0x10);
              plVar22[1] = (longlong)&DAT_100000001;
              *plVar22 = (longlong)&PTR_FUN_14bc05450;
              plVar22[3] = 0;
              plVar22[4] = 0;
              plVar22[5] = 0;
              plVar22[6] = 0;
              plVar22[7] = local_560;
              plVar22[2] = (longlong)&PTR_FUN_14bc05470;
              plVar22[8] = *plVar24;
              *(undefined4 *)((longlong)plVar22 + 0x4c) = 0;
              uVar15 = *(uint *)(lVar11 + 0xc);
              *(uint *)(plVar22 + 9) = uVar15;
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar21 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar21 = 0;
              }
              iVar16 = *(int *)(lVar21 + 0x10);
              if (*(int *)(lVar21 + 0x10) == 0) {
                LOCK();
                iVar16 = DAT_14c964868 + 1;
                UNLOCK();
                local_5e0 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar16;
                if (bVar26) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,local_5e0);
                }
                LOCK();
                iVar16 = *(int *)(lVar21 + 0x10);
                bVar26 = iVar16 == 0;
                if (bVar26) {
                  *(int *)(lVar21 + 0x10) = local_5e0;
                  iVar16 = 0;
                }
                UNLOCK();
                if (bVar26) {
                  iVar16 = local_5e0;
                }
              }
              pppppuVar19 = (undefined *****)(plVar22 + 2);
              *(int *)((longlong)plVar22 + 0x4c) = iVar16;
              local_4c8 = (undefined ****)pppppuVar19;
              local_4c0 = plVar22;
              FUN_1492c7a12(&local_4c8,pppppuVar19);
              plVar12 = local_4c0;
              local_5c8 = (undefined ****)pppppuVar19;
              local_5c0 = plVar22;
              if (plVar22 == (longlong *)0x0) {
                FUN_147586634(local_5d8,lVar18,&local_5c8);
              }
              else {
                LOCK();
                *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                UNLOCK();
                FUN_147586634(local_5d8,lVar18,&local_5c8);
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar22 = plVar12 + 1;
                  *(int *)plVar22 = (int)*plVar22 + -1;
                  UNLOCK();
                  if ((int)*plVar22 == 0) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                    }
                  }
                }
              }
            }
            dVar2 = (double)plVar24[1];
            dVar3 = (double)plVar24[2];
            dVar4 = (double)plVar24[3];
            dVar5 = (double)plVar24[6];
            dVar6 = (double)plVar24[4];
            dVar7 = (double)plVar24[5];
            dVar8 = (double)plVar24[7];
            dVar9 = (double)plVar24[8];
            dVar10 = (double)plVar24[9];
            uVar20 = FUN_147582be2(param_3);
            local_480 = local_480 | 3;
            local_4c8 = (undefined ****)&PTR_FUN_14bc054d0;
            local_4c0 = (longlong *)CONCAT44((float)dVar3,(float)dVar2);
            local_4b4 = CONCAT44((float)dVar6,(float)dVar5);
            local_4ac = CONCAT44((float)dVar8,(float)dVar7);
            local_4a4 = CONCAT44((float)dVar10,(float)dVar9);
            local_49c = 7.16064e-43;
            local_478 = DAT_14cc08218;
            local_474 = 0xffffffffffffffff;
            local_46c = 0;
            local_468 = 0;
            local_464 = local_5dc;
            local_460 = (undefined1)local_5cc;
            local_45c = local_5d0;
            local_580[0] = DAT_14cc08218;
            local_580[1] = -NAN;
            local_580[2] = -NAN;
            local_574 = 0;
            local_588 = 0;
            local_598 = 0;
            uStack_590 = 0;
            local_610 = (undefined ****)&local_4c8;
            local_618 = param_2;
            local_4b8 = (float)dVar4;
            FUN_149216f94(uVar20,&local_598,lVar18,local_580);
            if ((local_480 & 1) != 0) {
              pppppuVar19 = &local_4c8;
              if ((local_480 & 2) == 0) {
                pppppuVar19 = (undefined *****)local_4c8;
              }
              local_480 = local_480 & 0xfe;
              (*(code *)**pppppuVar19)(pppppuVar19,0);
              if ((local_480 & 2) == 0) {
                FUN_1400020a8(local_4c8);
              }
            }
          }
          plVar24 = plVar24 + 10;
          lVar17 = lVar17 + -0x50;
        } while (lVar17 != 0);
      }
      if (local_550 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_550 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*local_550)(local_550);
          LOCK();
          piVar1 = (int *)((longlong)local_550 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_550 + 0x10))(local_550);
          }
        }
      }
      FUN_149216dac(local_458);
      FUN_149217000(local_1f8);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444adb79 FUN_1444adb79 body=55 status=ok
// SIG undefined FUN_1444adb79(void)

void FUN_1444adb79(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc082c8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc082c8 = FUN_14171c317(FUN_1466d1c2c,uVar1,L"EMovieSceneControlRigSpaceType");
  }
  return;
}



// FUNCTION 1444adbb0 FUN_1444adbb0 body=2415 status=ok
// SIG undefined FUN_1444adbb0(void)

undefined8 FUN_1444adbb0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  int local_8c;
  int local_88;
  int local_84;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  code *local_68 [2];
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14001a7b2();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc084e0) &&
     (FUN_144b3d300(&DAT_14cc084e0), uVar3 = DAT_14c764f1c, uVar2 = DAT_14c764f14,
     uVar1 = DAT_14c764f0c, DAT_14cc084e0 == -1)) {
    uVar10 = FUN_140ce9674();
    FUN_1408ccbd2(local_68,uVar10);
    uVar5 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_68);
    uVar10 = FUN_14068e11a();
    FUN_1408ccbd2(local_68,uVar10);
    uVar6 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_68);
    uVar10 = FUN_1456aed04();
    FUN_1408ccbd2(local_68,uVar10);
    uVar7 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_68);
    DAT_14cc084d0 = (undefined4 *)0x0;
    DAT_14cc084d8 = 6;
    FUN_144a06ca8(&DAT_14cc084d0,6);
    puVar14 = DAT_14cc084d0;
    *DAT_14cc084d0 = uVar1;
    puVar14[1] = uVar2;
    puVar14[2] = uVar3;
    puVar14[3] = uVar5;
    puVar14[4] = uVar6;
    puVar14[5] = uVar7;
    atexit((_func_5014 *)&LAB_1444ae646);
    _Init_thread_footer(&DAT_14cc084e0);
  }
  if ((longlong)DAT_14cc084d8 != 0) {
    lVar8 = (longlong)DAT_14cc084d8 * 4;
    lVar15 = 0;
    do {
      if (*(int *)((longlong)DAT_14cc084d0 + lVar15) == *param_1) goto LAB_1444add59;
      lVar15 = lVar15 + 4;
    } while (lVar8 != lVar15);
  }
  lVar8 = (**(code **)(DAT_14cc012d0 + 0xa0))(&DAT_14cc012d0);
  lVar15 = *(longlong *)(lVar8 + 8);
  if ((lVar15 != 0) && ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0)) {
    if (DAT_14c948fa0 == 0) {
      local_58 = (code *)&DAT_1427db2a2;
      lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar15;
      FUN_1446f470e(local_50,L"ScriptStruct",1);
      local_b8 = &LAB_1468915ce;
      local_c0 = FUN_1427dc742;
      local_d0 = L"Engine";
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
      local_d8 = 0x10;
      local_e0 = 0x10000020;
      local_e8._0_4_ = 8;
      local_b0 = &local_58;
      FUN_14574b4b2(lVar15);
      DAT_14c948fa0 = lVar15;
      if (DAT_14c927740 == 0) {
        local_b0 = local_68;
        local_68[0] = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_146856450;
        local_c0 = FUN_1427b121c;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x0;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
        local_e0 = 8;
        local_e8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar9 = DAT_14c948fa0;
      lVar15 = DAT_14c927740;
      uVar10 = FUN_1449e2fb2();
      local_e8 = L"ScriptStruct";
      FUN_14574b446(uVar10,lVar9,lVar15,L"/Script/CoreUObject");
      lVar15 = *(longlong *)(lVar8 + 8);
      if (lVar15 == 0) goto LAB_1444adc99;
    }
    uVar10 = 0;
    if ((DAT_14c948fa0 == 0) || (lVar8 = *(longlong *)(lVar15 + 0x10), lVar8 == 0))
    goto LAB_1444add5b;
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
        DAT_14c948fa0 + 0x30)) {
      lVar9 = FUN_1408cc5f4();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
         (lVar8 = lVar9 + 0x30,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
          ) == lVar8)) {
LAB_1444add59:
        uVar10 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        goto LAB_1444add5b;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc084f8) && (FUN_144b3d300(&DAT_14cc084f8), DAT_14cc084f8 == -1))
      {
        lVar8 = FUN_145cd07f8();
        local_70 = 0;
        local_78 = 0;
        local_84 = 0;
        if (lVar8 != 0) {
          uVar17 = *(uint *)(lVar8 + 0xc);
          local_78 = (ulonglong)uVar17;
          if ((int)uVar17 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          local_84 = *(int *)(lVar8 + 0x10);
          if (local_84 == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            local_84 = *(int *)(lVar8 + 0x10);
            bVar20 = local_84 == 0;
            if (bVar20) {
              *(int *)(lVar8 + 0x10) = iVar19;
              local_84 = 0;
            }
            UNLOCK();
            if (bVar20) {
              local_84 = iVar19;
            }
          }
        }
        lVar8 = FUN_145cd0522();
        local_88 = 0;
        if (lVar8 != 0) {
          uVar17 = *(uint *)(lVar8 + 0xc);
          local_70 = (ulonglong)uVar17;
          if ((int)uVar17 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          local_88 = *(int *)(lVar8 + 0x10);
          if (local_88 == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            local_88 = *(int *)(lVar8 + 0x10);
            bVar20 = local_88 == 0;
            if (bVar20) {
              *(int *)(lVar8 + 0x10) = iVar19;
              local_88 = 0;
            }
            UNLOCK();
            if (bVar20) {
              local_88 = iVar19;
            }
          }
        }
        lVar8 = FUN_145cd0626();
        local_80 = 0;
        uVar17 = 0;
        local_8c = 0;
        if (lVar8 != 0) {
          uVar17 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          local_8c = *(int *)(lVar8 + 0x10);
          if (local_8c == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            local_8c = *(int *)(lVar8 + 0x10);
            bVar20 = local_8c == 0;
            if (bVar20) {
              *(int *)(lVar8 + 0x10) = iVar19;
              local_8c = 0;
            }
            UNLOCK();
            if (bVar20) {
              local_8c = iVar19;
            }
          }
        }
        lVar8 = FUN_145cd0b36();
        iVar18 = 0;
        if (lVar8 != 0) {
          uVar12 = *(uint *)(lVar8 + 0xc);
          local_80 = (ulonglong)uVar12;
          if ((int)uVar12 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar18 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            iVar18 = *(int *)(lVar8 + 0x10);
            bVar20 = iVar18 == 0;
            if (bVar20) {
              *(int *)(lVar8 + 0x10) = iVar19;
              iVar18 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar18 = iVar19;
            }
          }
        }
        lVar8 = FUN_145cd09d6();
        uVar13 = 0;
        uVar12 = 0;
        iVar19 = 0;
        if (lVar8 != 0) {
          uVar12 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar12 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar19 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar19 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar19;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
            }
            LOCK();
            iVar19 = *(int *)(lVar8 + 0x10);
            bVar20 = iVar19 == 0;
            if (bVar20) {
              *(int *)(lVar8 + 0x10) = iVar11;
              iVar19 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar19 = iVar11;
            }
          }
        }
        lVar8 = FUN_145cd0c96();
        iVar11 = 0;
        if (lVar8 != 0) {
          uVar13 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar13 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar11 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar11 = DAT_14c964868 + 1;
            UNLOCK();
            iVar16 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar11;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar16);
            }
            LOCK();
            iVar11 = *(int *)(lVar8 + 0x10);
            bVar20 = iVar11 == 0;
            if (bVar20) {
              *(int *)(lVar8 + 0x10) = iVar16;
              iVar11 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar11 = iVar16;
            }
          }
        }
        DAT_14cc084e8 = (undefined4 *)0x0;
        DAT_14cc084f0 = 6;
        FUN_14574b796(&DAT_14cc084e8,6,0);
        puVar14 = DAT_14cc084e8;
        *DAT_14cc084e8 = (int)local_78;
        puVar14[1] = local_84;
        puVar14[2] = (int)local_70;
        puVar14[3] = local_88;
        puVar14[4] = uVar17;
        puVar14[5] = local_8c;
        puVar14[6] = (int)local_80;
        puVar14[7] = iVar18;
        puVar14[8] = uVar12;
        puVar14[9] = iVar19;
        puVar14[10] = uVar13;
        puVar14[0xb] = iVar11;
        atexit((_func_5014 *)&LAB_1444ae657);
        _Init_thread_footer(&DAT_14cc084f8);
      }
      if ((longlong)DAT_14cc084f0 != 0) {
        lVar8 = (longlong)DAT_14cc084f0 << 3;
        puVar14 = DAT_14cc084e8;
        do {
          cVar4 = FUN_14793ed9a(puVar14,lVar15);
          if (cVar4 != '\0') goto LAB_1444adc99;
          puVar14 = puVar14 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      if ((longlong)DAT_14cacd6d0 != 0) {
        lVar8 = (longlong)DAT_14cacd6d0 * 8;
        lVar9 = DAT_14cacd6c8;
        do {
          lVar8 = lVar8 + -8;
          uVar10 = FUN_14793ed9a(lVar9,lVar15);
          if ((char)uVar10 != '\0') break;
          lVar9 = lVar9 + 8;
        } while (lVar8 != 0);
        goto LAB_1444add5b;
      }
    }
  }
LAB_1444adc99:
  uVar10 = 0;
LAB_1444add5b:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1444ae520 FUN_1444ae520 body=97 status=ok
// SIG undefined FUN_1444ae520(void)

void FUN_1444ae520(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140ce9674();
  FUN_1408ccbd2(local_28,uVar1);
  FUN_14001c1ae(local_28);
  (**(code **)(*param_1 + 0x98))(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444ae582 FUN_1444ae582 body=97 status=ok
// SIG undefined FUN_1444ae582(void)

void FUN_1444ae582(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14068e11a();
  FUN_1408ccbd2(local_28,uVar1);
  FUN_14001c1ae(local_28);
  (**(code **)(*param_1 + 0x98))(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444ae5e4 FUN_1444ae5e4 body=97 status=ok
// SIG undefined FUN_1444ae5e4(void)

void FUN_1444ae5e4(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1456aed04();
  FUN_1408ccbd2(local_28,uVar1);
  FUN_14001c1ae(local_28);
  (**(code **)(*param_1 + 0x98))(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444ae668 FUN_1444ae668 body=1300 status=ok
// SIG undefined FUN_1444ae668(void)

longlong FUN_1444ae668(char param_1,longlong param_2,longlong param_3,longlong *param_4,
                      longlong *param_5,longlong *param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = 0;
  if ((param_2 == 0) || (*param_4 == 0)) goto LAB_1444ae8a8;
  if ((*(longlong *)(param_3 + 0x140) != 0) && (lVar3 = *(longlong *)(param_3 + 0xd0), lVar3 != 0))
  {
    if (DAT_14cad2858 == 0) {
      local_80 = &local_60;
      local_60 = FUN_144a7958c;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_146395584;
      local_88 = &LAB_147a0ba80;
      local_90 = &LAB_14575ccce;
      local_98 = L"Engine";
      local_a0 = 0x40000000000;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      lVar6 = *(longlong *)(lVar3 + 0x658);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(lVar3 + 0x660);
        if ((DAT_14c950c29 & lVar6 != 0) != 0) goto LAB_1444aeaba;
        if (lVar6 != 0) goto LAB_1444ae71b;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_1444aeaba:
          FUN_1456cec3c(lVar6);
        }
LAB_1444ae71b:
        if (DAT_14cb06da8 == 0) {
          local_80 = &local_60;
          local_60 = FUN_1449e2820;
          local_70 = FUN_14081d0ea;
          local_78 = &LAB_1464003b0;
          local_88 = &LAB_147d17bdf;
          local_90 = &LAB_1417edf22;
          local_98 = L"Engine";
          local_a0 = 0;
          local_a8 = 0x10000000;
          local_b0 = 8;
          local_b8 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if (*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) {
          lVar4 = 0;
          iVar2 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)
          goto LAB_1444ae8a8;
          lVar4 = *param_5;
          if (lVar4 == 0) {
LAB_1444ae892:
            *param_7 = iVar2;
            lVar4 = *param_5;
          }
          else if (*param_6 != lVar4) {
            plVar8 = *(longlong **)(lVar3 + 0x658);
            if (plVar8 == (longlong *)0x0) {
              plVar8 = *(longlong **)(lVar3 + 0x660);
              if ((DAT_14c950c29 & plVar8 != (longlong *)0x0) != 0) goto LAB_1444aeac7;
              if (plVar8 != (longlong *)0x0) goto LAB_1444ae79b;
LAB_1444ae970:
              plVar8 = (longlong *)0x0;
            }
            else {
              if (DAT_14c950c29 != 0) {
LAB_1444aeac7:
                FUN_1456cec3c(plVar8);
                if (DAT_14cb06da8 == 0) {
                  local_80 = &local_60;
                  local_60 = FUN_1449e2820;
                  local_70 = FUN_14081d0ea;
                  local_78 = &LAB_1464003b0;
                  local_88 = &LAB_147d17bdf;
                  local_90 = &LAB_1417edf22;
                  local_98 = L"Engine";
                  local_a0 = 0;
                  local_a8 = 0x10000000;
                  local_b0 = 8;
                  local_b8 = 0x588;
                  FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                }
              }
LAB_1444ae79b:
              if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
                  != DAT_14cb06da8 + 0x30)) goto LAB_1444ae970;
            }
            lVar3 = (**(code **)(*plVar8 + 0x310))(plVar8);
            lVar4 = *param_5;
            iVar2 = -1;
            if ((lVar4 != 0) && (*(int *)(lVar3 + 0x98) != *(int *)(lVar3 + 0xc4))) {
              uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
              uVar7 = (uint)lVar4 & 0xffff;
              lVar6 = lVar3 + 200;
              if (*(longlong *)(lVar3 + 0xd0) != 0) {
                lVar6 = *(longlong *)(lVar3 + 0xd0);
              }
              iVar5 = *(int *)(lVar6 + (ulonglong)
                                       (*(int *)(lVar3 + 0xd8) - 1U &
                                       (int)((ulonglong)lVar4 >> 0x20) +
                                       ((uint)lVar4 << 0x10 | uVar7) +
                                       (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
              if (iVar5 != -1) {
                do {
                  plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar5 * 0x14);
                  if (*plVar8 == lVar4) {
                    if ((plVar8 != (longlong *)0x0) && (plVar8 + 1 != (longlong *)0x0)) {
                      iVar2 = (int)plVar8[1];
                    }
                    break;
                  }
                  iVar5 = *(int *)((longlong)plVar8 + 0xc);
                } while (iVar5 != -1);
              }
            }
            goto LAB_1444ae892;
          }
          *param_6 = lVar4;
          iVar2 = *param_7;
          if (iVar2 != -1) {
            local_60 = DAT_14cc08230;
            local_58 = *param_4;
            local_50 = iVar2;
            if (param_1 == '\0') {
              lVar4 = FUN_149289622(*(undefined8 *)(param_3 + 0x140),param_2,&local_60);
            }
            else {
              lVar4 = FUN_14792a902();
            }
            if (lVar4 != 0) goto LAB_1444ae8a8;
          }
        }
      }
    }
  }
  lVar4 = 0;
LAB_1444ae8a8:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1444aeb7e FUN_1444aeb7e body=1482 status=ok
// SIG undefined FUN_1444aeb7e(void)

undefined8 *
FUN_1444aeb7e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong **ppuVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined1 local_4c [4];
  ulonglong *local_48;
  undefined4 *local_40;
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_50 = param_4;
  cVar1 = FUN_1403f35db(*param_3,&DAT_14cc08448);
  if (cVar1 != '\0') {
    cVar1 = FUN_1444adbb0(&local_50);
    if (cVar1 != '\0') {
      if ((longlong)DAT_14cc08408 < 0) {
        local_48 = (ulonglong *)(DAT_14cc08408 & 0x7fffffffffffffff);
        if (DAT_14cc08414 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,local_48,1);
        }
        else {
          if (local_48 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)local_48);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08410 << 0x20;
        DAT_14cc08408 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08410 << 0x20;
        uVar5 = DAT_14cc08408 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f18;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08418 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08418 & 0x7fffffffffffffff);
        if (DAT_14cc08424 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08420 << 0x20;
        DAT_14cc08418 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08420 << 0x20;
        uVar5 = DAT_14cc08418 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f18;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08448 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08448 & 0x7fffffffffffffff);
        if (DAT_14cc08454 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08450 << 0x20;
        DAT_14cc08448 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08450 << 0x20;
        uVar5 = DAT_14cc08448 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_48 = (ulonglong *)&local_38;
      local_40 = &local_50;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08458 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08458 & 0x7fffffffffffffff);
        if (DAT_14cc08464 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08460 << 0x20;
        DAT_14cc08458 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08460 << 0x20;
        uVar5 = DAT_14cc08458 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_48 = (ulonglong *)&local_38;
      local_40 = &local_50;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08468 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08468 & 0x7fffffffffffffff);
        if (DAT_14cc08474 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08470 << 0x20;
        DAT_14cc08468 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08470 << 0x20;
        uVar5 = DAT_14cc08468 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f08;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08428 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08428 & 0x7fffffffffffffff);
        if (DAT_14cc08434 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08430 << 0x20;
        DAT_14cc08428 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08430 << 0x20;
        uVar5 = DAT_14cc08428 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f18;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08438 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08438 & 0x7fffffffffffffff);
        if (DAT_14cc08444 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08440 << 0x20;
        DAT_14cc08438 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08440 << 0x20;
        uVar5 = DAT_14cc08438 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f14;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444af14a FUN_1444af14a body=999 status=ok
// SIG undefined FUN_1444af14a(void)

code * FUN_1444af14a(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_60;
  code *local_58 [2];
  code *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14001a7b2();
  FUN_1446f470e(&local_60,L"Value",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_60 >> 0x10);
    uVar11 = (uint)local_60 & 0xffff;
    plVar10 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_2[8];
    }
    iVar5 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_60 >> 0x20) + ((uint)local_60 << 0x10 | uVar11) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar10 = (longlong *)(*param_2 + (longlong)iVar5 * 0x14);
        if (*plVar10 == local_60) goto LAB_1444af200;
        iVar5 = *(int *)((longlong)plVar10 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar10 = (longlong *)0x0;
LAB_1444af200:
  iVar5 = (int)plVar10[1];
  if (iVar5 == DAT_14c764f0c) {
    pcVar7 = FUN_14921c52c;
    goto LAB_1444af270;
  }
  if (iVar5 == DAT_14c764f14) {
    pcVar7 = FUN_14921c656;
    goto LAB_1444af270;
  }
  if (iVar5 == DAT_14c764f1c) {
    pcVar7 = FUN_14921c77c;
    goto LAB_1444af270;
  }
  uVar6 = FUN_140ce9674();
  FUN_1408ccbd2(local_58,uVar6);
  iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_58);
  if (iVar5 == iVar4) {
    pcVar7 = FUN_14921c8a8;
    goto LAB_1444af270;
  }
  lVar9 = plVar10[1];
  uVar6 = FUN_1456aed04();
  FUN_1408ccbd2(local_58,uVar6);
  iVar5 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_58);
  if ((int)lVar9 == iVar5) {
    pcVar7 = FUN_14921c9d2;
    goto LAB_1444af270;
  }
  lVar9 = plVar10[1];
  uVar6 = FUN_14068e11a();
  FUN_1408ccbd2(local_58,uVar6);
  iVar5 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_58);
  if ((int)lVar9 == iVar5) {
    pcVar7 = FUN_14921cb06;
    goto LAB_1444af270;
  }
  lVar8 = (**(code **)(DAT_14cc012d0 + 0xa0))(&DAT_14cc012d0);
  lVar9 = *(longlong *)(lVar8 + 8);
  if (lVar9 == 0) {
    pcVar7 = (code *)0x0;
    goto LAB_1444af270;
  }
  if (DAT_14c948fa0 == 0) {
    local_48 = (code *)&DAT_1427db2a2;
    lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948fa0 = lVar9;
    FUN_1446f470e(local_40,L"ScriptStruct",1);
    local_88 = &LAB_1468915ce;
    local_90 = FUN_1427dc742;
    local_a0 = L"Engine";
    local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
    local_a8 = 0x10;
    local_b0 = 0x10000020;
    local_b8._0_4_ = 8;
    local_80 = &local_48;
    FUN_14574b4b2(lVar9);
    DAT_14c948fa0 = lVar9;
    if (DAT_14c927740 == 0) {
      local_58[0] = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_146856450;
      local_90 = FUN_1427b121c;
      local_98 = L"Engine";
      local_a0 = (wchar_t *)0x0;
      local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
      local_b0 = 8;
      local_b8._0_4_ = 0x28;
      local_80 = local_58;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    lVar3 = DAT_14c948fa0;
    lVar9 = DAT_14c927740;
    uVar6 = FUN_1449e2fb2();
    local_b8 = L"ScriptStruct";
    FUN_14574b446(uVar6,lVar3,lVar9,L"/Script/CoreUObject");
    lVar9 = *(longlong *)(lVar8 + 8);
    if (lVar9 != 0) goto LAB_1444af34b;
    bVar12 = false;
LAB_1444af52b:
    bVar2 = bVar12;
    bVar12 = false;
  }
  else {
LAB_1444af34b:
    bVar2 = true;
    bVar12 = false;
    if ((DAT_14c948fa0 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x10), bVar12 = false, lVar9 != 0)) {
      bVar12 = true;
      if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) goto LAB_1444af52b;
      bVar12 = *(longlong *)
                (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
               DAT_14c948fa0 + 0x30;
    }
  }
  pcVar7 = FUN_14921bdc2;
  if (!bVar12) {
    pcVar7 = (code *)0x0;
  }
  if (!bVar2) {
    pcVar7 = (code *)0x0;
  }
LAB_1444af270:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar7;
}



// FUNCTION 1444af554 FUN_1444af554 body=1294 status=ok
// SIG undefined FUN_1444af554(void)

undefined8 *
FUN_1444af554(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong **ppuVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined1 local_4c [4];
  ulonglong *local_48;
  undefined4 *local_40;
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_50 = param_4;
  cVar1 = FUN_1403f35db(*param_3,&DAT_14cc08458);
  if (cVar1 != '\0') {
    cVar1 = FUN_1444adbb0(&local_50);
    if (cVar1 != '\0') {
      if ((longlong)DAT_14cc08408 < 0) {
        local_48 = (ulonglong *)(DAT_14cc08408 & 0x7fffffffffffffff);
        if (DAT_14cc08414 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,local_48,1);
        }
        else {
          if (local_48 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)local_48);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08410 << 0x20;
        DAT_14cc08408 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08410 << 0x20;
        uVar5 = DAT_14cc08408 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f18;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08418 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08418 & 0x7fffffffffffffff);
        if (DAT_14cc08424 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08420 << 0x20;
        DAT_14cc08418 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08420 << 0x20;
        uVar5 = DAT_14cc08418 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f18;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08458 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08458 & 0x7fffffffffffffff);
        if (DAT_14cc08464 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08460 << 0x20;
        DAT_14cc08458 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08460 << 0x20;
        uVar5 = DAT_14cc08458 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_48 = (ulonglong *)&local_38;
      local_40 = &local_50;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08478 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08478 & 0x7fffffffffffffff);
        if (DAT_14cc08484 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08480 << 0x20;
        DAT_14cc08478 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08480 << 0x20;
        uVar5 = DAT_14cc08478 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f08;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08428 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08428 & 0x7fffffffffffffff);
        if (DAT_14cc08434 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08430 << 0x20;
        DAT_14cc08428 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08430 << 0x20;
        uVar5 = DAT_14cc08428 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f18;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
      if ((longlong)DAT_14cc08438 < 0) {
        puVar6 = (ulonglong *)(DAT_14cc08438 & 0x7fffffffffffffff);
        if (DAT_14cc08444 == '\x01') {
          ppuVar7 = &local_48;
          FUN_1446f470e(ppuVar7,puVar6,1);
        }
        else {
          local_48 = puVar6;
          if (puVar6 == (ulonglong *)0x0) {
            uVar2 = 0;
          }
          else {
            sVar4 = strlen((char *)puVar6);
            uVar2 = (undefined4)sVar4;
          }
          local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
          ppuVar7 = (ulonglong **)&local_38;
          FUN_14001c09c(ppuVar7,&local_48,1);
        }
        uVar3 = (ulonglong)*(uint *)ppuVar7;
        uVar5 = (ulonglong)DAT_14cc08440 << 0x20;
        DAT_14cc08438 = uVar3;
      }
      else {
        uVar3 = (ulonglong)DAT_14cc08440 << 0x20;
        uVar5 = DAT_14cc08438 & 0xffffffff;
      }
      local_38 = (char *)(uVar5 | uVar3);
      local_40 = &DAT_14c764f14;
      local_48 = (ulonglong *)&local_38;
      FUN_14001ac2c(param_2,local_4c,&local_48,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444afa64 FUN_1444afa64 body=999 status=ok
// SIG undefined FUN_1444afa64(void)

code * FUN_1444afa64(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_60;
  code *local_58 [2];
  code *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14001a7b2();
  FUN_1446f470e(&local_60,L"Value",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_60 >> 0x10);
    uVar11 = (uint)local_60 & 0xffff;
    plVar10 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_2[8];
    }
    iVar5 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_60 >> 0x20) + ((uint)local_60 << 0x10 | uVar11) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar10 = (longlong *)(*param_2 + (longlong)iVar5 * 0x14);
        if (*plVar10 == local_60) goto LAB_1444afb1a;
        iVar5 = *(int *)((longlong)plVar10 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar10 = (longlong *)0x0;
LAB_1444afb1a:
  iVar5 = (int)plVar10[1];
  if (iVar5 == DAT_14c764f0c) {
    pcVar7 = FUN_14921cf16;
    goto LAB_1444afb8a;
  }
  if (iVar5 == DAT_14c764f14) {
    pcVar7 = FUN_14921d02c;
    goto LAB_1444afb8a;
  }
  if (iVar5 == DAT_14c764f1c) {
    pcVar7 = FUN_14921d13e;
    goto LAB_1444afb8a;
  }
  uVar6 = FUN_140ce9674();
  FUN_1408ccbd2(local_58,uVar6);
  iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_58);
  if (iVar5 == iVar4) {
    pcVar7 = FUN_14921d268;
    goto LAB_1444afb8a;
  }
  lVar9 = plVar10[1];
  uVar6 = FUN_1456aed04();
  FUN_1408ccbd2(local_58,uVar6);
  iVar5 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_58);
  if ((int)lVar9 == iVar5) {
    pcVar7 = FUN_14921d382;
    goto LAB_1444afb8a;
  }
  lVar9 = plVar10[1];
  uVar6 = FUN_14068e11a();
  FUN_1408ccbd2(local_58,uVar6);
  iVar5 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_58);
  if ((int)lVar9 == iVar5) {
    pcVar7 = FUN_14921d4a0;
    goto LAB_1444afb8a;
  }
  lVar8 = (**(code **)(DAT_14cc012d0 + 0xa0))(&DAT_14cc012d0);
  lVar9 = *(longlong *)(lVar8 + 8);
  if (lVar9 == 0) {
    pcVar7 = (code *)0x0;
    goto LAB_1444afb8a;
  }
  if (DAT_14c948fa0 == 0) {
    local_48 = (code *)&DAT_1427db2a2;
    lVar9 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948fa0 = lVar9;
    FUN_1446f470e(local_40,L"ScriptStruct",1);
    local_88 = &LAB_1468915ce;
    local_90 = FUN_1427dc742;
    local_a0 = L"Engine";
    local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
    local_a8 = 0x10;
    local_b0 = 0x10000020;
    local_b8._0_4_ = 8;
    local_80 = &local_48;
    FUN_14574b4b2(lVar9);
    DAT_14c948fa0 = lVar9;
    if (DAT_14c927740 == 0) {
      local_58[0] = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_146856450;
      local_90 = FUN_1427b121c;
      local_98 = L"Engine";
      local_a0 = (wchar_t *)0x0;
      local_a8 = CONCAT44(local_a8._4_4_,0x10000021);
      local_b0 = 8;
      local_b8._0_4_ = 0x28;
      local_80 = local_58;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    lVar3 = DAT_14c948fa0;
    lVar9 = DAT_14c927740;
    uVar6 = FUN_1449e2fb2();
    local_b8 = L"ScriptStruct";
    FUN_14574b446(uVar6,lVar3,lVar9,L"/Script/CoreUObject");
    lVar9 = *(longlong *)(lVar8 + 8);
    if (lVar9 != 0) goto LAB_1444afc65;
    bVar12 = false;
LAB_1444afe45:
    bVar2 = bVar12;
    bVar12 = false;
  }
  else {
LAB_1444afc65:
    bVar2 = true;
    bVar12 = false;
    if ((DAT_14c948fa0 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x10), bVar12 = false, lVar9 != 0)) {
      bVar12 = true;
      if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) goto LAB_1444afe45;
      bVar12 = *(longlong *)
                (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
               DAT_14c948fa0 + 0x30;
    }
  }
  pcVar7 = FUN_14921bf64;
  if (!bVar12) {
    pcVar7 = (code *)0x0;
  }
  if (!bVar2) {
    pcVar7 = (code *)0x0;
  }
LAB_1444afb8a:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar7;
}



// FUNCTION 1444afe4c FUN_1444afe4c body=49 status=ok
// SIG undefined FUN_1444afe4c(void)

void FUN_1444afe4c(void)

{
  FUN_1457f2ec5(DAT_14cc08648,DAT_14cc08650);
  if (DAT_14cc08648 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444afe8e FUN_1444afe8e body=389 status=ok
// SIG undefined FUN_1444afe8e(void)

undefined8 *
FUN_1444afe8e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_78 [36];
  undefined1 local_54 [8];
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_4c = param_4;
  FUN_1446f470e(local_54,L"NameSpace",1);
  local_40 = &DAT_14c764f1c;
  local_48 = local_54;
  FUN_14001ac2c(param_2,local_34,&local_48,0);
  FUN_1446f470e(local_54,L"Path",1);
  local_40 = &DAT_14c764f1c;
  local_48 = local_54;
  FUN_14001ac2c(param_2,local_34,&local_48,0);
  FUN_1446f470e(local_54,L"Default",1);
  local_48 = local_54;
  local_40 = &local_4c;
  FUN_14001ac2c(param_2,local_34,&local_48,0);
  FUN_1446f470e(local_54,L"Result",1);
  local_48 = local_54;
  local_40 = &local_4c;
  FUN_14001ac2c(param_2,local_34,&local_48,0);
  FUN_1446f470e(local_54,L"Found",1);
  local_40 = &DAT_14c764f08;
  local_48 = local_54;
  FUN_14001ac2c(param_2,local_34,&local_48,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b0014 FUN_1444b0014 body=76 status=ok
// SIG undefined FUN_1444b0014(void)

code * FUN_1444b0014(void)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(local_10,L"Default",1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return FUN_149220dfc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b0062 FUN_1444b0062 body=146 status=ok
// SIG undefined FUN_1444b0062(void)

void FUN_1444b0062(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,param_3,param_4);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    local_28 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2,&local_28,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b00f5 FUN_1444b00f5 body=55 status=ok
// SIG undefined FUN_1444b00f5(void)

void FUN_1444b00f5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc086b0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc086b0 = FUN_14171c317(FUN_1466d4794,uVar1,L"EControlRigDrawHierarchyMode");
  }
  return;
}



// FUNCTION 1444b012c FUN_1444b012c body=55 status=ok
// SIG undefined FUN_1444b012c(void)

void FUN_1444b012c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc08c20 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc08c20 = FUN_14171c317(FUN_1466dd89c,uVar1,L"EAimMode");
  }
  return;
}



// FUNCTION 1444b0163 FUN_1444b0163 body=55 status=ok
// SIG undefined FUN_1444b0163(void)

void FUN_1444b0163(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc08c80 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc08c80 = FUN_14171c317(FUN_1466ddde0,uVar1,L"EApplyTransformMode");
  }
  return;
}



// FUNCTION 1444b019a FUN_1444b019a body=55 status=ok
// SIG undefined FUN_1444b019a(void)

void FUN_1444b019a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc09058 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc09058 = FUN_14171c317(FUN_1466e3716,uVar1,L"ERigSwitchParentMode");
  }
  return;
}



// FUNCTION 1444b01d1 FUN_1444b01d1 body=47 status=ok
// SIG undefined FUN_1444b01d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b01d1(void)

{
  _DAT_14cc09530 = 0;
  if (DAT_14cc09528 != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(&DAT_14cc094e8);
  return;
}



// FUNCTION 1444b0202 FUN_1444b0202 body=97 status=ok
// SIG undefined FUN_1444b0202(void)

void FUN_1444b0202(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14574b8de();
  FUN_1408ccbd2(local_28,uVar1);
  FUN_14001c1ae(local_28);
  (**(code **)(*param_1 + 0x98))(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b0264 FUN_1444b0264 body=863 status=ok
// SIG undefined FUN_1444b0264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b0264(void)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 *local_90;
  ulonglong *local_88;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0a140) {
    FUN_144b3d300(&DAT_14cc0a140);
    if (DAT_14cc0a140 == -1) {
      DAT_14cc0a130 = 0;
      _DAT_14cc0a138 = 0;
      atexit((_func_5014 *)&LAB_1444b05c4);
      _Init_thread_footer(&DAT_14cc0a140);
    }
  }
  if (DAT_14cc0a138 == 0) {
    FUN_14001a7b2();
    local_70 = DAT_14c764f08;
    local_6c = DAT_14c764f0c;
    local_68 = DAT_14c764f14;
    local_64 = DAT_14c764f18;
    uVar1 = FUN_14068e11a();
    FUN_1408ccbd2(local_80,uVar1);
    local_60 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_14016b782();
    FUN_1408ccbd2(local_80,uVar1);
    local_5c = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_1456aed04();
    FUN_1408ccbd2(local_80,uVar1);
    local_58 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_140ce9674();
    FUN_1408ccbd2(local_80,uVar1);
    local_54 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_140bf8bc4();
    FUN_1408ccbd2(local_80,uVar1);
    local_50 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_14574b8de();
    FUN_1408ccbd2(local_80,uVar1);
    local_4c = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    local_48 = DAT_14c764f24;
    local_44 = DAT_14c764f28;
    local_40 = DAT_14c764f30;
    local_3c = DAT_14c764f34;
    uVar1 = FUN_14068e11a();
    FUN_1408ccbd2(local_80,uVar1);
    FUN_14001c1ae(local_80);
    local_38 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_14016b782();
    FUN_1408ccbd2(local_80,uVar1);
    FUN_14001c1ae(local_80);
    local_34 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_1456aed04();
    FUN_1408ccbd2(local_80,uVar1);
    FUN_14001c1ae(local_80);
    local_30 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_140ce9674();
    FUN_1408ccbd2(local_80,uVar1);
    FUN_14001c1ae(local_80);
    local_2c = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_140bf8bc4();
    FUN_1408ccbd2(local_80,uVar1);
    FUN_14001c1ae(local_80);
    local_28 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    uVar1 = FUN_14574b8de();
    FUN_1408ccbd2(local_80,uVar1);
    FUN_14001c1ae(local_80);
    local_24 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_80);
    local_88 = &local_20;
    local_90 = &local_70;
    FUN_140aece26(&DAT_14cc0a130);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b05d6 FUN_1444b05d6 body=97 status=ok
// SIG undefined FUN_1444b05d6(void)

void FUN_1444b05d6(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14016b782();
  FUN_1408ccbd2(local_28,uVar1);
  FUN_14001c1ae(local_28);
  (**(code **)(*param_1 + 0x98))(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b0638 FUN_1444b0638 body=97 status=ok
// SIG undefined FUN_1444b0638(void)

void FUN_1444b0638(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140bf8bc4();
  FUN_1408ccbd2(local_28,uVar1);
  FUN_14001c1ae(local_28);
  (**(code **)(*param_1 + 0x98))(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b069a FUN_1444b069a body=916 status=ok
// SIG undefined FUN_1444b069a(void)

code * FUN_1444b069a(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14001a7b2();
  FUN_1446f470e(&local_38,L"Value",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_38 >> 0x10);
    uVar8 = (uint)local_38 & 0xffff;
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar8) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)(*param_2 + (longlong)iVar4 * 0x14);
        if (*plVar7 == local_38) goto LAB_1444b0744;
        iVar4 = *(int *)((longlong)plVar7 + 0xc);
      } while (iVar4 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1444b0744:
  iVar4 = (int)plVar7[1];
  if (iVar4 == DAT_14c764f08) {
    pcVar5 = FUN_14924d634;
  }
  else if (iVar4 == DAT_14c764f0c) {
    pcVar5 = FUN_14924d734;
  }
  else if (iVar4 == DAT_14c764f14) {
    pcVar5 = FUN_14924d838;
  }
  else if (iVar4 == DAT_14c764f18) {
    pcVar5 = FUN_14924d938;
  }
  else {
    uVar6 = FUN_14068e11a();
    FUN_1408ccbd2(local_30,uVar6);
    iVar3 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
    if (iVar4 == iVar3) {
      pcVar5 = FUN_14924da38;
    }
    else {
      lVar2 = plVar7[1];
      uVar6 = FUN_14016b782();
      FUN_1408ccbd2(local_30,uVar6);
      iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
      if ((int)lVar2 == iVar4) {
        pcVar5 = FUN_14924db46;
      }
      else {
        lVar2 = plVar7[1];
        uVar6 = FUN_1456aed04();
        FUN_1408ccbd2(local_30,uVar6);
        iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
        if ((int)lVar2 == iVar4) {
          pcVar5 = FUN_14924dc54;
        }
        else {
          lVar2 = plVar7[1];
          uVar6 = FUN_140ce9674();
          FUN_1408ccbd2(local_30,uVar6);
          iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
          if ((int)lVar2 == iVar4) {
            pcVar5 = FUN_14924dd64;
          }
          else {
            lVar2 = plVar7[1];
            uVar6 = FUN_140bf8bc4();
            FUN_1408ccbd2(local_30,uVar6);
            iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
            if ((int)lVar2 == iVar4) {
              pcVar5 = FUN_14924de72;
            }
            else {
              lVar2 = plVar7[1];
              uVar6 = FUN_14574b8de();
              FUN_1408ccbd2(local_30,uVar6);
              iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
              if ((int)lVar2 == iVar4) {
                pcVar5 = FUN_14924df78;
              }
              else {
                iVar4 = (int)plVar7[1];
                if (iVar4 == DAT_14c764f24) {
                  pcVar5 = FUN_14924e084;
                }
                else if (iVar4 == DAT_14c764f28) {
                  pcVar5 = FUN_14924e194;
                }
                else if (iVar4 == DAT_14c764f30) {
                  pcVar5 = FUN_14924e2a4;
                }
                else if (iVar4 == DAT_14c764f34) {
                  pcVar5 = FUN_14924e3b4;
                }
                else {
                  iVar3 = FUN_1444ae582(&DAT_14cc012d0);
                  if (iVar4 == iVar3) {
                    pcVar5 = FUN_14924e4c4;
                  }
                  else {
                    lVar2 = plVar7[1];
                    iVar4 = FUN_1444b05d6(&DAT_14cc012d0);
                    if ((int)lVar2 == iVar4) {
                      pcVar5 = FUN_14924e5d4;
                    }
                    else {
                      lVar2 = plVar7[1];
                      iVar4 = FUN_1444ae5e4(&DAT_14cc012d0);
                      if ((int)lVar2 == iVar4) {
                        pcVar5 = FUN_14924e6e4;
                      }
                      else {
                        lVar2 = plVar7[1];
                        iVar4 = FUN_1444ae520(&DAT_14cc012d0);
                        if ((int)lVar2 == iVar4) {
                          pcVar5 = FUN_14924e7f4;
                        }
                        else {
                          lVar2 = plVar7[1];
                          iVar4 = FUN_1444b0638(&DAT_14cc012d0);
                          if ((int)lVar2 == iVar4) {
                            pcVar5 = FUN_14924e904;
                          }
                          else {
                            lVar2 = plVar7[1];
                            iVar4 = FUN_1444b0202(&DAT_14cc012d0);
                            pcVar5 = (code *)0x0;
                            if ((int)lVar2 == iVar4) {
                              pcVar5 = FUN_14924ea14;
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
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar5;
}



// FUNCTION 1444b0a40 FUN_1444b0a40 body=916 status=ok
// SIG undefined FUN_1444b0a40(void)

code * FUN_1444b0a40(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14001a7b2();
  FUN_1446f470e(&local_38,L"Value",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_38 >> 0x10);
    uVar8 = (uint)local_38 & 0xffff;
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar8) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)(*param_2 + (longlong)iVar4 * 0x14);
        if (*plVar7 == local_38) goto LAB_1444b0aea;
        iVar4 = *(int *)((longlong)plVar7 + 0xc);
      } while (iVar4 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1444b0aea:
  iVar4 = (int)plVar7[1];
  if (iVar4 == DAT_14c764f08) {
    pcVar5 = FUN_14924ee00;
  }
  else if (iVar4 == DAT_14c764f0c) {
    pcVar5 = FUN_14924ef0a;
  }
  else if (iVar4 == DAT_14c764f14) {
    pcVar5 = FUN_14924f030;
  }
  else if (iVar4 == DAT_14c764f18) {
    pcVar5 = FUN_14924f13a;
  }
  else {
    uVar6 = FUN_14068e11a();
    FUN_1408ccbd2(local_30,uVar6);
    iVar3 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
    if (iVar4 == iVar3) {
      pcVar5 = FUN_14924f252;
    }
    else {
      lVar2 = plVar7[1];
      uVar6 = FUN_14016b782();
      FUN_1408ccbd2(local_30,uVar6);
      iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
      if ((int)lVar2 == iVar4) {
        pcVar5 = FUN_14924f3c4;
      }
      else {
        lVar2 = plVar7[1];
        uVar6 = FUN_1456aed04();
        FUN_1408ccbd2(local_30,uVar6);
        iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
        if ((int)lVar2 == iVar4) {
          pcVar5 = FUN_14924f5d2;
        }
        else {
          lVar2 = plVar7[1];
          uVar6 = FUN_140ce9674();
          FUN_1408ccbd2(local_30,uVar6);
          iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
          if ((int)lVar2 == iVar4) {
            pcVar5 = FUN_14924f7a6;
          }
          else {
            lVar2 = plVar7[1];
            uVar6 = FUN_140bf8bc4();
            FUN_1408ccbd2(local_30,uVar6);
            iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
            if ((int)lVar2 == iVar4) {
              pcVar5 = FUN_14924f8c0;
            }
            else {
              lVar2 = plVar7[1];
              uVar6 = FUN_14574b8de();
              FUN_1408ccbd2(local_30,uVar6);
              iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
              if ((int)lVar2 == iVar4) {
                pcVar5 = FUN_14924f9d6;
              }
              else {
                iVar4 = (int)plVar7[1];
                if (iVar4 == DAT_14c764f24) {
                  pcVar5 = FUN_14924fafa;
                }
                else if (iVar4 == DAT_14c764f28) {
                  pcVar5 = FUN_14924fc2e;
                }
                else if (iVar4 == DAT_14c764f30) {
                  pcVar5 = FUN_14924fd7c;
                }
                else if (iVar4 == DAT_14c764f34) {
                  pcVar5 = FUN_14924feb0;
                }
                else {
                  iVar3 = FUN_1444ae582(&DAT_14cc012d0);
                  if (iVar4 == iVar3) {
                    pcVar5 = FUN_14924fff0;
                  }
                  else {
                    lVar2 = plVar7[1];
                    iVar4 = FUN_1444b05d6(&DAT_14cc012d0);
                    if ((int)lVar2 == iVar4) {
                      pcVar5 = FUN_14925010a;
                    }
                    else {
                      lVar2 = plVar7[1];
                      iVar4 = FUN_1444ae5e4(&DAT_14cc012d0);
                      if ((int)lVar2 == iVar4) {
                        pcVar5 = FUN_149250224;
                      }
                      else {
                        lVar2 = plVar7[1];
                        iVar4 = FUN_1444ae520(&DAT_14cc012d0);
                        if ((int)lVar2 == iVar4) {
                          pcVar5 = FUN_14925033e;
                        }
                        else {
                          lVar2 = plVar7[1];
                          iVar4 = FUN_1444b0638(&DAT_14cc012d0);
                          if ((int)lVar2 == iVar4) {
                            pcVar5 = FUN_149250484;
                          }
                          else {
                            lVar2 = plVar7[1];
                            iVar4 = FUN_1444b0202(&DAT_14cc012d0);
                            pcVar5 = (code *)0x0;
                            if ((int)lVar2 == iVar4) {
                              pcVar5 = FUN_1492505ca;
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
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar5;
}



// FUNCTION 1444b0dd6 FUN_1444b0dd6 body=916 status=ok
// SIG undefined FUN_1444b0dd6(void)

code * FUN_1444b0dd6(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14001a7b2();
  FUN_1446f470e(&local_38,L"Value",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_38 >> 0x10);
    uVar8 = (uint)local_38 & 0xffff;
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar8) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)(*param_2 + (longlong)iVar4 * 0x14);
        if (*plVar7 == local_38) goto LAB_1444b0e80;
        iVar4 = *(int *)((longlong)plVar7 + 0xc);
      } while (iVar4 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1444b0e80:
  iVar4 = (int)plVar7[1];
  if (iVar4 == DAT_14c764f08) {
    pcVar5 = FUN_149250b30;
  }
  else if (iVar4 == DAT_14c764f0c) {
    pcVar5 = FUN_149250bbe;
  }
  else if (iVar4 == DAT_14c764f14) {
    pcVar5 = FUN_149250c50;
  }
  else if (iVar4 == DAT_14c764f18) {
    pcVar5 = FUN_149250cde;
  }
  else {
    uVar6 = FUN_14068e11a();
    FUN_1408ccbd2(local_30,uVar6);
    iVar3 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
    if (iVar4 == iVar3) {
      pcVar5 = FUN_149250d6e;
    }
    else {
      lVar2 = plVar7[1];
      uVar6 = FUN_14016b782();
      FUN_1408ccbd2(local_30,uVar6);
      iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
      if ((int)lVar2 == iVar4) {
        pcVar5 = FUN_149250e08;
      }
      else {
        lVar2 = plVar7[1];
        uVar6 = FUN_1456aed04();
        FUN_1408ccbd2(local_30,uVar6);
        iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
        if ((int)lVar2 == iVar4) {
          pcVar5 = FUN_149250ea2;
        }
        else {
          lVar2 = plVar7[1];
          uVar6 = FUN_140ce9674();
          FUN_1408ccbd2(local_30,uVar6);
          iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
          if ((int)lVar2 == iVar4) {
            pcVar5 = FUN_149250f3c;
          }
          else {
            lVar2 = plVar7[1];
            uVar6 = FUN_140bf8bc4();
            FUN_1408ccbd2(local_30,uVar6);
            iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
            if ((int)lVar2 == iVar4) {
              pcVar5 = FUN_149250fd0;
            }
            else {
              lVar2 = plVar7[1];
              uVar6 = FUN_14574b8de();
              FUN_1408ccbd2(local_30,uVar6);
              iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
              if ((int)lVar2 == iVar4) {
                pcVar5 = FUN_149251062;
              }
              else {
                iVar4 = (int)plVar7[1];
                if (iVar4 == DAT_14c764f24) {
                  pcVar5 = FUN_1492510fa;
                }
                else if (iVar4 == DAT_14c764f28) {
                  pcVar5 = FUN_149251196;
                }
                else if (iVar4 == DAT_14c764f30) {
                  pcVar5 = FUN_149251232;
                }
                else if (iVar4 == DAT_14c764f34) {
                  pcVar5 = FUN_1492512ce;
                }
                else {
                  iVar3 = FUN_1444ae582(&DAT_14cc012d0);
                  if (iVar4 == iVar3) {
                    pcVar5 = FUN_14925136a;
                  }
                  else {
                    lVar2 = plVar7[1];
                    iVar4 = FUN_1444b05d6(&DAT_14cc012d0);
                    if ((int)lVar2 == iVar4) {
                      pcVar5 = FUN_149251406;
                    }
                    else {
                      lVar2 = plVar7[1];
                      iVar4 = FUN_1444ae5e4(&DAT_14cc012d0);
                      if ((int)lVar2 == iVar4) {
                        pcVar5 = FUN_1492514a2;
                      }
                      else {
                        lVar2 = plVar7[1];
                        iVar4 = FUN_1444ae520(&DAT_14cc012d0);
                        if ((int)lVar2 == iVar4) {
                          pcVar5 = FUN_14925153e;
                        }
                        else {
                          lVar2 = plVar7[1];
                          iVar4 = FUN_1444b0638(&DAT_14cc012d0);
                          if ((int)lVar2 == iVar4) {
                            pcVar5 = FUN_1492515da;
                          }
                          else {
                            lVar2 = plVar7[1];
                            iVar4 = FUN_1444b0202(&DAT_14cc012d0);
                            pcVar5 = (code *)0x0;
                            if ((int)lVar2 == iVar4) {
                              pcVar5 = FUN_149251676;
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
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar5;
}



// FUNCTION 1444b116c FUN_1444b116c body=916 status=ok
// SIG undefined FUN_1444b116c(void)

code * FUN_1444b116c(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14001a7b2();
  FUN_1446f470e(&local_38,L"Value",1);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)((ulonglong)local_38 >> 0x10);
    uVar8 = (uint)local_38 & 0xffff;
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)local_38 >> 0x20) + ((uint)local_38 << 0x10 | uVar8) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)(*param_2 + (longlong)iVar4 * 0x14);
        if (*plVar7 == local_38) goto LAB_1444b1216;
        iVar4 = *(int *)((longlong)plVar7 + 0xc);
      } while (iVar4 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1444b1216:
  iVar4 = (int)plVar7[1];
  if (iVar4 == DAT_14c764f08) {
    pcVar5 = FUN_149251a44;
  }
  else if (iVar4 == DAT_14c764f0c) {
    pcVar5 = FUN_149251ae0;
  }
  else if (iVar4 == DAT_14c764f14) {
    pcVar5 = FUN_149251b90;
  }
  else if (iVar4 == DAT_14c764f18) {
    pcVar5 = FUN_149251c24;
  }
  else {
    uVar6 = FUN_14068e11a();
    FUN_1408ccbd2(local_30,uVar6);
    iVar3 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
    if (iVar4 == iVar3) {
      pcVar5 = FUN_149251cc4;
    }
    else {
      lVar2 = plVar7[1];
      uVar6 = FUN_14016b782();
      FUN_1408ccbd2(local_30,uVar6);
      iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
      if ((int)lVar2 == iVar4) {
        pcVar5 = FUN_149251db4;
      }
      else {
        lVar2 = plVar7[1];
        uVar6 = FUN_1456aed04();
        FUN_1408ccbd2(local_30,uVar6);
        iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
        if ((int)lVar2 == iVar4) {
          pcVar5 = FUN_149251f4a;
        }
        else {
          lVar2 = plVar7[1];
          uVar6 = FUN_140ce9674();
          FUN_1408ccbd2(local_30,uVar6);
          iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
          if ((int)lVar2 == iVar4) {
            pcVar5 = FUN_1492520a8;
          }
          else {
            lVar2 = plVar7[1];
            uVar6 = FUN_140bf8bc4();
            FUN_1408ccbd2(local_30,uVar6);
            iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
            if ((int)lVar2 == iVar4) {
              pcVar5 = FUN_149252156;
            }
            else {
              lVar2 = plVar7[1];
              uVar6 = FUN_14574b8de();
              FUN_1408ccbd2(local_30,uVar6);
              iVar4 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,local_30);
              if ((int)lVar2 == iVar4) {
                pcVar5 = FUN_149252202;
              }
              else {
                iVar4 = (int)plVar7[1];
                if (iVar4 == DAT_14c764f24) {
                  pcVar5 = FUN_1492522ae;
                }
                else if (iVar4 == DAT_14c764f28) {
                  pcVar5 = FUN_149252372;
                }
                else if (iVar4 == DAT_14c764f30) {
                  pcVar5 = FUN_149252450;
                }
                else if (iVar4 == DAT_14c764f34) {
                  pcVar5 = FUN_149252514;
                }
                else {
                  iVar3 = FUN_1444ae582(&DAT_14cc012d0);
                  if (iVar4 == iVar3) {
                    pcVar5 = FUN_1492525e4;
                  }
                  else {
                    lVar2 = plVar7[1];
                    iVar4 = FUN_1444b05d6(&DAT_14cc012d0);
                    if ((int)lVar2 == iVar4) {
                      pcVar5 = FUN_149252698;
                    }
                    else {
                      lVar2 = plVar7[1];
                      iVar4 = FUN_1444ae5e4(&DAT_14cc012d0);
                      if ((int)lVar2 == iVar4) {
                        pcVar5 = FUN_14925274c;
                      }
                      else {
                        lVar2 = plVar7[1];
                        iVar4 = FUN_1444ae520(&DAT_14cc012d0);
                        if ((int)lVar2 == iVar4) {
                          pcVar5 = FUN_149252800;
                        }
                        else {
                          lVar2 = plVar7[1];
                          iVar4 = FUN_1444b0638(&DAT_14cc012d0);
                          if ((int)lVar2 == iVar4) {
                            pcVar5 = FUN_1492528e8;
                          }
                          else {
                            lVar2 = plVar7[1];
                            iVar4 = FUN_1444b0202(&DAT_14cc012d0);
                            pcVar5 = (code *)0x0;
                            if ((int)lVar2 == iVar4) {
                              pcVar5 = FUN_1492529d0;
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
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar5;
}



// FUNCTION 1444b1501 FUN_1444b1501 body=55 status=ok
// SIG undefined FUN_1444b1501(void)

void FUN_1444b1501(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0a9f0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0a9f0 = FUN_14171c317(FUN_14670a208,uVar1,L"EControlRigCurveAlignment");
  }
  return;
}



// FUNCTION 1444b1538 FUN_1444b1538 body=55 status=ok
// SIG undefined FUN_1444b1538(void)

void FUN_1444b1538(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0aae0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0aae0 = FUN_14171c317(FUN_14670bb95,uVar1,L"EControlRigModifyBoneMode");
  }
  return;
}



// FUNCTION 1444b156f FUN_1444b156f body=578 status=ok
// SIG undefined FUN_1444b156f(void)

void FUN_1444b156f(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != 0) {
    local_68 = DAT_14c8464f0;
    local_78 = (undefined4)DAT_14c8464e0;
    uStack_74 = DAT_14c8464e0._4_4_;
    uStack_70 = (undefined4)DAT_14c8464e8;
    uStack_6c = DAT_14c8464e8._4_4_;
    iVar3 = *(int *)(param_1 + 8);
    uVar6 = (uint)*(ushort *)(*param_3 + 0x14 + (longlong)iVar3 * 0x80);
    uVar11 = 0xffffffff;
    if (uVar6 != 0xffff) {
      uVar11 = uVar6;
    }
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1474ff5a6(param_2,iVar4);
    }
    lVar9 = *param_2;
    lVar8 = (longlong)iVar4 * 0x50;
    *(undefined8 *)(lVar9 + 0x10 + lVar8) = local_68;
    *(undefined8 *)(lVar9 + lVar8) = CONCAT44(uStack_74,local_78);
    ((undefined8 *)(lVar9 + lVar8))[1] = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(lVar9 + 0x18 + lVar8) = 0;
    *(uint *)(lVar9 + 0x20 + lVar8) = uVar11;
    *(int *)(lVar9 + 0x24 + lVar8) = iVar3;
    *(undefined8 *)(lVar9 + 0x28 + lVar8) = 0xbff0000000000000;
    puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar9 + 0x40 + lVar8);
    *puVar2 = 0;
    puVar2[1] = 0;
    if (*(int *)(param_1 + 0x18) < 2) {
      if (*(int *)(param_1 + 0x18) == 1) {
        FUN_1444b156f(**(undefined8 **)(param_1 + 0x10),param_2,param_3,param_4);
      }
      else {
        uVar7 = 0xffffffff;
        if ((longlong)(int)param_4[1] != 0) {
          lVar9 = (longlong)(int)param_4[1] << 2;
          lVar8 = 0;
          do {
            if (*(uint *)(*param_4 + lVar8 * 4) == uVar11) {
              uVar7 = (undefined4)lVar8;
              break;
            }
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + -4;
          } while (lVar9 != 0);
        }
        *(undefined4 *)(param_2 + 5) = uVar7;
      }
    }
    else {
      param_2 = param_2 + 7;
      local_88 = (longlong)iVar3;
      local_80 = param_3;
      FUN_1492c055a(param_2);
      if (0 < *(int *)(param_1 + 0x18)) {
        lVar8 = 0;
        lVar9 = 0;
        local_90 = param_4;
        do {
          lVar5 = *param_2;
          iVar3 = *(int *)(lVar5 + 8 + lVar8);
          *(uint *)(lVar5 + 8 + lVar8) = iVar3 + 1U;
          if (*(uint *)(lVar5 + 0xc + lVar8) < iVar3 + 1U) {
            FUN_1474ff5a6((longlong *)(lVar5 + lVar8),iVar3);
          }
          lVar5 = *(longlong *)(lVar5 + lVar8);
          lVar10 = (longlong)iVar3 * 0x50;
          *(undefined8 *)(lVar5 + 0x10 + lVar10) = local_68;
          puVar1 = (undefined4 *)(lVar5 + lVar10);
          *puVar1 = local_78;
          puVar1[1] = uStack_74;
          puVar1[2] = uStack_70;
          puVar1[3] = uStack_6c;
          *(undefined8 *)(lVar5 + 0x18 + lVar10) = 0;
          *(uint *)(lVar5 + 0x20 + lVar10) = uVar11;
          *(int *)(lVar5 + 0x24 + lVar10) = (int)local_88;
          *(undefined8 *)(lVar5 + 0x28 + lVar10) = 0xbff0000000000000;
          puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar10);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar10);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined4 *)(*param_2 + 0x30 + lVar8) = *(undefined4 *)(param_1 + 8);
          FUN_1444b156f(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9 * 8),*param_2 + lVar8,
                        local_80,local_90);
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x48;
        } while (lVar9 < *(int *)(param_1 + 0x18));
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444b17b2 FUN_1444b17b2 body=55 status=ok
// SIG undefined FUN_1444b17b2(void)

void FUN_1444b17b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ad08 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0ad08 = FUN_14171c317(FUN_14670e980,uVar1,L"EConstraintInterpType");
  }
  return;
}



// FUNCTION 1444b17f8 FUN_1444b17f8 body=5858 status=ok
// SIG undefined FUN_1444b17f8(void)

void FUN_1444b17f8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  code cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  longlong *plVar24;
  int *piVar25;
  undefined4 *puVar26;
  code *pcVar27;
  longlong *plVar28;
  float fVar29;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  uint local_1b0;
  uint local_1a8;
  ulonglong local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  undefined8 *local_180;
  code *local_178;
  code *local_170;
  undefined1 local_161;
  code *local_160;
  int *local_158;
  longlong *local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined8 local_124;
  undefined1 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  longlong *local_108;
  longlong *local_100;
  uint *local_f8;
  int local_f0;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1401abe9c(param_5,&local_f8);
  local_158 = (int *)(param_3 + 0x10);
  lVar11 = FUN_1400a65d2(param_5 + 2,(int *)(param_3 + 0x10));
  if ((local_f0 < 1) || (local_f8[1] == 0)) {
LAB_1444b18ff:
    pcVar27 = (code *)0x0;
    plVar24 = (longlong *)0x0;
    plVar28 = (longlong *)0x0;
  }
  else {
    uVar10 = *local_f8;
    plVar24 = (longlong *)0x0;
    pcVar27 = (code *)0x0;
    if ((int)uVar10 < 0) goto LAB_1444b18ff;
    plVar28 = (longlong *)0x0;
    if ((int)uVar10 < DAT_14c9647dc) {
      plVar24 = (longlong *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if (((plVar24 == (longlong *)0x0) || (*(uint *)(plVar24 + 2) != local_f8[1])) ||
         ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) goto LAB_1444b18ff;
      plVar24 = (longlong *)*plVar24;
      pcVar27 = (code *)CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),plVar24 != (longlong *)0x0);
      plVar28 = (longlong *)0x0;
      if ((lVar11 == 0) || (plVar24 == (longlong *)0x0)) goto LAB_1444b1902;
      lVar11 = (**(code **)(*plVar24 + 0x180))(plVar24);
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = (**(code **)(*plVar24 + 0x180))(plVar24);
        bVar4 = *(byte *)(lVar11 + 0x152);
        if ((bVar4 == 1) || ((lVar11 = 0, bVar4 < 7 && ((0x68U >> (bVar4 & 0x1f) & 1) != 0)))) {
          lVar11 = (**(code **)(*plVar24 + 0x180))(plVar24);
        }
      }
      plVar28 = (longlong *)FUN_1491ff5c4(*(undefined8 *)(param_1 + 8));
      if (plVar28 == (longlong *)0x0) goto LAB_1444b2109;
      plVar17 = (longlong *)plVar28[0x6c];
      plVar19 = (longlong *)plVar28[0x6d];
      if (plVar19 == (longlong *)0x0) {
        if (plVar17 == (longlong *)0x0) goto LAB_1444b275e;
        lVar12 = *plVar17;
LAB_1444b247e:
        lVar12 = (**(code **)(lVar12 + 0x28))(plVar17);
      }
      else {
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar19 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar25 = (int *)((longlong)plVar19 + 0xc);
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (*piVar25 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        if (plVar17 == (longlong *)0x0) {
LAB_1444b275e:
          plVar19 = (longlong *)FUN_14001cc68(0x50,0x10);
          plVar19[1] = (longlong)&DAT_100000001;
          *plVar19 = (longlong)&PTR_FUN_14bb75f10;
          local_108 = plVar19 + 2;
          plVar19[2] = (longlong)&PTR_FUN_14bb6a9d0;
          plVar19[3] = 0;
          plVar19[4] = 0;
          plVar19[5] = 0;
          *(undefined4 *)(plVar19 + 6) = 2;
          *(undefined8 *)((longlong)plVar19 + 0x34) = 0;
          *(undefined8 *)((longlong)plVar19 + 0x3c) = 0;
          *(undefined4 *)((longlong)plVar19 + 0x44) = 0;
          plVar19[9] = 2;
          local_100 = plVar19;
          if (plVar19 == (longlong *)0x0) {
            FUN_14575d3d6(plVar28);
          }
          else {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            FUN_14575d3d6(plVar28);
            LOCK();
            plVar17 = plVar19 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar25 = (int *)((longlong)plVar19 + 0xc);
              *piVar25 = *piVar25 + -1;
              UNLOCK();
              if (*piVar25 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
        }
        plVar17 = (longlong *)plVar28[0x6c];
        plVar19 = (longlong *)plVar28[0x6d];
        if (plVar19 == (longlong *)0x0) {
          lVar12 = *plVar17;
          goto LAB_1444b247e;
        }
        LOCK();
        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
        UNLOCK();
        lVar12 = (**(code **)(*plVar17 + 0x28))();
        LOCK();
        plVar17 = plVar19 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar25 = (int *)((longlong)plVar19 + 0xc);
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (*piVar25 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      if (lVar12 == 0) {
LAB_1444b2738:
        puVar20 = (undefined8 *)plVar28[0x6c];
        plVar19 = (longlong *)plVar28[0x6d];
        if (plVar19 == (longlong *)0x0) {
          (**(code **)*puVar20)(puVar20,plVar24);
        }
        else {
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
          (**(code **)*puVar20)(puVar20,plVar24);
          LOCK();
          plVar17 = plVar19 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar25 = (int *)((longlong)plVar19 + 0xc);
            *piVar25 = *piVar25 + -1;
            UNLOCK();
            if (*piVar25 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        (**(code **)(*plVar28 + 0x420))(plVar28,&local_e8);
        (**(code **)(*plVar28 + 0x2b0))(plVar28,1);
        lVar12 = FUN_14575d5b6(plVar24);
        if (lVar12 != 0) {
          if (DAT_14cad2858 == 0) {
            local_180 = (undefined8 *)&local_130;
            local_130 = 0x44a7958c;
            uStack_12c = 1;
            local_170 = FUN_14081d0ea;
            local_178 = (code *)&LAB_146395584;
            local_188 = &LAB_147a0ba80;
            local_190 = (code *)&LAB_14575ccce;
            local_198 = L"Engine";
            local_1a0 = 0x40000000000;
            local_1a8 = 0x10000004;
            local_1b0 = 0x10;
            local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x1180);
            pcVar27 = FUN_1463bcebe;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
            (**(code **)(*plVar28 + 0x308))(plVar28);
            (**(code **)(*plVar28 + 0x450))(plVar28,lVar12,1);
            (**(code **)(*plVar28 + 0x2c0))(plVar28);
          }
        }
        if (lVar11 == 0) {
          lVar11 = FUN_145b9edae();
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(plVar28[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar28[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            lVar11 = *(longlong *)(param_1 + 8);
            lVar12 = FUN_145b9f06c();
            if (DAT_14c951858 == 0) {
              local_180 = (undefined8 *)&local_130;
              local_130 = 0x449e2820;
              uStack_12c = 1;
              local_170 = FUN_14081d0ea;
              local_178 = FUN_14081d0ea;
              local_188 = &LAB_1468c5283;
              local_190 = FUN_142809da0;
              local_198 = L"Engine";
              local_1a0 = 0x400000000;
              local_1a8 = 0x10000000;
              local_1b0 = 8;
              local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x50);
              pcVar27 = (code *)&DAT_1468c5288;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            lVar11 = *(longlong *)(lVar11 + 0x20);
            if (lVar11 != 0) {
              do {
                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
                   (lVar14 = lVar11,
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) {
                  lVar14 = 0;
                }
              } while ((lVar14 == 0) && (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 != 0));
              if (lVar14 != 0) {
                FUN_149218866(lVar14,plVar28);
              }
            }
          }
        }
        (**(code **)(*plVar28 + 0x420))(plVar28,&local_130);
        if ((iStack_e0 != iStack_128) ||
           (cVar9 = FUN_14000b9e1(CONCAT44(uStack_e4,
                                           CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8))),
                                  CONCAT44(uStack_12c,local_130)), cVar9 == '\0')) {
          (**(code **)(*plVar28 + 0x418))(plVar28);
          if ((longlong)iStack_e0 != 0) {
            lVar11 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8)));
            lVar12 = (longlong)iStack_e0 << 3;
            do {
              (**(code **)(*plVar28 + 0x410))(plVar28,lVar11,1);
              lVar11 = lVar11 + 8;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
          }
        }
        if (CONCAT44(uStack_12c,local_130) != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8))) != 0) {
          FUN_1400020a8();
        }
        uVar10 = local_f8[1];
      }
      else {
        uVar10 = local_f8[1];
        if (uVar10 == 0) {
LAB_1444b29bf:
          lVar14 = 0;
        }
        else {
          uVar22 = *local_f8;
          lVar14 = 0;
          if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
            plVar19 = (longlong *)
                      ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
            pcVar27 = DAT_14c9647c8;
            if ((plVar19 == (longlong *)0x0) ||
               ((*(uint *)(plVar19 + 2) != uVar10 || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0))))
            goto LAB_1444b29bf;
            lVar14 = *plVar19;
          }
        }
        if (lVar12 != lVar14) goto LAB_1444b2738;
      }
      if (uVar10 == 0) {
        uVar13 = 0;
      }
      else {
        uVar22 = *local_f8;
        uVar13 = 0;
        if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
          puVar20 = (undefined8 *)
                    ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
          if ((puVar20 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar20 + 2) != uVar10 || ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) {
            uVar13 = 0;
          }
          else {
            uVar13 = *puVar20;
          }
        }
      }
      plVar28 = (longlong *)FUN_1444b2edb(*(undefined8 *)(param_1 + 8),uVar13);
      if (plVar28 == (longlong *)0x0) goto LAB_1444b2109;
      local_e8 = (code)0x40;
      uStack_e7 = 0x45;
      uStack_e6 = 0x4bbd;
      uStack_e4 = 1;
      iStack_e0 = *local_158;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      lVar11 = DAT_14cc0aef8;
      if (DAT_14cc0aef8 == 0) {
        lVar11 = FUN_14570767c(&DAT_14cc0aef8,0);
      }
      lVar12 = FUN_14027385c(param_5 + 0x22);
      if (lVar12 != 0) {
        pcVar27 = (code *)&local_e8;
        FUN_14027378e(lVar12,plVar28,lVar11,pcVar27);
      }
      FUN_149284e0a(&local_e8);
      lVar11 = FUN_14575d5b6(plVar24);
      if (lVar11 != 0) {
        if (DAT_14cad2858 == 0) {
          local_e8 = (code)0x8c;
          uStack_e7 = 0x95;
          uStack_e6 = 0x44a7;
          uStack_e4 = 1;
          local_170 = FUN_14081d0ea;
          local_178 = (code *)&LAB_146395584;
          local_180 = (undefined8 *)&local_e8;
          local_188 = &LAB_147a0ba80;
          local_190 = (code *)&LAB_14575ccce;
          local_198 = L"Engine";
          local_1a0 = 0x40000000000;
          local_1a8 = 0x10000004;
          local_1b0 = 0x10;
          local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x1180);
          pcVar27 = FUN_1463bcebe;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
          local_e8 = (code)0x70;
          uStack_e7 = 0x45;
          uStack_e6 = 0x4bbd;
          uStack_e4 = 1;
          iStack_e0 = *local_158;
          uStack_dc = *(undefined4 *)((longlong)plVar28 + 0xc);
          lVar12 = DAT_14cc0ae20;
          if (DAT_14cc0ae20 == 0) {
            lVar12 = FUN_14570767c(&DAT_14cc0ae20,0);
          }
          lVar14 = FUN_14027385c(param_5 + 0x22);
          if (lVar14 != 0) {
            pcVar27 = (code *)&local_e8;
            FUN_14027378e(lVar14,lVar11,lVar12,pcVar27);
          }
        }
      }
      FUN_1492128c8(plVar28);
      plVar19 = (longlong *)plVar28[0x6c];
      plVar17 = (longlong *)plVar28[0x6d];
      if (plVar17 == (longlong *)0x0) {
        if (plVar19 != (longlong *)0x0) {
LAB_1444b29d6:
          bVar7 = true;
          local_160 = (code *)0x0;
          goto LAB_1444b29df;
        }
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar17 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar25 = (int *)((longlong)plVar17 + 0xc);
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (*piVar25 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        if (plVar19 != (longlong *)0x0) {
          plVar19 = (longlong *)plVar28[0x6c];
          local_160 = (code *)plVar28[0x6d];
          if (local_160 == (code *)0x0) goto LAB_1444b29d6;
          LOCK();
          *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
          UNLOCK();
          bVar7 = false;
LAB_1444b29df:
          lVar11 = (**(code **)(*plVar19 + 0x28))(plVar19);
          pcVar8 = local_160;
          if (lVar11 == 0) {
LAB_1444b2a23:
            lVar11 = 0;
          }
          else {
            if (DAT_14cad2858 == 0) {
              local_e8 = (code)0x8c;
              uStack_e7 = 0x95;
              uStack_e6 = 0x44a7;
              uStack_e4 = 1;
              local_170 = FUN_14081d0ea;
              local_178 = (code *)&LAB_146395584;
              local_180 = (undefined8 *)&local_e8;
              local_188 = &LAB_147a0ba80;
              local_190 = (code *)&LAB_14575ccce;
              local_198 = L"Engine";
              local_1a0 = 0x40000000000;
              local_1a8 = 0x10000004;
              local_1b0 = 0x10;
              local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,0x1180);
              pcVar27 = FUN_1463bcebe;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
            goto LAB_1444b2a23;
          }
          if (!bVar7) {
            LOCK();
            pcVar2 = pcVar8 + 8;
            *(int *)pcVar2 = *(int *)pcVar2 + -1;
            UNLOCK();
            if (*(int *)pcVar2 == 0) {
              (*(code *)**(undefined8 **)pcVar8)(pcVar8);
              LOCK();
              pcVar2 = pcVar8 + 0xc;
              *(int *)pcVar2 = *(int *)pcVar2 + -1;
              UNLOCK();
              if (*(int *)pcVar2 == 0) {
                (**(code **)(*(longlong *)pcVar8 + 0x10))(pcVar8);
              }
            }
          }
          if (lVar11 == 0) {
            plVar28 = (longlong *)FUN_1444b2edb(*(undefined8 *)(param_1 + 8),plVar24);
          }
          else {
            lVar11 = *(longlong *)(lVar11 + 0xae8);
            pcVar27 = (code *)CONCAT71((int7)((ulonglong)pcVar27 >> 8),1);
            if (lVar11 == 0) goto LAB_1444b1902;
            lVar12 = FUN_145b9ee98();
            if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
              uVar10 = *(uint *)(param_2 + 0x24);
              uVar15 = 0;
              iVar23 = -uVar10;
              if (SBORROW4(0,uVar10)) {
                puVar16 = (uint *)(param_2 + 4);
                if (*(int *)(param_2 + 0x20) == 0) {
                  puVar16 = (uint *)(param_2 + 0x10);
                }
                uVar10 = *puVar16;
                uVar15 = (ulonglong)puVar16[1];
              }
              fVar29 = (float)FUN_140cf0978(*(undefined8 *)(param_1 + 8),
                                            (ulonglong)uVar10 | uVar15 << 0x20,iVar23);
              lVar12 = *(longlong *)(param_1 + 8);
              if ((*(byte *)(lVar12 + 0x219) & 2) != 0) {
                local_e8 = (code)0x0;
                uStack_e7 = 0;
                uStack_e6 = 0x3f80;
                uVar10 = *(uint *)(param_2 + 0x24);
                uVar15 = 0;
                if (SBORROW4(0,uVar10)) {
                  puVar16 = (uint *)(param_2 + 4);
                  if (*(int *)(param_2 + 0x20) == 0) {
                    puVar16 = (uint *)(param_2 + 0x10);
                  }
                  uVar10 = *puVar16;
                  uVar15 = (ulonglong)puVar16[1];
                }
                pcVar27 = (code *)&local_e8;
                FUN_1400f0204(lVar12 + 0x220,0,(ulonglong)uVar10 | uVar15 << 0x20,pcVar27);
                fVar29 = fVar29 * (float)CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8));
                lVar12 = *(longlong *)(param_1 + 8);
              }
              local_e8 = (code)0x1;
              uStack_e7 = 1;
              if ((*(ushort *)(lVar12 + 0xd9) & 0x1ff) == 0x101) {
                local_1b8 = (undefined8 *)CONCAT71(local_1b8._1_7_,1);
                pcVar27 = (code *)&local_e8;
                FUN_1491f9c68(lVar11,*(undefined4 *)((longlong)plVar28 + 0xc),fVar29,pcVar27);
              }
            }
          }
        }
      }
      pcVar27 = (code *)CONCAT71((int7)((ulonglong)pcVar27 >> 8),1);
    }
  }
LAB_1444b1902:
  lVar11 = *(longlong *)(param_1 + 8);
  if ((*(ushort *)(lVar11 + 0xd9) & 0x1ff) != 0x102) {
    uVar21 = *(undefined1 *)(lVar11 + 0x3c0);
    *(undefined1 *)(lVar11 + 0x3c0) = 1;
    if (plVar28 != (longlong *)0x0) {
      lVar11 = *(longlong *)(param_2 + 0x18);
      iVar23 = *(int *)(param_2 + 0x24);
      fVar29 = 0.0;
      if (SBORROW4(0,iVar23)) {
        piVar25 = (int *)(param_2 + 4);
        if (*(int *)(param_2 + 0x20) == 0) {
          piVar25 = (int *)(param_2 + 0x10);
        }
        iVar23 = *piVar25;
        fVar29 = (float)piVar25[1];
      }
      *(float *)((longlong)plVar28 + 0x4c) =
           ((float)((lVar11 >> 0x20) * (longlong)iVar23) +
           (float)(int)((ulonglong)lVar11 >> 0x20) * fVar29) / (float)(int)lVar11;
      *(undefined1 *)((longlong)plVar28 + 0x54) = 0;
      plVar19 = (longlong *)(param_1 + 0x60);
      if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        plVar19 = *(longlong **)(param_1 + 0x90);
      }
      local_161 = uVar21;
      local_160 = pcVar27;
      local_148 = param_3;
      if ((longlong)*(int *)(param_1 + 0x98) != 0) {
        plVar17 = plVar19 + (longlong)*(int *)(param_1 + 0x98) * 3;
        do {
          lVar11 = *(longlong *)(param_1 + 8);
          if (*(int *)(lVar11 + 0x3d0) == *(int *)(lVar11 + 0x3fc)) {
LAB_1444b1a17:
            lVar11 = plVar28[0x5f];
            if ((lVar11 != 0) &&
               (lVar12 = (**(code **)(*plVar28 + 0x3b0))(plVar28,plVar19), lVar12 != 0)) {
              iStack_e0 = *(int *)(lVar12 + 0x18);
              uVar13 = *(undefined8 *)(lVar12 + 0x10);
              local_e8 = SUB81(uVar13,0);
              uStack_e7 = (undefined1)((ulonglong)uVar13 >> 8);
              uStack_e6 = (undefined2)((ulonglong)uVar13 >> 0x10);
              uStack_e4 = (undefined4)((ulonglong)uVar13 >> 0x20);
              cVar9 = (char)plVar19[1];
              if (cVar9 == '\x02') {
                puVar26 = (undefined4 *)((longlong)plVar19 + 0xc);
              }
              else {
                if (cVar9 == '\x01') {
                  FUN_1491db37e(&local_130);
                }
                else {
                  if (cVar9 != '\0') goto LAB_1444b1b59;
                  local_118 = *(undefined8 *)(lVar12 + 0x10);
                  local_110 = *(undefined4 *)(lVar12 + 0x18);
                  FUN_1491db620(lVar11,&local_130,&local_118);
                }
                puVar26 = &local_130;
              }
              local_1b8 = (undefined8 *)CONCAT71(local_1b8._1_7_,1);
              FUN_1491a00ee(plVar28,&local_e8,puVar26,0);
            }
          }
          else {
            lVar12 = *plVar19;
            uVar10 = (uint)((ulonglong)lVar12 >> 0x10);
            uVar22 = (uint)lVar12 & 0xffff;
            lVar14 = lVar11 + 0x400;
            if (*(longlong *)(lVar11 + 0x408) != 0) {
              lVar14 = *(longlong *)(lVar11 + 0x408);
            }
            iVar23 = *(int *)(lVar14 + (ulonglong)
                                       (*(int *)(lVar11 + 0x410) - 1U &
                                       (int)((ulonglong)lVar12 >> 0x20) +
                                       ((uint)lVar12 << 0x10 | uVar22) +
                                       (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar22 >> 4)) * 4);
            if (iVar23 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(lVar11 + 0x3c8) + (longlong)iVar23 * 0x10) == lVar12
                   ) goto LAB_1444b1a17;
                iVar23 = *(int *)((longlong)iVar23 * 0x10 + *(longlong *)(lVar11 + 0x3c8) + 8);
              } while (iVar23 != -1);
            }
          }
LAB_1444b1b59:
          plVar19 = plVar19 + 3;
        } while (plVar19 != plVar17);
      }
      plVar19 = (longlong *)(param_1 + 0x10);
      if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        plVar19 = *(longlong **)(param_1 + 0x28);
      }
      local_150 = plVar24;
      if ((longlong)*(int *)(param_1 + 0x30) != 0) {
        plVar24 = (longlong *)((longlong)plVar19 + (longlong)*(int *)(param_1 + 0x30) * 0xc);
        do {
          lVar11 = *(longlong *)(param_1 + 8);
          if (*(int *)(lVar11 + 0x3d0) == *(int *)(lVar11 + 0x3fc)) {
LAB_1444b1bba:
            lVar11 = (**(code **)(*plVar28 + 0x3b0))(plVar28);
            if (((lVar11 != 0) && ((*(byte *)(lVar11 + 0x210) & 0xfe) != 2)) &&
               (*(char *)(lVar11 + 0x211) == '\0')) {
              local_130 = CONCAT31(local_130._1_3_,2);
              uStack_12c = 0x1ff;
              iStack_128 = 0x7f7fffff;
              local_124 = 0;
              local_11c = 0;
              cVar3 = *(code *)(plVar19 + 1);
              memset(&local_e8,0,0x84);
              local_68 = CONCAT31(local_68._1_3_,1);
              local_1a0 = local_1a0 & 0xffffffffffffff00;
              local_1a8 = local_1a8 & 0xffffff00;
              local_1b0 = local_1b0 & 0xffffff00;
              local_1b8 = (undefined8 *)&local_130;
              local_e8 = cVar3;
              (**(code **)(*plVar28 + 0x3d8))(plVar28,plVar19,&local_e8,1);
            }
          }
          else {
            lVar12 = *plVar19;
            uVar10 = (uint)((ulonglong)lVar12 >> 0x10);
            uVar22 = (uint)lVar12 & 0xffff;
            lVar14 = lVar11 + 0x400;
            if (*(longlong *)(lVar11 + 0x408) != 0) {
              lVar14 = *(longlong *)(lVar11 + 0x408);
            }
            iVar23 = *(int *)(lVar14 + (ulonglong)
                                       (*(int *)(lVar11 + 0x410) - 1U &
                                       (int)((ulonglong)lVar12 >> 0x20) +
                                       ((uint)lVar12 << 0x10 | uVar22) +
                                       (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar22 >> 4)) * 4);
            if (iVar23 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(lVar11 + 0x3c8) + (longlong)iVar23 * 0x10) == lVar12
                   ) goto LAB_1444b1bba;
                iVar23 = *(int *)((longlong)iVar23 * 0x10 + *(longlong *)(lVar11 + 0x3c8) + 8);
              } while (iVar23 != -1);
            }
          }
          plVar19 = (longlong *)((longlong)plVar19 + 0xc);
        } while (plVar19 != plVar24);
      }
      plVar24 = (longlong *)(param_1 + 0x38);
      if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
        plVar24 = *(longlong **)(param_1 + 0x50);
      }
      if ((longlong)*(int *)(param_1 + 0x58) != 0) {
        plVar19 = (longlong *)((longlong)plVar24 + (longlong)*(int *)(param_1 + 0x58) * 0xc);
        do {
          lVar11 = *(longlong *)(param_1 + 8);
          if (*(int *)(lVar11 + 0x3d0) == *(int *)(lVar11 + 0x3fc)) {
LAB_1444b1d57:
            lVar11 = (**(code **)(*plVar28 + 0x3b0))(plVar28,plVar24);
            if (((lVar11 != 0) && ((*(byte *)(lVar11 + 0x210) & 0xfe) != 2)) &&
               (*(char *)(lVar11 + 0x211) == '\x02')) {
              local_130 = CONCAT31(local_130._1_3_,2);
              uStack_12c = 0x1ff;
              iStack_128 = 0x7f7fffff;
              local_124 = 0;
              local_11c = 0;
              uVar5 = (undefined4)plVar24[1];
              uStack_74 = 0;
              uStack_70 = 0;
              uStack_6c = 0;
              uStack_84 = 0;
              uStack_80 = 0;
              uStack_7c = 0;
              local_78 = 0;
              uStack_94 = 0;
              uStack_90 = 0;
              uStack_8c = 0;
              local_88 = 0;
              uStack_a4 = 0;
              uStack_a0 = 0;
              uStack_9c = 0;
              local_98 = 0;
              uStack_b4 = 0;
              uStack_b0 = 0;
              uStack_ac = 0;
              local_a8 = 0;
              uStack_c4 = 0;
              uStack_c0 = 0;
              uStack_bc = 0;
              local_b8 = 0;
              uStack_d4 = 0;
              uStack_d0 = 0;
              uStack_cc = 0;
              local_c8 = 0;
              uStack_e4 = 0;
              iStack_e0 = 0;
              uStack_dc = 0;
              uStack_d8 = 0;
              local_68 = 1;
              local_e8 = SUB41(uVar5,0);
              uStack_e7 = (undefined1)((uint)uVar5 >> 8);
              uStack_e6 = (undefined2)((uint)uVar5 >> 0x10);
              local_1a0 = local_1a0 & 0xffffffffffffff00;
              local_1a8 = local_1a8 & 0xffffff00;
              local_1b0 = local_1b0 & 0xffffff00;
              local_1b8 = (undefined8 *)&local_130;
              (**(code **)(*plVar28 + 0x3d8))(plVar28,plVar24,&local_e8,1);
            }
          }
          else {
            lVar12 = *plVar24;
            uVar10 = (uint)((ulonglong)lVar12 >> 0x10);
            uVar22 = (uint)lVar12 & 0xffff;
            lVar14 = lVar11 + 0x400;
            if (*(longlong *)(lVar11 + 0x408) != 0) {
              lVar14 = *(longlong *)(lVar11 + 0x408);
            }
            iVar23 = *(int *)(lVar14 + (ulonglong)
                                       (*(int *)(lVar11 + 0x410) - 1U &
                                       (int)((ulonglong)lVar12 >> 0x20) +
                                       ((uint)lVar12 << 0x10 | uVar22) +
                                       (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar22 >> 4)) * 4);
            if (iVar23 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(lVar11 + 0x3c8) + (longlong)iVar23 * 0x10) == lVar12
                   ) goto LAB_1444b1d57;
                iVar23 = *(int *)((longlong)iVar23 * 0x10 + *(longlong *)(lVar11 + 0x3c8) + 8);
              } while (iVar23 != -1);
            }
          }
          plVar24 = (longlong *)((longlong)plVar24 + 0xc);
        } while (plVar24 != plVar19);
      }
      uVar21 = local_161;
      if ((char)local_160 == '\0') {
        lVar11 = param_1 + 0xa0;
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          lVar11 = *(longlong *)(param_1 + 0xb8);
        }
        iVar23 = *(int *)(param_1 + 0xc0);
        if ((longlong)iVar23 != 0) {
          lVar12 = 0;
          do {
            iVar6 = *(int *)(lVar11 + 4 + lVar12);
            if (((iVar6 != 0) && (uVar10 = *(uint *)(lVar11 + lVar12), -1 < (int)uVar10)) &&
               (((int)uVar10 < DAT_14c9647dc &&
                (((puVar20 = (undefined8 *)
                             ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                  puVar20 != (undefined8 *)0x0 && (*(int *)(puVar20 + 2) == iVar6)) &&
                 ((*(uint *)(puVar20 + 1) & 0x10200000) == 0)))))) {
              if ((*(uint *)(puVar20 + 1) & 0x10200000) == 0) {
                plVar24 = (longlong *)*puVar20;
              }
              else {
                plVar24 = (longlong *)0x0;
              }
              (**(code **)(*plVar24 + 0x2b8))
                        (plVar24,CONCAT71((int7)((ulonglong)puVar20 >> 8),
                                          *(undefined1 *)(lVar11 + 8 + lVar12)));
            }
            lVar12 = lVar12 + 0xc;
          } while ((longlong)iVar23 * 0xc != lVar12);
        }
      }
      else {
        local_160 = (code *)(**(code **)(*local_150 + 0x180))();
        lVar11 = (**(code **)(*param_5 + 0x10))();
        uVar13 = *(undefined8 *)(lVar11 + 8);
        lVar11 = *(longlong *)(lVar11 + 0x10);
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        local_e8 = SUB81(uVar13,0);
        uStack_e7 = (undefined1)((ulonglong)uVar13 >> 8);
        uStack_e6 = (undefined2)((ulonglong)uVar13 >> 0x10);
        uStack_e4 = (undefined4)((ulonglong)uVar13 >> 0x20);
        iStack_e0 = (int)lVar11;
        uStack_dc = (undefined4)((ulonglong)lVar11 >> 0x20);
        lVar11 = param_1 + 0xa0;
        if (*(longlong *)(param_1 + 0xb8) != 0) {
          lVar11 = *(longlong *)(param_1 + 0xb8);
        }
        iVar23 = *(int *)(param_1 + 0xc0);
        if ((longlong)iVar23 != 0) {
          lVar12 = 0;
          pcVar27 = local_160;
          do {
            iVar6 = *(int *)(lVar11 + 4 + lVar12);
            if (iVar6 != 0) {
              uVar10 = *(uint *)(lVar11 + lVar12);
              if (((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) &&
                 ((plVar24 = (longlong *)
                             ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                  plVar24 != (longlong *)0x0 &&
                  (((((int)plVar24[2] == iVar6 &&
                     (plVar19 = *(longlong **)(param_1 + 8),
                     (*(uint *)(plVar24 + 1) & 0x10200000) == 0)) && (pcVar27 != (code *)0x0)) &&
                   (lVar14 = *plVar24, lVar14 != 0)))))) {
                uVar13 = FUN_14759215a(pcVar27);
                lVar14 = FUN_147593d5c(uVar13,lVar14 + 0x2c);
                pcVar27 = local_160;
                if (lVar14 == 0) {
                  iVar6 = *(int *)(lVar11 + 4 + lVar12);
                  if ((iVar6 == 0) || (uVar10 = *(uint *)(lVar11 + lVar12), (int)uVar10 < 0)) {
LAB_1444b2463:
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = 0;
                    if ((int)uVar10 < DAT_14c9647dc) {
                      puVar20 = (undefined8 *)
                                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                      if (((puVar20 == (undefined8 *)0x0) || (*(int *)(puVar20 + 2) != iVar6)) ||
                         ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)) goto LAB_1444b2463;
                      uVar18 = *puVar20;
                    }
                  }
                  FUN_147592202(uVar13,uVar18);
                  pcVar27 = local_160;
                  if (((longlong *)plVar19[0x35] != (longlong *)0x0) &&
                     (lVar14 = (**(code **)(*(longlong *)plVar19[0x35] + 0x180))(),
                     pcVar27 = local_160, lVar14 != 0)) {
                    (**(code **)(*plVar19 + 0x368))(plVar19);
                    FUN_1475827d6(plVar19);
                    pcVar27 = local_160;
                  }
                }
              }
              iVar6 = *(int *)(lVar11 + 4 + lVar12);
              if (((((iVar6 != 0) && (uVar10 = *(uint *)(lVar11 + lVar12), -1 < (int)uVar10)) &&
                   ((int)uVar10 < DAT_14c9647dc)) &&
                  ((plVar24 = (longlong *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                   plVar24 != (longlong *)0x0 && ((int)plVar24[2] == iVar6)))) &&
                 ((*(uint *)(plVar24 + 1) & 0x10200000) == 0)) {
                if (((*(uint *)(plVar24 + 1) & 0x10200000) == 0) &&
                   (plVar24 = (longlong *)*plVar24, plVar24 != (longlong *)0x0)) {
                  lVar14 = FUN_1458989be();
                  if ((*(int *)(lVar14 + 0x38) <= *(int *)(plVar24[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
                      lVar14 + 0x30)) {
                    (**(code **)(*plVar24 + 0x2f0))(plVar24,local_160);
                  }
                }
                iVar6 = *(int *)(lVar11 + 4 + lVar12);
                if ((iVar6 == 0) || (uVar10 = *(uint *)(lVar11 + lVar12), (int)uVar10 < 0)) {
LAB_1444b2455:
                  plVar24 = (longlong *)0x0;
                }
                else {
                  plVar24 = (longlong *)0x0;
                  if ((int)uVar10 < DAT_14c9647dc) {
                    puVar20 = (undefined8 *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                    if (((puVar20 == (undefined8 *)0x0) || (*(int *)(puVar20 + 2) != iVar6)) ||
                       ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)) goto LAB_1444b2455;
                    plVar24 = (longlong *)*puVar20;
                  }
                }
                local_140 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8)));
                local_138 = CONCAT44(uStack_dc,iStack_e0);
                if (local_138 != 0) {
                  LOCK();
                  *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*plVar24 + 0x2d0))(plVar24,*local_158,&local_140,plVar28);
                iVar6 = *(int *)(lVar11 + 4 + lVar12);
                if (iVar6 == 0) {
LAB_1444b245c:
                  plVar24 = (longlong *)0x0;
                }
                else {
                  uVar10 = *(uint *)(lVar11 + lVar12);
                  if ((int)uVar10 < 0) goto LAB_1444b245c;
                  plVar24 = (longlong *)0x0;
                  if ((int)uVar10 < DAT_14c9647dc) {
                    puVar20 = (undefined8 *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
                    if (((puVar20 == (undefined8 *)0x0) || (*(int *)(puVar20 + 2) != iVar6)) ||
                       ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)) goto LAB_1444b245c;
                    plVar24 = (longlong *)*puVar20;
                  }
                }
                (**(code **)(*plVar24 + 0x2b8))(plVar24,*(undefined1 *)(lVar11 + 8 + lVar12));
                pcVar27 = local_160;
              }
            }
            lVar12 = lVar12 + 0xc;
          } while ((longlong)iVar23 * 0xc != lVar12);
        }
        local_1b8 = (undefined8 *)&local_e8;
        FUN_149284e8a(param_1,local_150,plVar28,local_148);
        plVar24 = (longlong *)CONCAT44(uStack_dc,iStack_e0);
        uVar21 = local_161;
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          plVar28 = plVar24 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
            (**(code **)*plVar24)(plVar24);
            LOCK();
            piVar25 = (int *)((longlong)plVar24 + 0xc);
            *piVar25 = *piVar25 + -1;
            UNLOCK();
            uVar21 = local_161;
            if (*piVar25 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              uVar21 = local_161;
            }
          }
        }
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3c0) = uVar21;
  }
LAB_1444b2109:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444b2edb FUN_1444b2edb body=1833 status=ok
// SIG undefined FUN_1444b2edb(void)

longlong FUN_1444b2edb(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) || (lVar6 = (**(code **)(*param_2 + 0x180))(param_2), lVar6 == 0)
     ) {
    uVar7 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_2 + 0x180))(param_2);
    bVar3 = *(byte *)(lVar6 + 0x152);
    if ((bVar3 == 1) || ((uVar7 = 0, bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) {
      uVar7 = (**(code **)(*param_2 + 0x180))(param_2);
    }
  }
  lVar6 = FUN_1491ff5c4(param_1,uVar7);
  if (lVar6 == 0) {
LAB_1444b3349:
    lVar9 = 0;
    goto LAB_1444b334b;
  }
  plVar8 = *(longlong **)(lVar6 + 0x360);
  plVar10 = *(longlong **)(lVar6 + 0x368);
  if (plVar10 == (longlong *)0x0) {
    bVar5 = true;
    plVar10 = (longlong *)0x0;
    lVar9 = 0;
    if (plVar8 == (longlong *)0x0) goto LAB_1444b334b;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1444b3349;
    plVar8 = *(longlong **)(lVar6 + 0x360);
    plVar10 = *(longlong **)(lVar6 + 0x368);
    if (plVar10 == (longlong *)0x0) {
      bVar5 = true;
      plVar10 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x28))(plVar8);
  if (plVar8 == (longlong *)0x0) {
LAB_1444b2ff8:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar9 = FUN_1411e6332();
    if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) goto LAB_1444b2ff8;
  }
  if (!bVar5) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar9 = lVar6;
  if (plVar8 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) goto LAB_1444b334b;
    lVar11 = FUN_1411e6332();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) goto LAB_1444b334b;
    lVar11 = param_2[0x16];
    if (lVar11 == 0) {
      lVar11 = FUN_1448abda6(param_2);
      if (lVar11 == 0) goto LAB_1444b334b;
      lVar11 = param_2[0x16];
      if (lVar11 == 0) {
        lVar11 = FUN_1448abda6(param_2);
      }
    }
    bVar3 = *(byte *)(lVar11 + 0x152);
    if ((bVar3 != 1) && ((plVar10 = param_2, 6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0))))
    goto LAB_1444b34f9;
    lVar9 = FUN_1491a88a2(param_2);
    if (lVar9 == 0) {
      FUN_14448b00a(param_2);
      lVar9 = FUN_1491a88a2(param_2);
      if (lVar9 == 0) goto LAB_1444b3349;
    }
    plVar8 = *(longlong **)(lVar9 + 0x360);
    plVar10 = *(longlong **)(lVar9 + 0x368);
    if (plVar10 == (longlong *)0x0) {
      if (plVar8 == (longlong *)0x0) goto LAB_1444b3378;
LAB_1444b3205:
      bVar5 = true;
      plVar10 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar8 == (longlong *)0x0) {
LAB_1444b3378:
        plVar10 = (longlong *)FUN_14001cc68(0x50,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14bb75f10;
        local_60 = plVar10 + 2;
        plVar10[2] = (longlong)&PTR_FUN_14bb6a9d0;
        plVar10[3] = 0;
        plVar10[4] = 0;
        plVar10[5] = 0;
        *(undefined4 *)(plVar10 + 6) = 2;
        *(undefined8 *)((longlong)plVar10 + 0x34) = 0;
        *(undefined8 *)((longlong)plVar10 + 0x3c) = 0;
        *(undefined4 *)((longlong)plVar10 + 0x44) = 0;
        plVar10[9] = 2;
        local_58 = plVar10;
        if (plVar10 == (longlong *)0x0) {
          FUN_14575d3d6(lVar9,&local_60);
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          FUN_14575d3d6(lVar9,&local_60);
          LOCK();
          plVar8 = plVar10 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar10)(plVar10);
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
      plVar8 = *(longlong **)(lVar9 + 0x360);
      plVar10 = *(longlong **)(lVar9 + 0x368);
      if (plVar10 == (longlong *)0x0) goto LAB_1444b3205;
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x28))(plVar8);
    if (!bVar5) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (plVar8 == param_2) goto LAB_1444b334b;
  }
  else {
    if (param_2 == (longlong *)0x0) goto LAB_1444b334b;
    if (DAT_14cac9ca8 == 0) {
      local_80 = &local_40;
      local_40 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1478c0a72;
      local_90 = &LAB_1417b2375;
      local_98 = L"Engine";
      local_a0 = 0x1000000000;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
         DAT_14cac9ca8 + 0x30)) ||
       (plVar10 = (longlong *)FUN_1491ae766(param_2), plVar10 == (longlong *)0x0))
    goto LAB_1444b334b;
    lVar11 = plVar10[0x16];
    if (lVar11 == 0) {
      lVar11 = FUN_1448abda6(plVar10);
      if (lVar11 == 0) goto LAB_1444b334b;
      lVar11 = plVar10[0x16];
      if (lVar11 == 0) {
        lVar11 = FUN_1448abda6(plVar10);
      }
    }
    bVar3 = *(byte *)(lVar11 + 0x152);
    if ((bVar3 != 1) && ((6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0)))) {
      if (plVar10 == plVar8) goto LAB_1444b334b;
LAB_1444b34f9:
      FUN_1491ac418(plVar10,lVar6);
      goto LAB_1444b334b;
    }
    lVar9 = FUN_1491a88a2(plVar10);
    if (lVar9 == 0) {
      FUN_14448b00a(plVar10);
      lVar9 = FUN_1491a88a2(plVar10);
      if (lVar9 == 0) goto LAB_1444b3349;
    }
    plVar12 = *(longlong **)(lVar9 + 0x360);
    plVar8 = *(longlong **)(lVar9 + 0x368);
    if (plVar8 == (longlong *)0x0) {
      if (plVar12 == (longlong *)0x0) goto LAB_1444b3457;
LAB_1444b32ef:
      bVar5 = true;
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
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
      if (plVar12 == (longlong *)0x0) {
LAB_1444b3457:
        plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_14bb75f10;
        local_50 = plVar8 + 2;
        plVar8[2] = (longlong)&PTR_FUN_14bb6a9d0;
        plVar8[3] = 0;
        plVar8[4] = 0;
        plVar8[5] = 0;
        *(undefined4 *)(plVar8 + 6) = 2;
        *(undefined8 *)((longlong)plVar8 + 0x34) = 0;
        *(undefined8 *)((longlong)plVar8 + 0x3c) = 0;
        *(undefined4 *)((longlong)plVar8 + 0x44) = 0;
        plVar8[9] = 2;
        local_48 = plVar8;
        if (plVar8 == (longlong *)0x0) {
          FUN_14575d3d6(lVar9,&local_50);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          FUN_14575d3d6(lVar9,&local_50);
          LOCK();
          plVar12 = plVar8 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar12 = *(longlong **)(lVar9 + 0x360);
      plVar8 = *(longlong **)(lVar9 + 0x368);
      if (plVar8 == (longlong *)0x0) goto LAB_1444b32ef;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0x28))(plVar12);
    if (!bVar5) {
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
    }
    if (plVar12 == plVar10) goto LAB_1444b334b;
  }
  puVar4 = *(undefined8 **)(lVar9 + 0x360);
  plVar10 = *(longlong **)(lVar9 + 0x368);
  if (plVar10 == (longlong *)0x0) {
    (**(code **)*puVar4)(puVar4,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    (**(code **)*puVar4)(puVar4,param_2);
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_1444b334b:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 1444b4d58 FUN_1444b4d58 body=73 status=ok
// SIG undefined FUN_1444b4d58(void)

undefined8 FUN_1444b4d58(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]));
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  return uVar5;
}



// FUNCTION 1444b4da2 FUN_1444b4da2 body=309 status=ok
// SIG undefined FUN_1444b4da2(void)

undefined8 * FUN_1444b4da2(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  uint *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 8);
  iVar2 = FUN_1401abde8(plVar1,~(*param_2 ^ param_2[1] ^ param_2[2]),param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x108,0x10);
    *puVar4 = &PTR_FUN_14bbd45d8;
    puVar4[3] = 0;
    puVar4[4] = 0x8000000000;
    puVar4[7] = 0;
    puVar4[8] = 0x8000000000;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0x8000000000;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0x8000000000;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0x8000000000;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0x8000000000;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0x8000000000;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0x8000000000;
    local_30 = &local_40;
    local_40 = puVar4;
    local_38 = param_2;
    FUN_1401ac3b6(*(undefined8 *)(param_1 + 8),local_24,&local_38,0);
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b4f12 FUN_1444b4f12 body=29 status=ok
// SIG undefined FUN_1444b4f12(void)

undefined8 FUN_1444b4f12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b4f3c FUN_1444b4f3c body=2463 status=ok
// SIG undefined FUN_1444b4f3c(void)

undefined8 FUN_1444b4f3c(undefined8 *param_1,ulonglong *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  undefined4 uVar26;
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
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_258 [32];
  double local_238;
  double dStack_230;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined1 local_218 [16];
  undefined8 local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  longlong local_178;
  int local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  double dStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [8];
  undefined1 *local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar4 = *param_2;
  plVar5 = *(longlong **)*param_1;
  uVar6 = *(undefined8 *)param_1[1];
  plVar7 = (longlong *)param_1[2];
  if ((int)plVar7[1] == *(int *)((longlong)plVar7 + 0x34)) {
LAB_1444b4fe4:
    if ((plVar5 == (longlong *)0x0) || (iVar19 = FUN_14919fd68(plVar5,uVar4 + 0x10), iVar19 == -1))
    {
      FUN_1401571e4(uVar6,&local_168,uVar4,3);
      if (plVar5 != (longlong *)0x0) goto LAB_1444b57fe;
      local_218._4_4_ = uStack_144;
      local_218._0_4_ = local_148;
      local_218._12_4_ = uStack_13c;
      local_218._8_4_ = uStack_140;
      local_208 = (double)CONCAT44(uStack_134,local_138);
      dStack_200 = dStack_130;
      dVar28 = local_168;
      dVar29 = dStack_160;
    }
    else {
      lVar25 = *plVar5;
      lVar20 = (longlong)iVar19 * 0x110;
      pdVar2 = (double *)(lVar25 + 0x20 + lVar20);
      dVar28 = *pdVar2;
      dVar29 = pdVar2[1];
      pdVar2 = (double *)(lVar25 + 0x30 + lVar20);
      local_158 = *pdVar2;
      dStack_150 = pdVar2[1];
      local_218 = *(undefined1 (*) [16])(lVar25 + 0x40 + lVar20);
      pdVar2 = (double *)(lVar25 + 0x50 + lVar20);
      local_208 = *pdVar2;
      dStack_200 = pdVar2[1];
      puVar1 = (undefined4 *)(lVar25 + 0x60 + lVar20);
      local_128 = *puVar1;
      uStack_124 = puVar1[1];
      uStack_120 = puVar1[2];
      uStack_11c = puVar1[3];
      puVar1 = (undefined4 *)(lVar25 + 0x70 + lVar20);
      local_118 = *puVar1;
      uStack_114 = puVar1[1];
      uStack_110 = puVar1[2];
      uStack_10c = puVar1[3];
    }
    dVar27 = (double)*(float *)param_1[3];
    dVar36 = (double)CONCAT44(uStack_124,local_128) * dVar27;
    dVar43 = (double)CONCAT44(uStack_11c,uStack_120) * 0.0;
    dVar30 = (double)CONCAT44(uStack_114,local_118) * 0.0;
    dVar44 = (double)CONCAT44(uStack_10c,uStack_110) * 0.0;
    uVar26 = (undefined4)((ulonglong)dStack_150 >> 0x20);
    local_1d8._8_4_ = SUB84(dStack_150,0);
    local_1d8._0_8_ = dVar28;
    local_1d8._12_4_ = uVar26;
    dVar31 = dVar43 * dVar28 - dVar29 * dVar36;
    dVar33 = dVar30 * dVar29 - local_158 * dVar43;
    dVar34 = dVar36 * local_158 - dVar28 * dVar30;
    dVar33 = dVar33 + dVar33;
    dVar34 = dVar34 + dVar34;
    dVar31 = dVar31 + dVar31;
    dVar43 = (local_158 * dVar33 - dVar28 * dVar31) + dStack_150 * dVar34 + dVar43;
    local_1c8._8_4_ = SUB84(dVar43,0);
    local_1c8._0_8_ = (dVar31 * dVar29 - dVar34 * local_158) + dStack_150 * dVar33 + dVar36;
    local_1c8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    dVar15 = (double)CONCAT44(uStack_124,local_128) * 0.0;
    dVar16 = dVar27 * (double)CONCAT44(uStack_11c,uStack_120);
    local_1b8._8_4_ = SUB84(dVar44,0);
    local_1b8._0_8_ = dVar30;
    local_1b8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    dVar32 = dVar16 * dVar28 - dVar29 * dVar15;
    dVar35 = dVar30 * dVar29 - local_158 * dVar16;
    dVar36 = dVar15 * local_158 - dVar28 * dVar30;
    dVar35 = dVar35 + dVar35;
    dVar36 = dVar36 + dVar36;
    dVar32 = dVar32 + dVar32;
    local_1e8._8_4_ = SUB84(dStack_150 * dVar36,0);
    local_1e8._0_8_ = dStack_150 * dVar35;
    local_1e8._12_4_ = (int)((ulonglong)(dStack_150 * dVar36) >> 0x20);
    local_220 = (undefined4)local_208;
    uStack_21c = local_208._4_4_;
    lVar25 = param_1[4];
    local_1a8._8_4_ = SUB84(dStack_150,0);
    local_1a8._0_8_ = dStack_150;
    local_1a8._12_4_ = uVar26;
    dVar10 = (double)CONCAT44(uStack_124,local_128) * 0.0;
    dVar12 = (double)CONCAT44(uStack_11c,uStack_120) * 0.0;
    dVar27 = (double)CONCAT44(uStack_114,local_118) * dVar27;
    dVar13 = (double)CONCAT44(uStack_10c,uStack_110) * 0.0;
    local_1f8._8_8_ = local_158;
    local_1f8._0_8_ = dVar29;
    dVar43 = dVar12 * dVar28 - dVar29 * dVar10;
    dVar44 = dVar27 * dVar29 - local_158 * dVar12;
    local_188._8_4_ = SUB84(dVar12,0);
    local_188._0_8_ = dVar10;
    local_188._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_198._8_4_ = SUB84(dVar13,0);
    local_198._0_8_ = dVar27;
    local_198._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    dVar27 = dVar10 * local_158 - dVar28 * dVar27;
    dVar44 = dVar44 + dVar44;
    dVar27 = dVar27 + dVar27;
    dVar43 = dVar43 + dVar43;
    iVar19 = *(int *)(lVar25 + 0x18);
    *(uint *)(lVar25 + 0x18) = iVar19 + 1U;
    local_238 = local_158;
    dStack_230 = dStack_150;
    if (*(uint *)(lVar25 + 0x1c) < iVar19 + 1U) {
      FUN_1403e3958((longlong *)(lVar25 + 0x10),iVar19);
    }
    dVar15 = dVar15 + (double)local_1e8._0_8_;
    dVar16 = dVar16 + (double)local_1e8._8_8_;
    dVar11 = (double)local_1b8._0_8_ + dVar32 * dStack_150;
    dVar10 = (double)local_1f8._8_8_ * dVar27;
    dVar12 = (double)local_1c8._0_8_ + local_218._0_8_;
    dVar13 = (double)local_1c8._8_8_ + local_218._8_8_;
    dVar34 = dVar31 * dStack_150 + dVar30 + (dVar34 * dVar28 - dVar33 * dVar29) + local_208;
    lVar25 = *(longlong *)(lVar25 + 0x10);
    *(undefined1 (*) [16])(lVar25 + (longlong)iVar19 * 0x18) = local_218;
    *(ulonglong *)(lVar25 + 0x10 + (longlong)iVar19 * 0x18) = CONCAT44(uStack_21c,local_220);
    lVar25 = param_1[4];
    iVar19 = *(int *)(lVar25 + 0x18);
    *(uint *)(lVar25 + 0x18) = iVar19 + 1U;
    dVar30 = local_238 * dVar44;
    uVar26 = local_218._0_4_;
    uVar46 = local_218._4_4_;
    uVar47 = local_218._8_4_;
    uVar48 = local_218._12_4_;
    dVar31 = (double)local_1f8._0_8_ * dVar44;
    if (*(uint *)(lVar25 + 0x1c) < iVar19 + 1U) {
      local_1f8._8_4_ = SUB84(dVar10,0);
      local_1f8._0_8_ = (double)local_1f8._0_8_ * dVar44;
      local_1f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_238 = local_238 * dVar44;
      dStack_230 = dStack_230 * dVar27;
      FUN_1403e3958((longlong *)(lVar25 + 0x10),iVar19);
      dVar30 = local_238;
      uVar26 = local_218._0_4_;
      uVar46 = local_218._4_4_;
      uVar47 = local_218._8_4_;
      uVar48 = local_218._12_4_;
      dVar31 = (double)local_1f8._0_8_;
      dVar10 = (double)local_1f8._8_8_;
    }
    uVar18 = uStack_21c;
    uVar17 = local_220;
    dVar44 = dVar44 * (double)local_1a8._0_8_;
    dVar45 = dVar27 * (double)local_1a8._8_8_;
    dVar33 = dVar43 * (double)local_1a8._0_8_;
    lVar25 = *(longlong *)(lVar25 + 0x10);
    auVar8._8_4_ = SUB84(dVar13,0);
    auVar8._0_8_ = dVar12;
    auVar8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(lVar25 + (longlong)iVar19 * 0x18) = auVar8;
    *(double *)(lVar25 + 0x10 + (longlong)iVar19 * 0x18) = dVar34;
    lVar25 = param_1[5];
    iVar19 = *(int *)(lVar25 + 0x18);
    *(uint *)(lVar25 + 0x18) = iVar19 + 1U;
    if (*(uint *)(lVar25 + 0x1c) < iVar19 + 1U) {
      FUN_1403e3958((longlong *)(lVar25 + 0x10),iVar19);
    }
    dVar13 = local_208;
    dVar44 = (double)local_188._0_8_ + dVar44;
    dVar45 = (double)local_188._8_8_ + dVar45;
    dVar33 = (double)local_198._0_8_ + dVar33;
    dVar12 = dVar16 + (local_158 * dVar35 - dVar28 * dVar32) + (double)CONCAT44(uVar48,uVar47);
    dVar34 = dVar11 + (dVar36 * dVar28 - dVar35 * dVar29) + local_208;
    lVar25 = *(longlong *)(lVar25 + 0x10);
    puVar1 = (undefined4 *)(lVar25 + (longlong)iVar19 * 0x18);
    *puVar1 = uVar26;
    puVar1[1] = uVar46;
    puVar1[2] = uVar47;
    puVar1[3] = uVar48;
    *(ulonglong *)(lVar25 + 0x10 + (longlong)iVar19 * 0x18) = CONCAT44(uVar18,uVar17);
    lVar25 = param_1[5];
    iVar19 = *(int *)(lVar25 + 0x18);
    *(uint *)(lVar25 + 0x18) = iVar19 + 1U;
    if (*(uint *)(lVar25 + 0x1c) < iVar19 + 1U) {
      FUN_1403e3958((longlong *)(lVar25 + 0x10),iVar19);
    }
    lVar25 = *(longlong *)(lVar25 + 0x10);
    auVar14._8_4_ = SUB84(dVar12,0);
    auVar14._0_8_ =
         dVar15 + (dVar32 * dVar29 - dVar36 * local_158) + (double)CONCAT44(uVar46,uVar26);
    auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(lVar25 + (longlong)iVar19 * 0x18) = auVar14;
    *(double *)(lVar25 + 0x10 + (longlong)iVar19 * 0x18) = dVar34;
    lVar25 = param_1[6];
    iVar19 = *(int *)(lVar25 + 0x18);
    *(uint *)(lVar25 + 0x18) = iVar19 + 1U;
    if (*(uint *)(lVar25 + 0x1c) < iVar19 + 1U) {
      FUN_1403e3958((longlong *)(lVar25 + 0x10),iVar19);
    }
    dVar36 = dVar45 + (dVar30 - dVar28 * dVar43) + (double)CONCAT44(uVar48,uVar47);
    lVar25 = *(longlong *)(lVar25 + 0x10);
    puVar1 = (undefined4 *)(lVar25 + (longlong)iVar19 * 0x18);
    *puVar1 = uVar26;
    puVar1[1] = uVar46;
    puVar1[2] = uVar47;
    puVar1[3] = uVar48;
    *(ulonglong *)(lVar25 + 0x10 + (longlong)iVar19 * 0x18) = CONCAT44(uVar18,uVar17);
    lVar25 = param_1[6];
    iVar19 = *(int *)(lVar25 + 0x18);
    *(uint *)(lVar25 + 0x18) = iVar19 + 1U;
    if (*(uint *)(lVar25 + 0x1c) < iVar19 + 1U) {
      FUN_1403e3958((longlong *)(lVar25 + 0x10),iVar19);
    }
    lVar25 = *(longlong *)(lVar25 + 0x10);
    auVar9._8_4_ = SUB84(dVar36,0);
    auVar9._0_8_ = dVar44 + (dVar43 * dVar29 - dVar10) + (double)CONCAT44(uVar46,uVar26);
    auVar9._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    *(undefined1 (*) [16])(lVar25 + (longlong)iVar19 * 0x18) = auVar9;
    *(double *)(lVar25 + 0x10 + (longlong)iVar19 * 0x18) =
         dVar13 + dVar33 + (dVar27 * dVar28 - dVar31);
    FUN_14449d5e6(*(undefined8 *)param_1[1],local_108,uVar4,0);
    FUN_1444a0862(*(undefined8 *)param_1[1],&local_178,uVar4,0);
    if (0 < local_f8) {
      lVar25 = 0;
      iVar19 = local_f8;
      do {
        puVar21 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar21 = local_108;
        }
        uVar4 = *(ulonglong *)(puVar21 + lVar25 * 8);
        if (uVar4 != 0) {
          bVar3 = *(byte *)(uVar4 + 0x10);
          if ((((ulonglong)bVar3 < 0x21) && ((0x100010016U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0))
             || (bVar3 == 0x80)) {
            plVar7 = (longlong *)param_1[2];
            if ((int)plVar7[1] == *(int *)((longlong)plVar7 + 0x34)) {
LAB_1444b559f:
              if (((local_170 <= lVar25) || (1e-08 < *(float *)(local_178 + lVar25 * 0xc))) ||
                 ((lVar20 = local_178 + lVar25 * 0xc, 1e-08 < *(float *)(lVar20 + 4) ||
                  (1e-08 < *(float *)(lVar20 + 8))))) {
                if ((plVar5 == (longlong *)0x0) ||
                   (iVar19 = FUN_14919fd68(plVar5,uVar4 + 0x10), iVar19 == -1)) {
                  FUN_1401571e4(uVar6,&local_168,uVar4,3);
                  uVar37 = local_148;
                  uVar38 = uStack_144;
                  uVar39 = uStack_140;
                  uVar40 = uStack_13c;
                  uVar41 = local_138;
                  uVar42 = uStack_134;
                }
                else {
                  puVar1 = (undefined4 *)(*plVar5 + 0x40 + (longlong)iVar19 * 0x110);
                  uVar37 = *puVar1;
                  uVar38 = puVar1[1];
                  uVar39 = puVar1[2];
                  uVar40 = puVar1[3];
                  puVar1 = (undefined4 *)(*plVar5 + 0x50 + (longlong)iVar19 * 0x110);
                  uVar41 = *puVar1;
                  uVar42 = puVar1[1];
                }
                lVar20 = param_1[7];
                iVar19 = *(int *)(lVar20 + 0x18);
                *(uint *)(lVar20 + 0x18) = iVar19 + 1U;
                if (*(uint *)(lVar20 + 0x1c) < iVar19 + 1U) {
                  FUN_1403e3958((longlong *)(lVar20 + 0x10),iVar19);
                }
                lVar20 = *(longlong *)(lVar20 + 0x10);
                puVar1 = (undefined4 *)(lVar20 + (longlong)iVar19 * 0x18);
                *puVar1 = uVar26;
                puVar1[1] = uVar46;
                puVar1[2] = uVar47;
                puVar1[3] = uVar48;
                *(ulonglong *)(lVar20 + 0x10 + (longlong)iVar19 * 0x18) = CONCAT44(uVar18,uVar17);
                lVar20 = param_1[7];
                iVar19 = *(int *)(lVar20 + 0x18);
                *(uint *)(lVar20 + 0x18) = iVar19 + 1U;
                if (*(uint *)(lVar20 + 0x1c) < iVar19 + 1U) {
                  FUN_1403e3958((longlong *)(lVar20 + 0x10),iVar19);
                }
                lVar20 = *(longlong *)(lVar20 + 0x10);
                puVar1 = (undefined4 *)(lVar20 + (longlong)iVar19 * 0x18);
                *puVar1 = uVar37;
                puVar1[1] = uVar38;
                puVar1[2] = uVar39;
                puVar1[3] = uVar40;
                *(ulonglong *)(lVar20 + 0x10 + (longlong)iVar19 * 0x18) = CONCAT44(uVar42,uVar41);
                iVar19 = local_f8;
              }
            }
            else {
              uVar23 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
              uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
              plVar22 = plVar7 + 7;
              if ((longlong *)plVar7[8] != (longlong *)0x0) {
                plVar22 = (longlong *)plVar7[8];
              }
              iVar24 = *(int *)((longlong)plVar22 +
                               (ulonglong)((int)plVar7[9] - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4);
              if (iVar24 != -1) {
                do {
                  if (*(ulonglong *)(*plVar7 + (longlong)iVar24 * 0x18) == uVar4)
                  goto LAB_1444b559f;
                  iVar24 = *(int *)(*plVar7 + (longlong)iVar24 * 0x18 + 0x10);
                } while (iVar24 != -1);
              }
            }
          }
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < iVar19);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_100 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar23 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
    plVar22 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar22 = (longlong *)plVar7[8];
    }
    iVar19 = *(int *)((longlong)plVar22 +
                     (ulonglong)((int)plVar7[9] - 1U & (uVar23 >> 0x10 ^ uVar23)) * 4);
    if (iVar19 != -1) {
      do {
        if (*(ulonglong *)(*plVar7 + (longlong)iVar19 * 0x18) == uVar4) goto LAB_1444b4fe4;
        iVar19 = *(int *)(*plVar7 + ((longlong)iVar19 * 3 + 2) * 8);
      } while (iVar19 != -1);
    }
  }
LAB_1444b57fe:
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1444b58dc FUN_1444b58dc body=93 status=ok
// SIG undefined FUN_1444b58dc(void)

void FUN_1444b58dc(undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_2;
  *param_3 = 1;
  local_10 = *(undefined4 *)(lVar1 + 0x18);
  local_18 = *(undefined8 *)(lVar1 + 0x10);
  if ((byte)((byte)local_18 & ~*(byte *)(param_1 + 1)) == 0) {
    FUN_149197016(*param_1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b5964 FUN_1444b5964 body=29 status=ok
// SIG undefined FUN_1444b5964(void)

undefined8 FUN_1444b5964(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b5982 FUN_1444b5982 body=161 status=ok
// SIG undefined FUN_1444b5982(void)

void FUN_1444b5982(undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  *param_3 = 1;
  local_20 = *(undefined4 *)(lVar1 + 0x18);
  local_28 = *(undefined8 *)(lVar1 + 0x10);
  if ((byte)((byte)local_28 & ~*(byte *)(param_1 + 3)) == 0) {
    local_38 = *(undefined4 *)(lVar1 + 0x18);
    local_40 = *(undefined8 *)(lVar1 + 0x10);
    FUN_1491d3868(*param_1,&local_30);
    if (((local_30 != 0) && (*(int *)(param_1 + 1) == (int)local_30)) &&
       (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)local_30 >> 0x20))) {
      FUN_149197016(param_1[2],&local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b5a24 FUN_1444b5a24 body=70 status=ok
// SIG undefined FUN_1444b5a24(void)

undefined8 * FUN_1444b5a24(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bc058f0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1444b5a70 FUN_1444b5a70 body=29 status=ok
// SIG undefined FUN_1444b5a70(void)

void FUN_1444b5a70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444b5a8e FUN_1444b5a8e body=29 status=ok
// SIG undefined FUN_1444b5a8e(void)

undefined8 FUN_1444b5a8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b5aac FUN_1444b5aac body=74 status=ok
// SIG undefined FUN_1444b5aac(void)

void FUN_1444b5aac(undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (*(longlong *)(lVar1 + 8) != 0) {
    lVar2 = FUN_1491e0c5e(*(longlong *)(lVar1 + 8),lVar1,param_1 + 2,*(undefined1 *)(param_1 + 3));
    if (lVar2 != 0) {
      FUN_149197016(*param_1,lVar1 + 0x10);
    }
  }
  *param_3 = 1;
  return;
}



// FUNCTION 1444b5af6 FUN_1444b5af6 body=70 status=ok
// SIG undefined FUN_1444b5af6(void)

undefined8 * FUN_1444b5af6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bc05910;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1444b5b42 FUN_1444b5b42 body=29 status=ok
// SIG undefined FUN_1444b5b42(void)

void FUN_1444b5b42(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444b5b60 FUN_1444b5b60 body=29 status=ok
// SIG undefined FUN_1444b5b60(void)

undefined8 FUN_1444b5b60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b5b7e FUN_1444b5b7e body=121 status=ok
// SIG undefined FUN_1444b5b7e(void)

void FUN_1444b5b7e(undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if (*(longlong *)(lVar1 + 8) != 0) {
    lVar2 = FUN_1491e0c5e(*(longlong *)(lVar1 + 8),lVar1,&DAT_14cc063e8,7);
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\a')) &&
       ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar3) == param_1[1]) {
          FUN_149197016(*param_1,lVar1 + 0x10);
          break;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 0x28) * 8 != lVar3);
    }
  }
  *param_3 = 1;
  return;
}



// FUNCTION 1444b5c22 FUN_1444b5c22 body=29 status=ok
// SIG undefined FUN_1444b5c22(void)

undefined8 FUN_1444b5c22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b5c40 FUN_1444b5c40 body=146 status=ok
// SIG undefined FUN_1444b5c40(void)

void FUN_1444b5c40(undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  if (((*(longlong *)(lVar2 + 8) != 0) &&
      (lVar3 = FUN_1491e0c5e(*(longlong *)(lVar2 + 8),lVar2,&DAT_14cc063e8,7), lVar3 != 0)) &&
     (*(char *)(lVar3 + 0x10) == '\a')) {
    if ((longlong)*(int *)(param_1 + 2) != 0) {
      if ((longlong)*(int *)(lVar3 + 0x28) == 0) goto LAB_1444b5cc7;
      plVar4 = (longlong *)param_1[1];
      plVar1 = plVar4 + *(int *)(param_1 + 2);
      do {
        lVar5 = 0;
        while (*(longlong *)(*(longlong *)(lVar3 + 0x20) + lVar5) != *plVar4) {
          lVar5 = lVar5 + 8;
          if ((longlong)*(int *)(lVar3 + 0x28) * 8 == lVar5) goto LAB_1444b5cc7;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
    FUN_149197016(*param_1,lVar2 + 0x10);
  }
LAB_1444b5cc7:
  *param_3 = 1;
  return;
}



// FUNCTION 1444b5d04 FUN_1444b5d04 body=29 status=ok
// SIG undefined FUN_1444b5d04(void)

undefined8 FUN_1444b5d04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b5d22 FUN_1444b5d22 body=226 status=ok
// SIG undefined FUN_1444b5d22(void)

void FUN_1444b5d22(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str;
  bool bVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  FUN_1400021e4(lVar1 + 0x14,local_30);
  if ((int)param_1[2] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)param_1[1];
  }
  if (_Str == (wchar_t *)0x0) {
    bVar5 = false;
  }
  else {
    sVar4 = wcslen(_Str);
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar3 = FUN_1447ee042(local_30,_Str,sVar4 & 0xffffffff,0);
    bVar5 = iVar3 != -1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (bVar5) {
    param_1 = (longlong *)*param_1;
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_149192788(param_1,iVar3);
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 8 + (longlong)iVar3 * 0xc) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar2 + (longlong)iVar3 * 0xc) = *(undefined8 *)(lVar1 + 0x10);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b5e06 FUN_1444b5e06 body=363 status=ok
// SIG undefined FUN_1444b5e06(void)

void FUN_1444b5e06(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1444b5e9c;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1444b5e9c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1444b5f72 FUN_1444b5f72 body=259 status=ok
// SIG undefined FUN_1444b5f72(void)

void FUN_1444b5f72(double *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = dVar1;
  param_1[2] = param_3[2];
  dVar1 = *param_1;
  if (ABS(dVar1) < 9.999999747378752e-05) {
    *param_1 = (double)(-(ulonglong)(0.0 < dVar1) & 0x3f1a36e2e0000000 |
                       ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbf1a36e2e0000000);
  }
  dVar1 = param_1[1];
  if (ABS(dVar1) < 9.999999747378752e-05) {
    param_1[1] = (double)(-(ulonglong)(0.0 < dVar1) & 0x3f1a36e2e0000000 |
                         ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbf1a36e2e0000000
                         );
  }
  dVar1 = param_1[2];
  if (ABS(dVar1) < 9.999999747378752e-05) {
    param_1[2] = (double)(-(ulonglong)(0.0 < dVar1) & 0x3f1a36e2e0000000 |
                         ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbf1a36e2e0000000
                         );
  }
  return;
}



// FUNCTION 1444b6076 FUN_1444b6076 body=62 status=ok
// SIG undefined FUN_1444b6076(void)

void FUN_1444b6076(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1f0,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bc05970;
  FUN_14920b596(puVar1 + 2,param_1 + 0x10);
  return;
}



// FUNCTION 1444b60b4 FUN_1444b60b4 body=5 status=ok
// SIG undefined FUN_1444b60b4(void)

longlong FUN_1444b60b4(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 1444b60ba FUN_1444b60ba body=29 status=ok
// SIG undefined FUN_1444b60ba(void)

void FUN_1444b60ba(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444b60d8 FUN_1444b60d8 body=52 status=ok
// SIG undefined FUN_1444b60d8(void)

undefined8 * FUN_1444b60d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05970;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b610c FUN_1444b610c body=259 status=ok
// SIG undefined FUN_1444b610c(void)

void FUN_1444b610c(double *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = dVar1;
  param_1[2] = param_3[2];
  dVar1 = *param_1;
  if (ABS(dVar1) < 9.999999747378752e-05) {
    *param_1 = (double)(-(ulonglong)(0.0 < dVar1) & 0x3f1a36e2e0000000 |
                       ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbf1a36e2e0000000);
  }
  dVar1 = param_1[1];
  if (ABS(dVar1) < 9.999999747378752e-05) {
    param_1[1] = (double)(-(ulonglong)(0.0 < dVar1) & 0x3f1a36e2e0000000 |
                         ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbf1a36e2e0000000
                         );
  }
  dVar1 = param_1[2];
  if (ABS(dVar1) < 9.999999747378752e-05) {
    param_1[2] = (double)(-(ulonglong)(0.0 < dVar1) & 0x3f1a36e2e0000000 |
                         ~-(ulonglong)(0.0 < dVar1) & -(ulonglong)(dVar1 < 0.0) & 0xbf1a36e2e0000000
                         );
  }
  return;
}



// FUNCTION 1444b6210 FUN_1444b6210 body=62 status=ok
// SIG undefined FUN_1444b6210(void)

void FUN_1444b6210(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1f0,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bc05990;
  FUN_14920b596(puVar1 + 2,param_1 + 0x10);
  return;
}



// FUNCTION 1444b624e FUN_1444b624e body=5 status=ok
// SIG undefined FUN_1444b624e(void)

longlong FUN_1444b624e(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 1444b6254 FUN_1444b6254 body=29 status=ok
// SIG undefined FUN_1444b6254(void)

void FUN_1444b6254(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444b6272 FUN_1444b6272 body=52 status=ok
// SIG undefined FUN_1444b6272(void)

undefined8 * FUN_1444b6272(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc05990;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444b62a6 FUN_1444b62a6 body=3976 status=ok
// SIG undefined FUN_1444b62a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b62a6(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14cc08218 = 0xffffffff;
  _DAT_14cc0821c = 0;
  FUN_1446f470e(&local_70,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_70,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_70,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_70,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_70,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_70,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_70,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_70,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_70,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_70,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_70,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_70,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_70,PTR_u_TArray<FString>_14c764ef8,1);
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cc08220);
  if (cVar1 == '\0') {
    _DAT_14cc08220 = 0;
    uRam000000014cc08228 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14cc08230 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb90ec0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb91a40,1,&PTR_FUN_14bb91a10);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb91e90;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb91eb0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb92750,2,&PTR_FUN_14bb92720);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cc08350 = (ulonglong)uVar2;
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb93770,1,&PTR_FUN_14bb93720);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb93c00,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb94010,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb94250);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb94f20);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bb959a0,2,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb95cf0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb95e70);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb96360);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb96cb0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb973c0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb973e0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb97990);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb97f60);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb98c10);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9a0f0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9a570);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9b510);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 10;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9c470);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9cf20);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9d9d0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9de00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9e510);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb9ee20;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9ee40);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bb9f320;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9f340);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9f660);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bb9f9e0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bba0340);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bba0a00);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bba0df0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0x17;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bba3cd0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bbaafc0;
  local_88 = 0x35;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbaafe0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0x17;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbaf860);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbafd20);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbafe60);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb01a0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 9;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb0e10);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb1330);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb15e0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 8;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb2180);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb2500);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb2800);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb2d20);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0x10;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb42d0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0x10;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb5b50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb5fa0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb6270);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb6540);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb7630);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb7920);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb7ba0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb7e50);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb8210);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb84c0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbb8de0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 0x12;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbb340);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbb860);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbc110);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbc660);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbc930);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbcc40);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbcf50);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbd230);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbd560);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbd850);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbdbc0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbe010);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbbe5f0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 0x11;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc08c0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc0f70);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc1150);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc1460);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc1e60);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc2190);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc2440);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc37b0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc3a90);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc4390);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 5;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc53c0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc6d10);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 9;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc8980);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbc9de0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 5;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbcade0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbcba30);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bbcd7d0;
  local_88 = 6;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbcd7f0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbcdf30);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bbce680;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbce6a0);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbcec60);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbcf670);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbd0710);
  uStack_78 = 0;
  ppuStack_80 = (undefined **)0x0;
  local_88 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbd13e0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14bbd4110;
  local_88 = 0x10;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bbd4130);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b7230 FUN_1444b7230 body=55 status=ok
// SIG undefined FUN_1444b7230(void)

void FUN_1444b7230(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b080 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0b080 = FUN_14171c317(FUN_1467170cc,uVar1,L"EControlRigInteractionType");
  }
  return;
}



// FUNCTION 1444b7267 FUN_1444b7267 body=55 status=ok
// SIG undefined FUN_1444b7267(void)

void FUN_1444b7267(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b098 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0b098 = FUN_14171c317(FUN_1467170fb,uVar1,L"ERigMetaDataNameSpace");
  }
  return;
}



// FUNCTION 1444b742c FUN_1444b742c body=979 status=ok
// SIG undefined FUN_1444b742c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b742c(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_40,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_40,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_40,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_40,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_40,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_40,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_40,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_40,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_40,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_40,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_40,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_40,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_40,PTR_u_TArray<FString>_14c764ef8,1);
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cc0af00);
  if (cVar1 == '\0') {
    _DAT_14cc0af00 = 0;
    uRam000000014cc0af08 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc065c0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 5;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc081c0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc08760);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc08900);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc089a0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc08ad0);
  uStack_48 = 2;
  ppuStack_50 = &PTR_FUN_14bc08db0;
  local_58 = 2;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc08df0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc09dd0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 5;
  FUN_14282b410(L"/Script/ControlRig",0,0,&PTR_FUN_14bc0b1d0);
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/ControlRig",&PTR_FUN_14bc0b940,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b7800 FUN_1444b7800 body=55 status=ok
// SIG undefined FUN_1444b7800(void)

void FUN_1444b7800(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b200 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b200 = FUN_14171c317(FUN_146719401,uVar1,L"ELiveLinkSubjectState");
  }
  return;
}



// FUNCTION 1444b7837 FUN_1444b7837 body=55 status=ok
// SIG undefined FUN_1444b7837(void)

void FUN_1444b7837(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b278 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b278 = FUN_14171c317(FUN_146719711,uVar1,L"ELiveLinkCameraProjectionMode");
  }
  return;
}



// FUNCTION 1444b7895 FUN_1444b7895 body=55 status=ok
// SIG undefined FUN_1444b7895(void)

void FUN_1444b7895(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b588 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b588 = FUN_14171c317(FUN_14671a5eb,uVar1,L"ELiveLinkSourceMode");
  }
  return;
}



// FUNCTION 1444b7b18 FUN_1444b7b18 body=1477 status=ok
// SIG undefined FUN_1444b7b18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b7b18(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14098d3d2(FUN_1444b7800,L"/Script/LiveLinkInterface",L"ELiveLinkSubjectState",&DAT_14cc0b1f8);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc0eaf0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc0ede0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc0ef70);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14bc0f780;
  local_78 = 3;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc0f7a0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc0fb60,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc0fef0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc10260,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc10600,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc112e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc11ba0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc11f70);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc12140);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc12630,1,&PTR_FUN_14bc12600);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc12aa0,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc12e90);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc13500,1,&PTR_FUN_14bc134d0);
  local_58 = (char *)0x45d808fcab965196;
  uStack_50 = 0xb7d7228d;
  uStack_4c = 0x78ad569e;
  _DAT_14cc0b510 = 0xab965196;
  uRam000000014cc0b514 = 0x45d808fc;
  uRam000000014cc0b518 = 0xb7d7228d;
  uRam000000014cc0b51c = 0x78ad569e;
  FUN_141005458(&local_58,1,L"LiveLinkVer",0);
  atexit((_func_5014 *)&LAB_1444b786e);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc138b0,1,0);
  DAT_14cc0b538 = 0;
  atexit((_func_5014 *)&LAB_1444b787a);
  local_58 = "ModularFeature_LiveLinkClient";
  uStack_50 = 0x1d;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar1 = FUN_14001a6c0(&local_58,1);
  DAT_14cc0b540 = (ulonglong)uVar1;
  local_58 = (char *)0x800000014bc138f6;
  local_44 = 0x11;
  uStack_50 = FUN_14577453c();
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  FUN_14671a47a(&local_58);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc13c90,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14bc15090;
  local_78 = 4;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc15150,2,&PTR_FUN_14bc150b0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc15d00,2,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 0xd;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc16b70);
  _DAT_14cc0b778 = &DAT_10000000f;
  _DAT_14cc0b780 = &DAT_100000018;
  _DAT_14cc0b788 = 0x100000019;
  _DAT_14cc0b790 = 0x10000001e;
  _DAT_14cc0b798 = &DAT_100000030;
  _DAT_14cc0b7a0 = 0x100000032;
  _DAT_14cc0b7a8 = &DAT_10000003c;
  _DAT_14cc0b7b0 = 0x100000064;
  _DAT_14cc0b7b8 = 0x100000078;
  _DAT_14cc0b7c0 = 0x1000000f0;
  _DAT_14cc0b7c8 = 0x3e900005dc0;
  _DAT_14cc0b7d0 = 0x3e900007530;
  _DAT_14cc0b7d8 = 0x3e90000ea60;
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc17340,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/LiveLinkInterface",0,0,&PTR_FUN_14bc176d0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc17af0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc17ec0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc18270,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc186a0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/LiveLinkInterface",&PTR_FUN_14bc18a50,1,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b80e0 FUN_1444b80e0 body=69 status=ok
// SIG undefined FUN_1444b80e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b80e0(void)

{
  _DAT_14cc0b990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444b8122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc0b998,1);
  return;
}



// FUNCTION 1444b8134 FUN_1444b8134 body=365 status=ok
// SIG undefined FUN_1444b8134(void)

void FUN_1444b8134(void)

{
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/LiveLinkComponents",&PTR_FUN_14bc1d490,1,0);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/LiveLinkComponents",&PTR_FUN_14bc1d840,1,0);
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/LiveLinkComponents",&PTR_FUN_14bc1df30,1,&PTR_FUN_14bc1df00);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/LiveLinkComponents",&PTR_FUN_14bc1edb0,1,0);
  local_58 = CONCAT71(local_58._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc0b990,L"LiveLink.Component.EnableLiveLinkEvaluation",&local_58,
                L"Whether LiveLink components should evaluate their subject.");
  atexit(FUN_1444b80e0);
  local_58 = 0x800000014bc1eea6;
  local_44 = 0x12;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14671bed8(&local_58);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14282b410(L"/Script/LiveLinkComponents",&PTR_FUN_14bc1f2b0,1,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b82b7 FUN_1444b82b7 body=47 status=ok
// SIG undefined FUN_1444b82b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b82b7(void)

{
  _DAT_14cc0ba70 = 0;
  if (DAT_14cc0ba68 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14cc0ba28);
  return;
}



// FUNCTION 1444b82e6 FUN_1444b82e6 body=332 status=ok
// SIG undefined FUN_1444b82e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b82e6(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cc0b9d0);
  if (cVar1 == '\0') {
    _DAT_14cc0b9d0 = 0;
    uRam000000014cc0b9d8 = 0;
  }
  if (local_28 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_28 = "bone";
  local_20 = 4;
  local_1c = 0;
  FUN_14001a6c0(&local_28,1);
  local_28 = "SMInstance";
  local_20 = 10;
  local_1c = 0;
  uVar2 = FUN_14001a6c0(&local_28,1);
  _DAT_14cc0b9e0 = (ulonglong)uVar2;
  DAT_14cc0b9f8 = 0;
  atexit((_func_5014 *)&LAB_1444b82a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc0ba00);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc0ba00,4000);
  atexit((_func_5014 *)&LAB_1444b82a9);
  _DAT_14cc0ba48 = 0;
  _DAT_14cc0ba50 = 0;
  _DAT_14cc0ba28 = 0;
  uRam000000014cc0ba30 = 0;
  _DAT_14cc0ba54 = 0xffffffff00000080;
  _DAT_14cc0ba5c = 0;
  DAT_14cc0ba68 = 0;
  _DAT_14cc0ba70 = 0;
  atexit(FUN_1444b82b7);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b8434 FUN_1444b8434 body=213 status=ok
// SIG undefined FUN_1444b8434(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b8434(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cc0ba78 = 0xffffffff;
  _DAT_14cc0ba7c = 0;
  local_20 = "SMInstance";
  local_18 = 10;
  local_14 = 0;
  uVar2 = FUN_14001a6c0(&local_20,1);
  _DAT_14cc0ba80 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_20,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_20,&DAT_14cc0ba88);
  if (cVar1 == '\0') {
    _DAT_14cc0ba88 = 0;
    uRam000000014cc0ba90 = 0;
  }
  if (local_20 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_20 = "bone";
  local_18 = 4;
  local_14 = 0;
  FUN_14001a6c0(&local_20,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b850c FUN_1444b850c body=69 status=ok
// SIG undefined FUN_1444b850c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b850c(void)

{
  _DAT_14cc0bab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444b854e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc0bab8,1);
  return;
}



// FUNCTION 1444b8573 FUN_1444b8573 body=791 status=ok
// SIG undefined FUN_1444b8573(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444b8573(void)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cc0ba98);
  if (cVar1 == '\0') {
    _DAT_14cc0ba98 = 0;
    uRam000000014cc0baa0 = 0;
  }
  if (local_28 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_28 = &DAT_14a19662d;
  local_20 = 4;
  local_1c = 0;
  FUN_14001a6c0(&local_28,1);
  FUN_1446f470e(&local_28,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_28,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_28,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_28,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_28,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_28,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_28,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_28,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_28,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_28,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_28,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_28,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_28,PTR_u_TArray<FString>_14c764ef8,1);
  _DAT_14cc0baa8 = 0xffffffff;
  _DAT_14cc0baac = 0;
  local_38 = 0;
  FUN_14153156c(&DAT_14cc0bab0,L"USD.AddCurveMetadataToSkeleton",&DAT_14c764f98,
                L"When true will cause blend shape / morph target float curve data to be added to generated USkeleton assets. When false, this curve data will be added to the generated USkeletalMesh assets instead."
               );
  atexit(FUN_1444b850c);
  local_28 = (undefined *)0x800000014bc1f710;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14671c142(&local_28);
  FUN_140056680(&DAT_14cc0bac8,L"SdfTokenListOp(Explicit Items: [");
  atexit((_func_5014 *)&LAB_1444b8551);
  FUN_140056680(&DAT_14cc0bad8,L"SdfTokenListOp(Explicit Items: [])");
  atexit((_func_5014 *)&LAB_1444b8562);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444b888c FUN_1444b888c body=55 status=ok
// SIG undefined FUN_1444b888c(void)

void FUN_1444b888c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0bb08 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0bb08 = FUN_14171c317(FUN_14671c284,uVar1,L"EInterchangeFactoryAssetType");
  }
  return;
}



// FUNCTION 1444b88cf FUN_1444b88cf body=55 status=ok
// SIG undefined FUN_1444b88cf(void)

void FUN_1444b88cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0bba8 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0bba8 = FUN_14171c317(FUN_14671c533,uVar1,L"EInterchangePipelineTask");
  }
  return;
}



// FUNCTION 1444b8906 FUN_1444b8906 body=55 status=ok
// SIG undefined FUN_1444b8906(void)

void FUN_1444b8906(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0bbc0 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0bbc0 = FUN_14171c317(FUN_14671c562,uVar1,L"EInterchangePipelineContext");
  }
  return;
}



// FUNCTION 1444b893d FUN_1444b893d body=55 status=ok
// SIG undefined FUN_1444b893d(void)

void FUN_1444b893d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0bcb8 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0bcb8 = FUN_14171c317(FUN_14671c8fa,uVar1,L"EInterchangeResultType");
  }
  return;
}



// FUNCTION 1444b8974 FUN_1444b8974 body=59 status=ok
// SIG undefined FUN_1444b8974(void)

void FUN_1444b8974(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cc0bda8;
  if (DAT_14cc0bda8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cc0bda8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001444b89a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1444b89b0 FUN_1444b89b0 body=1586 status=ok
// SIG undefined FUN_1444b89b0(void)

void FUN_1444b89b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  LPCRITICAL_SECTION p_Var13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  LPCRITICAL_SECTION p_Var22;
  ulonglong uVar23;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  uint *local_b8;
  LPCRITICAL_SECTION local_b0;
  LPCRITICAL_SECTION local_a8;
  uint local_9c;
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = (LPCRITICAL_SECTION)(param_1 + 0x78);
  EnterCriticalSection(local_b0);
  local_a8 = (LPCRITICAL_SECTION)(param_1 + 0xf0);
  EnterCriticalSection(local_a8);
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    plVar15 = *(longlong **)(param_1 + 0xe0);
    plVar10 = plVar15 + *(int *)(param_1 + 0xe8);
LAB_1444b8a17:
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      lVar17 = *plVar15;
      lVar16 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar16 = param_1 + 0x60;
      }
      iVar21 = *(int *)(lVar16 + (ulonglong)
                                 (*(int *)(param_1 + 0x70) - 1U &
                                 (int)lVar17 + (int)((ulonglong)lVar17 >> 0x20) * 0x17) * 4);
      if (iVar21 != -1) {
        lVar16 = *(longlong *)(param_1 + 0x28);
        iVar20 = iVar21;
        do {
          if (*(longlong *)(lVar16 + (longlong)iVar20 * 0x20) == lVar17) goto LAB_1444b8a80;
          iVar20 = *(int *)((longlong)iVar20 * 0x20 + lVar16 + 0x18);
        } while (iVar20 != -1);
      }
    }
    goto LAB_1444b8b19;
  }
LAB_1444b8b32:
  LeaveCriticalSection(local_a8);
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) {
    if (*(int *)(param_1 + 0xac) < 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      FUN_1448f21ac(param_1 + 0xa0,0);
      p_Var22 = local_b0;
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      p_Var22 = local_b0;
    }
  }
  else {
    local_90 = (longlong *)(param_1 + 0x28);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar4 = *(uint *)(param_1 + 0x50);
    if (uVar4 == 0) {
      uVar23 = 1;
      p_Var22 = (LPCRITICAL_SECTION)0x0;
      iVar21 = 0;
      uVar8 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x38);
      }
      uVar8 = *puVar9;
      if (uVar8 == 0) {
        iVar21 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar21 = uVar4 - 1;
        }
        p_Var22 = (LPCRITICAL_SECTION)0x0;
        p_Var13 = (LPCRITICAL_SECTION)(ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          p_Var13 = p_Var22;
        }
        iVar21 = 0;
        do {
          if (p_Var13 == p_Var22) goto LAB_1444b8c3e;
          iVar21 = iVar21 + 0x20;
          uVar8 = puVar9[(longlong)((longlong)&p_Var22->DebugInfo + 1)];
          p_Var22 = (LPCRITICAL_SECTION)((longlong)&p_Var22->DebugInfo + 1);
        } while (uVar8 == 0);
      }
      else {
        p_Var22 = (LPCRITICAL_SECTION)0x0;
        iVar21 = 0;
      }
      uVar23 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar23 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar8 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)uVar4 <= (int)uVar8) {
        uVar8 = uVar4;
      }
    }
    if (uVar8 != uVar4) {
      uVar19 = 0xffffffff;
      local_c0 = param_1;
      local_b8 = (uint *)(param_1 + 0x38);
      local_98 = (ulonglong)uVar4;
      do {
        lVar17 = *local_90;
        lVar16 = (longlong)(int)uVar8 * 0x20;
        plVar10 = *(longlong **)(lVar17 + 8 + lVar16);
        plVar15 = *(longlong **)(lVar17 + 0x10 + lVar16);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        local_a8 = p_Var22;
        local_9c = uVar19;
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar10 + 1));
        lVar14 = plVar10[7];
        p_Var22 = (LPCRITICAL_SECTION)(plVar10 + 1);
        if (p_Var22 == (LPCRITICAL_SECTION)0x0) {
          if ((char)lVar14 != '\0') {
            EnterCriticalSection((LPCRITICAL_SECTION)0x0);
            cVar7 = (char)plVar10[7];
            goto LAB_1444b8df0;
          }
LAB_1444b8e2e:
          cVar7 = (**(code **)(*plVar10 + 8))(plVar10);
          uVar3 = uStack_50;
          if (cVar7 == '\0') {
            iVar20 = (int)uStack_50;
            uVar4 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
            if (uStack_50._4_4_ < uVar4) {
              FUN_14479d316(&local_58,uVar3 & 0xffffffff);
            }
            plVar10 = &local_58;
            param_1 = local_c0;
            puVar9 = local_b8;
            goto LAB_1444b8ecf;
          }
          cVar7 = (**(code **)(*plVar10 + 8))(plVar10);
          uVar3 = uStack_60;
          puVar9 = local_b8;
          param_1 = local_c0;
          if (cVar7 == '\x01') {
            iVar20 = (int)uStack_60;
            uVar4 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
            if (uStack_60._4_4_ < uVar4) {
              FUN_14479d316(&local_68,uVar3 & 0xffffffff);
            }
            plVar10 = &local_68;
            goto LAB_1444b8ecf;
          }
        }
        else {
          LeaveCriticalSection(p_Var22);
          if ((char)lVar14 == '\0') goto LAB_1444b8e2e;
          EnterCriticalSection(p_Var22);
          cVar7 = (char)plVar10[7];
          LeaveCriticalSection(p_Var22);
LAB_1444b8df0:
          uVar3 = uStack_70;
          puVar9 = local_b8;
          param_1 = local_c0;
          if (cVar7 != '\x02') goto LAB_1444b8edf;
          iVar20 = (int)uStack_70;
          uVar4 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if (uStack_70._4_4_ < uVar4) {
            FUN_14479d316(&local_78,uVar3 & 0xffffffff);
          }
          plVar10 = &local_78;
LAB_1444b8ecf:
          *(undefined8 *)(*plVar10 + (longlong)iVar20 * 8) = *(undefined8 *)(lVar17 + lVar16);
        }
LAB_1444b8edf:
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar15 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        uVar19 = local_9c & ~(uint)uVar23;
        puVar18 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar18 = puVar9;
        }
        uVar4 = *(uint *)(param_1 + 0x50);
        iVar20 = (int)local_a8;
        lVar17 = (longlong)iVar20;
        uVar8 = puVar18[lVar17] & uVar19;
        p_Var22 = local_a8;
        if (uVar8 == 0) {
          iVar11 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar11 = uVar4 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar20) {
            iVar12 = iVar20;
          }
          if (iVar20 < iVar11) {
            lVar16 = 0;
            do {
              uVar8 = puVar18[lVar17 + lVar16 + 1];
              if (uVar8 != 0) {
                p_Var22 = (LPCRITICAL_SECTION)(ulonglong)(iVar20 + (int)lVar16 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1444b8f89;
              }
              iVar21 = iVar21 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar12 - lVar17 != lVar16);
            uVar19 = 0xffffffff;
            iVar20 = iVar12;
          }
          p_Var22 = (LPCRITICAL_SECTION)(ulonglong)(iVar20 + 1);
          param_1 = local_c0;
          uVar8 = uVar4;
        }
        else {
LAB_1444b8f89:
          uVar23 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar23 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar8 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar8) {
            uVar8 = uVar4;
          }
        }
      } while (uVar8 != (uint)local_98);
    }
LAB_1444b8c3e:
    FUN_1444b8fe4(&local_58);
    FUN_1444b8fe4(&local_68);
    local_80 = &local_78;
    local_88 = param_1;
    FUN_1444b9342(&local_88,&local_58,1);
    FUN_1444b9342(&local_88,&local_68,0);
    lVar17 = local_78;
    lVar16 = (longlong)(int)uStack_70;
    if (lVar16 != 0) {
      lVar14 = 0;
      do {
        uVar6 = *(undefined8 *)(lVar17 + lVar14);
        FUN_149302258(local_90,uVar6);
        iVar21 = *(int *)(param_1 + 0xa8);
        *(uint *)(param_1 + 0xa8) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0xac) < iVar21 + 1U) {
          FUN_14479d316((longlong *)(param_1 + 0xa0),iVar21);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar21 * 8) = uVar6;
        lVar14 = lVar14 + 8;
      } while (lVar16 * 8 != lVar14);
    }
    p_Var22 = local_b0;
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  LeaveCriticalSection(p_Var22);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar21 = *(int *)(lVar14 + 0x18), iVar21 != -1) {
LAB_1444b8a80:
    lVar14 = lVar16 + (longlong)iVar21 * 0x20;
    if (*(longlong *)(lVar16 + (longlong)iVar21 * 0x20) == lVar17) goto LAB_1444b8a9b;
  }
  lVar14 = 0;
LAB_1444b8a9b:
  lVar17 = *(longlong *)(lVar14 + 8);
  plVar5 = *(longlong **)(lVar14 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar17 + 8));
  cVar7 = *(char *)(lVar17 + 0x38);
  p_Var22 = (LPCRITICAL_SECTION)(lVar17 + 8);
  if (p_Var22 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var22);
  }
  if (cVar7 == '\x01') {
    FUN_1492ec9f6(lVar17);
  }
  EnterCriticalSection(p_Var22);
  if (*(char *)(lVar17 + 0x38) != '\x02') {
    *(undefined1 *)(lVar17 + 0x38) = 2;
  }
  if (p_Var22 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var22);
  }
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
LAB_1444b8b19:
  plVar15 = plVar15 + 1;
  if (plVar15 == plVar10) goto LAB_1444b8b32;
  goto LAB_1444b8a17;
}



// FUNCTION 1444b8fe4 FUN_1444b8fe4 body=861 status=ok
// SIG undefined FUN_1444b8fe4(void)

void FUN_1444b8fe4(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar13 = (int)param_1[1];
  if (1 < (longlong)iVar13) {
    lVar1 = *param_1;
    memset(local_338,0,0x2f0);
    local_340 = lVar1 + (longlong)iVar13 * 8 + -8;
    local_348 = lVar1;
    fVar23 = logf((float)iVar13);
    local_338[0] = (int)(longlong)(fVar23 + fVar23);
    plVar4 = &local_348;
    do {
      puVar6 = (ulonglong *)*plVar4;
      puVar7 = (ulonglong *)plVar4[1];
      iVar13 = (int)plVar4[2];
      iVar8 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar6) >> 3);
      uVar18 = (ulonglong)(iVar8 + 1);
      puVar9 = puVar6;
      puVar11 = puVar7;
      if (iVar13 != 0) {
LAB_1444b9083:
        if (8 < (int)(uint)uVar18) {
          uVar17 = (uint)uVar18 >> 1;
          uVar18 = puVar9[uVar17];
          puVar9[uVar17] = *puVar9;
          *puVar9 = uVar18;
          puVar19 = puVar11 + 1;
          puVar5 = puVar9;
          do {
            puVar3 = puVar5 + 1;
            puVar12 = puVar5 + 1;
            do {
              puVar5 = puVar12;
              puVar21 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar21 + 1;
              puVar12 = puVar5 + 1;
            } while (*puVar5 <= *puVar9);
            puVar3 = puVar19 + -2;
            do {
              puVar12 = puVar19;
              puVar20 = puVar3;
              puVar19 = puVar12 + -1;
              if (puVar19 <= puVar9) break;
              puVar3 = puVar20 + -1;
            } while (*puVar9 <= *puVar19);
            if (puVar19 < puVar5) goto LAB_1444b9103;
            uVar18 = *puVar5;
            *puVar5 = *puVar19;
            *puVar19 = uVar18;
          } while( true );
        }
        if (puVar9 < puVar11) {
          do {
            puVar6 = puVar9;
            if (puVar9 + 1 <= puVar11) {
              uVar18 = *puVar9;
              puVar7 = puVar9 + 1;
              do {
                uVar10 = *puVar7;
                bVar22 = uVar18 < uVar10;
                if (uVar18 <= uVar10) {
                  uVar18 = uVar10;
                }
                if (bVar22) {
                  puVar6 = puVar7;
                }
                puVar7 = puVar7 + 1;
              } while (puVar7 <= puVar11);
            }
            uVar18 = *puVar6;
            *puVar6 = *puVar11;
            *puVar11 = uVar18;
            puVar11 = puVar11 + -1;
          } while (puVar9 < puVar11);
        }
        goto LAB_1444b9308;
      }
LAB_1444b9196:
      iVar13 = (int)uVar18;
      if (iVar13 != 0) {
        iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        iVar16 = iVar8;
joined_r0x0001444b91bd:
        do {
          iVar15 = iVar8 * 2 + 1;
          if (iVar15 < iVar13) {
            iVar14 = iVar8 * 2 + 2;
            if ((iVar14 < iVar13) && (puVar9[iVar15] <= puVar9[iVar14])) {
              iVar15 = iVar14;
            }
            uVar10 = puVar9[iVar8];
            if (uVar10 < puVar9[iVar15]) {
              puVar9[iVar8] = puVar9[iVar15];
              puVar9[iVar15] = uVar10;
              iVar8 = iVar15;
              goto joined_r0x0001444b91bd;
            }
          }
          bVar22 = iVar16 != 0;
          iVar8 = iVar16 + -1;
          iVar16 = iVar8;
        } while (bVar22);
        if (1 < iVar13) {
          uVar10 = *puVar9;
          *puVar9 = puVar9[uVar18 - 1];
          puVar9[uVar18 - 1] = uVar10;
          if (iVar13 != 2) {
            do {
              uVar10 = uVar18 - 1;
              iVar13 = 0;
              iVar16 = 1;
              iVar8 = 0;
              do {
                iVar13 = iVar13 + 2;
                iVar15 = iVar16;
                if (((longlong)iVar13 < (longlong)uVar10) && (puVar9[iVar16] <= puVar9[iVar13])) {
                  iVar15 = iVar13;
                }
                uVar2 = puVar9[iVar8];
                if (puVar9[iVar15] <= uVar2) break;
                puVar9[iVar8] = puVar9[iVar15];
                puVar9[iVar15] = uVar2;
                iVar13 = iVar15 * 2;
                iVar16 = iVar15 * 2 + 1;
                iVar8 = iVar15;
              } while ((longlong)iVar16 < (longlong)uVar10);
              uVar2 = *puVar9;
              *puVar9 = puVar9[uVar18 - 2];
              puVar9[uVar18 - 2] = uVar2;
              uVar18 = uVar10;
            } while (2 < uVar10);
          }
        }
      }
LAB_1444b9308:
      plVar4 = plVar4 + -3;
    } while (&local_348 <= plVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1444b9103:
  uVar18 = *puVar9;
  *puVar9 = *puVar19;
  *puVar19 = uVar18;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar20 - (longlong)puVar6 < (longlong)puVar7 - (longlong)puVar21) {
    if (puVar5 < puVar11) {
      *plVar4 = (longlong)puVar5;
      plVar4[1] = (longlong)puVar11;
      *(int *)(plVar4 + 2) = iVar13;
      plVar4 = plVar4 + 3;
    }
    puVar6 = puVar9;
    puVar7 = puVar20;
    if (puVar19 <= puVar9 + 1) goto LAB_1444b9308;
  }
  else {
    if (puVar9 + 1 < puVar19) {
      *plVar4 = (longlong)puVar9;
      plVar4[1] = (longlong)puVar12;
      *(int *)(plVar4 + 2) = iVar13;
      plVar4 = plVar4 + 3;
    }
    puVar6 = puVar21;
    puVar9 = puVar5;
    puVar12 = puVar11;
    puVar7 = puVar11;
    if (puVar11 <= puVar5) goto LAB_1444b9308;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar6) >> 3);
  uVar18 = (ulonglong)(iVar8 + 1);
  puVar11 = puVar12;
  if (iVar13 == 0) goto LAB_1444b9196;
  goto LAB_1444b9083;
}



// FUNCTION 1444b9342 FUN_1444b9342 body=2445 status=ok
// SIG undefined FUN_1444b9342(void)

void FUN_1444b9342(longlong *param_1,longlong *param_2,char param_3)

{
  LPCRITICAL_SECTION p_Var1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined1 auStack_1b8 [39];
  char local_191;
  longlong *local_190;
  undefined8 *local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 *local_160;
  longlong *local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined1 local_128;
  code *local_118 [2];
  undefined ***local_108;
  undefined **local_f8;
  longlong *local_f0;
  longlong *local_e8;
  LARGE_INTEGER local_d8 [2];
  longlong *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar5 = *param_1;
  dVar8 = 0.0;
  local_191 = param_3;
  if (param_3 != '\0') {
    QueryPerformanceCounter(local_d8);
    dVar8 = (double)local_d8[0].QuadPart * DAT_14c83f420 + 16777216.0;
  }
  if ((longlong)(int)param_2[1] != 0) {
    plVar24 = (longlong *)*param_2;
    local_158 = plVar24 + (int)param_2[1];
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_160 = (undefined8 *)(lVar6 + 0x308);
    local_188 = (undefined8 *)(lVar6 + 0x310);
    local_168 = (longlong *)(lVar6 + 0x2b8);
    local_170 = 0xc80000527800b400;
    local_150 = param_1;
    do {
      if (*(int *)(lVar5 + 0x30) != *(int *)(lVar5 + 0x5c)) {
        lVar6 = *plVar24;
        lVar20 = *(longlong *)(lVar5 + 0x68);
        if (*(longlong *)(lVar5 + 0x68) == 0) {
          lVar20 = lVar5 + 0x60;
        }
        iVar17 = *(int *)(lVar20 + (ulonglong)
                                   (*(int *)(lVar5 + 0x70) - 1U &
                                   (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
        if (iVar17 != -1) {
          do {
            lVar20 = *(longlong *)(lVar5 + 0x28) + (longlong)iVar17 * 0x20;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar17 * 0x20) == lVar6)
            goto LAB_1444b94be;
            iVar17 = *(int *)(lVar20 + 0x18);
          } while (iVar17 != -1);
        }
      }
      lVar20 = 0;
LAB_1444b94be:
      plVar18 = *(longlong **)(lVar20 + 8);
      plVar7 = *(longlong **)(lVar20 + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_190 = plVar18;
      local_180 = plVar24;
      if ((longlong)(int)plVar18[9] != 0) {
        plVar15 = (longlong *)plVar18[8];
        plVar24 = plVar15 + (int)plVar18[9];
LAB_1444b94ee:
        lVar6 = *plVar15;
        if ((longlong)*(int *)(lVar5 + 0xa8) != 0) {
          lVar20 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0xa0) + lVar20) == lVar6) goto LAB_1444b9646;
            lVar20 = lVar20 + 8;
          } while ((longlong)*(int *)(lVar5 + 0xa8) * 8 != lVar20);
        }
        lVar20 = (longlong)(int)((longlong *)param_1[1])[1];
        if (lVar20 != 0) {
          lVar21 = 0;
          do {
            if (*(longlong *)(*(longlong *)param_1[1] + lVar21) == lVar6) goto LAB_1444b9646;
            lVar21 = lVar21 + 8;
          } while (lVar20 * 8 != lVar21);
        }
        if (*(int *)(lVar5 + 0x30) != *(int *)(lVar5 + 0x5c)) {
          lVar20 = *(longlong *)(lVar5 + 0x68);
          if (*(longlong *)(lVar5 + 0x68) == 0) {
            lVar20 = lVar5 + 0x60;
          }
          iVar17 = *(int *)(lVar20 + (ulonglong)
                                     (*(int *)(lVar5 + 0x70) - 1U &
                                     (int)lVar6 + (int)((ulonglong)lVar6 >> 0x20) * 0x17) * 4);
          if (iVar17 != -1) {
            lVar20 = *(longlong *)(lVar5 + 0x28);
            iVar19 = iVar17;
            do {
              if (*(longlong *)(lVar20 + (longlong)iVar19 * 0x20) == lVar6) goto LAB_1444b95ae;
              iVar19 = *(int *)((longlong)iVar19 * 0x20 + lVar20 + 0x18);
            } while (iVar19 != -1);
          }
        }
        goto LAB_1444b9646;
      }
LAB_1444b9653:
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      cVar10 = (**(code **)(*plVar18 + 8))(plVar18);
      puVar9 = local_160;
      plVar24 = local_180;
      if (cVar10 == '\0') {
        p_Var1 = (LPCRITICAL_SECTION)(plVar18 + 1);
        EnterCriticalSection(p_Var1);
        if (1 < (byte)((char)plVar18[7] - 1U)) {
          *(undefined1 *)(plVar18 + 7) = 1;
        }
        if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(p_Var1);
        }
        (**(code **)(*plVar18 + 0x10))(plVar18);
        EnterCriticalSection(p_Var1);
        lVar6 = plVar18[7];
        if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(p_Var1);
        }
        plVar18 = local_190;
        if ((char)lVar6 == '\x01') {
          EnterCriticalSection(p_Var1);
          if ((char)plVar18[7] != '\x02') {
            *(undefined1 *)(plVar18 + 7) = 2;
          }
          if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(p_Var1);
          }
        }
      }
      else {
        cVar10 = (**(code **)(*plVar18 + 8))(plVar18);
        if (cVar10 == '\x01') {
          p_Var1 = (LPCRITICAL_SECTION)(plVar18 + 1);
          EnterCriticalSection(p_Var1);
          if (1 < (byte)((char)plVar18[7] - 1U)) {
            *(undefined1 *)(plVar18 + 7) = 1;
          }
          if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(p_Var1);
          }
          local_108 = (undefined ***)0x0;
          local_f8 = &PTR_LAB_14bc2f030;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
          local_118[0] = FUN_1444bcc2e;
          local_c8 = (longlong *)0x0;
          local_b8 = &PTR_LAB_14bc2efe0;
          local_d8[0].QuadPart = (LONGLONG)FUN_1444bca66;
          local_f0 = plVar18;
          local_e8 = plVar7;
          uStack_b0 = plVar18;
          local_a8 = plVar7;
          FUN_1493005b2(&local_138,local_118);
          plVar18 = plStack_130;
          local_128 = 1;
          local_178 = local_138;
          if (plStack_130 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
            UNLOCK();
          }
          puVar12 = (uint *)*puVar9;
          if (puVar12 != (uint *)0x0) goto LAB_1444b989d;
          do {
            uVar14 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar14 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar14 | 1;
              __tlregdtor(&LAB_1444bcaed);
            }
            puVar11 = (undefined4 *)*local_188;
            *local_188 = 0;
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar11 = 0xffffffff;
            *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar9 = puVar11;
            FUN_140217a48(puVar9);
            puVar12 = (uint *)*puVar9;
LAB_1444b989d:
            uVar22 = *(longlong *)(puVar12 + 0x10) + 0xf;
            uVar14 = puVar12[0x12];
            while( true ) {
              puVar23 = (undefined8 *)(uVar22 & 0xfffffffffffffff0);
              if (puVar23 + 0x22 <= puVar12 + 0x4000) {
                *(undefined8 **)(puVar12 + 0x10) = puVar23 + 0x22;
                puVar12[0x12] = uVar14 + 1;
                FUN_1447247dc(puVar23,0);
                *puVar23 = &PTR_FUN_14bc2f018;
                ((LARGE_INTEGER *)(puVar23 + 0x16))->QuadPart = (LONGLONG)local_d8[0];
                puVar23[0x18] = local_c8;
                local_c8 = (longlong *)0x0;
                *(undefined4 *)(puVar23 + 0x1c) = (undefined4)local_a8;
                *(undefined4 *)((longlong)puVar23 + 0xe4) = local_a8._4_4_;
                *(undefined4 *)(puVar23 + 0x1d) = uStack_a0;
                *(undefined4 *)((longlong)puVar23 + 0xec) = uStack_9c;
                *(undefined4 *)(puVar23 + 0x1a) = (undefined4)local_b8;
                *(undefined4 *)((longlong)puVar23 + 0xd4) = local_b8._4_4_;
                *(undefined4 *)(puVar23 + 0x1b) = (undefined4)uStack_b0;
                *(undefined4 *)((longlong)puVar23 + 0xdc) = uStack_b0._4_4_;
                if ((code *)local_d8[0].QuadPart != (code *)0x0) {
                  local_d8[0].QuadPart = 0;
                }
                puVar23[0x1e] = local_138;
                puVar23[0x1f] = plStack_130;
                local_138 = 0;
                plStack_130 = (longlong *)0x0;
                *(undefined1 *)(puVar23 + 0x20) = local_128;
                *(undefined4 *)(puVar23 + 0x21) = 0xff;
                if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
                }
                puVar23[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar23[9] = puVar23;
                puVar23[10] = puVar23;
                if (*local_168 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = *(undefined8 *)(*local_168 + 0x30);
                }
                puVar23[0xf] = uVar13;
                puVar23[0x10] = local_170;
                *(undefined4 *)((longlong)puVar23 + 0x1c) = 0;
                if (puVar23 == (undefined8 *)0x0) {
                  local_148 = CONCAT71(local_148._1_7_,1);
                  FUN_1447439e4(0,&local_148);
                }
                else {
                  LOCK();
                  *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
                  UNLOCK();
                  local_148 = CONCAT71(local_148._1_7_,1);
                  FUN_1447439e4(puVar23,&local_148);
                  LOCK();
                  piVar3 = (int *)(puVar23 + 1);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)*puVar23)(puVar23,1);
                  }
                }
                plVar15 = plStack_130;
                local_148 = local_178;
                local_140 = plVar18;
                if (plStack_130 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = plStack_130 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
                    (**(code **)*plStack_130)(plStack_130);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar15 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
                plVar18 = local_190;
                if ((code *)local_d8[0].QuadPart != (code *)0x0) {
                  plVar15 = local_c8;
                  if (local_c8 == (longlong *)0x0) {
                    plVar15 = &local_b8;
                  }
                  (**(code **)(*plVar15 + 0x10))();
                }
                if (local_118[0] != (code *)0x0) {
                  pppuVar16 = local_108;
                  if (local_108 == (undefined ***)0x0) {
                    pppuVar16 = &local_f8;
                  }
                  (*(code *)(*pppuVar16)[2])();
                }
                FUN_149300746(plVar18 + 10);
                plVar18 = local_140;
                if (local_140 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = local_140 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*local_140)(local_140);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar18 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                    }
                  }
                }
                goto LAB_1444b9ba4;
              }
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar4 = *puVar12;
              *puVar12 = *puVar12 + uVar14 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar14) != 0xffffffff) break;
              puVar12 = (uint *)*puVar9;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *puVar9 = puVar12;
              uVar22 = (longlong)puVar12 + 0x67;
              uVar14 = 0;
            }
          } while( true );
        }
      }
LAB_1444b9ba4:
      if (local_191 == '\0') {
LAB_1444b9be2:
        iVar17 = 0;
      }
      else {
        QueryPerformanceCounter(local_d8);
        iVar17 = 2;
        if (((double)local_d8[0].QuadPart * DAT_14c83f420 + 16777216.0) - dVar8 <= 0.03333)
        goto LAB_1444b9be2;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar7 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
LAB_1444b9c06:
        LOCK();
        plVar18 = plVar7 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if ((iVar17 != 3) && (iVar17 != 0)) break;
LAB_1444b9c2c:
      plVar24 = plVar24 + 1;
    } while (plVar24 != local_158);
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar17 = *(int *)(lVar21 + 0x18), iVar17 != -1) {
LAB_1444b95ae:
    lVar21 = lVar20 + (longlong)iVar17 * 0x20;
    if (*(longlong *)(lVar20 + (longlong)iVar17 * 0x20) == lVar6) goto LAB_1444b95d1;
  }
  lVar21 = 0;
LAB_1444b95d1:
  lVar6 = *(longlong *)(lVar21 + 8);
  plVar18 = *(longlong **)(lVar21 + 0x10);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 8));
  cVar10 = *(char *)(lVar6 + 0x38);
  if ((LPCRITICAL_SECTION)(lVar6 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 8));
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar18 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar3 = (int *)((longlong)plVar18 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  plVar18 = local_190;
  param_1 = local_150;
  if (cVar10 != '\x02') {
    iVar17 = 3;
    plVar24 = local_180;
    if (plVar7 != (longlong *)0x0) goto LAB_1444b9c06;
    goto LAB_1444b9c2c;
  }
LAB_1444b9646:
  plVar15 = plVar15 + 1;
  if (plVar15 == plVar24) goto LAB_1444b9653;
  goto LAB_1444b94ee;
}



// FUNCTION 1444b9cd0 FUN_1444b9cd0 body=2208 status=ok
// SIG undefined FUN_1444b9cd0(void)

void FUN_1444b9cd0(undefined8 *param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  void *_Dst;
  bool bVar21;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined *local_f8;
  code *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 local_b4;
  byte local_b0;
  undefined8 local_a0;
  undefined2 *local_98;
  ulonglong uStack_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar15 = param_1[2];
  FUN_1492ed3d8(&local_70,lVar15);
  plVar2 = *(longlong **)(lVar15 + 0x70);
  do {
    if (plVar2 == (longlong *)0x0) {
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if ((*(byte *)((longlong)plVar2 + 0x39) & 0x20) == 0) {
      FUN_1400021e4(plVar2 + 4,&local_80);
      puVar9 = (undefined *)plVar2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        FUN_1446ddbd2();
        local_f0 = FUN_140b31576;
        local_f8 = &DAT_14c951a38;
        local_100 = 0;
        local_108 = (undefined8 *)0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if (DAT_14c951a98 == 0) {
        bVar21 = puVar9 != (undefined *)0x0;
        if (puVar9 != &DAT_14c951a90 && bVar21) {
          do {
            puVar9 = *(undefined **)(puVar9 + 0x30);
            bVar21 = puVar9 != (undefined *)0x0;
            if (puVar9 == &DAT_14c951a90) break;
          } while (puVar9 != (undefined *)0x0);
        }
        if (bVar21) goto LAB_1444b9d9f;
LAB_1444b9f7a:
        uVar6 = (ulonglong)*(uint *)(plVar2 + 6);
        if (0 < (int)*(uint *)(plVar2 + 6)) {
          uVar19 = 0;
          do {
            if ((int)uVar6 != 1) {
              FUN_1400021e4(plVar2 + 4,&local_98);
              puVar12 = &DAT_149dfb77a;
              if ((int)uStack_90 != 0) {
                puVar12 = local_98;
              }
              FUN_140002266(&local_c8,L"%s[%i]",puVar12,uVar19 & 0xffffffff);
              if (CONCAT44(uStack_7c,local_80) != 0) {
                FUN_1400020a8();
              }
              local_80 = (undefined4)local_c8;
              uStack_7c = local_c8._4_4_;
              iStack_78 = (int)uStack_c0;
              uStack_74 = uStack_c0._4_4_;
              local_c8 = (longlong *)0x0;
              uStack_c0 = (ulonglong *)0x0;
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            local_c8 = (longlong *)0x0;
            uStack_c0 = (ulonglong *)0x0;
            puVar12 = &DAT_149dfb77a;
            if (iStack_78 != 0) {
              puVar12 = (undefined2 *)CONCAT44(uStack_7c,local_80);
            }
            puVar13 = &DAT_149dfb77a;
            if (local_68 != 0) {
              puVar13 = local_70;
            }
            local_108 = &DAT_14c872aa8;
            cVar3 = FUN_1449da20c(DAT_14c872ce0,puVar13,puVar12);
            if (cVar3 != '\0') {
              plVar5 = local_c8;
              if ((int)uStack_c0 == 0) {
                plVar5 = (longlong *)&DAT_149dfb77a;
              }
              if (plVar5 != (longlong *)0x0) {
                local_f8 = DAT_14c872be8;
                local_100 = CONCAT44(local_100._4_4_,0x8000000);
                local_108 = param_1;
                (**(code **)(*plVar2 + 0xf8))
                          (plVar2,plVar5,
                           (longlong)param_1 +
                           (longlong)*(int *)((longlong)plVar2 + 0x34) * uVar19 +
                           (longlong)*(int *)((longlong)plVar2 + 0x44));
              }
            }
            if (local_c8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            uVar19 = uVar19 + 1;
            uVar6 = (ulonglong)(int)plVar2[6];
          } while ((longlong)uVar19 < (longlong)uVar6);
        }
      }
      else {
        if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a98) == 0) goto LAB_1444b9f7a;
LAB_1444b9d9f:
        puVar12 = &DAT_149dfb77a;
        if (local_68 != 0) {
          puVar12 = local_70;
        }
        plVar5 = (longlong *)FUN_140d6a126(DAT_14c872ce0,puVar12,0);
        if (plVar5 != (longlong *)0x0) {
          local_98 = (undefined2 *)0x0;
          uStack_90 = 0;
          puVar12 = &DAT_149dfb77a;
          if (iStack_78 != 0) {
            puVar12 = (undefined2 *)CONCAT44(uStack_7c,local_80);
          }
          FUN_1446f470e(&local_a0,puVar12,0);
          FUN_1405418ca(plVar5,local_a0,&local_98,0);
          puVar20 = (ulonglong *)((longlong)*(int *)((longlong)plVar2 + 0x44) + (longlong)param_1);
          bVar1 = *(byte *)(plVar2 + 0xe);
          local_b4 = (**(code **)(*(longlong *)plVar2[0xf] + 0x178))();
          uVar6 = uStack_90;
          local_c8 = (longlong *)plVar2[0xf];
          local_b8 = *(int *)((longlong)local_c8 + 0x34);
          iVar4 = (int)uStack_90;
          uVar19 = (ulonglong)(int)uStack_90;
          uStack_c0 = puVar20;
          local_b0 = bVar1;
          if ((longlong)uVar19 < 1) {
            local_e8 = plVar5 + 7;
            iVar4 = 0;
            lVar15 = 0;
            do {
              FUN_140002266(&local_d8,L"%s[%i]");
              puVar12 = &DAT_149dfb77a;
              if (local_d0 != 0) {
                puVar12 = local_d8;
              }
              FUN_1446f470e(&local_e0,puVar12);
              lVar17 = local_e0;
              if (local_e0 != 0) {
                if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
                  uVar18 = (uint)((ulonglong)local_e0 >> 0x10);
                  uVar11 = (uint)local_e0 & 0xffff;
                  plVar7 = (longlong *)plVar5[8];
                  if ((longlong *)plVar5[8] == (longlong *)0x0) {
                    plVar7 = local_e8;
                  }
                  iVar14 = *(int *)((longlong)plVar7 +
                                   (ulonglong)
                                   ((int)plVar5[9] - 1U &
                                   (int)((ulonglong)local_e0 >> 0x20) +
                                   ((uint)local_e0 << 0x10 | uVar11) +
                                   (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar11 >> 4)) * 4);
                  if (iVar14 != -1) {
                    do {
                      lVar8 = *plVar5 + (longlong)iVar14 * 0x40;
                      if (*(longlong *)(*plVar5 + (longlong)iVar14 * 0x40) == local_e0)
                      goto LAB_1444ba188;
                      iVar14 = *(int *)(lVar8 + 0x38);
                    } while (iVar14 != -1);
                  }
                }
                lVar8 = 0;
LAB_1444ba188:
                lVar15 = lVar8 + 8;
                if (lVar8 == 0) {
                  lVar15 = 0;
                }
                if (lVar15 != 0) {
                  FUN_140d50566(&local_c8,iVar4);
                  uVar6 = (ulonglong)(*(int *)(lVar15 + 0x20) - 2U < 0x7fffffff) * 0x10;
                  puVar12 = &DAT_149dfb77a;
                  if ((*(int *)(lVar15 + 0x10 + uVar6) == 0) ||
                     (puVar12 = *(undefined2 **)(lVar15 + (uVar6 | 8)), puVar12 != (undefined2 *)0x0
                     )) {
                    local_f8 = DAT_14c872be8;
                    local_100 = CONCAT44(local_100._4_4_,0x8000000);
                    local_108 = param_1;
                    (**(code **)(*(longlong *)plVar2[0xf] + 0xf8))((longlong *)plVar2[0xf],puVar12);
                  }
                }
                iVar4 = iVar4 + 1;
              }
              if (local_d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            } while ((lVar17 != 0) && ((lVar15 != 0 || (iVar4 < (int)uStack_c0[1]))));
          }
          else {
            iVar14 = (int)puVar20[1];
            iVar16 = local_b8;
            if ((iVar14 != 0) && ((0 < iVar14 && ((local_c8[7] & 0x1040000000U) == 0)))) {
              if ((bVar1 & 1) == 0) {
                uVar10 = *puVar20;
              }
              else {
                uVar10 = *puVar20;
                if ((uVar10 & 1) != 0) {
                  uVar10 = (longlong)puVar20 + ((longlong)uVar10 >> 0x18);
                }
              }
              do {
                if ((local_c8[7] & 0x1000000000U) == 0) {
                  (**(code **)(*local_c8 + 0x148))(local_c8,uVar10);
                  iVar16 = local_b8;
                }
                uVar10 = uVar10 + (longlong)iVar16;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
            *(undefined4 *)(uStack_c0 + 1) = 0;
            if ((local_b0 & 1) == 0) {
              if (*(int *)((longlong)uStack_c0 + 0xc) != iVar4) {
                FUN_14474d398(uStack_c0,uVar6 & 0xffffffff,iVar16,local_b4);
              }
            }
            else if (*(int *)((longlong)uStack_c0 + 0xc) != iVar4) {
              FUN_1468c0360(uStack_c0,uVar6 & 0xffffffff,iVar16,local_b4);
            }
            uVar6 = uStack_c0[1];
            iVar4 = (int)uVar6 + iVar4;
            *(int *)(uStack_c0 + 1) = iVar4;
            if ((local_b0 & 1) == 0) {
              if (*(int *)((longlong)uStack_c0 + 0xc) < iVar4) {
                FUN_14097bbd2();
              }
            }
            else if (*(int *)((longlong)uStack_c0 + 0xc) < iVar4) {
              FUN_1468c03c2();
            }
            if ((int)uStack_c0[1] == 0) {
              _Dst = (void *)0x0;
            }
            else {
              if ((local_b0 & 1) == 0) {
                uVar10 = *uStack_c0;
              }
              else {
                uVar10 = *uStack_c0;
                if ((uVar10 & 1) != 0) {
                  uVar10 = (longlong)uStack_c0 + ((longlong)uVar10 >> 0x18);
                }
              }
              _Dst = (void *)((longlong)local_b8 * (longlong)(int)uVar6 + uVar10);
            }
            if ((*(byte *)((longlong)local_c8 + 0x39) & 2) == 0) {
              do {
                if ((*(byte *)((longlong)local_c8 + 0x39) & 2) == 0) {
                  (**(code **)(*local_c8 + 0x160))();
                }
                else {
                  memset(_Dst,0,(longlong)(int)local_c8[6] *
                                (longlong)*(int *)((longlong)local_c8 + 0x34));
                }
                _Dst = (void *)((longlong)_Dst + (longlong)local_b8);
                uVar18 = (int)uVar19 - 1;
                uVar19 = (ulonglong)uVar18;
              } while (uVar18 != 0);
            }
            else {
              memset(_Dst,0,(longlong)local_b8 * uVar19);
            }
            if (0 < (longlong)(int)uStack_90) {
              lVar15 = (longlong)(int)uStack_90 * 0x30;
              puVar9 = DAT_14c872be8;
              do {
                lVar17 = (ulonglong)
                         (*(int *)((longlong)local_98 + lVar15 + -0x10) - 2U < 0x7fffffff) * 0x10;
                puVar12 = &DAT_149dfb77a;
                if ((*(int *)((longlong)local_98 + lVar15 + -0x20 + lVar17) == 0) ||
                   (puVar12 = *(undefined2 **)((longlong)local_98 + lVar15 + lVar17 + -0x28),
                   puVar12 != (undefined2 *)0x0)) {
                  local_100 = CONCAT44(local_100._4_4_,0x8000000);
                  local_108 = param_1;
                  local_f8 = puVar9;
                  (**(code **)(*(longlong *)plVar2[0xf] + 0xf8))((longlong *)plVar2[0xf],puVar12);
                  puVar9 = DAT_14c872be8;
                }
                lVar15 = lVar15 + -0x30;
              } while (lVar15 != 0);
            }
          }
          FUN_14170774d(local_98,uStack_90 & 0xffffffff);
          if (local_98 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FUN_1400020a8();
      }
    }
    plVar2 = (longlong *)plVar2[9];
  } while( true );
}



// FUNCTION 1444ba571 FUN_1444ba571 body=55 status=ok
// SIG undefined FUN_1444ba571(void)

void FUN_1444ba571(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0bde8 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0bde8 = FUN_14171c317(FUN_14671cd38,uVar1,L"EInterchangeTranslatorType");
  }
  return;
}



// FUNCTION 1444ba5a8 FUN_1444ba5a8 body=55 status=ok
// SIG undefined FUN_1444ba5a8(void)

void FUN_1444ba5a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0be00 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0be00 = FUN_14171c317(FUN_14671cd67,uVar1,L"EInterchangeTranslatorAssetType");
  }
  return;
}



// FUNCTION 1444ba5df FUN_1444ba5df body=55 status=ok
// SIG undefined FUN_1444ba5df(void)

void FUN_1444ba5df(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0be30 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0be30 = FUN_14171c317(FUN_14671cdf8,uVar1,L"EInterchangeNodeContainerType");
  }
  return;
}



// FUNCTION 1444ba616 FUN_1444ba616 body=55 status=ok
// SIG undefined FUN_1444ba616(void)

void FUN_1444ba616(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0be48 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0be48 = FUN_14171c317(FUN_14671ce27,uVar1,L"EInterchangeNodeUserInterfaceContext");
  }
  return;
}



// FUNCTION 1444ba64e FUN_1444ba64e body=637 status=ok
// SIG undefined FUN_1444ba64e(void)

void FUN_1444ba64e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_79;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f07ac();
  uVar3 = FUN_1492f0926(uVar1,&DAT_14cc0bf70,param_2,1);
  if ((uVar3 & 1) == 0) {
    FUN_1492f07ac();
    pvVar2 = DAT_14cc0bf70;
    local_48 = (void *)0x0;
    lVar4 = (longlong)DAT_14cc0bf78;
    local_40 = DAT_14cc0bf78;
    if (lVar4 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,DAT_14cc0bf78,0);
      memcpy(local_48,pvVar2,lVar4 * 2);
    }
    FUN_140056680(local_58,L"RegisterAttribute");
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f082a();
  uVar3 = FUN_1492f0926(uVar1,&DAT_14cc0bf88,param_3,1);
  if ((uVar3 & 1) == 0) {
    FUN_1492f082a();
    pvVar2 = DAT_14cc0bf88;
    local_68 = (void *)0x0;
    lVar4 = (longlong)DAT_14cc0bf90;
    local_60 = DAT_14cc0bf90;
    if (lVar4 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,DAT_14cc0bf90,0);
      memcpy(local_68,pvVar2,lVar4 * 2);
    }
    FUN_140056680(local_78,L"RegisterAttribute");
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_79 = param_4;
  FUN_141083722();
  uVar3 = FUN_140c54a24(uVar1,&DAT_14cc0c018,&local_79,0);
  if ((uVar3 & 1) == 0) {
    FUN_141083722();
    pvVar2 = DAT_14cc0c018;
    local_90 = (void *)0x0;
    lVar4 = (longlong)DAT_14cc0c020;
    local_88 = DAT_14cc0c020;
    if (lVar4 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,DAT_14cc0c020,0);
      memcpy(local_90,pvVar2,lVar4 * 2);
    }
    FUN_140056680(local_a0,L"RegisterAttribute");
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444ba954 FUN_1444ba954 body=46 status=ok
// SIG undefined FUN_1444ba954(void)

void FUN_1444ba954(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444ba982 FUN_1444ba982 body=250 status=ok
// SIG undefined FUN_1444ba982(void)

undefined8 *
FUN_1444ba982(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1413f0866(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444bd3c6(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444baa80 FUN_1444baa80 body=250 status=ok
// SIG undefined FUN_1444baa80(void)

undefined8 *
FUN_1444baa80(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14930288c(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444bd5f8(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bab7e FUN_1444bab7e body=250 status=ok
// SIG undefined FUN_1444bab7e(void)

undefined8 *
FUN_1444bab7e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149302ba2(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444bd82a(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bac7c FUN_1444bac7c body=250 status=ok
// SIG undefined FUN_1444bac7c(void)

undefined8 *
FUN_1444bac7c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1492f0926(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444be0f2(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bad7a FUN_1444bad7a body=247 status=ok
// SIG undefined FUN_1444bad7a(void)

undefined8 *
FUN_1444bad7a(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149302ebc(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bda5c(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bae74 FUN_1444bae74 body=250 status=ok
// SIG undefined FUN_1444bae74(void)

undefined8 *
FUN_1444bae74(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1493031d6(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444bdc8e(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444baf72 FUN_1444baf72 body=247 status=ok
// SIG undefined FUN_1444baf72(void)

undefined8 *
FUN_1444baf72(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1493034f0(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bdec0(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bb06c FUN_1444bb06c body=1016 status=ok
// SIG undefined FUN_1444bb06c(void)

uint FUN_1444bb06c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  uint local_94;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 uStack_74;
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_1444bb0ff:
    uVar8 = 0;
    goto LAB_1444bb102;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_1444bb0ff;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar12 = iVar7 == iVar5;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar12);
  lVar10 = *param_1;
  if (lVar10 == 0) {
LAB_1444bb3a7:
    uVar8 = 0;
  }
  else {
    local_80 = (void *)0x0;
    local_78 = (int)param_1[3];
    lVar11 = (longlong)local_78;
    pvVar4 = (void *)param_1[2];
    if (lVar11 == 0) {
      uStack_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar11 * 2);
    }
    cVar6 = FUN_140c44378(lVar10,&local_80);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (cVar6 == '\0') {
      local_90 = (void *)((ulonglong)local_90._4_4_ << 0x20);
      local_80 = (void *)0x0;
      local_78 = (int)param_1[3];
      lVar11 = (longlong)local_78;
      pvVar4 = (void *)param_1[2];
      if (lVar11 == 0) {
        uStack_74 = 0;
      }
      else {
        FUN_1446dd670(&local_80,local_78,0);
        memcpy(local_80,pvVar4,lVar11 * 2);
      }
      uVar9 = FUN_1413f0866(lVar10,&local_80,&local_90,0);
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((uVar9 & 1) == 0) {
        local_58 = (void *)0x0;
        local_50 = (int)param_1[3];
        lVar10 = (longlong)local_50;
        pvVar4 = (void *)param_1[2];
        if (lVar10 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar4,lVar10 * 2);
        }
        FUN_140056680(local_68,L"TArrayAttributeHelper.AddName");
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1444bb3a7;
      }
    }
    local_90 = (void *)0x0;
    local_88 = (int)param_1[3];
    lVar11 = (longlong)local_88;
    pvVar4 = (void *)param_1[2];
    if (lVar11 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_88,0);
      memcpy(local_90,pvVar4,lVar11 * 2);
    }
    FUN_1444bd3c6(&local_80,&local_90,lVar10);
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 == (void *)0x0) {
LAB_1444bb355:
      uVar8 = 0;
    }
    else {
      cVar6 = FUN_140c44378(local_80,&local_78);
      if (cVar6 == '\0') goto LAB_1444bb355;
      iVar7 = FUN_1419073b0(local_80,&local_78);
      uVar8 = 0;
      if (iVar7 == 0xc) {
        local_94 = 0;
        if (local_80 != (void *)0x0) {
          FUN_1493027c6(local_80,&local_78,&local_94);
        }
        FUN_1493038d0(param_1,&local_90,local_94);
        uVar8 = FUN_1492f0926(lVar10,&local_90,param_2,0);
        pvVar4 = local_90;
        if ((uVar8 & 1) == 0) {
          local_a8 = (void *)0x0;
          lVar10 = (longlong)local_88;
          local_a0 = local_88;
          if (lVar10 == 0) {
            local_9c = 0;
          }
          else {
            FUN_1446dd670(&local_a8,local_88,0);
            memcpy(local_a8,pvVar4,lVar10 * 2);
          }
          FUN_140056680(local_b8,L"TArrayAttributeHelper.AddName");
          if (local_b8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          local_94 = local_94 + 1;
          if (local_80 != (void *)0x0) {
            FUN_149303af2(local_80,&local_78,&local_94);
          }
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
  }
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
LAB_1444bb102:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 1444bb466 FUN_1444bb466 body=1416 status=ok
// SIG undefined FUN_1444bb466(void)

undefined8 FUN_1444bb466(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  ushort uVar11;
  undefined8 uVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_138 [36];
  int local_114;
  void *local_110;
  longlong local_108 [2];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8 [2];
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 uStack_c4;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  void *local_90;
  int local_88;
  void *local_80;
  int local_78;
  undefined4 uStack_74;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_1444bb515:
    uVar12 = 0;
    goto LAB_1444bb517;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_1444bb515;
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar16 = iVar7 == iVar8;
    if (bVar16) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    UNLOCK();
  } while (!bVar16);
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_1444bb5cc:
    uVar12 = 0;
  }
  else {
    local_64 = 0;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[3];
    lVar15 = (longlong)local_78;
    pvVar10 = (void *)param_1[2];
    if (lVar15 == 0) {
      uStack_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar10,lVar15 * 2);
    }
    uVar6 = FUN_140c44378(lVar4,&local_80);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar6 == '\0') goto LAB_1444bb5cc;
    local_a8 = (void *)0x0;
    local_a0 = (int)param_1[3];
    lVar15 = (longlong)local_a0;
    pvVar10 = (void *)param_1[2];
    if (lVar15 == 0) {
      uStack_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,local_a0,0);
      memcpy(local_a8,pvVar10,lVar15 * 2);
    }
    FUN_1444bd3c6(&local_80,&local_a8,lVar4);
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 == (void *)0x0) {
LAB_1444bb99c:
      uVar12 = 0;
    }
    else {
      cVar5 = FUN_140c44378(local_80,&local_78);
      if ((cVar5 == '\0') || (iVar7 = FUN_1419073b0(local_80,&local_78), iVar7 != 0xc))
      goto LAB_1444bb99c;
      if (local_80 != (void *)0x0) {
        FUN_1493027c6(local_80,&local_78,&local_64);
      }
      uVar12 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
      if (0 < local_64) {
        iVar7 = 0;
        local_114 = 0;
        do {
          FUN_1493038d0(param_1,&local_90,iVar7);
          FUN_1444be0f2(&local_a8,&local_90,lVar4);
          if (((local_a8 != (void *)0x0) &&
              (cVar5 = FUN_140c44378(local_a8,&local_a0), cVar5 != '\0')) &&
             (iVar8 = FUN_1419073b0(local_a8,&local_a0), iVar8 == 0x12)) {
            local_b8 = 0;
            uStack_b0 = 0;
            if (local_a8 == (void *)0x0) {
              iVar8 = (int)param_2[1];
              uStack_b0._0_4_ = 0;
              if (iVar8 == 0) goto LAB_1444bb7ec;
LAB_1444bb6ff:
              if (iVar8 + (int)uStack_b0 == 1) goto LAB_1444bb7ec;
LAB_1444bb70a:
              if (0 < local_114) {
                FUN_1493038d0(param_1,&local_c8,iVar7 - local_114);
                uVar9 = FUN_1492f0b5e(lVar4,&local_90);
                if ((uVar9 & 1) == 0) {
                  local_f8 = (void *)0x0;
                  lVar15 = (longlong)local_88;
                  local_110 = local_90;
                  local_f0 = local_88;
                  if (lVar15 == 0) {
                    local_ec = 0;
                  }
                  else {
                    FUN_1446dd670(&local_f8,local_88,0);
                    memcpy(local_f8,local_110,lVar15 * 2);
                  }
                  FUN_140056680(local_108,L"TArrayAttributeHelper.RemoveItem");
                  pvVar10 = local_f8;
                  if (local_108[0] != 0) {
                    FUN_1400020a8();
                    pvVar10 = local_f8;
                  }
LAB_1444bb8cc:
                  if (pvVar10 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  uVar9 = FUN_1492f0926(lVar4,&local_c8,&local_b8,0);
                  if ((uVar9 & 1) == 0) {
                    local_d8 = (void *)0x0;
                    lVar15 = (longlong)local_c0;
                    local_110 = (void *)CONCAT44(uStack_c4,local_c8);
                    local_d0 = local_c0;
                    if (lVar15 == 0) {
                      local_cc = 0;
                    }
                    else {
                      FUN_1446dd670(&local_d8,local_c0,0);
                      memcpy(local_d8,local_110,lVar15 * 2);
                    }
                    FUN_140056680(local_e8,L"TArrayAttributeHelper.RemoveItem");
                    pvVar10 = local_d8;
                    if (local_e8[0] != 0) {
                      FUN_1400020a8();
                      pvVar10 = local_d8;
                    }
                    goto LAB_1444bb8cc;
                  }
                }
                if (CONCAT44(uStack_c4,local_c8) != 0) {
                  FUN_1400020a8();
                }
              }
            }
            else {
              FUN_1492ff8ec(local_a8,&local_a0);
              iVar8 = (int)param_2[1];
              if ((int)uStack_b0 != iVar8) goto LAB_1444bb6ff;
              if (1 < (int)uStack_b0) {
                lVar15 = 0;
                while( true ) {
                  uVar11 = *(ushort *)(local_b8 + lVar15);
                  uVar9 = (ulonglong)uVar11;
                  uVar13 = *(ushort *)(*param_2 + lVar15);
                  if (uVar11 != uVar13) break;
                  if (uVar11 == 0) goto LAB_1444bb7ec;
LAB_1444bb7b6:
                  lVar15 = lVar15 + 2;
                }
                if ((uVar13 | uVar11) < 0x80) {
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  uVar14 = (ulonglong)uVar13;
                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                  if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar14]) goto LAB_1444bb7b6;
                }
                if (uVar11 != uVar13) goto LAB_1444bb70a;
              }
LAB_1444bb7ec:
              FUN_1492f0b5e(lVar4,&local_90);
              local_c8 = local_64 + -1;
              if (local_80 != (void *)0x0) {
                FUN_149303af2(local_80,&local_78,&local_c8);
              }
              local_114 = local_114 + 1;
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
          }
          if (CONCAT44(uStack_9c,local_a0) != 0) {
            FUN_1400020a8();
          }
          if (local_90 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_64);
      }
    }
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
  }
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
LAB_1444bb517:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1444bb9ef FUN_1444bb9ef body=55 status=ok
// SIG undefined FUN_1444bb9ef(void)

void FUN_1444bb9ef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0c0d8 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0c0d8 = FUN_14171c317(FUN_14671d81e,uVar1,L"EReimportStrategyFlags");
  }
  return;
}



// FUNCTION 1444bba6a FUN_1444bba6a body=387 status=ok
// SIG undefined FUN_1444bba6a(void)

ulonglong FUN_1444bba6a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_1444bbbb2;
  }
  FUN_1444be0f2(&local_48,param_2,param_1);
  if (local_48 == 0) {
LAB_1444bbba1:
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_48,local_40), iVar3 != 0x12))
    goto LAB_1444bbba1;
    if (local_48 == 0) {
LAB_1444bbaf5:
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_2 + 1);
      lVar5 = (longlong)local_50;
      pvVar1 = (void *)*param_2;
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar1,lVar5 * 2);
      }
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_3 + 1);
      lVar5 = (longlong)local_60;
      pvVar1 = (void *)*param_3;
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar1,lVar5 * 2);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1444bbba1;
    }
    uVar4 = FUN_1492ff8ec(local_48,local_40,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if ((uVar4 & 1) == 0) goto LAB_1444bbaf5;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1444bbbb2:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1444bbbee FUN_1444bbbee body=266 status=ok
// SIG undefined FUN_1444bbbee(void)

ulonglong FUN_1444bbbee(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1492f0926(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bbcf9 FUN_1444bbcf9 body=387 status=ok
// SIG undefined FUN_1444bbcf9(void)

ulonglong FUN_1444bbcf9(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_1444bbe41;
  }
  FUN_1444be868(&local_48,param_2,param_1);
  if (local_48 == 0) {
LAB_1444bbe30:
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_48,local_40), iVar3 != 0x22))
    goto LAB_1444bbe30;
    if (local_48 == 0) {
LAB_1444bbd84:
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_2 + 1);
      lVar5 = (longlong)local_50;
      pvVar1 = (void *)*param_2;
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar1,lVar5 * 2);
      }
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_3 + 1);
      lVar5 = (longlong)local_60;
      pvVar1 = (void *)*param_3;
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar1,lVar5 * 2);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1444bbe30;
    }
    uVar4 = FUN_1492ffae6(local_48,local_40,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if ((uVar4 & 1) == 0) goto LAB_1444bbd84;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1444bbe41:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1444bbe7d FUN_1444bbe7d body=266 status=ok
// SIG undefined FUN_1444bbe7d(void)

ulonglong FUN_1444bbe7d(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_149304a96(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bbfbb FUN_1444bbfbb body=387 status=ok
// SIG undefined FUN_1444bbfbb(void)

ulonglong FUN_1444bbfbb(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_1444bc103;
  }
  FUN_1444bd3c6(&local_48,param_2,param_1);
  if (local_48 == 0) {
LAB_1444bc0f2:
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_48,local_40), iVar3 != 0xc))
    goto LAB_1444bc0f2;
    if (local_48 == 0) {
LAB_1444bc046:
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_2 + 1);
      lVar5 = (longlong)local_50;
      pvVar1 = (void *)*param_2;
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar1,lVar5 * 2);
      }
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_3 + 1);
      lVar5 = (longlong)local_60;
      pvVar1 = (void *)*param_3;
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar1,lVar5 * 2);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1444bc0f2;
    }
    uVar4 = FUN_1493027c6(local_48,local_40,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if ((uVar4 & 1) == 0) goto LAB_1444bc046;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1444bc103:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1444bc13f FUN_1444bc13f body=266 status=ok
// SIG undefined FUN_1444bc13f(void)

ulonglong FUN_1444bc13f(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1413f0866(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bc24a FUN_1444bc24a body=387 status=ok
// SIG undefined FUN_1444bc24a(void)

ulonglong FUN_1444bc24a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_1444bc392;
  }
  FUN_1444bd82a(&local_48,param_2,param_1);
  if (local_48 == 0) {
LAB_1444bc381:
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_48,local_40), iVar3 != 6))
    goto LAB_1444bc381;
    if (local_48 == 0) {
LAB_1444bc2d5:
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_2 + 1);
      lVar5 = (longlong)local_50;
      pvVar1 = (void *)*param_2;
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar1,lVar5 * 2);
      }
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_3 + 1);
      lVar5 = (longlong)local_60;
      pvVar1 = (void *)*param_3;
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar1,lVar5 * 2);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1444bc381;
    }
    uVar4 = FUN_149302df4(local_48,local_40,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if ((uVar4 & 1) == 0) goto LAB_1444bc2d5;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1444bc392:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1444bc3ce FUN_1444bc3ce body=266 status=ok
// SIG undefined FUN_1444bc3ce(void)

ulonglong FUN_1444bc3ce(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_149302ba2(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bc4d9 FUN_1444bc4d9 body=387 status=ok
// SIG undefined FUN_1444bc4d9(void)

ulonglong FUN_1444bc4d9(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_1444bc621;
  }
  FUN_1444be324(&local_48,param_2,param_1);
  if (local_48 == 0) {
LAB_1444bc610:
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_48,local_40), iVar3 != 1))
    goto LAB_1444bc610;
    if (local_48 == 0) {
LAB_1444bc564:
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_2 + 1);
      lVar5 = (longlong)local_50;
      pvVar1 = (void *)*param_2;
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar1,lVar5 * 2);
      }
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_3 + 1);
      lVar5 = (longlong)local_60;
      pvVar1 = (void *)*param_3;
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar1,lVar5 * 2);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1444bc610;
    }
    uVar4 = FUN_149302700(local_48,local_40,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if ((uVar4 & 1) == 0) goto LAB_1444bc564;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1444bc621:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1444bc65d FUN_1444bc65d body=266 status=ok
// SIG undefined FUN_1444bc65d(void)

ulonglong FUN_1444bc65d(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14112c19a(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bc768 FUN_1444bc768 body=387 status=ok
// SIG undefined FUN_1444bc768(void)

ulonglong FUN_1444bc768(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_1444bc8b0;
  }
  FUN_1444bed62(&local_48,param_2,param_1);
  if (local_48 == 0) {
LAB_1444bc89f:
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_48,local_40), iVar3 != 0x2c))
    goto LAB_1444bc89f;
    if (local_48 == 0) {
LAB_1444bc7f3:
      local_58 = (void *)0x0;
      local_50 = *(int *)(param_2 + 1);
      lVar5 = (longlong)local_50;
      pvVar1 = (void *)*param_2;
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar1,lVar5 * 2);
      }
      local_68 = (void *)0x0;
      local_60 = *(int *)(param_3 + 1);
      lVar5 = (longlong)local_60;
      pvVar1 = (void *)*param_3;
      if (lVar5 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar1,lVar5 * 2);
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1444bc89f;
    }
    uVar4 = FUN_1493066f2(local_48,local_40,param_4);
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if ((uVar4 & 1) == 0) goto LAB_1444bc7f3;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1444bc8b0:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1444bc8ec FUN_1444bc8ec body=266 status=ok
// SIG undefined FUN_1444bc8ec(void)

ulonglong FUN_1444bc8ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1493067c2(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bca66 FUN_1444bca66 body=30 status=ok
// SIG undefined FUN_1444bca66(void)

undefined8 FUN_1444bca66(longlong *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x10))();
  return *(undefined8 *)(*param_1 + 0x30);
}



// FUNCTION 1444bca8e FUN_1444bca8e body=12 status=ok
// SIG undefined FUN_1444bca8e(void)

void FUN_1444bca8e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001444bca97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1444bca9a FUN_1444bca9a body=83 status=ok
// SIG undefined FUN_1444bca9a(void)

undefined8 * FUN_1444bca9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bc2efe0;
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



// FUNCTION 1444bcb14 FUN_1444bcb14 body=282 status=ok
// SIG undefined FUN_1444bcb14(void)

undefined8 * FUN_1444bcb14(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1444bcaed);
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



// FUNCTION 1444bcc2e FUN_1444bcc2e body=103 status=ok
// SIG undefined FUN_1444bcc2e(void)

void FUN_1444bcc2e(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
  cVar1 = *(char *)(lVar2 + 0x38);
  if ((LPCRITICAL_SECTION)(lVar2 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
  }
  if (cVar1 == '\x01') {
    lVar2 = *param_1;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 8);
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(lVar2 + 0x38) != '\x02') {
      *(undefined1 *)(lVar2 + 0x38) = 2;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001444bcc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}



// FUNCTION 1444bcca0 FUN_1444bcca0 body=12 status=ok
// SIG undefined FUN_1444bcca0(void)

void FUN_1444bcca0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001444bcca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1444bccac FUN_1444bccac body=83 status=ok
// SIG undefined FUN_1444bccac(void)

undefined8 * FUN_1444bccac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bc2f030;
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



// FUNCTION 1444bcd0e FUN_1444bcd0e body=23 status=ok
// SIG undefined FUN_1444bcd0e(void)

undefined1 FUN_1444bcd0e(void)

{
  FUN_1444b89b0(DAT_14cc0bda0);
  return 1;
}



// FUNCTION 1444bcd26 FUN_1444bcd26 body=29 status=ok
// SIG undefined FUN_1444bcd26(void)

undefined8 FUN_1444bcd26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444bcd58 FUN_1444bcd58 body=85 status=ok
// SIG undefined FUN_1444bcd58(void)

void FUN_1444bcd58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc2f6b0;
  return;
}



// FUNCTION 1444bcdae FUN_1444bcdae body=85 status=ok
// SIG undefined FUN_1444bcdae(void)

void FUN_1444bcdae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc2f6b0;
  return;
}



// FUNCTION 1444bce04 FUN_1444bce04 body=118 status=ok
// SIG undefined FUN_1444bce04(void)

void FUN_1444bce04(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc2f6b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001444bce6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1444bce80 FUN_1444bce80 body=16 status=ok
// SIG undefined FUN_1444bce80(void)

undefined1 FUN_1444bce80(void)

{
  FUN_1444bce90();
  return 1;
}



// FUNCTION 1444bce90 FUN_1444bce90 body=698 status=ok
// SIG undefined FUN_1444bce90(void)

void FUN_1444bce90(void)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  lVar9 = DAT_14cc0bda0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc0bda0 != 0) {
    puVar1 = (uint *)(DAT_14cc0bda0 + 0x38);
    iVar5 = *(int *)(DAT_14cc0bda0 + 0x50);
    if (iVar5 == 0) {
      uVar19 = 1;
      uVar21 = 0;
      iVar16 = 0;
      iVar11 = 0;
    }
    else {
      puVar12 = *(uint **)(DAT_14cc0bda0 + 0x48);
      if (*(uint **)(DAT_14cc0bda0 + 0x48) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar20 = *puVar12;
      if (uVar20 == 0) {
        iVar11 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar11 = iVar5 + -1;
        }
        uVar21 = 0;
        uVar19 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar19 = uVar21;
        }
        iVar16 = 0;
        do {
          if (uVar19 == uVar21) goto LAB_1444bd066;
          iVar16 = iVar16 + 0x20;
          uVar20 = puVar12[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar20 == 0);
      }
      else {
        uVar21 = 0;
        iVar16 = 0;
      }
      uVar19 = (ulonglong)(-uVar20 & uVar20);
      uVar4 = uVar19 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar11 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar11) {
        iVar11 = iVar5;
      }
    }
    if (iVar11 != iVar5) {
      uVar20 = 0xffffffff;
      do {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar9 + 0x28) + (longlong)iVar11 * 0x20);
        plVar8 = *(longlong **)(*(longlong *)(lVar9 + 0x28) + 0x10 + (longlong)iVar11 * 0x20);
        if (plVar8 == (longlong *)0x0) {
          FUN_1492ecf42(DAT_14cc0bda0,uVar7);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          FUN_1492ecf42(DAT_14cc0bda0,uVar7);
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        uVar20 = uVar20 & ~(uint)uVar19;
        puVar12 = *(uint **)(lVar9 + 0x48);
        if (*(uint **)(lVar9 + 0x48) == (uint *)0x0) {
          puVar12 = puVar1;
        }
        iVar6 = *(int *)(lVar9 + 0x50);
        iVar11 = (int)uVar21;
        lVar17 = (longlong)iVar11;
        uVar15 = puVar12[lVar17] & uVar20;
        if (uVar15 == 0) {
          iVar13 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar13 = iVar6 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar11) {
            iVar14 = iVar11;
          }
          if (iVar11 < iVar13) {
            lVar18 = 0;
            do {
              uVar15 = puVar12[lVar17 + lVar18 + 1];
              if (uVar15 != 0) {
                uVar21 = (ulonglong)(iVar11 + (int)lVar18 + 1);
                uVar20 = 0xffffffff;
                goto LAB_1444bd023;
              }
              iVar16 = iVar16 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar14 - lVar17 != lVar18);
            uVar20 = 0xffffffff;
            lVar17 = (longlong)iVar14;
          }
          uVar21 = lVar17 + 1U & 0xffffffff;
          iVar11 = iVar6;
        }
        else {
LAB_1444bd023:
          uVar19 = (ulonglong)(-uVar15 & uVar15);
          uVar4 = uVar19 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar11 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar11) {
            iVar11 = iVar6;
          }
        }
      } while (iVar11 != iVar5);
    }
LAB_1444bd066:
    if (((*(longlong *)(DAT_14cc0bda0 + 0x18) != 0) && (*(longlong *)(DAT_14cc0bda0 + 0x20) != 0))
       && (0 < *(int *)(*(longlong *)(DAT_14cc0bda0 + 0x20) + 8))) {
      FUN_1401cb356();
      local_58 = *(undefined8 *)(DAT_14cc0bda0 + 0x18);
      local_50 = *(longlong *)(DAT_14cc0bda0 + 0x20);
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_58);
      lVar9 = DAT_14cc0bda0;
      *(undefined8 *)(DAT_14cc0bda0 + 0x18) = 0;
      plVar8 = *(longlong **)(lVar9 + 0x20);
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    puVar10 = DAT_14cc0bda8;
    DAT_14cc0bda0 = 0;
    if (DAT_14cc0bda8 != (undefined8 *)0x0) {
      DAT_14cc0bda8 = (undefined8 *)0x0;
      LOCK();
      piVar3 = (int *)(puVar10 + 1);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)*puVar10)(puVar10);
        LOCK();
        piVar3 = (int *)((longlong)puVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444bd166 FUN_1444bd166 body=608 status=ok
// SIG undefined FUN_1444bd166(void)

undefined4 FUN_1444bd166(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  bool bVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  
  plVar3 = (longlong *)*param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(plVar3 + 0xf);
  EnterCriticalSection(lpCriticalSection);
  lVar10 = (longlong)(int)((longlong *)param_1[1])[1];
  uVar14 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (lVar10 != 0) {
    plVar17 = *(longlong **)param_1[1];
    plVar5 = plVar17 + lVar10;
LAB_1444bd1a8:
    if ((int)plVar3[6] != *(int *)((longlong)plVar3 + 0x5c)) {
      lVar10 = *plVar17;
      plVar11 = (longlong *)plVar3[0xd];
      if ((longlong *)plVar3[0xd] == (longlong *)0x0) {
        plVar11 = plVar3 + 0xc;
      }
      iVar8 = *(int *)((longlong)plVar11 +
                      (ulonglong)
                      ((int)plVar3[0xe] - 1U & (int)lVar10 + (int)((ulonglong)lVar10 >> 0x20) * 0x17
                      ) * 4);
      if (iVar8 != -1) {
        lVar4 = plVar3[5];
        iVar16 = iVar8;
        do {
          if (*(longlong *)(lVar4 + (longlong)iVar16 * 0x20) == lVar10) goto LAB_1444bd20f;
          iVar16 = *(int *)((longlong)iVar16 * 0x20 + lVar4 + 0x18);
        } while (iVar16 != -1);
      }
    }
    goto LAB_1444bd287;
  }
LAB_1444bd297:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((char)uVar14 == '\0') {
    FUN_1444b89b0(plVar3);
    iVar8 = *(int *)((longlong)plVar3 + 0x14);
    *(int *)((longlong)plVar3 + 0x14) = iVar8 + 1;
    uVar9 = (ulonglong)(int)plVar3[1];
    if ((longlong)uVar9 < 1) {
      *(int *)((longlong)plVar3 + 0x14) = iVar8;
    }
    else {
      bVar15 = false;
      do {
        lVar10 = uVar9 * 0x10 + -8;
        uVar18 = uVar9;
        while (((*(int *)(*plVar3 + lVar10) != 0 &&
                (plVar5 = *(longlong **)(*plVar3 + -8 + lVar10), plVar5 != (longlong *)0x0)) &&
               (cVar7 = (**(code **)(*plVar5 + 0x60))(), cVar7 != '\0'))) {
          lVar10 = lVar10 + -0x10;
          bVar6 = uVar18 < 2;
          uVar18 = uVar18 - 1;
          if (bVar6) {
            iVar8 = *(int *)((longlong)plVar3 + 0x14) + -1;
            *(int *)((longlong)plVar3 + 0x14) = iVar8;
            if (!bVar15) {
              return uVar14;
            }
            goto LAB_1444bd321;
          }
        }
        uVar9 = uVar18 - 1;
        bVar15 = true;
      } while (1 < uVar18);
      iVar8 = *(int *)((longlong)plVar3 + 0x14) + -1;
      *(int *)((longlong)plVar3 + 0x14) = iVar8;
LAB_1444bd321:
      if (iVar8 < 1) {
        iVar8 = (int)plVar3[1];
        iVar16 = iVar8;
        if (0 < iVar8) {
          iVar13 = 0;
          do {
            if (((*(int *)(*plVar3 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                (plVar5 = *(longlong **)(*plVar3 + (longlong)iVar13 * 0x10),
                plVar5 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar5 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(plVar3,iVar13);
              FUN_14005b248(plVar3);
            }
            else {
              iVar13 = iVar13 + 1;
            }
            iVar16 = (int)plVar3[1];
          } while (iVar13 < iVar16);
        }
        iVar13 = 2;
        if (2 < iVar16 * 2) {
          iVar13 = iVar16 * 2;
        }
        *(int *)(plVar3 + 2) = iVar13;
        if ((iVar13 < iVar8) && (*(int *)((longlong)plVar3 + 0xc) != iVar16)) {
          FUN_14045812c(plVar3);
        }
      }
    }
  }
  return uVar14;
  while (iVar8 = *(int *)(lVar12 + 0x18), iVar8 != -1) {
LAB_1444bd20f:
    lVar12 = lVar4 + (longlong)iVar8 * 0x20;
    if (*(longlong *)(lVar4 + (longlong)iVar8 * 0x20) == lVar10) goto LAB_1444bd22a;
  }
  lVar12 = 0;
LAB_1444bd22a:
  lVar10 = *(longlong *)(lVar12 + 8);
  plVar11 = *(longlong **)(lVar12 + 0x10);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 8));
  cVar7 = *(char *)(lVar10 + 0x38);
  if ((LPCRITICAL_SECTION)(lVar10 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 8));
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
  if (cVar7 != '\x02') {
    uVar14 = 0;
    goto LAB_1444bd297;
  }
LAB_1444bd287:
  plVar17 = plVar17 + 1;
  if (plVar17 == plVar5) goto code_r0x0001444bd294;
  goto LAB_1444bd1a8;
code_r0x0001444bd294:
  uVar14 = (undefined4)CONCAT71((int7)((ulonglong)(plVar3 + 0xc) >> 8),1);
  goto LAB_1444bd297;
}



// FUNCTION 1444bd3c6 FUN_1444bd3c6 body=560 status=ok
// SIG undefined FUN_1444bd3c6(void)

longlong * FUN_1444bd3c6(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0xc) goto LAB_1444bd5cb;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bd5cb:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bd5f8 FUN_1444bd5f8 body=560 status=ok
// SIG undefined FUN_1444bd5f8(void)

longlong * FUN_1444bd5f8(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 8) goto LAB_1444bd7fd;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bd7fd:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bd82a FUN_1444bd82a body=560 status=ok
// SIG undefined FUN_1444bd82a(void)

longlong * FUN_1444bd82a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 6) goto LAB_1444bda2f;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bda2f:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bda5c FUN_1444bda5c body=560 status=ok
// SIG undefined FUN_1444bda5c(void)

longlong * FUN_1444bda5c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 9) goto LAB_1444bdc61;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bdc61:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bdc8e FUN_1444bdc8e body=560 status=ok
// SIG undefined FUN_1444bdc8e(void)

longlong * FUN_1444bdc8e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0xf) goto LAB_1444bde93;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bde93:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bdec0 FUN_1444bdec0 body=560 status=ok
// SIG undefined FUN_1444bdec0(void)

longlong * FUN_1444bdec0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x2f) goto LAB_1444be0c5;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444be0c5:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444be0f2 FUN_1444be0f2 body=560 status=ok
// SIG undefined FUN_1444be0f2(void)

longlong * FUN_1444be0f2(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x12) goto LAB_1444be2f7;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444be2f7:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444be324 FUN_1444be324 body=560 status=ok
// SIG undefined FUN_1444be324(void)

longlong * FUN_1444be324(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 1) goto LAB_1444be529;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444be529:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444be556 FUN_1444be556 body=560 status=ok
// SIG undefined FUN_1444be556(void)

longlong * FUN_1444be556(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x15) goto LAB_1444be75b;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444be75b:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444be798 FUN_1444be798 body=206 status=ok
// SIG undefined FUN_1444be798(void)

/* WARNING: Removing unreachable block (ram,0x0001444be85d) */

void FUN_1444be798(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)*param_1;
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(*param_3 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      plVar3 = (longlong *)param_1[1];
      FUN_1492ef9be(*param_3,&local_28);
      iVar1 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(plVar3,iVar1);
      }
      lVar2 = *plVar3;
      lVar4 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar4) = 0;
      *(undefined8 *)(lVar2 + lVar4) = local_28;
      local_28 = 0;
      *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_20;
      *(undefined4 *)(lVar2 + 0xc + lVar4) = local_20._4_4_;
      local_20 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444be868 FUN_1444be868 body=560 status=ok
// SIG undefined FUN_1444be868(void)

longlong * FUN_1444be868(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x22) goto LAB_1444bea6d;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bea6d:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bea9a FUN_1444bea9a body=677 status=ok
// SIG undefined FUN_1444bea9a(void)

void FUN_1444bea9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_d0;
  longlong local_c0;
  longlong local_b8 [2];
  longlong local_a8 [3];
  longlong local_90 [2];
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1444beb3d;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar9 = iVar6 == iVar7;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x68);
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
      lVar8 = param_1 + 0x58;
      cVar5 = FUN_140c44378(*(longlong *)(param_1 + 0x50),lVar8);
      if ((cVar5 != '\0') &&
         ((((iVar6 = FUN_1419073b0(*(undefined8 *)(param_1 + 0x50),lVar8), iVar6 == 0xc &&
            (*(longlong *)(param_1 + 0x50) != 0)) &&
           (lVar8 = FUN_1493027c6(*(longlong *)(param_1 + 0x50),lVar8,&local_7c), lVar8 == 1)) &&
          (FUN_1493054d0(param_1,local_7c), 0 < local_7c)))) {
        iVar6 = 0;
        do {
          FUN_149305156(param_1,&local_f0,iVar6);
          FUN_1444be0f2(local_a8 + 2,&local_f0,lVar4);
          if (local_f0 != 0) {
            FUN_1400020a8();
          }
          if (((local_a8[2] != 0) && (cVar5 = FUN_140c44378(local_a8[2],local_90), cVar5 != '\0'))
             && (iVar7 = FUN_1419073b0(local_a8[2],local_90), iVar7 == 0x12)) {
            local_a8[0] = 0;
            local_a8[1] = 0;
            if (local_a8[2] != 0) {
              FUN_1492ff8ec(local_a8[2],local_90,local_a8);
            }
            FUN_1493052d0(param_1,&local_f0,local_a8);
            FUN_1444be0f2(&local_c0,&local_f0,lVar4);
            if (local_f0 != 0) {
              FUN_1400020a8();
            }
            if (((local_c0 != 0) && (cVar5 = FUN_140c44378(local_c0,local_b8), cVar5 != '\0')) &&
               (iVar7 = FUN_1419073b0(local_c0,local_b8), iVar7 == 0x12)) {
              FUN_149305d36(&local_f0,0,local_a8 + 2,&local_c0);
              local_78 = local_a8;
              local_70 = &local_f0;
              FUN_149305860(param_1,local_64,&local_78,0);
              if (local_d0 != 0) {
                FUN_1400020a8();
              }
              if (local_e8 != 0) {
                FUN_1400020a8();
              }
            }
            if (local_b8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
          }
          if (local_90[0] != 0) {
            FUN_1400020a8();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_7c);
      }
    }
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
LAB_1444beb3d:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444bed62 FUN_1444bed62 body=560 status=ok
// SIG undefined FUN_1444bed62(void)

longlong * FUN_1444bed62(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x2c) goto LAB_1444bef67;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bef67:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bef94 FUN_1444bef94 body=560 status=ok
// SIG undefined FUN_1444bef94(void)

longlong * FUN_1444bef94(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 10) goto LAB_1444bf199;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bf199:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bf1c6 FUN_1444bf1c6 body=247 status=ok
// SIG undefined FUN_1444bf1c6(void)

undefined8 *
FUN_1444bf1c6(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1493070ee(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bef94(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bf2c0 FUN_1444bf2c0 body=560 status=ok
// SIG undefined FUN_1444bf2c0(void)

longlong * FUN_1444bf2c0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0xb) goto LAB_1444bf4c5;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bf4c5:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bf4f2 FUN_1444bf4f2 body=247 status=ok
// SIG undefined FUN_1444bf4f2(void)

undefined8 *
FUN_1444bf4f2(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149307338(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bf2c0(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bf5ec FUN_1444bf5ec body=560 status=ok
// SIG undefined FUN_1444bf5ec(void)

longlong * FUN_1444bf5ec(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0xd) goto LAB_1444bf7f1;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bf7f1:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bf81e FUN_1444bf81e body=247 status=ok
// SIG undefined FUN_1444bf81e(void)

undefined8 *
FUN_1444bf81e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149307588(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bf5ec(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bf918 FUN_1444bf918 body=560 status=ok
// SIG undefined FUN_1444bf918(void)

longlong * FUN_1444bf918(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x16) goto LAB_1444bfb1d;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bfb1d:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bfb4a FUN_1444bfb4a body=247 status=ok
// SIG undefined FUN_1444bfb4a(void)

undefined8 *
FUN_1444bfb4a(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1493077da(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bf918(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bfc44 FUN_1444bfc44 body=560 status=ok
// SIG undefined FUN_1444bfc44(void)

longlong * FUN_1444bfc44(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x17) goto LAB_1444bfe49;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444bfe49:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444bfe76 FUN_1444bfe76 body=247 status=ok
// SIG undefined FUN_1444bfe76(void)

undefined8 *
FUN_1444bfe76(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149307a2a(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bfc44(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444bff70 FUN_1444bff70 body=560 status=ok
// SIG undefined FUN_1444bff70(void)

longlong * FUN_1444bff70(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x18) goto LAB_1444c0175;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c0175:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c01a2 FUN_1444c01a2 body=247 status=ok
// SIG undefined FUN_1444c01a2(void)

undefined8 *
FUN_1444c01a2(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149307c7a(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444bff70(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c029c FUN_1444c029c body=560 status=ok
// SIG undefined FUN_1444c029c(void)

longlong * FUN_1444c029c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x1d) goto LAB_1444c04a1;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c04a1:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c04ce FUN_1444c04ce body=247 status=ok
// SIG undefined FUN_1444c04ce(void)

undefined8 *
FUN_1444c04ce(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149307ecc(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444c029c(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c05c8 FUN_1444c05c8 body=560 status=ok
// SIG undefined FUN_1444c05c8(void)

longlong * FUN_1444c05c8(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x2d) goto LAB_1444c07cd;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c07cd:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c07fa FUN_1444c07fa body=247 status=ok
// SIG undefined FUN_1444c07fa(void)

undefined8 *
FUN_1444c07fa(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14930811c(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444c05c8(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c08f4 FUN_1444c08f4 body=560 status=ok
// SIG undefined FUN_1444c08f4(void)

longlong * FUN_1444c08f4(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x30) goto LAB_1444c0af9;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c0af9:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c0b26 FUN_1444c0b26 body=247 status=ok
// SIG undefined FUN_1444c0b26(void)

undefined8 *
FUN_1444c0b26(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149308380(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444c08f4(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c0c20 FUN_1444c0c20 body=560 status=ok
// SIG undefined FUN_1444c0c20(void)

longlong * FUN_1444c0c20(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x19) goto LAB_1444c0e25;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c0e25:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c0e52 FUN_1444c0e52 body=247 status=ok
// SIG undefined FUN_1444c0e52(void)

undefined8 *
FUN_1444c0e52(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1493085d2(*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  if ((uVar1 & 1) != 0) {
    FUN_1444c0c20(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c0f4c FUN_1444c0f4c body=560 status=ok
// SIG undefined FUN_1444c0f4c(void)

longlong * FUN_1444c0f4c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x2e) goto LAB_1444c1151;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c1151:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c117e FUN_1444c117e body=250 status=ok
// SIG undefined FUN_1444c117e(void)

undefined8 *
FUN_1444c117e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149308824(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444c0f4c(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c127c FUN_1444c127c body=560 status=ok
// SIG undefined FUN_1444c127c(void)

longlong * FUN_1444c127c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50 [2];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  if (plVar1 != param_2) {
    iVar3 = (int)param_2[1];
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar3,0);
      memcpy((void *)param_1[1],pvVar4,(longlong)iVar3 * 2);
      param_3 = *param_1;
    }
  }
  if (param_3 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar5 = (longlong)local_38;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_50,L"GetAttributeHandle");
    pvVar4 = local_40;
    if (local_50[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_40;
    }
  }
  else {
    cVar2 = FUN_140c44378(param_3,plVar1);
    if (cVar2 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar5 = (longlong)local_58;
      pvVar4 = (void *)param_1[1];
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar4,lVar5 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar3 = FUN_1419073b0(*param_1,plVar1);
    if (iVar3 == 0x31) goto LAB_1444c1481;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar5 = (longlong)local_78;
    pvVar4 = (void *)param_1[1];
    if (lVar5 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar5 * 2);
    }
    FUN_140056680(local_90,L"GetAttributeHandle");
    pvVar4 = local_80;
    if (local_90[0] != 0) {
      FUN_1400020a8();
      pvVar4 = local_80;
    }
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c1481:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c14ae FUN_1444c14ae body=250 status=ok
// SIG undefined FUN_1444c14ae(void)

undefined8 *
FUN_1444c14ae(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149308a8a(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1444c127c(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_140056680(local_48,L"RegisterAttribute");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c15ab FUN_1444c15ab body=1065 status=ok
// SIG undefined FUN_1444c15ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444c15ab(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = &PTR_FUN_14bc20120;
  local_78 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc20140,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc20680,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc209f0,1,0);
  local_58 = -0x7ffffffeb43df5e8;
  local_44 = 0xf;
  uStack_50 = FUN_14577453c();
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  FUN_14671c472(&local_58);
  FUN_1400b22c2(&local_58,"92738C43-2988-4D9C-9A3D-9BBE6EFF9FC0");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cc0bb7c);
  if (cVar1 == '\0') {
    _DAT_14cc0bb7c = 0;
    uRam000000014cc0bb84 = 0;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_58 = _DAT_14cc0bb7c;
  uStack_50 = (undefined4)uRam000000014cc0bb84;
  uStack_4c = uRam000000014cc0bb84._4_4_;
  _DAT_14cc0bb8c = _DAT_14cc0bb7c;
  uRam000000014cc0bb90 = DAT_14cc0bb7c_4;
  uRam000000014cc0bb94 = (undefined4)uRam000000014cc0bb84;
  uRam000000014cc0bb98 = uRam000000014cc0bb84._4_4_;
  FUN_141005458(&local_58,1,L"InterchangeAssetImportDataVer",0);
  atexit((_func_5014 *)&LAB_1444b88c3);
  FUN_1446f470e(&DAT_14cc0bc28,L"ScriptedExecuteExportPipeline",1);
  FUN_1446f470e(&DAT_14cc0bc38,L"ScriptedExecutePipeline",1);
  FUN_1446f470e(&DAT_14cc0bc48,L"ScriptedExecutePostBroadcastPipeline",1);
  FUN_1446f470e(&DAT_14cc0bc58,L"ScriptedExecutePostFactoryPipeline",1);
  FUN_1446f470e(&DAT_14cc0bc68,L"ScriptedExecutePostImportPipeline",1);
  FUN_1446f470e(&DAT_14cc0bc78,L"ScriptedGetPipelineDisplayName",1);
  FUN_1446f470e(&DAT_14cc0bc88,L"ScriptedSetReimportSourceIndex",1);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14bc22430;
  local_78 = 3;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc224f0,1,&PTR_FUN_14bc22470);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14bc24320;
  local_78 = 0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc24340,8,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc24850,1,0);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14bc25220;
  local_78 = 0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc25260,2,0);
  local_68 = 2;
  ppuStack_70 = &PTR_FUN_14bc27ab0;
  local_78 = 0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc27af0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc29090,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14bc2a840;
  local_78 = 0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc2a860,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc2c510,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/InterchangeCore",&PTR_FUN_14bc2e5f0,1,&PTR_FUN_14bc2e5c0);
  FUN_140056680(&DAT_14cc0c398,L"UserDefined_");
  atexit((_func_5014 *)&LAB_1444bc9f7);
  FUN_140056680(&DAT_14cc0c3a8,L"AddDelegate_");
  atexit((_func_5014 *)&LAB_1444bca08);
  FUN_140056680(&DAT_14cc0c3b8,L"_Value");
  atexit((_func_5014 *)&LAB_1444bca19);
  FUN_140056680(&DAT_14cc0c3c8,L"_Payload");
  atexit((_func_5014 *)&LAB_1444bca2a);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c19d8 FUN_1444c19d8 body=155 status=ok
// SIG undefined FUN_1444c19d8(void)

void FUN_1444c19d8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  
  if (param_1 != param_3) {
    iVar7 = (int)param_2[1];
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar7) {
      FUN_14499148c(param_3);
      iVar7 = (int)param_2[1];
    }
    if (iVar7 != 0) {
      lVar3 = *param_2;
      lVar8 = 0;
      do {
        puVar9 = (undefined4 *)((longlong)*(int *)(lVar3 + lVar8) * 0x10 + *param_1);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1449e2712(param_3,iVar2);
        }
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
        *puVar1 = *puVar9;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar7 * 4 != lVar8);
    }
  }
  return;
}



// FUNCTION 1444c1a74 FUN_1444c1a74 body=27 status=ok
// SIG undefined FUN_1444c1a74(void)

wchar_t * FUN_1444c1a74(uint param_1)

{
  if (param_1 < 0x14) {
    return (wchar_t *)(&PTR_u_KHR_materials_pbrSpecularGlossin_14bc32a90)[param_1];
  }
  return L"UnknwonExtension";
}



// FUNCTION 1444c1a8f FUN_1444c1a8f body=49 status=ok
// SIG undefined FUN_1444c1a8f(void)

void FUN_1444c1a8f(void)

{
  FUN_1447a1747(DAT_14cc0c420,DAT_14cc0c428);
  if (DAT_14cc0c420 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1ac0 FUN_1444c1ac0 body=49 status=ok
// SIG undefined FUN_1444c1ac0(void)

void FUN_1444c1ac0(void)

{
  FUN_1447a1747(DAT_14cc0c430,DAT_14cc0c438);
  if (DAT_14cc0c430 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1af1 FUN_1444c1af1 body=155 status=ok
// SIG undefined FUN_1444c1af1(void)

undefined8 * FUN_1444c1af1(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  undefined4 local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = L"extensions";
  local_28 = 10;
  cVar2 = FUN_146843260(param_2,&local_30,6);
  if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_40 = L"extensions";
    local_38 = 10;
    puVar3 = (undefined8 *)FUN_14047df14(param_2);
    *param_1 = *puVar3;
    lVar1 = puVar3[1];
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c1b8d FUN_1444c1b8d body=343 status=ok
// SIG undefined FUN_1444c1b8d(void)

undefined8 * FUN_1444c1b8d(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  if (lVar8 != 0) {
    local_28 = *(int *)(DAT_14cc0c420 + 1) + -1;
    if (*(int *)(DAT_14cc0c420 + 1) == 0) {
      local_28 = 0;
    }
    local_30 = *DAT_14cc0c420;
    cVar5 = FUN_146843260(lVar8,&local_30,6);
    lVar8 = *param_2;
    if (cVar5 == '\0') {
      local_28 = *(int *)(DAT_14cc0c420 + 3) + -1;
      if (*(int *)(DAT_14cc0c420 + 3) == 0) {
        local_28 = 0;
      }
      local_30 = DAT_14cc0c420[2];
      cVar5 = FUN_146843260(lVar8,&local_30,6);
      if (cVar5 == '\0') goto LAB_1444c1bb4;
      lVar8 = *param_2;
      local_50[0] = DAT_14cc0c420[2];
      puVar7 = local_50;
      iVar6 = *(int *)(DAT_14cc0c420 + 3) + -1;
      if (*(int *)(DAT_14cc0c420 + 3) == 0) {
        iVar6 = 0;
      }
    }
    else {
      local_40[0] = *DAT_14cc0c420;
      puVar7 = local_40;
      iVar6 = *(int *)(DAT_14cc0c420 + 1) + -1;
      if (*(int *)(DAT_14cc0c420 + 1) == 0) {
        iVar6 = 0;
      }
    }
    *(int *)(puVar7 + 1) = iVar6;
    puVar7 = (undefined8 *)FUN_14047df14(lVar8);
    uVar3 = *puVar7;
    lVar8 = puVar7[1];
    if (lVar8 == 0) {
      *param_1 = uVar3;
      param_1[1] = 0;
    }
    else {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
      plVar4 = (longlong *)param_1[1];
      *param_1 = uVar3;
      param_1[1] = lVar8;
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
    }
  }
LAB_1444c1bb4:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1444c1cf6 FUN_1444c1cf6 body=49 status=ok
// SIG undefined FUN_1444c1cf6(void)

void FUN_1444c1cf6(void)

{
  FUN_1447a1747(DAT_14cc0c458,DAT_14cc0c460);
  if (DAT_14cc0c458 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1d27 FUN_1444c1d27 body=49 status=ok
// SIG undefined FUN_1444c1d27(void)

void FUN_1444c1d27(void)

{
  FUN_1447a1747(DAT_14cc0c470,DAT_14cc0c478);
  if (DAT_14cc0c470 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1d58 FUN_1444c1d58 body=49 status=ok
// SIG undefined FUN_1444c1d58(void)

void FUN_1444c1d58(void)

{
  FUN_1447a1747(DAT_14cc0c488,DAT_14cc0c490);
  if (DAT_14cc0c488 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1d9a FUN_1444c1d9a body=49 status=ok
// SIG undefined FUN_1444c1d9a(void)

void FUN_1444c1d9a(void)

{
  FUN_1447a1747(DAT_14cc0c4b8,DAT_14cc0c4c0);
  if (DAT_14cc0c4b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1dcb FUN_1444c1dcb body=49 status=ok
// SIG undefined FUN_1444c1dcb(void)

void FUN_1444c1dcb(void)

{
  FUN_1447a1747(DAT_14cc0c4d0,DAT_14cc0c4d8);
  if (DAT_14cc0c4d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1dfc FUN_1444c1dfc body=49 status=ok
// SIG undefined FUN_1444c1dfc(void)

void FUN_1444c1dfc(void)

{
  FUN_1447a1747(DAT_14cc0c4e8,DAT_14cc0c4f0);
  if (DAT_14cc0c4e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1e2d FUN_1444c1e2d body=49 status=ok
// SIG undefined FUN_1444c1e2d(void)

void FUN_1444c1e2d(void)

{
  FUN_1447a1747(DAT_14cc0c500,DAT_14cc0c508);
  if (DAT_14cc0c500 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1e5e FUN_1444c1e5e body=49 status=ok
// SIG undefined FUN_1444c1e5e(void)

void FUN_1444c1e5e(void)

{
  FUN_1447a1747(DAT_14cc0c518,DAT_14cc0c520);
  if (DAT_14cc0c518 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1e8f FUN_1444c1e8f body=49 status=ok
// SIG undefined FUN_1444c1e8f(void)

void FUN_1444c1e8f(void)

{
  FUN_1447a1747(DAT_14cc0c530,DAT_14cc0c538);
  if (DAT_14cc0c530 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1ec0 FUN_1444c1ec0 body=49 status=ok
// SIG undefined FUN_1444c1ec0(void)

void FUN_1444c1ec0(void)

{
  FUN_1447a1747(DAT_14cc0c548,DAT_14cc0c550);
  if (DAT_14cc0c548 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1ef1 FUN_1444c1ef1 body=49 status=ok
// SIG undefined FUN_1444c1ef1(void)

void FUN_1444c1ef1(void)

{
  FUN_1447a1747(DAT_14cc0c560,DAT_14cc0c568);
  if (DAT_14cc0c560 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1f22 FUN_1444c1f22 body=49 status=ok
// SIG undefined FUN_1444c1f22(void)

void FUN_1444c1f22(void)

{
  FUN_1447a1747(DAT_14cc0c578,DAT_14cc0c580);
  if (DAT_14cc0c578 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444c1f53 FUN_1444c1f53 body=150 status=ok
// SIG undefined FUN_1444c1f53(void)

undefined8 *
FUN_1444c1f53(undefined8 *param_1,uint param_2,longlong param_3,longlong param_4,int param_5)

{
  void *_Dst;
  void *_Src;
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14017c08a();
  _Dst = (void *)*param_1;
  _Src = (void *)(*(longlong *)(param_3 + 8) + *(longlong *)(param_3 + 0x10) + param_4);
  if (param_5 == 2) {
    if (param_2 != 0) {
      lVar1 = 0;
      do {
        *(uint *)((longlong)_Dst + lVar1 * 4) = (uint)*(byte *)((longlong)_Src + lVar1);
        lVar1 = lVar1 + 1;
      } while (param_2 != (uint)lVar1);
    }
  }
  else if (param_5 == 5) {
    memcpy(_Dst,_Src,(ulonglong)param_2 << 2);
  }
  else if ((param_5 == 4) && (param_2 != 0)) {
    lVar1 = 0;
    do {
      *(uint *)((longlong)_Dst + lVar1 * 4) = (uint)*(ushort *)((longlong)_Src + lVar1 * 2);
      lVar1 = lVar1 + 1;
    } while (param_2 != (uint)lVar1);
  }
  return param_1;
}



// FUNCTION 1444c1fe9 FUN_1444c1fe9 body=183 status=ok
// SIG undefined FUN_1444c1fe9(void)

undefined8
FUN_1444c1fe9(int param_1,longlong param_2,longlong param_3,int param_4,int param_5,char param_6,
             double *param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_7 = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  pfVar1 = (float *)((ulonglong)(uint)(param_1 * param_4) + param_3 +
                    *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x10));
  if (param_5 == 6) {
    local_1c = pfVar1[2];
    local_20 = pfVar1[1];
    local_24 = *pfVar1;
  }
  else {
    if (param_6 == '\0') {
      uVar2 = 0;
      goto LAB_1444c2083;
    }
    FUN_1444c394d(&local_24,param_5,pfVar1);
  }
  *param_7 = (double)local_24;
  param_7[1] = (double)local_20;
  param_7[2] = (double)local_1c;
  uVar2 = 1;
LAB_1444c2083:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c20a1 FUN_1444c20a1 body=212 status=ok
// SIG undefined FUN_1444c20a1(void)

undefined8
FUN_1444c20a1(int param_1,longlong param_2,longlong param_3,int param_4,int param_5,char param_6,
             double *param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_7 = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  param_7[3] = 1.0;
  pfVar1 = (float *)((ulonglong)(uint)(param_1 * param_4) + param_3 +
                    *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x10));
  if (param_5 == 6) {
    local_1c = pfVar1[3];
    local_20 = pfVar1[2];
    local_24 = pfVar1[1];
    local_28 = *pfVar1;
  }
  else {
    if (param_6 == '\0') {
      uVar2 = 0;
      goto LAB_1444c2158;
    }
    FUN_1444c3a3c(&local_28,param_5,pfVar1);
  }
  *param_7 = (double)local_28;
  param_7[1] = (double)local_24;
  param_7[2] = (double)local_20;
  param_7[3] = (double)local_1c;
  uVar2 = 1;
LAB_1444c2158:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c2176 FUN_1444c2176 body=591 status=ok
// SIG undefined FUN_1444c2176(void)

undefined8
FUN_1444c2176(char param_1,longlong param_2,longlong param_3,int param_4,uint param_5,uint param_6,
             void *param_7)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  
  if (param_1 == '\0') {
    if (param_4 == 6) {
      memcpy(param_7,(void *)(*(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x10) + param_3),
             (ulonglong)param_6 << 2);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
    if ((param_5 & 0xfffffffb) == 0) {
      if (param_4 - 1U < 4) {
        param_3 = *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x10) + param_3;
        switch(param_4) {
        case 1:
          if (param_6 != 0) {
            lVar4 = 0;
            do {
              fVar5 = (float)(int)*(char *)(param_3 + lVar4) / 127.0;
              if (fVar5 <= -1.0) {
                fVar5 = -1.0;
              }
              *(float *)((longlong)param_7 + lVar4 * 4) = fVar5;
              lVar4 = lVar4 + 1;
            } while (param_6 != (uint)lVar4);
          }
          break;
        case 2:
          if (param_6 != 0) {
            lVar4 = 0;
            do {
              *(float *)((longlong)param_7 + lVar4 * 4) = (float)*(byte *)(param_3 + lVar4) / 255.0;
              lVar4 = lVar4 + 1;
            } while (param_6 != (uint)lVar4);
          }
          break;
        case 3:
          if (param_6 != 0) {
            lVar4 = 0;
            do {
              fVar5 = (float)(int)*(short *)(param_3 + lVar4 * 2) / 32767.0;
              if (fVar5 <= -1.0) {
                fVar5 = -1.0;
              }
              *(float *)((longlong)param_7 + lVar4 * 4) = fVar5;
              lVar4 = lVar4 + 1;
            } while (param_6 != (uint)lVar4);
          }
          break;
        case 4:
          if (param_6 != 0) {
            lVar4 = 0;
            do {
              *(float *)((longlong)param_7 + lVar4 * 4) =
                   (float)*(ushort *)(param_3 + lVar4 * 2) / 65535.0;
              lVar4 = lVar4 + 1;
            } while (param_6 != (uint)lVar4);
          }
        }
      }
    }
    else if (param_6 != 0) {
      uVar3 = 0;
      uVar2 = 0;
      do {
        if (3 < param_4 - 1U) {
          fVar5 = 0.0;
          goto LAB_1444c2262;
        }
        lVar4 = *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x10) + uVar3;
        switch(param_4) {
        case 1:
          fVar5 = (float)(int)*(char *)(lVar4 + param_3) / 127.0;
          goto LAB_1444c2235;
        case 2:
          fVar5 = (float)*(byte *)(lVar4 + param_3) / 255.0;
          break;
        case 3:
          fVar5 = (float)(int)*(short *)(lVar4 + param_3) / 32767.0;
LAB_1444c2235:
          if (fVar5 <= -1.0) {
            fVar5 = -1.0;
          }
          break;
        case 4:
          fVar5 = (float)*(ushort *)(lVar4 + param_3) / 65535.0;
        }
LAB_1444c2262:
        *(float *)((longlong)param_7 + uVar2 * 4) = fVar5;
        uVar2 = uVar2 + 1;
        uVar3 = (ulonglong)((int)uVar3 + param_5);
      } while (param_6 != uVar2);
    }
  }
  return uVar1;
}



// FUNCTION 1444c23c5 FUN_1444c23c5 body=47 status=ok
// SIG undefined FUN_1444c23c5(void)

void FUN_1444c23c5(void)

{
  DAT_14cc0c5d8 = 0;
  if (DAT_14cc0c5d0 != 0) {
    FUN_1400020a8();
  }
  FUN_145c74baa(&DAT_14cc0c590);
  return;
}



// FUNCTION 1444c2405 FUN_1444c2405 body=832 status=ok
// SIG undefined FUN_1444c2405(void)

undefined4
FUN_1444c2405(undefined8 *param_1,undefined2 **param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort uVar18;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 1);
  lVar7 = (longlong)iVar1;
  puVar5 = (undefined2 *)*param_1;
  puVar3 = &DAT_149dfb77a;
  puVar11 = puVar5;
  if (lVar7 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  lVar13 = 5;
  lVar15 = 0;
  while( true ) {
    uVar18 = *(ushort *)((longlong)puVar11 + lVar15);
    uVar17 = (ulonglong)uVar18;
    uVar8 = *(ushort *)((longlong)&DAT_14bc30efa + lVar15);
    if (uVar18 != uVar8) break;
    if (uVar18 == 0) goto LAB_1444c24a6;
LAB_1444c2474:
    lVar13 = lVar13 + -1;
    if (lVar13 == 0) goto LAB_1444c24a6;
    lVar15 = lVar15 + 2;
  }
  if ((uVar8 | uVar18) < 0x80) {
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
    uVar16 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar16]) goto LAB_1444c2474;
  }
  if (uVar18 != uVar8) goto LAB_1444c24fa;
LAB_1444c24a6:
  if (iVar1 != 0) {
    lVar13 = lVar7 * 2;
    uVar17 = 0;
    do {
      if (puVar5[uVar17] == 0x3b) goto LAB_1444c24c8;
      uVar17 = uVar17 + 1;
      lVar13 = lVar13 + -2;
    } while (lVar13 != 0);
    uVar17 = 0xffffffff;
LAB_1444c24c8:
    lVar13 = 0;
    iVar9 = 0;
    do {
      if (*(short *)((longlong)puVar5 + lVar13) == 0x2c) {
        uVar10 = (uint)uVar17;
        if (iVar9 != 1 && uVar10 != 0xffffffff) {
          if ((int)(~uVar10 - iVar9) < 0) {
            local_58 = (undefined2 *)0x0;
            uStack_50 = 0;
          }
          else {
            uVar6 = iVar1 - 1;
            if (iVar1 == 0) {
              uVar6 = 0;
            }
            uVar14 = uVar10 + 1;
            if ((int)uVar6 <= (int)(uVar10 + 1)) {
              uVar14 = uVar6;
            }
            uVar16 = (ulonglong)uVar14;
            if ((int)uVar14 < 1) {
              uVar16 = 0;
            }
            uVar4 = (ulonglong)(~uVar10 - iVar9) + (longlong)(int)uVar10 + 1;
            uVar12 = (longlong)(int)uVar6;
            if ((longlong)uVar4 < (longlong)(int)uVar6) {
              uVar12 = uVar4;
            }
            if ((longlong)uVar12 < (longlong)uVar16) {
              uVar12 = uVar16;
            }
            FUN_14006620a(&local_58,puVar5 + uVar16,(int)uVar12 - (int)uVar16);
            puVar3 = &DAT_149dfb77a;
            if ((int)uStack_50 != 0) {
              puVar3 = local_58;
            }
          }
          lVar7 = 0;
          goto LAB_1444c259c;
        }
        break;
      }
      iVar9 = iVar9 + -1;
      lVar13 = lVar13 + 2;
    } while (lVar7 * 2 != lVar13);
  }
LAB_1444c24fa:
  uVar2 = 0;
  goto LAB_1444c24fc;
LAB_1444c259c:
  uVar18 = *(ushort *)((longlong)puVar3 + lVar7);
  uVar16 = (ulonglong)uVar18;
  uVar8 = *(ushort *)((longlong)&DAT_14bc3291a + lVar7);
  if (uVar18 == uVar8) {
    if (uVar18 == 0) goto LAB_1444c25e4;
LAB_1444c25b1:
    lVar7 = lVar7 + 2;
    goto LAB_1444c259c;
  }
  if ((uVar8 | uVar18) < 0x80) {
    uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    uVar12 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar12]) goto LAB_1444c25b1;
  }
  if (uVar18 != uVar8) {
    uVar2 = 0;
    goto LAB_1444c2717;
  }
LAB_1444c25e4:
  if ((int)uVar10 < 5) {
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
    uVar10 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar10 = 0;
    }
    uVar6 = 5;
    if ((int)uVar10 < 5) {
      uVar6 = uVar10;
    }
    uVar16 = (ulonglong)uVar6;
    if ((int)uVar6 < 1) {
      uVar16 = 0;
    }
    uVar12 = (longlong)(int)uVar10;
    if ((longlong)(uVar17 & 0xffffffff) < (longlong)(int)uVar10) {
      uVar12 = uVar17 & 0xffffffff;
    }
    if ((longlong)uVar12 < (longlong)uVar16) {
      uVar12 = uVar16;
    }
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    FUN_14006620a(&local_68,puVar5 + uVar16,(int)uVar12 - (int)uVar16);
  }
  if (&local_68 == param_2) {
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_68;
    local_68 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = (int)uStack_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  }
  iVar1 = *(int *)(param_1 + 1);
  puVar3 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar5 = (undefined2 *)*param_1;
  }
  uVar10 = 0;
  uVar6 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  uVar14 = 1U - iVar9;
  if ((int)uVar6 <= (int)(1U - iVar9)) {
    uVar14 = uVar6;
  }
  if ((int)uVar14 < 1) {
    uVar14 = uVar10;
  }
  FUN_14006620a(&local_68,puVar5 + uVar14,uVar6 - uVar14);
  uVar2 = FUN_14607a29e(&local_68);
  *param_4 = uVar2;
  if ((int)uStack_60 != 0) {
    puVar3 = local_68;
    uVar10 = (int)uStack_60 - 1;
  }
  uVar2 = FUN_1415cf884(puVar3,uVar10,param_3,0);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c2717:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c24fc:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c2746 FUN_1444c2746 body=245 status=ok
// SIG undefined FUN_1444c2746(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1444c2746(longlong *param_1,uint param_2)

{
  undefined *puVar1;
  
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)param_2)) {
    puVar1 = &DAT_14cc0c7c8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc0c898) {
      FUN_144b3d300(&DAT_14cc0c898);
      if (DAT_14cc0c898 == -1) {
        _DAT_14cc0c7c8 = 0xffffffff;
        DAT_14cc0c7e0 = 0;
        _DAT_14cc0c7e4 = 0;
        _DAT_14cc0c818 = 0;
        _DAT_14cc0c820 = 0;
        _DAT_14cc0c7cc = 0;
        _DAT_14cc0c7d2 = 0;
        uRam000000014cc0c7d4 = 0;
        _DAT_14cc0c7f0 = 0;
        uRam000000014cc0c7f8 = 0;
        _DAT_14cc0c800 = 0;
        uRam000000014cc0c808 = 0;
        _DAT_14cc0c810 = 0;
        _DAT_14cc0c828 = 0;
        uRam000000014cc0c830 = 0;
        _DAT_14cc0c838 = 0;
        uRam000000014cc0c840 = 0;
        _DAT_14cc0c848 = 0;
        _DAT_14cc0c850 = 0;
        uRam000000014cc0c858 = 0;
        _DAT_14cc0c860 = 0;
        uRam000000014cc0c868 = 0;
        _DAT_14cc0c86c = 0;
        uRam000000014cc0c870 = 0;
        uRam000000014cc0c874 = 0;
        _DAT_14cc0c880 = 0;
        uRam000000014cc0c888 = 0;
        _DAT_14cc0c890 = 0;
        _Init_thread_footer(&DAT_14cc0c898);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)param_2 * 0xd0 + *param_1);
  }
  return puVar1;
}



// FUNCTION 1444c283b FUN_1444c283b body=245 status=ok
// SIG undefined FUN_1444c283b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1444c283b(longlong *param_1,uint param_2)

{
  undefined *puVar1;
  
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)param_2)) {
    puVar1 = &DAT_14cc0c8a0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc0c970) {
      FUN_144b3d300(&DAT_14cc0c970);
      if (DAT_14cc0c970 == -1) {
        _DAT_14cc0c8a0 = 0xffffffff;
        DAT_14cc0c8b8 = 0;
        _DAT_14cc0c8bc = 0;
        _DAT_14cc0c8f0 = 0;
        _DAT_14cc0c8f8 = 0;
        _DAT_14cc0c8a4 = 0;
        _DAT_14cc0c8aa = 0;
        uRam000000014cc0c8ac = 0;
        _DAT_14cc0c8c8 = 0;
        uRam000000014cc0c8d0 = 0;
        _DAT_14cc0c8d8 = 0;
        uRam000000014cc0c8e0 = 0;
        _DAT_14cc0c8e8 = 0;
        _DAT_14cc0c900 = 0;
        uRam000000014cc0c908 = 0;
        _DAT_14cc0c910 = 0;
        uRam000000014cc0c918 = 0;
        _DAT_14cc0c920 = 0;
        _DAT_14cc0c928 = 0;
        uRam000000014cc0c930 = 0;
        _DAT_14cc0c938 = 0;
        uRam000000014cc0c940 = 0;
        _DAT_14cc0c944 = 0;
        uRam000000014cc0c948 = 0;
        uRam000000014cc0c94c = 0;
        _DAT_14cc0c958 = 0;
        uRam000000014cc0c960 = 0;
        _DAT_14cc0c968 = 0;
        _Init_thread_footer(&DAT_14cc0c970);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)param_2 * 0xd0 + *param_1);
  }
  return puVar1;
}



// FUNCTION 1444c2930 FUN_1444c2930 body=1555 status=ok
// SIG undefined FUN_1444c2930(void)

void FUN_1444c2930(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_108 [36];
  int local_e4;
  ulonglong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  uint *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = L"extras";
  local_80 = 6;
  local_d0 = param_3;
  local_b8 = param_2;
  cVar4 = FUN_1469de206();
  if (cVar4 != '\0') {
    local_98 = L"extras";
    local_90 = 6;
    plVar6 = (longlong *)FUN_14047df14(param_1);
    plVar6 = (longlong *)*plVar6;
    local_c0 = (uint *)(plVar6 + 2);
    uVar14 = *(uint *)(plVar6 + 5);
    uVar23 = (ulonglong)uVar14;
    local_c8 = uVar23;
    if (*(int *)((longlong)local_d0 + 0x34) < (int)local_d0[1]) {
      if (uVar14 == 0) {
        uVar17 = 1;
        uVar22 = 0;
        iVar15 = 0;
        uVar10 = 0;
      }
      else {
        puVar7 = (uint *)plVar6[4];
        if ((uint *)plVar6[4] == (uint *)0x0) {
          puVar7 = local_c0;
        }
        uVar10 = *puVar7;
        if (uVar10 == 0) {
          iVar15 = uVar14 + 0x1e;
          if (-1 < (int)(uVar14 - 1)) {
            iVar15 = uVar14 - 1;
          }
          uVar22 = 0;
          uVar17 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar17 = uVar22;
          }
          iVar15 = 0;
          do {
            if (uVar17 == uVar22) goto LAB_1444c2da6;
            iVar15 = iVar15 + 0x20;
            uVar10 = puVar7[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar22 = 0;
          iVar15 = 0;
        }
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar13 = uVar17 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar10 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar10) {
          uVar10 = uVar14;
        }
      }
      uVar13 = (ulonglong)uVar10;
      if (uVar10 != uVar14) {
        local_b0 = local_d0 + 7;
        uVar14 = 0xffffffff;
        local_d8 = plVar6;
        do {
          plVar1 = (longlong *)(*plVar6 + (longlong)(int)uVar13 * 0x28);
          iVar21 = (int)plVar1[1];
          iVar20 = iVar21 + -1;
          if (iVar21 == 0) {
            iVar20 = 0;
          }
          uVar10 = 0;
          if (0 < iVar20) {
            puVar18 = &DAT_149dfb77a;
            if (iVar21 != 0) {
              puVar18 = (undefined2 *)*plVar1;
            }
            lVar19 = 0;
            uVar10 = 0;
            do {
              uVar5 = ((uint)(ushort)puVar18[lVar19] +
                      (uint)(0x19 < (ushort)puVar18[lVar19] - 0x61) * 0x20) - 0x20;
              uVar10 = uVar10 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar5) & 0xff) * 4);
              uVar10 = uVar10 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar5 >> 8 & 0xff) * 4
                                );
              lVar19 = lVar19 + 1;
            } while (iVar20 != (int)lVar19);
          }
          local_e4 = iVar15;
          local_e0 = uVar22;
          if ((int)local_d0[1] != *(int *)((longlong)local_d0 + 0x34)) {
            plVar8 = (longlong *)local_d0[8];
            if ((longlong *)local_d0[8] == (longlong *)0x0) {
              plVar8 = local_b0;
            }
            iVar20 = *(int *)((longlong)plVar8 + (ulonglong)((int)local_d0[9] - 1U & uVar10) * 4);
            if (iVar20 != -1) {
              lVar19 = *local_d0;
LAB_1444c2bcd:
              lVar9 = (longlong)iVar20;
              iVar20 = *(int *)(lVar19 + 8 + lVar9 * 0x18);
              if (iVar20 == iVar21) {
                plVar6 = local_d8;
                if (1 < iVar21) {
                  lVar16 = 0;
                  do {
                    uVar2 = *(ushort *)(*(longlong *)(lVar19 + lVar9 * 0x18) + lVar16);
                    uVar3 = *(ushort *)(*plVar1 + lVar16);
                    if (uVar2 == uVar3) {
                      if (uVar2 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar3 | uVar2)) {
                        iVar20 = (uint)uVar2 - (uint)uVar3;
                        goto LAB_1444c2c57;
                      }
                      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                      goto code_r0x0001444c2c54;
                    }
                    lVar16 = lVar16 + 2;
                  } while( true );
                }
              }
              else if (iVar20 + iVar21 != 1) goto LAB_1444c2be8;
              goto LAB_1444c2ccd;
            }
          }
LAB_1444c2c6b:
          local_a8[0] = 0;
          local_a8[1] = 0;
          cVar4 = (**(code **)(*(longlong *)plVar1[2] + 0x58))((longlong *)plVar1[2],local_a8);
          if (cVar4 != '\0') {
            local_70 = local_a8;
            local_78 = plVar1;
            FUN_140ac5c08(local_b8,local_64,&local_78,0);
          }
          iVar15 = local_e4;
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
          uVar23 = (ulonglong)*(uint *)(plVar6 + 5);
LAB_1444c2ccd:
          uVar14 = uVar14 & ~(uint)uVar17;
          puVar7 = (uint *)plVar6[4];
          if ((uint *)plVar6[4] == (uint *)0x0) {
            puVar7 = local_c0;
          }
          iVar21 = (int)local_e0;
          lVar19 = (longlong)iVar21;
          uVar10 = puVar7[lVar19] & uVar14;
          iVar20 = (int)uVar23;
          uVar22 = local_e0;
          if (uVar10 == 0) {
            iVar11 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar11 = iVar20 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar21) {
              iVar12 = iVar21;
            }
            if (iVar21 < iVar11) {
              lVar9 = 0;
              do {
                uVar10 = puVar7[lVar19 + lVar9 + 1];
                if (uVar10 != 0) {
                  uVar22 = (ulonglong)(iVar21 + (int)lVar9 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1444c2d47;
                }
                iVar15 = iVar15 + 0x20;
                lVar9 = lVar9 + 1;
              } while (iVar12 - lVar19 != lVar9);
              uVar14 = 0xffffffff;
              iVar21 = iVar12;
            }
            uVar22 = (ulonglong)(iVar21 + 1);
            uVar13 = uVar23;
          }
          else {
LAB_1444c2d47:
            uVar17 = (ulonglong)(-uVar10 & uVar10);
            uVar13 = uVar17 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar10 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            uVar13 = (ulonglong)uVar10;
            if (iVar20 <= (int)uVar10) {
              uVar13 = uVar23;
            }
          }
        } while ((int)uVar13 != (int)local_c8);
      }
    }
    else {
      if (uVar14 == 0) {
        uVar17 = 1;
        uVar13 = 0;
        iVar15 = 0;
        uVar22 = 0;
      }
      else {
        puVar7 = (uint *)plVar6[4];
        if ((uint *)plVar6[4] == (uint *)0x0) {
          puVar7 = local_c0;
        }
        uVar10 = *puVar7;
        if (uVar10 == 0) {
          iVar15 = uVar14 + 0x1e;
          if (-1 < (int)(uVar14 - 1)) {
            iVar15 = uVar14 - 1;
          }
          uVar13 = 0;
          uVar22 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar22 = uVar13;
          }
          iVar15 = 0;
          do {
            if (uVar22 == uVar13) goto LAB_1444c2da6;
            iVar15 = iVar15 + 0x20;
            uVar10 = puVar7[uVar13 + 1];
            uVar13 = uVar13 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar13 = 0;
          iVar15 = 0;
        }
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar22 = uVar17 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar10 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        uVar22 = (ulonglong)uVar10;
        if ((int)uVar14 <= (int)uVar10) {
          uVar22 = uVar23;
        }
      }
      if ((uint)uVar22 != uVar14) {
        uVar14 = 0xffffffff;
        do {
          lVar19 = *plVar6;
          local_a8[0] = 0;
          local_a8[1] = 0;
          plVar1 = *(longlong **)(lVar19 + 0x10 + (longlong)(int)uVar22 * 0x28);
          cVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,local_a8);
          if (cVar4 != '\0') {
            local_78 = (longlong *)(lVar19 + (longlong)(int)uVar22 * 0x28);
            local_70 = local_a8;
            FUN_140ac5c08(local_b8,local_64,&local_78,0);
          }
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
          uVar14 = uVar14 & ~(uint)uVar17;
          puVar7 = (uint *)plVar6[4];
          if ((uint *)plVar6[4] == (uint *)0x0) {
            puVar7 = local_c0;
          }
          uVar10 = *(uint *)(plVar6 + 5);
          iVar21 = (int)uVar13;
          lVar19 = (longlong)iVar21;
          uVar5 = puVar7[lVar19] & uVar14;
          if (uVar5 == 0) {
            iVar20 = uVar10 + 0x1e;
            if (-1 < (int)(uVar10 - 1)) {
              iVar20 = uVar10 - 1;
            }
            iVar20 = iVar20 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar11 = iVar20;
            if (iVar20 < iVar21) {
              iVar11 = iVar21;
            }
            if (iVar21 < iVar20) {
              lVar9 = 0;
              do {
                uVar5 = puVar7[lVar19 + lVar9 + 1];
                if (uVar5 != 0) {
                  uVar13 = (ulonglong)(iVar21 + (int)lVar9 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1444c2eed;
                }
                iVar15 = iVar15 + 0x20;
                lVar9 = lVar9 + 1;
              } while (iVar11 - lVar19 != lVar9);
              uVar14 = 0xffffffff;
              iVar21 = iVar11;
            }
            uVar13 = (ulonglong)(iVar21 + 1);
            uVar5 = uVar10;
          }
          else {
LAB_1444c2eed:
            uVar17 = (ulonglong)(-uVar5 & uVar5);
            uVar23 = uVar17 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar5 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if ((int)uVar10 <= (int)uVar5) {
              uVar5 = uVar10;
            }
          }
          uVar22 = (ulonglong)uVar5;
        } while (uVar5 != (uint)local_c8);
      }
    }
  }
LAB_1444c2da6:
  plVar6 = local_d0;
  *(undefined4 *)(local_d0 + 9) = 0;
  if (local_d0[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(plVar6);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001444c2c54:
  iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1444c2c57:
  if (iVar20 == 0) goto LAB_1444c2ccd;
LAB_1444c2be8:
  iVar20 = *(int *)(lVar19 + 0x10 + lVar9 * 0x18);
  if (iVar20 == -1) goto LAB_1444c2c6b;
  goto LAB_1444c2bcd;
}



// FUNCTION 1444c2f44 FUN_1444c2f44 body=770 status=ok
// SIG undefined FUN_1444c2f44(void)

undefined4 FUN_1444c2f44(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 1);
  lVar7 = (longlong)iVar1;
  puVar5 = (undefined2 *)*param_1;
  puVar3 = &DAT_149dfb77a;
  puVar12 = puVar5;
  if (lVar7 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  lVar14 = 5;
  lVar16 = 0;
  while( true ) {
    uVar8 = *(ushort *)((longlong)puVar12 + lVar16);
    uVar18 = (ulonglong)uVar8;
    uVar9 = *(ushort *)((longlong)&DAT_14bc30efa + lVar16);
    if (uVar8 != uVar9) break;
    if (uVar8 == 0) goto LAB_1444c2fd6;
LAB_1444c2fa7:
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) goto LAB_1444c2fd6;
    lVar16 = lVar16 + 2;
  }
  if ((uVar9 | uVar8) < 0x80) {
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
    uVar17 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
    if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar17]) goto LAB_1444c2fa7;
  }
  if (uVar8 != uVar9) goto LAB_1444c302a;
LAB_1444c2fd6:
  if (iVar1 != 0) {
    lVar14 = lVar7 * 2;
    uVar18 = 0;
    do {
      if (puVar5[uVar18] == 0x3b) goto LAB_1444c2ff8;
      uVar18 = uVar18 + 1;
      lVar14 = lVar14 + -2;
    } while (lVar14 != 0);
    uVar18 = 0xffffffff;
LAB_1444c2ff8:
    lVar14 = 0;
    iVar10 = 0;
    do {
      if (*(short *)((longlong)puVar5 + lVar14) == 0x2c) {
        uVar11 = (uint)uVar18;
        if (iVar10 != 1 && uVar11 != 0xffffffff) {
          if ((int)(~uVar11 - iVar10) < 0) {
            local_48 = (undefined2 *)0x0;
            uStack_40 = 0;
          }
          else {
            uVar6 = iVar1 - 1;
            if (iVar1 == 0) {
              uVar6 = 0;
            }
            uVar15 = uVar11 + 1;
            if ((int)uVar6 <= (int)(uVar11 + 1)) {
              uVar15 = uVar6;
            }
            uVar17 = (ulonglong)uVar15;
            if ((int)uVar15 < 1) {
              uVar17 = 0;
            }
            uVar4 = (ulonglong)(~uVar11 - iVar10) + (longlong)(int)uVar11 + 1;
            uVar13 = (longlong)(int)uVar6;
            if ((longlong)uVar4 < (longlong)(int)uVar6) {
              uVar13 = uVar4;
            }
            if ((longlong)uVar13 < (longlong)uVar17) {
              uVar13 = uVar17;
            }
            FUN_14006620a(&local_48,puVar5 + uVar17,(int)uVar13 - (int)uVar17);
            puVar3 = &DAT_149dfb77a;
            if ((int)uStack_40 != 0) {
              puVar3 = local_48;
            }
          }
          lVar7 = 0;
          goto LAB_1444c30c7;
        }
        break;
      }
      iVar10 = iVar10 + -1;
      lVar14 = lVar14 + 2;
    } while (lVar7 * 2 != lVar14);
  }
LAB_1444c302a:
  uVar2 = 0;
  goto LAB_1444c302c;
LAB_1444c30c7:
  uVar8 = *(ushort *)((longlong)puVar3 + lVar7);
  uVar17 = (ulonglong)uVar8;
  uVar9 = *(ushort *)((longlong)&DAT_14bc3291a + lVar7);
  if (uVar8 == uVar9) {
    if (uVar8 == 0) goto LAB_1444c310e;
LAB_1444c30dc:
    lVar7 = lVar7 + 2;
    goto LAB_1444c30c7;
  }
  if ((uVar9 | uVar8) < 0x80) {
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
    uVar13 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar13]) goto LAB_1444c30dc;
  }
  uVar2 = 0;
  if (uVar8 != uVar9) goto LAB_1444c3218;
LAB_1444c310e:
  if ((int)uVar11 < 5) {
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
    uVar11 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar11 = 0;
    }
    uVar6 = 5;
    if ((int)uVar11 < 5) {
      uVar6 = uVar11;
    }
    uVar17 = (ulonglong)uVar6;
    if ((int)uVar6 < 1) {
      uVar17 = 0;
    }
    uVar13 = (longlong)(int)uVar11;
    if ((longlong)(uVar18 & 0xffffffff) < (longlong)(int)uVar11) {
      uVar13 = uVar18 & 0xffffffff;
    }
    if ((longlong)uVar13 < (longlong)uVar17) {
      uVar13 = uVar17;
    }
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    FUN_14006620a(&local_58,puVar5 + uVar17,(int)uVar13 - (int)uVar17);
  }
  if (&local_58 == param_2) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  }
  uVar11 = *(int *)(param_1 + 1) - 1;
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
    uVar11 = 0;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  uVar6 = 1U - iVar10;
  if ((int)uVar11 <= (int)(1U - iVar10)) {
    uVar6 = uVar11;
  }
  uVar18 = (ulonglong)uVar6;
  if ((int)uVar6 < 1) {
    uVar18 = 0;
  }
  FUN_14006620a(&local_58,puVar5 + uVar18,uVar11 - (int)uVar18);
  uVar2 = FUN_14607a29e(&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1444c3218:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1444c302c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c3248 FUN_1444c3248 body=232 status=ok
// SIG undefined FUN_1444c3248(void)

bool FUN_1444c3248(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)(int)uVar1;
  if (param_2 != 0) {
    local_48 = L"cameras";
    local_40 = 7;
    plVar4 = (longlong *)FUN_14571608c(param_1[4]);
    lVar7 = plVar4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *plVar4;
      lVar8 = 0;
      do {
        puVar5 = (undefined8 *)(**(code **)**(undefined8 **)(lVar2 + lVar8))();
        FUN_14931e71c(param_3,*puVar5);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    }
  }
  bVar3 = true;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    lVar7 = uVar6 << 0x20;
    do {
      uVar6 = uVar6 + 1;
      bVar9 = *(int *)(*param_1 + (lVar7 >> 0x20) * 0x18) == 2;
      bVar3 = !bVar9;
      if (bVar9) break;
      lVar7 = lVar7 + 0x100000000;
    } while (uVar6 < (ulonglong)(longlong)(int)*(uint *)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1444c3332 FUN_1444c3332 body=232 status=ok
// SIG undefined FUN_1444c3332(void)

bool FUN_1444c3332(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)(int)uVar1;
  if (param_2 != 0) {
    local_48 = L"skins";
    local_40 = 5;
    plVar4 = (longlong *)FUN_14571608c(param_1[4]);
    lVar7 = plVar4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *plVar4;
      lVar8 = 0;
      do {
        puVar5 = (undefined8 *)(**(code **)**(undefined8 **)(lVar2 + lVar8))();
        FUN_14931f60c(param_3,*puVar5);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    }
  }
  bVar3 = true;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    lVar7 = uVar6 << 0x20;
    do {
      uVar6 = uVar6 + 1;
      bVar9 = *(int *)(*param_1 + (lVar7 >> 0x20) * 0x18) == 2;
      bVar3 = !bVar9;
      if (bVar9) break;
      lVar7 = lVar7 + 0x100000000;
    } while (uVar6 < (ulonglong)(longlong)(int)*(uint *)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1444c341c FUN_1444c341c body=232 status=ok
// SIG undefined FUN_1444c341c(void)

bool FUN_1444c341c(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)(int)uVar1;
  if (param_2 != 0) {
    local_48 = L"animations";
    local_40 = 10;
    plVar4 = (longlong *)FUN_14571608c(param_1[4]);
    lVar7 = plVar4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *plVar4;
      lVar8 = 0;
      do {
        puVar5 = (undefined8 *)(**(code **)**(undefined8 **)(lVar2 + lVar8))();
        FUN_14931ef62(param_3,*puVar5);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    }
  }
  bVar3 = true;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    lVar7 = uVar6 << 0x20;
    do {
      uVar6 = uVar6 + 1;
      bVar9 = *(int *)(*param_1 + (lVar7 >> 0x20) * 0x18) == 2;
      bVar3 = !bVar9;
      if (bVar9) break;
      lVar7 = lVar7 + 0x100000000;
    } while (uVar6 < (ulonglong)(longlong)(int)*(uint *)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1444c3506 FUN_1444c3506 body=265 status=ok
// SIG undefined FUN_1444c3506(void)

ulonglong FUN_1444c3506(longlong *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 1);
  uVar7 = (ulonglong)(int)uVar1;
  if (param_2 != 0) {
    local_50 = L"images";
    local_48 = 6;
    plVar3 = (longlong *)FUN_14571608c(param_1[4]);
    lVar8 = plVar3[1];
    if ((longlong)(int)lVar8 != 0) {
      lVar2 = *plVar3;
      unaff_RBX = param_3 + 1;
      lVar6 = 0;
      do {
        puVar4 = (undefined8 *)(**(code **)**(undefined8 **)(lVar2 + lVar6))();
        FUN_14931f8d8(*param_3,*puVar4,unaff_RBX,*(undefined1 *)(param_3 + 3));
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)lVar8 * 0x10 != lVar6);
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (uVar1 < *(uint *)(param_1 + 1)) {
    lVar8 = uVar7 << 0x20;
    do {
      uVar7 = uVar7 + 1;
      bVar9 = *(int *)(*param_1 + (lVar8 >> 0x20) * 0x18) == 2;
      uVar5 = CONCAT71((int7)(uVar5 >> 8),!bVar9);
      if (bVar9) break;
      lVar8 = lVar8 + 0x100000000;
    } while (uVar7 < (ulonglong)(longlong)(int)*(uint *)(param_1 + 1));
  }
  if (param_3[1] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1444c3610 FUN_1444c3610 body=232 status=ok
// SIG undefined FUN_1444c3610(void)

bool FUN_1444c3610(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)(int)uVar1;
  if (param_2 != 0) {
    local_48 = L"samplers";
    local_40 = 8;
    plVar4 = (longlong *)FUN_14571608c(param_1[4]);
    lVar7 = plVar4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *plVar4;
      lVar8 = 0;
      do {
        puVar5 = (undefined8 *)(**(code **)**(undefined8 **)(lVar2 + lVar8))();
        FUN_1493200aa(param_3,*puVar5);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    }
  }
  bVar3 = true;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    lVar7 = uVar6 << 0x20;
    do {
      uVar6 = uVar6 + 1;
      bVar9 = *(int *)(*param_1 + (lVar7 >> 0x20) * 0x18) == 2;
      bVar3 = !bVar9;
      if (bVar9) break;
      lVar7 = lVar7 + 0x100000000;
    } while (uVar6 < (ulonglong)(longlong)(int)*(uint *)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1444c36fa FUN_1444c36fa body=232 status=ok
// SIG undefined FUN_1444c36fa(void)

bool FUN_1444c36fa(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)(int)uVar1;
  if (param_2 != 0) {
    local_48 = L"textures";
    local_40 = 8;
    plVar4 = (longlong *)FUN_14571608c(param_1[4]);
    lVar7 = plVar4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *plVar4;
      lVar8 = 0;
      do {
        puVar5 = (undefined8 *)(**(code **)**(undefined8 **)(lVar2 + lVar8))();
        FUN_14932034e(param_3,*puVar5);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    }
  }
  bVar3 = true;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    lVar7 = uVar6 << 0x20;
    do {
      uVar6 = uVar6 + 1;
      bVar9 = *(int *)(*param_1 + (lVar7 >> 0x20) * 0x18) == 2;
      bVar3 = !bVar9;
      if (bVar9) break;
      lVar7 = lVar7 + 0x100000000;
    } while (uVar6 < (ulonglong)(longlong)(int)*(uint *)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1444c37e4 FUN_1444c37e4 body=232 status=ok
// SIG undefined FUN_1444c37e4(void)

bool FUN_1444c37e4(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = (ulonglong)(int)uVar1;
  if (param_2 != 0) {
    local_48 = L"materials";
    local_40 = 9;
    plVar4 = (longlong *)FUN_14571608c(param_1[4]);
    lVar7 = plVar4[1];
    if ((longlong)(int)lVar7 != 0) {
      lVar2 = *plVar4;
      lVar8 = 0;
      do {
        puVar5 = (undefined8 *)(**(code **)**(undefined8 **)(lVar2 + lVar8))();
        FUN_1493206b4(param_3,*puVar5);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    }
  }
  bVar3 = true;
  if (uVar1 < *(uint *)(param_1 + 1)) {
    lVar7 = uVar6 << 0x20;
    do {
      uVar6 = uVar6 + 1;
      bVar9 = *(int *)(*param_1 + (lVar7 >> 0x20) * 0x18) == 2;
      bVar3 = !bVar9;
      if (bVar9) break;
      lVar7 = lVar7 + 0x100000000;
    } while (uVar6 < (ulonglong)(longlong)(int)*(uint *)(param_1 + 1));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 1444c38ce FUN_1444c38ce body=110 status=ok
// SIG undefined FUN_1444c38ce(void)

undefined4 * FUN_1444c38ce(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 2);
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 1444c394d FUN_1444c394d body=239 status=ok
// SIG undefined FUN_1444c394d(void)

void FUN_1444c394d(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  
  switch(param_2) {
  case 1:
    lVar1 = 0;
    do {
      fVar2 = (float)(int)*(char *)(param_3 + lVar1) / 127.0;
      if (fVar2 <= -1.0) {
        fVar2 = -1.0;
      }
      *(float *)((longlong)param_1 + lVar1 * 4) = fVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    break;
  case 2:
    lVar1 = 0;
    do {
      *(float *)((longlong)param_1 + lVar1 * 4) = (float)*(byte *)(param_3 + lVar1) / 255.0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    break;
  case 3:
    lVar1 = 0;
    do {
      fVar2 = (float)(int)*(short *)(param_3 + lVar1 * 2) / 32767.0;
      if (fVar2 <= -1.0) {
        fVar2 = -1.0;
      }
      *(float *)((longlong)param_1 + lVar1 * 4) = fVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    break;
  case 4:
    lVar1 = 0;
    do {
      *(float *)((longlong)param_1 + lVar1 * 4) = (float)*(ushort *)(param_3 + lVar1 * 2) / 65535.0;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    break;
  default:
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  return;
}



// FUNCTION 1444c3a3c FUN_1444c3a3c body=117 status=ok
// SIG undefined FUN_1444c3a3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444c3a3c(undefined1 (*param_1) [16],undefined4 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3 = _DAT_149932320;
  *param_1 = _DAT_149932320;
  switch(param_2) {
  case 1:
    auVar3 = pmovsxbd(auVar3,*(undefined4 *)param_3);
    auVar1._0_4_ = (float)auVar3._0_4_;
    auVar1._4_4_ = (float)auVar3._4_4_;
    auVar1._8_4_ = (float)auVar3._8_4_;
    auVar1._12_4_ = (float)auVar3._12_4_;
    auVar3 = divps(auVar1,_DAT_149983f90);
    goto LAB_1444c3a82;
  case 2:
    auVar3 = pmovzxbd(auVar3,*(undefined4 *)param_3);
    auVar5._0_4_ = (float)auVar3._0_4_;
    auVar5._4_4_ = (float)auVar3._4_4_;
    auVar5._8_4_ = (float)auVar3._8_4_;
    auVar5._12_4_ = (float)auVar3._12_4_;
    auVar3 = divps(auVar5,_DAT_149983fc0);
    break;
  case 3:
    auVar3 = pmovsxwd(auVar3,*param_3);
    auVar2._0_4_ = (float)auVar3._0_4_;
    auVar2._4_4_ = (float)auVar3._4_4_;
    auVar2._8_4_ = (float)auVar3._8_4_;
    auVar2._12_4_ = (float)auVar3._12_4_;
    auVar3 = divps(auVar2,_DAT_1499357c0);
LAB_1444c3a82:
    auVar3 = maxps(auVar3,_DAT_1499319d0);
    break;
  case 4:
    auVar3 = pmovzxwd(auVar3,*param_3);
    auVar4._0_4_ = (float)auVar3._0_4_;
    auVar4._4_4_ = (float)auVar3._4_4_;
    auVar4._8_4_ = (float)auVar3._8_4_;
    auVar4._12_4_ = (float)auVar3._12_4_;
    auVar3 = divps(auVar4,_DAT_14adc1b60);
    break;
  default:
    goto switchD_1444c3a5e_default;
  }
  *param_1 = auVar3;
switchD_1444c3a5e_default:
  return;
}



// FUNCTION 1444c3ae4 FUN_1444c3ae4 body=701 status=ok
// SIG undefined FUN_1444c3ae4(void)

void FUN_1444c3ae4(float param_1,int param_2,char param_3,uint param_4,longlong param_5,
                  longlong param_6,void *param_7)

{
  bool bVar1;
  uint in_ECX;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  if (*(longlong *)(param_5 + 8) != 0) {
    if (param_2 == 6 && (in_ECX & 0xfffffff7) == 0) {
      memcpy(param_7,(void *)(*(longlong *)(param_5 + 8) + *(longlong *)(param_5 + 0x10) + param_6),
             (ulonglong)param_4 << 3);
      return;
    }
    if (param_3 == '\0') {
      if (param_4 != 0) {
        uVar4 = 0;
        do {
          if (param_2 - 1U < 6) {
            pfVar5 = (float *)((ulonglong)((int)uVar4 * in_ECX) + param_6 +
                              *(longlong *)(param_5 + 8) + *(longlong *)(param_5 + 0x10));
            switch(param_2) {
            case 1:
              lVar3 = 0;
              fVar7 = param_1;
              bVar1 = true;
              do {
                bVar2 = bVar1;
                param_1 = fVar7;
                fVar7 = (float)(int)*(char *)((longlong)pfVar5 + lVar3);
                lVar3 = 1;
                bVar1 = false;
              } while (bVar2);
              break;
            case 2:
              lVar3 = 0;
              fVar7 = param_1;
              bVar1 = true;
              do {
                bVar2 = bVar1;
                param_1 = fVar7;
                fVar7 = (float)*(byte *)((longlong)pfVar5 + lVar3);
                lVar3 = 1;
                bVar1 = false;
              } while (bVar2);
              break;
            case 3:
              lVar3 = 0;
              fVar7 = param_1;
              bVar1 = true;
              do {
                bVar2 = bVar1;
                param_1 = fVar7;
                fVar7 = (float)(int)*(short *)((longlong)pfVar5 + lVar3 * 2);
                lVar3 = 1;
                bVar1 = false;
              } while (bVar2);
              break;
            case 4:
              lVar3 = 0;
              fVar7 = param_1;
              bVar1 = true;
              do {
                bVar2 = bVar1;
                param_1 = fVar7;
                fVar7 = (float)*(ushort *)((longlong)pfVar5 + lVar3 * 2);
                lVar3 = 1;
                bVar1 = false;
              } while (bVar2);
              break;
            case 5:
              lVar3 = 0;
              fVar7 = param_1;
              bVar1 = true;
              do {
                bVar2 = bVar1;
                param_1 = fVar7;
                fVar7 = (float)(uint)pfVar5[lVar3];
                lVar3 = 1;
                bVar1 = false;
              } while (bVar2);
              break;
            case 6:
              param_1 = *pfVar5;
              fVar7 = pfVar5[1];
            }
          }
          else {
            param_1 = 0.0;
            fVar7 = 0.0;
          }
          *(float *)((longlong)param_7 + uVar4 * 8) = param_1;
          *(float *)((longlong)param_7 + uVar4 * 8 + 4) = fVar7;
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_4);
      }
    }
    else if (param_4 != 0) {
      uVar6 = 0;
      uVar4 = 0;
      do {
        if (3 < param_2 - 1U) {
          fVar8 = 0.0;
          fVar7 = 0.0;
          goto LAB_1444c3c44;
        }
        lVar3 = *(longlong *)(param_5 + 8) + *(longlong *)(param_5 + 0x10) + uVar6;
        switch(param_2) {
        case 1:
          fVar7 = (float)(int)*(char *)(lVar3 + param_6) / 127.0;
          if (fVar7 <= -1.0) {
            fVar7 = -1.0;
          }
          fVar8 = (float)(int)*(char *)(lVar3 + 1 + param_6) / 127.0;
          goto LAB_1444c3bf6;
        case 2:
          fVar7 = (float)*(byte *)(lVar3 + param_6) / 255.0;
          fVar8 = (float)*(byte *)(lVar3 + 1 + param_6) / 255.0;
          break;
        case 3:
          fVar7 = (float)(int)*(short *)(lVar3 + param_6) / 32767.0;
          if (fVar7 <= -1.0) {
            fVar7 = -1.0;
          }
          fVar8 = (float)(int)*(short *)(lVar3 + 2 + param_6) / 32767.0;
LAB_1444c3bf6:
          if (fVar8 <= -1.0) {
            fVar8 = -1.0;
          }
          break;
        case 4:
          fVar7 = (float)*(ushort *)(lVar3 + param_6) / 65535.0;
          fVar8 = (float)*(ushort *)(lVar3 + 2 + param_6) / 65535.0;
        }
LAB_1444c3c44:
        *(float *)((longlong)param_7 + uVar4 * 8) = fVar7;
        *(float *)((longlong)param_7 + uVar4 * 8 + 4) = fVar8;
        uVar4 = uVar4 + 1;
        uVar6 = (ulonglong)((int)uVar6 + in_ECX);
      } while (param_4 != uVar4);
    }
  }
  return;
}



// FUNCTION 1444c3da1 FUN_1444c3da1 body=646 status=ok
// SIG undefined FUN_1444c3da1(void)

void FUN_1444c3da1(int param_1,int param_2,char param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_60 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_5 + 8) != 0) {
    if (((param_1 == 0xc) || (param_1 == 0)) && (param_2 == 6)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    if (param_3 == '\0') {
      if (param_4 != 0) {
        uVar3 = 0;
        uVar4 = 0;
        do {
          uVar2 = (ulonglong)uVar3;
          if (param_2 - 1U < 6) {
            lVar7 = *(longlong *)(param_5 + 8);
            lVar1 = *(longlong *)(param_5 + 0x10);
            switch(param_2) {
            case 1:
              lVar5 = 0;
              do {
                *(float *)((longlong)&local_58 + lVar5 * 4) =
                     (float)(int)*(char *)(lVar1 + uVar2 + lVar7 + param_6 + lVar5);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 3);
              break;
            case 2:
              lVar5 = 0;
              do {
                *(float *)((longlong)&local_58 + lVar5 * 4) =
                     (float)*(byte *)(lVar1 + uVar2 + lVar7 + param_6 + lVar5);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 3);
              break;
            case 3:
              lVar5 = 0;
              do {
                *(float *)((longlong)&local_58 + lVar5 * 4) =
                     (float)(int)*(short *)(lVar1 + uVar2 + lVar7 + param_6 + lVar5 * 2);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 3);
              break;
            case 4:
              lVar5 = 0;
              do {
                *(float *)((longlong)&local_58 + lVar5 * 4) =
                     (float)*(ushort *)(lVar1 + uVar2 + lVar7 + param_6 + lVar5 * 2);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 3);
              break;
            case 5:
              lVar5 = 0;
              do {
                *(float *)((longlong)&local_58 + lVar5 * 4) =
                     (float)*(uint *)(lVar1 + uVar2 + lVar7 + param_6 + lVar5 * 4);
                lVar5 = lVar5 + 1;
              } while (lVar5 != 3);
              break;
            case 6:
              puVar6 = (undefined8 *)
                       ((ulonglong)(uint)((int)uVar4 * param_1) + param_6 + lVar7 + lVar1);
              local_50 = *(undefined4 *)(puVar6 + 1);
              local_58 = *puVar6;
            }
          }
          else {
            local_50 = 0;
            local_58 = 0;
          }
          *(undefined4 *)(param_7 + 8 + uVar4 * 0xc) = local_50;
          *(undefined8 *)(param_7 + uVar4 * 0xc) = local_58;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 + param_1;
        } while (uVar4 != param_4);
      }
    }
    else if (param_4 != 0) {
      uVar3 = 0;
      lVar7 = 0;
      do {
        FUN_1444c394d(&local_58,param_2,
                      (ulonglong)uVar3 + local_60 +
                      *(longlong *)(param_5 + 8) + *(longlong *)(param_5 + 0x10));
        *(undefined4 *)(param_7 + 8 + lVar7) = local_50;
        *(undefined8 *)(param_7 + lVar7) = local_58;
        lVar7 = lVar7 + 0xc;
        uVar3 = uVar3 + param_1;
      } while ((ulonglong)param_4 * 0xc != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444c4046 FUN_1444c4046 body=428 status=ok
// SIG undefined FUN_1444c4046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444c4046(uint param_1,int param_2,char param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  auVar4 = _DAT_14aa5aaa0;
  auVar3 = _DAT_1499827c0;
  auVar2 = _DAT_149932320;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_5 + 8) != 0) {
    if (param_2 == 6 && (param_1 & 0xffffffef) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
    if (param_3 == '\0') {
      if (param_4 != 0) {
        uVar5 = 0;
        lVar7 = 0;
        do {
          auVar9 = auVar2;
          if (5 < param_2 - 1U) goto LAB_1444c41d0;
          lVar6 = *(longlong *)(param_5 + 8) + *(longlong *)(param_5 + 0x10) + (ulonglong)uVar5;
          switch(param_2) {
          case 1:
            auVar8 = pmovsxbd(auVar2,*(undefined4 *)(lVar6 + param_6));
            break;
          case 2:
            auVar8 = pmovzxbd(auVar2,*(undefined4 *)(lVar6 + param_6));
            break;
          case 3:
            auVar8 = pmovsxwd(auVar2,*(undefined8 *)(lVar6 + param_6));
            break;
          case 4:
            auVar8 = pmovzxwd(auVar2,*(undefined8 *)(lVar6 + param_6));
            break;
          case 5:
            auVar9 = *(undefined1 (*) [16])(lVar6 + param_6);
            auVar10 = pblendw(auVar9,auVar3,0xaa);
            auVar8._0_4_ = auVar9._0_4_ >> 0x10;
            auVar8._4_4_ = auVar9._4_4_ >> 0x10;
            auVar8._8_4_ = auVar9._8_4_ >> 0x10;
            auVar8._12_4_ = auVar9._12_4_ >> 0x10;
            auVar8 = pblendw(auVar8,auVar4,0xaa);
            auVar9._0_4_ = (auVar8._0_4_ - 5.497642e+11) + auVar10._0_4_;
            auVar9._4_4_ = (auVar8._4_4_ - 5.497642e+11) + auVar10._4_4_;
            auVar9._8_4_ = (auVar8._8_4_ - 5.497642e+11) + auVar10._8_4_;
            auVar9._12_4_ = (auVar8._12_4_ - 5.497642e+11) + auVar10._12_4_;
            goto LAB_1444c41d0;
          case 6:
            auVar9 = *(undefined1 (*) [16])(lVar6 + param_6);
            goto LAB_1444c41d0;
          }
          auVar9._0_4_ = (float)auVar8._0_4_;
          auVar9._4_4_ = (float)auVar8._4_4_;
          auVar9._8_4_ = (float)auVar8._8_4_;
          auVar9._12_4_ = (float)auVar8._12_4_;
LAB_1444c41d0:
          *(undefined1 (*) [16])(param_7 + lVar7) = auVar9;
          lVar7 = lVar7 + 0x10;
          uVar5 = uVar5 + param_1;
        } while ((ulonglong)param_4 << 4 != lVar7);
      }
    }
    else if (param_4 != 0) {
      uVar5 = 0;
      lVar7 = 0;
      do {
        FUN_1444c3a3c(&local_58,param_2,
                      (ulonglong)uVar5 + param_6 +
                      *(longlong *)(param_5 + 8) + *(longlong *)(param_5 + 0x10));
        puVar1 = (undefined4 *)(param_7 + lVar7);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        lVar7 = lVar7 + 0x10;
        uVar5 = uVar5 + param_1;
      } while ((ulonglong)param_4 << 4 != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444c4212 FUN_1444c4212 body=614 status=ok
// SIG undefined FUN_1444c4212(void)

void FUN_1444c4212(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1444c428c;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1444c428c:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar13 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x28);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x24 + lVar12 * 0x28) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x28) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1444c4478 FUN_1444c4478 body=492 status=ok
// SIG undefined FUN_1444c4478(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444c4478(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [16];
  longlong alStack_68 [2];
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34 [4];
  undefined8 ***local_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined8 ***)0x800000014bc30130;
  local_30 = (undefined8 ***)CONCAT44(local_30._4_4_,8);
  uVar2 = FUN_14577453c(L"GLTFCore",&local_30);
  uStack_50._0_5_ = CONCAT14(1,uVar2);
  FUN_14671e77e(&local_58);
  FUN_140056680(&local_58,L"KHR_lights_punctual");
  FUN_140056680(&local_48,L"KHR_lights");
  local_28 = &local_38;
  local_30 = &local_58;
  FUN_141469cae(&DAT_14cc0c420,&local_30);
  lVar3 = 0x20;
  do {
    if (*(longlong *)((longlong)alStack_68 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  atexit(FUN_1444c1a8f);
  FUN_140056680(&local_30,L"KHR_materials_variants");
  uStack_50 = &local_20;
  local_58 = &local_30;
  FUN_141469cae(&DAT_14cc0c430,&local_58);
  if ((undefined8 ****)local_30 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1444c1ac0);
  local_28 = (undefined4 *)local_34;
  local_48 = 0x400000003;
  uStack_40 = 0x700000005;
  local_58 = (undefined8 ***)0x100000000;
  uStack_50 = (ulonglong *)0x20000000d;
  local_38 = 6;
  DAT_14cc0c5b0 = 0;
  DAT_14cc0c5b8 = 0;
  DAT_14cc0c590 = 0;
  _DAT_14cc0c598 = 0;
  _DAT_14cc0c5bc = 0xffffffff00000080;
  DAT_14cc0c5c4 = 0;
  DAT_14cc0c5d0 = 0;
  DAT_14cc0c5d8 = 0;
  local_30 = &local_58;
  FUN_145aba932();
  atexit(FUN_1444c23c5);
  DAT_14cc0c790 = (undefined8 *)0x0;
  DAT_14cc0c798 = 3;
  FUN_14671e8bc(&DAT_14cc0c790,3);
  puVar1 = DAT_14cc0c790;
  *DAT_14cc0c790 = 0x500000004;
  *(undefined4 *)(puVar1 + 1) = 6;
  atexit((_func_5014 *)&LAB_1444c23f4);
  _DAT_14cc0c7a0 = 0x2601;
  uRam000000014cc0c7a4 = 0x2601;
  uRam000000014cc0c7a8 = 0x2901;
  uRam000000014cc0c7ac = 0x2901;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444c4668 FUN_1444c4668 body=55 status=ok
// SIG undefined FUN_1444c4668(void)

void FUN_1444c4668(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0c9c8 == 0) {
    uVar1 = FUN_141462c9a();
    DAT_14cc0c9c8 = FUN_14171c317(FUN_14671e912,uVar1,L"EInterchangePropertyTracks");
  }
  return;
}



// FUNCTION 1444c469f FUN_1444c469f body=55 status=ok
// SIG undefined FUN_1444c469f(void)

void FUN_1444c469f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0c9e0 == 0) {
    uVar1 = FUN_141462c9a();
    DAT_14cc0c9e0 = FUN_14171c317(FUN_14671e941,uVar1,L"EInterchangeAnimationPayLoadType");
  }
  return;
}



// FUNCTION 1444c46d6 FUN_1444c46d6 body=55 status=ok
// SIG undefined FUN_1444c46d6(void)

void FUN_1444c46d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ca10 == 0) {
    uVar1 = FUN_141462c9a();
    DAT_14cc0ca10 = FUN_14171c317(FUN_14671e9cf,uVar1,L"EInterchangeAnimatedProperty");
  }
  return;
}



// FUNCTION 1444c470d FUN_1444c470d body=55 status=ok
// SIG undefined FUN_1444c470d(void)

void FUN_1444c470d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0cc50 == 0) {
    uVar1 = FUN_141462c9a();
    DAT_14cc0cc50 = FUN_14171c317(FUN_14671f58e,uVar1,L"EInterchangeCameraProjectionType");
  }
  return;
}



// FUNCTION 1444c4752 FUN_1444c4752 body=677 status=ok
// SIG undefined FUN_1444c4752(void)

void FUN_1444c4752(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_d0;
  longlong local_c0;
  longlong local_b8 [2];
  longlong local_a8 [3];
  longlong local_90 [2];
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1444c47f5;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar9 = iVar6 == iVar7;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x68);
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
      lVar8 = param_1 + 0x58;
      cVar5 = FUN_140c44378(*(longlong *)(param_1 + 0x50),lVar8);
      if ((cVar5 != '\0') &&
         ((((iVar6 = FUN_1419073b0(*(undefined8 *)(param_1 + 0x50),lVar8), iVar6 == 0xc &&
            (*(longlong *)(param_1 + 0x50) != 0)) &&
           (lVar8 = FUN_1493027c6(*(longlong *)(param_1 + 0x50),lVar8,&local_7c), lVar8 == 1)) &&
          (FUN_1493312e2(param_1,local_7c), 0 < local_7c)))) {
        iVar6 = 0;
        do {
          FUN_149330f68(param_1,&local_f0,iVar6);
          FUN_1444be0f2(local_a8 + 2,&local_f0,lVar4);
          if (local_f0 != 0) {
            FUN_1400020a8();
          }
          if (((local_a8[2] != 0) && (cVar5 = FUN_140c44378(local_a8[2],local_90), cVar5 != '\0'))
             && (iVar7 = FUN_1419073b0(local_a8[2],local_90), iVar7 == 0x12)) {
            local_a8[0] = 0;
            local_a8[1] = 0;
            if (local_a8[2] != 0) {
              FUN_1492ff8ec(local_a8[2],local_90,local_a8);
            }
            FUN_1493310e2(param_1,&local_f0,local_a8);
            FUN_1444be556(&local_c0,&local_f0,lVar4);
            if (local_f0 != 0) {
              FUN_1400020a8();
            }
            if (((local_c0 != 0) && (cVar5 = FUN_140c44378(local_c0,local_b8), cVar5 != '\0')) &&
               (iVar7 = FUN_1419073b0(local_c0,local_b8), iVar7 == 0x15)) {
              FUN_149331b46(&local_f0,0,local_a8 + 2,&local_c0);
              local_78 = local_a8;
              local_70 = &local_f0;
              FUN_1493316b0(param_1,local_64,&local_78,0);
              if (local_d0 != 0) {
                FUN_1400020a8();
              }
              if (local_e8 != 0) {
                FUN_1400020a8();
              }
            }
            if (local_b8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
          }
          if (local_90[0] != 0) {
            FUN_1400020a8();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_7c);
      }
    }
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
LAB_1444c47f5:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444c4a1a FUN_1444c4a1a body=159 status=ok
// SIG undefined FUN_1444c4a1a(void)

void FUN_1444c4a1a(void)

{
  FUN_14098d3d2(FUN_1444c4668,L"/Script/InterchangeNodes",L"EInterchangePropertyTracks",
                &DAT_14cc0c9c0);
  FUN_14282b410(L"/Script/InterchangeNodes",&PTR_FUN_14bc38cf0,6,&PTR_FUN_14bc38cc0,1,
                &PTR_FUN_14bc38c80,2);
  FUN_14282b410(L"/Script/InterchangeNodes",&PTR_FUN_14bc3ab60,2,0,0,&PTR_FUN_14bc3ab40,1);
  return;
}



// FUNCTION 1444c4abc FUN_1444c4abc body=55 status=ok
// SIG undefined FUN_1444c4abc(void)

void FUN_1444c4abc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0cd70 == 0) {
    uVar1 = FUN_141462c9a();
    DAT_14cc0cd70 = FUN_14171c317(FUN_14671fa8c,uVar1,L"EInterchangeLightUnits");
  }
  return;
}


