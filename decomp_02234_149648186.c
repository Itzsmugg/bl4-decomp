// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149648186 FUN_149648186 body=96 status=ok
// SIG undefined FUN_149648186(void)

void FUN_149648186(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  plVar2 = (longlong *)FUN_148451354(uVar1);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  if (-1 < *(int *)((longlong)param_1 + 0x22c)) {
    *(undefined4 *)(param_1 + 0x45) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  FUN_14967f212(param_1 + 0x44);
  return;
}



// FUNCTION 1496481e6 FUN_1496481e6 body=375 status=ok
// SIG undefined FUN_1496481e6(void)

void FUN_1496481e6(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (longlong *)0x0;
  plVar2 = (longlong *)FUN_1484c6256();
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar2);
  }
  *(undefined1 *)(plVar2 + 0x1a) = 0;
  local_30 = plVar2;
  if (0 < (int)param_1[0x15]) {
    lVar6 = 0;
    do {
      uVar3 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar6 * 8));
      (**(code **)(*plVar2 + 0x2a0))(plVar2,uVar3,1);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x15]);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar3 = FUN_148451354(uVar3);
  plVar4 = (longlong *)FUN_14843d06b(uVar3,0x3fe,param_1,local_48);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar4);
  }
  local_28 = plVar4;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar6 = lVar5 + 0x28;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  (**(code **)(*plVar4 + 800))(plVar4,plVar2,lVar6);
  *(undefined2 *)((longlong)local_28 + 0x82) = 0x100;
  iVar1 = (int)param_1[0x45];
  *(uint *)(param_1 + 0x45) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x22c) < iVar1 + 1U) {
    FUN_14967f18c(param_1 + 0x44,iVar1);
  }
  FUN_14967f138((longlong)iVar1 * 0x10 + param_1[0x44],&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964835e FUN_14964835e body=480 status=ok
// SIG undefined FUN_14964835e(void)

void FUN_14964835e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  code *local_c8;
  longlong *local_c0;
  code *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_1 + 0x1c0) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x1c8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x1d0) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x1d8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x1e0) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x1e8) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x1f0) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x1f8) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x200) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x208) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x210) = 0xffefffffffffffff;
  *(undefined8 *)(param_1 + 0x218) = 0xffefffffffffffff;
  uVar1 = *(uint *)(param_1 + 0xa8);
  if ((ulonglong)uVar1 == 1) {
    FUN_1485063a5(&local_a8,**(undefined8 **)(param_1 + 0xa0));
    plVar5 = &local_a8;
    plVar7 = (longlong *)(param_1 + 0x160);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar7 = *plVar5;
      plVar5 = plVar5 + 1;
      plVar7 = plVar7 + 1;
    }
    local_a0 = 0;
    local_a8 = 0x3e800000000;
    uVar2 = FUN_14850658d(**(undefined8 **)(param_1 + 0xa0),&local_a8);
    local_b8 = FUN_14456a7f0;
    local_b0 = &local_a8;
    local_a8 = param_1;
    FUN_14964ac0c(uVar2);
  }
  else {
    puVar4 = &DAT_14c846480;
    puVar6 = (undefined8 *)(param_1 + 0x160);
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        FUN_1485063a5(&local_a8,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 8));
        local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
        local_d8 = 0x3e800000000;
        uVar2 = FUN_14850658d(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 8),&local_d8);
        local_c8 = FUN_14456a97e;
        local_d8 = param_1;
        local_d0 = &local_a8;
        local_c0 = &local_d8;
        FUN_14964ac0c(uVar2,&local_c8);
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149648540 FUN_149648540 body=220 status=ok
// SIG undefined FUN_149648540(void)

void FUN_149648540(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
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
  undefined8 local_88;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*(longlong *)param_1[0x46] + 0x2a8))();
  (**(code **)(**(longlong **)param_1[0x44] + 0x2b0))(*(longlong **)param_1[0x44],&local_b8);
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_48 = local_88;
  local_40 = local_b8;
  uStack_3c = uStack_b4;
  uStack_38 = uStack_b0;
  uStack_34 = uStack_ac;
  local_30 = local_a8;
  uStack_2c = uStack_a4;
  uStack_28 = uStack_a0;
  uStack_24 = uStack_9c;
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar2 = (longlong *)FUN_148451354(uVar1);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  if (param_2 == '\x01') {
    FUN_14964861e(param_1,&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964861e FUN_14964861e body=9709 status=ok
// SIG undefined FUN_14964861e(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14964861e(longlong *param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  double *pdVar25;
  uint uVar26;
  wchar_t **ppwVar27;
  longlong lVar28;
  longlong lVar29;
  wchar_t **ppwVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  double dVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar51;
  double dVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  undefined1 auVar61 [16];
  double dVar63;
  double dVar64;
  wchar_t *pwVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar69;
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  undefined1 auVar85 [16];
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  undefined1 auVar93 [16];
  double dVar95;
  undefined1 auVar94 [16];
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  double dVar100;
  undefined1 auVar101 [16];
  undefined1 auStack_678 [32];
  undefined1 local_658;
  undefined1 local_650;
  undefined1 local_648 [16];
  wchar_t *local_638;
  double dStack_630;
  undefined1 local_628 [16];
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  longlong *local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8 [12];
  undefined4 uStack_5dc;
  undefined1 local_5c9;
  longlong local_5c8;
  undefined8 uStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  wchar_t *local_558;
  double dStack_550;
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_528 [16];
  undefined8 local_518;
  undefined8 uStack_510;
  double local_508;
  double dStack_500;
  longlong local_4f8;
  undefined8 uStack_4f0;
  longlong local_4e8;
  ulonglong uStack_4e0;
  undefined8 local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  wchar_t *local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  double dStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  double local_468;
  longlong lStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  wchar_t *local_1f8;
  double dStack_1f0;
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
  wchar_t *local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_678;
  if (0 < (int)param_1[0x15]) {
    local_648._0_8_ = param_2;
    lVar28 = 0;
    do {
      local_1f8 = (wchar_t *)((ulonglong)local_1f8 & 0xffffffffffffff00);
      param_4 = CONCAT71((int7)(param_4 >> 8),*(undefined1 *)(param_1[0x19] + 0xa8)) ^ 1;
      local_658 = 1;
      FUN_1485064b0(&local_4b8,*(undefined8 *)(param_1[0x14] + lVar28 * 8),&local_1f8,param_4);
      pwVar65 = local_4b8;
      lVar34 = (longlong)dStack_4b0._0_4_;
      if (lVar34 != 0) {
        lVar29 = 0;
        do {
          local_178 = (wchar_t **)CONCAT71(local_178._1_7_,local_1f8._0_1_);
          local_178 = (wchar_t **)
                      CONCAT44(*(undefined4 *)((longlong)pwVar65 + lVar29),(undefined4)local_178);
          dStack_170 = (double)((ulonglong)dStack_170 & 0xffffffffffffff00);
          FUN_14850658d(*(undefined8 *)(param_1[0x14] + lVar28 * 8),&local_178);
          lVar29 = lVar29 + 4;
        } while (lVar34 * 4 != lVar29);
      }
      if (local_4b8 != (wchar_t *)0x0) {
        FUN_1400020a8(local_4b8);
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 < (int)param_1[0x15]);
    param_2 = (undefined8 *)local_648._0_8_;
  }
  local_4e8 = 0;
  uStack_4e0 = 0;
  FUN_14964b71c();
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_538 = *param_2;
  uStack_530 = param_2[1];
  local_558 = (wchar_t *)param_2[3];
  dStack_550 = (double)param_2[4];
  local_548 = *(undefined1 (*) [16])(param_2 + 5);
  local_528._8_8_ = 0;
  local_528._0_8_ = param_2[2];
  local_518 = 0x3ff0000000000000;
  uStack_510 = 0x3ff0000000000000;
  local_508 = 1.0;
  dStack_500 = 0.0;
  FUN_14964b796(param_2,&local_5b8);
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_600 = param_1;
  if (0 < (int)param_1[0x15]) {
    lVar28 = 0;
    do {
      ppwVar27 = *(wchar_t ***)(param_1[0x14] + lVar28 * 8);
      FUN_1485063a5(&local_4b8);
      uVar35 = uStack_5c0;
      lVar34 = (longlong)(int)uStack_5c0;
      uVar18 = (int)uStack_5c0 + 1;
      uStack_5c0 = CONCAT44(uStack_5c0._4_4_,uVar18);
      if (uStack_5c0._4_4_ < uVar18) {
        ppwVar27 = (wchar_t **)(uVar35 & 0xffffffff);
        FUN_144a2c682(&local_5c8);
      }
      ppwVar30 = &local_4b8;
      puVar31 = (undefined8 *)(lVar34 * 0x60 + local_5c8);
      for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
        *puVar31 = *ppwVar30;
        ppwVar30 = ppwVar30 + 1;
        puVar31 = puVar31 + 1;
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 < (int)param_1[0x15]);
    if (0 < (int)param_1[0x15]) {
      lVar34 = 0;
      lVar28 = 0;
      uVar35 = 0;
      do {
        iVar19 = (int)ppwVar27;
        lVar29 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + uVar35 * 8));
        if (lVar29 == 0) {
LAB_14964890d:
          auVar58 = _DAT_149934d80;
          uVar18 = *(uint *)(param_1[0x1b] + uVar35 * 4);
          dVar46 = local_578._0_8_;
          dVar47 = local_578._8_8_;
          dVar52 = local_568._0_8_;
          dVar53 = local_568._8_8_;
          dVar64 = (double)DAT_149934d80;
          dVar45 = DAT_149934d80._8_8_;
          if (uVar35 == uVar18) {
            local_648 = *(undefined1 (*) [16])(local_5c8 + 0x40 + lVar28);
            auVar43 = *(undefined1 (*) [16])(local_5c8 + 0x50 + lVar28);
            dVar54 = auVar43._0_8_;
            auVar56 = minpd(local_648,local_578);
            auVar66 = minpd(auVar43,local_568);
            auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
            auVar57._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
            iVar23 = movmskpd(uVar18,auVar57);
            auVar67._8_8_ = -(ulonglong)(auVar66._8_8_ < 0.0);
            auVar67._0_8_ = -(ulonglong)(auVar66._0_8_ < 0.0);
            uVar18 = movmskpd(iVar19,auVar67);
            if ((uVar18 & 0x3fffffff) == 0 && iVar23 == 0) {
              dVar64 = *(double *)(local_5c8 + lVar28);
              dVar45 = ((double *)(local_5c8 + lVar28))[1];
              pdVar25 = (double *)(local_5c8 + 0x10 + lVar28);
              dVar51 = *pdVar25;
              dVar88 = pdVar25[1];
              dVar83 = dVar45 * local_5a8 * -1.0 +
                       dVar51 * dStack_5b0 + dVar88 * local_5b8 * 1.0 + dVar64 * dStack_5a0;
              dVar42 = dVar64 * local_5a8 * 1.0 +
                       dVar88 * dStack_5b0 + dVar51 * local_5b8 * -1.0 + dVar45 * dStack_5a0;
              auVar101._0_8_ =
                   dVar88 * local_5a8 * 1.0 +
                   ((local_5b8 * dVar45 * 1.0 + dVar51 * dStack_5a0) - dVar64 * dStack_5b0);
              auVar101._8_8_ =
                   dVar51 * local_5a8 * -1.0 +
                   ((local_5b8 * dVar64 * -1.0 + dVar88 * dStack_5a0) - dVar45 * dStack_5b0);
              pdVar25 = (double *)(local_5c8 + 0x20 + lVar28);
              dVar51 = *pdVar25 * dVar46;
              dVar88 = pdVar25[1] * dVar47;
              dVar64 = *(double *)(local_5c8 + 0x30 + lVar28) * dVar52;
              dVar63 = dVar88 * local_5b8 - dStack_5b0 * dVar51;
              dVar69 = dVar64 * dStack_5b0 - local_5a8 * dVar88;
              dVar45 = dVar51 * local_5a8 - local_5b8 * dVar64;
              dVar69 = dVar69 + dVar69;
              dVar45 = dVar45 + dVar45;
              dVar63 = dVar63 + dVar63;
              auVar93._0_8_ =
                   (dVar63 * dStack_5b0 - local_5a8 * dVar45) + dStack_5a0 * dVar69 + dVar51 +
                   local_598;
              auVar93._8_8_ =
                   (dVar69 * local_5a8 - dVar63 * local_5b8) + dStack_5a0 * dVar45 + dVar88 +
                   dStack_590;
              dVar45 = (dVar45 * local_5b8 - dStack_5b0 * dVar69) + dStack_5a0 * dVar63 + dVar64 +
                       local_588;
              stack0xfffffffffffffa20 = dVar47 * (double)local_648._8_8_;
              local_5e8._0_8_ = dVar46 * (double)local_648._0_8_;
              local_628._8_8_ = dVar53 * auVar43._8_8_;
              local_628._0_8_ = dVar52 * dVar54;
              ppwVar27 = (wchar_t **)0x0;
              dVar64 = (double)local_648._0_8_;
              dVar46 = (double)local_648._8_8_;
            }
            else {
              dVar53 = auVar43._8_8_ * dVar53;
              dVar42 = dStack_5b0 + dStack_5b0;
              dVar63 = local_5a8 + local_5a8;
              dVar51 = local_5b8 * (local_5b8 + local_5b8);
              local_128 = (1.0 - (dVar51 + dStack_5b0 * dVar42)) * dVar52;
              dVar69 = (local_5b8 + local_5b8) * dStack_5a0;
              local_138 = (dVar42 * dStack_5a0 + local_5b8 * dVar63) * dVar52;
              dVar88 = (double)local_648._0_8_ * dVar46;
              dVar83 = (double)local_648._8_8_ * dVar47;
              local_158 = (dVar42 * local_5b8 - dVar63 * dStack_5a0) * dVar47;
              dStack_130 = (dVar63 * dStack_5b0 - dVar69) * dVar52;
              local_178 = (wchar_t **)
                          ((dVar64 - (local_5a8 * dVar63 + dStack_5b0 * dVar42)) * dVar46);
              dStack_150 = (dVar45 - (local_5a8 * dVar63 + dVar51)) * dVar47;
              dStack_170 = (dVar42 * local_5b8 + dVar63 * dStack_5a0) * dVar46;
              local_148 = (dVar63 * dStack_5b0 + dVar69) * dVar47;
              local_168 = (local_5b8 * dVar63 - dVar42 * dStack_5a0) * dVar46;
              uStack_160 = 0;
              uStack_140 = 0;
              uStack_120 = 0;
              local_118 = local_598;
              dStack_110 = dStack_590;
              local_108 = local_588;
              uStack_100 = 0x3ff0000000000000;
              dVar46 = *(double *)(local_5c8 + lVar28);
              dVar47 = ((double *)(local_5c8 + lVar28))[1];
              dVar51 = *(double *)(local_5c8 + 0x10 + lVar28);
              pdVar25 = (double *)(local_5c8 + 0x40 + lVar28);
              local_1e8 = *pdVar25;
              local_1d8 = pdVar25[1];
              dStack_1b0 = *(double *)(local_5c8 + 0x50 + lVar28);
              dVar63 = dVar47 + dVar47;
              dVar42 = dVar51 + dVar51;
              dVar69 = dVar46 * (dVar46 + dVar46);
              local_1f8 = (wchar_t *)((dVar64 - (dVar51 * dVar42 + dVar47 * dVar63)) * local_1e8);
              dStack_1d0 = (dVar45 - (dVar51 * dVar42 + dVar69)) * local_1d8;
              local_1a8 = (1.0 - (dVar69 + dVar47 * dVar63)) * dStack_1b0;
              dVar69 = *(double *)(local_5c8 + lVar28) * dVar42;
              pdVar25 = (double *)(local_5c8 + 0x18 + lVar28);
              dVar64 = *pdVar25;
              dVar45 = dVar42 * dVar64;
              dVar51 = (dVar46 + dVar46) * *pdVar25;
              dVar64 = dVar63 * dVar64;
              dStack_1f0 = (dVar63 * dVar46 + dVar45) * local_1e8;
              local_1c8 = (dVar42 * dVar47 + dVar51) * local_1d8;
              local_1b8 = (dVar64 + dVar69) * dStack_1b0;
              local_1e8 = (dVar69 - dVar64) * local_1e8;
              local_1d8 = (dVar63 * dVar46 - dVar45) * local_1d8;
              dStack_1b0 = (dVar42 * dVar47 - dVar51) * dStack_1b0;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              pdVar25 = (double *)(local_5c8 + 0x20 + lVar28);
              local_198 = (wchar_t *)*pdVar25;
              dStack_190 = pdVar25[1];
              local_188 = *(double *)(local_5c8 + 0x30 + lVar28);
              uStack_180 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_4b8,&local_1f8,&local_178);
              FUN_144a1c686(&local_4b8,0x3e45798ee0000000);
              local_5e8._8_4_ = SUB84(dVar83,0);
              local_5e8._0_8_ = dVar88;
              uStack_5dc = (int)((ulonglong)dVar83 >> 0x20);
              auVar38._8_8_ = -(ulonglong)(0.0 <= dVar83);
              auVar38._0_8_ = -(ulonglong)(0.0 <= dVar88);
              auVar43 = blendvpd(_DAT_149936790,auVar58,auVar38);
              local_628._8_4_ = SUB84(dVar53,0);
              local_628._0_8_ = dVar54 * dVar52;
              local_628._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
              uVar36 = -(ulonglong)(0.0 <= dVar54 * dVar52);
              dVar64 = (double)(~uVar36 & 0xbff0000000000000 | uVar36 & 0x3ff0000000000000);
              dVar46 = auVar43._0_8_;
              local_4a8 = local_4a8 * dVar46;
              dStack_4b0 = dStack_4b0 * dVar46;
              local_4b8 = (wchar_t *)((double)local_4b8 * dVar46);
              dVar46 = auVar43._8_8_;
              local_498._8_8_ = (double)local_498._8_8_ * dVar46;
              local_498._0_8_ = dVar46 * (double)local_498._0_8_;
              local_488._0_8_ = (double)local_488._0_8_ * dVar46;
              local_468 = local_468 * dVar64;
              local_478._8_8_ = (double)local_478._8_8_ * dVar64;
              local_478._0_8_ = dVar64 * (double)local_478._0_8_;
              ppwVar27 = &local_4b8;
              FUN_14481fd10(&local_4d8);
              dVar64 = (double)CONCAT44(local_4d8._4_4_,(undefined4)local_4d8);
              dVar46 = local_4c8 * local_4c8 + dVar64 * dVar64;
              dVar52 = dStack_4c0 * dStack_4c0 + dStack_4d0 * dStack_4d0;
              auVar48._0_8_ = dVar46 + dVar52;
              auVar48._8_8_ = dVar46 + dVar52;
              auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
              auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
              auVar43 = sqrtpd(auVar48,auVar48);
              auVar58 = divpd(auVar58,auVar43);
              auVar59._0_8_ = auVar58._0_8_ * local_4c8;
              auVar59._8_8_ = auVar58._8_8_ * dStack_4c0;
              auVar101 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar39);
              dVar83 = (double)((ulonglong)(dVar64 * auVar58._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
              dVar42 = (double)((ulonglong)(dStack_4d0 * auVar58._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
              auVar93._8_8_ = dStack_450;
              auVar93._0_8_ = local_458;
              pdVar25 = (double *)(local_5c8 + 0x40 + lVar28);
              dVar54 = *(double *)(local_5c8 + 0x50 + lVar28);
              dVar64 = *pdVar25;
              dVar46 = pdVar25[1];
              dVar45 = local_448;
            }
            lVar29 = local_4e8;
            local_618 = (undefined4)DAT_14c846510;
            uStack_614 = DAT_14c846510._4_4_;
            local_638 = (wchar_t *)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
            local_648._0_8_ = DAT_14c846520;
            local_178 = DAT_14c8464e0;
            dStack_170 = DAT_14c8464e8;
            local_168 = DAT_14c8464f0;
            local_488 = local_528;
            local_498._8_8_ = uStack_530;
            local_498._0_8_ = local_538;
            local_4a8 = (double)local_548._0_8_;
            dStack_4a0 = (double)local_548._8_8_;
            local_4b8 = local_558;
            dStack_4b0 = dStack_550;
            local_5f8 = local_518;
            uVar33 = local_5f8;
            uStack_5f0 = uStack_510;
            uVar16 = uStack_5f0;
            dVar52 = ABS(auVar101._0_8_);
            iVar19 = (((uint)(ABS(dVar83) <= 0.0001) - (uint)(0.0001 < ABS(dVar42))) + 2) -
                     (uint)(0.0001 < dVar52);
            bVar8 = true;
            uVar76 = (undefined4)((ulonglong)dVar64 >> 0x20);
            uVar79 = (undefined4)((ulonglong)dVar46 >> 0x20);
            if (iVar19 != 3) {
              if ((1e-08 < ABS(dVar46 - dVar54)) || (1e-08 < ABS(dVar64 - dVar46))) {
                if (iVar19 == 2) {
                  if (((ABS(dVar83) <= 0.0001) || (1e-08 < ABS(dVar46 - dVar54))) &&
                     ((ABS(dVar42) <= 0.0001 || (1e-08 < ABS(dVar64 - dVar54))))) {
                    bVar8 = ABS(dVar64 - dVar46) <= 1e-08 && 0.0001 < dVar52;
                  }
                }
                else {
                  bVar8 = false;
                }
              }
            }
            uVar36 = -(ulonglong)(-dVar64 <= dVar64);
            dVar53 = (double)(-(ulonglong)
                               (1e-08 < (double)(uVar36 & (ulonglong)dVar64 |
                                                ~uVar36 & (ulonglong)-dVar64)) &
                             (ulonglong)(1.0 / dVar64));
            uVar36 = -(ulonglong)(-dVar46 <= dVar46);
            pwVar65 = (wchar_t *)
                      (-(ulonglong)
                        (1e-08 < (double)(uVar36 & (ulonglong)dVar46 | ~uVar36 & (ulonglong)-dVar46)
                        ) & (ulonglong)(1.0 / dVar46));
            uVar36 = -(ulonglong)(-dVar54 <= dVar54);
            dVar47 = (double)(-(ulonglong)
                               (1e-08 < (double)(uVar36 & (ulonglong)dVar54 |
                                                ~uVar36 & (ulonglong)-dVar54)) &
                             (ulonglong)(1.0 / dVar54));
            dVar52 = DAT_14c846520;
            if (bVar8) {
              dVar45 = dVar45 * dVar47;
              dVar47 = auVar93._0_8_;
              auVar93._8_8_ = auVar93._8_8_ * (double)pwVar65;
              auVar93._0_8_ = dVar53 * dVar47;
              uVar75 = SUB84(dVar64,0);
              uVar77 = uVar76;
              uVar78 = SUB84(dVar46,0);
              uVar80 = uVar79;
              uVar96 = (undefined4)DAT_14c846510;
              uVar97 = DAT_14c846510._4_4_;
              uVar98 = (undefined4)DAT_14c846518;
              uVar99 = DAT_14c846518._4_4_;
              dVar51 = DAT_14c846520;
              dVar88 = dVar54;
              dVar63 = 0.0;
            }
            else {
              local_5f8._0_4_ = (undefined4)local_518;
              local_5f8._4_4_ = (undefined4)((ulonglong)local_518 >> 0x20);
              uStack_5f0._0_4_ = (undefined4)uStack_510;
              uStack_5f0._4_4_ = (undefined4)((ulonglong)uStack_510 >> 0x20);
              uVar75 = (undefined4)local_5f8;
              uVar77 = local_5f8._4_4_;
              uVar78 = (undefined4)uStack_5f0;
              uVar80 = uStack_5f0._4_4_;
              uVar96 = local_5e8._0_4_;
              uVar97 = local_5e8._4_4_;
              uVar98 = local_5e8._8_4_;
              uVar99 = uStack_5dc;
              dVar51 = (double)local_628._0_8_;
              dVar88 = local_508;
              dVar63 = dStack_500;
              if (((dVar53 != 0.0) || (NAN(dVar53))) &&
                 ((((double)pwVar65 != 0.0 || (NAN((double)pwVar65))) &&
                  ((dVar47 != 0.0 || (NAN(dVar47))))))) {
                local_618 = SUB84(dVar53,0);
                uStack_614 = (undefined4)((ulonglong)dVar53 >> 0x20);
                uVar75 = SUB84(dVar64,0);
                uVar77 = uVar76;
                uVar78 = SUB84(dVar46,0);
                uVar80 = uVar79;
                dVar52 = dVar47;
                dVar88 = dVar54;
                dVar63 = 0.0;
                local_638 = pwVar65;
              }
            }
            lVar20 = local_4e8 + lVar34;
            uVar18 = *(uint *)(local_4e8 + 0xa8 + lVar34);
            *(uint *)(local_4e8 + 0xa8 + lVar34) = uVar18 + 1;
            local_5f8 = uVar33;
            uStack_5f0 = uVar16;
            if (*(uint *)(local_4e8 + 0xac + lVar34) < uVar18 + 1) {
              ppwVar27 = (wchar_t **)(ulonglong)uVar18;
              FUN_1484d6da4(lVar20);
            }
            param_1 = local_600;
            lVar21 = *(longlong *)(lVar29 + 0xa0 + lVar34);
            if (lVar21 == 0) {
              lVar21 = lVar20;
            }
            lVar24 = (longlong)(int)uVar18 * 0x50;
            *(double *)(lVar21 + lVar24) = dVar83;
            *(double *)(lVar21 + 8 + lVar24) = dVar42;
            *(double *)(lVar21 + 0x10 + lVar24) = auVar101._0_8_;
            *(longlong *)(lVar21 + 0x18 + lVar24) = auVar101._8_8_;
            *(undefined1 (*) [16])(lVar21 + 0x20 + lVar24) = auVar93;
            *(double *)(lVar21 + 0x30 + lVar24) = dVar45;
            puVar1 = (undefined4 *)(lVar21 + 0x38 + lVar24);
            *puVar1 = uVar96;
            puVar1[1] = uVar97;
            puVar1[2] = uVar98;
            puVar1[3] = uVar99;
            *(double *)(lVar21 + 0x48 + lVar24) = dVar51;
            if (!bVar8) {
              uVar18 = *(uint *)(lVar20 + 0xa8);
              *(uint *)(lVar20 + 0xa8) = uVar18 + 1;
              if (*(uint *)(lVar20 + 0xac) < uVar18 + 1) {
                ppwVar27 = (wchar_t **)(ulonglong)uVar18;
                FUN_1484d6da4(lVar20);
              }
              lVar29 = *(longlong *)(lVar29 + 0xa0 + lVar34);
              if (lVar29 != 0) {
                lVar20 = lVar29;
              }
              lVar29 = (longlong)(int)uVar18 * 0x50;
              *(undefined8 *)(lVar20 + lVar29) = 0;
              ((undefined8 *)(lVar20 + lVar29))[1] = 0;
              *(undefined8 *)(lVar20 + 0x10 + lVar29) = 0;
              *(undefined8 *)(lVar20 + 0x18 + lVar29) = 0x3ff0000000000000;
              puVar31 = (undefined8 *)(lVar20 + 0x20 + lVar29);
              *puVar31 = local_178;
              puVar31[1] = dStack_170;
              *(double *)(lVar20 + 0x30 + lVar29) = local_168;
              *(ulonglong *)(lVar20 + 0x38 + lVar29) = CONCAT44(uStack_614,local_618);
              *(wchar_t **)(lVar20 + 0x40 + lVar29) = local_638;
              *(double *)(lVar20 + 0x48 + lVar29) = dVar52;
            }
            uVar36 = uStack_4f0;
            lVar29 = (longlong)(int)uStack_4f0;
            uVar18 = (int)uStack_4f0 + 1;
            uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar18);
            if (uStack_4f0._4_4_ < uVar18) {
              ppwVar27 = (wchar_t **)(uVar36 & 0xffffffff);
              FUN_144a2c682(&local_4f8);
            }
            lVar29 = lVar29 * 0x60;
            *(undefined1 (*) [16])(local_4f8 + 0x30 + lVar29) = local_488;
            *(undefined1 (*) [16])(local_4f8 + 0x20 + lVar29) = local_498;
            pdVar25 = (double *)(local_4f8 + 0x10 + lVar29);
            *pdVar25 = local_4a8;
            pdVar25[1] = dStack_4a0;
            *(double *)(local_4f8 + lVar29) = (double)local_4b8;
            ((double *)(local_4f8 + lVar29))[1] = dStack_4b0;
            puVar1 = (undefined4 *)(local_4f8 + 0x40 + lVar29);
            *puVar1 = uVar75;
            puVar1[1] = uVar77;
            puVar1[2] = uVar78;
            puVar1[3] = uVar80;
            pdVar25 = (double *)(local_4f8 + 0x50 + lVar29);
            *pdVar25 = dVar88;
            pdVar25[1] = dVar63;
          }
          else {
            lVar29 = (longlong)(int)uVar18 * 0x60;
            pdVar25 = (double *)(local_5c8 + lVar29);
            auVar43 = *(undefined1 (*) [16])(local_5c8 + 0x40 + lVar29);
            auVar56 = *(undefined1 (*) [16])(local_5c8 + 0x50 + lVar29);
            auVar66 = minpd(auVar43,local_578);
            auVar60 = minpd(auVar56,local_568);
            auVar44._8_8_ = -(ulonglong)(auVar66._8_8_ < 0.0);
            auVar44._0_8_ = -(ulonglong)(auVar66._0_8_ < 0.0);
            iVar19 = movmskpd((int)local_5c8,auVar44);
            auVar66._8_8_ = -(ulonglong)(auVar60._8_8_ < 0.0);
            auVar66._0_8_ = -(ulonglong)(auVar60._0_8_ < 0.0);
            uVar26 = movmskpd((int)lVar29,auVar66);
            local_618 = 0;
            uStack_614 = 0;
            uStack_610 = 0;
            uStack_60c = 0x3ff00000;
            if ((uVar26 & 0x3fffffff) == 0 && iVar19 == 0) {
              dVar64 = *pdVar25;
              dVar51 = pdVar25[1];
              dVar88 = pdVar25[2];
              dVar83 = pdVar25[3];
              dVar54 = dVar51 * local_5a8 * -1.0 +
                       dVar88 * dStack_5b0 + dVar83 * local_5b8 * 1.0 + dVar64 * dStack_5a0;
              dVar45 = dVar64 * local_5a8 * 1.0 +
                       dVar83 * dStack_5b0 + dVar88 * local_5b8 * -1.0 + dVar51 * dStack_5a0;
              auVar58._0_8_ =
                   dVar83 * local_5a8 * 1.0 +
                   ((local_5b8 * dVar51 * 1.0 + dVar88 * dStack_5a0) - dVar64 * dStack_5b0);
              auVar58._8_8_ =
                   dVar88 * local_5a8 * -1.0 +
                   ((local_5b8 * dVar64 * -1.0 + dVar83 * dStack_5a0) - dVar51 * dStack_5b0);
              dVar64 = pdVar25[4] * dVar46;
              dVar51 = pdVar25[5] * dVar47;
              dVar63 = pdVar25[6] * dVar52;
              dVar88 = dVar51 * local_5b8 - dStack_5b0 * dVar64;
              dVar83 = dVar63 * dStack_5b0 - local_5a8 * dVar51;
              dVar42 = dVar64 * local_5a8 - local_5b8 * dVar63;
              dVar83 = dVar83 + dVar83;
              dVar42 = dVar42 + dVar42;
              dVar88 = dVar88 + dVar88;
              auVar71._0_8_ = auVar56._0_8_ * dVar52;
              auVar71._8_8_ = auVar56._8_8_ * dVar53;
              uVar76 = 0xe0000000;
              uVar79 = 0x3e45798e;
              uVar75 = 0xe0000000;
              uVar77 = 0x3e45798e;
              uVar78 = 0;
              dVar64 = (dVar88 * dStack_5b0 - local_5a8 * dVar42) + dStack_5a0 * dVar83 + dVar64 +
                       local_598;
              dVar52 = (dVar83 * local_5a8 - dVar88 * local_5b8) + dStack_5a0 * dVar42 + dVar51 +
                       dStack_590;
              dVar53 = (dVar42 * local_5b8 - dStack_5b0 * dVar83) + dStack_5a0 * dVar88 + dVar63 +
                       local_588;
            }
            else {
              auVar71._0_8_ = auVar56._0_8_ * dVar52;
              auVar71._8_8_ = auVar56._8_8_ * dVar53;
              dVar53 = dStack_5b0 + dStack_5b0;
              dVar54 = local_5a8 + local_5a8;
              dVar88 = local_5b8 * (local_5b8 + local_5b8);
              local_128 = (1.0 - (dVar88 + dStack_5b0 * dVar53)) * dVar52;
              dVar51 = (local_5b8 + local_5b8) * dStack_5a0;
              local_138 = (dVar53 * dStack_5a0 + local_5b8 * dVar54) * dVar52;
              local_158 = (dVar53 * local_5b8 - dVar54 * dStack_5a0) * dVar47;
              dStack_130 = (dVar54 * dStack_5b0 - dVar51) * dVar52;
              local_178 = (wchar_t **)
                          ((dVar64 - (local_5a8 * dVar54 + dStack_5b0 * dVar53)) * dVar46);
              dStack_150 = (dVar45 - (local_5a8 * dVar54 + dVar88)) * dVar47;
              dStack_170 = (dVar53 * local_5b8 + dVar54 * dStack_5a0) * dVar46;
              local_148 = (dVar54 * dStack_5b0 + dVar51) * dVar47;
              local_168 = (local_5b8 * dVar54 - dVar53 * dStack_5a0) * dVar46;
              uStack_160 = 0;
              uStack_140 = 0;
              uStack_120 = 0;
              local_118 = local_598;
              dStack_110 = dStack_590;
              local_108 = local_588;
              uStack_100 = 0x3ff0000000000000;
              dVar52 = *pdVar25;
              dVar53 = pdVar25[1];
              dVar54 = pdVar25[2];
              local_1e8 = pdVar25[8];
              local_1d8 = pdVar25[9];
              dStack_1b0 = pdVar25[10];
              dVar88 = dVar53 + dVar53;
              dVar51 = dVar54 + dVar54;
              dVar83 = dVar52 * (dVar52 + dVar52);
              local_1f8 = (wchar_t *)((dVar64 - (dVar54 * dVar51 + dVar53 * dVar88)) * local_1e8);
              dStack_1d0 = (dVar45 - (dVar54 * dVar51 + dVar83)) * local_1d8;
              local_1a8 = (1.0 - (dVar83 + dVar53 * dVar88)) * dStack_1b0;
              dVar64 = pdVar25[3];
              dVar45 = dVar51 * dVar64;
              dVar54 = (dVar52 + dVar52) * pdVar25[3];
              dVar64 = dVar88 * dVar64;
              dStack_1f0 = (dVar88 * dVar52 + dVar45) * local_1e8;
              local_1c8 = (dVar51 * dVar53 + dVar54) * local_1d8;
              local_1b8 = (dVar64 + *pdVar25 * dVar51) * dStack_1b0;
              local_1e8 = (*pdVar25 * dVar51 - dVar64) * local_1e8;
              local_1d8 = (dVar88 * dVar52 - dVar45) * local_1d8;
              dStack_1b0 = (dVar51 * dVar53 - dVar54) * dStack_1b0;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = (wchar_t *)pdVar25[4];
              dStack_190 = pdVar25[5];
              local_188 = pdVar25[6];
              uStack_180 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_4b8,&local_1f8,&local_178);
              FUN_144a1c686(&local_4b8,0x3e45798ee0000000);
              auVar56._8_8_ = -(ulonglong)(0.0 <= auVar43._8_8_ * dVar47);
              auVar56._0_8_ = -(ulonglong)(0.0 <= auVar43._0_8_ * dVar46);
              auVar56 = blendvpd(_DAT_149936790,auVar58,auVar56);
              dVar64 = (double)(~-(ulonglong)(0.0 <= auVar71._0_8_) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= auVar71._0_8_) & 0x3ff0000000000000);
              dVar52 = auVar56._0_8_;
              local_4a8 = local_4a8 * dVar52;
              dStack_4b0 = dStack_4b0 * dVar52;
              local_4b8 = (wchar_t *)((double)local_4b8 * dVar52);
              dVar52 = auVar56._8_8_;
              local_498._8_8_ = (double)local_498._8_8_ * dVar52;
              local_498._0_8_ = dVar52 * (double)local_498._0_8_;
              local_488._0_8_ = (double)local_488._0_8_ * dVar52;
              local_468 = local_468 * dVar64;
              local_478._8_8_ = (double)local_478._8_8_ * dVar64;
              local_478._0_8_ = dVar64 * (double)local_478._0_8_;
              pdVar25 = (double *)&local_4d8;
              ppwVar27 = &local_4b8;
              iVar19 = FUN_14481fd10();
              uVar78 = SUB84(ppwVar27,0);
              dVar64 = (double)CONCAT44(local_4d8._4_4_,(undefined4)local_4d8);
              dVar52 = local_4c8 * local_4c8 + dVar64 * dVar64;
              dVar53 = dStack_4c0 * dStack_4c0 + dStack_4d0 * dStack_4d0;
              auVar49._0_8_ = dVar52 + dVar53;
              auVar49._8_8_ = dVar52 + dVar53;
              uVar76 = (undefined4)DAT_149e1ecd0;
              uVar79 = DAT_149e1ecd0._4_4_;
              uVar75 = DAT_149e1ecd0._8_4_;
              uVar77 = DAT_149e1ecd0._12_4_;
              uVar36 = -(ulonglong)((double)DAT_149e1ecd0 <= auVar49._0_8_);
              uVar37 = -(ulonglong)(DAT_149e1ecd0._8_8_ <= auVar49._8_8_);
              auVar60._8_8_ = uVar37;
              auVar60._0_8_ = uVar36;
              auVar56 = sqrtpd(auVar49,auVar49);
              auVar58 = divpd(auVar58,auVar56);
              auVar68._0_8_ = auVar58._0_8_ * local_4c8;
              auVar68._8_8_ = auVar58._8_8_ * dStack_4c0;
              dVar54 = (double)((ulonglong)(dVar64 * auVar58._0_8_) & uVar36);
              dVar45 = (double)((ulonglong)(dStack_4d0 * auVar58._8_8_) & uVar37);
              auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar60);
              dVar64 = local_458;
              dVar52 = dStack_450;
              dVar53 = local_448;
            }
            auVar56 = _DAT_149934d80;
            dVar47 = auVar43._8_8_ * dVar47;
            dVar46 = auVar43._0_8_ * dVar46;
            dVar51 = ABS(dVar46);
            auVar43._8_8_ = -(ulonglong)((double)CONCAT44(uVar77,uVar75) < ABS(dVar47));
            auVar43._0_8_ = -(ulonglong)((double)CONCAT44(uVar79,uVar76) < dVar51);
            uVar26 = movmskpd(iVar19,auVar43);
            auVar70._8_8_ = -(ulonglong)((double)CONCAT44(uVar77,uVar75) < ABS(auVar71._8_8_));
            auVar70._0_8_ = -(ulonglong)((double)CONCAT44(uVar79,uVar76) < ABS(auVar71._0_8_));
            iVar19 = movmskpd((int)pdVar25,auVar70);
            uVar26 = iVar19 << 2 | uVar26;
            if (uVar26 == 0) {
              local_638 = DAT_14c8464a0;
              dStack_630 = DAT_14c8464a8;
              local_648._8_8_ = DAT_14c8464b8;
              local_648._0_8_ = DAT_14c8464b0;
              local_628 = _DAT_14c8464d0;
              dVar88 = DAT_14c8464c0;
              dVar83 = DAT_14c8464c8;
              dVar42 = DAT_14c846480;
              dVar45 = DAT_14c846488;
              dVar63 = DAT_14c846490;
              dVar69 = DAT_14c846498;
            }
            else {
              auVar5._8_4_ = SUB84(dVar47,0);
              auVar5._0_8_ = dVar46;
              auVar5._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
              auVar43 = divpd(_DAT_149934d80,auVar5);
              auVar66 = divpd(ZEXT816(0x3ff0000000000000),auVar71);
              dVar88 = (double)(-(ulonglong)((double)CONCAT44(uVar79,uVar76) < dVar51) &
                               auVar43._0_8_);
              dVar83 = (double)(-(ulonglong)((double)CONCAT44(uVar77,uVar75) < ABS(dVar47)) &
                               auVar43._8_8_);
              dVar46 = (double)(-(ulonglong)((double)CONCAT44(uVar79,uVar76) < ABS(auVar71._0_8_)) &
                               auVar66._0_8_);
              local_628._8_8_ = 0;
              local_628._0_8_ = dVar46;
              dVar42 = -dVar54;
              dVar45 = -dVar45;
              dVar63 = auVar58._0_8_ * -1.0;
              dVar69 = auVar58._8_8_ * 1.0;
              dVar64 = dVar64 * dVar88;
              dVar52 = dVar52 * dVar83;
              dVar53 = dVar53 * dVar46;
              dVar46 = dVar52 * dVar42 - dVar64 * dVar45;
              dVar47 = dVar53 * dVar45 - dVar52 * dVar63;
              dVar51 = dVar64 * dVar63 - dVar42 * dVar53;
              dVar47 = dVar47 + dVar47;
              dVar51 = dVar51 + dVar51;
              dVar46 = dVar46 + dVar46;
              local_638 = (wchar_t *)
                          (0.0 - ((dVar46 * dVar45 - dVar51 * dVar63) + dVar69 * dVar47 + dVar64));
              dStack_630 = 0.0 - (dVar46 * dVar54 + dVar63 * dVar47 + dVar69 * dVar51 + dVar52);
              local_648._8_8_ = 0;
              local_648._0_8_ =
                   0.0 - (dVar69 * dVar46 + dVar53 + (dVar51 * dVar42 - dVar47 * dVar45));
            }
            auVar58 = *(undefined1 (*) [16])(local_5c8 + 0x40 + lVar28);
            dVar64 = auVar58._0_8_;
            dVar52 = auVar58._8_8_;
            auVar43 = *(undefined1 (*) [16])(local_5c8 + 0x50 + lVar28);
            dVar46 = auVar43._0_8_;
            dVar47 = auVar43._8_8_;
            auVar72._8_8_ = dVar83;
            auVar72._0_8_ = dVar88;
            auVar58 = minpd(auVar72,auVar58);
            dVar53 = local_628._0_8_;
            dVar54 = local_628._8_8_;
            auVar43 = minpd(local_628,auVar43);
            auVar73._8_8_ = -(ulonglong)(auVar58._8_8_ < 0.0);
            auVar73._0_8_ = -(ulonglong)(auVar58._0_8_ < 0.0);
            iVar19 = movmskpd(uVar26,auVar73);
            auVar85._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
            auVar85._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
            uVar26 = movmskpd(uVar78,auVar85);
            if ((uVar26 & 0x3fffffff) == 0 && iVar19 == 0) {
              dVar9 = *(double *)(local_5c8 + lVar28);
              dVar10 = ((double *)(local_5c8 + lVar28))[1];
              pdVar25 = (double *)(local_5c8 + 0x10 + lVar28);
              dVar11 = *pdVar25;
              dVar12 = pdVar25[1];
              local_618 = SUB84(dVar11,0);
              uStack_614 = (undefined4)((ulonglong)dVar11 >> 0x20);
              uStack_610 = SUB84(dVar12,0);
              uStack_60c = (undefined4)((ulonglong)dVar12 >> 0x20);
              pdVar25 = (double *)(local_5c8 + 0x18 + lVar28);
              dVar95 = *pdVar25;
              dVar51 = *pdVar25;
              dVar3 = *(double *)(local_5c8 + lVar28);
              dVar74 = *(double *)(local_5c8 + lVar28);
              pdVar25 = (double *)(local_5c8 + 8 + lVar28);
              dVar91 = *pdVar25;
              dVar90 = *pdVar25;
              pdVar25 = (double *)(local_5c8 + 0x10 + lVar28);
              dVar92 = *pdVar25;
              dVar100 = *pdVar25;
              dVar84 = dVar45 * dVar92 * -1.0 +
                       dVar63 * dVar91 + dVar69 * dVar3 * 1.0 + dVar42 * dVar95;
              dVar86 = dVar42 * dVar100 * 1.0 +
                       dVar69 * dVar90 + dVar63 * dVar74 * -1.0 + dVar45 * dVar51;
              dVar6 = (double)local_638 * dVar64;
              dVar7 = dStack_630 * dVar52;
              dVar55 = (double)local_648._0_8_ * dVar46;
              dVar62 = (double)local_648._8_8_ * dVar47;
              dVar87 = dVar7 * dVar9 - dVar6 * dVar10;
              dVar89 = dVar55 * dVar10 - dVar7 * dVar11;
              dVar81 = dVar6 * dVar11 - dVar55 * dVar9;
              dVar82 = dVar62 * dVar12 - dVar62 * dVar12;
              dVar89 = dVar89 + dVar89;
              dVar81 = dVar81 + dVar81;
              dVar87 = dVar87 + dVar87;
              dVar82 = dVar82 + dVar82;
              auVar94._8_8_ =
                   dVar63 * dVar100 * -1.0 +
                   ((dVar74 * dVar42 * -1.0 + dVar69 * dVar51) - dVar45 * dVar90);
              auVar94._0_8_ =
                   dVar69 * dVar92 * 1.0 +
                   ((dVar3 * dVar45 * 1.0 + dVar63 * dVar95) - dVar42 * dVar91);
              pdVar25 = (double *)(local_5c8 + 0x20 + lVar28);
              pdVar2 = (double *)(local_5c8 + 0x30 + lVar28);
              dVar63 = (dVar82 * dVar12 - dVar82 * dVar12) + dVar51 * dVar82 + dVar62 + pdVar2[1];
              dVar45 = (dVar87 * dVar10 - dVar11 * dVar81) + dVar95 * dVar89 + dVar6 + *pdVar25;
              dVar51 = (dVar89 * dVar11 - dVar87 * dVar9) + dVar51 * dVar81 + dVar7 + pdVar25[1];
              dVar42 = (dVar81 * dVar9 - dVar10 * dVar89) + dVar95 * dVar87 + dVar55 + *pdVar2;
            }
            else {
              local_628._8_8_ = dVar54 * dVar47;
              local_628._0_8_ = dVar53 * dVar46;
              dVar86 = *(double *)(local_5c8 + lVar28);
              dVar95 = ((double *)(local_5c8 + lVar28))[1];
              dVar3 = *(double *)(local_5c8 + 0x10 + lVar28);
              dVar74 = dVar95 + dVar95;
              dVar90 = dVar3 + dVar3;
              dVar84 = dVar86 * (dVar86 + dVar86);
              local_128 = (1.0 - (dVar84 + dVar95 * dVar74)) * dVar46;
              dVar100 = *(double *)(local_5c8 + lVar28) * dVar90;
              pdVar25 = (double *)(local_5c8 + 0x18 + lVar28);
              dVar51 = *pdVar25;
              dVar91 = dVar90 * dVar51;
              dVar92 = (dVar86 + dVar86) * *pdVar25;
              dVar51 = dVar74 * dVar51;
              local_138 = (dVar51 + dVar100) * dVar46;
              local_158 = (dVar74 * dVar86 - dVar91) * dVar52;
              dStack_130 = (dVar90 * dVar95 - dVar92) * dVar46;
              local_178 = (wchar_t **)((1.0 - (dVar3 * dVar90 + dVar95 * dVar74)) * dVar64);
              dStack_150 = (1.0 - (dVar3 * dVar90 + dVar84)) * dVar52;
              dStack_170 = (dVar74 * dVar86 + dVar91) * dVar64;
              local_148 = (dVar90 * dVar95 + dVar92) * dVar52;
              local_168 = (dVar100 - dVar51) * dVar64;
              uStack_160 = 0;
              uStack_140 = 0;
              uStack_120 = 0;
              pdVar25 = (double *)(local_5c8 + 0x20 + lVar28);
              local_118 = *pdVar25;
              dStack_110 = pdVar25[1];
              local_108 = *(double *)(local_5c8 + 0x30 + lVar28);
              uStack_100 = 0x3ff0000000000000;
              dVar84 = dVar45 + dVar45;
              dVar86 = dVar63 + dVar63;
              dVar51 = dVar42 * (dVar42 + dVar42);
              local_1a8 = (1.0 - (dVar51 + dVar45 * dVar84)) * dVar53;
              dVar95 = (dVar42 + dVar42) * dVar69;
              local_1b8 = (dVar42 * dVar86 + dVar84 * dVar69) * dVar53;
              local_1d8 = (dVar84 * dVar42 - dVar86 * dVar69) * dVar83;
              dStack_1b0 = (dVar86 * dVar45 - dVar95) * dVar53;
              local_1f8 = (wchar_t *)
                          (((double)DAT_149934d80 - (dVar63 * dVar86 + dVar45 * dVar84)) * dVar88);
              dStack_1d0 = (DAT_149934d80._8_8_ - (dVar63 * dVar86 + dVar51)) * dVar83;
              dStack_1f0 = (dVar84 * dVar42 + dVar86 * dVar69) * dVar88;
              local_1c8 = (dVar86 * dVar45 + dVar95) * dVar83;
              local_1e8 = (dVar42 * dVar86 - dVar84 * dVar69) * dVar88;
              auVar13._4_4_ = uStack_614;
              auVar13._0_4_ = local_618;
              auVar13._8_4_ = uStack_610;
              auVar13._12_4_ = uStack_60c;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_638;
              dStack_190 = dStack_630;
              local_188 = (double)local_648._0_8_;
              uStack_180 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_4b8,&local_1f8,&local_178);
              FUN_144a1c686(&local_4b8,0x3e45798ee0000000);
              auVar40._8_8_ = -(ulonglong)(0.0 <= dVar83 * dVar52);
              auVar40._0_8_ = -(ulonglong)(0.0 <= dVar88 * dVar64);
              auVar58 = blendvpd(_DAT_149936790,auVar56,auVar40);
              uVar36 = -(ulonglong)(0.0 <= dVar53 * dVar46);
              dVar45 = (double)(~uVar36 & 0xbff0000000000000 | uVar36 & 0x3ff0000000000000);
              dVar51 = auVar58._0_8_;
              local_4a8 = local_4a8 * dVar51;
              dStack_4b0 = dStack_4b0 * dVar51;
              local_4b8 = (wchar_t *)((double)local_4b8 * dVar51);
              dVar51 = auVar58._8_8_;
              local_498._8_8_ = (double)local_498._8_8_ * dVar51;
              local_498._0_8_ = dVar51 * (double)local_498._0_8_;
              local_488._0_8_ = (double)local_488._0_8_ * dVar51;
              local_468 = local_468 * dVar45;
              local_478._8_8_ = (double)local_478._8_8_ * dVar45;
              local_478._0_8_ = dVar45 * (double)local_478._0_8_;
              FUN_14481fd10(&local_4d8,&local_4b8);
              dVar45 = (double)CONCAT44(local_4d8._4_4_,(undefined4)local_4d8);
              dVar51 = local_4c8 * local_4c8 + dVar45 * dVar45;
              dVar42 = dStack_4c0 * dStack_4c0 + dStack_4d0 * dStack_4d0;
              auVar50._0_8_ = dVar51 + dVar42;
              auVar50._8_8_ = dVar51 + dVar42;
              auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
              auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
              auVar58 = sqrtpd(auVar50,auVar50);
              auVar58 = divpd(auVar56,auVar58);
              auVar61._0_8_ = auVar58._0_8_ * local_4c8;
              auVar61._8_8_ = auVar58._8_8_ * dStack_4c0;
              dVar84 = (double)((ulonglong)(dVar45 * auVar58._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
              dVar86 = (double)((ulonglong)(dStack_4d0 * auVar58._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
              auVar94 = blendvpd(auVar13,auVar61,auVar41);
              dVar63 = 0.0;
              dVar45 = local_458;
              dVar51 = dStack_450;
              dVar42 = local_448;
            }
            uVar36 = uStack_4f0;
            lVar29 = (longlong)(int)uStack_4f0;
            uVar26 = (int)uStack_4f0 + 1;
            uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar26);
            if (uStack_4f0._4_4_ < uVar26) {
              FUN_144a2c682(&local_4f8,uVar36 & 0xffffffff);
            }
            lVar29 = lVar29 * 0x60;
            *(double *)(local_4f8 + lVar29) = dVar84;
            ((double *)(local_4f8 + lVar29))[1] = dVar86;
            *(undefined1 (*) [16])(local_4f8 + 0x10 + lVar29) = auVar94;
            pdVar25 = (double *)(local_4f8 + 0x20 + lVar29);
            *pdVar25 = dVar45;
            pdVar25[1] = dVar51;
            pdVar25 = (double *)(local_4f8 + 0x30 + lVar29);
            *pdVar25 = dVar42;
            pdVar25[1] = dVar63;
            auVar4._8_4_ = SUB84(dVar83 * dVar52,0);
            auVar4._0_8_ = dVar88 * dVar64;
            auVar4._12_4_ = (int)((ulonglong)(dVar83 * dVar52) >> 0x20);
            *(undefined1 (*) [16])(local_4f8 + 0x40 + lVar29) = auVar4;
            pdVar25 = (double *)(local_4f8 + 0x50 + lVar29);
            *pdVar25 = dVar53 * dVar46;
            pdVar25[1] = dVar54 * dVar47;
            ppwVar27 = (wchar_t **)((longlong)(int)uVar18 * 0xb0 + local_4e8);
            FUN_148543dfa(local_4e8 + lVar34);
          }
        }
        else {
          lVar20 = FUN_144a80466();
          uVar36 = uStack_4f0;
          iVar19 = *(int *)(lVar20 + 0x38);
          ppwVar27 = (wchar_t **)(longlong)iVar19;
          if ((*(int *)(*(longlong *)(lVar29 + 0x10) + 0x38) < iVar19) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x30) + (longlong)ppwVar27 * 8) !=
              lVar20 + 0x30)) goto LAB_14964890d;
          lVar29 = (longlong)(int)uStack_4f0;
          uVar18 = (int)uStack_4f0 + 1;
          uStack_4f0 = CONCAT44(uStack_4f0._4_4_,uVar18);
          if (uStack_4f0._4_4_ < uVar18) {
            ppwVar27 = (wchar_t **)(uVar36 & 0xffffffff);
            FUN_144a2c682(&local_4f8);
          }
          puVar31 = &DAT_14c846480;
          puVar32 = (undefined8 *)(lVar29 * 0x60 + local_4f8);
          for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
            *puVar32 = *puVar31;
            puVar31 = puVar31 + 1;
            puVar32 = puVar32 + 1;
          }
        }
        uVar35 = uVar35 + 1;
        lVar28 = lVar28 + 0x60;
        lVar34 = lVar34 + 0xb0;
      } while ((longlong)uVar35 < (longlong)(int)param_1[0x15]);
    }
  }
  lVar28 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_4b8 = L"EditPivotToolTransactionName";
  dStack_4b0._0_4_ = 0x1c;
  FUN_1446e940c(&local_178,&local_4b8);
  local_4b8 = L"UEditPivotTool";
  dStack_4b0 = (double)CONCAT44(dStack_4b0._4_4_,0xe);
  FUN_1446e940c(&local_1f8,&local_4b8);
  FUN_140208bae(&local_4b8,&local_1f8,&local_178,L"Edit Pivot");
  (**(code **)(*(longlong *)(lVar28 + 0x28) + 0x10))(lVar28 + 0x28,&local_4b8);
  if (local_4b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_4b8 + 0x10))();
  }
  if ((int)param_1[0x15] < 1) {
    local_4b8 = (wchar_t *)((ulonglong)local_4b8 & 0xffffffff00000000);
    dStack_4b0 = 0.0;
    local_4a8 = 0.0;
    dStack_4a0 = 0.0;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = local_498._8_8_;
    local_498 = auVar14 << 0x40;
  }
  else {
    uVar35 = 0;
    do {
      uVar33 = *(undefined8 *)(param_1[0x14] + uVar35 * 8);
      plVar22 = (longlong *)FUN_1485062e8(uVar33);
      if (plVar22 == (longlong *)0x0) {
LAB_14964a613:
        if (uVar35 == *(uint *)(param_1[0x1b] + uVar35 * 4)) {
          local_5c9 = 0;
          local_658 = 1;
          FUN_1485064b0(&local_1f8,*(undefined8 *)(param_1[0x14] + uVar35 * 8));
          if ((longlong)dStack_1f0._0_4_ != 0) {
            local_638 = local_1f8 + (longlong)dStack_1f0._0_4_ * 2;
            lVar28 = uVar35 * 0xb0;
            local_648._0_8_ = uVar33;
            pwVar65 = local_1f8;
            do {
              uVar76 = *(undefined4 *)pwVar65;
              local_178 = (wchar_t **)CONCAT71(local_178._1_7_,local_5c9);
              local_178 = (wchar_t **)CONCAT44(uVar76,(undefined4)local_178);
              dStack_170 = (double)((ulonglong)dStack_170 & 0xffffffffffffff00);
              FUN_1485066d8(&local_4b8,uVar33,&local_178);
              dStack_170 = 0.0;
              local_168 = 0.0;
              dVar64 = *(double *)((longlong)local_468 + 0x80);
              if (*(double *)((longlong)local_468 + 0x80) == 0.0) {
                dVar64 = local_468;
              }
              local_178 = &local_4b8;
              FUN_146fa1f1e((longlong)dVar64 + 0x20,&local_4d8,DAT_14c99c0d0);
              dStack_170 = (double)CONCAT44(local_4d8._4_4_,(undefined4)local_4d8);
              lVar34 = *(longlong *)(lStack_460 + 0x80);
              if (*(longlong *)(lStack_460 + 0x80) == 0) {
                lVar34 = lStack_460;
              }
              FUN_146fa06aa(lVar34 + 0x20,&local_4d8);
              local_168 = (double)CONCAT44(local_4d8._4_4_,(undefined4)local_4d8);
              lVar34 = *(longlong *)(local_4e8 + 0xa0 + lVar28);
              lVar29 = local_4e8 + lVar28;
              if (lVar34 != 0) {
                lVar29 = lVar34;
              }
              lVar34 = (longlong)*(int *)(local_4e8 + 0xa8 + lVar28);
              if (lVar34 != 0) {
                lVar34 = lVar34 * 0x50;
                do {
                  FUN_14960ed3f(&local_178,lVar29);
                  lVar29 = lVar29 + 0x50;
                  lVar34 = lVar34 + -0x50;
                } while (lVar34 != 0);
              }
              local_4d8._0_4_ = CONCAT31(local_4d8._1_3_,local_5c9);
              uVar33 = local_648._0_8_;
              local_4d8._4_4_ = uVar76;
              FUN_148506a2a(local_648._0_8_,&local_4b8);
              FUN_145838e00(&local_4b8);
              pwVar65 = pwVar65 + 2;
            } while (pwVar65 != local_638);
          }
          lVar28 = local_4e8;
          cVar17 = FUN_1485075e2(plVar22,1);
          if (cVar17 != '\0') {
            lVar20 = uVar35 * 0xb0;
            lVar34 = *(longlong *)(lVar28 + 0xa0 + lVar20);
            lVar29 = lVar28 + lVar20;
            if (lVar34 != 0) {
              lVar29 = lVar34;
            }
            lVar28 = (longlong)*(int *)(lVar28 + 0xa8 + lVar20);
            if (lVar28 != 0) {
              lVar34 = 0;
              do {
                local_4b8 = *(wchar_t **)(lVar29 + lVar34);
                dStack_4b0 = (double)((undefined8 *)(lVar29 + lVar34))[1];
                pdVar25 = (double *)(lVar29 + 0x10 + lVar34);
                local_4a8 = *pdVar25;
                dStack_4a0 = pdVar25[1];
                local_498 = *(undefined1 (*) [16])(lVar29 + 0x20 + lVar34);
                local_488._8_8_ = 0;
                local_488._0_8_ = *(ulonglong *)(lVar29 + 0x30 + lVar34);
                local_478 = *(undefined1 (*) [16])(lVar29 + 0x38 + lVar34);
                local_468 = *(double *)(lVar29 + 0x48 + lVar34);
                lStack_460 = 0;
                FUN_148508a5e(plVar22,&local_4b8);
                lVar34 = lVar34 + 0x50;
              } while (lVar28 * 0x50 != lVar34);
            }
          }
          local_658 = 0;
          FUN_140613f88(plVar22,uVar35 * 0x60 + local_4f8,0,0);
          param_1 = local_600;
          pwVar65 = local_1f8;
          goto joined_r0x00014964a8e6;
        }
        local_658 = 0;
        FUN_140613f88(plVar22,uVar35 * 0x60 + local_4f8,0,0);
      }
      else {
        lVar28 = FUN_144a80466();
        if ((*(int *)(plVar22[2] + 0x38) < *(int *)(lVar28 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(lVar28 + 0x38) * 8)
            != lVar28 + 0x30)) goto LAB_14964a613;
        uVar18 = FUN_147af9036(plVar22);
        local_4b8 = (wchar_t *)0x0;
        dStack_4b0 = 0.0;
        FUN_140ee84a4(&local_4b8,uVar18,1);
        if ((int)uVar18 < 1) {
          local_658 = 0;
          FUN_140613f88(plVar22,&local_558,0,0);
          pwVar65 = local_4b8;
        }
        else {
          lVar28 = 0;
          uVar36 = 0;
          do {
            FUN_1410499a6(plVar22,uVar36 & 0xffffffff,(longlong)local_4b8 + lVar28,1);
            uVar36 = uVar36 + 1;
            lVar28 = lVar28 + 0x60;
          } while (uVar18 != uVar36);
          local_658 = 0;
          FUN_140613f88(plVar22,&local_558,0,0);
          lVar28 = 0;
          uVar36 = 0;
          do {
            local_650 = 0;
            local_658 = 1;
            (**(code **)(*plVar22 + 0xb30))
                      (plVar22,uVar36 & 0xffffffff,(longlong)local_4b8 + lVar28);
            uVar36 = uVar36 + 1;
            lVar28 = lVar28 + 0x60;
            pwVar65 = local_4b8;
          } while (uVar18 != uVar36);
        }
joined_r0x00014964a8e6:
        if (pwVar65 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar28 = FUN_1485062af(uVar33);
      if (lVar28 != 0) {
        FUN_1405d0f74(lVar28);
        FUN_1458f5d9e(lVar28);
      }
      uVar35 = uVar35 + 1;
    } while ((longlong)uVar35 < (longlong)(int)param_1[0x15]);
    local_4b8 = (wchar_t *)((ulonglong)local_4b8 & 0xffffffff00000000);
    dStack_4b0 = 0.0;
    local_4a8 = 0.0;
    dStack_4a0 = 0.0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_498._8_8_;
    local_498 = auVar15 << 0x40;
    if (0 < (int)param_1[0x15]) {
      lVar28 = 0;
      do {
        lVar34 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar28 * 8));
        uVar35 = (ulonglong)local_4a8;
        if (lVar34 != 0) {
          lVar29 = (longlong)(int)local_4a8;
          uVar18 = (int)local_4a8 + 1;
          local_4a8 = (double)CONCAT44(local_4a8._4_4_,uVar18);
          if (local_4a8._4_4_ < uVar18) {
            FUN_1447d05f2(&dStack_4b0,uVar35 & 0xffffffff);
          }
          *(longlong *)((longlong)dStack_4b0 + lVar29 * 8) = lVar34;
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 < (int)param_1[0x15]);
    }
  }
  plVar22 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar22 + 0x350))(plVar22,&local_4b8);
  lVar28 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar28 + 0x28) + 0x18))(lVar28 + 0x28);
  if (dStack_4a0 != 0.0) {
    FUN_1400020a8();
  }
  if (dStack_4b0 != 0.0) {
    FUN_1400020a8();
  }
  if (local_5c8 != 0) {
    FUN_1400020a8();
  }
  if (local_4f8 != 0) {
    FUN_1400020a8();
  }
  FUN_148544d7f(local_4e8,uStack_4e0 & 0xffffffff);
  if (local_4e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_678) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14964ac0c FUN_14964ac0c body=415 status=ok
// SIG undefined FUN_14964ac0c(void)

void FUN_14964ac0c(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0xf8);
  iVar7 = 0;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) == 0)) {
    lVar5 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar5 + 0x18);
    if (*(longlong **)(lVar5 + 0x30) != (longlong *)0x0) {
      plVar3 = *(longlong **)(lVar5 + 0x30);
    }
    lVar5 = *plVar3;
  }
  dVar6 = *(double *)((longlong)*(double *)(param_1 + 0x50) + 0x80);
  if (dVar6 == 0.0) {
    dVar6 = *(double *)(param_1 + 0x50);
  }
  local_70 = 2.12199579096527e-314;
  local_60 = 2.12199579047121e-314;
  local_58 = 0;
  local_68 = dVar6;
  if (*(int *)((longlong)dVar6 + 0x18) != 0) {
    FUN_1449c0562(&local_70);
    iVar7 = *(int *)((longlong)dVar6 + 0x18);
  }
  local_88 = local_60;
  dVar1 = local_88;
  local_80 = local_58;
  local_7c = local_54;
  local_98 = local_70;
  local_90 = local_68;
  local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
  if (local_68 != dVar6 || local_88._4_4_ != iVar7) {
    iVar2 = local_88._4_4_;
    local_88 = dVar1;
    do {
      if (*(int *)((longlong)local_90 + 0x18) <= iVar2) {
        iVar2 = -1;
      }
      lVar4 = (longlong)iVar2;
      local_60 = (double)*(float *)(lVar5 + 8 + lVar4 * 0xc);
      local_68 = (double)*(float *)(lVar5 + 4 + lVar4 * 0xc);
      local_70 = (double)*(float *)(lVar5 + lVar4 * 0xc);
      local_4c = iVar2;
      (*(code *)*param_2)(param_2[1],&local_4c,&local_70);
      local_88 = (double)CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
      FUN_1449c0562(&local_98);
      iVar2 = local_88._4_4_;
      dVar1 = local_88;
    } while (local_90 != dVar6 || local_88._4_4_ != iVar7);
  }
  local_88 = dVar1;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964adbe FUN_14964adbe body=43 status=ok
// SIG undefined FUN_14964adbe(void)

void FUN_14964adbe(longlong *param_1)

{
  if ((int)param_1[0x54] != 0) {
    (**(code **)(*param_1 + 0x3a0))();
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}



// FUNCTION 14964ae28 FUN_14964ae28 body=482 status=ok
// SIG undefined FUN_14964ae28(void)

void FUN_14964ae28(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  double dVar4;
  uint uVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xd0) + 0xb0);
  pdVar6 = (double *)(param_1 + 0x1c0);
  if (cVar1 != '\0') {
    pdVar6 = (double *)(param_1 + 0x1f0);
  }
  local_a8 = (pdVar6[2] + pdVar6[5]) * 0.5;
  dStack_b0 = (pdVar6[1] + pdVar6[4]) * 0.5;
  uVar5 = param_2 & 0xfffffffe;
  if (uVar5 == 6) {
    local_b8 = *pdVar6;
    if (param_2 != 6) {
      local_b8 = pdVar6[3];
    }
  }
  else {
    local_b8 = (*pdVar6 + pdVar6[3]) * 0.5;
    if (uVar5 == 4) {
      dStack_b0 = pdVar6[1];
      if (param_2 != 4) {
        dStack_b0 = pdVar6[4];
      }
    }
    else if ((uVar5 == 2) && (local_a8 = pdVar6[2], param_2 != 2)) {
      local_a8 = pdVar6[5];
    }
  }
  if (cVar1 == '\0') {
    dStack_a0 = 0.0;
    local_98 = ZEXT816(0);
    local_88 = 1.0;
    FUN_1483bed02(&local_b8,param_1 + 0x160);
    uVar7 = SUB84(dStack_b0,0);
    uVar8 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
  }
  else {
    uVar7 = SUB84(dStack_b0,0);
    uVar8 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
    dStack_a0 = 0.0;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_88 = 1.0;
  }
  auVar3._8_4_ = uVar7;
  auVar3._0_8_ = local_b8;
  auVar3._12_4_ = uVar8;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  local_b8 = dStack_a0;
  dStack_b0 = (double)local_98._0_8_;
  dVar4 = local_a8;
  local_a8 = (double)local_98._8_8_;
  dStack_a0 = local_88;
  local_98 = auVar3;
  local_88 = dVar4;
  (**(code **)(*plVar2 + 0x330))(plVar2,&local_b8,1);
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14964b00c FUN_14964b00c body=137 status=ok
// SIG undefined FUN_14964b00c(void)

void FUN_14964b00c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 8);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_24 = 0x3ff00000;
  uStack_20 = 0;
  uStack_1c = 0x3ff00000;
  local_18 = 0x3ff0000000000000;
  uStack_10 = 0;
  (**(code **)(*plVar1 + 0x330))(plVar1,&local_68,1);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964b096 FUN_14964b096 body=428 status=ok
// SIG undefined FUN_14964b096(void)

undefined1 * FUN_14964b096(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_8c;
  undefined4 local_60;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) == '\0') &&
      (*(char *)(*(longlong *)(param_1 + 0x10) + 0xaa) != '\x01')) ||
     (*(int *)(param_1 + 0x170) == 0)) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    puVar2 = &local_130;
  }
  else {
    memset(&local_130,0,0x100);
    local_60 = 0xffffffff;
    local_130._4_4_ = 0x3f800000;
    local_8c = 0xffffffff;
    local_138 = 0;
    cVar1 = FUN_14855784a(param_1 + -0xb8,&local_130,param_3,0);
    if (cVar1 != '\0') {
      *(undefined8 *)(param_2 + 0x38) = 0;
      *param_2 = 1;
      *(double *)(param_2 + 8) = (double)local_128;
      *(undefined4 *)(param_2 + 0x10) = local_d8;
      *(undefined4 *)(param_2 + 0x14) = uStack_d4;
      *(undefined4 *)(param_2 + 0x18) = uStack_d0;
      *(undefined4 *)(param_2 + 0x1c) = uStack_cc;
      *(undefined8 *)(param_2 + 0x20) = local_c8;
      param_2[0x28] = 1;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      puVar2 = &local_30;
      local_30 = 0;
      goto LAB_14964b1c6;
    }
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    puVar2 = &local_30;
  }
  *puVar2 = 0;
LAB_14964b1c6:
  FUN_14485c47a(puVar2,0);
  *(undefined8 *)(param_2 + 0x38) = *puVar2;
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964b244 FUN_14964b244 body=310 status=ok
// SIG undefined FUN_14964b244(void)

void FUN_14964b244(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [64];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))(param_1,local_90,param_2);
  lVar1 = (**(code **)(param_1[-0x17] + 0x2c8))(param_1 + -0x17);
  local_50 = L"TransformToolTransformTxnName";
  local_48 = 0x1d;
  FUN_1446e940c(local_94,&local_50);
  local_50 = L"UEditPivotTool";
  local_48 = 0xe;
  FUN_1446e940c(local_98,&local_50);
  FUN_140208bae(&local_50,local_98,local_94,L"SnapDrag");
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  plVar2 = (longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1[0x2d] + 8) + 0x218) + 0x1c8) + 0x240);
  plVar3 = param_1 + 0x31;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964b37c FUN_14964b37c body=538 status=ok
// SIG undefined FUN_14964b37c(void)

void FUN_14964b37c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  double local_208 [3];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_bc;
  undefined4 local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x10) + 0xaa);
  cVar2 = *(char *)(*(longlong *)(param_1 + 0x10) + 0xab);
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
  local_218 = 0;
  cVar4 = FUN_14855784a(param_1 + -0xb8,local_160,param_2,0);
  if (cVar4 != '\0') {
    if (cVar1 == '\0') {
      local_188 = *(double *)(param_1 + 0x188);
      uStack_180 = *(undefined8 *)(param_1 + 400);
      local_178 = *(undefined8 *)(param_1 + 0x198);
      uStack_170 = *(undefined8 *)(param_1 + 0x1a0);
    }
    else {
      local_208[2] = *(double *)(&DAT_149931170 + (ulonglong)(cVar2 == '\x02') * 8);
      local_208[0] = local_120 * local_208[2];
      local_208[1] = local_118 * local_208[2];
      local_208[2] = local_208[2] * local_110;
      local_1a8 = DAT_14c8463b8;
      uStack_1a0 = DAT_14c8463c0;
      local_198 = DAT_14c8463c8;
      local_188 = 0.0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0x3ff0000000000000;
      FUN_146bfb7f2();
    }
    pdVar6 = (double *)(param_1 + 0x188);
    pdVar7 = local_208;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar7 = pdVar7 + 1;
    }
    local_208[0] = local_188;
    local_208[1] = (double)uStack_180;
    local_208[2] = (double)local_178;
    uStack_1f0 = (undefined4)uStack_170;
    uStack_1ec = uStack_170._4_4_;
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) == '\x01') {
      local_1e8 = local_138;
      uStack_1e0 = uStack_130;
      local_1d8 = local_128;
      uStack_1d0 = 0;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + 8);
    (**(code **)(*plVar3 + 0x330))(plVar3,local_208,1);
  }
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964b5a0 FUN_14964b5a0 body=378 status=ok
// SIG undefined FUN_14964b5a0(void)

void FUN_14964b5a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined8 local_b8 [12];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + -0xb8);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 8) + 0x218) + 0x1c8);
  puVar5 = (undefined8 *)(lVar3 + 0x240);
  puVar6 = local_b8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = FUN_14001cc68(0x110,0x10);
  FUN_148442c04(uVar2,param_1 + 0x188,local_b8);
  lVar4 = (**(code **)(*(longlong *)(param_1 + -0xb8) + 0x2c8))(plVar1);
  local_58 = L"TransformToolTransformTxnName";
  local_50 = 0x1d;
  FUN_1446e940c(local_bc,&local_58);
  local_58 = L"UEditPivotTool";
  local_50 = 0xe;
  FUN_1446e940c(local_c0,&local_58);
  FUN_140208bae(&local_58,local_c0,local_bc,L"SnapDrag");
  local_c8 = uVar2;
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28,lVar3,&local_c8,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  lVar3 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964b71c FUN_14964b71c body=121 status=ok
// SIG undefined FUN_14964b71c(void)

void FUN_14964b71c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148544de4(param_1,iVar1);
    }
    FUN_14967f242((longlong)iVar1 * 0xb0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14967f270(param_1,param_2,iVar1 - param_2);
    FUN_14967f2d2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14964b796 FUN_14964b796 body=408 status=ok
// SIG undefined FUN_14964b796(void)

double * FUN_14964b796(undefined4 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar1 = *(double *)(param_1 + 6);
  dVar2 = *(double *)(param_1 + 8);
  dVar3 = *(double *)(param_1 + 10);
  dVar4 = *(double *)(param_1 + 0xc);
  dVar5 = dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  local_78 = 0.0;
  dStack_70 = 0.0;
  local_68 = 0.0;
  dStack_60 = 0.0;
  if (0.0 < dVar5) {
    dVar5 = 1.0 / dVar5;
    dStack_60 = dVar4 * dVar5;
    local_68 = -dVar3 * dVar5;
    dStack_70 = -dVar2 * dVar5;
    local_78 = -dVar1 * dVar5;
  }
  local_b0 = *param_1;
  uStack_a8 = param_1[2];
  uStack_ac = param_1[1] ^ 0x80000000;
  uStack_a4 = param_1[3] ^ 0x80000000;
  local_a0 = *(ulonglong *)(param_1 + 4) ^ 0x8000000000000000;
  FUN_146bed047(&local_98,&local_78);
  *param_2 = local_78;
  param_2[1] = dStack_70;
  param_2[2] = local_68;
  param_2[3] = dStack_60;
  *(undefined4 *)(param_2 + 4) = local_98;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_94;
  *(int *)(param_2 + 5) = (int)uStack_90;
  *(int *)((longlong)param_2 + 0x2c) = (int)((ulonglong)uStack_90 >> 0x20);
  param_2[6] = local_88;
  param_2[7] = 0.0;
  param_2[8] = 1.0;
  param_2[9] = 1.0;
  param_2[10] = 1.0;
  param_2[0xb] = 0.0;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964b938 FUN_14964b938 body=42 status=ok
// SIG undefined FUN_14964b938(void)

undefined8 FUN_14964b938(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14964b962(param_2[1]);
  FUN_148441f08(uVar1,*param_2);
  return uVar1;
}



// FUNCTION 14964b962 FUN_14964b962 body=148 status=ok
// SIG undefined FUN_14964b962(void)

undefined8 FUN_14964b962(undefined8 param_1)

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
  uVar1 = FUN_145bac824();
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



// FUNCTION 14964b9f8 FUN_14964b9f8 body=142 status=ok
// SIG undefined FUN_14964b9f8(void)

bool FUN_14964b9f8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_148441d74();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = &LAB_14456abd4;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964ba88 FUN_14964ba88 body=2396 status=ok
// SIG undefined FUN_14964ba88(void)

/* WARNING: Removing unreachable block (ram,0x00014964c157) */

void FUN_14964ba88(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_388 [32];
  undefined1 *local_368;
  undefined1 local_354 [4];
  undefined1 local_350 [8];
  longlong local_348;
  undefined8 uStack_340;
  longlong local_338;
  int local_330;
  code *local_328;
  undefined8 uStack_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  code *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong *local_e0;
  undefined1 local_c8 [64];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  FUN_14843fdec();
  FUN_1411371f6(local_c8);
  uVar5 = FUN_14479d2ce(param_1 + 0x1f);
  uVar6 = FUN_14120ac06();
  local_368 = local_c8;
  lVar7 = FUN_141137228(uVar5,uVar6,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  param_1[0x23] = lVar7;
  lVar7 = FUN_14851b239(lVar7);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  param_1[0x24] = lVar7;
  FUN_140486fc4(lVar7,*(undefined8 *)(param_1[0x23] + 0x1c8),0);
  FUN_140b506a4(param_1[0x24]);
  lVar7 = param_1[0x24];
  FUN_1485063a5(&local_328,param_1[0x14]);
  local_368 = (undefined1 *)((ulonglong)local_368 & 0xffffffffffffff00);
  FUN_140613f88(lVar7,&local_328,0,0);
  FUN_1485584d0(param_1[0x24],param_1[0x14]);
  memmove(param_1 + 0x2a,(void *)(param_1[0x24] + 0x240),0x60);
  FUN_148506417(&local_338,param_1[0x14],0);
  if (0 < local_330) {
    uVar10 = 0;
    do {
      (**(code **)(*(longlong *)param_1[0x24] + 0x638))
                ((longlong *)param_1[0x24],uVar10 & 0xffffffff,
                 *(undefined8 *)(local_338 + uVar10 * 8));
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)local_330);
  }
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bdabbd0;
  local_108 = FUN_14456abdc;
  local_e0 = param_1;
  (**(code **)(*(longlong *)param_1[0x24] + 0xc18))();
  FUN_1484b18f0(param_1[0x24],1);
  plVar9 = (longlong *)param_1[0x24];
  uStack_340 = (ulonglong)uStack_340._4_4_ << 0x20;
  local_348 = 0x3e800000000;
  FUN_148506727(&local_328,param_1[0x14]);
  (**(code **)(*plVar9 + 0xa78))(plVar9,&local_328);
  FUN_141082778(&local_328);
  uVar5 = (**(code **)(*(longlong *)param_1[0x24] + 0xa88))();
  FUN_146c38c5e(uVar5,0);
  lVar7 = param_1[0x24];
  local_328 = (code *)0x0;
  uStack_320._0_4_ = 0;
  FUN_1446efa72(&local_328,0,3,0x10);
  pcVar1 = local_328;
  uStack_320 = (double)CONCAT44(uStack_320._4_4_,3);
  *(undefined ***)local_328 = &PTR_LAB_149e020b0;
  uVar5 = FUN_144a3f946();
  *(undefined8 *)(pcVar1 + 0x10) = uVar5;
  *(undefined ***)pcVar1 = &PTR_FUN_14bdabbf0;
  *(undefined8 *)(pcVar1 + 0x18) = 0;
  FUN_14485c47a(pcVar1 + 0x18,param_1);
  *(undefined4 *)(pcVar1 + 0x28) = 0;
  *(undefined1 **)(pcVar1 + 0x20) = &LAB_14964c3e6;
  FUN_1448b6402(lVar7 + 0x6c8,&local_348,&local_328);
  param_1[0x29] = local_348;
  FUN_1449db362(&local_328);
  lVar7 = FUN_148f61c65(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  param_1[0x25] = lVar7;
  *(undefined1 *)(lVar7 + 0x40) = 0;
  (**(code **)(*(longlong *)param_1[0x25] + 0x2a0))((longlong *)param_1[0x25],param_1);
  *(undefined1 *)(*(longlong *)(param_1[0x25] + 0x78) + 0xa9) = 0;
  *(undefined1 *)(*(longlong *)(param_1[0x25] + 0x78) + 0xa8) = 0;
  *(undefined1 *)(*(longlong *)(param_1[0x25] + 0x78) + 0xae) = 0;
  local_328 = FUN_14964c4d0;
  uStack_320 = (double)((ulonglong)uStack_320 & 0xffffffff00000000);
  FUN_14964c3f4(param_1[0x25] + 0x48,&local_348,param_1);
  lVar7 = (**(code **)(*(longlong *)param_1[0x24] + 0xa88))();
  param_1[0x7f] = lVar7;
  param_1[0x80] = 0;
  FUN_146bee918(param_1 + 0x7e,0);
  param_1[0x80] =
       (ulonglong)(uint)(*(int *)(param_1[0x7f] + 0x214) + *(int *)(param_1[0x7f] + 0x218));
  FUN_14964c6aa(param_1);
  uVar5 = (**(code **)(*(longlong *)param_1[0x24] + 0xa88))();
  FUN_145c688c4(uVar5,&local_328,0);
  dVar11 = (double)(-(ulonglong)(0.0 <= local_300 - local_318) & (ulonglong)(local_300 - local_318))
  ;
  dVar12 = (double)(-(ulonglong)(0.0 <= local_308 - uStack_320) &
                   (ulonglong)(local_308 - uStack_320));
  uVar10 = -(ulonglong)(dVar11 <= dVar12);
  dVar11 = (double)(~uVar10 & (ulonglong)dVar11 | uVar10 & (ulonglong)dVar12);
  dVar12 = (double)(-(ulonglong)(0.0 <= local_310 - (double)local_328) &
                   (ulonglong)(local_310 - (double)local_328));
  uVar10 = -(ulonglong)(dVar11 <= dVar12);
  param_1[0x41] =
       (longlong)(1.0 / (double)(uVar10 & (ulonglong)dVar12 | ~uVar10 & (ulonglong)dVar11));
  FUN_148506321(param_1[0x14]);
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar5 = FUN_148451354(uVar5);
  local_328 = (code *)0x0;
  uStack_320 = 0.0;
  lVar7 = FUN_14843d06b(uVar5,0x18e16,param_1,&local_328);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  param_1[0x27] = lVar7;
  if (local_328 != (code *)0x0) {
    FUN_1400020a8();
    lVar7 = param_1[0x27];
  }
  if (lVar7 != 0) {
    lVar7 = FUN_1484c6256(param_1);
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar7);
    }
    param_1[0x28] = lVar7;
    local_328 = FUN_14964c85e;
    uStack_320 = (double)((ulonglong)uStack_320 & 0xffffffff00000000);
    FUN_14964c782(lVar7 + 0x58,&local_348,param_1,&local_328);
    local_328 = (code *)&LAB_14964ca2e;
    uStack_320 = (double)((ulonglong)uStack_320 & 0xffffffff00000000);
    FUN_14964c952(param_1[0x28] + 0x28,&local_348,param_1,&local_328);
    local_328 = FUN_14964ca3c;
    uStack_320 = (double)((ulonglong)uStack_320 & 0xffffffff00000000);
    FUN_14964c782(param_1[0x28] + 0x70,&local_348,param_1,&local_328);
    plVar9 = (longlong *)param_1[0x27];
    lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar7 = lVar8 + 0x28;
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    (**(code **)(*plVar9 + 800))(plVar9,param_1[0x28],lVar7);
    *(undefined1 *)(param_1[0x27] + 0x82) = 0;
    *(undefined1 *)(param_1[0x27] + 0x83) = 1;
    (**(code **)(*(longlong *)param_1[0x27] + 0x350))((longlong *)param_1[0x27],0);
  }
  lVar7 = FUN_148f735f0(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  param_1[0x21] = lVar7;
  lVar7 = (**(code **)(*(longlong *)param_1[0x24] + 0xa88))();
  local_348 = 0;
  uStack_340 = 0;
  iVar2 = (**(code **)(**(longlong **)(lVar7 + 0x208) + 0xa0))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      FUN_140002266(&local_328,L"UV %d",iVar2);
      uVar10 = uStack_340;
      lVar8 = (longlong)(int)uStack_340;
      uVar3 = (int)uStack_340 + 1;
      uStack_340 = CONCAT44(uStack_340._4_4_,uVar3);
      if (uStack_340._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_348,uVar10 & 0xffffffff);
      }
      lVar8 = lVar8 * 0x10;
      *(undefined8 *)(local_348 + lVar8) = 0;
      *(code **)(local_348 + lVar8) = local_328;
      *(undefined4 *)(local_348 + 8 + lVar8) = (undefined4)uStack_320;
      *(undefined4 *)(local_348 + 0xc + lVar8) = uStack_320._4_4_;
      uStack_320 = 0.0;
      local_328 = (code *)0x0;
      iVar2 = iVar2 + 1;
      iVar4 = (**(code **)(**(longlong **)(lVar7 + 0x208) + 0xa0))();
    } while (iVar2 < iVar4);
  }
  FUN_148f71fd6(param_1[0x21],0,&local_348,1);
  plVar9 = (longlong *)param_1[0x21];
  FUN_140056680(&local_328,&DAT_149dfb77a);
  (**(code **)(*plVar9 + 0x2a8))(plVar9,param_1,&local_328);
  if (local_328 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  lVar7 = param_1[0x21];
  local_328 = (code *)0x0;
  uStack_320 = (double)((ulonglong)uStack_320 & 0xffffffff00000000);
  FUN_1446efa72(&local_328,0,2,0x10);
  pcVar1 = local_328;
  uStack_320._0_4_ = 2;
  *(undefined ***)local_328 = &PTR_LAB_14aedba20;
  uVar5 = FUN_144a3f946();
  *(undefined8 *)(pcVar1 + 0x10) = uVar5;
  *(undefined ***)pcVar1 = &PTR_FUN_14bdabd40;
  *(longlong **)(pcVar1 + 0x18) = param_1;
  FUN_14844f9a0(lVar7 + 0x90,local_350,&local_328);
  FUN_1449db362(&local_328);
  FUN_14964ca82(param_1);
  local_328 = (code *)0x14ba1690c;
  uStack_320._0_4_ = 8;
  FUN_1446e940c(local_350,&local_328);
  local_328 = (code *)0x14bd93068;
  uStack_320 = (double)CONCAT44(uStack_320._4_4_,0x12);
  FUN_1446e940c(local_354,&local_328);
  FUN_140208bae(&local_328,local_354,local_350,L"UV Transform");
  (**(code **)(*param_1 + 0x370))(param_1,&local_328);
  if (local_328 != (code *)0x0) {
    (**(code **)(*(longlong *)local_328 + 0x10))();
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_328 = (code *)0x14bd938f2;
  uStack_320._0_4_ = 0x20;
  FUN_1446e940c(local_350,&local_328);
  local_328 = (code *)0x14bd93068;
  uStack_320 = (double)CONCAT44(uStack_320._4_4_,0x12);
  FUN_1446e940c(local_354,&local_328);
  FUN_140208bae(&local_328,local_354,local_350,
                L"Click on a UV Island to select it, and then use the Gizmo to translate/rotate/scale the UVs"
               );
  (**(code **)(*plVar9 + 0x340))(plVar9,&local_328,2);
  if (local_328 != (code *)0x0) {
    (**(code **)(*(longlong *)local_328 + 0x10))();
  }
  FUN_1447a1747(local_348,uStack_340 & 0xffffffff);
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14964c3f4 FUN_14964c3f4 body=218 status=ok
// SIG undefined FUN_14964c3f4(void)

undefined8
FUN_14964c3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdabbf0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964c4d0 FUN_14964c4d0 body=473 status=ok
// SIG undefined FUN_14964c4d0(void)

void FUN_14964c4d0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined1 *)(param_1 + 0x130) = 1;
  lVar2 = *(longlong *)(param_1 + 0x128);
  if (((*(int *)(lVar2 + 1000) != *(int *)(lVar2 + 0x414)) ||
      (*(int *)(lVar2 + 0x438) != *(int *)(lVar2 + 0x464))) ||
     (*(int *)(lVar2 + 0x398) != *(int *)(lVar2 + 0x3c4))) {
    if (*(char *)(param_1 + 0x4c0) == '\x01') {
      FUN_146bee918(param_1 + 0x3f0,0);
      *(ulonglong *)(param_1 + 0x400) =
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 0x3f8) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 0x3f8) + 0x218));
      *(undefined1 *)(param_1 + 0x4c0) = 0;
      lVar2 = *(longlong *)(param_1 + 0x128);
    }
    uVar1 = FUN_14964d15e(lVar2 + 0x390);
    FUN_14964ccea(param_1 + 0x260,&local_108,uVar1,param_1 + 0x3f0);
    FUN_1483bed02(&local_108,param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x138) != 0) {
      local_158 = local_e0;
      uStack_154 = uStack_dc;
      uStack_150 = uStack_d8;
      uStack_14c = uStack_d4;
      local_148 = local_108;
      uStack_144 = uStack_104;
      uStack_140 = uStack_100;
      uStack_13c = uStack_fc;
      local_138 = local_f8;
      uStack_130 = 0;
      local_128 = 0x3ff0000000000000;
      uStack_120 = 0x3ff0000000000000;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0;
      FUN_148415b4c(*(longlong *)(param_1 + 0x138),local_168,1);
      local_c8 = local_f0;
      uStack_c4 = uStack_ec;
      uStack_c0 = uStack_e8;
      uStack_bc = uStack_e4;
      local_b8 = local_e0;
      uStack_b4 = uStack_dc;
      uStack_b0 = uStack_d8;
      uStack_ac = uStack_d4;
      local_a8 = local_108;
      uStack_a4 = uStack_104;
      uStack_a0 = uStack_100;
      uStack_9c = uStack_fc;
      local_98 = local_f8;
      uStack_90 = 0;
      local_88 = 0x3ff0000000000000;
      uStack_80 = 0x3ff0000000000000;
      local_78 = 0x3ff0000000000000;
      uStack_70 = 0;
      local_68 = 1;
      FUN_148415ec0(*(undefined8 *)(param_1 + 0x138));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964c6aa FUN_14964c6aa body=214 status=ok
// SIG undefined FUN_14964c6aa(void)

void FUN_14964c6aa(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_218 [32];
  code *local_1f8;
  undefined8 local_1e8;
  undefined **local_1d8;
  longlong local_1d0;
  undefined **local_1b8 [46];
  longlong local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xa88))();
  FUN_14964e2a2(local_1b8,uVar1);
  FUN_14964e934(param_1 + 0x260,local_1b8);
  local_1b8[0] = &PTR_FUN_14bd93990;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_145aba0b4(local_1b8);
  local_1e8 = 0;
  local_1d8 = &PTR_LAB_14bdabdf0;
  local_1f8 = FUN_14456af50;
  local_1d0 = param_1;
  FUN_14854d95a(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x120),param_1 + 0x260);
  if ((local_20 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964c782 FUN_14964c782 body=218 status=ok
// SIG undefined FUN_14964c782(void)

undefined8
FUN_14964c782(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_14af12c50;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdabc60;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_148515308(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964c85e FUN_14964c85e body=243 status=ok
// SIG undefined FUN_14964c85e(void)

void FUN_14964c85e(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x200) = 1;
  FUN_14852f8ce(*(undefined8 *)(param_1 + 0x128));
  FUN_14964d294(param_1,*(longlong *)(param_1 + 0x128) + 0x390);
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x2b0))(*(longlong **)(param_1 + 0x140),&local_78)
  ;
  *(undefined4 *)(param_1 + 0x210) = local_58;
  *(undefined4 *)(param_1 + 0x214) = uStack_54;
  *(undefined4 *)(param_1 + 0x218) = uStack_50;
  *(undefined4 *)(param_1 + 0x21c) = uStack_4c;
  *(undefined8 *)(param_1 + 0x220) = local_48;
  *(undefined8 *)(param_1 + 0x228) = local_78;
  *(undefined8 *)(param_1 + 0x230) = uStack_70;
  *(undefined8 *)(param_1 + 0x238) = local_68;
  *(undefined8 *)(param_1 + 0x240) = local_60;
  (**(code **)(**(longlong **)(param_1 + 0x140) + 0x2b0))(*(longlong **)(param_1 + 0x140),&local_78)
  ;
  *(undefined4 *)(param_1 + 0x248) = local_38;
  *(undefined4 *)(param_1 + 0x24c) = uStack_34;
  *(undefined4 *)(param_1 + 0x250) = uStack_30;
  *(undefined4 *)(param_1 + 0x254) = uStack_2c;
  *(undefined8 *)(param_1 + 600) = local_28;
  FUN_14964d954(param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964c952 FUN_14964c952 body=218 status=ok
// SIG undefined FUN_14964c952(void)

undefined8
FUN_14964c952(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *puVar3 = &PTR_FUN_14bdabcd0;
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



// FUNCTION 14964ca3c FUN_14964ca3c body=70 status=ok
// SIG undefined FUN_14964ca3c(void)

void FUN_14964ca3c(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x200) = 0;
  FUN_14852f91c(*(undefined8 *)(param_1 + 0x128),0);
  plVar1 = *(longlong **)(param_1 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x348))(plVar1,&DAT_14c846510);
  }
  FUN_14964e060(param_1);
  return;
}



// FUNCTION 14964ca82 FUN_14964ca82 body=78 status=ok
// SIG undefined FUN_14964ca82(void)

void FUN_14964ca82(longlong param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar2;
  
  FUN_148f71ee6(*(undefined8 *)(param_1 + 0x108));
  lVar2 = FUN_148f71fb0(*(undefined8 *)(param_1 + 0x108));
  lVar1 = **(longlong **)(param_1 + 0x120);
  if (lVar2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xb50);
                    /* WARNING: Could not recover jumptable at 0x00014964cac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(longlong **)(param_1 + 0x120),lVar2,UNRECOVERED_JUMPTABLE);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014964cac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xb58))();
  return;
}



// FUNCTION 14964cad0 FUN_14964cad0 body=534 status=ok
// SIG undefined FUN_14964cad0(void)

void FUN_14964cad0(wchar_t *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x84);
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(**(longlong **)(param_1 + 0x94) + 0x2a8))();
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if (*(longlong *)(param_1 + 0xa4) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x90) + 0x6c8);
    }
    FUN_14850635b(*(longlong *)(param_1 + 0x50));
    if (param_2 == '\x01') {
      lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
      local_48 = L"EditUVIslandsToolTransactionName";
      local_40 = 0x20;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"UEditUVIslandsTool";
      local_40 = 0x12;
      FUN_1446e940c(local_50,&local_48);
      FUN_140208bae(&local_48,local_50,local_4c,L"Edit UVs");
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_48 + 0x10))();
      }
      local_60 = FUN_14456ae26;
      local_58 = &local_48;
      local_48 = param_1;
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0xa90))();
      lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
    }
    FUN_1401bf202(*(longlong *)(param_1 + 0x90));
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x420))(*(longlong **)(param_1 + 0x90),0);
    param_1[0x90] = L'\0';
    param_1[0x91] = L'\0';
    param_1[0x92] = L'\0';
    param_1[0x93] = L'\0';
  }
  if (*(longlong *)(param_1 + 0x8c) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x8c),0,1);
    param_1[0x8c] = L'\0';
    param_1[0x8d] = L'\0';
    param_1[0x8e] = L'\0';
    param_1[0x8f] = L'\0';
  }
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)FUN_148451354(uVar2);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,param_1);
  param_1[0x9c] = L'\0';
  param_1[0x9d] = L'\0';
  param_1[0x9e] = L'\0';
  param_1[0x9f] = L'\0';
  param_1[0xa0] = L'\0';
  param_1[0xa1] = L'\0';
  param_1[0xa2] = L'\0';
  param_1[0xa3] = L'\0';
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964ccea FUN_14964ccea body=1139 status=ok
// SIG undefined FUN_14964ccea(void)

undefined4 *
FUN_14964ccea(longlong param_1,undefined4 *param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_288 [32];
  float *local_268;
  double local_260;
  double local_258;
  undefined4 *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  float local_1d0 [2];
  float local_1c8 [2];
  float local_1c0 [2];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined4 local_13c;
  code *local_138;
  undefined8 local_128;
  undefined **local_118;
  longlong local_110;
  undefined4 *local_108;
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [7];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_13c = param_3;
  FUN_1482ad0fc();
  local_128 = 0;
  local_118 = &PTR_LAB_14bdabdd0;
  local_138 = FUN_14456aee6;
  local_110 = param_1;
  local_108 = &local_13c;
  FUN_148329c88(local_f8);
  (**(code **)(*param_4 + 0x50))(param_4,&local_158,param_2,local_f8);
  *(double *)(param_2 + 4) = local_148;
  *param_2 = (undefined4)local_158;
  param_2[1] = local_158._4_4_;
  param_2[2] = (undefined4)uStack_150;
  param_2[3] = uStack_150._4_4_;
  local_250 = param_2;
  plVar13 = (longlong *)FUN_1482abc62(param_1,local_13c);
  local_148 = DAT_14c8464f0;
  local_158 = DAT_14c8464e0;
  uStack_150 = DAT_14c8464e8;
  lVar12 = plVar13[1];
  dVar11 = DAT_14c8464f0;
  dVar10 = DAT_14c8464e8;
  dVar9 = DAT_14c8464e0;
  if ((longlong)(int)lVar12 != 0) {
    lVar5 = *plVar13;
    lVar16 = 0;
    do {
      uVar3 = *(uint *)(lVar5 + lVar16);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
      lVar7 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
      uVar14 = (ulonglong)uVar3 & 0x1ff;
      uVar4 = *(uint *)(lVar7 + uVar14 * 0xc);
      lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
      uVar15 = (ulonglong)uVar4 & 0x1ff;
      local_168 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
      puVar1 = (undefined8 *)(lVar8 + uVar15 * 0x18);
      local_178 = *puVar1;
      uStack_170 = puVar1[1];
      uVar4 = *(uint *)(lVar7 + 4 + uVar14 * 0xc);
      lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
      uVar15 = (ulonglong)uVar4 & 0x1ff;
      local_188 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
      puVar1 = (undefined8 *)(lVar8 + uVar15 * 0x18);
      local_198 = *puVar1;
      uStack_190 = puVar1[1];
      uVar4 = *(uint *)(lVar7 + 8 + uVar14 * 0xc);
      lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
      uVar14 = (ulonglong)uVar4 & 0x1ff;
      local_1a8 = *(undefined8 *)(lVar6 + 0x10 + uVar14 * 0x18);
      puVar2 = (undefined4 *)(lVar6 + uVar14 * 0x18);
      local_1b8 = *puVar2;
      uStack_1b4 = puVar2[1];
      uStack_1b0 = puVar2[2];
      uStack_1ac = puVar2[3];
      local_268 = local_1d0;
      FUN_146c35244(*(undefined8 *)(param_1 + 0x180),(ulonglong)uVar3,local_1c0,local_1c8);
      local_258 = (double)local_1d0[0];
      local_260 = (double)local_1c8[0];
      local_268 = (float *)(double)local_1c0[0];
      local_208 = CONCAT44(uStack_1b4,local_1b8);
      uStack_200 = CONCAT44(uStack_1ac,uStack_1b0);
      local_1f8 = local_1a8;
      local_228 = local_198;
      uStack_220 = uStack_190;
      local_218 = local_188;
      local_248 = (undefined4)local_178;
      uStack_244 = local_178._4_4_;
      uStack_240 = (undefined4)uStack_170;
      uStack_23c = uStack_170._4_4_;
      local_238 = local_168;
      FUN_14964e438(&local_1e8,&local_248,&local_228,&local_208);
      dVar18 = SQRT(local_1d8 * local_1d8 + local_1e8 * local_1e8 + local_1e0 * local_1e0);
      dVar19 = 1.0 / dVar18;
      if (0.0 < dVar18) {
        dVar20 = local_1d8 * dVar19;
        dVar17 = local_1e0 * dVar19;
      }
      else {
        dVar20 = 0.0;
        dVar17 = 0.0;
      }
      dVar11 = dVar11 + dVar20;
      dVar10 = dVar10 + dVar17;
      dVar9 = dVar9 + (double)(-(ulonglong)(0.0 < dVar18) & (ulonglong)(local_1e8 * dVar19));
      lVar16 = lVar16 + 4;
    } while ((longlong)(int)lVar12 * 4 != lVar16);
  }
  puVar2 = local_250;
  dVar18 = SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10);
  dVar19 = 1.0 / dVar18;
  if (0.0 < dVar18) {
    local_158 = dVar9 * dVar19;
    uStack_150 = dVar10 * dVar19;
  }
  else {
    local_158 = 0.0;
    uStack_150 = 0.0;
  }
  local_148 = (double)(-(ulonglong)(0.0 < dVar18) & (ulonglong)(dVar11 * dVar19));
  FUN_1482ae234(local_250,0);
  if (local_e8 != 0) {
    if (local_d8 == (longlong *)0x0) {
      local_d8 = local_c8;
    }
    (**(code **)(*local_d8 + 0x10))();
  }
  if ((local_90 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 14964d15e FUN_14964d15e body=145 status=ok
// SIG undefined FUN_14964d15e(void)

undefined4 FUN_14964d15e(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < (int)param_1[1]) {
    local_30 = param_1 + 2;
    local_38 = 0x100000000;
    local_28 = 0xffffffff;
    local_20 = 0;
    if ((int)param_1[5] == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_38);
      lVar2 = (longlong)local_28._4_4_;
    }
    uVar1 = *(undefined4 *)(*param_1 + lVar2 * 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964d200 FUN_14964d200 body=138 status=ok
// SIG undefined FUN_14964d200(void)

undefined1 * FUN_14964d200(undefined8 param_1,undefined1 *param_2)

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



// FUNCTION 14964d294 FUN_14964d294 body=1727 status=ok
// SIG undefined FUN_14964d294(void)

void FUN_14964d294(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 auStack_2a8 [44];
  int local_27c;
  longlong local_278;
  longlong local_270;
  longlong *local_268;
  longlong *local_260;
  longlong local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_224;
  longlong *local_220;
  undefined4 local_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  uint local_208;
  int iStack_204;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  uint local_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  iVar12 = *(int *)(param_1 + 0x4d4);
  FUN_145d098fb(*(undefined8 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4d0));
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if ((iVar12 < 0) && (*(int *)(param_1 + 0x4d4) != 0)) {
    FUN_14967fc14(param_1 + 0x4c8);
  }
  FUN_14964e1d4(param_1 + 0x4c8);
  plVar1 = param_2 + 2;
  local_180 = 0x100000000;
  local_170 = 0xffffffff;
  iStack_16c = 0;
  uStack_168 = 0;
  uStack_178 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_180);
    iVar12 = (int)param_2[5];
  }
  uStack_200 = CONCAT44(uStack_164,uStack_168);
  local_208 = local_170;
  iStack_204 = iStack_16c;
  local_218 = (undefined4)local_180;
  uStack_214 = local_180._4_4_;
  uStack_210 = (undefined4)uStack_178;
  uStack_20c = uStack_178._4_4_;
  local_220 = param_2;
  if ((iStack_16c != iVar12) || (uStack_178 != plVar1)) {
    local_270 = param_1 + 0x260;
    local_278 = param_1 + 0x3f0;
    lVar11 = 0;
    local_27c = iVar12;
    local_268 = plVar1;
    local_260 = param_2;
    do {
      local_224 = *(undefined4 *)(*local_220 + (longlong)iStack_204 * 0xc);
      puVar13 = (undefined4 *)(lVar11 * 0x98 + *(longlong *)(param_1 + 0x4c8));
      local_258 = lVar11;
      FUN_1458d302c(&local_180);
      FUN_1447cbafe(&local_180,&local_1d8,&local_224,0);
      if (*(char *)(param_1 + 0x4c0) == '\x01') {
        FUN_146bee918(local_278,0);
        *(ulonglong *)(param_1 + 0x400) =
             (ulonglong)
             (uint)(*(int *)(*(longlong *)(param_1 + 0x3f8) + 0x214) +
                   *(int *)(*(longlong *)(param_1 + 0x3f8) + 0x218));
        *(undefined1 *)(param_1 + 0x4c0) = 0;
      }
      lVar11 = local_270;
      FUN_14964ccea(local_270,&local_1d8,local_224,local_278);
      *(ulonglong *)(puVar13 + 0xc) = CONCAT44(uStack_1a4,uStack_1a8);
      puVar13[8] = (undefined4)local_1b8;
      puVar13[9] = local_1b8._4_4_;
      puVar13[10] = iStack_1b0;
      puVar13[0xb] = uStack_1ac;
      *(undefined8 *)(puVar13 + 4) = local_1c8;
      *(undefined8 *)(puVar13 + 6) = uStack_1c0;
      *puVar13 = (undefined4)local_1d8;
      puVar13[1] = local_1d8._4_4_;
      puVar13[2] = (undefined4)uStack_1d0;
      puVar13[3] = uStack_1d0._4_4_;
      uVar8 = FUN_1482abc62(lVar11,local_224);
      FUN_14054c6c4(puVar13 + 0xe,uVar8);
      local_1b8 = 0;
      iStack_1b0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1ac = 0x80;
      uStack_1a8 = 0xffffffff;
      uStack_1a4 = 0;
      local_198 = 0;
      local_190 = 0;
      iVar12 = puVar13[0x10];
      if ((longlong)iVar12 != 0) {
        lVar11 = *(longlong *)(puVar13 + 0xe);
        lVar10 = 0;
        do {
          uVar4 = *(int *)(lVar11 + lVar10) * 3;
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x78);
          iVar7 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                          (ulonglong)(uVar4 & 0x1ff) * 4);
          if (-1 < iVar7) {
            local_250 = (longlong *)
                        CONCAT44(*(undefined4 *)
                                  (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                                  (ulonglong)(uVar4 + 1 & 0x1ff) * 4),iVar7);
            local_248 = CONCAT44(local_248._4_4_,
                                 *(undefined4 *)
                                  (*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                                  (ulonglong)(uVar4 + 2 & 0x1ff) * 4));
            FUN_1447cbafe(&local_1d8,&local_1f8,&local_250,0);
            FUN_1447cbafe(&local_1d8,&local_1f8,(longlong)&local_250 + 4,0);
            FUN_1447cbafe(&local_1d8,&local_1f8,&local_248,0);
          }
          lVar10 = lVar10 + 4;
        } while ((longlong)iVar12 * 4 != lVar10);
      }
      *(undefined8 *)(puVar13 + 0x16) = 0x7fefffffffffffff;
      *(undefined8 *)(puVar13 + 0x18) = 0x7fefffffffffffff;
      *(undefined8 *)(puVar13 + 0x1a) = 0xffefffffffffffff;
      *(undefined8 *)(puVar13 + 0x1c) = 0xffefffffffffffff;
      local_1f8 = 0x100000000;
      local_1f0 = &local_1c8;
      local_1e8 = 0xffffffff;
      local_1e0 = 0;
      iVar12 = 0;
      if (iStack_1b0 != 0) {
        FUN_1449c0562(&local_1f8);
        iVar12 = iStack_1b0;
      }
      local_238 = local_1e8;
      uVar8 = local_238;
      local_230 = local_1e0;
      local_22c = local_1dc;
      local_248 = local_1f8;
      local_240 = local_1f0;
      local_238._4_4_ = (int)((ulonglong)local_1e8 >> 0x20);
      local_250 = &local_1d8;
      if ((local_238._4_4_ != iVar12) || (local_1f0 != &local_1c8)) {
        iVar7 = local_238._4_4_;
        local_238 = uVar8;
        do {
          uVar4 = *(uint *)(*local_250 + (longlong)iVar7 * 0xc);
          iVar7 = puVar13[0x14];
          puVar13[0x14] = iVar7 + 1U;
          if ((uint)puVar13[0x15] < iVar7 + 1U) {
            FUN_1446f48e2(puVar13 + 0x12,iVar7);
          }
          *(uint *)(*(longlong *)(puVar13 + 0x12) + (longlong)iVar7 * 4) = uVar4;
          lVar11 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x3e0) + 0x48) +
                    (ulonglong)(uVar4 >> 5 & 0x3fffff8));
          uVar9 = (ulonglong)((uVar4 & 0xff) << 3);
          fVar2 = *(float *)(lVar11 + uVar9);
          fVar3 = *(float *)(lVar11 + 4 + uVar9);
          iVar7 = puVar13[0x24];
          puVar13[0x24] = iVar7 + 1U;
          if ((uint)puVar13[0x25] < iVar7 + 1U) {
            FUN_140752556(puVar13 + 0x22,iVar7);
          }
          lVar11 = *(longlong *)(puVar13 + 0x22);
          *(float *)(lVar11 + (longlong)iVar7 * 8) = fVar2;
          *(float *)(lVar11 + 4 + (longlong)iVar7 * 8) = fVar3;
          dVar6 = (double)fVar2;
          if (dVar6 < *(double *)(puVar13 + 0x16)) {
            *(double *)(puVar13 + 0x16) = dVar6;
          }
          if (*(double *)(puVar13 + 0x1a) <= dVar6 && dVar6 != *(double *)(puVar13 + 0x1a)) {
            *(double *)(puVar13 + 0x1a) = dVar6;
          }
          dVar6 = (double)fVar3;
          if (dVar6 < *(double *)(puVar13 + 0x18)) {
            *(double *)(puVar13 + 0x18) = dVar6;
          }
          if (*(double *)(puVar13 + 0x1c) <= dVar6 && dVar6 != *(double *)(puVar13 + 0x1c)) {
            *(double *)(puVar13 + 0x1c) = dVar6;
          }
          local_238 = CONCAT44(local_238._4_4_,(uint)local_238 & ~local_248._4_4_);
          FUN_1449c0562(&local_248);
          iVar7 = local_238._4_4_;
          uVar8 = local_238;
        } while (local_250 != &local_1d8 || (local_240 != &local_1c8 || local_238._4_4_ != iVar12));
      }
      local_238 = uVar8;
      *(double *)(puVar13 + 0x1e) =
           (*(double *)(puVar13 + 0x16) + *(double *)(puVar13 + 0x1a)) * 0.5;
      *(double *)(puVar13 + 0x20) =
           (*(double *)(puVar13 + 0x18) + *(double *)(puVar13 + 0x1c)) * 0.5;
      local_190 = 0;
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      lVar11 = local_258 + 1;
      FUN_1447a082e(&local_1d8);
      FUN_1456c3cc8(&local_180);
      local_208 = local_208 & ~uStack_214;
      FUN_1449c0562(&local_218);
    } while (local_220 != local_260 ||
             ((longlong *)CONCAT44(uStack_20c,uStack_210) != local_268 || iStack_204 != local_27c));
  }
  if ((local_90 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964d954 FUN_14964d954 body=77 status=ok
// SIG undefined FUN_14964d954(void)

void FUN_14964d954(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    return;
  }
  uVar1 = FUN_14001cc68(0x150,0x10);
  FUN_1484ad3de(uVar1,4);
  *(undefined8 *)(param_1 + 0x4d8) = uVar1;
  FUN_14964e9cc(param_1,0);
  return;
}



// FUNCTION 14964d9a2 FUN_14964d9a2 body=1725 status=ok
// SIG undefined FUN_14964d9a2(void)

void FUN_14964d9a2(longlong *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_218 [40];
  double local_1f0;
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
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  cVar12 = FUN_1485316a8(param_1[0x25]);
  if (cVar12 != '\0') {
    (**(code **)(*(longlong *)param_1[0x28] + 0x2b0))((longlong *)param_1[0x28],&local_128);
    dVar2 = local_120;
    local_1f0 = local_128;
    local_1e8 = local_118;
    (**(code **)(*(longlong *)param_1[0x28] + 0x2b0))((longlong *)param_1[0x28],&local_128);
    local_160 = local_f8 - (double)param_1[0x44];
    local_170 = local_100 - (double)param_1[0x43];
    local_168 = local_108 - (double)param_1[0x42];
    local_1c8 = (double)param_1[0x48];
    local_1c0 = (double)param_1[0x47];
    local_1b0 = (double)param_1[0x46];
    local_1b8 = (double)param_1[0x45];
    local_1d0 = local_d8 - (double)param_1[0x4b];
    dVar9 = local_1b0 + local_1b0;
    dVar5 = local_1c0 + local_1c0;
    local_190 = local_1c0 * dVar5;
    dVar10 = 1.0 - (local_190 + local_1b0 * dVar9);
    local_198 = local_1c8 * (local_1b8 + local_1b8);
    dVar7 = (local_1b8 + local_1b8) * local_1b8;
    local_118 = 1.0 - (local_1b0 * dVar9 + dVar7);
    local_180 = local_e0;
    local_1e0 = local_e0 - (double)param_1[0x4a];
    local_178 = local_e8;
    local_1d8 = local_e8 - (double)param_1[0x49];
    dVar6 = dVar5 * local_1b8 - local_1c8 * dVar9;
    local_128 = dVar5 * local_1b8 + local_1c8 * dVar9;
    local_188 = (double)param_1[0x41];
    local_1a0 = local_1c8 * dVar5;
    dVar5 = dVar5 * local_1b0;
    dVar20 = local_120 + local_120;
    dVar22 = local_1e8 + local_1e8;
    local_138 = local_1f0 * dVar20 + local_110 * dVar22;
    local_1a8 = local_110;
    local_130 = local_1f0 * dVar22 - dVar20 * local_110;
    local_140 = 1.0 - (dVar22 * local_1e8 + dVar20 * local_120);
    dVar9 = dVar9 * local_1b8;
    dVar20 = local_1a0 + dVar9;
    local_158 = dVar10;
    local_150 = dVar20;
    local_148 = dVar6;
    local_120 = dVar5 - local_198;
    dVar22 = (double)FUN_146c6a283(&local_158,&local_140,&local_128);
    dVar21 = cos(dVar22 * -0.017453292519943295);
    dVar22 = sin(dVar22 * -0.017453292519943295);
    lVar13 = (**(code **)(*(longlong *)param_1[0x24] + 0xa88))();
    if (*(int *)(*(longlong *)(lVar13 + 0x208) + 0x28) < 1) {
      lVar13 = 0;
    }
    else {
      lVar13 = **(longlong **)(*(longlong *)(lVar13 + 0x208) + 0x20);
    }
    bVar11 = true;
    if (local_160 * local_160 + local_168 * local_168 + local_170 * local_170 <= 0.0001) {
      if ((local_1a8 - local_1c8) * (local_1a8 - local_1c8) +
          (local_1e8 - local_1c0) * (local_1e8 - local_1c0) +
          (local_1f0 - local_1b8) * (local_1f0 - local_1b8) +
          (dVar2 - local_1b0) * (dVar2 - local_1b0) <= 0.0001) {
        bVar11 = 0.0001 < local_1d0 * local_1d0 + local_1d8 * local_1d8 + local_1e0 * local_1e0;
      }
    }
    if ((longlong)(int)param_1[0x9a] != 0) {
      lVar15 = param_1[0x99];
      lVar17 = (longlong)(int)param_1[0x9a] * 0x98 + lVar15;
      do {
        iVar4 = *(int *)(lVar15 + 0x50);
        if (0 < (longlong)iVar4) {
          dVar2 = *(double *)(lVar15 + 0x78);
          dVar3 = *(double *)(lVar15 + 0x80);
          lVar18 = 0;
          do {
            uVar19 = *(uint *)(*(longlong *)(lVar15 + 0x48) + lVar18 * 4);
            fVar1 = *(float *)(*(longlong *)(lVar15 + 0x88) + lVar18 * 8);
            fVar23 = *(float *)(*(longlong *)(lVar15 + 0x88) + 4 + lVar18 * 8);
            if (bVar11) {
              dVar8 = ((double)fVar23 - *(double *)(lVar15 + 0x80)) * (1.0 / local_180);
              dVar24 = ((double)fVar1 - *(double *)(lVar15 + 0x78)) * (1.0 / local_178);
              uVar16 = (ulonglong)((uVar19 & 0x7fffffff) >> 8);
              uVar19 = uVar19 * 2 & 0x1fe;
              *(float *)(*(longlong *)(*(longlong *)(lVar13 + 0x48) + uVar16 * 8) +
                        (ulonglong)uVar19 * 4) =
                   (float)(dVar24 * dVar21 + dVar8 * -dVar22 +
                          (dVar2 - (dVar6 * local_160 + dVar10 * local_168 + dVar20 * local_170) *
                                   local_188));
              fVar23 = (float)(dVar22 * dVar24 + dVar21 * dVar8 +
                              (dVar3 - ((dVar5 + local_198) * local_160 +
                                       (dVar9 - local_1a0) * local_168 +
                                       (1.0 - (local_190 + dVar7)) * local_170) * local_188));
            }
            else {
              uVar16 = (ulonglong)((uVar19 & 0x7fffffff) >> 8);
              uVar19 = uVar19 * 2 & 0x1fe;
              *(float *)(*(longlong *)(*(longlong *)(lVar13 + 0x48) + uVar16 * 8) +
                        (ulonglong)uVar19 * 4) = fVar1;
            }
            *(float *)(*(longlong *)(*(longlong *)(lVar13 + 0x48) + uVar16 * 8) +
                      (ulonglong)(uVar19 << 2 | 4)) = fVar23;
            lVar18 = lVar18 + 1;
          } while (iVar4 != lVar18);
        }
        lVar15 = lVar15 + 0x98;
      } while (lVar15 != lVar17);
    }
    thunk_FUN_1484b2d8e(param_1[0x24]);
    plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar14 + 0x348))(plVar14);
  }
  if ((local_c0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964e060 FUN_14964e060 body=315 status=ok
// SIG undefined FUN_14964e060(void)

void FUN_14964e060(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x9b] != 0) {
    FUN_14964e9cc(param_1,1);
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"UVEditChange";
    local_40 = 0xc;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UEditUVIslandsTool";
    local_40 = 0x12;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"UV Edit");
    local_58 = *(undefined8 *)param_1[0x9b];
    *(undefined8 *)param_1[0x9b] = 0;
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))
              (lVar1 + 0x28,param_1[0x24],&local_58,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    lVar1 = param_1[0x9b];
    if (lVar1 != 0) {
      FUN_14854b8a8(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  param_1[0x9b] = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964e19c FUN_14964e19c body=45 status=ok
// SIG undefined FUN_14964e19c(void)

undefined8 FUN_14964e19c(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x428) == 0) && (*(char *)(param_1 + 0x150) == '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2d8))();
  }
  return 1;
}



// FUNCTION 14964e1d4 FUN_14964e1d4 body=121 status=ok
// SIG undefined FUN_14964e1d4(void)

void FUN_14964e1d4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14967fcba(param_1,iVar1);
    }
    FUN_14967fc44((longlong)iVar1 * 0x98 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14967fd4e(param_1,param_2,iVar1 - param_2);
    FUN_14967fdb0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14964e24e FUN_14964e24e body=83 status=ok
// SIG undefined FUN_14964e24e(void)

void FUN_14964e24e(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_1484b31c2(*(undefined8 *)(param_1 + 0x120));
    plVar1 = *(longlong **)(param_1 + 0x138);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_1485316a8(*(undefined8 *)(param_1 + 0x128));
      (**(code **)(*plVar1 + 0x350))(plVar1,uVar2);
    }
    *(undefined1 *)(param_1 + 0x130) = 0;
  }
  return;
}



// FUNCTION 14964e2a2 FUN_14964e2a2 body=125 status=ok
// SIG undefined FUN_14964e2a2(void)

longlong * FUN_14964e2a2(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1482aa55c(param_1,param_2,0);
  *param_1 = (longlong)&PTR_FUN_14bd93990;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if (iVar1 != 0) {
      if (*(int *)(*(longlong *)(param_2 + 0x208) + 0x28) < 1) {
        lVar2 = 0;
      }
      else {
        lVar2 = **(longlong **)(*(longlong *)(param_2 + 0x208) + 0x20);
      }
      param_1[0x30] = lVar2;
      FUN_14964e320(param_1);
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return param_1;
}



// FUNCTION 14964e320 FUN_14964e320 body=279 status=ok
// SIG undefined FUN_14964e320(void)

void FUN_14964e320(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_80 = *(undefined8 *)(param_1 + 0x80);
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_58 = 0;
    local_48 = &PTR_LAB_14bdabdb0;
    local_68 = &LAB_14456ae8a;
    local_40 = param_1;
    FUN_142984024(&local_80);
    FUN_144a127d2((longlong *)(param_1 + 0x170),
                  *(int *)(*(longlong *)(param_1 + 0x80) + 0x140) * 0x200 +
                  *(int *)(*(longlong *)(param_1 + 0x80) + 0x144),1);
    if ((longlong)(int)uStack_70 != 0) {
      iVar3 = 1;
      plVar2 = local_78;
      do {
        lVar4 = (longlong)(int)((longlong *)*plVar2)[1];
        if (lVar4 != 0) {
          lVar1 = *(longlong *)*plVar2;
          lVar5 = 0;
          do {
            *(int *)(*(longlong *)(param_1 + 0x170) + (longlong)*(int *)(lVar1 + lVar5) * 4) = iVar3
            ;
            lVar5 = lVar5 + 4;
          } while (lVar4 * 4 != lVar5);
        }
        iVar3 = iVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (plVar2 != local_78 + (int)uStack_70);
    }
    FUN_146be9400(&local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964e438 FUN_14964e438 body=1274 status=ok
// SIG undefined FUN_14964e438(void)

double * FUN_14964e438(double *param_1,double *param_2,double *param_3,double *param_4,
                      double param_5,double param_6,double param_7)

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
  undefined1 auStack_1b8 [40];
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
  undefined1 local_f8 [24];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar5 = (param_3[2] + param_2[2] + param_4[2]) * 0.3333333333333333;
  dVar8 = (param_3[1] + param_2[1] + param_4[1]) * 0.3333333333333333;
  dVar9 = (*param_3 + *param_2 + *param_4) * 0.3333333333333333;
  *param_2 = *param_2 - dVar9;
  param_2[1] = param_2[1] - dVar8;
  param_2[2] = param_2[2] - dVar5;
  *param_3 = *param_3 - dVar9;
  param_3[1] = param_3[1] - dVar8;
  param_3[2] = param_3[2] - dVar5;
  *param_4 = *param_4 - dVar9;
  param_4[1] = param_4[1] - dVar8;
  param_4[2] = param_4[2] - dVar5;
  FUN_146baf581(local_f8);
  FUN_146bb5db8(local_f8,&local_110,&local_128);
  dVar5 = *param_2;
  dVar8 = param_2[1];
  local_170 = local_128;
  local_148 = param_3[1];
  local_130 = local_120 * local_148;
  local_138 = local_108 * local_148;
  local_148 = local_148 - dVar8;
  local_140 = local_120;
  dVar9 = param_2[2];
  local_190 = local_118;
  dVar6 = dVar9 * local_118 + dVar5 * local_128 + dVar8 * local_120;
  dVar1 = param_4[1];
  local_168 = local_120 * dVar1;
  local_150 = local_108;
  local_160 = local_108 * dVar1;
  dVar2 = *param_3;
  local_158 = dVar2 - dVar5;
  local_178 = *param_4;
  local_180 = local_110;
  dVar3 = param_3[2];
  dVar4 = param_4[2];
  local_188 = local_100;
  dVar7 = dVar9 * local_100 + dVar5 * local_110 + dVar8 * local_108;
  dVar6 = (param_7 - param_5) * ((dVar3 * local_118 + dVar2 * local_128 + local_130) - dVar6) +
          (dVar6 - (dVar4 * local_118 + local_178 * local_128 + local_168)) * (param_6 - param_5);
  dVar10 = -((dVar3 * local_100 + dVar2 * local_110 + local_138) - dVar7) * (param_7 - param_5) -
           (dVar7 - (dVar4 * local_100 + local_178 * local_110 + local_160)) * (param_6 - param_5);
  dVar2 = (local_178 - dVar5) * local_148 - local_158 * (dVar1 - dVar8);
  dVar7 = (dVar4 - dVar9) * local_158 - (dVar3 - dVar9) * (local_178 - dVar5);
  dVar5 = (dVar1 - dVar8) * (dVar3 - dVar9) - (dVar4 - dVar9) * local_148;
  dVar5 = SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar7 * dVar7) * 0.5;
  dVar5 = 1.0 / (dVar5 + dVar5);
  *param_1 = (dVar10 * local_128 + dVar6 * local_110) * dVar5;
  param_1[1] = (local_120 * dVar10 + local_108 * dVar6) * dVar5;
  param_1[2] = (local_118 * dVar10 + local_100 * dVar6) * dVar5;
  if ((local_e0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964e934 FUN_14964e934 body=117 status=ok
// SIG undefined FUN_14964e934(void)

longlong FUN_14964e934(longlong param_1,longlong param_2)

{
  FUN_148466536();
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
    *(undefined8 *)(param_2 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
    *(undefined8 *)(param_2 + 0x178) = 0;
  }
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  return param_1;
}



// FUNCTION 14964e9cc FUN_14964e9cc body=282 status=ok
// SIG undefined FUN_14964e9cc(void)

void FUN_14964e9cc(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    local_60 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0xa88))();
    local_58 = 0;
    uStack_50 = 0;
    iVar1 = *(int *)(param_1 + 0x4d0);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x4c8);
      lVar6 = 0;
      do {
        uVar5 = uStack_50;
        uVar2 = *(uint *)(lVar3 + 0x50 + lVar6);
        if ((longlong)(int)uVar2 != 0) {
          iVar4 = (int)uStack_50;
          lVar7 = (longlong)(int)uStack_50;
          uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + uVar2);
          if ((uint)(uStack_50._4_4_ - iVar4) < uVar2) {
            FUN_1446f48e2(&local_58,uVar5 & 0xffffffff);
          }
          memcpy((void *)(lVar7 * 4 + local_58),*(void **)(lVar3 + 0x48 + lVar6),
                 (longlong)(int)uVar2 << 2);
        }
        lVar6 = lVar6 + 0x98;
      } while ((longlong)iVar1 * 0x98 - lVar6 != 0);
    }
    FUN_1484ae2c6(*(undefined8 *)(param_1 + 0x4d8),local_60,&local_58,param_2 ^ 1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964eb14 FUN_14964eb14 body=84 status=ok
// SIG undefined FUN_14964eb14(void)

void FUN_14964eb14(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014964eb5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3a8))(plVar2,2,*(code **)(*plVar2 + 0x3a8));
    return;
  }
  return;
}



// FUNCTION 14964eb68 FUN_14964eb68 body=84 status=ok
// SIG undefined FUN_14964eb68(void)

void FUN_14964eb68(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014964ebb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x3a8))(plVar2,1,*(code **)(*plVar2 + 0x3a8));
    return;
  }
  return;
}



// FUNCTION 14964ebd5 FUN_14964ebd5 body=148 status=ok
// SIG undefined FUN_14964ebd5(void)

undefined8 FUN_14964ebd5(undefined8 param_1)

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
  uVar1 = FUN_1459fa8fa();
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



// FUNCTION 14964ec6a FUN_14964ec6a body=142 status=ok
// SIG undefined FUN_14964ec6a(void)

bool FUN_14964ec6a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1484cb076();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = FUN_14456afea;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964ecfa FUN_14964ecfa body=648 status=ok
// SIG undefined FUN_14964ecfa(void)

void FUN_14964ecfa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x228) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x228) + 0x10);
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a83b10(&local_38,uVar1);
    if ((longlong *)(param_1 + 0xa8) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xa8) = local_38;
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0xb4) = uStack_30._4_4_;
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a83b10(&local_38,0);
    if ((longlong *)(param_1 + 0xb8) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xb8) = local_38;
      *(undefined4 *)(param_1 + 0xc0) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0xc4) = uStack_30._4_4_;
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a83b10(&local_38,0);
    if ((longlong *)(param_1 + 200) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 200) = local_38;
      *(undefined4 *)(param_1 + 0xd0) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0xd4) = uStack_30._4_4_;
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a83b10(&local_38,0);
    if ((longlong *)(param_1 + 0xd8) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xd8) = local_38;
      *(undefined4 *)(param_1 + 0xe0) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0xe4) = uStack_30._4_4_;
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a83b10(&local_38,uVar1);
    if ((longlong *)(param_1 + 0xe8) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xe8) = local_38;
      *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0xf4) = uStack_30._4_4_;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964ef84 FUN_14964ef84 body=683 status=ok
// SIG undefined FUN_14964ef84(void)

void FUN_14964ef84(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_2 + 0x228) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x228) + 0x10);
    iVar2 = *(int *)(param_3 + 0xb0);
    iVar3 = *(int *)(param_3 + 0x100);
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a83b10(&local_48,iVar1);
    if ((longlong *)(param_1 + 0xa8) == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xa8) = local_48;
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0xb4) = uStack_40._4_4_;
    }
    iVar4 = iVar2 - iVar3;
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a83b10(&local_48,iVar2);
    if ((longlong *)(param_1 + 0xb8) == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xb8) = local_48;
      *(undefined4 *)(param_1 + 0xc0) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0xc4) = uStack_40._4_4_;
    }
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a83b10(&local_48,iVar4);
    if ((longlong *)(param_1 + 200) == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 200) = local_48;
      *(undefined4 *)(param_1 + 0xd0) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0xd4) = uStack_40._4_4_;
    }
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a83b10(&local_48,iVar3);
    if ((longlong *)(param_1 + 0xd8) == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xd8) = local_48;
      *(undefined4 *)(param_1 + 0xe0) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0xe4) = uStack_40._4_4_;
    }
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a83b10(&local_48,iVar1 - iVar4);
    if ((longlong *)(param_1 + 0xe8) == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0xe8) = local_48;
      *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0xf4) = uStack_40._4_4_;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964f230 FUN_14964f230 body=692 status=ok
// SIG undefined FUN_14964f230(void)

undefined8 * FUN_14964f230(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *_Dst;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  _Dst = (longlong *)FUN_14001cc68(0x108);
  plVar10 = (longlong *)0x0;
  memset(_Dst,0,0x108);
  FUN_14845abbc(_Dst);
  *_Dst = (longlong)&PTR_FUN_14af79090;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  *(undefined1 *)(_Dst + 0x13) = 3;
  _Dst[0x14] = 0x3ff0000000000000;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  *(undefined2 *)(_Dst + 0x17) = 0;
  *(undefined1 *)(_Dst + 0x18) = 1;
  _Dst[0x19] = 0x3fc999999999999a;
  _Dst[0x1a] = (longlong)&DAT_200000002;
  *(undefined4 *)(_Dst + 0x1b) = 2;
  _Dst[0x1c] = 0x3ff0000000000000;
  *(undefined1 *)(_Dst + 0x1d) = 0;
  _Dst[0x1e] = 0;
  _Dst[0x1f] = 0;
  *(undefined4 *)(_Dst + 0x20) = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0);
  if (lVar6 != 0) {
    uVar9 = FUN_145a7b1c0();
    plVar10 = (longlong *)FUN_144718840(lVar6,uVar9);
  }
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_98);
  local_e8 = local_98;
  uStack_e0 = uStack_90;
  local_d8 = local_88;
  uStack_d0 = uStack_80;
  local_c8 = local_78;
  uStack_c4 = uStack_74;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  local_b8 = local_68;
  local_b0 = local_58;
  uStack_ac = uStack_54;
  uStack_a8 = uStack_50;
  uStack_a4 = uStack_4c;
  local_a0 = local_48;
  (**(code **)(*_Dst + 8))(_Dst);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe8);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)_Dst[0x12];
  _Dst[0x11] = lVar6;
  _Dst[0x12] = lVar7;
  if (plVar10 != (longlong *)0x0) {
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
  }
  lVar6 = *(longlong *)(param_1 + 8);
  _Dst[0x14] = (longlong)(double)*(float *)(lVar6 + 0xf0);
  FUN_14964f4e6(lVar6,_Dst + 0x15);
  lVar6 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(_Dst + 0x13) = *(undefined1 *)(*(longlong *)(lVar6 + 0xb8) + 0xa8);
  *(undefined1 *)(_Dst + 0x17) = *(undefined1 *)(*(longlong *)(lVar6 + 0xb8) + 0xa9);
  *(undefined1 *)((longlong)_Dst + 0xb9) = *(undefined1 *)(*(longlong *)(lVar6 + 0xb8) + 0xaa);
  lVar7 = *(longlong *)(lVar6 + 0xb0);
  lVar8 = *(longlong *)(lVar7 + 0xac);
  uVar5 = *(undefined4 *)(lVar7 + 0xb4);
  fVar3 = *(float *)(lVar7 + 0xb8);
  lVar6 = *(longlong *)(lVar7 + 0xc0);
  uVar4 = *(undefined1 *)(lVar7 + 200);
  *(undefined1 *)(_Dst + 0x18) = *(undefined1 *)(lVar7 + 0xa8);
  _Dst[0x19] = (longlong)(double)fVar3;
  _Dst[0x1a] = lVar8;
  *(undefined4 *)(_Dst + 0x1b) = uVar5;
  _Dst[0x1c] = lVar6;
  *(undefined1 *)(_Dst + 0x1d) = uVar4;
  *param_2 = _Dst;
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964f4e6 FUN_14964f4e6 body=260 status=ok
// SIG undefined FUN_14964f4e6(void)

void FUN_14964f4e6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_146be9485(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_146c7f0ca(param_2,0);
  }
  iVar1 = *(int *)(param_1 + 0x238);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x230);
    lVar6 = 0;
    do {
      uVar5 = **(uint **)(lVar3 + 8 + lVar6);
      if ((*(int *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x1c0) +
                     (ulonglong)(uVar5 >> 9) * 8) + 0xc + (ulonglong)((uVar5 & 0x1ff) << 4)) == -1)
         && (uVar5 = FUN_146c68afe(*(undefined8 *)(param_1 + 0x228)), -1 < (int)uVar5)) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x228) + 8);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_146c7f410(param_2,iVar2);
        }
        FUN_146c7f310((longlong)iVar2 * 0x40 + *param_2,(ulonglong)uVar5 * 0x40 + lVar4);
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return;
}



// FUNCTION 14964f5ea FUN_14964f5ea body=3167 status=ok
// SIG undefined FUN_14964f5ea(void)

void FUN_14964f5ea(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_458 [32];
  ulonglong local_438;
  undefined1 **local_430;
  char local_41d;
  undefined1 local_41c [4];
  undefined1 local_418 [104];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  code *local_388 [2];
  undefined ***local_378;
  undefined **local_368;
  undefined1 *local_360;
  code *local_348 [2];
  undefined ***local_338;
  undefined **local_328;
  undefined1 *local_320;
  undefined1 *local_308 [2];
  undefined8 local_2f8;
  undefined **local_2e8;
  longlong *local_2e0;
  undefined1 *local_2c8;
  undefined8 local_2b8;
  undefined **local_2a8;
  longlong *local_2a0;
  code *local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  FUN_1484416be();
  if (param_1[0x14] == 0) goto LAB_14964f629;
  plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149fab260;
  local_438 = local_438 & 0xffffffffffffff00;
  FUN_1411b354a(plVar6 + 2,0,0,0);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x1c] = 0x10;
    plVar7 = (longlong *)param_1[0x1d];
    if (plVar7 != (longlong *)0x0) {
      param_1[0x1d] = 0;
LAB_14964f6d0:
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_14964f73d;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x1c] = (longlong)(plVar6 + 2);
    plVar7 = (longlong *)param_1[0x1d];
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      param_1[0x1d] = (longlong)plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_14964f6d0;
    }
LAB_14964f73d:
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  local_390 = 0;
  local_398 = 0x3e800000000;
  FUN_148506727(&local_280,param_1[0x14]);
  plVar6 = param_1 + 0x1c;
  FUN_146c00942(*plVar6,&local_280);
  FUN_141082778(&local_280);
  FUN_1446f470e(&local_3a0,L"Hole Fill Settings",1);
  plVar7 = (longlong *)FUN_14965024a(param_1,local_3a0);
  if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar7);
  }
  param_1[0x17] = (longlong)plVar7;
  FUN_140056680(&local_280,&DAT_149dfb77a);
  (**(code **)(*plVar7 + 0x2a8))(plVar7,param_1,&local_280);
  if (local_280 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x17]);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x17],1);
  FUN_1446f470e(&local_3a8,L"Smooth Fill Settings",1);
  plVar7 = (longlong *)FUN_149650302(param_1,local_3a8);
  if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar7);
  }
  param_1[0x16] = (longlong)plVar7;
  FUN_140056680(&local_280,&DAT_149dfb77a);
  (**(code **)(*plVar7 + 0x2a8))(plVar7,param_1,&local_280);
  if (local_280 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x16]);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x16],*(char *)(param_1[0x17] + 0xa8) == '\x04');
  local_2b8 = 0;
  local_2a8 = &PTR_LAB_14bdabe70;
  local_2c8 = &LAB_14456affe;
  local_2a0 = param_1;
  FUN_1496503ba(param_1[0x17] + 0x28,param_1[0x17] + 0xa8);
  FUN_1446f470e(&local_3b0,L"Hole Fill Actions",1);
  lVar8 = FUN_14965048f(param_1,local_3b0);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  param_1[0x18] = lVar8;
  FUN_14485c47a(lVar8 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x18],1);
  uVar9 = FUN_1409ffe1d();
  lVar8 = FUN_149650547(uVar9);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  param_1[0x19] = lVar8;
  (**(code **)(*param_1 + 0x308))(param_1,lVar8);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],1);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  iVar5 = (int)param_1[0xe];
  *(uint *)(param_1 + 0xe) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0x74) < iVar5 + 1U) {
    FUN_140845902(param_1 + 0xd,iVar5);
  }
  *(longlong **)(param_1[0xd] + (longlong)iVar5 * 8) = param_1;
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  param_1[0x21] = param_1[0x1c];
  param_1[0x22] = 0;
  FUN_146bee918(param_1 + 0x20,0);
  param_1[0x22] =
       (ulonglong)(uint)(*(int *)(param_1[0x21] + 0x214) + *(int *)(param_1[0x21] + 0x218));
  lVar8 = param_1[0x1c];
  plVar7 = (longlong *)FUN_14001cc68(0xa0,0x10);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x1b) = 0;
  *(undefined8 *)((longlong)plVar7 + 0x23) = 0;
  *(undefined1 **)((longlong)plVar7 + 0x2c) = &DAT_100000002;
  plVar7[8] = 0;
  plVar7[10] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  *plVar7 = lVar8;
  FUN_146c68b4c(plVar7);
  lVar8 = param_1[0x45];
  param_1[0x45] = (longlong)plVar7;
  if (lVar8 != 0) {
    FUN_1482f1656(lVar8);
    FUN_1400020a8(lVar8);
    plVar7 = (longlong *)param_1[0x45];
  }
  local_41d = (char)plVar7[5];
  if ((local_41d == '\0') && (0 < (longlong)(int)plVar7[4])) {
    lVar8 = (longlong)(int)plVar7[4] << 6;
    puVar11 = (undefined8 *)(plVar7[3] + 8);
    do {
      if (1 < (longlong)*(int *)(puVar11 + 1)) {
        iVar5 = FUN_146c061e0(*plVar6,*(undefined4 *)*puVar11,
                              ((undefined4 *)*puVar11)[(longlong)*(int *)(puVar11 + 1) + -1]);
        if (iVar5 != -1) {
          local_280 = (code *)*plVar6;
          local_258 = 0.0;
          uStack_250 = 0;
          local_268 = 0.0;
          dStack_260 = 0.0;
          local_278 = 0.0;
          dStack_270 = 0.0;
          local_248 = 0;
          cVar4 = FUN_146c5d50a(&local_280,puVar11,1);
          if (cVar4 != '\0') {
            lVar3 = param_1[0x45];
            iVar5 = *(int *)(lVar3 + 0x10);
            *(uint *)(lVar3 + 0x10) = iVar5 + 1U;
            if (*(uint *)(lVar3 + 0x14) < iVar5 + 1U) {
              FUN_146c7f410((longlong *)(lVar3 + 8),iVar5);
            }
            FUN_146c7f310((longlong)iVar5 * 0x40 + *(longlong *)(lVar3 + 8),&local_280);
          }
          FUN_146bc7c1a(&local_280);
        }
      }
      puVar11 = puVar11 + 8;
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
    lVar8 = param_1[0x45];
    FUN_146c7d72c(*(undefined8 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x20));
    *(undefined4 *)(lVar8 + 0x20) = 0;
    if (*(int *)(lVar8 + 0x24) != 0) {
      FUN_146c7f12a(lVar8 + 0x18,0);
    }
  }
  lVar8 = param_1[0x14];
  if (lVar8 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar9 = FUN_145a7b1c0();
    plVar6 = (longlong *)FUN_144718840(lVar8,uVar9);
  }
  lVar8 = FUN_1496505dc(param_1);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar8);
  }
  param_1[0x1b] = lVar8;
  *(undefined1 *)(lVar8 + 0x40) = 0;
  (**(code **)(*(longlong *)param_1[0x1b] + 0x2a0))((longlong *)param_1[0x1b],param_1);
  *(undefined1 *)(*(longlong *)(param_1[0x1b] + 0x78) + 0xa9) = 1;
  *(undefined1 *)(*(longlong *)(param_1[0x1b] + 0x78) + 0xaa) = 0;
  *(undefined1 *)(*(longlong *)(param_1[0x1b] + 0x78) + 0xa8) = 0;
  lVar8 = param_1[0x1b];
  local_2f8 = 0;
  local_2e8 = &PTR_LAB_14bdabe90;
  local_308[0] = &LAB_14456b064;
  uVar12 = param_1[0x45];
  local_2e0 = param_1;
  uVar9 = (**(code **)(*param_1 + 0x3a0))(param_1);
  (**(code **)(*plVar6 + 0x28))(plVar6,local_418);
  local_438 = uVar12;
  local_430 = local_308;
  FUN_148523dfc(lVar8,param_1[0x1c],local_418,uVar9);
  local_338 = (undefined ***)0x0;
  local_328 = &PTR_LAB_149f36510;
  local_320 = &LAB_14456b0b6;
  local_348[0] = FUN_146bd3274;
  FUN_146ffcba0(param_1[0x1b] + 0x180,local_348);
  if (local_348[0] != (code *)0x0) {
    pppuVar10 = local_338;
    if (local_338 == (undefined ***)0x0) {
      pppuVar10 = &local_328;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_378 = (undefined ***)0x0;
  local_368 = &PTR_LAB_149f36510;
  local_360 = &LAB_14456b0ba;
  local_388[0] = FUN_146bd3274;
  FUN_146ffcba0(param_1[0x1b] + 0x1c0,local_388);
  if (local_388[0] != (code *)0x0) {
    pppuVar10 = local_378;
    if (local_378 == (undefined ***)0x0) {
      pppuVar10 = &local_368;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_280 = FUN_14965074e;
  local_278 = (double)((ulonglong)local_278 & 0xffffffff00000000);
  FUN_149650672(param_1[0x1b] + 0x48,&local_398,param_1);
  FUN_145c688c4(param_1[0x1c],&local_280,0);
  dVar13 = (double)(-(ulonglong)(0.0 <= local_258 - dStack_270) &
                   (ulonglong)(local_258 - dStack_270));
  dVar14 = (double)(-(ulonglong)(0.0 <= dStack_260 - local_278) &
                   (ulonglong)(dStack_260 - local_278));
  uVar12 = -(ulonglong)(dVar13 <= dVar14);
  dVar14 = (double)(~uVar12 & (ulonglong)dVar13 | uVar12 & (ulonglong)dVar14);
  dVar13 = (double)(-(ulonglong)(0.0 <= local_268 - (double)local_280) &
                   (ulonglong)(local_268 - (double)local_280));
  uVar12 = -(ulonglong)(dVar14 <= dVar13);
  *(float *)(param_1 + 0x1e) =
       (float)(1.0 / (double)(uVar12 & (ulonglong)dVar13 | ~uVar12 & (ulonglong)dVar14));
  FUN_14964ecfa(param_1[0x19],param_1);
  FUN_149650768(param_1);
  FUN_149650ab8(param_1);
  if (local_41d == '\0') {
    iVar5 = *(int *)(param_1[0x45] + 0x10);
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    if (iVar5 == 0) {
      local_280 = (code *)0x14bd95dbe;
      local_278._0_4_ = 0x12;
      FUN_1446e940c(&local_398,&local_280);
      local_280 = (code *)0x14bd95500;
      local_278 = (double)CONCAT44(local_278._4_4_,0xd);
      FUN_1446e940c(local_41c,&local_280);
      FUN_140208bae(&local_280,local_41c,&local_398,L"This mesh has no holes to fill.");
      lVar8 = *plVar7;
      goto LAB_14964ff7c;
    }
    local_280 = (code *)0x14bd95eba;
    local_278._0_4_ = 0x17;
    FUN_1446e940c(&local_398,&local_280);
    local_280 = (code *)0x14bd95500;
    local_278 = (double)CONCAT44(local_278._4_4_,0xd);
    FUN_1446e940c(local_41c,&local_280);
    FUN_140208bae(&local_280,local_41c,&local_398,
                  L"Holes in the mesh are highlighted. Select individual holes to fill or use the Select All or Clear buttons."
                 );
    (**(code **)(*plVar7 + 0x340))(plVar7,&local_280,2);
    if (local_280 != (code *)0x0) {
      (**(code **)(*(longlong *)local_280 + 0x10))();
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,0);
  }
  else {
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_280 = (code *)0x14bd95d62;
    local_278._0_4_ = 0xd;
    FUN_1446e940c(&local_398,&local_280);
    local_280 = (code *)0x14bd95500;
    local_278 = (double)CONCAT44(local_278._4_4_,0xd);
    FUN_1446e940c(local_41c,&local_280);
    FUN_140208bae(&local_280,local_41c,&local_398,L"Error finding hole boundary loops.");
    lVar8 = *plVar7;
LAB_14964ff7c:
    (**(code **)(lVar8 + 0x340))(plVar7,&local_280,3);
    if (local_280 != (code *)0x0) {
      (**(code **)(*(longlong *)local_280 + 0x10))();
    }
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x17],0);
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x16],0);
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x18],0);
  }
  local_280 = (code *)0x14ba1690c;
  local_278._0_4_ = 8;
  FUN_1446e940c(&local_398,&local_280);
  local_280 = (code *)0x14bd95500;
  local_278 = (double)CONCAT44(local_278._4_4_,0xd);
  FUN_1446e940c(local_41c,&local_280);
  FUN_140208bae(&local_280,local_41c,&local_398,L"Fill Holes");
  (**(code **)(*param_1 + 0x370))(param_1,&local_280);
  if (local_280 != (code *)0x0) {
    (**(code **)(*(longlong *)local_280 + 0x10))();
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_280 = (code *)0x14bd9601a;
  local_278._0_4_ = 0x17;
  FUN_1446e940c(&local_398,&local_280);
  local_280 = (code *)0x14bd95500;
  local_278 = (double)CONCAT44(local_278._4_4_,0xd);
  FUN_1446e940c(local_41c,&local_280);
  FUN_140208bae(&local_280,local_41c,&local_398,
                L"Fill Holes in the selected Mesh by adding triangles. Click on individual holes to fill them, or use the Select All button to fill all holes."
               );
  (**(code **)(*plVar6 + 0x340))(plVar6,&local_280,2);
  if (local_280 != (code *)0x0) {
    (**(code **)(*(longlong *)local_280 + 0x10))();
  }
LAB_14964f629:
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965024a FUN_14965024a body=183 status=ok
// SIG undefined FUN_14965024a(void)

undefined8 FUN_14965024a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459fa722();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149650302 FUN_149650302 body=183 status=ok
// SIG undefined FUN_149650302(void)

undefined8 FUN_149650302(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459fa636();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496503ba FUN_1496503ba body=212 status=ok
// SIG undefined FUN_1496503ba(void)

void FUN_1496503ba(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_14967fe5c(uVar2,param_2,local_68);
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



// FUNCTION 14965048f FUN_14965048f body=183 status=ok
// SIG undefined FUN_14965048f(void)

undefined8 FUN_14965048f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14599cf2a();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149650547 FUN_149650547 body=148 status=ok
// SIG undefined FUN_149650547(void)

undefined8 FUN_149650547(undefined8 param_1)

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
  uVar1 = FUN_1459fa80e();
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



// FUNCTION 1496505dc FUN_1496505dc body=148 status=ok
// SIG undefined FUN_1496505dc(void)

undefined8 FUN_1496505dc(undefined8 param_1)

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
  uVar1 = FUN_1459ee72c();
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



// FUNCTION 149650672 FUN_149650672 body=218 status=ok
// SIG undefined FUN_149650672(void)

undefined8
FUN_149650672(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdabeb0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965074e FUN_14965074e body=26 status=ok
// SIG undefined FUN_14965074e(void)

void FUN_14965074e(undefined8 param_1)

{
  FUN_149650dd8();
  FUN_149650ab8(param_1);
  return;
}



// FUNCTION 149650768 FUN_149650768 body=846 status=ok
// SIG undefined FUN_149650768(void)

void FUN_149650768(longlong *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_b0 [8];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  ulonglong uStack_90;
  undefined8 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_149651001(uVar2);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  *(longlong **)(lVar3 + 0x30) = param_1;
  FUN_1446ddc76(&local_80,"Preview",1);
  local_120 = 0;
  local_128 = 0;
  lVar4 = FUN_1484c90fb(lVar3,local_80,0,0);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  param_1[0x1a] = lVar4;
  lVar7 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar7 = 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_148504f74(lVar4,uVar2,lVar7);
  FUN_148558526(*(undefined8 *)(param_1[0x1a] + 0x58),param_1[0x14]);
  local_98 = (void *)0x0;
  uStack_90 = 0;
  lVar3 = param_1[0x14];
  if (lVar3 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar2 = FUN_145b7126e();
    plVar6 = (longlong *)FUN_144718840(lVar3,uVar2);
  }
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_98,0);
  lVar3 = param_1[0x1a];
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar2 = FUN_1485578f6(uVar2);
  _Src = local_98;
  local_a8 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_90;
  local_a0 = (int)uStack_90;
  if (lVar4 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1411312f2(&local_a8,uStack_90 & 0xffffffff,0);
    memcpy(local_a8,_Src,lVar4 << 3);
  }
  FUN_1485053d2(lVar3,&local_a8,uVar2,0);
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_118 = (undefined8 *)0x3f4000003f4ccccd;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  lVar3 = FUN_148557ea9(&local_118,uVar2,0);
  if (lVar3 != 0) {
    FUN_14851b58e(*(undefined8 *)(param_1[0x1a] + 0x58),lVar3);
  }
  lVar3 = param_1[0x1a];
  plVar6 = (longlong *)0x0;
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  FUN_1446efa72(&local_118,0,2,0x10);
  puVar1 = local_118;
  uStack_110 = 2;
  *local_118 = &PTR_LAB_14ba263d0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bdabf20;
  puVar1[3] = param_1;
  FUN_148f76e8e(lVar3 + 0x40,local_b0,&local_118);
  FUN_1449db362(&local_118);
  local_68 = 0;
  local_58 = &PTR_LAB_14bdabff0;
  local_78 = &LAB_14456b5e8;
  local_50 = param_1;
  FUN_14851b5ae(*(undefined8 *)(param_1[0x1a] + 0x58));
  uVar2 = *(undefined8 *)(param_1[0x1a] + 0x58);
  lVar3 = param_1[0x14];
  if (lVar3 != 0) {
    uVar5 = FUN_145a7b1c0();
    plVar6 = (longlong *)FUN_144718840(lVar3,uVar5);
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_118);
  FUN_14851b91a(uVar2,&local_118);
  FUN_14851bbe8(*(undefined8 *)(param_1[0x1a] + 0x58),param_1[0x1c],1,0xf);
  FUN_1485054ca(param_1[0x1a],1);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149650ab8 FUN_149650ab8 body=127 status=ok
// SIG undefined FUN_149650ab8(void)

void FUN_149650ab8(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  FUN_144a5dc74(local_30);
  (**(code **)(*plVar1 + 0x340))(plVar1,local_30,3);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  FUN_1485051e4(param_1[0x1a]);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149650b38 FUN_149650b38 body=75 status=ok
// SIG undefined FUN_149650b38(void)

void FUN_149650b38(longlong *param_1)

{
  if (param_1[0x1a] != 0) {
    FUN_148505016();
  }
  if ((char)param_1[0x44] == '\x01') {
    (**(code **)(*param_1 + 0x3b0))(param_1,*(undefined4 *)((longlong)param_1 + 0x224));
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  }
  return;
}



// FUNCTION 149650b8a FUN_149650b8a body=44 status=ok
// SIG undefined FUN_149650b8a(void)

undefined8 FUN_149650b8a(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x388))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[0x1a] >> 8),*(undefined1 *)(param_1[0x1a] + 0x91));
  }
  return uVar2;
}



// FUNCTION 149650bb6 FUN_149650bb6 body=544 status=ok
// SIG undefined FUN_149650bb6(void)

void FUN_149650bb6(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined8 *local_a0 [11];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar2 = (longlong *)param_1[0x17];
  FUN_140056680(local_a0,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x16];
  FUN_140056680(local_a0,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x2a8))();
  }
  lVar3 = param_1[0x14];
  if (lVar3 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    uVar1 = FUN_145a7b1c0();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,1);
  FUN_143b84538(param_1[0x1a],local_a0);
  if (param_2 == '\x01') {
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"HoleFillToolTransactionName";
    local_40 = 0x1b;
    FUN_1446e940c(local_a4,&local_48);
    local_48 = L"UHoleFillTool";
    local_40 = 0xd;
    FUN_1446e940c(local_a8,&local_48);
    FUN_140208bae(&local_48,local_a8,local_a4,L"Hole Fill Tool");
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    local_48 = (wchar_t *)0x1000000010101;
    local_b8 = 0;
    FUN_148506f34(param_1[0x14],local_a0[0],1);
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  }
  if (local_a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_a0[0])(local_a0[0],1);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149650dd8 FUN_149650dd8 body=528 status=ok
// SIG undefined FUN_149650dd8(void)

void FUN_149650dd8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x230;
  iVar9 = *(int *)(param_1 + 0x23c);
  FUN_145d5b1e6(*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238));
  *(undefined4 *)(param_1 + 0x238) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x23c) != 0)) {
    FUN_149680410(lVar1,0);
  }
  lVar6 = *(longlong *)(param_1 + 0xd8);
  iVar9 = *(int *)(lVar6 + 0x438) - *(int *)(lVar6 + 0x464);
  if (iVar9 != 0) {
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (*(int *)(param_1 + 0x23c) < iVar9) {
      FUN_149680410(lVar1);
    }
    plVar2 = (longlong *)(lVar6 + 0x430);
    lVar3 = lVar6 + 0x440;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar3;
    if (*(int *)(lVar6 + 0x458) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = *(int *)(lVar6 + 0x458);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar7 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar2;
    if ((local_78._4_4_ != iVar9) || (local_78 = local_58, uStack_60 != lVar3)) {
      do {
        local_78 = uVar7;
        iVar8 = *(int *)(*local_90 + (longlong)iVar8 * 0xc);
        iVar5 = *(int *)(param_1 + 0x238);
        *(uint *)(param_1 + 0x238) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x23c) < iVar5 + 1U) {
          FUN_149680480(lVar1,iVar5);
        }
        piVar4 = (int *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar5 * 0x18);
        piVar4[0] = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        *piVar4 = iVar8;
        FUN_14054c6c4(piVar4 + 2,
                      *(longlong *)(*(longlong *)(param_1 + 0x228) + 8) + (longlong)iVar8 * 0x40 +
                      0x18);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_90 != plVar2 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar3 || local_78._4_4_ != iVar9));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149651001 FUN_149651001 body=148 status=ok
// SIG undefined FUN_149651001(void)

undefined8 FUN_149651001(undefined8 param_1)

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
  uVar1 = FUN_145b14d28();
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



// FUNCTION 149651096 FUN_149651096 body=70 status=ok
// SIG undefined FUN_149651096(void)

void FUN_149651096(longlong param_1,int param_2)

{
  if (param_2 == 2) {
    FUN_14853173e(*(undefined8 *)(param_1 + 0xd8));
    FUN_149650dd8(param_1);
    FUN_149650ab8(param_1);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  FUN_1496510dc(param_1);
  return;
}



// FUNCTION 1496510dc FUN_1496510dc body=206 status=ok
// SIG undefined FUN_1496510dc(void)

void FUN_1496510dc(longlong param_1)

{
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  int local_11c;
  undefined1 local_118 [160];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1458d302c(local_118);
  local_11c = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x228) + 0x10)) {
    do {
      FUN_1447cbafe(local_78,local_120,&local_11c,0);
      local_11c = local_11c + 1;
    } while (local_11c < *(int *)(*(longlong *)(param_1 + 0x228) + 0x10));
  }
  FUN_1485316d6(*(undefined8 *)(param_1 + 0xd8),local_118,1);
  FUN_149650dd8(param_1);
  FUN_149650ab8(param_1);
  FUN_1456c3cc8(local_118);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496511ca FUN_1496511ca body=73 status=ok
// SIG undefined FUN_1496511ca(void)

void FUN_1496511ca(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(char *)(lVar2 + 0x204) == '\0') {
      *(undefined1 *)(lVar2 + 0x204) = 2;
    }
  }
  return;
}



// FUNCTION 149651214 FUN_149651214 body=73 status=ok
// SIG undefined FUN_149651214(void)

void FUN_149651214(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0xa8);
    if (*(char *)(lVar2 + 0x204) == '\0') {
      *(undefined1 *)(lVar2 + 0x204) = 1;
    }
  }
  return;
}



// FUNCTION 149651299 FUN_149651299 body=148 status=ok
// SIG undefined FUN_149651299(void)

undefined8 FUN_149651299(undefined8 param_1)

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
  uVar1 = FUN_1459fa9e6();
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



// FUNCTION 14965132e FUN_14965132e body=91 status=ok
// SIG undefined FUN_14965132e(void)

bool FUN_14965132e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x2d8))();
  if ((cVar2 != '\0') && (cVar2 = FUN_148550408(param_2), cVar2 == '\0')) {
    return false;
  }
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  iVar3 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar4);
  return iVar3 == 1;
}



// FUNCTION 14965138a FUN_14965138a body=491 status=ok
// SIG undefined FUN_14965138a(void)

undefined8 * FUN_14965138a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8 [13];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(lVar3 + 0x188);
  bVar9 = *(char *)(lVar6 + 0xc0) == '\x01';
  cVar1 = *(char *)(lVar3 + 0x19a);
  uVar4 = FUN_1484fbf58(*(undefined8 *)(lVar3 + 0x180));
  lVar3 = *(longlong *)(param_1 + 8);
  if (cVar1 == '\0') {
    uVar5 = FUN_14001cc68(0x140,0x10);
    uVar2 = *(undefined1 *)(lVar6 + 0xc1);
    local_b8[0] = *(longlong *)(lVar3 + 0x170);
    local_b8[1] = *(longlong *)(lVar3 + 0x178);
    if (local_b8[1] != 0) {
      LOCK();
      *(int *)(local_b8[1] + 8) = *(int *)(local_b8[1] + 8) + 1;
      UNLOCK();
    }
    local_50 = *(undefined8 *)(lVar3 + 0xf0);
    local_48 = *(longlong *)(lVar3 + 0xf8);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    local_f0 = CONCAT71(local_f0._1_7_,uVar2);
    local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,bVar9);
    FUN_1484694ac(uVar5,&local_50,local_b8,uVar4);
  }
  else {
    uVar5 = FUN_14001cc68(0x140,0x10);
    local_e0 = *(undefined1 *)(lVar6 + 0xc1);
    local_50 = *(undefined8 *)(lVar3 + 0x170);
    local_48 = *(longlong *)(lVar3 + 0x178);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)(lVar3 + 0x110);
    plVar8 = local_b8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *plVar8 = *plVar7;
      plVar7 = plVar7 + 1;
      plVar8 = plVar8 + 1;
    }
    local_c8 = *(undefined8 *)(lVar3 + 0x100);
    local_c0 = *(longlong *)(lVar3 + 0x108);
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    local_d8 = *(undefined8 *)(lVar3 + 0xf0);
    local_d0 = *(longlong *)(lVar3 + 0xf8);
    if (local_d0 != 0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
      UNLOCK();
    }
    local_f8 = &local_50;
    local_f0 = uVar4;
    local_e8 = bVar9;
    FUN_148469636(uVar5,&local_d8,&local_c8,local_b8);
  }
  *param_2 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496515a0 FUN_1496515a0 body=854 status=ok
// SIG undefined FUN_1496515a0(void)

void FUN_1496515a0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_118 [32];
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x19a) == '\x01') && (*(longlong *)(param_1 + 0x100) != 0)) {
    lVar10 = *(longlong *)(param_1 + 0x100) + 8;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0xf0);
  }
  lVar4 = *(longlong *)(param_1 + 0x188);
  local_f8 = *(double *)(lVar4 + 0xb0);
  uStack_f0 = *(undefined4 *)(lVar4 + 0xb8);
  plVar7 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14bdac010;
  FUN_1482d3ee4(plVar7 + 2,&local_f8,lVar10,*(undefined4 *)(lVar4 + 0xbc));
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0x10;
    plVar11 = *(longlong **)(param_1 + 0x178);
    if (plVar11 == (longlong *)0x0) goto LAB_1496516f6;
    *(undefined8 *)(param_1 + 0x178) = 0;
LAB_1496516b3:
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
    if (plVar7 == (longlong *)0x0) goto LAB_1496516f6;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x170) = plVar7 + 2;
    plVar11 = *(longlong **)(param_1 + 0x178);
    if (plVar7 == plVar11) {
      LOCK();
      plVar11 = plVar7 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
      *(longlong **)(param_1 + 0x178) = plVar7;
      if (plVar11 != (longlong *)0x0) goto LAB_1496516b3;
    }
  }
  LOCK();
  plVar11 = plVar7 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_1496516f6:
  FUN_1482d4290(*(undefined8 *)(param_1 + 0x170),param_2);
  lVar10 = **(longlong **)(param_1 + 0xa0);
  if (lVar10 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_145a7b1c0();
    plVar7 = (longlong *)FUN_144718840(lVar10,uVar8);
  }
  (**(code **)(*plVar7 + 0x28))(plVar7,&local_f8);
  if ((longlong)(int)param_2[1] != 0) {
    pauVar9 = (undefined1 (*) [16])*param_2;
    pauVar3 = (undefined1 (*) [16])((longlong)pauVar9 + (longlong)(int)param_2[1] * 0x18);
    do {
      dVar13 = *(double *)*pauVar9 * local_b8;
      dVar14 = *(double *)(*pauVar9 + 8) * dStack_b0;
      dVar12 = *(double *)pauVar9[1] * local_a8;
      dVar6 = (double)CONCAT44(uStack_ec,uStack_f0);
      dVar15 = dVar14 * local_f8 - dVar13 * dVar6;
      dVar16 = dVar12 * dVar6 - dVar14 * local_e8;
      dVar17 = dVar13 * local_e8 - local_f8 * dVar12;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar14 = (local_e8 * dVar16 - local_f8 * dVar15) + dStack_e0 * dVar17 + dVar14 + dStack_d0;
      auVar5._8_4_ = SUB84(dVar14,0);
      auVar5._0_8_ = (dVar15 * dVar6 - dVar17 * local_e8) + dStack_e0 * dVar16 + dVar13 + local_d8;
      auVar5._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *pauVar9 = auVar5;
      *(double *)pauVar9[1] =
           dVar15 * dStack_e0 + dVar12 + (dVar17 * local_f8 - dVar16 * dVar6) + local_c8;
      pauVar9 = (undefined1 (*) [16])(pauVar9[1] + 8);
    } while (pauVar9 != pauVar3);
  }
  FUN_1482d4368(*(undefined8 *)(param_1 + 0x170),param_3);
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496518f8 FUN_1496518f8 body=2638 status=ok
// SIG undefined FUN_1496518f8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1496518f8(wchar_t ***param_1)

{
  wchar_t **ppwVar1;
  int *piVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong *plVar5;
  wchar_t **ppwVar6;
  undefined8 uVar7;
  wchar_t **ppwVar8;
  wchar_t ***pppwVar9;
  longlong lVar10;
  wchar_t ****ppppwVar11;
  undefined1 auStack_568 [32];
  undefined1 local_548;
  undefined1 local_540 [8];
  longlong local_538 [5];
  undefined8 local_510;
  wchar_t ****local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined8 local_4c0;
  code *local_4b8;
  wchar_t *****local_4b0;
  undefined1 *local_4a8;
  undefined8 local_498;
  undefined **local_488;
  wchar_t ***local_480;
  undefined1 *local_468;
  undefined8 local_458;
  undefined **local_448;
  wchar_t ***local_440;
  undefined1 *local_428;
  undefined8 local_418;
  undefined **local_408;
  wchar_t ***local_400;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  wchar_t ***local_3c0;
  undefined1 *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  wchar_t ***local_380;
  undefined1 *local_368;
  undefined8 local_358;
  undefined **local_348;
  wchar_t ***local_340;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  wchar_t ***local_300;
  undefined1 *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  wchar_t ***local_2c0;
  undefined1 *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  wchar_t ***local_280;
  wchar_t ****local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_568;
  FUN_1484416be();
  local_268 = (wchar_t ****)0x14ba1690c;
  uStack_260._0_4_ = 8;
  FUN_1446e940c(&local_508,&local_268);
  local_268 = (wchar_t ****)0x14bd970e0;
  uStack_260 = CONCAT44(uStack_260._4_4_,0x14);
  FUN_1446e940c(local_538 + 2,&local_268);
  FUN_140208bae(&local_268,local_538 + 2,&local_508,L"Lattice Deform");
  (*(code *)(*param_1)[0x6e])(param_1,&local_268);
  if (local_268 != (wchar_t ****)0x0) {
    (*(code *)(*local_268)[2])();
  }
  plVar5 = (longlong *)(*(code *)(*param_1)[0x59])(param_1);
  local_268 = (wchar_t ****)0x14bd97864;
  uStack_260._0_4_ = 0x1a;
  FUN_1446e940c(&local_508,&local_268);
  local_268 = (wchar_t ****)0x14bd970e0;
  uStack_260 = CONCAT44(uStack_260._4_4_,0x14);
  FUN_1446e940c(local_538 + 2,&local_268);
  FUN_140208bae(&local_268,local_538 + 2,&local_508,
                L"Drag the lattice control points to deform the mesh");
  (**(code **)(*plVar5 + 0x340))(plVar5,&local_268,2);
  if (local_268 != (wchar_t ****)0x0) {
    (*(code *)(*local_268)[2])();
  }
  ppwVar6 = (wchar_t **)FUN_14001cc68(0x230,0x10);
  ppwVar6[1] = (wchar_t *)&DAT_100000001;
  *ppwVar6 = (wchar_t *)&PTR_FUN_149fab260;
  local_548 = 0;
  FUN_1411b354a(ppwVar6 + 2,0,0,0);
  if (ppwVar6 == (wchar_t **)0x0) {
    param_1[0x1e] = (wchar_t **)0x10;
    ppwVar8 = param_1[0x1f];
    if (ppwVar8 != (wchar_t **)0x0) {
      param_1[0x1f] = (wchar_t **)0x0;
LAB_149651aaf:
      LOCK();
      ppwVar1 = ppwVar8 + 1;
      *(int *)ppwVar1 = *(int *)ppwVar1 + -1;
      UNLOCK();
      if (*(int *)ppwVar1 == 0) {
        (**(code **)*ppwVar8)(ppwVar8);
        LOCK();
        piVar2 = (int *)((longlong)ppwVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppwVar8 + 8))(ppwVar8);
        }
      }
      if (ppwVar6 != (wchar_t **)0x0) goto LAB_149651b15;
    }
  }
  else {
    LOCK();
    *(int *)(ppwVar6 + 1) = *(int *)(ppwVar6 + 1) + 1;
    UNLOCK();
    param_1[0x1e] = ppwVar6 + 2;
    ppwVar8 = param_1[0x1f];
    if (ppwVar6 == ppwVar8) {
      LOCK();
      ppwVar8 = ppwVar6 + 1;
      *(int *)ppwVar8 = *(int *)ppwVar8 + -1;
      UNLOCK();
      if (*(int *)ppwVar8 == 0) {
        (**(code **)*ppwVar6)(ppwVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppwVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppwVar6 + 8))(ppwVar6);
        }
      }
    }
    else {
      param_1[0x1f] = ppwVar6;
      if (ppwVar8 != (wchar_t **)0x0) goto LAB_149651aaf;
    }
LAB_149651b15:
    LOCK();
    ppwVar8 = ppwVar6 + 1;
    *(int *)ppwVar8 = *(int *)ppwVar8 + -1;
    UNLOCK();
    if (*(int *)ppwVar8 == 0) {
      (**(code **)*ppwVar6)(ppwVar6);
      LOCK();
      piVar2 = (int *)((longlong)ppwVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*ppwVar6 + 8))(ppwVar6);
      }
    }
  }
  uStack_500 = (ulonglong)uStack_500._4_4_ << 0x20;
  local_508 = (wchar_t ****)0x3e800000000;
  FUN_148506727(&local_268,*param_1[0x14],&local_508);
  FUN_146c00942(param_1[0x1e],&local_268);
  FUN_141082778(&local_268);
  cVar4 = (*(code *)(*param_1)[0x75])(param_1,0);
  *(char *)((longlong)param_1 + 0x19a) = cVar4;
  if (cVar4 == '\0') goto LAB_149651d54;
  local_248 = 0;
  uStack_240 = 0;
  local_268 = (wchar_t ****)0x0;
  uStack_260 = 0;
  uStack_23c = 0x80;
  uStack_238 = 0xffffffff;
  uStack_234 = 0;
  local_228 = 0;
  uStack_220 = 0;
  uVar7 = (*(code *)(*param_1)[0x76])(param_1,0);
  local_4b8 = FUN_14456b686;
  local_508 = (wchar_t ****)&local_268;
  local_4b0 = &local_508;
  FUN_148385b4a(uVar7,param_1[0x1e],&local_4b8,0);
  FUN_140619b9c(&local_268,&local_508);
  ppwVar6 = param_1[0x1e];
  ppwVar8 = (wchar_t **)FUN_14001cc68(0x5f0,0x10);
  ppwVar8[1] = (wchar_t *)&DAT_100000001;
  *ppwVar8 = (wchar_t *)&PTR_FUN_14bd8cdf0;
  local_548 = 1;
  FUN_1482e14f4(ppwVar8 + 2,ppwVar6,&local_508,0xf);
  if (ppwVar8 == (wchar_t **)0x0) {
    param_1[0x20] = (wchar_t **)0x10;
    ppwVar6 = param_1[0x21];
    if (ppwVar6 != (wchar_t **)0x0) {
      param_1[0x21] = (wchar_t **)0x0;
LAB_149651c98:
      LOCK();
      ppwVar1 = ppwVar6 + 1;
      *(int *)ppwVar1 = *(int *)ppwVar1 + -1;
      UNLOCK();
      if (*(int *)ppwVar1 == 0) {
        (**(code **)*ppwVar6)(ppwVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppwVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppwVar6 + 8))(ppwVar6);
        }
      }
      if (ppwVar8 != (wchar_t **)0x0) goto LAB_149651cfe;
    }
  }
  else {
    LOCK();
    *(int *)(ppwVar8 + 1) = *(int *)(ppwVar8 + 1) + 1;
    UNLOCK();
    param_1[0x20] = ppwVar8 + 2;
    ppwVar6 = param_1[0x21];
    if (ppwVar8 == ppwVar6) {
      LOCK();
      ppwVar6 = ppwVar8 + 1;
      *(int *)ppwVar6 = *(int *)ppwVar6 + -1;
      UNLOCK();
      if (*(int *)ppwVar6 == 0) {
        (**(code **)*ppwVar8)(ppwVar8);
        LOCK();
        piVar2 = (int *)((longlong)ppwVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppwVar8 + 8))(ppwVar8);
        }
      }
    }
    else {
      param_1[0x21] = ppwVar8;
      if (ppwVar6 != (wchar_t **)0x0) goto LAB_149651c98;
    }
LAB_149651cfe:
    LOCK();
    ppwVar6 = ppwVar8 + 1;
    *(int *)ppwVar6 = *(int *)ppwVar6 + -1;
    UNLOCK();
    if (*(int *)ppwVar6 == 0) {
      (**(code **)*ppwVar8)(ppwVar8);
      LOCK();
      piVar2 = (int *)((longlong)ppwVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*ppwVar8 + 8))(ppwVar8);
      }
    }
  }
  if (local_508 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  uStack_220 = 0;
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e();
LAB_149651d54:
  pwVar3 = *param_1[0x14];
  if (pwVar3 == (wchar_t *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar7 = FUN_145a7b1c0();
    plVar5 = (longlong *)FUN_144718840(pwVar3,uVar7);
  }
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_268);
  local_508 = local_268;
  uStack_500 = uStack_260;
  local_4f8 = local_258;
  uStack_4f0 = uStack_250;
  local_4d8 = CONCAT44(uStack_234,uStack_238);
  local_4e8 = (undefined4)local_248;
  uStack_4e4 = local_248._4_4_;
  uStack_4e0 = uStack_240;
  uStack_4dc = uStack_23c;
  local_4d0 = (undefined4)local_228;
  uStack_4cc = local_228._4_4_;
  uStack_4c8 = uStack_220;
  uStack_4c4 = uStack_21c;
  local_4c0 = local_218;
  FUN_146c3d201(param_1[0x1e]);
  FUN_1446f470e(&local_510,L"Lattice Deformer Tool Settings",1);
  ppwVar6 = (wchar_t **)FUN_149652347(param_1,local_510);
  if ((ppwVar6 != (wchar_t **)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(ppwVar6);
  }
  param_1[0x31] = ppwVar6;
  FUN_14485c47a(ppwVar6 + 0x15,param_1);
  ppwVar6 = param_1[0x31];
  FUN_140056680(&local_268,&DAT_149dfb77a);
  (**(code **)(*ppwVar6 + 0x154))(ppwVar6,param_1,&local_268);
  if (local_268 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  (*(code *)(*param_1)[0x61])(param_1,param_1[0x31]);
  local_298 = 0;
  local_288 = &PTR_LAB_14bdac030;
  local_2a8 = &LAB_14456b6d0;
  local_280 = param_1;
  FUN_148f741f0(param_1[0x31] + 5,param_1[0x31] + 0x16);
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14bdac050;
  local_2e8 = &LAB_14456b724;
  local_2c0 = param_1;
  FUN_148f741f0(param_1[0x31] + 5,(longlong)param_1[0x31] + 0xb4);
  local_318 = 0;
  local_308 = &PTR_LAB_14bdac070;
  local_328 = &LAB_14456b778;
  local_300 = param_1;
  FUN_148f741f0(param_1[0x31] + 5,param_1[0x31] + 0x17);
  local_358 = 0;
  local_348 = &PTR_LAB_14bdac090;
  local_368 = &LAB_14456b7cc;
  local_340 = param_1;
  FUN_1484de26e(param_1[0x31] + 5,(longlong)param_1[0x31] + 0xbc);
  local_398 = 0;
  local_388 = &PTR_LAB_14bdac110;
  local_3a8 = &LAB_14456b820;
  local_380 = param_1;
  FUN_149652400(param_1[0x31] + 5,param_1[0x31] + 0x18);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bdac130;
  local_3e8 = &LAB_14456b878;
  local_3c0 = param_1;
  FUN_1484c9b00(param_1[0x31] + 5,(longlong)param_1[0x31] + 0xc1);
  local_418 = 0;
  local_408 = &PTR_LAB_14bdac1b0;
  local_428 = &LAB_14456b8d0;
  local_400 = param_1;
  FUN_1496524d6(param_1[0x31] + 5,(longlong)param_1[0x31] + 0xc3);
  local_458 = 0;
  local_448 = &PTR_LAB_14bdac1d0;
  local_468 = &LAB_14456b942;
  local_440 = param_1;
  FUN_1484c9b00(param_1[0x31] + 5,(longlong)param_1[0x31] + 0xc4);
  local_498 = 0;
  local_488 = &PTR_LAB_14bdac1f0;
  local_4a8 = &LAB_14456b9b0;
  local_480 = param_1;
  FUN_1484c9b00(param_1[0x31] + 5,(longlong)param_1[0x31] + 0xc5);
  local_538[2] = 0;
  local_538[3] = 0;
  local_538[0] = 0;
  local_538[1] = 0;
  FUN_1496515a0(param_1);
  ppwVar6 = (wchar_t **)FUN_1496525ab(param_1);
  if ((ppwVar6 != (wchar_t **)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(ppwVar6);
  }
  param_1[0x30] = ppwVar6;
  (**(code **)(*ppwVar6 + 0x150))(ppwVar6,param_1);
  ppwVar6 = param_1[0x30];
  uVar7 = (*(code *)(*param_1)[0x72])(param_1);
  FUN_1484fa9cc(ppwVar6,uVar7);
  pwVar3 = *param_1[0x14];
  if (pwVar3 == (wchar_t *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar7 = FUN_145a7b1c0();
    plVar5 = (longlong *)FUN_144718840(pwVar3,uVar7);
  }
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_268);
  ppppwVar11 = (wchar_t ****)&local_268;
  pppwVar9 = param_1 + 0x22;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pppwVar9 = (wchar_t **)*ppppwVar11;
    ppppwVar11 = ppppwVar11 + 1;
    pppwVar9 = pppwVar9 + 1;
  }
  (**(code **)(*param_1[0x30] + 0x168))(param_1[0x30],local_538 + 2,local_538,&local_268);
  ppwVar6 = param_1[0x30];
  local_508 = (wchar_t ****)0x0;
  uStack_500 = uStack_500 & 0xffffffff00000000;
  FUN_1446efa72(&local_508,0,2,0x10);
  ppppwVar11 = local_508;
  uStack_500._0_4_ = 2;
  *local_508 = (wchar_t ***)&PTR_LAB_149e020b0;
  pppwVar9 = (wchar_t ***)FUN_144a3f946();
  ppppwVar11[2] = pppwVar9;
  *ppppwVar11 = (wchar_t ***)&PTR_FUN_14bdac210;
  ppppwVar11[3] = param_1;
  FUN_1448b6402(ppwVar6 + 8,local_540,&local_508);
  FUN_1449db362(&local_508);
  ppwVar6 = param_1[0x30];
  local_508 = (wchar_t ****)0x0;
  uStack_500._0_4_ = 0;
  FUN_1446efa72(&local_508,0,2,0x10);
  ppppwVar11 = local_508;
  uStack_500._0_4_ = 2;
  *local_508 = (wchar_t ***)&PTR_LAB_149e020b0;
  pppwVar9 = (wchar_t ***)FUN_144a3f946();
  ppppwVar11[2] = pppwVar9;
  *ppppwVar11 = (wchar_t ***)&PTR_FUN_14bdac280;
  ppppwVar11[3] = param_1;
  FUN_1448b6402(ppwVar6 + 0xb,local_540,&local_508);
  FUN_1449db362(&local_508);
  *(undefined1 *)((longlong)param_1[0x30][0x5d] + 0x83) =
       *(undefined1 *)((longlong)param_1[0x31] + 0xc3);
  FUN_1484fa212();
  *(undefined1 *)((longlong)param_1[0x30][0x5c] + 0xd1) =
       *(undefined1 *)((longlong)param_1[0x31] + 0xc4);
  local_508 = (wchar_t ****)0x0;
  uStack_500._0_4_ = 0;
  FUN_1446efa72(&local_508,0,2,0x10);
  ppppwVar11 = local_508;
  uStack_500 = CONCAT44(uStack_500._4_4_,2);
  *local_508 = (wchar_t ***)&DAT_149efe500;
  pppwVar9 = (wchar_t ***)FUN_144a3f946();
  ppppwVar11[2] = pppwVar9;
  *ppppwVar11 = (wchar_t ***)&PTR_FUN_14bdac2f0;
  ppppwVar11[3] = param_1;
  FUN_144a450dc(param_1[0x30] + 0xf,&local_508);
  FUN_1449db362(&local_508);
  FUN_149652640(param_1);
  if (local_538[0] != 0) {
    FUN_1400020a8();
  }
  if (local_538[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149652347 FUN_149652347 body=183 status=ok
// SIG undefined FUN_149652347(void)

undefined8 FUN_149652347(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14599d016();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149652400 FUN_149652400 body=212 status=ok
// SIG undefined FUN_149652400(void)

void FUN_149652400(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_149680540(uVar2,param_2,local_68);
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



// FUNCTION 1496524d6 FUN_1496524d6 body=212 status=ok
// SIG undefined FUN_1496524d6(void)

void FUN_1496524d6(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_14968085e(uVar2,param_2,local_68);
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



// FUNCTION 1496525ab FUN_1496525ab body=148 status=ok
// SIG undefined FUN_1496525ab(void)

undefined8 FUN_1496525ab(undefined8 param_1)

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
  uVar1 = FUN_1459ef23c();
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



// FUNCTION 149652640 FUN_149652640 body=583 status=ok
// SIG undefined FUN_149652640(void)

void FUN_149652640(longlong *param_1)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1409ffe1d();
  lVar2 = FUN_1496532dc(uVar1);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_1);
  }
  *(longlong **)(lVar2 + 0x30) = param_1;
  lVar3 = FUN_1484c5d32(lVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x32] = lVar3;
  lVar5 = lVar2 + 0x28;
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x390))(param_1);
  FUN_148504f74(lVar3,uVar1,lVar5);
  FUN_148558526(*(undefined8 *)(param_1[0x32] + 0x58),*(undefined8 *)param_1[0x14]);
  FUN_1485054da(param_1[0x32],1,5);
  local_48 = (void *)0x0;
  uStack_40 = 0;
  lVar2 = *(longlong *)param_1[0x14];
  if (lVar2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar1 = FUN_145b7126e();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar1);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_48,0);
  lVar2 = param_1[0x32];
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar1 = FUN_1485578f6(uVar1);
  _Src = local_48;
  local_58 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1411312f2(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar3 << 3);
  }
  FUN_1485053d2(lVar2,&local_58,uVar1,0);
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_68 = 0x3f4ccccd;
  uStack_64 = 0x3f400000;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  lVar2 = FUN_148557ea9(&local_68,uVar1,0);
  if (lVar2 != 0) {
    FUN_14851b58e(*(undefined8 *)(param_1[0x32] + 0x58),lVar2);
  }
  plVar4 = (longlong *)0x0;
  FUN_14851b65c(*(undefined8 *)(param_1[0x32] + 0x58),0);
  FUN_1485054ca(param_1[0x32],1);
  FUN_1485051e4(param_1[0x32]);
  lVar2 = *(longlong *)param_1[0x14];
  if (lVar2 != 0) {
    uVar1 = FUN_145a7b1c0();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar1);
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,0);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149652888 FUN_149652888 body=1368 status=ok
// SIG undefined FUN_149652888(void)

void FUN_149652888(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 **ppuVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  int local_c0;
  int local_bc;
  undefined8 *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 *local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar7 = (undefined8 *)FUN_14001cc68(0x140);
  *puVar7 = FUN_149680b7b;
  puVar25 = puVar7 + 2;
  memset(puVar7 + 1,0,0x130);
  FUN_1483a3d76(puVar25);
  puVar7[2] = &PTR_FUN_14ae74f40;
  FUN_146bee4b2(puVar7 + 0x24);
  lVar9 = *(longlong *)(param_1 + 0x1a8);
  *(undefined8 **)(param_1 + 0x1a8) = puVar25;
  if (lVar9 != 0) {
    (**(code **)(lVar9 + -0x10))(lVar9 + -0x10);
    puVar25 = *(undefined8 **)(param_1 + 0x1a8);
  }
  piVar5 = *(int **)(param_1 + 0x170);
  iVar10 = *piVar5;
  local_b8 = puVar25;
  local_b0 = param_1;
  if (0 < iVar10) {
    iVar17 = piVar5[1];
    iVar20 = 0;
    do {
      if (0 < iVar17) {
        dVar3 = *(double *)(piVar5 + 0x10);
        iVar10 = piVar5[2];
        iVar24 = 0;
        do {
          if (0 < iVar10) {
            dVar4 = *(double *)(piVar5 + 0x12);
            iVar17 = 0;
            do {
              local_78 = (double)iVar17 * *(double *)(piVar5 + 0x14) + *(double *)(piVar5 + 8);
              local_80 = *(double *)(piVar5 + 6) + (double)iVar24 * dVar4;
              local_88 = (undefined8 *)(*(double *)(piVar5 + 4) + (double)iVar20 * dVar3);
              FUN_1483a416a(puVar25,&local_88);
              iVar17 = iVar17 + 1;
              iVar10 = piVar5[2];
            } while (iVar17 < iVar10);
            iVar17 = piVar5[1];
          }
          iVar24 = iVar24 + 1;
        } while (iVar24 < iVar17);
        iVar10 = *piVar5;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar10);
    if (0 < iVar10) {
      local_c0 = 1;
      iVar20 = 0;
      do {
        iVar24 = iVar20 + 1;
        if (0 < iVar17) {
          iVar10 = piVar5[2];
          local_bc = 1;
          iVar18 = 0;
          do {
            iVar21 = iVar18 + 1;
            if (0 < iVar10) {
              iVar17 = 0;
              do {
                iVar28 = piVar5[1];
                iVar15 = (iVar20 * iVar28 + iVar18) * iVar10 + iVar17;
                if (iVar24 < *piVar5) {
                  FUN_1483a4604(local_b8,iVar15,iVar10 * (iVar28 * local_c0 + iVar18) + iVar17,
                                0xffffffff);
                  iVar28 = piVar5[1];
                }
                if (iVar21 < iVar28) {
                  FUN_1483a4604(local_b8,iVar15,(iVar28 * iVar20 + local_bc) * piVar5[2] + iVar17,
                                0xffffffff);
                }
                iVar28 = iVar17 + 1;
                iVar10 = piVar5[2];
                if (iVar28 < iVar10) {
                  FUN_1483a4604(local_b8,iVar15,iVar10 * (piVar5[1] * iVar20 + iVar18) + iVar17 + 1,
                                0xffffffff);
                  iVar10 = piVar5[2];
                }
                iVar17 = iVar28;
              } while (iVar28 < iVar10);
              iVar17 = piVar5[1];
            }
            local_bc = local_bc + 1;
            iVar18 = iVar21;
          } while (iVar21 < iVar17);
          iVar10 = *piVar5;
        }
        local_c0 = local_c0 + 1;
        iVar20 = iVar24;
      } while (iVar24 < iVar10);
    }
  }
  lVar6 = local_b0;
  plVar8 = (longlong *)FUN_1484fbf58(*(undefined8 *)(local_b0 + 0x180));
  lVar9 = *(longlong *)(lVar6 + 0x1a8);
  uVar19 = *(int *)(lVar9 + 8) * 0x200 + *(int *)(lVar9 + 0xc);
  uVar22 = 0;
  if ((uVar19 != 0) &&
     (uVar22 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x10) - 1U))) {
    uVar23 = 1;
    uVar11 = 1;
    if (1 < (int)uVar19) {
      uVar23 = uVar19;
    }
    do {
      uVar22 = uVar23;
      if (uVar23 == uVar11) break;
      uVar14 = uVar11 >> 9;
      uVar26 = uVar11 & 0x1ff;
      uVar22 = uVar11;
      uVar11 = uVar11 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x10))[uVar14] +
                                         (ulonglong)uVar26 * 2) - 1U));
  }
  if (uVar22 != uVar19) {
    do {
      local_98 = *(undefined8 *)(*plVar8 + 0x10 + (longlong)(int)uVar22 * 0x18);
      puVar1 = (undefined4 *)(*plVar8 + (longlong)(int)uVar22 * 0x18);
      local_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      FUN_149652de2(*(undefined8 *)(lVar6 + 0x1a8),uVar22,&local_a8);
      uVar23 = uVar22 + 1;
      if ((int)(uVar22 + 1) < (int)uVar19) {
        uVar23 = uVar19;
      }
      do {
        uVar11 = uVar23;
        if (uVar23 - 1 == uVar22) break;
        uVar22 = uVar22 + 1;
        uVar11 = uVar22;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar9 + 0x10) +
                                             (ulonglong)(uVar22 >> 9) * 8) +
                                           (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
      uVar22 = uVar11;
    } while (uVar22 != uVar19);
    lVar9 = *(longlong *)(lVar6 + 0x1a8);
  }
  FUN_1483980a4(&local_88,lVar9);
  ppuVar2 = (undefined8 **)(lVar6 + 0x1a0);
  if (ppuVar2 != &local_88) {
    puVar25 = *ppuVar2;
    *ppuVar2 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar25 == (undefined8 *)0x0) goto LAB_149652c15;
    (**(code **)*puVar25)(puVar25,1);
  }
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,1);
  }
LAB_149652c15:
  if ((int)plVar8[1] < 1) {
LAB_149652d63:
    if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar16 = 0;
LAB_149652c36:
  if (*(int *)(lVar6 + 0x1b8) != *(int *)(lVar6 + 0x1e4)) {
    lVar9 = *(longlong *)(lVar6 + 0x1f0);
    if (*(longlong *)(lVar6 + 0x1f0) == 0) {
      lVar9 = lVar6 + 0x1e8;
    }
    uVar22 = *(uint *)(lVar9 + (ulonglong)(*(int *)(lVar6 + 0x1f8) + 0x7fffffffU & (uint)uVar16) * 4
                      );
    if (uVar22 != 0xffffffff) {
      lVar9 = *(longlong *)(lVar6 + 0x1b0);
      uVar19 = uVar22;
      do {
        if (uVar16 == *(uint *)(lVar9 + (longlong)(int)uVar19 * 0x28)) {
          plVar13 = *ppuVar2;
          goto LAB_149652d0d;
        }
        uVar19 = *(uint *)(lVar9 + (longlong)(int)uVar19 * 0x28 + 0x20);
      } while (uVar19 != 0xffffffff);
    }
  }
  lVar9 = *(longlong *)(lVar6 + 0x180);
  if (*(int *)(lVar9 + 0x360) != *(int *)(lVar9 + 0x38c)) {
    lVar12 = lVar9 + 0x390;
    if (*(longlong *)(lVar9 + 0x398) != 0) {
      lVar12 = *(longlong *)(lVar9 + 0x398);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar9 + 0x3a0) + 0x7fffffffU & (uint)uVar16) * 4
                     );
    if (iVar10 != -1) {
      do {
        if (uVar16 == *(uint *)(*(longlong *)(lVar9 + 0x358) + (longlong)iVar10 * 0xc)) {
          puVar27 = (uint *)(uVar16 * 0x18 + *plVar8);
          plVar13 = *ppuVar2;
          goto LAB_149652d30;
        }
        iVar10 = *(int *)(*(longlong *)(lVar9 + 0x358) + (longlong)iVar10 * 0xc + 4);
      } while (iVar10 != -1);
    }
  }
  goto LAB_149652d41;
  while (uVar22 = puVar27[8], uVar22 != 0xffffffff) {
LAB_149652d0d:
    puVar27 = (uint *)(lVar9 + (longlong)(int)uVar22 * 0x28);
    if (uVar16 == *puVar27) goto LAB_149652d2c;
  }
  puVar27 = (uint *)0x0;
LAB_149652d2c:
  puVar27 = puVar27 + 2;
LAB_149652d30:
  local_c8 = 1;
  (**(code **)(*plVar13 + 8))(plVar13,uVar16 & 0xffffffff,0x3ff0000000000000,puVar27);
LAB_149652d41:
  uVar16 = uVar16 + 1;
  if ((longlong)(int)plVar8[1] <= (longlong)uVar16) goto LAB_149652d63;
  goto LAB_149652c36;
}



// FUNCTION 149652de2 FUN_149652de2 body=197 status=ok
// SIG undefined FUN_149652de2(void)

void FUN_149652de2(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(param_2 * 3 >> 9) * 8) +
     (ulonglong)(param_2 * 3 & 0x1ff) * 8) = *param_3;
    uVar1 = param_2 * 3 + 1;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(uVar1 >> 9) * 8) +
     (ulonglong)(uVar1 & 0x1ff) * 8) = param_3[1];
    uVar1 = param_2 * 3 + 2;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(uVar1 >> 9) * 8) +
     (ulonglong)(uVar1 & 0x1ff) * 8) = param_3[2];
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  }
  return;
}



// FUNCTION 149652ea8 FUN_149652ea8 body=461 status=ok
// SIG undefined FUN_149652ea8(void)

void FUN_149652ea8(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) &&
     (*(longlong *)(param_1 + 0x1a0) != 0)) {
    plVar2 = (longlong *)FUN_1484fbf58();
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0x38);
    if (iVar4 == (int)plVar2[1]) {
      if (0 < iVar4) {
        uVar6 = 0;
LAB_149652f21:
        lVar3 = *(longlong *)(param_1 + 0x180);
        if (*(int *)(lVar3 + 0x360) != *(int *)(lVar3 + 0x38c)) {
          lVar5 = lVar3 + 0x390;
          if (*(longlong *)(lVar3 + 0x398) != 0) {
            lVar5 = *(longlong *)(lVar3 + 0x398);
          }
          iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x3a0) + 0x7fffffffU & (uint)uVar6)
                                   * 4);
          if (iVar4 != -1) {
            do {
              if (uVar6 == *(uint *)(*(longlong *)(lVar3 + 0x358) + (longlong)iVar4 * 0xc)) {
                if (*(int *)(param_1 + 0x1b8) == *(int *)(param_1 + 0x1e4)) goto LAB_149652fa0;
                lVar3 = *(longlong *)(param_1 + 0x1f0);
                if (*(longlong *)(param_1 + 0x1f0) == 0) {
                  lVar3 = param_1 + 0x1e8;
                }
                iVar4 = *(int *)(lVar3 + (ulonglong)
                                         (*(int *)(param_1 + 0x1f8) + 0x7fffffffU & (uint)uVar6) * 4
                                );
                if (iVar4 == -1) goto LAB_149652fa0;
                goto LAB_149652ffc;
              }
              iVar4 = *(int *)(*(longlong *)(lVar3 + 0x358) + (longlong)iVar4 * 0xc + 4);
            } while (iVar4 != -1);
          }
        }
        goto LAB_149652f36;
      }
LAB_14965301d:
      local_48[0] = 0;
      local_48[1] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x40))
                (*(longlong **)(param_1 + 0x1a0),local_48);
      FUN_1484fbf60(*(undefined8 *)(param_1 + 0x180),local_48);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar4 = *(int *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar4 * 0x28 + 0x20),
        iVar4 != -1) {
LAB_149652ffc:
    if (uVar6 == *(uint *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar4 * 0x28))
    goto LAB_149652f36;
  }
LAB_149652fa0:
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x38))
                    (*(longlong **)(param_1 + 0x1a0),uVar6 & 0xffffffff);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x10))
              (*(longlong **)(param_1 + 0x1a0),uVar6 & 0xffffffff,uVar6 * 0x18 + *plVar2,1);
  }
LAB_149652f36:
  uVar6 = uVar6 + 1;
  if ((longlong)(int)plVar2[1] <= (longlong)uVar6) goto LAB_14965301d;
  goto LAB_149652f21;
}



// FUNCTION 149653076 FUN_149653076 body=613 status=ok
// SIG undefined FUN_149653076(void)

void FUN_149653076(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  wchar_t *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_9c [4];
  undefined8 *local_98 [11];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar3 = (longlong *)param_1[0x31];
  FUN_140056680(&local_108,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,&local_108);
  if (local_108 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1[0x30] + 0x2a8))();
  lVar4 = *(longlong *)param_1[0x14];
  if (lVar4 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar2 = FUN_145a7b1c0();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,1);
  if (param_1[0x32] != 0) {
    FUN_143b84538(param_1[0x32],local_98);
    if (param_2 == '\x01') {
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_108 = L"LatticeDeformerTool";
      uStack_100 = 0x13;
      FUN_1446e940c(&local_158,&local_108);
      local_108 = L"ULatticeDeformerTool";
      uStack_100 = 0x14;
      FUN_1446e940c(local_9c,&local_108);
      FUN_140208bae(&local_108,local_9c,&local_158,L"Lattice Deformer");
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_108);
      if (local_108 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_108 + 0x10))();
      }
      puVar1 = local_98[0];
      (**(code **)(*plVar3 + 0x28))(plVar3,&local_108);
      uStack_150 = CONCAT44(uStack_fc,uStack_100);
      local_158 = local_108;
      local_148 = local_f8;
      uStack_140 = uStack_f0;
      local_138 = local_e8;
      uStack_134 = uStack_e4;
      uStack_130 = uStack_e0;
      uStack_12c = uStack_dc;
      local_128 = local_d8;
      local_120 = local_c8;
      uStack_11c = uStack_c4;
      uStack_118 = uStack_c0;
      uStack_114 = uStack_bc;
      local_110 = local_b8;
      FUN_146c3cfa5(puVar1,&local_158,1);
      local_158 = (wchar_t *)0x1000000010101;
      local_168 = 0;
      FUN_148506f34(*(undefined8 *)param_1[0x14],puVar1,1,&local_158);
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
    }
    if (local_98[0] != (undefined8 *)0x0) {
      (**(code **)*local_98[0])(local_98[0],1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496532dc FUN_1496532dc body=148 status=ok
// SIG undefined FUN_1496532dc(void)

undefined8 FUN_1496532dc(undefined8 param_1)

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
  uVar1 = FUN_145b14e0c();
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



// FUNCTION 149653372 FUN_149653372 body=279 status=ok
// SIG undefined FUN_149653372(void)

void FUN_149653372(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 0x36;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14850c1d2(&local_98,plVar1);
  FUN_148518a02(plVar1);
  FUN_14965385a(param_1);
  lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar3 = FUN_14001cc68(0xb0,0x10);
  FUN_149680b9a(uVar3,&local_98,plVar1,(int)param_1[0x40]);
  local_a0 = uVar3;
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,param_1,&local_a0,&DAT_14cc20bb0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(&local_98);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965348a FUN_14965348a body=576 status=ok
// SIG undefined FUN_14965348a(void)

void FUN_14965348a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = param_1 + 0x36;
  local_78 = 0;
  iVar13 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14850c1d2(&local_98,plVar1);
  plVar9 = (longlong *)FUN_1484fbf58(param_1[0x30]);
  lVar5 = param_1[0x30];
  plVar2 = (longlong *)(lVar5 + 0x358);
  lVar11 = lVar5 + 0x368;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  local_f0 = param_1;
  local_b0 = lVar11;
  if (*(int *)(lVar5 + 0x380) != 0) {
    FUN_1449c0562(&local_b8);
    iVar13 = *(int *)(lVar5 + 0x380);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = plVar2;
  if ((iStack_a4 != iVar13) || (local_b0 != lVar11)) {
    do {
      iVar4 = *(int *)(*local_e0 + (longlong)iStack_c4 * 0xc);
      local_b8 = CONCAT44(local_b8._4_4_,iVar4);
      lVar5 = *plVar9;
      puVar10 = (undefined4 *)FUN_140d94f9a(plVar1);
      *(undefined8 *)(puVar10 + 4) = *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18);
      puVar3 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      *puVar10 = *puVar3;
      puVar10[1] = uVar6;
      puVar10[2] = uVar7;
      puVar10[3] = uVar8;
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != plVar2 || (local_d0 != lVar11 || iStack_c4 != iVar13));
  }
  plVar2 = local_f0;
  FUN_14965385a(local_f0);
  lVar11 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  uVar12 = FUN_14001cc68(0xb0,0x10);
  FUN_149680b9a(uVar12,&local_98,plVar1,(int)plVar2[0x40]);
  local_e8 = uVar12;
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x20))(lVar11 + 0x28,plVar2,&local_e8,&DAT_14cc20bb0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496536cc FUN_1496536cc body=371 status=ok
// SIG undefined FUN_1496536cc(void)

void FUN_1496536cc(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [96];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = *(char *)(param_1 + 0x204);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_14965348a(param_1);
    }
    else if (cVar1 == '\x02') {
      FUN_149653372(param_1);
    }
    *(undefined1 *)(param_1 + 0x204) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 400);
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x199) == '\x01') {
      FUN_149653372(param_1);
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_1496515a0();
      lVar4 = **(longlong **)(param_1 + 0xa0);
      if (lVar4 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        uVar2 = FUN_145a7b1c0();
        plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,local_b8);
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2d0))
                (*(longlong **)(param_1 + 0x180),local_58 + 2,local_58,local_b8);
      FUN_1485051e4(*(undefined8 *)(param_1 + 400));
      *(undefined1 *)(param_1 + 0x199) = 0;
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_58[2] != 0) {
        FUN_1400020a8();
      }
      lVar4 = *(longlong *)(param_1 + 400);
    }
    FUN_148505016(lVar4,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965385a FUN_14965385a body=341 status=ok
// SIG undefined FUN_14965385a(void)

void FUN_14965385a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
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
  FUN_14967d98a(*(longlong *)(param_1 + 0x180) + 0x4b0);
  plVar1 = (longlong *)(param_1 + 0x1b0);
  lVar2 = param_1 + 0x1c0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x1d8) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x1d8);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(*local_78 + (longlong)iStack_5c * 0x28));
      puVar3 = (undefined4 *)FUN_14967db12(*(longlong *)(param_1 + 0x180) + 0x4b0);
      *puVar3 = 0xff00ffff;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (local_68 != lVar2 || iStack_5c != iVar4));
  }
  FUN_149652888(param_1);
  FUN_1484fac3e(*(undefined8 *)(param_1 + 0x180));
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496539b0 FUN_1496539b0 body=89 status=ok
// SIG undefined FUN_1496539b0(void)

void FUN_1496539b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459fa9e6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14850c1d2(param_2 + 0x1b0,param_1 + 0x58);
      FUN_14965385a(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 149653a0a FUN_149653a0a body=89 status=ok
// SIG undefined FUN_149653a0a(void)

void FUN_149653a0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459fa9e6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14850c1d2(param_2 + 0x1b0,param_1 + 8);
      FUN_14965385a(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 149653a64 FUN_149653a64 body=32 status=ok
// SIG undefined FUN_149653a64(void)

undefined8 FUN_149653a64(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FLatticeDeformerToolConstrainedPointsChange");
  return param_2;
}



// FUNCTION 149653ab6 FUN_149653ab6 body=448 status=ok
// SIG undefined FUN_149653ab6(void)

/* WARNING: Removing unreachable block (ram,0x000149653b75) */

void FUN_149653ab6(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0xb8);
  FUN_14620bf46(plVar1,(int)param_2[1]);
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    lVar8 = (longlong)(int)param_2[1] << 3;
    pvVar5 = local_58;
    uVar6 = local_50;
    do {
      local_50 = uVar6;
      local_58 = pvVar5;
      FUN_1400021e4(lVar9,&local_58);
      iVar2 = *(int *)(param_1 + 0xc0);
      *(uint *)(param_1 + 0xc0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xc4) < iVar2 + 1U) {
        FUN_1447a1bd6(plVar1,iVar2);
      }
      lVar4 = *plVar1;
      lVar7 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar4 + lVar7) = 0;
      *(void **)(lVar4 + lVar7) = local_58;
      local_58 = (void *)0x0;
      pvVar5 = local_58;
      *(undefined4 *)(lVar4 + 8 + lVar7) = (undefined4)local_50;
      *(undefined4 *)(lVar4 + 0xc + lVar7) = local_50._4_4_;
      local_50 = 0;
      uVar6 = local_50;
      local_50 = 0;
      local_58 = (void *)0x0;
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  if (param_3 != '\0') {
    if (*(int *)(param_1 + 0xc0) < 1) {
      FUN_140056680(&local_58,&DAT_149dfb77a);
    }
    else {
      local_58 = (void *)0x0;
      uVar3 = *(uint *)((undefined8 *)*plVar1 + 1);
      pvVar5 = *(void **)*plVar1;
      local_50 = CONCAT44(local_50._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        local_50 = (ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_58,uVar3,0);
        memcpy(local_58,pvVar5,(longlong)(int)uVar3 * 2);
      }
    }
    if ((void **)(param_1 + 0xa8) == &local_58) {
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0xa8) = local_58;
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0xb4) = local_50._4_4_;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149653c78 FUN_149653c78 body=290 status=ok
// SIG undefined FUN_149653c78(void)

void FUN_149653c78(longlong param_1)

{
  undefined8 *puVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_140e1307c((longlong *)(param_1 + 0xb8),(void **)(param_1 + 0xa8));
  if (iVar2 == -1) {
    if (*(int *)(param_1 + 0xc0) < 1) {
      FUN_140056680(&local_40,&DAT_149dfb77a);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0xb8);
      local_40 = (void *)0x0;
      local_38 = *(int *)(puVar1 + 1);
      lVar3 = (longlong)local_38;
      _Src = (void *)*puVar1;
      if (lVar3 == 0) {
        local_34 = 0;
      }
      else {
        FUN_1446dd670(&local_40,local_38,0);
        memcpy(local_40,_Src,lVar3 * 2);
      }
    }
    if ((void **)(param_1 + 0xa8) == &local_40) {
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0xa8) = local_40;
      *(int *)(param_1 + 0xb0) = local_38;
      *(undefined4 *)(param_1 + 0xb4) = local_34;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149653d9c FUN_149653d9c body=149 status=ok
// SIG undefined FUN_149653d9c(void)

longlong * FUN_149653d9c(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_149653e32(param_2[1]);
  (**(code **)(*plVar2 + 0x468))(plVar2,*param_2);
  pcVar1 = *(code **)(param_1 + 0x30);
  if (pcVar1 != (code *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x40);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(local_28,uVar3);
    (**(code **)(*plVar2 + 0x478))(plVar2,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149653e32 FUN_149653e32 body=148 status=ok
// SIG undefined FUN_149653e32(void)

undefined8 FUN_149653e32(undefined8 param_1)

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
  uVar1 = FUN_145baccb6();
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



// FUNCTION 149653ec8 FUN_149653ec8 body=142 status=ok
// SIG undefined FUN_149653ec8(void)

bool FUN_149653ec8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_148441d74();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = FUN_14456c11e;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149653f58 FUN_149653f58 body=349 status=ok
// SIG undefined FUN_149653f58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_149653f58(void)

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
              0x110) < DAT_14cc20ca8) {
    FUN_144b3d300(&DAT_14cc20ca8);
    if (DAT_14cc20ca8 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71442();
      uVar3 = FUN_145b71358();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc20c98 = (undefined *)0x0;
      _DAT_14cc20ca4 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc20ca0 = local_48;
      FUN_1484d23fc(&DAT_14cc20c70,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc20c70;
        if (DAT_14cc20c98 != (undefined *)0x0) {
          _Dst = DAT_14cc20c98;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144563cce);
      _Init_thread_footer(&DAT_14cc20ca8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc20c70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496540be FUN_1496540be body=1398 status=ok
// SIG undefined FUN_1496540be(void)

void FUN_1496540be(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined **ppuVar8;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  code *local_d8;
  wchar_t **local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  code *local_b8 [2];
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = (longlong *)FUN_149654635();
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x5e] = (longlong)plVar3;
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x5e]);
  FUN_14962cee2(param_1);
  plVar3 = (longlong *)param_1[0x20];
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)FUN_1496546ca(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x5f] = (longlong)plVar3;
  FUN_140056680(&local_c8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_c8);
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x5f]);
  FUN_14851b65c(param_1[0x54],1);
  FUN_14851b89a(param_1[0x54],0);
  local_d8 = FUN_14456c132;
  local_d0 = &local_c8;
  FUN_14851c368(param_1[0x54]);
  uVar4 = FUN_14851bd54(param_1[0x54]);
  FUN_149654760(param_1 + 0xc6,uVar4);
  uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar5 = FUN_14855788a(uVar4,0);
  if (lVar5 != 0) {
    FUN_14851b56e(param_1[0x54],lVar5);
  }
  FUN_1484400a8(param_1);
  local_c8 = L"ToolName";
  local_c0 = 8;
  FUN_1446e940c(local_dc,&local_c8);
  local_c8 = L"UMeshAttributePaintTool";
  local_c0 = 0x17;
  FUN_1446e940c(local_e0,&local_c8);
  FUN_140208bae(&local_c8,local_e0,local_dc,L"Paint WeightMaps");
  (**(code **)(*param_1 + 0x370))(param_1,&local_c8);
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_c8 = L"OnStartAttribPaint";
  local_c0 = 0x12;
  FUN_1446e940c(local_dc,&local_c8);
  local_c8 = L"UMeshAttributePaintTool";
  local_c0 = 0x17;
  FUN_1446e940c(local_e0,&local_c8);
  FUN_140208bae(&local_c8,local_e0,local_dc,
                L"Paint per-vertex attribute maps. Ctrl to Erase/Subtract, Shift to Smooth. [/] to change Brush Size."
               );
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_c8,2);
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar6 = &PTR_FUN_14bdac3d0;
  builtin_strncpy((char *)(puVar6 + 1),"fff?fff?",8);
  puVar6[2] = 0x3f8000003f666666;
  *(undefined4 *)(puVar6 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0x3f800000;
  puVar1 = (undefined8 *)param_1[0xf9];
  param_1[0xf9] = (longlong)puVar6;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar7 = FUN_14001cc68(0x2c0,0x10);
  FUN_1458c1dca(lVar7);
  lVar5 = param_1[0xc5];
  param_1[0xc5] = lVar7;
  if (lVar5 != 0) {
    FUN_145838e00(lVar5);
    FUN_1400020a8(lVar5);
  }
  local_c0 = 0;
  local_c8 = (wchar_t *)0x3e800000000;
  uVar4 = FUN_14850658d(param_1[0x14]);
  FUN_146f6c7b4(param_1[0xc5],uVar4);
  lVar5 = param_1[0xc5];
  puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  ppuVar8 = &PTR_FUN_14bdac3e0;
  *puVar6 = &PTR_FUN_14bdac3e0;
  puVar6[1] = lVar5;
  puVar1 = (undefined8 *)param_1[0xfa];
  param_1[0xfa] = (longlong)puVar6;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    puVar6 = (undefined8 *)param_1[0xfa];
    ppuVar8 = (undefined **)*puVar6;
  }
  lVar5 = param_1[0x5f];
  (*(code *)ppuVar8[1])(puVar6,&local_c8);
  FUN_149653ab6(lVar5,&local_c8,1);
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1[0x5f] + 0xc0) == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_c8 = L"StartAttribPaintFailed";
    local_c0 = 0x16;
    FUN_1446e940c(local_dc,&local_c8);
    local_c8 = L"UMeshAttributePaintTool";
    local_c0 = 0x17;
    FUN_1446e940c(local_e0,&local_c8);
    FUN_140208bae(&local_c8,local_e0,local_dc,
                  L"No Float attributes exist for this mesh. Use the Attribute Editor to create one."
                 );
    (**(code **)(*plVar3 + 0x340))(plVar3,&local_c8,3);
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
  }
  FUN_1496548c4(param_1);
  lVar5 = param_1[0x5f];
  if (0 < *(int *)(lVar5 + 0xc0)) {
    *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  }
  uVar2 = FUN_140e1307c(lVar5 + 0xb8,lVar5 + 0xa8);
  local_68 = 0;
  local_58 = &PTR_LAB_14bdac490;
  local_78[0] = &LAB_14456c38a;
  local_a8 = 0;
  local_98 = &PTR_LAB_14bdac470;
  local_b8[0] = FUN_14456c30e;
  local_90 = param_1;
  local_50 = param_1;
  FUN_149654a8a(param_1 + 0x60,local_b8,local_78,uVar2);
  *(undefined1 *)(param_1 + 0x100) = 0;
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149654635 FUN_149654635 body=148 status=ok
// SIG undefined FUN_149654635(void)

undefined8 FUN_149654635(undefined8 param_1)

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
  uVar1 = FUN_1459faad2();
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



// FUNCTION 1496546ca FUN_1496546ca body=148 status=ok
// SIG undefined FUN_1496546ca(void)

undefined8 FUN_1496546ca(undefined8 param_1)

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
  uVar1 = FUN_14599d102();
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



// FUNCTION 149654760 FUN_149654760 body=354 status=ok
// SIG undefined FUN_149654760(void)

void FUN_149654760(longlong param_1,undefined8 param_2)

{
  double *pdVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  double *local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 0x148) = param_2;
  uVar5 = 0;
  FUN_145c688c4(param_2,&local_78,0);
  *(double *)(param_1 + 0x180) =
       SQRT((local_50 - local_68) * (local_50 - local_68) +
            (local_60 - local_78) * (local_60 - local_78) +
            (local_58 - dStack_70) * (local_58 - dStack_70)) * 0.001;
  uVar4 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x20) * 0x200 +
          *(int *)(*(longlong *)(param_1 + 0x148) + 0x24);
  if (0 < (int)uVar4) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x148);
      if ((int)uVar5 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24)) {
        uVar3 = (ulonglong)(uVar5 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                               uVar3 * 2) - 1U) < 0xfffe) {
          lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          local_68 = *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
          pdVar1 = (double *)(lVar2 + uVar3 * 0x18);
          local_78 = *pdVar1;
          dStack_70 = pdVar1[1];
          FUN_146ba5262(param_1 + 0x150,&local_78);
          local_78 = *(double *)(param_1 + 0x148);
          local_88 = &LAB_149681812;
          local_80 = &local_78;
          FUN_149680dd0(param_1,uVar5,&local_88);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496548c4 FUN_1496548c4 body=453 status=ok
// SIG undefined FUN_1496548c4(void)

void FUN_1496548c4(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 **ppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 2000) + 0x18))();
  *(undefined4 *)(param_1 + 0x7e8) = uVar4;
  (**(code **)(**(longlong **)(param_1 + 2000) + 8))(*(longlong **)(param_1 + 2000),&local_50);
  FUN_14965584a((longlong *)(param_1 + 0x7d8),local_48);
  if (0 < local_48) {
    lVar8 = 0;
    do {
      lVar3 = lVar8 * 0x30;
      *(undefined8 *)(*(longlong *)(param_1 + 0x7d8) + lVar3) =
           *(undefined8 *)(local_50 + lVar8 * 8);
      (**(code **)(**(longlong **)(param_1 + 2000) + 0x10))
                (*(longlong **)(param_1 + 2000),&local_58,*(undefined8 *)(local_50 + lVar8 * 8));
      ppuVar5 = (undefined8 **)(*(longlong *)(param_1 + 0x7d8) + lVar3 + 8);
      if (ppuVar5 == &local_58) {
LAB_14965499f:
        if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,1);
        }
      }
      else {
        puVar1 = *ppuVar5;
        *ppuVar5 = local_58;
        local_58 = (undefined8 *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
          goto LAB_14965499f;
        }
      }
      lVar6 = lVar8 * 0x30;
      FUN_144a84024(*(longlong *)(param_1 + 0x7d8) + lVar6 + 0x10,*(undefined4 *)(param_1 + 0x7e8),1
                   );
      if (0 < *(int *)(param_1 + 0x7e8)) {
        uVar7 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 8 + lVar3);
          uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar7 & 0xffffffff);
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x7d8) + 0x10 + lVar3) + uVar7 * 4)
               = uVar4;
          uVar7 = uVar7 + 1;
        } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x7e8));
      }
      lVar3 = *(longlong *)(param_1 + 0x7d8);
      FUN_144a67f5c(lVar3 + lVar6 + 0x20,lVar3 + lVar6 + 0x10);
      lVar8 = lVar8 + 1;
    } while (lVar8 < local_48);
  }
  *(undefined4 *)(param_1 + 0x7ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x804) = 0xffffffff;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149654a8a FUN_149654a8a body=126 status=ok
// SIG undefined FUN_149654a8a(void)

void FUN_149654a8a(undefined4 *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  FUN_14968224c(param_1 + 4);
  FUN_1494a82a4(param_1 + 0x14,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x000149654af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 149654b26 FUN_149654b26 body=87 status=ok
// SIG undefined FUN_149654b26(void)

void FUN_149654b26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x7c8);
  if (plVar2 != param_2) {
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149654b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 149654b7e FUN_149654b7e body=161 status=ok
// SIG undefined FUN_149654b7e(void)

void FUN_149654b7e(longlong *param_1)

{
  FUN_149654c20(param_1 + 0x60);
  if ((char)param_1[0xc4] == '\x01') {
    (**(code **)(*param_1 + 0x480))(param_1,param_1 + 0x9c);
    *(undefined1 *)(param_1 + 0xc4) = 0;
  }
  if ((char)param_1[0xff] == '\x01') {
    (**(code **)(*param_1 + 0x498))(param_1,*(undefined4 *)((longlong)param_1 + 0x7fc));
    *(undefined1 *)(param_1 + 0xff) = 0;
    *(undefined4 *)((longlong)param_1 + 0x7fc) = 0;
  }
  if (-1 < *(int *)((longlong)param_1 + 0x804)) {
    FUN_149654cc4(param_1);
    *(undefined4 *)((longlong)param_1 + 0x804) = 0xffffffff;
  }
  if ((char)param_1[0x100] == '\0') {
    FUN_149654d86(param_1);
    *(undefined1 *)(param_1 + 0x100) = 1;
  }
  return;
}



// FUNCTION 149654c20 FUN_149654c20 body=163 status=ok
// SIG undefined FUN_149654c20(void)

void FUN_149654c20(int *param_1)

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



// FUNCTION 149654cc4 FUN_149654cc4 body=192 status=ok
// SIG undefined FUN_149654cc4(void)

void FUN_149654cc4(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(undefined8 *)(param_1 + 0x2f8);
  (**(code **)(**(longlong **)(param_1 + 2000) + 8))(*(longlong **)(param_1 + 2000),local_40);
  FUN_149653ab6(uVar2,local_40,0);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x2f8);
  uVar4 = *(int *)(lVar3 + 0xc0) - 1;
  if ((int)param_2 < (int)uVar4) {
    uVar4 = param_2;
  }
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  iVar1 = *(int *)(*(longlong *)(lVar3 + 0xb8) + 8 + uVar5 * 0x10);
  uVar6 = (ulonglong)(iVar1 - 1);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  FUN_1402980a2(lVar3 + 0xa8,*(undefined8 *)(*(longlong *)(lVar3 + 0xb8) + uVar5 * 0x10),uVar6);
  *(undefined1 *)(param_1 + 0x800) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149654d86 FUN_149654d86 body=383 status=ok
// SIG undefined FUN_149654d86(void)

void FUN_149654d86(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (-1 < (longlong)*(int *)(param_1 + 0x7ec)) {
    if (0 < *(int *)(param_1 + 0x7e8)) {
      lVar3 = (longlong)*(int *)(param_1 + 0x7ec) * 0x30 + *(longlong *)(param_1 + 0x7d8);
      uVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar3 + 8);
        (**(code **)(*plVar1 + 0x18))
                  (plVar1,uVar4 & 0xffffffff,
                   *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + uVar4 * 4));
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x7e8));
    }
    *(undefined8 *)(param_1 + 0x7ec) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7f4) = 0x3f800000;
  }
  uVar2 = FUN_140e1307c(*(longlong *)(param_1 + 0x2f8) + 0xb8,*(longlong *)(param_1 + 0x2f8) + 0xa8)
  ;
  *(uint *)(param_1 + 0x7ec) = uVar2;
  if (-1 < (int)uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x7d8) + (ulonglong)uVar2 * 0x30;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 8 + (ulonglong)uVar2 * 0x30);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_40);
    *(longlong *)(param_1 + 0x7f0) = local_40;
    local_30 = FUN_14456c44c;
    local_40 = lVar3;
    local_38 = param_1;
    local_28 = &local_40;
    FUN_14851c368(*(undefined8 *)(param_1 + 0x2a0));
    FUN_1400021e4(lVar3,&local_40);
    lVar3 = *(longlong *)(param_1 + 0x2f8);
    if ((longlong *)(lVar3 + 0xa8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar3 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar3 + 0xa8) = local_40;
      *(undefined4 *)(lVar3 + 0xb0) = (undefined4)local_38;
      *(undefined4 *)(lVar3 + 0xb4) = local_38._4_4_;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149654f06 FUN_149654f06 body=166 status=ok
// SIG undefined FUN_149654f06(void)

void FUN_149654f06(longlong *param_1)

{
  undefined1 uVar1;
  
  FUN_148440f04();
  if (*(int *)((longlong)param_1 + 0x7c4) < 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    FUN_14481578e(param_1 + 0xf7,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x3d8))(param_1);
  *(undefined1 *)(param_1 + 0x73) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x3c8))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x399) = uVar1;
  FUN_149654fac(param_1);
  memcpy(param_1 + 0x74,param_1 + 0x22,0x140);
  memcpy(param_1 + 0x9c,param_1 + 0x22,0x140);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}



// FUNCTION 149654fac FUN_149654fac body=316 status=ok
// SIG undefined FUN_149654fac(void)

void FUN_149654fac(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [16];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (-1 < *(int *)((longlong)param_1 + 0x7ec)) {
    if (param_1[0x101] == 0) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      param_1[0x101] = (longlong)puVar1;
    }
    FUN_149656c98();
    *(undefined4 *)(*(longlong *)param_1[0x101] + 0x38) = *(undefined4 *)((longlong)param_1 + 0x7ec)
    ;
    uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_40 = L"AttributeValuesChange";
    local_38 = 0x15;
    FUN_1446e940c(local_54,&local_40);
    local_40 = L"UMeshAttributePaintTool";
    local_38 = 0x17;
    FUN_1446e940c(local_58,&local_40);
    FUN_140208bae(local_50,local_58,local_54,L"Paint");
    FUN_148558a3c(param_1 + 0x5c,local_50,uVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496550ea FUN_1496550ea body=51 status=ok
// SIG undefined FUN_1496550ea(void)

void FUN_1496550ea(longlong param_1)

{
  FUN_148441000();
  memcpy((void *)(param_1 + 0x4e0),(void *)(param_1 + 0x110),0x140);
  *(undefined1 *)(param_1 + 0x620) = 1;
  return;
}



// FUNCTION 14965511e FUN_14965511e body=309 status=ok
// SIG undefined FUN_14965511e(void)

void FUN_14965511e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1484410f4();
  *(undefined2 *)(param_1 + 0x73) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  FUN_149655254(param_1,&local_58);
  if (local_58 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_50 = L"AttributeValuesChange";
    local_48 = 0x15;
    FUN_1446e940c(local_5c,&local_50);
    local_50 = L"UMeshAttributePaintTool";
    local_48 = 0x17;
    FUN_1446e940c(local_60,&local_50);
    FUN_140208bae(&local_50,local_60,local_5c,L"Paint");
    local_68 = local_58;
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28,param_1,&local_68,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148558a82(param_1 + 0x5c,uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149655254 FUN_149655254 body=552 status=ok
// SIG undefined FUN_149655254(void)

longlong * FUN_149655254(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar5 = *(longlong **)(param_1 + 0x808);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = *plVar5;
    *plVar5 = 0;
    if (lVar6 != 0) {
      local_b8 = *(longlong *)(lVar6 + 0x40);
      uStack_70 = *(undefined8 *)(lVar6 + 0x48);
      local_a8 = *(longlong **)(lVar6 + 0x50);
      uStack_60 = *(undefined8 *)(lVar6 + 0x58);
      local_58 = *(longlong *)(lVar6 + 0x60);
      uStack_50 = *(undefined8 *)(lVar6 + 0x68);
      local_48 = *(undefined8 *)(lVar6 + 0x70);
      uStack_40 = *(undefined8 *)(lVar6 + 0x78);
      uVar3 = local_48;
      uVar4 = uStack_40;
      local_68 = local_a8;
      uVar2 = uStack_60;
      local_78 = local_b8;
      uVar1 = uStack_70;
      *(ulonglong *)(lVar6 + 0x70) = CONCAT44(uStack_84,local_88);
      *(ulonglong *)(lVar6 + 0x78) = CONCAT44(uStack_7c,uStack_80);
      *(undefined ***)(lVar6 + 0x60) = &PTR_LAB_14bdac5f0;
      *(undefined1 **)(lVar6 + 0x68) = &LAB_14456c7da;
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(ulonglong *)(lVar6 + 0x58) = CONCAT44(uStack_9c,uStack_a0);
      *(undefined1 **)(lVar6 + 0x40) = &LAB_1496828fc;
      *(ulonglong *)(lVar6 + 0x48) = CONCAT44(uStack_ac,uStack_b0);
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
      local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
      local_88 = (undefined4)local_48;
      uStack_84 = local_48._4_4_;
      uStack_80 = (undefined4)uStack_40;
      uStack_7c = uStack_40._4_4_;
      local_98 = local_58;
      uStack_90 = uStack_50;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      if (local_b8 != 0) {
        plVar5 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar5 = &local_98;
        }
        uStack_70 = uVar1;
        uStack_60 = uVar2;
        local_48 = uVar3;
        uStack_40 = uVar4;
        (**(code **)(*plVar5 + 0x10))();
      }
      local_b8 = *(longlong *)(lVar6 + 0x80);
      uStack_70 = *(undefined8 *)(lVar6 + 0x88);
      local_a8 = *(longlong **)(lVar6 + 0x90);
      uStack_60 = *(undefined8 *)(lVar6 + 0x98);
      local_58 = *(longlong *)(lVar6 + 0xa0);
      uStack_50 = *(undefined8 *)(lVar6 + 0xa8);
      local_48 = *(undefined8 *)(lVar6 + 0xb0);
      uStack_40 = *(undefined8 *)(lVar6 + 0xb8);
      uVar3 = local_48;
      uVar4 = uStack_40;
      local_68 = local_a8;
      uVar2 = uStack_60;
      local_78 = local_b8;
      uVar1 = uStack_70;
      *(ulonglong *)(lVar6 + 0xb0) = CONCAT44(uStack_84,local_88);
      *(ulonglong *)(lVar6 + 0xb8) = CONCAT44(uStack_7c,uStack_80);
      *(undefined ***)(lVar6 + 0xa0) = &PTR_LAB_14bdac5f0;
      *(undefined1 **)(lVar6 + 0xa8) = &LAB_14456c7e2;
      *(undefined8 *)(lVar6 + 0x90) = 0;
      *(ulonglong *)(lVar6 + 0x98) = CONCAT44(uStack_9c,uStack_a0);
      *(undefined1 **)(lVar6 + 0x80) = &LAB_1496828fc;
      *(ulonglong *)(lVar6 + 0x88) = CONCAT44(uStack_ac,uStack_b0);
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
      local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
      local_88 = (undefined4)local_48;
      uStack_84 = local_48._4_4_;
      uStack_80 = (undefined4)uStack_40;
      uStack_7c = uStack_40._4_4_;
      local_98 = local_58;
      uStack_90 = uStack_50;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      uStack_70 = uVar1;
      uStack_60 = uVar2;
      local_48 = uVar3;
      uStack_40 = uVar4;
      if (local_b8 != 0) {
        plVar5 = &local_98;
        if (local_a8 != (longlong *)0x0) {
          plVar5 = local_a8;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      goto LAB_14965544e;
    }
  }
  lVar6 = 0;
LAB_14965544e:
  *param_2 = lVar6;
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965547e FUN_14965547e body=210 status=ok
// SIG undefined FUN_14965547e(void)

undefined8 FUN_14965547e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_148441104();
  memset(local_128,0,0x100);
  local_58 = 0xffffffff;
  local_124 = 0x3f800000;
  local_84 = 0xffffffff;
  cVar1 = FUN_14962d3a8(param_1 + -0xb0,param_2,local_128);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x710) = 0;
    if (*(int *)(param_1 + 0x714) < 0) {
      FUN_14481578e(param_1 + 0x708,0);
    }
    FUN_149655552(param_1 + -0xb0,param_1 + 0x60,param_1 + 0x708);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149655552 FUN_149655552 body=758 status=ok
// SIG undefined FUN_149655552(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149655552(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  float *local_160;
  undefined1 *local_158;
  undefined8 **local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  float local_10c;
  undefined1 local_108 [16];
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_a8 [16];
  double local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = param_1[0x14];
  if (lVar1 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar5 = FUN_145a7b1c0();
    plVar6 = (longlong *)FUN_144718840(lVar1,uVar5);
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_e8);
  local_c8 = *(double *)(param_2 + 8) - local_c8;
  dStack_c0 = *(double *)(param_2 + 0x10) - dStack_c0;
  local_b8 = *(double *)(param_2 + 0x18) - local_b8;
  dVar7 = -local_e8;
  dStack_e0 = -dStack_e0;
  local_d8 = local_d8 * -1.0;
  dStack_d0 = dStack_d0 * 1.0;
  dVar10 = local_c8 * local_d8 - dVar7 * local_b8;
  dVar9 = dStack_c0 * dVar7 - local_c8 * dStack_e0;
  dVar4 = local_b8 * dStack_e0 - dStack_c0 * local_d8;
  dVar4 = dVar4 + dVar4;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar9 + dVar9;
  auVar8 = divpd(_DAT_149934d80,local_a8);
  dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_a8._0_8_)) & auVar8._0_8_) *
          ((dVar9 * dStack_e0 - dVar10 * local_d8) + dStack_d0 * dVar4 + local_c8);
  dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_a8._8_8_)) & auVar8._8_8_) *
          (local_e8 * dVar9 + local_d8 * dVar4 + dStack_d0 * dVar10 + dStack_c0);
  local_108._8_4_ = SUB84(dVar3,0);
  local_108._0_8_ = dVar2;
  local_108._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_98)) & (ulonglong)(1.0 / local_98))
          * (dStack_d0 * dVar9 + local_b8 + (dVar10 * dVar7 - dVar4 * dStack_e0));
  local_f8 = dVar9;
  dVar7 = (double)(**(code **)(*param_1 + 0x428))(param_1);
  fVar11 = (float)dVar7;
  local_10c = fVar11 * fVar11;
  local_118 = FUN_14851bd54(param_1[0x54]);
  local_170 = &local_118;
  local_130 = (double)fVar11;
  local_138 = dVar9 - local_130;
  local_140 = dVar3 - local_130;
  local_148 = dVar2 - local_130;
  local_120 = dVar9 + local_130;
  local_128 = dVar3 + local_130;
  local_130 = dVar2 + local_130;
  local_150 = &local_170;
  local_158 = &LAB_14456c3de;
  local_178 = 0;
  local_168 = local_108;
  local_160 = &local_10c;
  FUN_146c8cdc0(param_1 + 0xc6,&local_148,&local_158,param_3);
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965584a FUN_14965584a body=122 status=ok
// SIG undefined FUN_14965584a(void)

void FUN_14965584a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149682386(param_1,iVar1);
    }
    FUN_14968236f((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14968241a(param_1,param_2,iVar1 - param_2);
    FUN_149682480(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1496558c6 FUN_1496558c6 body=204 status=ok
// SIG undefined FUN_1496558c6(void)

double FUN_1496558c6(longlong *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 1.0;
  dVar2 = 1.0 - (double)*(float *)(param_1[0x20] + 0xb8);
  dVar1 = 1.0;
  if (dVar2 <= 1.0) {
    dVar1 = dVar2;
  }
  dVar1 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar1);
  dVar2 = (double)(**(code **)(*param_1 + 0x428))();
  if (dVar1 < param_2 / dVar2) {
    dVar3 = (param_2 / dVar2 - dVar1) / (1.0 - dVar1);
    dVar2 = 1.0;
    if (dVar3 <= 1.0) {
      dVar2 = dVar3;
    }
    dVar2 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar2);
    dVar3 = 1.0 - dVar2 * dVar2;
    dVar3 = dVar3 * dVar3 * dVar3;
  }
  return dVar3;
}



// FUNCTION 149655992 FUN_149655992 body=487 status=ok
// SIG undefined FUN_149655992(void)

void FUN_149655992(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  code *local_88;
  longlong **local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)((longlong)param_1 + 0x7ec);
  if (-1 < (longlong)iVar1) {
    lVar3 = param_1[0xfb];
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    FUN_149655552();
    lVar8 = 0x488;
    if ((*(int *)(param_1[0x5e] + 0xa8) == 1) && (lVar8 = 0x490, (int)uStack_70 == 0)) {
      uVar5 = *(uint *)(param_2 + 0x38);
      lVar6 = FUN_14851bd54(param_1[0x54]);
      uVar4 = uStack_70;
      if ((-1 < (int)uVar5) &&
         ((int)uVar5 < *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar6 + 0x148) + (ulonglong)(uVar5 >> 9) * 8) +
                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
          uVar2 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x130) + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 0xc);
          lVar6 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_1446f48e2(&local_78,uVar4 & 0xffffffff);
          }
          *(undefined4 *)(local_78 + lVar6 * 4) = uVar2;
        }
      }
    }
    (**(code **)(*param_1 + lVar8))(param_1,param_2,&local_78);
    lVar8 = param_1[0x101];
    if ((lVar8 != 0) && (lVar6 = (longlong)(int)uStack_70, 0 < lVar6)) {
      lVar7 = 0;
      do {
        FUN_14968252e(lVar8,*(undefined4 *)(local_78 + lVar7),local_68 + lVar7,local_58 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar6 * 4 != lVar7);
    }
    local_80 = &local_a0;
    local_88 = FUN_14456c600;
    local_a0 = &local_78;
    local_98 = (longlong)iVar1 * 0x30 + lVar3;
    local_90 = param_1;
    FUN_14851c3f8(param_1[0x54],&local_88,0);
    FUN_14851bc40(param_1[0x54],2,2,0);
    FUN_149655b7a(&local_78);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149655b7a FUN_149655b7a body=61 status=ok
// SIG undefined FUN_149655b7a(void)

void FUN_149655b7a(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149655bb8 FUN_149655bb8 body=2151 status=ok
// SIG undefined FUN_149655bb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149655bb8(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_328 [40];
  longlong local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  code *local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [16];
  longlong local_2a8 [2];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined1 local_258 [16];
  double local_248;
  undefined4 local_22c;
  undefined1 *local_228;
  int local_220;
  int local_210;
  int local_20c;
  longlong local_1f8;
  longlong *local_1e8;
  longlong local_1d8 [4];
  undefined1 *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  uint local_190;
  code *local_188;
  longlong *local_178;
  longlong local_168 [4];
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138 [2];
  longlong *local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  lVar2 = *(longlong *)(param_1 + 0xa0);
  local_2f8 = param_3;
  if (lVar2 == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar11 = FUN_145a7b1c0();
    plVar9 = (longlong *)FUN_144718840(lVar2,uVar11);
  }
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_298);
  plVar9 = local_2f8;
  local_278 = *(double *)(param_2 + 8) - local_278;
  dStack_270 = *(double *)(param_2 + 0x10) - dStack_270;
  local_268 = *(double *)(param_2 + 0x18) - local_268;
  dVar26 = -local_298;
  dStack_290 = -dStack_290;
  local_288 = local_288 * -1.0;
  dStack_280 = dStack_280 * 1.0;
  dVar25 = local_278 * local_288 - dVar26 * local_268;
  dVar24 = dStack_270 * dVar26 - local_278 * dStack_290;
  dVar23 = local_268 * dStack_290 - dStack_270 * local_288;
  dVar23 = dVar23 + dVar23;
  dVar25 = dVar25 + dVar25;
  dVar24 = dVar24 + dVar24;
  auVar19 = divpd(_DAT_149934d80,local_258);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_258._0_8_)) & auVar19._0_8_) *
          ((dVar24 * dStack_290 - dVar25 * local_288) + dStack_280 * dVar23 + local_278);
  dVar18 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_258._8_8_)) & auVar19._8_8_) *
           (local_298 * dVar24 + local_288 * dVar23 + dStack_280 * dVar25 + dStack_270);
  dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_248)) &
                   (ulonglong)(1.0 / local_248)) *
           (dStack_280 * dVar24 + local_268 + (dVar25 * dVar26 - dVar23 * dStack_290));
  uVar7 = *(uint *)(local_2f8 + 1);
  uVar16 = (ulonglong)uVar7;
  local_2e8 = local_2f8 + 2;
  FUN_144a84024(local_2e8,uVar16,1);
  local_2f0 = plVar9 + 4;
  FUN_144a84024(local_2f0,uVar7,1);
  lVar15 = (longlong)*(int *)(param_1 + 0x7ec) * 0x30 + *(longlong *)(param_1 + 0x7d8);
  pcVar10 = (code *)FUN_14851bd54(*(undefined8 *)(param_1 + 0x2a0));
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  FUN_146c3d53c(local_2a8,pcVar10);
  lVar2 = local_2a8[0];
  local_300 = param_1;
  if (*(char *)(param_1 + 0x399) == '\x01') {
    local_2d8 = uVar16;
    if (0 < (int)uVar7) {
      local_2e0 = pcVar10 + 0xb8;
      local_2b8._8_8_ = dVar18;
      local_2b8._0_8_ = dVar18;
      uVar16 = 0;
      do {
        local_190 = *(uint *)(*local_2f8 + uVar16 * 4);
        local_2c0 = (ulonglong)local_190;
        local_2c8 = (ulonglong)(local_190 >> 9);
        lVar3 = *(longlong *)(*(longlong *)(pcVar10 + 0x10) + local_2c8 * 8);
        local_2d0 = (ulonglong)(local_190 & 0x1ff);
        dVar18 = *(double *)(lVar3 + local_2d0 * 0x18);
        dVar24 = *(double *)(lVar3 + 8 + local_2d0 * 0x18);
        dVar23 = *(double *)(lVar3 + 0x10 + local_2d0 * 0x18);
        local_1a8 = 0;
        local_198 = &PTR_LAB_149f3b7b0;
        local_1b8 = &LAB_146c413d0;
        local_188 = pcVar10;
        FUN_146c41260(local_2e0,&local_148,local_2c0,&local_1b8);
        FUN_146c41458(local_148,&local_1b8,local_140,local_138);
        FUN_146c41662(local_148,&local_228,local_140,local_138);
        fVar27 = 0.0;
        fVar28 = 0.0;
        while ((((pcVar6 = local_188, local_1b8 != local_228 || (local_1b0 != local_220)) ||
                ((int)local_1a0 != local_210)) || (local_1a0._4_4_ != local_20c))) {
          local_22c = local_198._0_4_;
          plVar9 = local_178;
          if (local_178 == (longlong *)0x0) {
            plVar9 = local_168;
          }
          uVar11 = (**(code **)(*plVar9 + 8))();
          uVar12 = (*pcVar6)(uVar11,&local_22c);
          uVar7 = (uint)uVar12;
          uVar12 = uVar12 >> 9 & 0x7fffff;
          if (lVar2 == 0) {
            uVar13 = (ulonglong)(uVar7 & 0x1ff);
          }
          else {
            uVar13 = (ulonglong)(uVar7 & 0x1ff);
            uVar7 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar12 * 8) + uVar13 * 4);
          }
          lVar3 = *(longlong *)(*(longlong *)(pcVar10 + 0x10) + uVar12 * 8);
          dVar25 = dVar18 - *(double *)(lVar3 + uVar13 * 0x18);
          dVar21 = dVar24 - *(double *)(lVar3 + 8 + uVar13 * 0x18);
          dVar22 = dVar23 - *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
          fVar17 = (float)(1.0 / (dVar22 * dVar22 + dVar25 * dVar25 + dVar21 * dVar21));
          fVar1 = 1000.0;
          if (fVar17 <= 1000.0) {
            fVar1 = fVar17;
          }
          fVar1 = (float)(-(uint)(fVar17 < 0.0001) & 0x38d1b717 |
                         ~-(uint)(fVar17 < 0.0001) & (uint)fVar1);
          fVar28 = fVar28 + *(float *)(*(longlong *)(lVar15 + 0x10) + (longlong)(int)uVar7 * 4) *
                            fVar1;
          fVar27 = fVar27 + fVar1;
          if ((int)local_1a8 == 0) {
            local_1ac = 0xffffffff;
            local_1a0 = 0xffffffffffffffff;
          }
          else {
            FUN_146be9922(&local_1b8);
          }
        }
        if (local_1f8 != 0) {
          plVar9 = local_1e8;
          if (local_1e8 == (longlong *)0x0) {
            plVar9 = local_1d8;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        if (local_188 != (code *)0x0) {
          plVar9 = local_178;
          if (local_178 == (longlong *)0x0) {
            plVar9 = local_168;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        if (local_138[0] != 0) {
          plVar9 = local_128;
          if (local_128 == (longlong *)0x0) {
            plVar9 = local_118;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        dVar18 = dVar5 - dVar18;
        dVar24 = (double)local_2b8._0_8_ - dVar24;
        dVar23 = dVar26 - dVar23;
        dVar18 = (double)FUN_1496558c6(local_300,
                                       SQRT(dVar23 * dVar23 + dVar18 * dVar18 + dVar24 * dVar24));
        iVar14 = (int)local_2c0;
        if (lVar2 != 0) {
          iVar14 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + local_2c8 * 8) +
                           local_2d0 * 4);
        }
        fVar20 = (float)dVar18 * 0.25;
        fVar1 = *(float *)(*(longlong *)(lVar15 + 0x10) + (longlong)iVar14 * 4);
        fVar17 = 1.0;
        if (fVar20 <= 1.0) {
          fVar17 = fVar20;
        }
        fVar17 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar17);
        fVar28 = (1.0 - fVar17) * fVar1 + fVar17 * (fVar28 / fVar27);
        *(float *)(*local_2e8 + uVar16 * 4) = fVar1;
        fVar27 = *(float *)(local_300 + 0x7f0);
        if ((*(float *)(local_300 + 0x7f0) <= fVar28) &&
           (fVar27 = *(float *)(local_300 + 0x7f4), fVar28 <= *(float *)(local_300 + 0x7f4))) {
          fVar27 = fVar28;
        }
        *(float *)(*local_2f0 + uVar16 * 4) = fVar27;
        uVar16 = uVar16 + 1;
      } while (uVar16 != local_2d8);
    }
  }
  else {
    fVar27 = *(float *)(*(longlong *)(param_1 + 0x100) + 0xb4);
    if (*(char *)(param_1 + 0x398) != '\0') {
      fVar27 = -fVar27;
    }
    if (0 < (int)uVar7) {
      fVar28 = *(float *)(param_1 + 0x7f4);
      fVar1 = *(float *)(param_1 + 0x7f0);
      uVar12 = 0;
      do {
        lVar3 = local_300;
        uVar7 = *(uint *)(*local_2f8 + uVar12 * 4);
        uVar8 = uVar7 >> 9;
        if (lVar2 == 0) {
          uVar13 = (ulonglong)(uVar7 & 0x1ff);
        }
        else {
          uVar13 = (ulonglong)(uVar7 & 0x1ff);
          uVar7 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)uVar8 * 8) +
                           uVar13 * 4);
        }
        lVar4 = *(longlong *)(*(longlong *)(pcVar10 + 0x10) + (ulonglong)uVar8 * 8);
        dVar24 = dVar5 - *(double *)(lVar4 + uVar13 * 0x18);
        dVar23 = dVar18 - *(double *)(lVar4 + 8 + uVar13 * 0x18);
        dVar25 = dVar26 - *(double *)(lVar4 + 0x10 + uVar13 * 0x18);
        dVar24 = (double)FUN_1496558c6(local_300,
                                       SQRT(dVar25 * dVar25 + dVar24 * dVar24 + dVar23 * dVar23));
        *(undefined4 *)(*local_2e8 + uVar12 * 4) =
             *(undefined4 *)(*(longlong *)(lVar15 + 0x10) + (longlong)(int)uVar7 * 4);
        fVar20 = (float)dVar24 * fVar27 * (fVar28 - fVar1) + *(float *)(*local_2e8 + uVar12 * 4);
        fVar17 = *(float *)(lVar3 + 0x7f0);
        if ((fVar17 <= fVar20) && (fVar17 = *(float *)(lVar3 + 0x7f4), fVar20 <= fVar17)) {
          fVar17 = fVar20;
        }
        *(float *)(*local_2f0 + uVar12 * 4) = fVar17;
        uVar12 = uVar12 + 1;
      } while (uVar16 != uVar12);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149656420 FUN_149656420 body=1662 status=ok
// SIG undefined FUN_149656420(void)

void FUN_149656420(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_248 [32];
  longlong **local_228;
  undefined1 **local_220;
  longlong local_210;
  uint *local_208;
  uint *local_200;
  longlong *local_1f8;
  undefined1 local_1f0 [4];
  uint local_1ec;
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  uint *local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8 [2];
  code *local_198;
  longlong **local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  int local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_208 = (uint *)(longlong)*(int *)((longlong)param_1 + 0x7ec);
  local_200 = (uint *)param_1[0xfb];
  local_1f8 = param_1;
  local_210 = FUN_14851bd54(param_1[0x54]);
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  lVar10 = param_3[1];
  if ((longlong)(int)lVar10 != 0) {
    lVar7 = *param_3;
    lVar8 = 0;
    do {
      local_118 = &local_c8;
      local_198 = FUN_14456c790;
      local_190 = &local_118;
      FUN_146c03fd0(local_210,*(undefined4 *)(lVar7 + lVar8),&local_198);
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar10 * 4 != lVar8);
  }
  fVar12 = *(float *)(local_1f8 + 0xfe);
  if ((char)local_1f8[0x73] == '\0') {
    fVar12 = (*(float *)((longlong)local_1f8 + 0x7f4) - fVar12) * *(float *)(local_1f8[0x20] + 0xb4)
    ;
  }
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  FUN_146c3d53c(local_1a8,local_210);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = (uint *)0x0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = (undefined1 *)0x0;
  local_120 = 0;
  if (local_94 < (int)uStack_c0) {
    local_1f8 = param_3 + 2;
    puVar9 = local_200 + (longlong)local_208 * 0xc + 4;
    do {
      bVar11 = (longlong)uStack_1c0 < 0;
      uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
      if (bVar11) {
        FUN_14481578e(&local_1c8,0);
      }
      bVar11 = (longlong)uStack_1d0 < 0;
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      if (bVar11) {
        FUN_14481578e(&local_1d8,0);
      }
      FUN_1402226aa(&local_118);
      bVar11 = (longlong)uStack_1b0 < 0;
      uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
      if (bVar11) {
        FUN_14481578e(&local_1b8,0);
      }
      local_188 = 0x100000000;
      local_180 = local_b8;
      local_178 = 0xffffffff;
      local_170 = 0;
      if (local_a0 == 0) {
        local_178._4_4_ = 0;
      }
      else {
        FUN_1449c0562(&local_188);
      }
      uVar2 = uStack_1b0;
      puVar6 = (undefined4 *)((longlong)local_178._4_4_ * 0xc + local_c8);
      lVar10 = (longlong)(int)uStack_1b0;
      uVar3 = (int)uStack_1b0 + 1;
      uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar3);
      if (uStack_1b0._4_4_ < uVar3) {
        FUN_1446f48e2(&local_1b8,uVar2 & 0xffffffff);
      }
      lVar7 = local_210;
      *(undefined4 *)(local_1b8 + lVar10 * 4) = *puVar6;
      local_1e0 = &local_188;
      local_1e8 = &LAB_14835077a;
      local_220 = &local_1e8;
      local_228 = &local_118;
      FUN_146c81c82(local_210,&local_1b8,&local_1c8,&local_1d8);
      if ((longlong)(int)uStack_1c0 != 0) {
        local_208 = local_1c8 + (int)uStack_1c0;
        puVar4 = local_1c8;
        do {
          uVar3 = *puVar4;
          local_200 = puVar4;
          FUN_144a7cc9e(&local_c8,uVar3);
          lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
          local_180 = (undefined1 *)
                      CONCAT44(local_180._4_4_,
                               *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc));
          local_188 = *(undefined8 *)(lVar10 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
          lVar10 = 0;
          do {
            uVar3 = *(uint *)((longlong)&local_188 + lVar10 * 4);
            if ((int)uStack_160 != local_134) {
              puVar5 = local_128;
              if (local_128 == (undefined1 *)0x0) {
                puVar5 = local_130;
              }
              for (iVar1 = *(int *)(puVar5 + (ulonglong)(local_120 - 1U & uVar3) * 4); iVar1 != -1;
                  iVar1 = *(int *)(local_168 + (longlong)iVar1 * 0xc + 4)) {
                if (*(uint *)(local_168 + (longlong)iVar1 * 0xc) == uVar3) goto LAB_149656918;
              }
            }
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            local_1ec = uVar3;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_1446f48e2(param_3,iVar1);
            }
            *(uint *)(*param_3 + (longlong)iVar1 * 4) = local_1ec;
            uVar3 = local_1ec;
            if (local_1a8[0] != 0) {
              uVar3 = *(uint *)(*(longlong *)
                                 (*(longlong *)(local_1a8[0] + 0x20) +
                                 (ulonglong)(local_1ec >> 9) * 8) +
                               (ulonglong)(local_1ec & 0x1ff) * 4);
            }
            lVar7 = *(longlong *)puVar9;
            iVar1 = (int)param_3[3];
            *(uint *)(param_3 + 3) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0x1c) < iVar1 + 1U) {
              FUN_14475e4ac(local_1f8,iVar1);
            }
            *(undefined4 *)(param_3[2] + (longlong)iVar1 * 4) =
                 *(undefined4 *)(lVar7 + (longlong)(int)uVar3 * 4);
            iVar1 = (int)param_3[5];
            *(uint *)(param_3 + 5) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0x2c) < iVar1 + 1U) {
              FUN_14475e4ac(param_3 + 4,iVar1);
            }
            *(float *)(param_3[4] + (longlong)iVar1 * 4) = fVar12;
            FUN_1447cbafe(&local_168,local_1f0,&local_1ec,0);
LAB_149656918:
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
          puVar4 = local_200 + 1;
          lVar7 = local_210;
        } while (puVar4 != local_208);
      }
    } while (local_94 < (int)uStack_c0);
    local_120 = 0;
    if (local_128 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a082e(&local_168);
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_118);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_c8);
  if ((local_70 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149656aa2 FUN_149656aa2 body=501 status=ok
// SIG undefined FUN_149656aa2(void)

void FUN_149656aa2(longlong *param_1,char param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_1[0x20];
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[0x5e];
  FUN_140056680(&local_48,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,&local_48);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (-1 < (longlong)*(int *)((longlong)param_1 + 0x7ec)) {
    if (0 < (int)param_1[0xfd]) {
      lVar3 = (longlong)*(int *)((longlong)param_1 + 0x7ec) * 0x30 + param_1[0xfb];
      uVar2 = 0;
      do {
        plVar1 = *(longlong **)(lVar3 + 8);
        (**(code **)(*plVar1 + 0x18))
                  (plVar1,uVar2 & 0xffffffff,
                   *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)(int)param_1[0xfd]);
    }
    *(undefined8 *)((longlong)param_1 + 0x7ec) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x7f4) = 0x3f800000;
  }
  if (param_2 == '\x01') {
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"MeshAttributePaintTool";
    local_40 = 0x16;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UMeshAttributePaintTool";
    local_40 = 0x17;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"Edit Attributes");
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    local_48 = (wchar_t *)0x3e800000000;
    FUN_148506a2a(param_1[0x14],param_1[0xc5],0);
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149656c98 FUN_149656c98 body=94 status=ok
// SIG undefined FUN_149656c98(void)

void FUN_149656c98(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0);
  memset(puVar2 + 1,0,0xb8);
  *puVar2 = &PTR_LAB_14bdac4b0;
  plVar1 = (longlong *)*param_1;
  *param_1 = (longlong)puVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
  }
  FUN_1407058ce(param_1 + 1);
  return;
}



// FUNCTION 149656cf6 FUN_149656cf6 body=184 status=ok
// SIG undefined FUN_149656cf6(void)

void FUN_149656cf6(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x7e0))) {
    lVar2 = (ulonglong)param_2 * 0x30 + *(longlong *)(param_1 + 0x7d8);
    lVar1 = param_3[1];
    if (0 < (longlong)(int)lVar1) {
      lVar3 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)*(int *)(*param_3 + lVar3 * 4) * 4)
             = *(undefined4 *)(*param_4 + lVar3 * 4);
        lVar3 = lVar3 + 1;
      } while ((int)lVar1 != lVar3);
    }
    if (*(uint *)(param_1 + 0x7ec) == param_2) {
      local_20 = &local_40;
      local_28 = FUN_14456c7ea;
      local_40 = param_3;
      local_38 = param_1;
      local_30 = lVar2;
      FUN_14851c368(*(undefined8 *)(param_1 + 0x2a0));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149656db4 FUN_149656db4 body=901 status=ok
// SIG undefined FUN_149656db4(void)

void FUN_149656db4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_338 [32];
  ulonglong local_318;
  undefined1 **local_310;
  undefined1 local_308 [96];
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined1 *local_298 [2];
  undefined8 local_288;
  undefined **local_278;
  longlong *local_270;
  undefined1 *local_258;
  undefined4 local_250;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_1484416be();
  if (param_1[0x14] == 0) goto LAB_149656de8;
  plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149fab260;
  local_318 = local_318 & 0xffffffffffffff00;
  FUN_1411b354a(plVar6 + 2,0,0,0);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x16] = 0x10;
    plVar12 = (longlong *)param_1[0x17];
    if (plVar12 != (longlong *)0x0) {
      param_1[0x17] = 0;
LAB_149656e7d:
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_149656ee3;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x16] = (longlong)(plVar6 + 2);
    plVar12 = (longlong *)param_1[0x17];
    if (plVar6 == plVar12) {
      LOCK();
      plVar12 = plVar6 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    else {
      param_1[0x17] = (longlong)plVar6;
      if (plVar12 != (longlong *)0x0) goto LAB_149656e7d;
    }
LAB_149656ee3:
    LOCK();
    plVar12 = plVar6 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  local_2a0 = 0;
  local_2a8 = 0x3e800000000;
  FUN_148506727(&local_258,param_1[0x14]);
  FUN_146c00942(param_1[0x16],&local_258);
  FUN_141082778(&local_258);
  param_1[0x19] = param_1[0x16];
  param_1[0x1a] = 0;
  FUN_146bee918(param_1 + 0x18,0);
  param_1[0x1a] =
       (ulonglong)(uint)(*(int *)(param_1[0x19] + 0x214) + *(int *)(param_1[0x19] + 0x218));
  lVar9 = param_1[0x16];
  puVar7 = (undefined8 *)FUN_14001cc68(0x170,0x10);
  FUN_1482aa55c(puVar7,lVar9,0);
  ppuVar8 = &PTR_FUN_14bdac610;
  *puVar7 = &PTR_FUN_14bdac610;
  puVar3 = (undefined8 *)param_1[0x33];
  param_1[0x33] = (longlong)puVar7;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    puVar7 = (undefined8 *)param_1[0x33];
    ppuVar8 = (undefined **)*puVar7;
  }
  (*(code *)ppuVar8[1])(puVar7);
  lVar9 = FUN_148f61c65(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x32] = lVar9;
  plVar6 = (longlong *)0x0;
  *(undefined1 *)(lVar9 + 0x40) = 0;
  (**(code **)(*(longlong *)param_1[0x32] + 0x2a0))((longlong *)param_1[0x32],param_1);
  *(undefined1 *)(*(longlong *)(param_1[0x32] + 0x78) + 0xa9) = 1;
  *(undefined1 *)(*(longlong *)(param_1[0x32] + 0x78) + 0xaa) = 0;
  *(undefined1 *)(*(longlong *)(param_1[0x32] + 0x78) + 0xa8) = 0;
  lVar9 = param_1[0x32];
  local_288 = 0;
  local_278 = &PTR_LAB_14bdac640;
  local_298[0] = &LAB_14456c93a;
  uVar4 = param_1[0x33];
  local_270 = param_1;
  uVar10 = (**(code **)(*param_1 + 0x3a0))(param_1);
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    uVar11 = FUN_145a7b1c0();
    plVar6 = (longlong *)FUN_144718840(lVar5,uVar11);
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,local_308);
  local_310 = local_298;
  local_318 = uVar4;
  FUN_14854d762(lVar9,param_1[0x16],local_308,uVar10);
  local_258 = &LAB_149657216;
  local_250 = 0;
  FUN_14965713a(param_1[0x32] + 0x48,&local_2a8,param_1);
LAB_149656de8:
  if ((local_38 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965713a FUN_14965713a body=218 status=ok
// SIG undefined FUN_14965713a(void)

undefined8
FUN_14965713a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdac660;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149657224 FUN_149657224 body=23 status=ok
// SIG undefined FUN_149657224(void)

void FUN_149657224(longlong param_1)

{
  if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149657233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 400) + 0x2a8))();
    return;
  }
  return;
}



// FUNCTION 14965723c FUN_14965723c body=26 status=ok
// SIG undefined FUN_14965723c(void)

void FUN_14965723c(longlong param_1)

{
  if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149657252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 400) + 0x2b0))();
    return;
  }
  return;
}



// FUNCTION 14965729a FUN_14965729a body=84 status=ok
// SIG undefined FUN_14965729a(void)

void FUN_14965729a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496572e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,8,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 1496572ee FUN_1496572ee body=84 status=ok
// SIG undefined FUN_1496572ee(void)

void FUN_1496572ee(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149657338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,6,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 149657342 FUN_149657342 body=84 status=ok
// SIG undefined FUN_149657342(void)

void FUN_149657342(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014965738c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,7,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 149657396 FUN_149657396 body=84 status=ok
// SIG undefined FUN_149657396(void)

void FUN_149657396(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496573e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,2,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 1496573ea FUN_1496573ea body=84 status=ok
// SIG undefined FUN_1496573ea(void)

void FUN_1496573ea(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149657434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,3,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 14965743e FUN_14965743e body=84 status=ok
// SIG undefined FUN_14965743e(void)

void FUN_14965743e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149657488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,4,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 149657492 FUN_149657492 body=84 status=ok
// SIG undefined FUN_149657492(void)

void FUN_149657492(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496574dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,5,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 1496574e6 FUN_1496574e6 body=84 status=ok
// SIG undefined FUN_1496574e6(void)

void FUN_1496574e6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149657530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x650))(plVar2,1,*(code **)(*plVar2 + 0x650));
    return;
  }
  return;
}



// FUNCTION 149657542 FUN_149657542 body=46 status=ok
// SIG undefined FUN_149657542(void)

longlong * FUN_149657542(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_149657570(param_2[1]);
  (**(code **)(*plVar1 + 1000))(plVar1,*param_2);
  return plVar1;
}



// FUNCTION 149657570 FUN_149657570 body=148 status=ok
// SIG undefined FUN_149657570(void)

undefined8 FUN_149657570(undefined8 param_1)

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
  uVar1 = FUN_145bace8a();
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



// FUNCTION 149657606 FUN_149657606 body=142 status=ok
// SIG undefined FUN_149657606(void)

bool FUN_149657606(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_148441d74();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = FUN_14456c98c;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149657696 FUN_149657696 body=4351 status=ok
// SIG undefined FUN_149657696(void)

void FUN_149657696(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  undefined1 auStack_418 [32];
  wchar_t **local_3f8;
  code *local_3f0;
  longlong *local_3e8;
  code *local_3e0;
  longlong *local_3d8;
  undefined1 local_3d0 [16];
  undefined8 *local_3c0;
  undefined1 local_3b4 [4];
  undefined1 local_3b0 [16];
  undefined8 *local_3a0;
  undefined8 *local_398;
  undefined1 local_390 [48];
  undefined8 local_360;
  longlong local_358;
  int local_350;
  code *local_348 [2];
  undefined8 local_338;
  undefined **local_328;
  longlong *local_320;
  undefined1 *local_308;
  undefined8 local_2f8;
  undefined **local_2e8;
  longlong *local_2e0;
  undefined1 *local_2c8;
  undefined8 local_2b8;
  undefined **local_2a8;
  longlong *local_2a0;
  undefined1 *local_288;
  undefined8 local_278;
  undefined **local_268;
  longlong *local_260;
  code *local_248;
  undefined8 local_238;
  undefined **local_228;
  longlong *local_220;
  undefined1 *local_208;
  undefined8 local_1f8;
  undefined **local_1e8;
  longlong *local_1e0;
  longlong local_1c8;
  longlong *local_1b8;
  longlong local_1a8 [4];
  longlong local_188;
  longlong *local_178;
  longlong local_168 [4];
  wchar_t *local_148;
  undefined4 local_140;
  longlong local_108;
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8;
  longlong *plStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  ulonglong uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_1496b32c4();
  local_148 = L"ToolName";
  local_140 = 8;
  FUN_1446e940c(&local_88,&local_148);
  local_148 = L"UMeshGroupPaintTool";
  local_140 = 0x13;
  FUN_1446e940c(&local_c8,&local_148);
  FUN_140208bae(&local_148,&local_c8,&local_88,L"Paint PolyGroups");
  (**(code **)(*param_1 + 0x370))(param_1,&local_148);
  if (local_148 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_148 + 0x10))();
  }
  FUN_1411371f6(&local_148);
  lVar9 = param_1[0x22];
  uVar8 = FUN_14120ac06();
  local_3f8 = &local_148;
  lVar9 = FUN_141137228(lVar9,uVar8,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x17b] = lVar9;
  lVar9 = FUN_14851b239(lVar9);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x17c] = lVar9;
  FUN_1496b409c(param_1,lVar9,param_1[0x17b]);
  FUN_148506417(&local_358,param_1[0x14],0);
  if (0 < local_350) {
    uVar14 = 0;
    do {
      (**(code **)(*(longlong *)param_1[0x17c] + 0x638))
                ((longlong *)param_1[0x17c],uVar14 & 0xffffffff,
                 *(undefined8 *)(local_358 + uVar14 * 8));
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)local_350);
  }
  FUN_1484b501a(param_1[0x17c],0);
  local_88 = FUN_149658872;
  uStack_80._0_4_ = 0;
  FUN_149658796(param_1[0x17c] + 0x6c8,&local_c8,param_1,&local_88);
  param_1[0x17e] = (longlong)local_c8;
  local_360 = (**(code **)(*param_1 + 0x420))(param_1);
  uStack_80 = CONCAT44(uStack_80._4_4_,DAT_14c846358);
  local_88 = DAT_14c846350;
  FUN_146c01f68(local_360,&local_88);
  FUN_145c688c4(local_360,local_390,1);
  local_188 = 0;
  local_178 = (longlong *)0x0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14bdac740;
  local_88 = FUN_14456c9a0;
  plStack_60 = param_1;
  FUN_14170b918(&local_c8);
  local_3d8 = plStack_c0;
  local_b8 = (undefined ***)CONCAT71(local_b8._1_7_,1);
  local_3e0 = local_c8;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
    UNLOCK();
  }
  cVar7 = FUN_144a53f06();
  pcVar5 = local_88;
  plVar11 = DAT_14c8442c0;
  if (cVar7 == '\0') {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_68;
    }
    uVar8 = (*(code *)(*pppuVar13)[1])();
    (*pcVar5)(uVar8);
    *(undefined4 *)(local_c8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar10[1] = 0;
    *puVar10 = TAsyncQueuedWork<void>::vftable;
    puVar10[2] = local_88;
    puVar10[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar10 + 8) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar10 + 0x44) = local_58._4_4_;
    *(undefined4 *)(puVar10 + 9) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_50._4_4_;
    puVar10[6] = local_68;
    puVar10[7] = plStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar10[10] = local_c8;
    puVar10[0xb] = plStack_c0;
    local_c8 = (code *)0x0;
    plStack_c0 = (longlong *)0x0;
    *(undefined1 *)(puVar10 + 0xc) = 0;
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,3);
  }
  plVar11 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_68;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (local_188 != 0) {
    plVar11 = local_178;
    if (local_178 == (longlong *)0x0) {
      plVar11 = local_168;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_1c8 = 0;
  local_1b8 = (longlong *)0x0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14bdac760;
  plStack_60 = &local_360;
  local_88 = FUN_14456c9dc;
  local_58 = param_1;
  uStack_50 = local_390;
  FUN_14170b918(&local_c8);
  local_3e8 = plStack_c0;
  local_b8 = (undefined ***)CONCAT71(local_b8._1_7_,1);
  local_3f0 = local_c8;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
    UNLOCK();
  }
  cVar7 = FUN_144a53f06();
  pcVar5 = local_88;
  plVar11 = DAT_14c8442c0;
  if (cVar7 == '\0') {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_68;
    }
    uVar8 = (*(code *)(*pppuVar13)[1])();
    (*pcVar5)(uVar8);
    *(undefined4 *)(local_c8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar10[1] = 0;
    *puVar10 = TAsyncQueuedWork<void>::vftable;
    puVar10[2] = local_88;
    puVar10[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar10 + 8) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar10 + 0x44) = local_58._4_4_;
    *(undefined4 *)(puVar10 + 9) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_50._4_4_;
    puVar10[6] = local_68;
    puVar10[7] = plStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar10[10] = local_c8;
    puVar10[0xb] = plStack_c0;
    local_c8 = (code *)0x0;
    plStack_c0 = (longlong *)0x0;
    *(undefined1 *)(puVar10 + 0xc) = 0;
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,3);
  }
  plVar11 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_68;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (local_1c8 != 0) {
    plVar11 = local_1b8;
    if (local_1b8 == (longlong *)0x0) {
      plVar11 = local_1a8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  puVar10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  FUN_1484b78ec(local_360,&local_358,puVar10,0x4000);
  FUN_1484b74d4(puVar10,local_360);
  local_398 = puVar10;
  (**(code **)(*(longlong *)param_1[0x17c] + 0xc28))();
  FUN_1496b8318(param_1,local_390);
  plVar11 = (longlong *)FUN_149658890(param_1);
  if ((plVar11 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar11);
  }
  param_1[0x17a] = (longlong)plVar11;
  (**(code **)(*plVar11 + 0x2a0))(plVar11,param_1);
  FUN_1484fe310(param_1[0x17a],0);
  *(undefined4 *)(param_1[0x17a] + 0x88) = 0x41200000;
  local_88 = FUN_149658a02;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  FUN_149658926(param_1[0x17a] + 0x70,&local_c8,param_1);
  plVar11 = (longlong *)FUN_148f7334e(param_1);
  if ((plVar11 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar11);
  }
  param_1[0x174] = (longlong)plVar11;
  FUN_140056680(&local_88,L"MeshGroupPaintTool");
  (**(code **)(*plVar11 + 0x2a8))(plVar11,param_1,&local_88);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = param_1[0x174];
  uVar8 = (**(code **)(*param_1 + 0x420))(param_1);
  FUN_14851d694(lVar9,uVar8);
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_14bdac860;
  local_208 = &LAB_14456cae4;
  local_1e0 = param_1;
  FUN_1484c9a28(param_1[0x174] + 0x28,param_1[0x174] + 0xa8);
  FUN_149659142(param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x174]);
  lVar9 = FUN_14965927e(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x175] = lVar9;
  local_238 = 0;
  local_228 = &PTR_LAB_14bdac8e0;
  local_248 = FUN_14456cb34;
  local_220 = param_1;
  FUN_149659314(lVar9 + 0x28,lVar9 + 0xa9);
  local_278 = 0;
  local_268 = &PTR_LAB_14bdac900;
  local_288 = &LAB_14456cbc0;
  local_260 = param_1;
  FUN_1484de26e(param_1[0x175] + 0x28,param_1[0x175] + 0xac);
  local_2b8 = 0;
  local_2a8 = &PTR_LAB_14bdac920;
  local_2c8 = &LAB_14456cc28;
  local_2a0 = param_1;
  FUN_1484c9b00(param_1[0x175] + 0x28,param_1[0x175] + 0xb1);
  plVar11 = (longlong *)param_1[0x175];
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar11 + 0x2a8))(plVar11,param_1,&local_88);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1[0x175] + 0xac) = *(undefined4 *)(param_1[0x20] + 0xac);
  *(undefined1 *)(param_1[0x175] + 0xb1) = *(undefined1 *)(param_1[0x20] + 200);
  *(undefined4 *)(param_1[0x175] + 0xb4) = *(undefined4 *)(param_1[0x17f] + 0x14);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x175]);
  (**(code **)(*param_1 + 0x5e0))(param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x20]);
  *(undefined1 *)(param_1[0x20] + 0xd8) = 0;
  *(undefined1 *)(param_1[0x20] + 0xc0) = 0;
  *(undefined1 *)(param_1[0x20] + 0xd9) = 0;
  (**(code **)(*param_1 + 0x470))(param_1);
  lVar9 = FUN_1496593e9(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x176] = lVar9;
  local_3a0 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *local_3a0 = &PTR_FUN_14bdaca18;
  local_3a0[2] = 0;
  local_3a0[4] = 0;
  local_88 = (code *)local_3a0[2];
  uStack_80 = local_3a0[3];
  local_78 = (undefined ***)local_3a0[4];
  uStack_70 = local_3a0[5];
  local_68 = (undefined **)local_3a0[6];
  plStack_60 = (longlong *)local_3a0[7];
  local_58 = (longlong *)local_3a0[8];
  uStack_50 = (undefined1 *)local_3a0[9];
  uVar8 = local_58;
  uVar6 = uStack_50;
  uStack_a0._0_4_ = SUB84(param_1,0);
  uStack_a0._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  *(undefined4 *)(local_3a0 + 8) = local_98;
  *(undefined4 *)((longlong)local_3a0 + 0x44) = uStack_94;
  *(undefined4 *)(local_3a0 + 9) = uStack_90;
  *(undefined4 *)((longlong)local_3a0 + 0x4c) = uStack_8c;
  *(undefined4 *)(local_3a0 + 6) = 0x4bdac940;
  *(undefined4 *)((longlong)local_3a0 + 0x34) = 1;
  *(undefined4 *)(local_3a0 + 7) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)local_3a0 + 0x3c) = uStack_a0._4_4_;
  local_3a0[4] = 0;
  local_3a0[5] = uStack_b0;
  local_3a0[2] = FUN_14456cc84;
  local_3a0[3] = plStack_c0;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = plStack_60;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  local_c8 = local_88;
  plStack_c0 = (longlong *)uStack_80;
  local_58 = (longlong *)uVar8;
  uStack_50 = (undefined1 *)uVar6;
  if (local_88 != (code *)0x0) {
    pppuVar13 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar13 = &local_a8;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  local_88 = (code *)0x149eeead0;
  uStack_80._0_4_ = 5;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = (code *)0x14bd9b3d8;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x13);
  FUN_1446e940c(local_3b4,&local_88);
  FUN_140208bae(local_3b0,local_3b4,&local_c8,L"Paint");
  local_3f8 = (wchar_t **)lVar9;
  FUN_1496b438e(param_1,0,local_3b0,&local_3a0);
  lVar9 = FUN_14965947e(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x177] = lVar9;
  local_88 = *(code **)(lVar9 + 0xb0);
  uStack_80 = *(undefined8 *)(lVar9 + 0xb8);
  local_78 = *(undefined ****)(lVar9 + 0xc0);
  uStack_70 = *(undefined8 *)(lVar9 + 200);
  local_68 = *(undefined ***)(lVar9 + 0xd0);
  plStack_60 = *(longlong **)(lVar9 + 0xd8);
  local_58 = *(longlong **)(lVar9 + 0xe0);
  uStack_50 = *(undefined1 **)(lVar9 + 0xe8);
  uVar8 = local_58;
  uVar6 = uStack_50;
  *(ulonglong *)(lVar9 + 0xe0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar9 + 0xe8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar9 + 0xd0) = &PTR_LAB_14bdaca30;
  *(longlong **)(lVar9 + 0xd8) = param_1;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  *(undefined8 *)(lVar9 + 200) = uStack_b0;
  *(undefined1 **)(lVar9 + 0xb0) = &LAB_14456cd1e;
  *(longlong **)(lVar9 + 0xb8) = plStack_c0;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = plStack_60;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  local_c8 = local_88;
  plStack_c0 = (longlong *)uStack_80;
  local_58 = (longlong *)uVar8;
  uStack_50 = (undefined1 *)uVar6;
  if (local_88 != (code *)0x0) {
    pppuVar13 = &local_a8;
    if (local_78 != (undefined ***)0x0) {
      pppuVar13 = local_b8;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  lVar9 = param_1[0x177];
  local_3c0 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_3c0 = &PTR_FUN_14bdaca50;
  local_88 = (code *)0x14bd9c030;
  uStack_80._0_4_ = 5;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = (code *)0x14bd9b3d8;
  uStack_80 = CONCAT44(uStack_80._4_4_,0x13);
  FUN_1446e940c(local_3b4,&local_88);
  FUN_140208bae(local_3d0,local_3b4,&local_c8,L"Erase");
  local_3f8 = (wchar_t **)lVar9;
  FUN_1496b454e(param_1,1,local_3d0,&local_3c0);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x142]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],0);
  local_2f8 = 0;
  local_2e8 = &PTR_LAB_14bdacb20;
  local_308 = &LAB_14456cd66;
  local_2e0 = param_1;
  FUN_149659514(param_1[0x175] + 0x28,param_1[0x175] + 0xa8);
  FUN_1496b3abe(param_1);
  FUN_1496595ea(param_1,*(undefined1 *)(param_1[0x175] + 0xa8));
  FUN_1496b4e36(param_1,1);
  lVar9 = FUN_149659786(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x178] = lVar9;
  FUN_14485c47a(lVar9 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x178]);
  lVar9 = FUN_1484e487a(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar9);
  }
  param_1[0x17d] = lVar9;
  lVar4 = param_1[0x17c];
  lVar12 = *(longlong *)(lVar4 + 0xb0);
  if (lVar12 == 0) {
    lVar12 = FUN_1448abda6();
  }
  FUN_1484e0ce2(lVar9,lVar12,lVar4 + 0x240);
  lVar9 = param_1[0x17d];
  plVar11 = *(longlong **)(lVar9 + 0x120);
  if (plVar11 != (longlong *)0x0) {
    FUN_140056680(&local_88,L"MeshGroupPaintTool");
    (**(code **)(*plVar11 + 0x2a8))(plVar11,param_1,&local_88);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(param_1[0x17d] + 0x120));
    lVar9 = param_1[0x17d];
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14bdacb40;
  local_88 = FUN_14456cdb8;
  plStack_60 = param_1;
  FUN_1484de4b4(lVar9,&local_88);
  if (local_88 != (code *)0x0) {
    pppuVar13 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar13 = local_78;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  local_338 = 0;
  local_328 = &PTR_LAB_14bdacb60;
  local_348[0] = FUN_14456ce18;
  local_320 = param_1;
  (**(code **)(*(longlong *)param_1[0x17c] + 0xbe8))((longlong *)param_1[0x17c],local_348,2);
  (**(code **)(*param_1 + 0x590))(param_1,0);
  (**(code **)(*param_1 + 0x5a0))(param_1,6);
  (**(code **)(*param_1 + 0x598))(param_1,0);
  (**(code **)(*param_1 + 0x5a8))(param_1,1);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x20],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x175],1);
  FUN_1496b51e2(param_1,0);
  plVar11 = local_3d8;
  pcVar5 = local_3e0;
  if (local_3e0 != (code *)0x0) {
    do {
      cVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x70) + 0x20))
                        (*(longlong **)(pcVar5 + 0x70),0xffffffff,0);
    } while (cVar7 == '\0');
  }
  pcVar5 = local_3f0;
  if (local_3f0 != (code *)0x0) {
    do {
      cVar7 = (**(code **)(**(longlong **)(pcVar5 + 0x70) + 0x20))
                        (*(longlong **)(pcVar5 + 0x70),0xffffffff,0);
    } while (cVar7 == '\0');
  }
  plVar1 = local_3e8;
  if (local_3e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_3e8)(local_3e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
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
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    if (local_f8 == (longlong *)0x0) {
      local_f8 = local_e8;
    }
    (**(code **)(*local_f8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149658796 FUN_149658796 body=218 status=ok
// SIG undefined FUN_149658796(void)

undefined8
FUN_149658796(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdac6d0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149658872 FUN_149658872 body=30 status=ok
// SIG undefined FUN_149658872(void)

void FUN_149658872(longlong *param_1)

{
  (**(code **)(*param_1 + 0x420))();
  *(undefined1 *)(param_1 + 0x18a) = 1;
  return;
}



// FUNCTION 149658890 FUN_149658890 body=148 status=ok
// SIG undefined FUN_149658890(void)

undefined8 FUN_149658890(undefined8 param_1)

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
  uVar1 = FUN_14595c1ac();
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



// FUNCTION 149658926 FUN_149658926 body=218 status=ok
// SIG undefined FUN_149658926(void)

undefined8
FUN_149658926(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_58 = &PTR_LAB_14bdac7f0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bdac780;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_149682f40(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149658a02 FUN_149658a02 body=1855 status=ok
// SIG undefined FUN_149658a02(void)

void FUN_149658a02(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  void *_Src;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 ***pppuVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined1 auStack_208 [40];
  undefined4 local_1e0;
  undefined8 *local_1d8;
  void ***local_1c8;
  uint local_1bc;
  double *local_1b8;
  uint local_1b0;
  uint local_1ac;
  code *local_1a8;
  void ****local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int local_188;
  int local_15c;
  longlong local_150;
  undefined4 local_148;
  undefined8 ***local_138;
  longlong *local_130;
  longlong lStack_128;
  double **local_120;
  uint *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1b8 = (double *)0x0;
  local_1b0 = *(uint *)(param_2 + 0x78);
  lVar14 = (longlong)(int)local_1b0;
  _Src = *(void **)(param_2 + 0x70);
  if (lVar14 == 0) {
    local_1ac = 0;
    goto LAB_149658cd4;
  }
  FUN_144721d4c(&local_1b8,local_1b0,0);
  memcpy(local_1b8,_Src,lVar14 << 4);
  lVar14 = (longlong)(int)local_1b0;
  if (lVar14 < 2) goto LAB_149658cd4;
  cVar9 = FUN_1484fecf6(&local_1b8);
  pdVar1 = local_1b8;
  if (cVar9 == '\0') {
    dVar2 = local_1b8[1];
    dVar6 = dVar2 - local_1b8[3];
    dVar3 = *local_1b8;
    dVar17 = dVar3 - local_1b8[2];
    dVar19 = SQRT(dVar17 * dVar17 + dVar6 * dVar6);
    if (0.0 < dVar19) {
      dVar6 = dVar6 * (1.0 / dVar19);
    }
    else {
      dVar6 = 0.0;
    }
    dVar7 = (double)(-(ulonglong)(0.0 < dVar19) & (ulonglong)(dVar17 * (1.0 / dVar19)));
    dVar17 = local_1b8[lVar14 * 2 + -2];
    dVar19 = local_1b8[lVar14 * 2 + -1];
    dVar5 = dVar19 - local_1b8[lVar14 * 2 + -3];
    dVar8 = dVar17 - local_1b8[lVar14 * 2 + -4];
    dVar18 = SQRT(dVar8 * dVar8 + dVar5 * dVar5);
    if (0.0 < dVar18) {
      dVar5 = dVar5 * (1.0 / dVar18);
    }
    else {
      dVar5 = 0.0;
    }
    local_138 = (undefined8 ***)0x0;
    lVar14 = (longlong)(int)local_1b0;
    local_130 = (longlong *)CONCAT44(local_130._4_4_,local_1b0);
    if (lVar14 == 0) {
      local_130 = (longlong *)(ulonglong)local_1b0;
LAB_149658f1a:
      uVar20 = 0;
      uVar12 = 0x408f4000;
    }
    else {
      FUN_144721d4c(&local_138,local_1b0,0);
      memcpy(local_138,pdVar1,lVar14 << 4);
      if ((longlong)(int)local_130 < 1) goto LAB_149658f1a;
      iVar15 = (int)local_130 + -1;
      pppuVar13 = local_138 + 1;
      dVar4 = 0.0;
      lVar14 = 0;
      do {
        dVar4 = dVar4 + ((double)local_138[(longlong)iVar15 * 2] * (double)*pppuVar13 -
                        (double)pppuVar13[-1] * (double)local_138[(longlong)iVar15 * 2 + 1]);
        iVar15 = (int)lVar14;
        lVar14 = lVar14 + 1;
        pppuVar13 = pppuVar13 + 2;
      } while ((int)local_130 != lVar14);
      uVar20 = (undefined4)*(undefined8 *)(&DAT_14bd8f900 + (ulonglong)(dVar4 * 0.5 < 0.0) * 8);
      uVar12 = (undefined4)
               ((ulonglong)*(undefined8 *)(&DAT_14bd8f900 + (ulonglong)(dVar4 * 0.5 < 0.0) * 8) >>
               0x20);
    }
    dVar8 = (double)(-(ulonglong)(0.0 < dVar18) & (ulonglong)(dVar8 * (1.0 / dVar18)));
    uVar16 = (ulonglong)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar16);
    }
    pdVar1 = local_1b8;
    memmove(local_1b8 + 2,local_1b8,uVar16 << 4);
    *pdVar1 = dVar3 + dVar7 * 10000.0;
    pdVar1[1] = dVar2 + dVar6 * 10000.0;
    dVar2 = local_1b8[1];
    dVar3 = *local_1b8;
    uVar16 = (ulonglong)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar16);
    }
    pdVar1 = local_1b8;
    memmove(local_1b8 + 2,local_1b8,uVar16 << 4);
    uVar11 = local_1b0;
    *pdVar1 = dVar6 * (double)CONCAT44(uVar12,uVar20) + dVar3;
    pdVar1[1] = dVar2 - dVar7 * (double)CONCAT44(uVar12,uVar20);
    lVar14 = (longlong)(int)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar11);
    }
    uVar11 = local_1b0;
    local_1b8[lVar14 * 2] = dVar17 + dVar8 * 10000.0;
    local_1b8[lVar14 * 2 + 1] = dVar19 + dVar5 * 10000.0;
    lVar14 = (longlong)(int)local_1b0;
    dVar2 = local_1b8[(longlong)(int)(local_1b0 - 1) * 2 + 1];
    dVar3 = local_1b8[(longlong)(int)(local_1b0 - 1) * 2];
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar11);
    }
    uVar11 = local_1b0;
    local_1b8[lVar14 * 2] = dVar5 * (double)CONCAT44(uVar12,uVar20) + dVar3;
    local_1b8[lVar14 * 2 + 1] = dVar2 - dVar8 * (double)CONCAT44(uVar12,uVar20);
    local_198 = *local_1b8;
    uStack_190 = *(undefined4 *)(local_1b8 + 1);
    uStack_18c = *(undefined4 *)((longlong)local_1b8 + 0xc);
    lVar14 = (longlong)(int)local_1b0;
    local_1b0 = local_1b0 + 1;
    if (local_1ac < local_1b0) {
      FUN_14489624a(&local_1b8,uVar11);
    }
    pdVar1 = local_1b8 + lVar14 * 2;
    *(undefined4 *)pdVar1 = (undefined4)local_198;
    *(undefined4 *)((longlong)pdVar1 + 4) = local_198._4_4_;
    *(undefined4 *)(pdVar1 + 1) = uStack_190;
    *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_18c;
    if (local_138 != (undefined8 ***)0x0) {
      FUN_1400020a8();
    }
  }
  local_1bc = local_1b0;
  pppuVar13 = (undefined8 ***)(**(code **)(*param_1 + 0x420))(param_1);
  local_1c8 = pppuVar13;
  FUN_144a1a59e(param_1 + 0x18d,
                *(int *)(pppuVar13 + 4) * 0x200 + *(int *)((longlong)pppuVar13 + 0x24),1);
  local_1a0 = &local_138;
  local_1d8 = &local_198;
  local_198 = 0.0;
  uStack_190 = 0;
  local_1a8 = FUN_14456d34c;
  local_1e0 = 0;
  local_138 = &local_1c8;
  local_130 = param_1;
  lStack_128 = param_2;
  local_120 = &local_1b8;
  local_118 = &local_1bc;
  FUN_1401f8d10(L"ParallelFor Task",
                *(int *)(pppuVar13 + 4) * 0x200 + *(int *)((longlong)pppuVar13 + 0x24),1);
  local_110 = 0;
  local_108 = 0;
  local_130 = (longlong *)0x0;
  lStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_138 = local_1c8;
  uVar11 = *(int *)(local_1c8 + 4) * 0x200 + *(int *)((longlong)local_1c8 + 0x24);
  if (0 < (int)uVar11) {
    uVar16 = 0;
    do {
      if ((((longlong)uVar16 <
            (longlong)(*(int *)(local_138 + 4) * 0x200 + *(int *)((longlong)local_138 + 0x24))) &&
          ((ushort)(*(short *)((longlong)local_138[5][uVar16 >> 9 & 0x7fffff] +
                              (ulonglong)((uint)uVar16 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
         (*(int *)(param_1[0x18d] + uVar16 * 4) == 1)) {
        local_198 = (double)CONCAT44(local_198._4_4_,(uint)uVar16);
        FUN_1447cbafe(&local_130,&local_1a8,&local_198,0);
      }
      uVar16 = uVar16 + 1;
    } while (uVar11 != uVar16);
  }
  FUN_146c82564(&local_198,local_1c8,&local_138,*(undefined4 *)(param_1[0x175] + 0xcc));
  if (local_188 != local_15c) {
    bVar10 = (**(code **)(*param_1 + 0x520))(param_1);
    uVar20 = *(undefined4 *)(param_1[0x175] + 0xb4 + (ulonglong)bVar10 * 8);
    uVar12 = (**(code **)(*param_1 + 0x520))(param_1);
    FUN_14965aef0(param_1,&uStack_190,uVar20,uVar12);
  }
  local_148 = 0;
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&uStack_190);
  local_e8 = 0;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_130);
LAB_149658cd4:
  if (local_1b8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149659142 FUN_149659142 body=316 status=ok
// SIG undefined FUN_149659142(void)

void FUN_149659142(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  cVar1 = FUN_14851db82(param_1[0x174]);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*param_1 + 0x420))(param_1);
    puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar6[1] = 0;
    *puVar6 = uVar3;
    puVar6[2] = 0xffffffff;
    FUN_148376a28(puVar6);
    lVar7 = param_1[0x17f];
    param_1[0x17f] = (longlong)puVar6;
  }
  else {
    uVar3 = *(undefined8 *)(param_1[0x174] + 0xa8);
    uVar2 = (**(code **)(*param_1 + 0x420))(param_1);
    uVar3 = FUN_14837b9bf(uVar2,uVar3);
    uVar2 = (**(code **)(*param_1 + 0x420))(param_1);
    lVar4 = FUN_14001cc68(0x18,0x10);
    FUN_148376c7c(lVar4,uVar2,uVar3);
    lVar7 = param_1[0x17f];
    param_1[0x17f] = lVar4;
  }
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0xf84) < 0) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    FUN_14481578e(param_1 + 0x1ef,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  FUN_1484b2d8e(param_1[0x17c],2);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014965920d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x348))(plVar5);
  return;
}



// FUNCTION 14965927e FUN_14965927e body=148 status=ok
// SIG undefined FUN_14965927e(void)

undefined8 FUN_14965927e(undefined8 param_1)

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
  uVar1 = FUN_1459fabbe();
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



// FUNCTION 149659314 FUN_149659314 body=212 status=ok
// SIG undefined FUN_149659314(void)

void FUN_149659314(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_1496832ec(uVar2,param_2,local_68);
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



// FUNCTION 1496593e9 FUN_1496593e9 body=148 status=ok
// SIG undefined FUN_1496593e9(void)

undefined8 FUN_1496593e9(undefined8 param_1)

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
  uVar1 = FUN_1459f8156();
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



// FUNCTION 14965947e FUN_14965947e body=148 status=ok
// SIG undefined FUN_14965947e(void)

undefined8 FUN_14965947e(undefined8 param_1)

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
  uVar1 = FUN_1459f806a();
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



// FUNCTION 149659514 FUN_149659514 body=212 status=ok
// SIG undefined FUN_149659514(void)

void FUN_149659514(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_14968392c(uVar2,param_2,local_68);
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



// FUNCTION 1496595ea FUN_1496595ea body=411 status=ok
// SIG undefined FUN_1496595ea(void)

void FUN_1496595ea(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  wchar_t *local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc20e08) {
    FUN_144b3d300(&DAT_14cc20e08);
    if (DAT_14cc20e08 == -1) {
      local_48 = L"OnStartTool";
      uStack_40._0_4_ = 0xb;
      FUN_1446e940c(local_58,&local_48);
      local_48 = L"UMeshGroupPaintTool";
      uStack_40 = CONCAT44(uStack_40._4_4_,0x13);
      FUN_1446e940c(local_2c,&local_48);
      FUN_140208bae(&DAT_14cc20df8,local_2c,local_58,
                    L"Hold Shift to Erase. [/] and S/D change Size (+Shift to small-step). Shift+Q for New Group, Shift+G to pick Group, Shift+F to Freeze Group."
                   );
      atexit((_func_5014 *)&LAB_14456547c);
      _Init_thread_footer(&DAT_14cc20e08);
    }
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14615b4b0(&local_48,&DAT_14cc20df8);
  FUN_1496b4c26(param_1,param_2);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],0);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_14598dd3c(&local_48,local_58);
  (**(code **)(*plVar1 + 0x340))(plVar1,local_58,2);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  FUN_1401b9920(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149659786 FUN_149659786 body=148 status=ok
// SIG undefined FUN_149659786(void)

undefined8 FUN_149659786(undefined8 param_1)

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
  uVar1 = FUN_14599d1ee();
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



// FUNCTION 14965981c FUN_14965981c body=338 status=ok
// SIG undefined FUN_14965981c(void)

void FUN_14965981c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xbe0) != 0) && (*(longlong *)(param_1 + 0xbf0) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0xbe0) + 0x6c8);
  }
  lVar2 = *(longlong *)(param_1 + 0xbe8);
  plVar1 = *(longlong **)(lVar2 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    FUN_140056680(local_38,L"MeshGroupPaintTool");
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    lVar2 = *(longlong *)(param_1 + 0xbe8);
  }
  FUN_1484e0e5e(lVar2);
  plVar1 = *(longlong **)(param_1 + 0xba8);
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0xba0);
  FUN_140056680(local_38,L"MeshGroupPaintTool");
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xbd8) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0xbd8),0,1);
    *(undefined8 *)(param_1 + 0xbd8) = 0;
  }
  FUN_144575542(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149659970 FUN_149659970 body=277 status=ok
// SIG undefined FUN_149659970(void)

void FUN_149659970(wchar_t *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  wchar_t **local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  local_50 = L"GroupPaintToolTransactionName";
  local_48 = 0x1d;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UMeshGroupPaintTool";
  local_48 = 0x13;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"Paint Groups");
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  local_68 = FUN_14456cea8;
  local_60 = &local_50;
  local_50 = param_1;
  (**(code **)(*param_2 + 0xa90))(param_2);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149659a86 FUN_149659a86 body=1238 status=ok
// SIG undefined FUN_149659a86(void)

void FUN_149659a86(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1a8 [32];
  wchar_t **local_188;
  longlong **local_180;
  undefined1 local_178;
  undefined8 *local_170;
  undefined1 **local_168;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148 [2];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  wchar_t *local_118;
  undefined4 local_110;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1496b9d04();
  local_78 = 0;
  local_68 = &PTR_LAB_14bdacb80;
  local_88[0] = &LAB_14456cf04;
  local_118 = L"PickGroupColorUnderCursorTooltip";
  local_110 = 0x20;
  local_60 = param_1;
  FUN_1446e940c(local_12c,&local_118);
  local_118 = L"UMeshGroupPaintTool";
  local_110 = 0x13;
  FUN_1446e940c(local_130,&local_118);
  FUN_140208bae(local_128,local_130,local_12c,
                L"Switch the active PolyGroup to the group currently under the cursor");
  local_118 = L"PickGroupColorUnderCursor";
  local_110 = 0x19;
  FUN_1446e940c(local_134,&local_118);
  local_118 = L"UMeshGroupPaintTool";
  local_110 = 0x13;
  FUN_1446e940c(local_138,&local_118);
  FUN_140208bae(&local_118,local_138,local_134,L"Pick PolyGroup");
  FUN_140056680(local_148,L"PickGroupColorUnderCursor");
  local_170 = &DAT_14c965010;
  local_178 = 4;
  local_188 = &local_118;
  local_180 = local_128;
  local_168 = local_88;
  local_158 = param_1;
  local_150 = param_2;
  FUN_148450124(param_2,param_1,0x2904,local_148);
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  uVar1 = local_158;
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdacba0;
  local_a0 = local_158;
  local_c8[0] = &LAB_14456cf58;
  local_118 = L"ToggleFrozenGroupTooltip";
  local_110 = 0x18;
  FUN_1446e940c(local_12c,&local_118);
  local_118 = L"UMeshGroupPaintTool";
  local_110 = 0x13;
  FUN_1446e940c(local_130,&local_118);
  FUN_140208bae(local_128,local_130,local_12c,L"Toggle Group Frozen State");
  local_118 = L"ToggleFrozenGroup";
  local_110 = 0x11;
  FUN_1446e940c(local_134,&local_118);
  local_118 = L"UMeshGroupPaintTool";
  local_110 = 0x13;
  FUN_1446e940c(local_138,&local_118);
  FUN_140208bae(&local_118,local_138,local_134,L"Toggle Group Frozen State");
  FUN_140056680(local_148,L"ToggleFrozenGroup");
  local_170 = &DAT_14c964ff8;
  local_178 = 4;
  local_188 = &local_118;
  local_180 = local_128;
  local_168 = local_c8;
  FUN_148450124(local_150,uVar1,0x2905,local_148);
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  uVar1 = local_158;
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bdacbc0;
  local_e0 = local_158;
  local_108[0] = &LAB_14456cfac;
  local_118 = L"CreateNewGroupTooltip";
  local_110 = 0x15;
  FUN_1446e940c(local_12c,&local_118);
  local_118 = L"UMeshGroupPaintTool";
  local_110 = 0x13;
  FUN_1446e940c(local_130,&local_118);
  FUN_140208bae(local_128,local_130,local_12c,L"Allocate a new Polygroup and set as Current");
  local_118 = L"CreateNewGroup";
  local_110 = 0xe;
  FUN_1446e940c(local_134,&local_118);
  local_118 = L"UMeshGroupPaintTool";
  local_110 = 0x13;
  FUN_1446e940c(local_138,&local_118);
  FUN_140208bae(&local_118,local_138,local_134,L"New Group");
  FUN_140056680(local_148,L"CreateNewGroup");
  local_170 = &DAT_14c965100;
  local_178 = 4;
  local_188 = &local_118;
  local_180 = local_128;
  local_168 = local_108;
  FUN_148450124(local_150,uVar1,0x2906,local_148);
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_118 + 0x10))();
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149659f5e FUN_149659f5e body=38 status=ok
// SIG undefined FUN_149659f5e(void)

longlong * FUN_149659f5e(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x520))();
  return param_1 + (ulonglong)bVar1 * 2 + 0x6e;
}



// FUNCTION 149659f84 FUN_149659f84 body=71 status=ok
// SIG undefined FUN_149659f84(void)

void FUN_149659f84(longlong *param_1)

{
  FUN_1496b8550();
  *(undefined4 *)(param_1[0x175] + 0xac) = *(undefined4 *)(param_1[0x20] + 0xac);
                    /* WARNING: Could not recover jumptable at 0x000149659fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x175]);
  return;
}



// FUNCTION 149659fcc FUN_149659fcc body=71 status=ok
// SIG undefined FUN_149659fcc(void)

void FUN_149659fcc(longlong *param_1)

{
  FUN_1496b8590();
  *(undefined4 *)(param_1[0x175] + 0xac) = *(undefined4 *)(param_1[0x20] + 0xac);
                    /* WARNING: Could not recover jumptable at 0x00014965a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x175]);
  return;
}



// FUNCTION 14965a014 FUN_14965a014 body=71 status=ok
// SIG undefined FUN_14965a014(void)

void FUN_14965a014(longlong *param_1)

{
  FUN_1496b862a();
  *(undefined4 *)(param_1[0x175] + 0xac) = *(undefined4 *)(param_1[0x20] + 0xac);
                    /* WARNING: Could not recover jumptable at 0x00014965a058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x175]);
  return;
}



// FUNCTION 14965a05c FUN_14965a05c body=71 status=ok
// SIG undefined FUN_14965a05c(void)

void FUN_14965a05c(longlong *param_1)

{
  FUN_1496b866a();
  *(undefined4 *)(param_1[0x175] + 0xac) = *(undefined4 *)(param_1[0x20] + 0xac);
                    /* WARNING: Could not recover jumptable at 0x00014965a0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x175]);
  return;
}



// FUNCTION 14965a0a4 FUN_14965a0a4 body=604 status=ok
// SIG undefined FUN_14965a0a4(void)

void FUN_14965a0a4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
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
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14965a302();
  if (param_1[0x176] != 0) {
    *(undefined4 *)(param_1[0x176] + 0xa8) = *(undefined4 *)(param_1[0x175] + 0xb4);
    *(undefined1 *)(param_1[0x176] + 0xac) = *(undefined1 *)(param_1[0x175] + 0xb8);
  }
  if (param_1[0x177] != 0) {
    *(undefined4 *)(param_1[0x177] + 0xa8) = *(undefined4 *)(param_1[0x175] + 0xbc);
    *(undefined1 *)(param_1[0x177] + 0xac) = *(undefined1 *)(param_1[0x175] + 0xc0);
  }
  param_1[0x108] = param_1[0x82];
  param_1[0x106] = param_1[0x80];
  param_1[0x107] = param_1[0x81];
  param_1[0x104] = param_1[0x7e];
  param_1[0x105] = param_1[0x7f];
  param_1[0x102] = param_1[0x7c];
  param_1[0x103] = param_1[0x7d];
  param_1[0x109] = param_1[0x83];
  param_1[0x10a] = param_1[0x84];
  param_1[0x10b] = param_1[0x85];
  param_1[0x10c] = param_1[0x86];
  *(int *)(param_1 + 0x10d) = (int)param_1[0x87];
  *(undefined4 *)((longlong)param_1 + 0x86c) = *(undefined4 *)((longlong)param_1 + 0x43c);
  *(int *)(param_1 + 0x10e) = (int)param_1[0x88];
  *(undefined4 *)((longlong)param_1 + 0x874) = *(undefined4 *)((longlong)param_1 + 0x444);
  param_1[0x10f] = param_1[0x89];
  lVar2 = (**(code **)(*param_1 + 0x478))(param_1);
  param_1[0x110] = lVar2;
  lVar2 = (**(code **)(*param_1 + 0x480))(param_1);
  param_1[0x111] = lVar2;
  cVar5 = (**(code **)(*param_1 + 0x528))(param_1);
  if (cVar5 == '\0') {
    uVar9 = 0x3ff00000;
  }
  else {
    uVar9 = 0xbff00000;
  }
  param_1[0x113] = (ulonglong)uVar9 << 0x20;
  lVar2 = (**(code **)(*param_1 + 0x498))(param_1);
  param_1[0x114] = lVar2;
  dVar4 = (double)(**(code **)(*param_1 + 0x488))(param_1);
  dVar3 = (double)(**(code **)(*param_1 + 0x490))(param_1);
  param_1[0x112] = (longlong)(dVar3 * dVar4);
  FUN_1402160b8(&local_78);
  param_1[0x124] = CONCAT44(uStack_74,local_78);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x578))(param_1);
  local_78 = *puVar6;
  uStack_74 = puVar6[1];
  uStack_70 = puVar6[2];
  uStack_6c = puVar6[3];
  local_68 = puVar6[4];
  uStack_64 = puVar6[5];
  uStack_60 = puVar6[6];
  uStack_5c = puVar6[7];
  local_58 = puVar6[8];
  uStack_54 = puVar6[9];
  uStack_50 = puVar6[10];
  uStack_4c = puVar6[0xb];
  local_48 = *(undefined8 *)(puVar6 + 0xc);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x458))(param_1);
  (**(code **)(*(longlong *)*puVar7 + 8))((longlong *)*puVar7,&local_78);
  plVar1 = (longlong *)*puVar7;
  uVar8 = (**(code **)(*param_1 + 0x420))(param_1);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar8,param_1 + 0x102,param_1 + 399);
  FUN_1402226aa(param_1 + 0x180);
  FUN_14965a36a(param_1);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965a302 FUN_14965a302 body=104 status=ok
// SIG undefined FUN_14965a302(void)

void FUN_14965a302(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  bVar1 = (**(code **)(*(longlong *)*puVar3 + 0x30))();
  if ((bVar1 < 2) || (bVar1 == 2)) {
    cVar2 = (**(code **)(*param_1 + 0x500))(param_1,param_2,0);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*(longlong *)*puVar3 + 0x38))();
      if (cVar2 != '\0') {
        FUN_1496b6976(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14965a36a FUN_14965a36a body=278 status=ok
// SIG undefined FUN_14965a36a(void)

void FUN_14965a36a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [16];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0x17f];
  lVar2 = FUN_14001cc68(0x60,0x10);
  FUN_1484cb8b8(lVar2,lVar1);
  lVar1 = param_1[0x1ee];
  param_1[0x1ee] = lVar2;
  if (lVar1 != 0) {
    FUN_149682c4e(lVar1);
    FUN_1400020a8(lVar1);
  }
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"GroupPaintChange";
  local_38 = 0x10;
  FUN_1446e940c(local_54,&local_40);
  local_40 = L"UMeshGroupPaintTool";
  local_38 = 0x13;
  FUN_1446e940c(local_58,&local_40);
  FUN_140208bae(local_50,local_58,local_54,L"Group Stroke");
  FUN_148558a3c((longlong)param_1 + 0xb94,local_50,uVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965a482 FUN_14965a482 body=86 status=ok
// SIG undefined FUN_14965a482(void)

void FUN_14965a482(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  plVar1 = (longlong *)*puVar2;
  uVar3 = (**(code **)(*param_1 + 0x420))(param_1);
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,param_1 + 0x102,param_1 + 399);
  FUN_14965a4d8(param_1);
  return;
}



// FUNCTION 14965a4d8 FUN_14965a4d8 body=703 status=ok
// SIG undefined FUN_14965a4d8(void)

void FUN_14965a4d8(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined1 local_d4 [4];
  undefined8 *local_d0;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = *(undefined8 **)(param_1[0x1ee] + 8);
  *(undefined8 *)(param_1[0x1ee] + 8) = 0;
  lVar6 = param_1[0x1ee];
  param_1[0x1ee] = 0;
  if (lVar6 != 0) {
    FUN_149682c4e(lVar6);
    FUN_1400020a8(lVar6);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  *puVar4 = &PTR_LAB_14bdacc90;
  puVar4[2] = 0;
  uVar5 = FUN_14001cc68(0x60,0x10);
  FUN_1484cbccc(uVar5,&local_d0);
  puVar4[1] = uVar5;
  local_c8 = (wchar_t *)puVar4[2];
  uStack_80 = puVar4[3];
  local_b8 = (longlong *)puVar4[4];
  uStack_70 = puVar4[5];
  local_68 = puVar4[6];
  uStack_60 = puVar4[7];
  local_58 = puVar4[8];
  uStack_50 = puVar4[9];
  uVar2 = local_58;
  uVar3 = uStack_50;
  local_78 = local_b8;
  uVar1 = uStack_70;
  local_88 = local_c8;
  uVar5 = uStack_80;
  puVar4[8] = CONCAT44(uStack_94,local_98);
  puVar4[9] = CONCAT44(uStack_8c,uStack_90);
  puVar4[6] = &PTR_LAB_14bdacce0;
  puVar4[7] = param_1;
  puVar4[4] = 0;
  puVar4[5] = CONCAT44(uStack_ac,uStack_b0);
  puVar4[2] = &LAB_14456dabe;
  puVar4[3] = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar5;
  uStack_70 = uVar1;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if (local_c8 != (wchar_t *)0x0) {
    plVar7 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar7 = &local_a8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_88 = L"GroupPaintChange";
  uStack_80._0_4_ = 0x10;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = L"UMeshGroupPaintTool";
  uStack_80 = CONCAT44(uStack_80._4_4_,0x13);
  FUN_1446e940c(local_d4,&local_88);
  FUN_140208bae(&local_88,local_d4,&local_c8,L"Group Stroke");
  local_e0 = puVar4;
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))(lVar6 + 0x28,param_1[0x17c],&local_e0,&local_88)
  ;
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148558a82((longlong)param_1 + 0xb94,uVar5);
  *(undefined1 *)(param_1 + 0x1f7) = 0;
  if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,1);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965a798 FUN_14965a798 body=82 status=ok
// SIG undefined FUN_14965a798(void)

void FUN_14965a798(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x458))();
  (**(code **)(*(longlong *)*puVar2 + 0x20))();
  lVar1 = param_1[0x1ee];
  if (lVar1 != 0) {
    param_1[0x1ee] = 0;
    FUN_149682c4e(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined1 *)(param_1 + 0x1f7) = 0;
  return;
}



// FUNCTION 14965a7ea FUN_14965a7ea body=493 status=ok
// SIG undefined FUN_14965a7ea(void)

void FUN_14965a7ea(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a1a59e(param_3,0,0);
  iVar6 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
    FUN_14481578e(param_3);
  }
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  local_98 = param_4;
  local_60 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_2[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_2;
  if ((iStack_54 != iVar6) || (local_60 != plVar1)) {
    do {
      uVar2 = *(undefined4 *)(*local_90 + (longlong)iStack_74 * 0xc);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_3,iVar3);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = uVar2;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 || (local_80 != plVar1 || iStack_74 != iVar6));
  }
  plVar1 = local_98;
  *(undefined4 *)(local_98 + 1) = 0;
  if (*(int *)((longlong)local_98 + 0xc) < 0) {
    FUN_14481578e(local_98,0);
  }
  FUN_14965b3c4(param_1,param_1 + 0xc68,plVar1);
  FUN_1402226aa(param_2);
  lVar5 = plVar1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *plVar1;
    lVar7 = 0;
    do {
      local_90 = (longlong *)CONCAT44(local_90._4_4_,*(undefined4 *)(lVar4 + lVar7));
      FUN_1447cbafe(param_1 + 0xce8,&local_68,&local_90,0);
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965a9d9 FUN_14965a9d9 body=318 status=ok
// SIG undefined FUN_14965a9d9(void)

void FUN_14965a9d9(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_2[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_2;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      uVar2 = *(undefined4 *)(*local_88 + (longlong)iStack_6c * 0xc);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_1,iVar3);
      }
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 4) = uVar2;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  *(undefined4 *)(param_2 + 9) = 0;
  if (param_2[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965ab18 FUN_14965ab18 body=736 status=ok
// SIG undefined FUN_14965ab18(void)

undefined8 FUN_14965ab18(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x470))();
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x458))(param_1);
  bVar7 = (**(code **)(*(longlong *)*puVar9 + 0x30))();
  if (bVar7 < 2) {
    (**(code **)(*param_1 + 0x500))(param_1,param_2,1);
  }
  else if (bVar7 == 2) {
    (**(code **)(*param_1 + 0x4f0))(param_1,param_2);
  }
  cVar8 = (**(code **)(*(longlong *)*puVar9 + 0x38))();
  if (cVar8 != '\0') {
    FUN_1496b6976(param_1);
  }
  memcpy(param_1 + 0xd0,param_1 + 0x102,0x150);
  FUN_14967e05c(param_1 + 0xfa,param_1 + 300);
  FUN_1402160b8(&local_88);
  dVar5 = (double)(local_88 - param_1[0x124]) / 10000000.0;
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  param_1[0xe3] = (longlong)dVar5;
  param_1[0xd6] = param_1[0x82];
  param_1[0xd4] = param_1[0x80];
  param_1[0xd5] = param_1[0x81];
  param_1[0xd2] = param_1[0x7e];
  param_1[0xd3] = param_1[0x7f];
  param_1[0xd0] = param_1[0x7c];
  param_1[0xd1] = param_1[0x7d];
  param_1[0xd7] = param_1[0x83];
  param_1[0xd8] = param_1[0x84];
  param_1[0xd9] = param_1[0x85];
  param_1[0xda] = param_1[0x86];
  *(int *)(param_1 + 0xdb) = (int)param_1[0x87];
  *(undefined4 *)((longlong)param_1 + 0x6dc) = *(undefined4 *)((longlong)param_1 + 0x43c);
  *(int *)(param_1 + 0xdc) = (int)param_1[0x88];
  *(undefined4 *)((longlong)param_1 + 0x6e4) = *(undefined4 *)((longlong)param_1 + 0x444);
  param_1[0xdd] = param_1[0x89];
  dVar6 = (double)(**(code **)(*param_1 + 0x488))(param_1);
  dVar5 = (double)(**(code **)(*param_1 + 0x490))(param_1);
  param_1[0xe0] = (longlong)(dVar5 * dVar6);
  param_1[0xed] = param_1[0x10b];
  param_1[0xee] = param_1[0x10c];
  param_1[0xeb] = param_1[0x109];
  param_1[0xec] = param_1[0x10a];
  param_1[0xef] = param_1[0x10d];
  param_1[0xf0] = param_1[0x10e];
  param_1[0xf1] = param_1[0x10f];
  param_1[0xea] = param_1[0x108];
  param_1[0xe8] = param_1[0x106];
  param_1[0xe9] = param_1[0x107];
  param_1[0xe6] = param_1[0x104];
  param_1[0xe7] = param_1[0x105];
  *(int *)(param_1 + 0xe4) = (int)param_1[0x102];
  *(undefined4 *)((longlong)param_1 + 0x724) = *(undefined4 *)((longlong)param_1 + 0x814);
  *(int *)(param_1 + 0xe5) = (int)param_1[0x103];
  *(undefined4 *)((longlong)param_1 + 0x72c) = *(undefined4 *)((longlong)param_1 + 0x81c);
  dVar5 = (double)param_1[0xd9];
  dVar6 = (double)param_1[0xed];
  dVar1 = (double)param_1[0xd7];
  dVar2 = (double)param_1[0xd8];
  dVar3 = (double)param_1[0xeb];
  dVar4 = (double)param_1[0xec];
  cVar8 = (**(code **)(*(longlong *)*puVar9 + 0x40))();
  if ((cVar8 == '\0') ||
     (1e-08 <= (dVar5 - dVar6) * (dVar5 - dVar6) +
               (dVar1 - dVar3) * (dVar1 - dVar3) + (dVar2 - dVar4) * (dVar2 - dVar4))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  if ((local_80 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965adfa FUN_14965adfa body=246 status=ok
// SIG undefined FUN_14965adfa(void)

ulonglong FUN_14965adfa(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0xf58);
  uVar4 = 0;
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0xf50) + lVar6 * 4);
      lVar5 = (*(undefined8 **)(param_1 + 0xbf8))[1];
      if (lVar5 == 0) {
        iVar3 = FUN_146bc96d4(**(undefined8 **)(param_1 + 0xbf8),uVar2);
      }
      else {
        iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
                        (ulonglong)(uVar2 & 0x1ff) * 4);
      }
      if ((longlong)*(int *)(param_1 + 0xf80) != 0) {
        lVar5 = 0;
        do {
          if (*(int *)(*(longlong *)(param_1 + 0xf78) + lVar5) == iVar3) goto LAB_14965ae90;
          lVar5 = lVar5 + 4;
        } while ((longlong)*(int *)(param_1 + 0xf80) * 4 != lVar5);
      }
      if (*(int *)(*(longlong *)(param_1 + 0xf60) + lVar6 * 4) != iVar3) {
        FUN_1484cbb52(*(undefined8 *)(param_1 + 0xf70),uVar2,iVar3);
        FUN_14837b7e4(*(undefined8 *)(param_1 + 0xbf8),uVar2,
                      *(undefined4 *)(*(longlong *)(param_1 + 0xf60) + lVar6 * 4),param_2);
        uVar4 = (ulonglong)((int)uVar4 + 1);
      }
LAB_14965ae90:
      lVar6 = lVar6 + 1;
    } while (lVar6 != iVar1);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),0 < (int)uVar4);
  }
  return uVar4;
}



// FUNCTION 14965aef0 FUN_14965aef0 body=1234 status=ok
// SIG undefined FUN_14965aef0(void)

void FUN_14965aef0(longlong *param_1,longlong *param_2,int param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_e8 [39];
  char local_c1;
  longlong **local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c1 = param_4;
  FUN_14965a36a();
  local_c0 = (longlong **)(param_1 + 0x18d);
  iVar9 = 0;
  FUN_144a1a59e(local_c0,0);
  plVar7 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar7;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_2[5];
  }
  local_80 = local_58;
  iStack_7c = iStack_54;
  local_78 = local_50;
  local_74 = local_4c;
  uStack_90 = local_68;
  local_88 = local_60;
  local_98 = param_2;
  if ((iStack_54 != iVar9) || (local_60 != plVar7)) {
    do {
      uVar1 = *(uint *)(*local_98 + (longlong)iStack_7c * 0xc);
      lVar10 = ((undefined8 *)param_1[0x17f])[1];
      if (lVar10 == 0) {
        iVar6 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar1);
      }
      else {
        iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
      }
      if (iVar6 != param_3) {
        if ((longlong)(int)param_1[0x1f0] != 0) {
          lVar10 = 0;
          do {
            if (*(int *)(param_1[0x1ef] + lVar10) == iVar6) goto LAB_14965b0d1;
            lVar10 = lVar10 + 4;
          } while ((longlong)(int)param_1[0x1f0] * 4 != lVar10);
        }
        lVar10 = param_1[0x175];
        if (local_c1 == '\0') {
          if ((iVar6 == 0) || (*(char *)(lVar10 + 0xb8) == '\0')) goto LAB_14965b051;
        }
        else if ((*(char *)(lVar10 + 0xc0) != '\x01') || (iVar6 == *(int *)(lVar10 + 0xb4))) {
LAB_14965b051:
          iVar6 = (int)param_1[0x18e];
          *(uint *)(param_1 + 0x18e) = iVar6 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc74) < iVar6 + 1U) {
            FUN_1446f48e2(local_c0,iVar6);
          }
          *(uint *)((longlong)*local_c0 + (longlong)iVar6 * 4) = uVar1;
        }
      }
LAB_14965b0d1:
      local_80 = local_80 & ~uStack_90._4_4_;
      FUN_1449c0562(&uStack_90);
    } while (local_98 != param_2 || (local_88 != plVar7 || iStack_7c != iVar9));
  }
  if (*(char *)(param_1[0x175] + 0xca) != '\0') {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    iVar9 = (int)param_1[0x18e];
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 != 0) {
      FUN_14481578e(&local_98);
    }
    pplVar5 = local_c0;
    FUN_14965b3c4(param_1,local_c0,&local_98);
    if (pplVar5 == &local_98) {
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x18d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x18d] = (longlong)local_98;
      local_98 = (longlong *)0x0;
      *(undefined4 *)(param_1 + 0x18e) = (undefined4)uStack_90;
      *(uint *)((longlong)param_1 + 0xc74) = uStack_90._4_4_;
    }
  }
  lVar10 = param_1[0x1ee];
  local_a8 = (void *)0x0;
  local_a0 = (int)param_1[0x18e];
  lVar12 = (longlong)local_a0;
  pvVar3 = (void *)param_1[0x18d];
  if (lVar12 == 0) {
    local_9c = 0;
  }
  else {
    FUN_144a06ca8(&local_a8,local_a0,0);
    memcpy(local_a8,pvVar3,lVar12 << 2);
    pvVar3 = local_a8;
    lVar12 = (longlong)local_a0;
    if (lVar12 != 0) {
      lVar11 = 0;
      do {
        FUN_1484cb982(lVar10,*(undefined4 *)((longlong)pvVar3 + lVar11));
        lVar11 = lVar11 + 4;
      } while (lVar12 * 4 != lVar11);
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8(local_a8);
    }
  }
  lVar10 = param_1[0x18e];
  if ((longlong)(int)lVar10 == 0) {
    local_b0 = 0;
  }
  else {
    lVar12 = param_1[0x18d];
    lVar11 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar12 + lVar11);
      lVar4 = param_1[0x17f];
      uVar8 = (**(code **)(*param_1 + 0x420))(param_1);
      FUN_14837b7e4(lVar4,uVar2,param_3,uVar8);
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)lVar10 * 4 != lVar11);
    local_b0 = (int)param_1[0x18e];
    lVar12 = (longlong)local_b0;
    pvVar3 = (void *)param_1[0x18d];
    lVar10 = param_1[0x1ee];
    local_b8 = (void *)0x0;
    if (lVar12 != 0) {
      FUN_144a06ca8(&local_b8,local_b0,0);
      memcpy(local_b8,pvVar3,lVar12 << 2);
      pvVar3 = local_b8;
      lVar12 = (longlong)local_b0;
      if (lVar12 != 0) {
        lVar11 = 0;
        do {
          FUN_1484cb982(lVar10,*(undefined4 *)((longlong)pvVar3 + lVar11));
          lVar11 = lVar11 + 4;
        } while (lVar12 * 4 != lVar11);
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8(local_b8);
      }
      goto LAB_14965b179;
    }
  }
  local_b8 = (void *)0x0;
  local_ac = 0;
LAB_14965b179:
  FUN_143b6e60e(param_1[0x17c],local_c0,2);
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar7 + 0x348))(plVar7);
  FUN_14965a4d8(param_1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965b3c4 FUN_14965b3c4 body=837 status=ok
// SIG undefined FUN_14965b3c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14965b3c4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auStack_1f8 [40];
  undefined4 local_1d0;
  undefined8 *local_1c8;
  longlong *local_1c0;
  undefined8 *local_1b8;
  longlong *local_1b0;
  double *local_1a8;
  undefined8 local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_138 [16];
  double local_128;
  code *local_118;
  longlong **local_110;
  undefined8 local_108;
  undefined4 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(char *)(param_1[0x175] + 0xca) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_1f8);
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x378))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_f8);
  FUN_1485063a5(&local_178,param_1[0x14]);
  local_f8 = local_f8 - local_158;
  dStack_f0 = dStack_f0 - dStack_150;
  local_e8 = local_e8 - local_148;
  dVar4 = -local_178;
  dStack_170 = -dStack_170;
  local_168 = local_168 * -1.0;
  dStack_160 = dStack_160 * 1.0;
  dVar10 = local_f8 * local_168 - dVar4 * local_e8;
  dVar5 = dStack_f0 * dVar4 - local_f8 * dStack_170;
  dVar6 = local_e8 * dStack_170 - dStack_f0 * local_168;
  dVar6 = dVar6 + dVar6;
  dVar10 = dVar10 + dVar10;
  dVar5 = dVar5 + dVar5;
  auVar9 = divpd(_DAT_149934d80,local_138);
  local_198 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_138._0_8_)) & auVar9._0_8_) *
              ((dVar5 * dStack_170 - dVar10 * local_168) + dStack_160 * dVar6 + local_f8);
  dStack_190 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_138._8_8_)) & auVar9._8_8_) *
               (local_178 * dVar5 + local_168 * dVar6 + dStack_160 * dVar10 + dStack_f0);
  local_188 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_128)) &
                      (ulonglong)(1.0 / local_128)) *
              (dStack_160 * dVar5 + local_e8 + (dVar10 * dVar4 - dVar6 * dStack_170));
  local_1a0 = (**(code **)(*param_1 + 0x420))(param_1);
  uVar1 = *(uint *)(param_2 + 1);
  FUN_1448c4dd6(param_1 + 0x191,(ulonglong)uVar1,0);
  local_110 = &local_1c0;
  local_1c8 = &local_108;
  local_108 = 0;
  local_100 = 0;
  local_118 = FUN_14456d59e;
  local_1d0 = 0;
  local_1c0 = param_1;
  local_1b8 = &local_1a0;
  local_1b0 = param_2;
  local_1a8 = &local_198;
  FUN_1401f8d10(L"ParallelFor Task",uVar1,1);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      if (*(char *)(param_1[0x191] + uVar8) == '\x01') {
        lVar3 = *param_2;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 + uVar8 * 4);
      }
      uVar8 = uVar8 + 1;
    } while (uVar1 != uVar8);
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965b754 FUN_14965b754 body=422 status=ok
// SIG undefined FUN_14965b754(void)

undefined8 FUN_14965b754(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  code *local_108;
  longlong **local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_d8;
  longlong **local_d0;
  longlong *local_c0;
  undefined8 local_b8;
  longlong **local_b0;
  code **local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 **local_90;
  code *local_88;
  longlong **pplStack_80;
  undefined8 local_78;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = 0xffffffff;
  if (*(byte *)(param_1[0x175] + 0xa9) < 3) {
    if (*(char *)(param_1[0x20] + 200) == '\x01') {
      local_f8 = param_1 + 0x1a8;
      pplStack_80 = &local_f8;
      local_88 = FUN_14963f300;
      local_d0 = &local_98;
      puVar4 = &local_d8;
      pcVar2 = FUN_14963f376;
      local_98 = local_f8;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x420))(param_1);
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x378))(plVar3);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_88);
      local_e8 = (undefined8 *)local_78;
      FUN_146ba22f0(param_1 + 0x38,&local_d8,&local_f8);
      local_c0 = param_1 + 0x1a8;
      local_a8 = &local_108;
      local_108 = FUN_14456d834;
      local_90 = &local_a8;
      local_98 = (longlong *)&LAB_14967e180;
      local_b0 = &local_c0;
      puVar4 = &local_b8;
      pcVar2 = FUN_14967e21c;
      local_100 = &local_f8;
      local_f8 = param_1;
      uStack_f0 = uVar1;
      local_e8 = &local_d8;
      local_a0 = local_c0;
    }
    *puVar4 = pcVar2;
    local_118 = 0x7fefffffffffffff;
    uVar1 = FUN_146c87396(param_1 + 0x1a8,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965b902 FUN_14965b902 body=77 status=ok
// SIG undefined FUN_14965b902(void)

undefined8 FUN_14965b902(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xc88) = *(undefined1 *)(*(longlong *)(param_1 + 0xaf8) + 0xa8);
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0xb0) + 0x518))(param_1 + -0xb0);
  if (cVar1 == '\0') {
    FUN_14965a302(param_1 + -0xb0,param_2);
  }
  return 1;
}



// FUNCTION 14965b950 FUN_14965b950 body=1748 status=ok
// SIG undefined FUN_14965b950(void)

void FUN_14965b950(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  size_t sVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong local_188;
  code *local_180;
  undefined4 local_178;
  code *local_170;
  longlong **local_168;
  code *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_110;
  double dStack_108;
  double local_100;
  longlong *local_f8;
  code *local_f0;
  longlong **local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_1[0x17a] != 0) {
    cVar5 = (**(code **)(*param_1 + 0x520))(param_1);
    puVar11 = (undefined4 *)&DAT_149e1dd14;
    if (cVar5 != '\0') {
      puVar11 = (undefined4 *)&DAT_149e1dd34;
    }
    lVar9 = param_1[0x17a];
    uVar8 = puVar11[1];
    uVar3 = puVar11[2];
    uVar4 = puVar11[3];
    *(undefined4 *)(lVar9 + 0x90) = *puVar11;
    *(undefined4 *)(lVar9 + 0x94) = uVar8;
    *(undefined4 *)(lVar9 + 0x98) = uVar3;
    *(undefined4 *)(lVar9 + 0x9c) = uVar4;
    (**(code **)(*(longlong *)param_1[0x17a] + 0x2d0))((longlong *)param_1[0x17a],param_2,param_3);
  }
  if (*(char *)(param_2 + 0xa0) == '\0') {
    dVar2 = (double)*(float *)(param_2 + 0xb0);
  }
  else {
    dVar2 = 1.0;
  }
  local_198 = FUN_14375bb6e();
  (**(code **)(*param_3 + 0x18))(param_3,&local_d8);
  local_1a0 = (**(code **)(*param_3 + 0x10))(param_3);
  local_190 = param_1 + 0x38;
  local_138 = local_c8;
  local_148 = (double)CONCAT44(uStack_d4,local_d8);
  uStack_140 = (double)CONCAT44(uStack_cc,uStack_d0);
  FUN_146ba22f0(local_190,&local_110);
  lVar9 = (**(code **)(*param_1 + 0x420))(param_1);
  if (*(char *)(param_1[0x175] + 0xd0) == '\x01') {
    local_120 = (double)param_1[0xa7] - local_100;
    dVar14 = (double)param_1[0xa6] - dStack_108;
    dVar15 = (double)param_1[0xa5] - local_110;
    dVar17 = SQRT(local_120 * local_120 + dVar15 * dVar15 + dVar14 * dVar14);
    local_128 = 0.0;
    dVar16 = 1.0 / dVar17;
    local_130 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar15 * dVar16));
    if (0.0 < dVar17) {
      local_120 = local_120 * dVar16;
      local_128 = dVar14 * dVar16;
    }
    else {
      local_120 = 0.0;
    }
    local_f8 = param_1 + 0x1a8;
    local_148 = local_110;
    uStack_140 = dStack_108;
    local_138 = local_100;
    dVar14 = local_120 * local_120 + local_130 * local_130 + local_128 * local_128;
    if (9.99999993922529e-09 < dVar14) {
      dVar14 = 1.0 / SQRT(dVar14);
      local_130 = local_130 * dVar14;
      local_128 = local_128 * dVar14;
      local_120 = local_120 * dVar14;
    }
    local_168 = &local_e0;
    local_170 = FUN_14963f300;
    local_e8 = &local_f8;
    local_f0 = FUN_14963f376;
    local_1b8 = 0x7fefffffffffffff;
    local_e0 = local_f8;
    uVar6 = FUN_146c87396(local_f8,&local_148);
    if ((-1 < (int)uVar6) &&
       ((int)uVar6 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar9 + 0x148) + (ulonglong)(uVar6 >> 9) * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar1 = ((undefined8 *)param_1[0x17f])[1];
        if (lVar1 == 0) {
          uVar8 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar6);
        }
        else {
          uVar8 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
        }
        FUN_147cf049a(local_1a0,param_1 + 0x9e,&local_148);
        FUN_140002266(&local_170,&DAT_149e063bc,uVar8);
        local_158 = local_170;
        if ((int)local_168 == 0) {
          local_158 = (code *)&DAT_149dfb77a;
        }
        local_150 = 0;
        if (local_158 != (code *)0x0) {
          sVar10 = wcslen((wchar_t *)local_158);
          local_150 = (int)sVar10;
        }
        local_1a8 = &DAT_149e1e308;
        local_1b0 = &DAT_149e1e2f8;
        local_1b8 = local_198;
        FUN_147d8e230(param_2,local_148 / dVar2,uStack_140 / dVar2);
        if (local_170 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  local_188 = param_2;
  if (*(char *)(param_1[0x175] + 0xd1) == '\x01') {
    if ((char)param_1[0x1f7] == '\0') {
      FUN_1482aa35c(param_1 + 0x1f8,lVar9,param_1[0x17f],1);
      *(undefined1 *)(param_1 + 0x1f7) = 1;
    }
    if ((longlong)(int)param_1[0x1fa] != 0) {
      plVar12 = param_1 + 0x1a8;
      lVar9 = (longlong)(int)param_1[0x1fa] * 0x68;
      pdVar13 = (double *)(param_1[0x1f9] + 0x38);
      do {
        local_138 = local_100;
        local_148 = local_110;
        uStack_140 = dStack_108;
        local_120 = pdVar13[2] - local_100;
        local_128 = pdVar13[1] - dStack_108;
        dVar15 = *pdVar13 - local_110;
        dVar14 = SQRT(local_120 * local_120 + dVar15 * dVar15 + local_128 * local_128);
        dVar17 = 1.0 / dVar14;
        if (0.0 < dVar14) {
          local_120 = local_120 * dVar17;
          local_128 = local_128 * dVar17;
        }
        else {
          local_120 = 0.0;
          local_128 = 0.0;
        }
        local_130 = (double)(-(ulonglong)(0.0 < dVar14) & (ulonglong)(dVar15 * dVar17));
        local_168 = &local_e0;
        local_170 = FUN_14963f300;
        local_e8 = &local_f8;
        local_f0 = FUN_14963f376;
        local_1b8 = 0x7fefffffffffffff;
        local_f8 = plVar12;
        local_e0 = plVar12;
        iVar7 = FUN_146c87396(plVar12,&local_148,&local_f0,&local_170);
        if ((iVar7 == *(int *)(pdVar13 + 3)) || (iVar7 == *(int *)((longlong)pdVar13 + 0x1c))) {
          FUN_146bcb256(local_190,&local_170,pdVar13);
          FUN_147cf049a(local_1a0,&local_170,&local_f0);
          FUN_140002266(&local_170,&DAT_149e063bc,*(undefined4 *)(pdVar13 + -7));
          local_180 = (code *)&DAT_149dfb77a;
          if ((int)local_168 != 0) {
            local_180 = local_170;
          }
          uVar8 = 0;
          if (local_180 != (code *)0x0) {
            sVar10 = wcslen((wchar_t *)local_180);
            uVar8 = (int)sVar10;
          }
          local_1a8 = &DAT_149e1e308;
          local_1b0 = &DAT_149e1e2f8;
          local_1b8 = local_198;
          local_178 = uVar8;
          FUN_147d8e230(local_188,(double)local_f0 / dVar2,(double)local_e8 / dVar2,&local_180);
          if (local_170 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        pdVar13 = pdVar13 + 0xd;
        lVar9 = lVar9 + -0x68;
      } while (lVar9 != 0);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965c026 FUN_14965c026 body=857 status=ok
// SIG undefined FUN_14965c026(void)

void FUN_14965c026(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  void *_Src;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  void *local_70;
  int local_68;
  undefined4 local_64;
  int local_5c;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = param_2;
  if (param_2 != 0) {
    plVar3 = param_1 + 0x1ef;
    local_70 = (void *)0x0;
    local_68 = (int)param_1[0x1f0];
    lVar8 = (longlong)local_68;
    _Src = (void *)param_1[0x1ef];
    if (lVar8 == 0) {
      local_64 = 0;
      lVar8 = 0;
      iVar2 = 0;
    }
    else {
      FUN_144a06ca8(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar8 << 2);
      _Src = (void *)param_1[0x1ef];
      iVar2 = (int)param_1[0x1f0];
      lVar8 = (longlong)iVar2;
      if (lVar8 == 0) {
        lVar8 = 0;
        iVar2 = 0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)((longlong)_Src + lVar4) == param_2) {
            local_58 = (wchar_t *)&local_5c;
            FUN_144a9d2f8(plVar3);
            goto LAB_14965c0d8;
          }
          lVar4 = lVar4 + 4;
        } while (lVar8 * 4 - lVar4 != 0);
      }
    }
    *(uint *)(param_1 + 0x1f0) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf84) < iVar2 + 1U) {
      FUN_1446f48e2(plVar3,iVar2);
      _Src = (void *)*plVar3;
    }
    *(int *)((longlong)_Src + lVar8 * 4) = param_2;
LAB_14965c0d8:
    lVar8 = (**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
    plVar1 = param_1 + 0x18d;
    FUN_144a1a59e(plVar1,0,0);
    uVar6 = *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144);
    uVar10 = 0;
    if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x148) - 1U))) {
      uVar11 = 1;
      uVar9 = 1;
      if (1 < (int)uVar6) {
        uVar11 = uVar6;
      }
      do {
        uVar10 = uVar11;
        if (uVar11 == uVar9) break;
        uVar5 = uVar9 >> 9;
        uVar7 = uVar9 & 0x1ff;
        uVar10 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x148))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
LAB_14965c12e:
    if (uVar10 != uVar6) {
      lVar4 = ((undefined8 *)param_1[0x17f])[1];
      if (lVar4 == 0) {
        iVar2 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar10);
      }
      else {
        iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 4);
      }
      if (iVar2 == local_5c) {
        iVar2 = (int)param_1[0x18e];
        *(uint *)(param_1 + 0x18e) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc74) < iVar2 + 1U) {
          FUN_1446f48e2(plVar1,iVar2);
        }
        *(uint *)(*plVar1 + (longlong)iVar2 * 4) = uVar10;
      }
      uVar11 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar6) {
        uVar11 = uVar6;
      }
      uVar9 = uVar10;
      do {
        uVar10 = uVar11;
        if (uVar11 - 1 == uVar9) break;
        uVar10 = uVar9 + 1;
        uVar9 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar8 + 0x148) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      goto LAB_14965c12e;
    }
    local_58 = L"ToggleFrozenGroupChange";
    local_50 = 0x17;
    FUN_1446e940c(local_74,&local_58);
    local_58 = L"UMeshGroupPaintTool";
    local_50 = 0x13;
    FUN_1446e940c(local_78,&local_58);
    FUN_140208bae(&local_58,local_78,local_74,L"Toggle Frozen Group");
    FUN_14965c3f0(param_1,&local_70,plVar3,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    FUN_143b6e60e(param_1[0x17c],plVar1,2);
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar3 + 0x348))(plVar3);
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965c380 FUN_14965c380 body=111 status=ok
// SIG undefined FUN_14965c380(void)

byte * FUN_14965c380(longlong param_1,byte *param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_146c89f40(param_2);
  if ((longlong)*(int *)(param_1 + 0xf80) != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0xf78) + lVar2) == param_3) {
        bVar1 = (byte)(((uint)*param_2 + (uint)param_2[1] + (uint)param_2[2]) / 3);
        *param_2 = bVar1;
        param_2[1] = bVar1;
        param_2[2] = bVar1;
        return param_2;
      }
      lVar2 = lVar2 + 4;
    } while ((longlong)*(int *)(param_1 + 0xf80) * 4 != lVar2);
  }
  return param_2;
}



// FUNCTION 14965c3f0 FUN_14965c3f0 body=470 status=ok
// SIG undefined FUN_14965c3f0(void)

void FUN_14965c3f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == *(int *)(param_3 + 1)) {
    if (iVar5 == 0) goto LAB_14965c59c;
    iVar5 = memcmp((void *)*param_2,(void *)*param_3,(longlong)iVar5 << 2);
    if (iVar5 == 0) goto LAB_14965c59c;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  *puVar6 = &PTR_LAB_14bdacc00;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  FUN_14054c6c4(puVar6 + 1,param_2);
  FUN_14054c6c4(puVar6 + 3,param_3);
  local_b8 = puVar6[6];
  uStack_70 = puVar6[7];
  local_a8 = (longlong *)puVar6[8];
  uStack_60 = puVar6[9];
  local_58 = puVar6[10];
  uStack_50 = puVar6[0xb];
  local_48 = puVar6[0xc];
  uStack_40 = puVar6[0xd];
  uVar3 = local_48;
  uVar4 = uStack_40;
  local_68 = local_a8;
  uVar2 = uStack_60;
  local_78 = local_b8;
  uVar1 = uStack_70;
  puVar6[0xc] = CONCAT44(uStack_84,local_88);
  puVar6[0xd] = CONCAT44(uStack_7c,uStack_80);
  puVar6[10] = &PTR_LAB_14bdacc50;
  puVar6[0xb] = param_1;
  puVar6[8] = 0;
  puVar6[9] = CONCAT44(uStack_9c,uStack_a0);
  puVar6[6] = FUN_14456d91a;
  puVar6[7] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar1;
  uStack_60 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  if (local_b8 != 0) {
    plVar8 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar8 = &local_98;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  lVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_c0 = puVar6;
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,param_1,&local_c0,param_4);
LAB_14965c59c:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965c5c8 FUN_14965c5c8 body=820 status=ok
// SIG undefined FUN_14965c5c8(void)

void FUN_14965c5c8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (void *)0x0;
  local_60 = (int)param_1[0x1f0];
  lVar7 = (longlong)local_60;
  _Src = (void *)param_1[0x1ef];
  if (lVar7 == 0) {
    local_5c = 0;
  }
  else {
    FUN_144a06ca8(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar7 << 2);
  }
  plVar5 = param_1 + 0x1ef;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)((longlong)param_1 + 0xf84) < 0) {
    FUN_14481578e(plVar5,0);
  }
  lVar7 = (**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
  plVar1 = param_1 + 0x18d;
  FUN_144a1a59e(plVar1,0,0);
  uVar12 = *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144);
  uVar10 = 0;
  if ((uVar12 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x148) - 1U))) {
    uVar11 = 1;
    uVar9 = 1;
    if (1 < (int)uVar12) {
      uVar11 = uVar12;
    }
    do {
      uVar10 = uVar11;
      if (uVar11 == uVar9) break;
      uVar6 = uVar9 >> 9;
      uVar8 = uVar9 & 0x1ff;
      uVar10 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x148))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  do {
    if (uVar10 == uVar12) {
      local_58 = L"FreezeOtherGroups";
      local_50 = 0x11;
      FUN_1446e940c(local_6c,&local_58);
      local_58 = L"UMeshGroupPaintTool";
      local_50 = 0x13;
      FUN_1446e940c(local_70,&local_58);
      FUN_140208bae(&local_58,local_70,local_6c,L"Freeze Other Groups");
      FUN_14965c3f0(param_1,&local_68,plVar5,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      FUN_143b6e60e(param_1[0x17c],plVar1,2);
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar5 + 0x348))(plVar5);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar2 = ((undefined8 *)param_1[0x17f])[1];
    if (lVar2 == 0) {
      iVar3 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar10);
    }
    else {
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
    }
    if (iVar3 != param_2 && iVar3 != 0) {
      lVar2 = ((undefined8 *)param_1[0x17f])[1];
      if (lVar2 == 0) {
        uVar4 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar10);
      }
      else {
        uVar4 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
                 (ulonglong)(uVar10 & 0x1ff) * 4);
      }
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,uVar4);
      FUN_144aa221c(plVar5,&local_58);
      iVar3 = (int)param_1[0x18e];
      *(uint *)(param_1 + 0x18e) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc74) < iVar3 + 1U) {
        FUN_1446f48e2(plVar1,iVar3);
      }
      *(uint *)(*plVar1 + (longlong)iVar3 * 4) = uVar10;
    }
    uVar11 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar12) {
      uVar11 = uVar12;
    }
    uVar9 = uVar10;
    do {
      uVar10 = uVar11;
      if (uVar11 - 1 == uVar9) break;
      uVar10 = uVar9 + 1;
      uVar9 = uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar7 + 0x148) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14965c8fe FUN_14965c8fe body=761 status=ok
// SIG undefined FUN_14965c8fe(void)

void FUN_14965c8fe(longlong *param_1)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  void *local_60;
  int local_58;
  undefined4 local_54;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (void *)0x0;
  local_58 = (int)param_1[0x1f0];
  lVar6 = (longlong)local_58;
  _Src = (void *)param_1[0x1ef];
  if (lVar6 == 0) {
    local_54 = 0;
  }
  else {
    FUN_144a06ca8(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar6 << 2);
  }
  lVar6 = (**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
  plVar3 = param_1 + 0x18d;
  FUN_144a1a59e(plVar3,0);
  uVar5 = *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144);
  uVar10 = 0;
  if ((uVar5 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x148) - 1U))) {
    uVar1 = 1;
    uVar9 = 1;
    if (1 < (int)uVar5) {
      uVar1 = uVar5;
    }
    do {
      uVar10 = uVar1;
      if (uVar1 == uVar9) break;
      uVar4 = uVar9 >> 9;
      uVar7 = uVar9 & 0x1ff;
      uVar10 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar6 + 0x148))[uVar4] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar10 == uVar5) {
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      if (*(int *)((longlong)param_1 + 0xf84) < 0) {
        FUN_14481578e(param_1 + 0x1ef,0);
      }
      local_50 = L"ClearAllFrozenGroups";
      local_48 = 0x14;
      FUN_1446e940c(local_64,&local_50);
      local_50 = L"UMeshGroupPaintTool";
      local_48 = 0x13;
      FUN_1446e940c(local_68,&local_50);
      FUN_140208bae(&local_50,local_68,local_64,L"Clear Frozen Groups");
      FUN_14965c3f0(param_1,&local_60,param_1 + 0x1ef,&local_50);
      if (local_50 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_50 + 0x10))();
      }
      FUN_143b6e60e(param_1[0x17c],plVar3,2);
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar3 + 0x348))(plVar3);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar8 = ((undefined8 *)param_1[0x17f])[1];
    if (lVar8 == 0) {
      iVar2 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f]);
    }
    else {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
    }
    if ((longlong)(int)param_1[0x1f0] != 0) {
      lVar8 = 0;
      do {
        if (*(int *)(param_1[0x1ef] + lVar8) == iVar2) {
          lVar8 = param_1[0x18e];
          uVar1 = (int)lVar8 + 1;
          *(uint *)(param_1 + 0x18e) = uVar1;
          if (*(uint *)((longlong)param_1 + 0xc74) < uVar1) {
            FUN_1446f48e2(plVar3);
          }
          *(uint *)(*plVar3 + (longlong)(int)lVar8 * 4) = uVar10;
          break;
        }
        lVar8 = lVar8 + 4;
      } while ((longlong)(int)param_1[0x1f0] * 4 != lVar8);
    }
    uVar1 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar5) {
      uVar1 = uVar5;
    }
    uVar9 = uVar10;
    do {
      uVar10 = uVar1;
      if (uVar1 - 1 == uVar9) break;
      uVar10 = uVar9 + 1;
      uVar9 = uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar6 + 0x148) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14965cbf8 FUN_14965cbf8 body=974 status=ok
// SIG undefined FUN_14965cbf8(void)

void FUN_14965cbf8(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1b8 [40];
  void *local_190;
  int local_188;
  undefined4 local_184;
  void *local_180;
  int local_178;
  undefined4 local_174;
  code *local_170;
  longlong **local_168;
  undefined4 local_15c;
  code *local_158 [2];
  undefined ***local_148;
  undefined **local_138;
  longlong *local_130;
  longlong *local_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14965a36a();
  local_15c = *(undefined4 *)(param_1[0x175] + 0xb4);
  local_b8 = (longlong *)(**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_168 = &local_110;
  local_170 = FUN_14456d978;
  local_110 = param_1;
  local_108 = &local_15c;
  FUN_14965cfc8(&local_b8);
  local_110 = local_b8;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_145c3f772(&local_108,&local_b0);
  local_148 = (undefined ***)0x0;
  local_138 = &PTR_LAB_14bdacc70;
  local_158[0] = FUN_14456d9c4;
  local_130 = param_1;
  FUN_146c82c7c(&local_110,local_158);
  if (local_158[0] != (code *)0x0) {
    pppuVar7 = local_148;
    if (local_148 == (undefined ***)0x0) {
      pppuVar7 = &local_138;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  plVar5 = param_1 + 0x18d;
  FUN_144a1a59e(plVar5,0,0);
  FUN_14965d0aa(&local_110,&local_b8,plVar5);
  lVar2 = param_1[0x1ee];
  local_180 = (void *)0x0;
  local_178 = (int)param_1[0x18e];
  lVar9 = (longlong)local_178;
  pvVar3 = (void *)param_1[0x18d];
  if (lVar9 == 0) {
    local_174 = 0;
  }
  else {
    FUN_144a06ca8(&local_180,local_178,0);
    memcpy(local_180,pvVar3,lVar9 << 2);
    pvVar3 = local_180;
    lVar9 = (longlong)local_178;
    if (lVar9 != 0) {
      lVar8 = 0;
      do {
        FUN_1484cb982(lVar2,*(undefined4 *)((longlong)pvVar3 + lVar8));
        lVar8 = lVar8 + 4;
      } while (lVar9 * 4 != lVar8);
    }
    if (local_180 != (void *)0x0) {
      FUN_1400020a8(local_180);
    }
  }
  lVar2 = param_1[0x18e];
  if ((longlong)(int)lVar2 == 0) {
    local_188 = 0;
  }
  else {
    lVar9 = param_1[0x18d];
    lVar8 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar9 + lVar8);
      lVar4 = param_1[0x17f];
      uVar6 = (**(code **)(*param_1 + 0x420))(param_1);
      FUN_14837b7e4(lVar4,uVar1,local_15c,uVar6);
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar8);
    local_188 = (int)param_1[0x18e];
    lVar9 = (longlong)local_188;
    pvVar3 = (void *)param_1[0x18d];
    lVar2 = param_1[0x1ee];
    local_190 = (void *)0x0;
    if (lVar9 != 0) {
      FUN_144a06ca8(&local_190,local_188,0);
      memcpy(local_190,pvVar3,lVar9 << 2);
      pvVar3 = local_190;
      lVar9 = (longlong)local_188;
      if (lVar9 != 0) {
        lVar8 = 0;
        do {
          FUN_1484cb982(lVar2,*(undefined4 *)((longlong)pvVar3 + lVar8));
          lVar8 = lVar8 + 4;
        } while (lVar9 * 4 != lVar8);
      }
      if (local_190 != (void *)0x0) {
        FUN_1400020a8(local_190);
      }
      goto LAB_14965cdcc;
    }
  }
  local_190 = (void *)0x0;
  local_184 = 0;
LAB_14965cdcc:
  FUN_143b6e60e(param_1[0x17c],plVar5,2);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar5 + 0x348))(plVar5);
  FUN_14965a4d8(param_1);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_108);
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b0);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965cfc8 FUN_14965cfc8 body=224 status=ok
// SIG undefined FUN_14965cfc8(void)

void FUN_14965cfc8(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      lVar1 = *param_1;
      if (((int)uVar4 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar1 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) +
                             (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        local_44 = uVar4;
        cVar2 = (*(code *)*param_2)(param_2[1],&local_44);
        if (cVar2 != '\0') {
          local_44 = uVar4;
          FUN_1447cbafe(param_1 + 1,local_48,&local_44,0);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965d0aa FUN_14965d0aa body=381 status=ok
// SIG undefined FUN_14965d0aa(void)

void FUN_14965d0aa(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      uVar3 = *(uint *)(*local_90 + (longlong)iStack_74 * 0xc);
      if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
        lVar4 = *(longlong *)(param_2 + 0x48);
        if (*(longlong *)(param_2 + 0x48) == 0) {
          lVar4 = param_2 + 0x40;
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_2 + 0x50) - 1U & uVar3) * 4);
        if (iVar5 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_2 + 8) + (longlong)iVar5 * 0xc) == uVar3)
            goto LAB_14965d1a2;
            iVar5 = *(int *)(*(longlong *)(param_2 + 8) + (longlong)iVar5 * 0xc + 4);
          } while (iVar5 != -1);
        }
      }
      iVar5 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(param_3,iVar5);
      }
      *(uint *)(*param_3 + (longlong)iVar5 * 4) = uVar3;
LAB_14965d1a2:
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965d228 FUN_14965d228 body=958 status=ok
// SIG undefined FUN_14965d228(void)

void FUN_14965d228(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1b8 [40];
  void *local_190;
  int local_188;
  undefined4 local_184;
  void *local_180;
  int local_178;
  undefined4 local_174;
  code *local_170;
  longlong **local_168;
  undefined4 local_15c;
  longlong local_158 [2];
  longlong *local_148;
  longlong local_138 [5];
  longlong *local_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14965a36a();
  local_15c = *(undefined4 *)(param_1[0x175] + 0xb4);
  local_b8 = (longlong *)(**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_168 = &local_110;
  local_170 = FUN_14456da72;
  local_110 = param_1;
  local_108 = &local_15c;
  FUN_14965cfc8(&local_b8);
  local_110 = local_b8;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (undefined4 *)0x0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_145c3f772(&local_108,&local_b0);
  local_158[0] = 0;
  local_148 = (longlong *)0x0;
  FUN_146c83692(&local_110,1,0,local_158);
  if (local_158[0] != 0) {
    plVar5 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar5 = local_138;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  plVar5 = param_1 + 0x18d;
  FUN_144a1a59e(plVar5,0,0);
  FUN_14965d0aa(&local_b8,&local_110,plVar5);
  lVar2 = param_1[0x1ee];
  local_180 = (void *)0x0;
  local_178 = (int)param_1[0x18e];
  lVar8 = (longlong)local_178;
  pvVar3 = (void *)param_1[0x18d];
  if (lVar8 == 0) {
    local_174 = 0;
  }
  else {
    FUN_144a06ca8(&local_180,local_178,0);
    memcpy(local_180,pvVar3,lVar8 << 2);
    pvVar3 = local_180;
    lVar8 = (longlong)local_178;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        FUN_1484cb982(lVar2,*(undefined4 *)((longlong)pvVar3 + lVar7));
        lVar7 = lVar7 + 4;
      } while (lVar8 * 4 != lVar7);
    }
    if (local_180 != (void *)0x0) {
      FUN_1400020a8(local_180);
    }
  }
  lVar2 = param_1[0x18e];
  if ((longlong)(int)lVar2 == 0) {
    local_188 = 0;
  }
  else {
    lVar8 = param_1[0x18d];
    lVar7 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar8 + lVar7);
      lVar4 = param_1[0x17f];
      uVar6 = (**(code **)(*param_1 + 0x420))(param_1);
      FUN_14837b7e4(lVar4,uVar1,0,uVar6);
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar7);
    local_188 = (int)param_1[0x18e];
    lVar8 = (longlong)local_188;
    pvVar3 = (void *)param_1[0x18d];
    lVar2 = param_1[0x1ee];
    local_190 = (void *)0x0;
    if (lVar8 != 0) {
      FUN_144a06ca8(&local_190,local_188,0);
      memcpy(local_190,pvVar3,lVar8 << 2);
      pvVar3 = local_190;
      lVar8 = (longlong)local_188;
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          FUN_1484cb982(lVar2,*(undefined4 *)((longlong)pvVar3 + lVar7));
          lVar7 = lVar7 + 4;
        } while (lVar8 * 4 != lVar7);
      }
      if (local_190 != (void *)0x0) {
        FUN_1400020a8(local_190);
      }
      goto LAB_14965d3ee;
    }
  }
  local_190 = (void *)0x0;
  local_184 = 0;
LAB_14965d3ee:
  FUN_143b6e60e(param_1[0x17c],plVar5,2);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar5 + 0x348))(plVar5);
  FUN_14965a4d8(param_1);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_108);
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_b0);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965d5e8 FUN_14965d5e8 body=911 status=ok
// SIG undefined FUN_14965d5e8(void)

void FUN_14965d5e8(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14965a36a();
  iVar1 = *(int *)(param_1[0x175] + 0xb4);
  lVar6 = (**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
  plVar7 = param_1 + 0x18d;
  FUN_144a1a59e(plVar7,0,0);
  uVar11 = *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144);
  uVar14 = 0;
  if ((uVar11 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x148) - 1U))) {
    uVar15 = 1;
    uVar13 = 1;
    if (1 < (int)uVar11) {
      uVar15 = uVar11;
    }
    do {
      uVar14 = uVar15;
      if (uVar15 == uVar13) break;
      uVar9 = uVar13 >> 9;
      uVar10 = uVar13 & 0x1ff;
      uVar14 = uVar13;
      uVar13 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar6 + 0x148))[uVar9] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
LAB_14965d673:
  if (uVar14 != uVar11) {
    lVar16 = ((undefined8 *)param_1[0x17f])[1];
    if (lVar16 == 0) {
      iVar5 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar14);
    }
    else {
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(lVar16 + 0x20) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    }
    if (iVar5 == iVar1) {
      iVar5 = (int)param_1[0x18e];
      *(uint *)(param_1 + 0x18e) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc74) < iVar5 + 1U) {
        FUN_1446f48e2(plVar7,iVar5);
      }
      *(uint *)(*plVar7 + (longlong)iVar5 * 4) = uVar14;
    }
    uVar15 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar11) {
      uVar15 = uVar11;
    }
    uVar13 = uVar14;
    do {
      uVar14 = uVar15;
      if (uVar15 - 1 == uVar13) break;
      uVar14 = uVar13 + 1;
      uVar13 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar6 + 0x148) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    goto LAB_14965d673;
  }
  lVar6 = param_1[0x1ee];
  local_58 = (void *)0x0;
  local_50 = (int)param_1[0x18e];
  lVar16 = (longlong)local_50;
  pvVar3 = (void *)param_1[0x18d];
  if (lVar16 == 0) {
    local_4c = 0;
  }
  else {
    FUN_144a06ca8(&local_58,local_50,0);
    memcpy(local_58,pvVar3,lVar16 << 2);
    pvVar3 = local_58;
    lVar16 = (longlong)local_50;
    if (lVar16 != 0) {
      lVar12 = 0;
      do {
        FUN_1484cb982(lVar6,*(undefined4 *)((longlong)pvVar3 + lVar12));
        lVar12 = lVar12 + 4;
      } while (lVar16 * 4 != lVar12);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  lVar6 = param_1[0x18e];
  if ((longlong)(int)lVar6 == 0) {
    local_60 = 0;
  }
  else {
    lVar16 = param_1[0x18d];
    lVar12 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar16 + lVar12);
      lVar4 = param_1[0x17f];
      uVar8 = (**(code **)(*param_1 + 0x420))(param_1);
      FUN_14837b7e4(lVar4,uVar2,0,uVar8);
      lVar12 = lVar12 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar12);
    local_60 = (int)param_1[0x18e];
    lVar16 = (longlong)local_60;
    pvVar3 = (void *)param_1[0x18d];
    lVar6 = param_1[0x1ee];
    local_68 = (void *)0x0;
    if (lVar16 != 0) {
      FUN_144a06ca8(&local_68,local_60,0);
      memcpy(local_68,pvVar3,lVar16 << 2);
      pvVar3 = local_68;
      lVar16 = (longlong)local_60;
      if (lVar16 != 0) {
        lVar12 = 0;
        do {
          FUN_1484cb982(lVar6,*(undefined4 *)((longlong)pvVar3 + lVar12));
          lVar12 = lVar12 + 4;
        } while (lVar16 * 4 != lVar12);
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8(local_68);
      }
      goto LAB_14965d792;
    }
  }
  local_68 = (void *)0x0;
  local_5c = 0;
LAB_14965d792:
  FUN_143b6e60e(param_1[0x17c],plVar7,2);
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar7 + 0x348))(plVar7);
  FUN_14965a4d8(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965d978 FUN_14965d978 body=962 status=ok
// SIG undefined FUN_14965d978(void)

void FUN_14965d978(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14965a36a();
  iVar1 = *(int *)(param_1[0x175] + 0xb4);
  lVar7 = (**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
  plVar8 = param_1 + 0x18d;
  FUN_144a1a59e(plVar8,0,0);
  uVar12 = *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144);
  uVar16 = 0;
  if ((uVar12 != 0) &&
     (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar15 = 1;
    if (1 < (int)uVar12) {
      uVar5 = uVar12;
    }
    do {
      uVar16 = uVar5;
      if (uVar5 == uVar15) break;
      uVar10 = uVar15 >> 9;
      uVar13 = uVar15 & 0x1ff;
      uVar16 = uVar15;
      uVar15 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x148))[uVar10] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
LAB_14965da02:
  if (uVar16 != uVar12) {
    lVar11 = ((undefined8 *)param_1[0x17f])[1];
    if (lVar11 == 0) {
      iVar6 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f]);
    }
    else {
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x20) + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 4);
    }
    if (iVar6 == 0 && iVar1 != 0) {
      if ((longlong)(int)param_1[0x1f0] != 0) {
        lVar11 = 0;
        do {
          if (*(int *)(param_1[0x1ef] + lVar11) == 0) goto LAB_14965da47;
          lVar11 = lVar11 + 4;
        } while ((longlong)(int)param_1[0x1f0] * 4 != lVar11);
      }
      lVar11 = param_1[0x18e];
      uVar5 = (int)lVar11 + 1;
      *(uint *)(param_1 + 0x18e) = uVar5;
      if (*(uint *)((longlong)param_1 + 0xc74) < uVar5) {
        FUN_1446f48e2(plVar8);
      }
      *(uint *)(*plVar8 + (longlong)(int)lVar11 * 4) = uVar16;
    }
LAB_14965da47:
    uVar5 = uVar16 + 1;
    if ((int)(uVar16 + 1) < (int)uVar12) {
      uVar5 = uVar12;
    }
    uVar15 = uVar16;
    do {
      uVar16 = uVar5;
      if (uVar5 - 1 == uVar15) break;
      uVar16 = uVar15 + 1;
      uVar15 = uVar16;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar7 + 0x148) +
                                           (ulonglong)(uVar16 >> 9) * 8) +
                                         (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
    goto LAB_14965da02;
  }
  lVar7 = param_1[0x1ee];
  local_58 = (void *)0x0;
  local_50 = (int)param_1[0x18e];
  lVar11 = (longlong)local_50;
  pvVar3 = (void *)param_1[0x18d];
  if (lVar11 == 0) {
    local_4c = 0;
  }
  else {
    FUN_144a06ca8(&local_58,local_50,0);
    memcpy(local_58,pvVar3,lVar11 << 2);
    pvVar3 = local_58;
    lVar11 = (longlong)local_50;
    if (lVar11 != 0) {
      lVar14 = 0;
      do {
        FUN_1484cb982(lVar7,*(undefined4 *)((longlong)pvVar3 + lVar14));
        lVar14 = lVar14 + 4;
      } while (lVar11 * 4 != lVar14);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  lVar7 = param_1[0x18e];
  if ((longlong)(int)lVar7 == 0) {
    local_60 = 0;
  }
  else {
    lVar11 = param_1[0x18d];
    lVar14 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar11 + lVar14);
      lVar4 = param_1[0x17f];
      uVar9 = (**(code **)(*param_1 + 0x420))(param_1);
      FUN_14837b7e4(lVar4,uVar2,iVar1,uVar9);
      lVar14 = lVar14 + 4;
    } while ((longlong)(int)lVar7 * 4 != lVar14);
    local_60 = (int)param_1[0x18e];
    lVar11 = (longlong)local_60;
    pvVar3 = (void *)param_1[0x18d];
    lVar7 = param_1[0x1ee];
    local_68 = (void *)0x0;
    if (lVar11 != 0) {
      FUN_144a06ca8(&local_68,local_60,0);
      memcpy(local_68,pvVar3,lVar11 << 2);
      pvVar3 = local_68;
      lVar11 = (longlong)local_60;
      if (lVar11 != 0) {
        lVar14 = 0;
        do {
          FUN_1484cb982(lVar7,*(undefined4 *)((longlong)pvVar3 + lVar14));
          lVar14 = lVar14 + 4;
        } while (lVar11 * 4 != lVar14);
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8(local_68);
      }
      goto LAB_14965db57;
    }
  }
  local_68 = (void *)0x0;
  local_5c = 0;
LAB_14965db57:
  FUN_143b6e60e(param_1[0x17c],plVar8,2);
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar8 + 0x348))(plVar8);
  FUN_14965a4d8(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965dd3c FUN_14965dd3c body=892 status=ok
// SIG undefined FUN_14965dd3c(void)

void FUN_14965dd3c(longlong *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14965a36a();
  lVar5 = (**(code **)(*(longlong *)param_1[0x17c] + 0xa88))();
  plVar6 = param_1 + 0x18d;
  FUN_144a1a59e(plVar6,0,0);
  uVar9 = *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144);
  uVar13 = 0;
  if ((uVar9 != 0) &&
     (uVar13 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x148) - 1U))) {
    uVar14 = 1;
    uVar12 = 1;
    if (1 < (int)uVar9) {
      uVar14 = uVar9;
    }
    do {
      uVar13 = uVar14;
      if (uVar14 == uVar12) break;
      uVar8 = uVar12 >> 9;
      uVar10 = uVar12 & 0x1ff;
      uVar13 = uVar12;
      uVar12 = uVar12 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x148))[uVar8] +
                                         (ulonglong)uVar10 * 2) - 1U));
  }
LAB_14965ddb7:
  if (uVar13 != uVar9) {
    lVar15 = ((undefined8 *)param_1[0x17f])[1];
    if (lVar15 == 0) {
      iVar4 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar13);
    }
    else {
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(lVar15 + 0x20) + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
    }
    if (iVar4 != 0) {
      iVar4 = (int)param_1[0x18e];
      *(uint *)(param_1 + 0x18e) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc74) < iVar4 + 1U) {
        FUN_1446f48e2(plVar6,iVar4);
      }
      *(uint *)(*plVar6 + (longlong)iVar4 * 4) = uVar13;
    }
    uVar14 = uVar13 + 1;
    if ((int)(uVar13 + 1) < (int)uVar9) {
      uVar14 = uVar9;
    }
    uVar12 = uVar13;
    do {
      uVar13 = uVar14;
      if (uVar14 - 1 == uVar12) break;
      uVar13 = uVar12 + 1;
      uVar12 = uVar13;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar5 + 0x148) +
                                           (ulonglong)(uVar13 >> 9) * 8) +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    goto LAB_14965ddb7;
  }
  lVar5 = param_1[0x1ee];
  local_58 = (void *)0x0;
  local_50 = (int)param_1[0x18e];
  lVar15 = (longlong)local_50;
  pvVar2 = (void *)param_1[0x18d];
  if (lVar15 == 0) {
    local_4c = 0;
  }
  else {
    FUN_144a06ca8(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar15 << 2);
    pvVar2 = local_58;
    lVar15 = (longlong)local_50;
    if (lVar15 != 0) {
      lVar11 = 0;
      do {
        FUN_1484cb982(lVar5,*(undefined4 *)((longlong)pvVar2 + lVar11));
        lVar11 = lVar11 + 4;
      } while (lVar15 * 4 != lVar11);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  lVar5 = param_1[0x18e];
  if ((longlong)(int)lVar5 == 0) {
    local_60 = 0;
  }
  else {
    lVar15 = param_1[0x18d];
    lVar11 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar15 + lVar11);
      lVar3 = param_1[0x17f];
      uVar7 = (**(code **)(*param_1 + 0x420))(param_1);
      FUN_14837b7e4(lVar3,uVar1,0,uVar7);
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar11);
    local_60 = (int)param_1[0x18e];
    lVar15 = (longlong)local_60;
    pvVar2 = (void *)param_1[0x18d];
    lVar5 = param_1[0x1ee];
    local_68 = (void *)0x0;
    if (lVar15 != 0) {
      FUN_144a06ca8(&local_68,local_60,0);
      memcpy(local_68,pvVar2,lVar15 << 2);
      pvVar2 = local_68;
      lVar15 = (longlong)local_60;
      if (lVar15 != 0) {
        lVar11 = 0;
        do {
          FUN_1484cb982(lVar5,*(undefined4 *)((longlong)pvVar2 + lVar11));
          lVar11 = lVar11 + 4;
        } while (lVar15 * 4 != lVar11);
      }
      if (local_68 != (void *)0x0) {
        FUN_1400020a8(local_68);
      }
      goto LAB_14965ded4;
    }
  }
  local_68 = (void *)0x0;
  local_5c = 0;
LAB_14965ded4:
  FUN_143b6e60e(param_1[0x17c],plVar6,2);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar6 + 0x348))(plVar6);
  FUN_14965a4d8(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965e0ba FUN_14965e0ba body=469 status=ok
// SIG undefined FUN_14965e0ba(void)

void FUN_14965e0ba(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  code **local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  code *local_58;
  code **local_50;
  code *local_48;
  code **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_1 + 0x420))();
  local_60 = lVar1;
  FUN_14051b394(param_1 + 0x1f1,*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144),1);
  local_40 = &local_58;
  local_90 = (code *)0x0;
  uVar2 = 0;
  local_88 = (longlong *)((ulonglong)local_88._4_4_ << 0x20);
  local_48 = FUN_14456db06;
  local_a0 = 0;
  local_98 = &local_90;
  local_58 = (code *)&local_60;
  local_50 = (code **)param_1;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144),1,
                &local_48);
  lVar1 = *(longlong *)(local_60 + 0x208);
  if (0 < *(int *)(lVar1 + 0x38)) {
    uVar2 = **(undefined8 **)(lVar1 + 0x30);
  }
  if (*(int *)(lVar1 + 0x28) < 1) {
    local_70 = 0;
  }
  else {
    local_70 = **(undefined8 **)(lVar1 + 0x20);
  }
  local_68 = uVar2;
  FUN_144a1a59e(param_1 + 499,*(int *)(local_60 + 0x1d0) * 0x200 + *(int *)(local_60 + 0x1d4),1);
  FUN_144a1a59e(param_1 + 0x1f5,*(int *)(local_60 + 0x1d0) * 0x200 + *(int *)(local_60 + 0x1d4),1);
  local_78 = &local_68;
  local_48 = (code *)0x0;
  local_40 = (code **)((ulonglong)local_40 & 0xffffffff00000000);
  local_58 = FUN_14456dbb8;
  local_a0 = 0;
  local_98 = &local_48;
  local_90 = (code *)&local_60;
  local_88 = param_1;
  local_80 = &local_70;
  local_50 = &local_90;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(local_60 + 0x1d0) * 0x200 + *(int *)(local_60 + 0x1d4),
                1);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965e290 FUN_14965e290 body=992 status=ok
// SIG undefined FUN_14965e290(void)

void FUN_14965e290(longlong *param_1)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_dc [4];
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = (**(code **)(*param_1 + 0x2c8))();
  local_88 = L"ChangeActiveGroupLayer";
  uStack_80._0_4_ = 0x16;
  FUN_1446e940c(&local_c8,&local_88);
  local_88 = L"UMeshGroupPaintTool";
  uStack_80 = CONCAT44(uStack_80._4_4_,0x13);
  FUN_1446e940c(&local_d8,&local_88);
  FUN_140208bae(&local_88,&local_d8,&local_c8,L"Change Polygroup Layer");
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  local_d8 = (void *)0x0;
  local_d0 = (int)param_1[0x1f0];
  lVar5 = (longlong)local_d0;
  _Src = (void *)param_1[0x1ef];
  if (lVar5 == 0) {
    local_cc = 0;
  }
  else {
    FUN_144a06ca8(&local_d8,local_d0,0);
    memcpy(local_d8,_Src,lVar5 << 2);
  }
  iVar8 = -1;
  iVar9 = -1;
  if (param_1[0x17f] != 0) {
    iVar9 = *(int *)(param_1[0x17f] + 0x10);
  }
  FUN_149659142(param_1);
  if (param_1[0x17f] != 0) {
    iVar8 = *(int *)(param_1[0x17f] + 0x10);
  }
  if (iVar9 != iVar8) {
    local_88 = L"ClearAllFrozenGroups";
    uStack_80._0_4_ = 0x14;
    FUN_1446e940c(&local_c8,&local_88);
    local_88 = L"UMeshGroupPaintTool";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x13);
    FUN_1446e940c(local_dc,&local_88);
    FUN_140208bae(&local_88,local_dc,&local_c8,L"Clear Frozen Groups");
    FUN_14965c3f0(param_1,&local_d8,param_1 + 0x1ef,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    *puVar6 = &PTR_LAB_14bdacd00;
    *(int *)(puVar6 + 1) = iVar9;
    *(int *)((longlong)puVar6 + 0xc) = iVar8;
    local_c8 = (wchar_t *)puVar6[2];
    uStack_80 = puVar6[3];
    local_b8 = (longlong *)puVar6[4];
    uStack_70 = puVar6[5];
    local_68 = puVar6[6];
    uStack_60 = puVar6[7];
    local_58 = puVar6[8];
    uStack_50 = puVar6[9];
    uVar3 = local_58;
    uVar4 = uStack_50;
    local_78 = local_b8;
    uVar2 = uStack_70;
    local_88 = local_c8;
    uVar1 = uStack_80;
    puVar6[8] = CONCAT44(uStack_94,local_98);
    puVar6[9] = CONCAT44(uStack_8c,uStack_90);
    puVar6[6] = &PTR_LAB_14bdacd50;
    puVar6[7] = param_1;
    puVar6[4] = 0;
    puVar6[5] = CONCAT44(uStack_ac,uStack_b0);
    puVar6[2] = FUN_14456dc52;
    puVar6[3] = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar1;
    uStack_70 = uVar2;
    local_58 = uVar3;
    uStack_50 = uVar4;
    if (local_c8 != (wchar_t *)0x0) {
      plVar7 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar7 = &local_a8;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_88 = L"ChangeActiveGroupLayer";
    uStack_80._0_4_ = 0x16;
    FUN_1446e940c(&local_c8,&local_88);
    local_88 = L"UMeshGroupPaintTool";
    uStack_80 = CONCAT44(uStack_80._4_4_,0x13);
    FUN_1446e940c(local_dc,&local_88);
    FUN_140208bae(&local_88,local_dc,&local_c8,L"Change Polygroup Layer");
    local_e8 = puVar6;
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,param_1,&local_e8,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965e782 FUN_14965e782 body=230 status=ok
// SIG undefined FUN_14965e782(void)

void FUN_14965e782(longlong param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140bee9ec(param_1 + 200);
  if ((int)param_2[1] < 1) {
    FUN_140056680(&local_38,&DAT_149dfb77a);
  }
  else {
    local_38 = (void *)0x0;
    local_30 = *(int *)((undefined8 *)*param_2 + 1);
    lVar2 = (longlong)local_30;
    _Src = *(void **)*param_2;
    if (lVar2 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar2 * 2);
    }
  }
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0xb8,local_38,iVar1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965e86a FUN_14965e86a body=26 status=ok
// SIG undefined FUN_14965e86a(void)

void FUN_14965e86a(undefined8 param_1)

{
  FUN_1484464a0();
  FUN_14965e884(param_1);
  return;
}



// FUNCTION 14965e884 FUN_14965e884 body=320 status=ok
// SIG undefined FUN_14965e884(void)

void FUN_14965e884(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_140a1dfd8();
  local_50 = 0;
  local_60 = 0;
  local_58 = 1;
  local_68 = 0;
  lVar4 = FUN_1412ecd05(uVar3,0,L"/MeshModelingToolsetExp/Materials/CheckerMaterial",0);
  if (lVar4 != 0) {
    lVar4 = FUN_14090ceee(lVar4,param_1,0);
    if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x110) = lVar4;
      if (lVar4 == 0) goto LAB_14965e98f;
    }
    else {
      FUN_14689c22e(lVar4);
      *(longlong *)(param_1 + 0x110) = lVar4;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xac);
    FUN_1446ddc76(&local_38,"Density",1);
    FUN_14472da24(lVar4,local_38,uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    iVar2 = FUN_140e1307c(param_1 + 200,param_1 + 0xb8);
    FUN_1446ddc76(&local_40,"UVChannel",1);
    FUN_14472da24(uVar3,local_40,(float)iVar2);
  }
LAB_14965e98f:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965e9c6 FUN_14965e9c6 body=841 status=ok
// SIG undefined FUN_14965e9c6(void)

void FUN_14965e9c6(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  switch(*(undefined1 *)(param_1 + 0xa8)) {
  case 1:
    uVar3 = FUN_148557b44(0);
    lVar4 = FUN_14090ceee(uVar3,param_1,0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
    FUN_1446f470e(&local_58,L"FlatShading",1);
    fVar7 = 1.0;
    local_60 = local_58;
    goto LAB_14965ecdf;
  case 2:
    uVar3 = FUN_148557cc1(0,0);
    lVar4 = FUN_14090ceee(uVar3,param_1,0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
    FUN_1446f470e(&local_60,L"FlatShading",1);
    fVar7 = 0.0;
    goto LAB_14965ecdf;
  case 3:
    lVar4 = FUN_148557bb8(0,param_1 + 0xf8,*(undefined8 *)(param_1 + 0xf0),
                          *(undefined1 *)(param_1 + 0x108));
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
    local_78 = *(undefined4 *)(param_1 + 0xdc);
    uStack_74 = *(undefined4 *)(param_1 + 0xe0);
    uStack_70 = *(undefined4 *)(param_1 + 0xe4);
    uStack_6c = *(undefined4 *)(param_1 + 0xe8);
    FUN_1446f470e(&local_80,L"Color",1);
    FUN_144a9d3f0(lVar4,local_80,&local_78);
    lVar4 = *(longlong *)(param_1 + 0x118);
    fVar7 = (float)*(double *)(param_1 + 0xf0);
    pwVar5 = L"Opacity";
    puVar6 = &local_88;
    break;
  case 4:
    uVar3 = FUN_148557cc1(0,2);
    lVar4 = FUN_14090ceee(uVar3,param_1,0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
    goto switchD_14965ea0c_default;
  case 5:
    lVar4 = FUN_14855788a(0,0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
    pwVar5 = L"FlatShading";
    puVar6 = &local_90;
    break;
  case 6:
    lVar4 = FUN_14855788a(0,0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
    if (*(char *)(param_1 + 0xd8) == '\0') {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
    pwVar5 = L"FlatShading";
    puVar6 = &local_98;
    break;
  case 7:
    lVar4 = *(longlong *)(param_1 + 0x110);
    if (lVar4 == 0) goto switchD_14965ea0c_default;
    uVar1 = *(undefined4 *)(param_1 + 0xac);
    FUN_1446ddc76(&local_48,"Density",1);
    FUN_14472da24(lVar4,local_48,uVar1);
    lVar4 = *(longlong *)(param_1 + 0x110);
    iVar2 = FUN_140e1307c(param_1 + 200,param_1 + 0xb8);
    fVar7 = (float)iVar2;
    puVar6 = &local_50;
    FUN_1446ddc76(puVar6,"UVChannel",1);
    goto LAB_14965ecd6;
  default:
    goto switchD_14965ea0c_default;
  }
  FUN_1446f470e(puVar6,pwVar5,1);
LAB_14965ecd6:
  local_60 = *puVar6;
LAB_14965ecdf:
  FUN_14472da24(lVar4,local_60,fVar7);
switchD_14965ea0c_default:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965ed10 FUN_14965ed10 body=329 status=ok
// SIG undefined FUN_14965ed10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14965ed10(void)

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
              0x110) < DAT_14cc20ee0) {
    FUN_144b3d300(&DAT_14cc20ee0);
    if (DAT_14cc20ee0 == -1) {
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
      DAT_14cc20ed0 = (undefined *)0x0;
      _DAT_14cc20edc = 5;
      lVar4 = (longlong)local_40;
      _DAT_14cc20ed8 = local_40;
      FUN_1484d23fc(&DAT_14cc20ea8,local_40,5);
      if (lVar4 != 0) {
        _Dst = &DAT_14cc20ea8;
        if (DAT_14cc20ed0 != (undefined *)0x0) {
          _Dst = DAT_14cc20ed0;
        }
        memcpy(_Dst,_Src,lVar4 << 3);
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1445654fe);
      _Init_thread_footer(&DAT_14cc20ee0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return &DAT_14cc20ea8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965ee63 FUN_14965ee63 body=148 status=ok
// SIG undefined FUN_14965ee63(void)

undefined8 FUN_14965ee63(undefined8 param_1)

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
  uVar1 = FUN_145bad05e();
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



// FUNCTION 14965eef8 FUN_14965eef8 body=1705 status=ok
// SIG undefined FUN_14965eef8(void)

/* WARNING: Removing unreachable block (ram,0x00014965f307) */

void FUN_14965eef8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_368 [40];
  undefined1 local_340 [4];
  undefined1 local_33c [4];
  wchar_t *local_338;
  undefined8 local_330;
  longlong local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c0;
  longlong local_2b8 [2];
  undefined1 *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  longlong *local_280;
  longlong local_268 [68];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_1484416be();
  lVar5 = FUN_1484e47e5(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x1b] = lVar5;
  *(undefined1 *)(lVar5 + 0x40) = 0;
  lVar5 = param_1[0x1b];
  uVar6 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_14851b11a(lVar5,uVar6,&DAT_14c846480);
  FUN_148558526(param_1[0x1b],param_1[0x14]);
  FUN_1485063a5(local_268,param_1[0x14]);
  plVar7 = local_268;
  plVar9 = param_1 + 0x38;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar9 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar9 = plVar9 + 1;
  }
  FUN_14851b91a(param_1[0x1b]);
  FUN_148506417(local_2b8,param_1[0x14],0);
  FUN_14851b480(param_1[0x1b],local_2b8);
  lVar5 = FUN_14851b4e4(param_1[0x1b],0);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x1d] = lVar5;
  FUN_14851b65c(param_1[0x1b],2);
  DAT_14c7677b4 = 1;
  FUN_148506727(local_268,param_1[0x14],&DAT_14c7677ac);
  FUN_14851c2f2(param_1[0x1b],local_268);
  FUN_1446ddc76(&local_2c0,"MeshInspectorToolLineSet",1);
  lVar5 = FUN_14965f5a2(*(undefined8 *)(param_1[0x1b] + 0x50),local_2c0);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x1c] = lVar5;
  FUN_140486fc4(lVar5,*(undefined8 *)(param_1[0x1b] + 0x50),0);
  FUN_140b506a4(param_1[0x1c]);
  FUN_14965f65a(param_1);
  FUN_148506321(param_1[0x14]);
  plVar7 = (longlong *)FUN_14965fdc6(param_1);
  if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar7);
  }
  param_1[0x17] = (longlong)plVar7;
  FUN_140056680(&local_338,&DAT_149dfb77a);
  (**(code **)(*plVar7 + 0x2a8))(plVar7,param_1,&local_338);
  if (local_338 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x17]);
  plVar7 = (longlong *)FUN_148f7334e(param_1);
  if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar7);
  }
  param_1[0x18] = (longlong)plVar7;
  FUN_140056680(&local_338,L"MeshGroupPaintTool");
  (**(code **)(*plVar7 + 0x2a8))(plVar7,param_1,&local_338);
  if (local_338 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = param_1[0x18];
  uVar6 = FUN_14851bd54(param_1[0x1b]);
  FUN_14851d694(lVar5,uVar6);
  local_298 = 0;
  local_288 = &PTR_LAB_14bdacd70;
  local_2a8 = &LAB_14456dce0;
  local_280 = param_1;
  FUN_1484c9a28(param_1[0x18] + 0x28,param_1[0x18] + 0xa8);
  FUN_14965fe5c(param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  lVar5 = FUN_14965ff4c(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x19] = lVar5;
  lVar5 = FUN_14851bd54(param_1[0x1b]);
  local_2d8 = 0;
  uStack_2d0 = 0;
  iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x208) + 0xa0))();
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      FUN_140002266(&local_338,L"UV %d",iVar2);
      uVar1 = uStack_2d0;
      lVar10 = (longlong)(int)uStack_2d0;
      uVar3 = (int)uStack_2d0 + 1;
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar3);
      if (uStack_2d0._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_2d8,uVar1 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x10;
      *(undefined8 *)(local_2d8 + lVar10) = 0;
      *(wchar_t **)(local_2d8 + lVar10) = local_338;
      *(undefined4 *)(local_2d8 + 8 + lVar10) = (undefined4)local_330;
      *(undefined4 *)(local_2d8 + 0xc + lVar10) = local_330._4_4_;
      local_330 = 0;
      local_338 = (wchar_t *)0x0;
      iVar2 = iVar2 + 1;
      iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x208) + 0xa0))();
    } while (iVar2 < iVar4);
  }
  FUN_14965e782(param_1[0x19],&local_2d8);
  plVar7 = (longlong *)param_1[0x19];
  FUN_140056680(&local_338,&DAT_149dfb77a);
  (**(code **)(*plVar7 + 0x2a8))(plVar7,param_1,&local_338);
  if (local_338 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
  FUN_14851b88e(param_1[0x1b],*(undefined1 *)(param_1[0x17] + 0xa8));
  uVar6 = FUN_149626df2(param_1);
  uVar8 = FUN_14851bd54(param_1[0x1b]);
  FUN_1496ac3fc(uVar6,uVar8);
  (**(code **)(*param_1 + 0x308))(param_1,uVar6);
  uVar6 = FUN_14965ffe1(param_1);
  FUN_1485063a5(&local_338,param_1[0x14]);
  uVar8 = FUN_14851bd54(param_1[0x1b]);
  FUN_1496abe84(uVar6,uVar8,&local_338);
  (**(code **)(*param_1 + 0x308))(param_1,uVar6);
  FUN_149660076(param_1);
  local_338 = L"ToolName";
  local_330._0_4_ = 8;
  FUN_1446e940c(local_33c,&local_338);
  local_338 = L"UMeshInspectorTool";
  local_330 = CONCAT44(local_330._4_4_,0x12);
  FUN_1446e940c(local_340,&local_338);
  FUN_140208bae(&local_338,local_340,local_33c,L"Mesh Inspector");
  (**(code **)(*param_1 + 0x370))(param_1,&local_338);
  if (local_338 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_338 + 0x10))();
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_338 = L"OnStartTool";
  local_330._0_4_ = 0xb;
  FUN_1446e940c(local_33c,&local_338);
  local_338 = L"UMeshInspectorTool";
  local_330 = CONCAT44(local_330._4_4_,0x12);
  FUN_1446e940c(local_340,&local_338);
  FUN_140208bae(&local_338,local_340,local_33c,
                L"Visualize various geometric properties and attributes of the Mesh");
  (**(code **)(*plVar7 + 0x340))(plVar7,&local_338,2);
  if (local_338 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_338 + 0x10))();
  }
  FUN_1447a1747(local_2d8,uStack_2d0 & 0xffffffff);
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(local_268);
  if (local_2b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14965f5a2 FUN_14965f5a2 body=183 status=ok
// SIG undefined FUN_14965f5a2(void)

undefined8 FUN_14965f5a2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_141153e08();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14965f65a FUN_14965f65a body=1900 status=ok
// SIG undefined FUN_14965f65a(void)

void FUN_14965f65a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong local_90;
  longlong local_88;
  
  plVar1 = (longlong *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) < 0) {
    FUN_14481578e(plVar1,0);
  }
  plVar2 = (longlong *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) < 0) {
    FUN_14481578e(plVar2,0);
  }
  plVar3 = (longlong *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) < 0) {
    FUN_14481578e(plVar3,0);
  }
  plVar4 = (longlong *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) < 0) {
    FUN_14481578e(plVar4,0);
  }
  plVar5 = (longlong *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) < 0) {
    FUN_14481578e(plVar5,0);
  }
  plVar6 = (longlong *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) < 0) {
    FUN_14481578e(plVar6,0);
  }
  plVar7 = (longlong *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) < 0) {
    FUN_14481578e(plVar7,0);
  }
  plVar8 = (longlong *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) < 0) {
    FUN_14481578e(plVar8,0);
  }
  lVar16 = FUN_14851bd54(*(undefined8 *)(param_1 + 0xd8));
  lVar24 = *(longlong *)(lVar16 + 0x208);
  if (lVar24 == 0) {
    lVar25 = 0;
LAB_14965f84c:
    local_90 = 0;
  }
  else {
    if (*(int *)(lVar24 + 0x28) < 1) {
      lVar25 = 0;
    }
    else {
      lVar25 = **(longlong **)(lVar24 + 0x20);
    }
    uVar20 = *(uint *)(lVar24 + 0x38);
    if ((int)uVar20 < 1) goto LAB_14965f84c;
    plVar14 = *(longlong **)(lVar24 + 0x30);
    local_90 = *plVar14;
    if ((uVar20 != 1 && local_90 != 0) && (lVar24 = plVar14[1], 2 < uVar20 && lVar24 != 0)) {
      local_88 = plVar14[2];
      if (local_88 == 0) {
        lVar24 = 0;
      }
      goto LAB_14965f85e;
    }
  }
  lVar24 = 0;
  local_88 = 0;
LAB_14965f85e:
  uVar22 = *(int *)(lVar16 + 0x1d0) * 0x200 + *(int *)(lVar16 + 0x1d4);
  uVar20 = 0;
  if ((uVar22 != 0) &&
     (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x1d8) - 1U))) {
    uVar21 = 1;
    uVar19 = 1;
    if (1 < (int)uVar22) {
      uVar21 = uVar22;
    }
    do {
      uVar20 = uVar21;
      if (uVar21 == uVar19) break;
      uVar18 = uVar19 >> 9;
      uVar23 = uVar19 & 0x1ff;
      uVar20 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x1d8))[uVar18] +
                                         (ulonglong)uVar23 * 2) - 1U));
  }
LAB_14965f888:
  if (uVar20 != uVar22) {
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar16 + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8) +
                     0xc + (ulonglong)((uVar20 & 0x1ff) << 4));
    if (iVar9 == -1) {
      iVar10 = *(int *)(param_1 + 0xf8);
      *(uint *)(param_1 + 0xf8) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0xfc) < iVar10 + 1U) {
        FUN_1446f48e2(plVar1,iVar10);
      }
      *(uint *)(*plVar1 + (longlong)iVar10 * 4) = uVar20;
    }
    if ((lVar25 != 0) && (cVar15 = FUN_146c1a770(lVar25,uVar20,0), cVar15 != '\0')) {
      iVar10 = *(int *)(param_1 + 0x118);
      *(uint *)(param_1 + 0x118) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x11c) < iVar10 + 1U) {
        FUN_1446f48e2(plVar3,iVar10);
      }
      *(uint *)(*plVar3 + (longlong)iVar10 * 4) = uVar20;
    }
    if (((local_90 != 0) && (iVar9 != -1)) &&
       (cVar15 = FUN_146c1aaf4(local_90,uVar20), cVar15 != '\0')) {
      iVar10 = *(int *)(param_1 + 0x138);
      *(uint *)(param_1 + 0x138) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x13c) < iVar10 + 1U) {
        FUN_1446f48e2(plVar5,iVar10);
      }
      *(uint *)(*plVar5 + (longlong)iVar10 * 4) = uVar20;
    }
    if (((lVar24 != 0) && (iVar9 != -1)) &&
       ((cVar15 = FUN_146c1aaf4(lVar24,uVar20), cVar15 != '\0' ||
        (cVar15 = FUN_146c1aaf4(local_88,uVar20), cVar15 != '\0')))) {
      iVar9 = *(int *)(param_1 + 0x148);
      *(uint *)(param_1 + 0x148) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x14c) < iVar9 + 1U) {
        FUN_1446f48e2(plVar6,iVar9);
      }
      *(uint *)(*plVar6 + (longlong)iVar9 * 4) = uVar20;
    }
    cVar15 = FUN_146c13702(lVar16,uVar20);
    if (cVar15 != '\0') {
      iVar9 = *(int *)(param_1 + 0x158);
      *(uint *)(param_1 + 0x158) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x15c) < iVar9 + 1U) {
        FUN_1446f48e2(plVar7,iVar9);
      }
      *(uint *)(*plVar7 + (longlong)iVar9 * 4) = uVar20;
    }
    uVar21 = uVar20 + 1;
    if ((int)(uVar20 + 1) < (int)uVar22) {
      uVar21 = uVar22;
    }
    uVar19 = uVar20;
    do {
      uVar20 = uVar21;
      if (uVar21 - 1 == uVar19) break;
      uVar20 = uVar19 + 1;
      uVar19 = uVar20;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar16 + 0x1d8) +
                                           (ulonglong)(uVar20 >> 9) * 8) +
                                         (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
    goto LAB_14965f888;
  }
  uVar22 = *(int *)(lVar16 + 0x20) * 0x200 + *(int *)(lVar16 + 0x24);
  uVar20 = 0;
  if ((uVar22 != 0) &&
     (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x28) - 1U))) {
    uVar21 = 1;
    uVar19 = 1;
    if (1 < (int)uVar22) {
      uVar21 = uVar22;
    }
    do {
      uVar20 = uVar21;
      if (uVar21 == uVar19) break;
      uVar18 = uVar19 >> 9;
      uVar23 = uVar19 & 0x1ff;
      uVar20 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x28))[uVar18] +
                                         (ulonglong)uVar23 * 2) - 1U));
  }
LAB_14965fbab:
  if (uVar20 != uVar22) {
    cVar15 = FUN_146c13902(lVar16,uVar20);
    if (cVar15 != '\0') {
      iVar9 = *(int *)(param_1 + 0x108);
      *(uint *)(param_1 + 0x108) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x10c) < iVar9 + 1U) {
        FUN_1446f48e2(plVar2,iVar9);
      }
      *(uint *)(*plVar2 + (longlong)iVar9 * 4) = uVar20;
    }
    if ((lVar25 != 0) && (cVar15 = FUN_146c2e366(lVar25,uVar20), cVar15 != '\0')) {
      iVar9 = *(int *)(param_1 + 0x128);
      *(uint *)(param_1 + 0x128) = iVar9 + 1U;
      if (*(uint *)(param_1 + 300) < iVar9 + 1U) {
        FUN_1446f48e2(plVar4,iVar9);
      }
      *(uint *)(*plVar4 + (longlong)iVar9 * 4) = uVar20;
    }
    uVar21 = uVar20 + 1;
    if ((int)(uVar20 + 1) < (int)uVar22) {
      uVar21 = uVar22;
    }
    uVar19 = uVar20;
    do {
      uVar20 = uVar21;
      if (uVar21 - 1 == uVar19) break;
      uVar20 = uVar19 + 1;
      uVar19 = uVar20;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar16 + 0x28) +
                                           (ulonglong)(uVar20 >> 9) * 8) +
                                         (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
    goto LAB_14965fbab;
  }
  uVar22 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar20 = 0;
  if ((uVar22 != 0) &&
     (uVar20 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))) {
    uVar21 = 1;
    uVar19 = 1;
    if (1 < (int)uVar22) {
      uVar21 = uVar22;
    }
    do {
      uVar20 = uVar21;
      if (uVar21 == uVar19) break;
      uVar18 = uVar19 >> 9;
      uVar23 = uVar19 & 0x1ff;
      uVar20 = uVar19;
      uVar19 = uVar19 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar18] +
                                         (ulonglong)uVar23 * 2) - 1U));
  }
  do {
    if (uVar20 == uVar22) {
      return;
    }
    if ((lVar25 != 0) &&
       (*(int *)(*(longlong *)(*(longlong *)(lVar25 + 0x78) + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                (ulonglong)(uVar20 * 3 & 0x1ff) * 4) < 0)) {
      lVar24 = *(longlong *)(*(longlong *)(lVar16 + 0x180) + (ulonglong)(uVar20 >> 9) * 8);
      uVar17 = (ulonglong)(uVar20 & 0x1ff);
      uVar11 = *(undefined4 *)(lVar24 + uVar17 * 0xc);
      uVar12 = *(undefined4 *)(lVar24 + 4 + uVar17 * 0xc);
      uVar13 = *(undefined4 *)(lVar24 + 8 + uVar17 * 0xc);
      iVar9 = *(int *)(param_1 + 0x168);
      *(uint *)(param_1 + 0x168) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x16c) < iVar9 + 1U) {
        FUN_1446f48e2(plVar8,iVar9);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar9 * 4) = uVar11;
      iVar9 = *(int *)(param_1 + 0x168);
      *(uint *)(param_1 + 0x168) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x16c) < iVar9 + 1U) {
        FUN_1446f48e2(plVar8,iVar9);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar9 * 4) = uVar12;
      iVar9 = *(int *)(param_1 + 0x168);
      *(uint *)(param_1 + 0x168) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x16c) < iVar9 + 1U) {
        FUN_1446f48e2(plVar8,iVar9);
      }
      *(undefined4 *)(*plVar8 + (longlong)iVar9 * 4) = uVar13;
    }
    uVar21 = uVar20 + 1;
    if ((int)(uVar20 + 1) < (int)uVar22) {
      uVar21 = uVar22;
    }
    uVar19 = uVar20;
    do {
      uVar20 = uVar21;
      if (uVar21 - 1 == uVar19) break;
      uVar20 = uVar19 + 1;
      uVar19 = uVar20;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar16 + 0x148) +
                                           (ulonglong)(uVar20 >> 9) * 8) +
                                         (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14965fdc6 FUN_14965fdc6 body=148 status=ok
// SIG undefined FUN_14965fdc6(void)

undefined8 FUN_14965fdc6(undefined8 param_1)

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
  uVar1 = FUN_1459facaa();
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



// FUNCTION 14965fe5c FUN_14965fe5c body=240 status=ok
// SIG undefined FUN_14965fe5c(void)

void FUN_14965fe5c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  cVar1 = FUN_14851db82(*(undefined8 *)(param_1 + 0xc0));
  if (cVar1 == '\0') {
    uVar3 = FUN_14851bd54(*(undefined8 *)(param_1 + 0xd8));
    puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar5[1] = 0;
    *puVar5 = uVar3;
    puVar5[2] = 0xffffffff;
    FUN_148376a28(puVar5);
    lVar6 = *(longlong *)(param_1 + 0x228);
    *(undefined8 **)(param_1 + 0x228) = puVar5;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa8);
    uVar2 = FUN_14851bd54(*(undefined8 *)(param_1 + 0xd8));
    uVar3 = FUN_148376d96(uVar2,uVar3);
    uVar2 = FUN_14851bd54(*(undefined8 *)(param_1 + 0xd8));
    uVar4 = FUN_14001cc68(0x18,0x10);
    FUN_148376c7c(uVar4,uVar2,uVar3);
    lVar6 = *(longlong *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = uVar4;
  }
  if (lVar6 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x230) = 0;
  FUN_149660076(param_1);
  return;
}



// FUNCTION 14965ff4c FUN_14965ff4c body=148 status=ok
// SIG undefined FUN_14965ff4c(void)

undefined8 FUN_14965ff4c(undefined8 param_1)

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
  uVar1 = FUN_14599d3c6();
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



// FUNCTION 14965ffe1 FUN_14965ffe1 body=148 status=ok
// SIG undefined FUN_14965ffe1(void)

undefined8 FUN_14965ffe1(undefined8 param_1)

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
  uVar1 = FUN_145bae390();
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



// FUNCTION 149660076 FUN_149660076 body=4061 status=ok
// SIG undefined FUN_149660076(void)

void FUN_149660076(longlong *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 unaff_RBP;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  double *pdVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_248 [32];
  float *local_228;
  uint local_21c;
  longlong local_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  undefined4 local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  float local_1b8 [4];
  double local_1a8;
  float local_1a0 [6];
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [4];
  undefined4 local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  code *local_138 [2];
  undefined8 local_128;
  undefined **local_118;
  longlong *local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((param_1[0x19] != 0) && (param_1[0x1b] != 0)) {
    FUN_14851b88e(param_1[0x1b],*(undefined1 *)(param_1[0x17] + 0xa8));
    FUN_14965e9c6(param_1[0x19]);
    if (*(char *)(param_1[0x19] + 0xa8) == '\x06') {
      local_128 = 0;
      local_118 = &PTR_LAB_14bdacd90;
      local_138[0] = FUN_14456ddb0;
      local_110 = param_1;
      FUN_14851c734(param_1[0x1b],local_138,2);
    }
    else {
      FUN_14851c7d4(param_1[0x1b],2);
    }
    bVar15 = *(char *)(param_1[0x19] + 0xa8) - 1;
    if ((bVar15 < 8) &&
       (*(longlong *)(param_1[0x19] + *(longlong *)(&DAT_14bdae850 + (ulonglong)bVar15 * 8)) != 0))
    {
      FUN_14851b56e(param_1[0x1b]);
    }
    else {
      FUN_14851b580(param_1[0x1b]);
    }
    lVar14 = param_1[0x1c];
    dVar4 = *(double *)(lVar14 + 0x290);
    dVar5 = *(double *)(lVar14 + 0x288);
    fVar26 = *(float *)(param_1 + 0x1a);
    dVar6 = *(double *)(lVar14 + 0x280);
    lVar12 = FUN_14851bd54(param_1[0x1b]);
    lVar14 = param_1[0x1c];
    uVar7 = *(undefined1 *)(param_1[0x17] + 0xb3);
    uVar13 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar13 = FUN_1485583eb(uVar13,(CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar7) ^ 1) &
                                  0xffffffff);
    FUN_1484d0608(lVar14,uVar13);
    FUN_1484d04e2(param_1[0x1c]);
    lVar14 = param_1[0x17];
    if ((*(char *)(lVar14 + 0xa9) == '\x01') && (lVar11 = param_1[0x1f], (longlong)(int)lVar11 != 0)
       ) {
      lVar14 = param_1[0x1e];
      lVar22 = 0;
      do {
        uVar16 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(lVar12 + 0x1c0) +
                    (ulonglong)(*(uint *)(lVar14 + lVar22) >> 9) * 8) +
                  (ulonglong)((*(uint *)(lVar14 + lVar22) & 0x1ff) << 4));
        lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 9 & 0x7fffff) * 8);
        lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 0x29) * 8);
        uVar19 = uVar16 >> 0x20 & 0x1ff;
        local_1e8 = *(double *)(lVar9 + 0x10 + uVar19 * 0x18);
        pdVar25 = (double *)(lVar9 + uVar19 * 0x18);
        local_178[1] = *pdVar25;
        local_1f8 = *pdVar25;
        local_178[2] = pdVar25[1];
        uStack_1f0 = pdVar25[1];
        local_1a8 = *(double *)(lVar8 + 0x10 + (uVar16 & 0x1ff) * 0x18);
        pfVar1 = (float *)(lVar8 + (uVar16 & 0x1ff) * 0x18);
        local_1b8[0] = *pfVar1;
        local_1b8[1] = pfVar1[1];
        local_188 = *(undefined8 *)pfVar1;
        local_1b8[2] = pfVar1[2];
        local_1b8[3] = pfVar1[3];
        uStack_180 = *(undefined8 *)(pfVar1 + 2);
        local_158 = 0xfff00f0f;
        uStack_150 = 0x3e4ccccd;
        local_178[0] = local_1a8;
        local_178[3] = local_1e8;
        fStack_154 = fVar26 * 4.0;
        FUN_1484d0812(param_1[0x1c],&local_188);
        lVar22 = lVar22 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar22);
      lVar14 = param_1[0x17];
    }
    fVar26 = fVar26 + fVar26;
    if ((*(char *)(lVar14 + 0xac) == '\x01') && (lVar11 = param_1[0x23], (longlong)(int)lVar11 != 0)
       ) {
      lVar14 = param_1[0x22];
      lVar22 = 0;
      do {
        uVar16 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(lVar12 + 0x1c0) +
                    (ulonglong)(*(uint *)(lVar14 + lVar22) >> 9) * 8) +
                  (ulonglong)((*(uint *)(lVar14 + lVar22) & 0x1ff) << 4));
        lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 9 & 0x7fffff) * 8);
        lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 0x29) * 8);
        uVar19 = uVar16 >> 0x20 & 0x1ff;
        local_1e8 = *(double *)(lVar9 + 0x10 + uVar19 * 0x18);
        pdVar25 = (double *)(lVar9 + uVar19 * 0x18);
        local_178[1] = *pdVar25;
        local_1f8 = *pdVar25;
        local_178[2] = pdVar25[1];
        uStack_1f0 = pdVar25[1];
        local_1a8 = *(double *)(lVar8 + 0x10 + (uVar16 & 0x1ff) * 0x18);
        pfVar1 = (float *)(lVar8 + (uVar16 & 0x1ff) * 0x18);
        local_1b8[0] = *pfVar1;
        local_1b8[1] = pfVar1[1];
        local_188 = *(undefined8 *)pfVar1;
        local_1b8[2] = pfVar1[2];
        local_1b8[3] = pfVar1[3];
        uStack_180 = *(undefined8 *)(pfVar1 + 2);
        local_158 = 0xff0ff00f;
        uStack_150 = 0x3e99999a;
        local_178[0] = local_1a8;
        local_178[3] = local_1e8;
        fStack_154 = fVar26;
        FUN_1484d0812(param_1[0x1c],&local_188);
        lVar22 = lVar22 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar22);
      lVar14 = param_1[0x17];
    }
    if ((*(char *)(lVar14 + 0xae) == '\x01') && (lVar11 = param_1[0x2d], (longlong)(int)lVar11 != 0)
       ) {
      lVar14 = param_1[0x2c];
      lVar22 = 0;
      do {
        uVar16 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(lVar12 + 0x1c0) +
                    (ulonglong)(*(uint *)(lVar14 + lVar22) >> 9) * 8) +
                  (ulonglong)((*(uint *)(lVar14 + lVar22) & 0x1ff) << 4));
        lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 9 & 0x7fffff) * 8);
        lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 0x29) * 8);
        uVar19 = uVar16 >> 0x20 & 0x1ff;
        local_1e8 = *(double *)(lVar9 + 0x10 + uVar19 * 0x18);
        pdVar25 = (double *)(lVar9 + uVar19 * 0x18);
        local_178[1] = *pdVar25;
        local_1f8 = *pdVar25;
        local_178[2] = pdVar25[1];
        uStack_1f0 = pdVar25[1];
        local_1a8 = *(double *)(lVar8 + 0x10 + (uVar16 & 0x1ff) * 0x18);
        pfVar1 = (float *)(lVar8 + (uVar16 & 0x1ff) * 0x18);
        local_1b8[0] = *pfVar1;
        local_1b8[1] = pfVar1[1];
        local_188 = *(undefined8 *)pfVar1;
        local_1b8[2] = pfVar1[2];
        local_1b8[3] = pfVar1[3];
        uStack_180 = *(undefined8 *)(pfVar1 + 2);
        local_158 = 0xfff00f0f;
        uStack_150 = 0x3e99999a;
        local_178[0] = local_1a8;
        local_178[3] = local_1e8;
        fStack_154 = fVar26;
        FUN_1484d0812(param_1[0x1c],&local_188);
        lVar22 = lVar22 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar22);
      lVar14 = param_1[0x17];
    }
    if ((*(char *)(lVar14 + 0xaf) == '\x01') && (lVar11 = param_1[0x27], (longlong)(int)lVar11 != 0)
       ) {
      lVar14 = param_1[0x26];
      lVar22 = 0;
      do {
        uVar16 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(lVar12 + 0x1c0) +
                    (ulonglong)(*(uint *)(lVar14 + lVar22) >> 9) * 8) +
                  (ulonglong)((*(uint *)(lVar14 + lVar22) & 0x1ff) << 4));
        lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 9 & 0x7fffff) * 8);
        lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 0x29) * 8);
        uVar19 = uVar16 >> 0x20 & 0x1ff;
        local_1e8 = *(double *)(lVar9 + 0x10 + uVar19 * 0x18);
        pdVar25 = (double *)(lVar9 + uVar19 * 0x18);
        local_178[1] = *pdVar25;
        local_1f8 = *pdVar25;
        local_178[2] = pdVar25[1];
        uStack_1f0 = pdVar25[1];
        local_1a8 = *(double *)(lVar8 + 0x10 + (uVar16 & 0x1ff) * 0x18);
        pfVar1 = (float *)(lVar8 + (uVar16 & 0x1ff) * 0x18);
        local_1b8[0] = *pfVar1;
        local_1b8[1] = pfVar1[1];
        local_188 = *(undefined8 *)pfVar1;
        local_1b8[2] = pfVar1[2];
        local_1b8[3] = pfVar1[3];
        uStack_180 = *(undefined8 *)(pfVar1 + 2);
        local_158 = 0xff0ff0f0;
        uStack_150 = 0x3e99999a;
        local_178[0] = local_1a8;
        local_178[3] = local_1e8;
        fStack_154 = fVar26;
        FUN_1484d0812(param_1[0x1c],&local_188);
        lVar22 = lVar22 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar22);
      lVar14 = param_1[0x17];
    }
    if ((*(char *)(lVar14 + 0xb0) == '\x01') && (lVar11 = param_1[0x29], (longlong)(int)lVar11 != 0)
       ) {
      lVar14 = param_1[0x28];
      lVar22 = 0;
      do {
        uVar16 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(lVar12 + 0x1c0) +
                    (ulonglong)(*(uint *)(lVar14 + lVar22) >> 9) * 8) +
                  (ulonglong)((*(uint *)(lVar14 + lVar22) & 0x1ff) << 4));
        lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 9 & 0x7fffff) * 8);
        lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 0x29) * 8);
        uVar19 = uVar16 >> 0x20 & 0x1ff;
        local_1e8 = *(double *)(lVar9 + 0x10 + uVar19 * 0x18);
        pdVar25 = (double *)(lVar9 + uVar19 * 0x18);
        local_178[1] = *pdVar25;
        local_1f8 = *pdVar25;
        local_178[2] = pdVar25[1];
        uStack_1f0 = pdVar25[1];
        local_1a8 = *(double *)(lVar8 + 0x10 + (uVar16 & 0x1ff) * 0x18);
        pfVar1 = (float *)(lVar8 + (uVar16 & 0x1ff) * 0x18);
        local_1b8[0] = *pfVar1;
        local_1b8[1] = pfVar1[1];
        local_188 = *(undefined8 *)pfVar1;
        local_1b8[2] = pfVar1[2];
        local_1b8[3] = pfVar1[3];
        uStack_180 = *(undefined8 *)(pfVar1 + 2);
        local_158 = 0xff40f0f0;
        uStack_150 = 0x3e99999a;
        local_178[0] = local_1a8;
        local_178[3] = local_1e8;
        fStack_154 = fVar26;
        FUN_1484d0812(param_1[0x1c],&local_188);
        lVar22 = lVar22 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar22);
      lVar14 = param_1[0x17];
    }
    if ((*(char *)(lVar14 + 0xab) == '\x01') && (lVar11 = param_1[0x2b], (longlong)(int)lVar11 != 0)
       ) {
      lVar14 = param_1[0x2a];
      lVar22 = 0;
      do {
        uVar16 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(lVar12 + 0x1c0) +
                    (ulonglong)(*(uint *)(lVar14 + lVar22) >> 9) * 8) +
                  (ulonglong)((*(uint *)(lVar14 + lVar22) & 0x1ff) << 4));
        lVar8 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 9 & 0x7fffff) * 8);
        lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (uVar16 >> 0x29) * 8);
        uVar19 = uVar16 >> 0x20 & 0x1ff;
        local_1e8 = *(double *)(lVar9 + 0x10 + uVar19 * 0x18);
        pdVar25 = (double *)(lVar9 + uVar19 * 0x18);
        local_178[1] = *pdVar25;
        local_1f8 = *pdVar25;
        local_178[2] = pdVar25[1];
        uStack_1f0 = pdVar25[1];
        local_1a8 = *(double *)(lVar8 + 0x10 + (uVar16 & 0x1ff) * 0x18);
        pfVar1 = (float *)(lVar8 + (uVar16 & 0x1ff) * 0x18);
        local_1b8[0] = *pfVar1;
        local_1b8[1] = pfVar1[1];
        local_188 = *(undefined8 *)pfVar1;
        local_1b8[2] = pfVar1[2];
        local_1b8[3] = pfVar1[3];
        uStack_180 = *(undefined8 *)(pfVar1 + 2);
        local_158 = 0xfff00ff0;
        uStack_150 = 0x3e4ccccd;
        local_178[0] = local_1a8;
        local_178[3] = local_1e8;
        fStack_154 = fVar26;
        FUN_1484d0812(param_1[0x1c],&local_188);
        lVar22 = lVar22 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar22);
      lVar14 = param_1[0x17];
    }
    fVar27 = (float)(1.0 / dVar4);
    fVar28 = (float)(1.0 / dVar5);
    fVar29 = (float)(1.0 / dVar6);
    if ((((*(char *)(lVar14 + 0xb1) == '\x01') &&
         (lVar11 = *(longlong *)(lVar12 + 0x208), lVar11 != 0)) && (0 < *(int *)(lVar11 + 0x38))) &&
       (lVar11 = **(longlong **)(lVar11 + 0x30), lVar11 != 0)) {
      uVar20 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
      uVar23 = 0;
      if ((uVar20 != 0) &&
         (uVar23 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))) {
        uVar24 = 1;
        uVar17 = 1;
        if (1 < (int)uVar20) {
          uVar24 = uVar20;
        }
        do {
          uVar23 = uVar24;
          if (uVar24 == uVar17) break;
          uVar18 = uVar17 >> 9;
          uVar21 = uVar17 & 0x1ff;
          uVar23 = uVar17;
          uVar17 = uVar17 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x148))[uVar18] +
                                             (ulonglong)uVar21 * 2) - 1U));
      }
      if (uVar23 != uVar20) {
        fVar30 = *(float *)(lVar14 + 0xb4);
        do {
          if (-1 < *(int *)(*(longlong *)
                             (*(longlong *)(lVar11 + 0x78) + (ulonglong)(uVar23 * 3 >> 9) * 8) +
                           (ulonglong)(uVar23 * 3 & 0x1ff) * 4)) {
            lVar14 = *(longlong *)(lVar12 + 0x10);
            lVar22 = *(longlong *)(*(longlong *)(lVar12 + 0x130) + (ulonglong)(uVar23 >> 9) * 8);
            uVar16 = (ulonglong)(uVar23 & 0x1ff);
            uVar24 = *(uint *)(lVar22 + uVar16 * 0xc);
            lVar8 = *(longlong *)(lVar14 + (ulonglong)(uVar24 >> 9) * 8);
            uVar19 = (ulonglong)uVar24 & 0x1ff;
            local_178[0] = *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
            puVar2 = (undefined8 *)(lVar8 + uVar19 * 0x18);
            local_188 = *puVar2;
            uStack_180 = puVar2[1];
            uVar24 = *(uint *)(lVar22 + 4 + uVar16 * 0xc);
            lVar8 = *(longlong *)(lVar14 + (ulonglong)(uVar24 >> 9) * 8);
            uVar19 = (ulonglong)uVar24 & 0x1ff;
            local_178[3] = *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
            pdVar25 = (double *)(lVar8 + uVar19 * 0x18);
            local_178[1] = *pdVar25;
            local_178[2] = pdVar25[1];
            uVar24 = *(uint *)(lVar22 + 8 + uVar16 * 0xc);
            lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar24 >> 9) * 8);
            uVar16 = (ulonglong)uVar24 & 0x1ff;
            local_148 = *(undefined8 *)(lVar14 + 0x10 + uVar16 * 0x18);
            puVar3 = (undefined4 *)(lVar14 + uVar16 * 0x18);
            local_158 = *puVar3;
            fStack_154 = (float)puVar3[1];
            uStack_150 = puVar3[2];
            uStack_14c = puVar3[3];
            local_228 = local_1a0;
            FUN_146c3574a(lVar11,uVar23,local_1b8,local_1b8 + 3);
            lVar14 = 0;
            do {
              local_1d0 = (double)(*(float *)((longlong)local_1b8 + lVar14 + 8) * fVar30 * fVar27 +
                                  (float)*(double *)((longlong)local_178 + lVar14 * 2));
              local_1d8 = (double)(*(float *)((longlong)local_1b8 + lVar14 + 4) * fVar30 * fVar28 +
                                  (float)*(double *)((longlong)&uStack_180 + lVar14 * 2));
              local_1e0 = (double)(*(float *)((longlong)local_1b8 + lVar14) * fVar30 * fVar29 +
                                  (float)*(double *)((longlong)&local_188 + lVar14 * 2));
              local_1e8 = *(double *)((longlong)local_178 + lVar14 * 2);
              lVar22 = lVar14 * 2;
              local_1f8 = (double)CONCAT44(*(undefined4 *)((longlong)&local_188 + lVar22 + 4),
                                           *(undefined4 *)((longlong)&local_188 + lVar22));
              uStack_1f0 = (double)CONCAT44(*(undefined4 *)((longlong)&uStack_180 + lVar22 + 4),
                                            *(undefined4 *)((longlong)&uStack_180 + lVar22));
              local_1c8 = 0xff0f0ff0;
              local_1c0 = 0;
              local_1c4 = fVar26;
              FUN_1484d0812(param_1[0x1c],&local_1f8);
              lVar14 = lVar14 + 0xc;
            } while (lVar14 != 0x24);
          }
          uVar24 = uVar23 + 1;
          if ((int)(uVar23 + 1) < (int)uVar20) {
            uVar24 = uVar20;
          }
          do {
            uVar17 = uVar24;
            if (uVar24 - 1 == uVar23) break;
            uVar23 = uVar23 + 1;
            uVar17 = uVar23;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar12 + 0x148) +
                                                 (ulonglong)(uVar23 >> 9) * 8) +
                                               (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
          uVar23 = uVar17;
        } while (uVar23 != uVar20);
        lVar14 = param_1[0x17];
      }
    }
    if (*(char *)(lVar14 + 0xb2) == '\x01') {
      lVar14 = FUN_14851bd54(param_1[0x1b]);
      uVar23 = *(uint *)(*(longlong *)(lVar14 + 0x208) + 0x38);
      if (((0 < (int)uVar23) && (uVar23 != 1)) &&
         ((plVar10 = *(longlong **)(*(longlong *)(lVar14 + 0x208) + 0x30), *plVar10 != 0 &&
          (((2 < uVar23 && (plVar10[1] != 0)) && (plVar10[2] != 0)))))) {
        fVar30 = *(float *)(param_1[0x17] + 0xb8);
        uVar13 = FUN_14851bd54(param_1[0x1b]);
        FUN_146c3a27e(local_1b8,uVar13);
        uVar20 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
        uVar23 = 0;
        if ((uVar20 != 0) &&
           (uVar23 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))) {
          uVar24 = 1;
          uVar17 = 1;
          if (1 < (int)uVar20) {
            uVar24 = uVar20;
          }
          do {
            uVar23 = uVar24;
            if (uVar24 == uVar17) break;
            uVar18 = uVar17 >> 9;
            uVar21 = uVar17 & 0x1ff;
            uVar23 = uVar17;
            uVar17 = uVar17 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar12 + 0x148))[uVar18] +
                                               (ulonglong)uVar21 * 2) - 1U));
        }
        if (uVar23 != uVar20) {
          fVar27 = fVar27 * fVar30;
          fVar28 = fVar28 * fVar30;
          fVar29 = fVar29 * fVar30;
          local_21c = uVar20;
          local_218 = lVar12;
          do {
            lVar14 = *(longlong *)(local_218 + 0x10);
            lVar12 = *(longlong *)(*(longlong *)(local_218 + 0x130) + (ulonglong)(uVar23 >> 9) * 8);
            uVar16 = (ulonglong)(uVar23 & 0x1ff);
            uVar20 = *(uint *)(lVar12 + uVar16 * 0xc);
            lVar11 = *(longlong *)(lVar14 + (ulonglong)(uVar20 >> 9) * 8);
            uVar19 = (ulonglong)uVar20 & 0x1ff;
            local_178[0] = *(double *)(lVar11 + 0x10 + uVar19 * 0x18);
            puVar2 = (undefined8 *)(lVar11 + uVar19 * 0x18);
            local_188 = *puVar2;
            uStack_180 = puVar2[1];
            uVar20 = *(uint *)(lVar12 + 4 + uVar16 * 0xc);
            lVar11 = *(longlong *)(lVar14 + (ulonglong)(uVar20 >> 9) * 8);
            uVar19 = (ulonglong)uVar20 & 0x1ff;
            local_178[3] = *(double *)(lVar11 + 0x10 + uVar19 * 0x18);
            pdVar25 = (double *)(lVar11 + uVar19 * 0x18);
            local_178[1] = *pdVar25;
            local_178[2] = pdVar25[1];
            uVar20 = *(uint *)(lVar12 + 8 + uVar16 * 0xc);
            lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar20 >> 9) * 8);
            uVar16 = (ulonglong)uVar20 & 0x1ff;
            local_148 = *(undefined8 *)(lVar14 + 0x10 + uVar16 * 0x18);
            puVar3 = (undefined4 *)(lVar14 + uVar16 * 0x18);
            local_158 = *puVar3;
            fStack_154 = (float)puVar3[1];
            uStack_150 = puVar3[2];
            uStack_14c = puVar3[3];
            pdVar25 = local_178;
            uVar16 = 0;
            do {
              fVar32 = (float)*pdVar25;
              fVar31 = (float)pdVar25[-1];
              fVar30 = (float)pdVar25[-2];
              local_228 = &local_210;
              FUN_146c3a6c8(local_1b8,uVar23,uVar16 & 0xffffffff,&local_204);
              local_1d0 = (double)(local_1fc * fVar27 + fVar32);
              local_1d8 = (double)(local_200 * fVar28 + fVar31);
              local_1e0 = (double)(local_204 * fVar29 + fVar30);
              local_1c8 = 0xfff00f0f;
              local_1c0 = 0x3eb33333;
              local_1f8 = (double)fVar30;
              uStack_1f0 = (double)fVar31;
              local_1e8 = (double)fVar32;
              local_1c4 = fVar26;
              FUN_1484d0812(param_1[0x1c],&local_1f8);
              local_1d0 = (double)(local_208 * fVar27 + fVar32);
              local_1d8 = (double)(local_20c * fVar28 + fVar31);
              local_1e0 = (double)(local_210 * fVar29 + fVar30);
              local_1c8 = 0xff0ff00f;
              local_1c0 = 0x3eb33333;
              local_1f8 = (double)fVar30;
              uStack_1f0 = (double)fVar31;
              local_1e8 = (double)fVar32;
              local_1c4 = fVar26;
              FUN_1484d0812(param_1[0x1c],&local_1f8);
              uVar16 = uVar16 + 1;
              pdVar25 = pdVar25 + 3;
            } while (uVar16 != 3);
            uVar20 = uVar23 + 1;
            if ((int)(uVar23 + 1) < (int)local_21c) {
              uVar20 = local_21c;
            }
            do {
              uVar24 = uVar20;
              if (uVar20 - 1 == uVar23) break;
              uVar23 = uVar23 + 1;
              uVar24 = uVar23;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(local_218 + 0x148) +
                                                   (ulonglong)(uVar23 >> 9) * 8) +
                                                 (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
            uVar23 = uVar24;
          } while (uVar23 != local_21c);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149661054 FUN_149661054 body=118 status=ok
// SIG undefined FUN_149661054(void)

longlong FUN_149661054(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x220);
  if (lVar3 == 0) {
    uVar2 = FUN_14851bd54(*(undefined8 *)(param_1 + 0xd8));
    lVar3 = FUN_14001cc68(0xd0,0x10);
    FUN_146ba21d6(lVar3,uVar2,1);
    puVar1 = *(undefined8 **)(param_1 + 0x220);
    *(longlong *)(param_1 + 0x220) = lVar3;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      lVar3 = *(longlong *)(param_1 + 0x220);
    }
  }
  return lVar3;
}



// FUNCTION 1496610ca FUN_1496610ca body=225 status=ok
// SIG undefined FUN_1496610ca(void)

void FUN_1496610ca(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14850635b(*(undefined8 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_14851bab8(*(longlong *)(param_1 + 0xd8),0);
    FUN_14851b2ea(*(undefined8 *)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0xb8);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496611ac FUN_1496611ac body=618 status=ok
// SIG undefined FUN_1496611ac(void)

void FUN_1496611ac(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined1 local_1c8 [96];
  undefined1 local_168 [36];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar6 = FUN_14851bd54(*(undefined8 *)(param_1 + 0xd8));
  FUN_14851b8ac(*(undefined8 *)(param_1 + 0xd8),local_1c8);
  if ((0 < *(int *)(param_1 + 0x108)) && (*(char *)(*(longlong *)(param_1 + 0xb8) + 0xaa) == '\x01')
     ) {
    FUN_141300fc0(local_168);
    local_144 = DAT_14c759020;
    local_140 = DAT_14c758c9c;
    local_13c = DAT_14c758c9c;
    local_138 = 0x41c800003f800000;
    FUN_14845339e(local_168,param_2);
    FUN_148453434(local_168,local_1c8);
    iVar2 = *(int *)(param_1 + 0x108);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x100);
      lVar8 = 0;
      do {
        uVar3 = *(uint *)(lVar4 + lVar8);
        lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
        uVar7 = (ulonglong)(uVar3 & 0x1ff);
        local_1d8 = *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18);
        puVar1 = (undefined4 *)(lVar5 + uVar7 * 0x18);
        local_1e8 = *puVar1;
        uStack_1e4 = puVar1[1];
        uStack_1e0 = puVar1[2];
        uStack_1dc = puVar1[3];
        FUN_148526e7a(local_168,&local_1e8);
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar2 * 4 != lVar8);
    }
    FUN_14845342a(local_168);
    FUN_14008cd94(local_168);
  }
  if ((0 < *(int *)(param_1 + 0x128)) && (*(char *)(*(longlong *)(param_1 + 0xb8) + 0xad) == '\x01')
     ) {
    FUN_141300fc0(local_168);
    local_144 = DAT_14c758c9c;
    local_140 = DAT_14c759020;
    local_13c = DAT_14c758c9c;
    local_138 = 0x414000003f800000;
    FUN_14845339e(local_168,param_2);
    FUN_148453434(local_168,local_1c8);
    iVar2 = *(int *)(param_1 + 0x128);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      lVar8 = 0;
      do {
        uVar3 = *(uint *)(lVar4 + lVar8);
        lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
        uVar7 = (ulonglong)(uVar3 & 0x1ff);
        local_1d8 = *(undefined8 *)(lVar5 + 0x10 + uVar7 * 0x18);
        puVar1 = (undefined4 *)(lVar5 + uVar7 * 0x18);
        local_1e8 = *puVar1;
        uStack_1e4 = puVar1[1];
        uStack_1e0 = puVar1[2];
        uStack_1dc = puVar1[3];
        FUN_148526e7a(local_168,&local_1e8);
        lVar8 = lVar8 + 4;
      } while ((longlong)iVar2 * 4 != lVar8);
    }
    FUN_14845342a(local_168);
    FUN_14008cd94(local_168);
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149661418 FUN_149661418 body=2965 status=ok
// SIG undefined FUN_149661418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149661418(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_328 [44];
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined8 ***local_2d8;
  undefined8 ***pppuStack_2d0;
  undefined8 ***local_2c8;
  undefined1 *local_2c0;
  undefined8 ****local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 *local_298;
  undefined8 ****local_290;
  undefined8 ****local_288;
  double dStack_280;
  double local_278;
  undefined1 *local_268;
  undefined8 ****local_260;
  undefined8 ****local_258;
  double local_250;
  double local_248;
  undefined8 ****local_240;
  double dStack_238;
  double local_230;
  undefined8 local_228;
  undefined1 local_220 [24];
  undefined1 *local_208;
  undefined8 ****local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined4 *local_190;
  undefined4 local_188;
  longlong *local_180;
  undefined4 local_174;
  longlong local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (*(char *)(param_2 + 0xa0) == '\0') {
    local_2fc = *(undefined4 *)(param_2 + 0xb0);
  }
  else {
    local_2fc = 0x3f800000;
  }
  uVar7 = FUN_14375bb6e();
  (**(code **)(*param_3 + 0x18))(param_3,&local_148);
  lVar8 = (**(code **)(*param_3 + 0x10))(param_3);
  local_148 = local_148 - *(double *)(param_1 + 0x1e0);
  dStack_140 = dStack_140 - *(double *)(param_1 + 0x1e8);
  local_138 = local_138 - *(double *)(param_1 + 0x1f0);
  dVar6 = *(double *)(param_1 + 0x1c0);
  dVar25 = *(double *)(param_1 + 0x1d0) * -1.0;
  dStack_2e0 = *(double *)(param_1 + 0x1d8) * 1.0;
  local_2e8 = -dVar6;
  dVar26 = -*(double *)(param_1 + 0x1c8);
  dVar2 = dStack_140 * local_2e8 - local_148 * dVar26;
  dVar3 = local_138 * dVar26 - dStack_140 * dVar25;
  dVar28 = local_148 * dVar25 - local_138 * local_2e8;
  dVar3 = dVar3 + dVar3;
  dVar28 = dVar28 + dVar28;
  dVar2 = dVar2 + dVar2;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x200);
  auVar30 = divpd(_DAT_149934d80,auVar1);
  local_2f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar30._0_8_) *
              ((dVar2 * dVar26 - dVar28 * dVar25) + dStack_2e0 * dVar3 + local_148);
  uStack_2f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar30._8_8_) *
               (dVar6 * dVar2 + dVar25 * dVar3 + dStack_2e0 * dVar28 + dStack_140);
  dVar5 = local_120 * 0.0 + local_118 * -0.0;
  dVar5 = dVar5 + dVar5;
  dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x210))) &
                  (ulonglong)(1.0 / *(double *)(param_1 + 0x210))) *
          (dVar2 * dStack_2e0 + local_138 + (dVar28 * local_2e8 - dVar3 * dVar26));
  dVar3 = local_118 - local_128 * 0.0;
  dVar29 = local_128 * 0.0 - local_120;
  dVar29 = dVar29 + dVar29;
  dVar3 = dVar3 + dVar3;
  dVar28 = (local_128 * dVar3 - dVar5 * local_120) + local_110 * dVar29 + 0.0;
  dVar4 = (local_118 * dVar5 - dVar29 * local_128) + local_110 * dVar3 + 0.0;
  dVar5 = (local_120 * dVar29 - dVar3 * local_118) + dVar5 * local_110 + 1.0;
  dVar3 = dVar4 * local_2e8 - dVar26 * dVar5;
  dVar29 = dVar28 * dVar26 - dVar25 * dVar4;
  dVar24 = dVar5 * dVar25 - dVar28 * local_2e8;
  dVar29 = dVar29 + dVar29;
  dVar24 = dVar24 + dVar24;
  dVar3 = dVar3 + dVar3;
  dVar27 = dStack_2e0 * dVar29;
  dVar28 = dVar3 * dStack_2e0 + dVar28 + (dVar24 * local_2e8 - dVar29 * dVar26);
  dVar4 = dVar6 * dVar3 + dVar25 * dVar29 + dStack_2e0 * dVar24 + dVar4;
  lVar9 = FUN_14851bd54(*(undefined8 *)(param_1 + 0xd8));
  local_1f0 = FUN_149661054(param_1);
  iVar10 = *(byte *)(*(longlong *)(param_1 + 0xb8) + 0xbc) - 1;
  switch(iVar10) {
  case 0:
    iVar19 = *(int *)(lVar9 + 0x50);
    break;
  case 1:
    iVar19 = *(int *)(lVar9 + 0x170);
    uVar14 = *(undefined8 *)(lVar8 + 0x4e8);
    uVar18 = *(undefined8 *)(lVar8 + 0x4f0);
    goto joined_r0x00014966187a;
  case 2:
    uVar14 = *(undefined8 *)(lVar8 + 0x4e8);
    uVar18 = *(undefined8 *)(lVar8 + 0x4f0);
    goto LAB_14966187c;
  case 3:
    iVar19 = *(int *)(lVar9 + 0x200);
    break;
  default:
    uVar14 = *(undefined8 *)(lVar8 + 0x4e8);
    uVar18 = *(undefined8 *)(lVar8 + 0x4f0);
    uVar20 = 0xffffff9c;
    goto LAB_14966187f;
  }
  uVar14 = *(undefined8 *)(lVar8 + 0x4e8);
  uVar18 = *(undefined8 *)(lVar8 + 0x4f0);
joined_r0x00014966187a:
  uVar20 = 0xffffff9c;
  if (iVar19 < 500) {
LAB_14966187c:
    uVar20 = 0;
  }
LAB_14966187f:
  iVar19 = (int)uVar20;
  local_150 = (double)((int)((ulonglong)uVar18 >> 0x20) + iVar19);
  local_158 = (double)((int)uVar18 + iVar19);
  local_160 = (double)((int)((ulonglong)uVar14 >> 0x20) - iVar19);
  local_168 = (double)((int)uVar14 - iVar19);
  local_180 = &local_170;
  local_190 = &local_174;
  local_174 = 0;
  local_1e8 = local_2fc;
  local_1d0 = (undefined4)local_2f8;
  uStack_1cc = local_2f8._4_4_;
  uStack_1c8 = (undefined4)uStack_2f0;
  uStack_1c4 = uStack_2f0._4_4_;
  local_1b8._8_4_ = SUB84(dVar4,0);
  local_1b8._0_8_ = (dVar3 * dVar26 - dVar24 * dVar25) + dVar27 + dVar5;
  local_1b8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_188 = 500;
  local_1f8 = lVar9;
  local_1e0 = uVar7;
  local_1d8 = param_1;
  local_1c0 = dVar2;
  local_1a8 = dVar28;
  local_1a0 = lVar8;
  local_198 = param_2;
  local_170 = lVar8;
  switch(iVar10) {
  case 0:
    local_228 = 0x7a6900007a69;
    uVar21 = *(int *)(lVar9 + 0x20) * 0x200 + *(int *)(lVar9 + 0x24);
    uVar15 = 0;
    if ((uVar21 != 0) &&
       (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x28) - 1U))) {
      uVar16 = 1;
      uVar11 = 1;
      if (1 < (int)uVar21) {
        uVar16 = uVar21;
      }
      do {
        uVar15 = uVar16;
        if (uVar16 == uVar11) break;
        uVar13 = uVar11 >> 9;
        uVar17 = uVar11 & 0x1ff;
        uVar15 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x28))[uVar13] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
    if (uVar15 != uVar21) {
      do {
        lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
        uVar12 = (ulonglong)(uVar15 & 0x1ff);
        dVar2 = *(double *)(lVar8 + uVar12 * 0x18);
        dVar3 = *(double *)(lVar8 + 8 + uVar12 * 0x18);
        dVar28 = *(double *)(lVar8 + 0x10 + uVar12 * 0x18);
        FUN_1477ee866(&local_228,&local_258);
        local_278 = local_248 * 0.0001 + dVar28;
        dStack_280 = local_250 * 0.0001 + dVar3;
        local_288 = (undefined8 ****)((double)local_258 * 0.0001 + dVar2);
        local_258 = &local_240;
        local_268 = &LAB_14456dd3c;
        local_260 = &local_258;
        local_240 = local_288;
        dStack_238 = dStack_280;
        local_230 = local_278;
        FUN_144565510(&local_1f8,uVar15,&local_288,&local_268);
        uVar16 = uVar15 + 1;
        if ((int)(uVar15 + 1) < (int)uVar21) {
          uVar16 = uVar21;
        }
        do {
          uVar11 = uVar16;
          if (uVar16 - 1 == uVar15) break;
          uVar15 = uVar15 + 1;
          uVar11 = uVar15;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar9 + 0x28) +
                                               (ulonglong)(uVar15 >> 9) * 8) +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        uVar15 = uVar11;
      } while (uVar15 != uVar21);
    }
    break;
  case 1:
    uVar21 = *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144);
    uVar15 = 0;
    if ((uVar21 != 0) &&
       (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x148) - 1U))) {
      uVar16 = 1;
      uVar11 = 1;
      if (1 < (int)uVar21) {
        uVar16 = uVar21;
      }
      do {
        uVar15 = uVar16;
        if (uVar16 == uVar11) break;
        uVar13 = uVar11 >> 9;
        uVar17 = uVar11 & 0x1ff;
        uVar15 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x148))[uVar13] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
    if (uVar15 != uVar21) {
      do {
        local_258 = (undefined8 ****)CONCAT44(local_258._4_4_,uVar15);
        local_240 = &local_258;
        local_208 = &LAB_14456dd30;
        local_200 = &local_240;
        FUN_146c149e0(lVar9,local_220,uVar15);
        FUN_144565510(&local_1f8,uVar15,local_220,&local_208);
        uVar16 = uVar15 + 1;
        if ((int)(uVar15 + 1) < (int)uVar21) {
          uVar16 = uVar21;
        }
        do {
          uVar11 = uVar16;
          if (uVar16 - 1 == uVar15) break;
          uVar15 = uVar15 + 1;
          uVar11 = uVar15;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar9 + 0x148) +
                                               (ulonglong)(uVar15 >> 9) * 8) +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        uVar15 = uVar11;
      } while (uVar15 != uVar21);
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x230) == '\0') {
      FUN_1482aa35c(param_1 + 0x238,lVar9,*(undefined8 *)(param_1 + 0x228),
                    CONCAT71((int7)((ulonglong)uVar20 >> 8),1));
      *(undefined1 *)(param_1 + 0x230) = 1;
    }
    if ((longlong)*(int *)(param_1 + 0x248) != 0) {
      pppppuVar22 = *(undefined8 ******)(param_1 + 0x240);
      pppppuVar23 = pppppuVar22 + (longlong)*(int *)(param_1 + 0x248) * 0xd;
      do {
        local_2c0 = &LAB_14456dd9c;
        local_2d8 = pppppuVar22[7];
        pppuStack_2d0 = pppppuVar22[8];
        local_2c8 = pppppuVar22[9];
        local_2b8 = &local_240;
        local_240 = pppppuVar22;
        FUN_144565510(&local_1f8,*(undefined4 *)pppppuVar22,&local_2d8,&local_2c0);
        pppppuVar22 = pppppuVar22 + 0xd;
      } while (pppppuVar22 != pppppuVar23);
    }
    break;
  case 3:
    local_228 = 0x7a6900007a69;
    uVar21 = *(int *)(lVar9 + 0x1d0) * 0x200 + *(int *)(lVar9 + 0x1d4);
    uVar15 = 0;
    if ((uVar21 != 0) &&
       (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x1d8) - 1U))) {
      uVar16 = 1;
      uVar11 = 1;
      if (1 < (int)uVar21) {
        uVar16 = uVar21;
      }
      do {
        uVar15 = uVar16;
        if (uVar16 == uVar11) break;
        uVar13 = uVar11 >> 9;
        uVar17 = uVar11 & 0x1ff;
        uVar15 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar9 + 0x1d8))[uVar13] +
                                           (ulonglong)uVar17 * 2) - 1U));
    }
    if (uVar15 != uVar21) {
      do {
        FUN_146c13ee2(lVar9,&local_240,uVar15,0x3fe0000000000000);
        FUN_1477ee866(&local_228,&local_258);
        local_2a0 = local_248 * 0.0001 + local_230;
        local_2a8 = local_250 * 0.0001 + dStack_238;
        local_2b0 = (double)local_258 * 0.0001 + (double)local_240;
        local_240 = *(undefined8 *****)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x1c0) + (ulonglong)(uVar15 >> 9) * 8) + 8
                     + (ulonglong)((uVar15 & 0x1ff) << 4));
        local_298 = &LAB_14456dd8a;
        local_290 = &local_258;
        local_258 = &local_240;
        FUN_144565510(&local_1f8,uVar15,&local_2b0,&local_298);
        uVar16 = uVar15 + 1;
        if ((int)(uVar15 + 1) < (int)uVar21) {
          uVar16 = uVar21;
        }
        do {
          uVar11 = uVar16;
          if (uVar16 - 1 == uVar15) break;
          uVar15 = uVar15 + 1;
          uVar11 = uVar15;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar9 + 0x1d8) +
                                               (ulonglong)(uVar15 >> 9) * 8) +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        uVar15 = uVar11;
      } while (uVar15 != uVar21);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149661fae FUN_149661fae body=42 status=ok
// SIG undefined FUN_149661fae(void)

void FUN_149661fae(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  (**(code **)(*plVar1 + 0x348))(plVar1);
  FUN_149660076(param_1);
  return;
}



// FUNCTION 149661fe0 FUN_149661fe0 body=830 status=ok
// SIG undefined FUN_149661fe0(void)

void FUN_149661fe0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_158 [32];
  wchar_t **local_138;
  longlong **local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 **local_118;
  undefined8 local_110;
  longlong local_108 [2];
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_78 = 0;
  local_68 = &PTR_LAB_14bdacdb0;
  local_88[0] = &LAB_14456de4c;
  local_d8 = L"IncreaseLineWidthTooltip";
  local_d0 = 0x18;
  local_110 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_ec,&local_d8);
  local_d8 = L"UMeshInspectorTool";
  local_d0 = 0x12;
  FUN_1446e940c(local_f0,&local_d8);
  FUN_140208bae(local_e8,local_f0,local_ec,L"Increase line width of rendering");
  local_d8 = L"IncreaseLineWidth";
  local_d0 = 0x11;
  FUN_1446e940c(local_f4,&local_d8);
  local_d8 = L"UMeshInspectorTool";
  local_d0 = 0x12;
  FUN_1446e940c(local_f8,&local_d8);
  FUN_140208bae(&local_d8,local_f8,local_f4,L"Increase Line Width");
  FUN_140056680(local_108,L"IncreaseLineWidth");
  local_120 = &DAT_14c9654f0;
  local_128 = 4;
  local_138 = &local_d8;
  local_130 = local_e8;
  local_118 = local_88;
  FUN_148450124(local_110,param_1,0x2711,local_108);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdacdd0;
  local_c8[0] = &LAB_14456dea2;
  local_d8 = L"DecreaseLineWidthTooltip";
  local_d0 = 0x18;
  local_a0 = param_1;
  FUN_1446e940c(local_ec,&local_d8);
  local_d8 = L"UMeshInspectorTool";
  local_d0 = 0x12;
  FUN_1446e940c(local_f0,&local_d8);
  FUN_140208bae(local_e8,local_f0,local_ec,L"Decrease line width of rendering");
  local_d8 = L"DecreaseLineWidth";
  local_d0 = 0x11;
  FUN_1446e940c(local_f4,&local_d8);
  local_d8 = L"UMeshInspectorTool";
  local_d0 = 0x12;
  FUN_1446e940c(local_f8,&local_d8);
  FUN_140208bae(&local_d8,local_f8,local_f4,L"Decrease Line Width");
  FUN_140056680(local_108,L"DecreaseLineWidth");
  local_120 = &DAT_14c9654f0;
  local_128 = 0;
  local_138 = &local_d8;
  local_130 = local_e8;
  local_118 = local_c8;
  FUN_148450124(local_110,param_1,0x2712,local_108);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149662320 FUN_149662320 body=54 status=ok
// SIG undefined FUN_149662320(void)

void FUN_149662320(longlong *param_1)

{
  longlong *plVar1;
  
  *(float *)(param_1 + 0x1a) = *(float *)(param_1 + 0x1a) * 1.25;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
                    /* WARNING: Could not recover jumptable at 0x00014966234f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x348))(plVar1);
  return;
}



// FUNCTION 149662356 FUN_149662356 body=54 status=ok
// SIG undefined FUN_149662356(void)

void FUN_149662356(longlong *param_1)

{
  longlong *plVar1;
  
  *(float *)(param_1 + 0x1a) = *(float *)(param_1 + 0x1a) * 0.8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
                    /* WARNING: Could not recover jumptable at 0x000149662385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x348))(plVar1);
  return;
}



// FUNCTION 149662398 FUN_149662398 body=84 status=ok
// SIG undefined FUN_149662398(void)

void FUN_149662398(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496623e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,3,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 1496623ec FUN_1496623ec body=84 status=ok
// SIG undefined FUN_1496623ec(void)

void FUN_1496623ec(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149662436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,2,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 149662440 FUN_149662440 body=84 status=ok
// SIG undefined FUN_149662440(void)

void FUN_149662440(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966248a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,7,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 149662494 FUN_149662494 body=84 status=ok
// SIG undefined FUN_149662494(void)

void FUN_149662494(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496624de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,5,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 1496624e8 FUN_1496624e8 body=84 status=ok
// SIG undefined FUN_1496624e8(void)

void FUN_1496624e8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149662532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,4,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 14966253c FUN_14966253c body=84 status=ok
// SIG undefined FUN_14966253c(void)

void FUN_14966253c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149662586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,9,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 149662590 FUN_149662590 body=84 status=ok
// SIG undefined FUN_149662590(void)

void FUN_149662590(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496625da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,8,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 1496625e4 FUN_1496625e4 body=84 status=ok
// SIG undefined FUN_1496625e4(void)

void FUN_1496625e4(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966262e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,10,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 149662638 FUN_149662638 body=84 status=ok
// SIG undefined FUN_149662638(void)

void FUN_149662638(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149662682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,1,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 14966268c FUN_14966268c body=84 status=ok
// SIG undefined FUN_14966268c(void)

void FUN_14966268c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496626d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,6,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 1496626e4 FUN_1496626e4 body=84 status=ok
// SIG undefined FUN_1496626e4(void)

void FUN_1496626e4(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966272e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,0x10,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 149662738 FUN_149662738 body=84 status=ok
// SIG undefined FUN_149662738(void)

void FUN_149662738(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149662782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,0xb,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 14966278c FUN_14966278c body=84 status=ok
// SIG undefined FUN_14966278c(void)

void FUN_14966278c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496627d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,0xc,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 1496627e0 FUN_1496627e0 body=84 status=ok
// SIG undefined FUN_1496627e0(void)

void FUN_1496627e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966282a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,0xe,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 149662834 FUN_149662834 body=84 status=ok
// SIG undefined FUN_149662834(void)

void FUN_149662834(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014966287e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,0xf,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 149662888 FUN_149662888 body=84 status=ok
// SIG undefined FUN_149662888(void)

void FUN_149662888(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496628d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,0xd,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 1496628dc FUN_1496628dc body=84 status=ok
// SIG undefined FUN_1496628dc(void)

void FUN_1496628dc(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149662926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x478))(plVar2,0x11,*(code **)(*plVar2 + 0x478));
    return;
  }
  return;
}



// FUNCTION 14966294c FUN_14966294c body=46 status=ok
// SIG undefined FUN_14966294c(void)

longlong * FUN_14966294c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14966297a(param_2[1]);
  (**(code **)(*plVar1 + 0x468))(plVar1,*param_2);
  return plVar1;
}



// FUNCTION 14966297a FUN_14966297a body=148 status=ok
// SIG undefined FUN_14966297a(void)

undefined8 FUN_14966297a(undefined8 param_1)

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
  uVar1 = FUN_145bad232();
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



// FUNCTION 149662a10 FUN_149662a10 body=250 status=ok
// SIG undefined FUN_149662a10(void)

void FUN_149662a10(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148441e9a();
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_145bad232();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_78 = &DAT_100000004;
      local_50 = 0;
      local_48 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_44 = 0xffffffff00000080;
      local_3c = 0;
      local_30 = 0;
      local_28 = 0;
      uVar3 = (**(code **)(*param_2 + 0x380))(param_2);
      cVar1 = FUN_1485504c8(param_3,uVar3,&local_78);
      if (cVar1 != '\0') {
        (**(code **)(*param_2 + 0x470))(param_2,&local_78);
      }
      local_28 = 0;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(&local_70);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149662b14 FUN_149662b14 body=2956 status=ok
// SIG undefined FUN_149662b14(void)

void FUN_149662b14(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  byte bVar9;
  uint uVar10;
  undefined1 auStack_208 [36];
  undefined1 local_1e4 [4];
  code *local_1e0;
  undefined8 **local_1d8;
  undefined8 *local_1d0;
  code *local_1c8;
  undefined8 *local_1c0;
  undefined1 *local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined ***local_198;
  int local_190;
  uint local_18c;
  undefined **local_188;
  longlong *local_180;
  undefined1 *local_148;
  undefined8 local_138;
  undefined **local_128;
  longlong *local_120;
  undefined1 *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong *local_e0;
  code *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  longlong *local_a0;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_14962cee2();
  *(undefined1 *)(param_1[0x20] + 0xbd) = 0;
  *(undefined1 *)(param_1[0x20] + 0xbc) = 0;
  plVar3 = (longlong *)param_1[0x20];
  FUN_140056680(&local_1a8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_1a8);
  if (local_1a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)FUN_1496636a1(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x5e] = (longlong)plVar3;
  FUN_140056680(&local_1a8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_1a8);
  if (local_1a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x5e]);
  plVar3 = (longlong *)FUN_148f7334e(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[100] = (longlong)plVar3;
  FUN_140056680(&local_1a8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_1a8);
  if (local_1a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_1b8 = &LAB_14456def8;
  local_1b0 = &local_1a8;
  local_1a8 = (code *)param_1;
  (**(code **)(*(longlong *)param_1[0x54] + 0x2a0))();
  local_78 = 0;
  local_68 = &PTR_LAB_14bdacea0;
  local_88 = FUN_14456df08;
  local_60 = param_1;
  FUN_1484c9a28(param_1[100] + 0x28,param_1[100] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[100]);
  FUN_149663736(param_1);
  plVar3 = (longlong *)FUN_148f732b9(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[99] = (longlong)plVar3;
  FUN_140056680(&local_1a8,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_1a8);
  if (local_1a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_1c8 = FUN_14456df70;
  local_1c0 = &local_1a8;
  local_1a8 = (code *)param_1;
  (**(code **)(*(longlong *)param_1[0x54] + 0x2a0))();
  FUN_148f723a4(param_1[99],1);
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdacec0;
  local_c8 = FUN_14456dfa8;
  local_a0 = param_1;
  FUN_1484c5b30(param_1[99] + 0x28,param_1[99] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[99]);
  FUN_1496638ce(param_1);
  (**(code **)(*param_1 + 0x488))(param_1);
  lVar4 = FUN_149663a04(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  param_1[0x5f] = lVar4;
  FUN_14485c47a(lVar4 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x5f]);
  lVar4 = (**(code **)(*param_1 + 0x480))(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar4);
  }
  param_1[0x60] = lVar4;
  (**(code **)(*param_1 + 0x308))(param_1,lVar4);
  FUN_14851b65c(param_1[0x54],1);
  FUN_14851b89a(param_1[0x54],0);
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  pppuVar8 = (undefined ***)&local_1a8;
  local_1a8 = (code *)0x3dcccccd3f666666;
  uStack_1a0 = 0x3f8000003dcccccd;
  lVar4 = FUN_148557ea9(pppuVar8,uVar5,0);
  if (lVar4 != 0) {
    FUN_14851b58e(param_1[0x54],lVar4);
  }
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bdacee0;
  local_108 = &LAB_14456e010;
  local_e0 = param_1;
  FUN_14851b5ae(param_1[0x54]);
  (**(code **)(*(longlong *)param_1[0x54] + 0x2a8))((longlong *)param_1[0x54],1);
  lVar4 = FUN_14851bd54(param_1[0x54]);
  iVar2 = *(int *)(lVar4 + 0x20) * 0x200;
  local_190 = iVar2 + *(int *)(lVar4 + 0x24);
  local_198 = (undefined ***)0x0;
  local_18c = 0x80;
  uVar10 = iVar2 + *(int *)(lVar4 + 0x24) + 0x1f;
  if (uVar10 < 0x20) {
    if (param_1 + 0xd8 != &local_1a8) {
LAB_149662f4f:
      *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_1a8;
      *(undefined4 *)((longlong)param_1 + 0x6c4) = local_1a8._4_4_;
      *(undefined4 *)(param_1 + 0xd9) = (undefined4)uStack_1a0;
      *(undefined4 *)((longlong)param_1 + 0x6cc) = uStack_1a0._4_4_;
      pppuVar8 = (undefined ***)(undefined8 *)0x0;
LAB_149662f59:
      if (param_1[0xda] != 0) {
        FUN_1400020a8();
        pppuVar8 = local_198;
      }
      param_1[0xda] = (longlong)pppuVar8;
      *(int *)(param_1 + 0xdb) = local_190;
      *(uint *)((longlong)param_1 + 0x6dc) = local_18c;
    }
  }
  else {
    if (uVar10 < 0xa0) {
LAB_149663583:
      uVar10 = uVar10 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_1a8,0,uVar10 >> 5,4);
      local_18c = uVar10 & 0xffffffe0;
      pppuVar8 = local_198;
      if (local_198 == (undefined ***)0x0) {
        pppuVar8 = (undefined ***)&local_1a8;
      }
      if (uVar10 < 0x120) goto LAB_149663583;
      uVar10 = (uVar10 >> 5) << 2;
    }
    memset(pppuVar8,0,(ulonglong)uVar10);
    iVar2 = local_190 + 0x1f;
    if (-1 < local_190) {
      iVar2 = local_190;
    }
    if (local_190 % 0x20 != 0) {
      pppuVar8 = local_198;
      if (local_198 == (undefined ***)0x0) {
        pppuVar8 = (undefined ***)&local_1a8;
      }
      bVar9 = -(char)(local_190 % 0x20);
      *(uint *)((longlong)pppuVar8 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)pppuVar8 + (longlong)(iVar2 >> 5) * 4) << (bVar9 & 0x1f)) >>
           (bVar9 & 0x1f);
    }
    if (param_1 + 0xd8 != &local_1a8) {
      pppuVar8 = local_198;
      if (local_198 == (undefined ***)0x0) goto LAB_149662f4f;
      goto LAB_149662f59;
    }
    if (local_198 != (undefined ***)0x0) {
      FUN_1400020a8(local_198);
    }
  }
  iVar2 = *(int *)(lVar4 + 0x140) * 0x200;
  local_190 = iVar2 + *(int *)(lVar4 + 0x144);
  local_198 = (undefined ***)0x0;
  local_18c = 0x80;
  uVar10 = iVar2 + *(int *)(lVar4 + 0x144) + 0x1f;
  if (uVar10 < 0x20) {
    if (param_1 + 0xdc == &local_1a8) goto LAB_14966301e;
LAB_149662fda:
    *(undefined4 *)(param_1 + 0xdc) = (undefined4)local_1a8;
    *(undefined4 *)((longlong)param_1 + 0x6e4) = local_1a8._4_4_;
    *(undefined4 *)(param_1 + 0xdd) = (undefined4)uStack_1a0;
    *(undefined4 *)((longlong)param_1 + 0x6ec) = uStack_1a0._4_4_;
    pppuVar8 = (undefined ***)(undefined8 *)0x0;
  }
  else {
    if (uVar10 < 0xa0) {
      pppuVar8 = (undefined ***)&local_1a8;
LAB_14966360b:
      uVar10 = uVar10 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(&local_1a8,0,uVar10 >> 5,4);
      local_18c = uVar10 & 0xffffffe0;
      pppuVar8 = local_198;
      if (local_198 == (undefined ***)0x0) {
        pppuVar8 = (undefined ***)&local_1a8;
      }
      if (uVar10 < 0x120) goto LAB_14966360b;
      uVar10 = (uVar10 >> 5) << 2;
    }
    memset(pppuVar8,0,(ulonglong)uVar10);
    iVar2 = local_190 + 0x1f;
    if (-1 < local_190) {
      iVar2 = local_190;
    }
    if (local_190 % 0x20 != 0) {
      pppuVar8 = local_198;
      if (local_198 == (undefined ***)0x0) {
        pppuVar8 = (undefined ***)&local_1a8;
      }
      bVar9 = -(char)(local_190 % 0x20);
      *(uint *)((longlong)pppuVar8 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)pppuVar8 + (longlong)(iVar2 >> 5) * 4) << (bVar9 & 0x1f)) >>
           (bVar9 & 0x1f);
    }
    if (param_1 + 0xdc == &local_1a8) {
      if (local_198 != (undefined ***)0x0) {
        FUN_1400020a8(local_198);
      }
      goto LAB_14966301e;
    }
    pppuVar8 = local_198;
    if (local_198 == (undefined ***)0x0) goto LAB_149662fda;
  }
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
    pppuVar8 = local_198;
  }
  param_1[0xde] = (longlong)pppuVar8;
  local_198 = (undefined ***)0x0;
  *(int *)(param_1 + 0xdf) = local_190;
  *(uint *)((longlong)param_1 + 0x6fc) = local_18c;
LAB_14966301e:
  lVar6 = FUN_149663a99(param_1);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  param_1[0x70] = lVar6;
  local_1a8 = (code *)0x0;
  uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
  FUN_1446efa72(&local_1a8,0,2,0x10);
  puVar1 = (undefined8 *)local_1a8;
  uStack_1a0._0_4_ = 2;
  *(undefined ***)local_1a8 = &PTR_LAB_14bdacf70;
  uVar5 = FUN_144a3f946();
  puVar1[2] = uVar5;
  *puVar1 = &PTR_FUN_14bdacf00;
  puVar1[3] = param_1;
  FUN_149684254(lVar6 + 0x28,&local_1d0,&local_1a8);
  FUN_1449db362(&local_1a8);
  uVar5 = FUN_14851c72a(param_1[0x54]);
  local_1a8 = (code *)0x0;
  uStack_1a0._0_4_ = 0;
  FUN_1446efa72(&local_1a8,0,2,0x10);
  puVar1 = (undefined8 *)local_1a8;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,2);
  *(undefined ***)local_1a8 = &PTR_LAB_149e020b0;
  uVar7 = FUN_144a3f946();
  puVar1[2] = uVar7;
  *puVar1 = &PTR_FUN_14bdacfe0;
  puVar1[3] = param_1;
  FUN_1448b6402(uVar5,&local_1d0,&local_1a8);
  FUN_1449db362(&local_1a8);
  local_138 = 0;
  local_128 = &PTR_LAB_14bdad0b0;
  local_148 = &LAB_14456e3ce;
  local_120 = param_1;
  FUN_149663b2e(param_1[0x5e] + 0x28,param_1[0x5e] + 0xb4);
  *(bool *)((longlong)param_1 + 0x701) = *(int *)(param_1[0x5e] + 0xb4) != 0;
  lVar6 = FUN_1484e487a(param_1);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  param_1[0x62] = lVar6;
  FUN_14851b8ac(param_1[0x54],&local_1a8);
  uVar5 = (**(code **)(*(longlong *)param_1[0x54] + 0x180))();
  FUN_1484e0ce2(lVar6,uVar5,&local_1a8);
  lVar6 = param_1[0x62];
  if (*(longlong *)(lVar6 + 0x120) != 0) {
    *(undefined1 *)(*(longlong *)(lVar6 + 0x120) + 0xa9) = 1;
    *(undefined1 *)(*(longlong *)(param_1[0x62] + 0x120) + 0xab) = 0;
    *(undefined1 *)(*(longlong *)(param_1[0x62] + 0x120) + 0xac) = 0;
    *(undefined1 *)(*(longlong *)(param_1[0x62] + 0x120) + 0xae) = 0;
    plVar3 = *(longlong **)(param_1[0x62] + 0x120);
    FUN_140056680(&local_1a8,L"MeshSelection");
    (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_1a8);
    if (local_1a8 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(param_1[0x62] + 0x120));
    lVar6 = param_1[0x62];
  }
  local_198 = (undefined ***)0x0;
  local_188 = &PTR_LAB_14bdad0d0;
  local_1a8 = FUN_14456e428;
  local_180 = param_1;
  FUN_1484de4b4(lVar6,&local_1a8);
  if (local_1a8 != (code *)0x0) {
    pppuVar8 = local_198;
    if (local_198 == (undefined ***)0x0) {
      pppuVar8 = &local_188;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  lVar6 = FUN_149626df2(param_1);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  param_1[0x61] = lVar6;
  (**(code **)(*param_1 + 0x308))(param_1,lVar6);
  if ((int)param_1[0x67] != *(int *)((longlong)param_1 + 0x364)) {
    local_1a8 = (code *)0x0;
    uStack_1a0 = 0;
    local_1e0 = FUN_14456e4aa;
    local_1d8 = &local_1d0;
    local_1d0 = &local_1a8;
    FUN_148385b4a(param_1 + 0x65,lVar4,&local_1e0,0);
    FUN_148452282(param_1[0x70],1,&local_1a8);
    FUN_149663c04(param_1);
    if (local_1a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1484400a8(param_1);
  FUN_149663e3a(param_1,1);
  local_1a8 = (code *)0x14ba1690c;
  uStack_1a0._0_4_ = 8;
  FUN_1446e940c(&local_1d0,&local_1a8);
  local_1a8 = (code *)0x14bdae78a;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x12);
  FUN_1446e940c(local_1e4,&local_1a8);
  FUN_140208bae(&local_1a8,local_1e4,&local_1d0,L"Select Triangles");
  (**(code **)(*param_1 + 0x370))(param_1,&local_1a8);
  if (local_1a8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_1a8 + 0x10))();
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_1a8 = (code *)0x14bda0e6e;
  uStack_1a0._0_4_ = 0x18;
  FUN_1446e940c(&local_1d0,&local_1a8);
  local_1a8 = (code *)0x14bdae78a;
  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x12);
  FUN_1446e940c(local_1e4,&local_1a8);
  FUN_140208bae(&local_1a8,local_1e4,&local_1d0,
                L"This Tool allows you to modify the mesh based on a triangle selection. [Q] cyles through Selection Mode. [A] cycles through Face Color modes. [ and ] change brush size, < and > grow/shrink selection."
               );
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_1a8,2);
  if (local_1a8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_1a8 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496636a1 FUN_1496636a1 body=148 status=ok
// SIG undefined FUN_1496636a1(void)

undefined8 FUN_1496636a1(undefined8 param_1)

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
  uVar1 = FUN_1459fad96();
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



// FUNCTION 149663736 FUN_149663736 body=408 status=ok
// SIG undefined FUN_149663736(void)

void FUN_149663736(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar4 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x2a0));
  cVar3 = FUN_14851db82(*(undefined8 *)(param_1 + 800));
  if (cVar3 == '\0') {
    plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14ba272d0;
    plVar7 = plVar6 + 2;
    plVar6[3] = 0;
    plVar6[2] = lVar4;
    plVar6[4] = 0xffffffff;
    FUN_148376a28(plVar7);
  }
  else {
    uVar5 = FUN_148376d96(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 800) + 0xa8));
    plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14ba272d0;
    plVar7 = plVar6 + 2;
    FUN_148376c7c(plVar7,lVar4,uVar5);
  }
  if (plVar6 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x728) = plVar7;
    plVar7 = *(longlong **)(param_1 + 0x730);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x730) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x728) = plVar7;
    plVar7 = *(longlong **)(param_1 + 0x730);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_14966380a;
    }
    *(longlong **)(param_1 + 0x730) = plVar6;
    if (plVar7 == (longlong *)0x0) goto LAB_14966380a;
  }
  LOCK();
  plVar1 = plVar7 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
LAB_14966380a:
  LOCK();
  plVar7 = plVar6 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1496638ce FUN_1496638ce body=309 status=ok
// SIG undefined FUN_1496638ce(void)

void FUN_1496638ce(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x2a0));
  local_78 = 0;
  uStack_70 = 0;
  local_80 = lVar4;
  FUN_144a1a59e((longlong *)(param_1 + 0x708),
                *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144),1);
  uVar3 = FUN_148f724e8(*(undefined8 *)(param_1 + 0x318),1);
  local_88 = 0;
  if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(*(longlong *)(lVar4 + 0x208) + 0x28))) {
    local_88 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x208) + 0x20) + (ulonglong)uVar3 * 8);
  }
  local_40 = &local_88;
  local_58 = 0;
  local_48 = &PTR_LAB_14bdad1f0;
  local_68 = &LAB_14456eaac;
  FUN_142984024();
  if (0 < (longlong)(int)uStack_70) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(local_78 + lVar4 * 8);
      lVar5 = (longlong)(int)plVar1[1];
      if (lVar5 != 0) {
        lVar2 = *plVar1;
        lVar6 = 0;
        do {
          *(int *)(*(longlong *)(param_1 + 0x708) + (longlong)*(int *)(lVar2 + lVar6) * 4) =
               (int)lVar4;
          lVar6 = lVar6 + 4;
        } while (lVar5 * 4 != lVar6);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != (int)uStack_70);
  }
  FUN_146be9400(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149663a04 FUN_149663a04 body=148 status=ok
// SIG undefined FUN_149663a04(void)

undefined8 FUN_149663a04(undefined8 param_1)

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
  uVar1 = FUN_14599d4b2();
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



// FUNCTION 149663a99 FUN_149663a99 body=148 status=ok
// SIG undefined FUN_149663a99(void)

undefined8 FUN_149663a99(undefined8 param_1)

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
  uVar1 = FUN_1459ee554();
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



// FUNCTION 149663b2e FUN_149663b2e body=212 status=ok
// SIG undefined FUN_149663b2e(void)

void FUN_149663b2e(longlong *param_1,undefined8 param_2,longlong *param_3)

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
  FUN_14968434a(uVar2,param_2,local_68);
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



// FUNCTION 149663c04 FUN_149663c04 body=564 status=ok
// SIG undefined FUN_149663c04(void)

void FUN_149663c04(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [4];
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1 + 0x6e0;
  iVar2 = *(int *)(param_1 + 0x6f8);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_9c = 0;
  if (0 < iVar2) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x6f0);
      if (*(longlong *)(param_1 + 0x6f0) == 0) {
        lVar9 = lVar3;
      }
      uVar4 = local_9c + 0x1f;
      if (-1 < (int)local_9c) {
        uVar4 = local_9c;
      }
      if ((*(uint *)(lVar9 + (longlong)((int)uVar4 >> 5) * 4) >> (local_9c & 0x1f) & 1) != 0) {
        FUN_1447cbafe(&local_98,local_a0,&local_9c,0);
      }
      local_9c = local_9c + 1;
    } while ((int)local_9c < iVar2);
  }
  FUN_1447c6044(param_1 + 0x6c0,0,*(undefined4 *)(param_1 + 0x6d8),0);
  FUN_1447c6044(lVar3,0,*(undefined4 *)(param_1 + 0x6f8),0);
  if (*(int *)(param_1 + 0x3ac) == 0) {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x380) + 0x48);
    if (lVar3 != 0) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x380) + 0x40);
      lVar7 = 0;
      do {
        iVar2 = *(int *)(lVar9 + lVar7);
        lVar6 = *(longlong *)(param_1 + 0x6d0);
        if (*(longlong *)(param_1 + 0x6d0) == 0) {
          lVar6 = param_1 + 0x6c0;
        }
        iVar8 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar8 = iVar2;
        }
        puVar1 = (uint *)(lVar6 + (longlong)(iVar8 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
        lVar7 = lVar7 + 4;
      } while (lVar3 * 4 != lVar7);
    }
  }
  else if (*(int *)(param_1 + 0x3ac) == 1) {
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x380) + 0x68);
    if (lVar9 != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x380) + 0x60);
      lVar6 = 0;
      do {
        local_9c = *(uint *)(lVar7 + lVar6);
        lVar5 = *(longlong *)(param_1 + 0x6f0);
        if (*(longlong *)(param_1 + 0x6f0) == 0) {
          lVar5 = lVar3;
        }
        uVar4 = local_9c + 0x1f;
        if (-1 < (int)local_9c) {
          uVar4 = local_9c;
        }
        puVar1 = (uint *)(lVar5 + (longlong)((int)uVar4 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)local_9c & 0x1f);
        FUN_1447cbafe(&local_98,local_a0,&local_9c,0);
        lVar6 = lVar6 + 4;
      } while (lVar9 * 4 != lVar6);
    }
    FUN_14851c880(*(undefined8 *)(param_1 + 0x2a0),&local_98,0x10);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149663e3a FUN_149663e3a body=375 status=ok
// SIG undefined FUN_149663e3a(void)

void FUN_149663e3a(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined1 *local_78;
  longlong **local_70;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar3 = true;
  if (*(int *)(param_1[0x5e] + 0xa8) != 8) {
    bVar3 = *(int *)(param_1[0x5e] + 0xb4) == 3;
  }
  (**(code **)(*param_1 + 0x328))(param_1,param_1[99],bVar3);
  if ((char)param_1[0xe0] == '\x01') {
    local_70 = &local_80;
    local_78 = &LAB_14456ea32;
    local_80 = param_1;
    (**(code **)(*(longlong *)param_1[0x54] + 0x2a0))();
    FUN_1484dea34(param_1[0x62]);
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (param_2 != '\0') {
    FUN_14851bc40(param_1[0x54],1,0xf,1);
  }
  if (*(char *)((longlong)param_1 + 0x701) == '\x01') {
    lVar1 = param_1[0x54];
    if (*(int *)(param_1[0x5e] + 0xb4) == 0) {
      FUN_14851b580(lVar1);
      FUN_14851c7d4(param_1[0x54],2);
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      uVar2 = FUN_14855788a(uVar2,0);
      FUN_14851b56e(lVar1,uVar2);
      local_58 = 0;
      local_48 = &PTR_LAB_14bdad1d0;
      local_68[0] = FUN_14456ea42;
      local_40 = param_1;
      FUN_14851c734(param_1[0x54],local_68,2);
    }
    *(undefined1 *)((longlong)param_1 + 0x701) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149663fb2 FUN_149663fb2 body=42 status=ok
// SIG undefined FUN_149663fb2(void)

longlong FUN_149663fb2(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_149663fdc();
  FUN_14485c47a(lVar1 + 0xa8,param_1);
  return lVar1;
}



// FUNCTION 149663fdc FUN_149663fdc body=148 status=ok
// SIG undefined FUN_149663fdc(void)

undefined8 FUN_149663fdc(undefined8 param_1)

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
  uVar1 = FUN_145a978e8();
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



// FUNCTION 149664072 FUN_149664072 body=895 status=ok
// SIG undefined FUN_149664072(void)

void FUN_149664072(longlong *param_1,char param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined1 local_29c [4];
  ulonglong local_298 [5];
  void *local_270;
  uint local_268;
  undefined4 local_264;
  wchar_t *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  int local_224;
  longlong local_218;
  undefined4 local_210;
  int local_108;
  int local_104;
  int local_78;
  int local_74;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_2 == '\x02') {
    lVar3 = param_1[0x72];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = param_1[0x71];
      lVar6 = 0;
      do {
        FUN_140aeefbc(*(undefined8 *)(lVar2 + lVar6),0,1);
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
    }
  }
  else if (param_2 == '\x01') {
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_260 = L"MeshSelectionToolTransactionName";
    local_258._0_4_ = 0x20;
    FUN_1446e940c(local_298,&local_260);
    local_260 = L"UMeshSelectionTool";
    local_258 = CONCAT44(local_258._4_4_,0x12);
    FUN_1446e940c(&local_270,&local_260);
    FUN_140208bae(&local_260,&local_270,local_298,L"Edit Mesh");
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,&local_260);
    if (local_260 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_260 + 0x10))();
    }
    puVar4 = (undefined8 *)FUN_148452262(param_1[0x70],1);
    local_270 = (void *)0x0;
    local_268 = *(uint *)(puVar4 + 1);
    lVar3 = (longlong)(int)local_268;
    pvVar1 = (void *)*puVar4;
    if (lVar3 == 0) {
      local_264 = 0;
    }
    else {
      FUN_144a06ca8(&local_270,local_268,0);
      memcpy(local_270,pvVar1,lVar3 << 2);
    }
    if ((char)param_1[0xe7] == '\x01') {
      uVar5 = FUN_14851bd54(param_1[0x54]);
      FUN_146bff712(&local_260,uVar5);
      if (((local_22c._4_4_ * 0x200 + local_224 != 0) || (local_78 * 0x200 + local_74 != 0)) ||
         (local_108 * 0x200 + local_104 != 0)) {
        local_298[2] = 0;
        local_298[3] = 0;
        local_298[0] = 0;
        local_298[1] = 0;
        FUN_146c09afc(&local_260);
        if ((longlong)(int)local_268 != 0) {
          lVar3 = 0;
          do {
            *(undefined4 *)((longlong)local_270 + lVar3) =
                 *(undefined4 *)(local_298[2] + (longlong)*(int *)((longlong)local_270 + lVar3) * 4)
            ;
            lVar3 = lVar3 + 4;
          } while ((longlong)(int)local_268 * 4 != lVar3);
        }
        if (local_298[2] != 0) {
          FUN_1400020a8();
        }
        if (local_298[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_298[0] = 0x1000000010101;
      local_2a8 = 0;
      FUN_148506f34(param_1[0x14],&local_260,1);
      FUN_141082778(&local_260);
    }
    pvVar1 = local_270;
    if (0 < (int)local_268 && *(int *)((longlong)param_1 + 0x3ac) == 1) {
      uVar7 = (ulonglong)local_268;
      local_260 = (wchar_t *)&DAT_100000004;
      lVar3 = 0;
      local_238 = 0;
      local_230 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_22c = 0xffffffff00000080;
      local_224 = 0;
      local_218 = 0;
      local_210 = 0;
      do {
        local_298[0] = (ulonglong)*(uint *)((longlong)pvVar1 + lVar3);
        FUN_1483b983a(&local_258,local_29c,local_298,0);
        lVar3 = lVar3 + 4;
      } while (uVar7 << 2 != lVar3);
      uVar5 = (**(code **)(*param_1 + 0x380))(param_1);
      FUN_14855093c(param_1,uVar5,&local_260);
      local_210 = 0;
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(&local_258);
    }
    lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
    if (local_270 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496643f2 FUN_1496643f2 body=389 status=ok
// SIG undefined FUN_1496643f2(void)

void FUN_1496643f2(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)param_1[0x5e];
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[0x20];
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[99];
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[100];
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  lVar2 = param_1[0x62];
  plVar1 = *(longlong **)(lVar2 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    FUN_140056680(local_38,L"MeshSelection");
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    lVar2 = param_1[0x62];
  }
  FUN_1484e0e5e(lVar2);
  (**(code **)(*param_1 + 0x4a0))(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149664592 FUN_149664592 body=2758 status=ok
// SIG undefined FUN_149664592(void)

void FUN_149664592(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_2a8 [32];
  wchar_t **local_288;
  longlong **local_280;
  undefined1 local_278;
  undefined8 *local_270;
  undefined1 **local_268;
  undefined8 local_258;
  undefined8 local_250;
  longlong local_248 [2];
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  undefined1 local_230 [4];
  undefined1 local_22c [4];
  longlong *local_228 [2];
  wchar_t *local_218;
  undefined4 local_210;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_148440616();
  local_78 = 0;
  local_68 = &PTR_LAB_14bdad0f0;
  local_88[0] = &LAB_14456e4de;
  local_218 = L"TriSelectIncreaseSizeTooltip";
  local_210 = 0x1c;
  local_60 = param_1;
  FUN_1446e940c(local_22c,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_230,&local_218);
  FUN_140208bae(local_228,local_230,local_22c,L"Increase Brush Size");
  local_218 = L"TriSelectIncreaseSize";
  local_210 = 0x15;
  FUN_1446e940c(local_234,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_238,&local_218);
  FUN_140208bae(&local_218,local_238,local_234,L"Increase Size");
  FUN_140056680(local_248,L"TriSelectIncreaseSize");
  local_270 = &DAT_14c966ef8;
  local_278 = 0;
  local_288 = &local_218;
  local_280 = local_228;
  local_268 = local_88;
  local_258 = param_1;
  local_250 = param_2;
  FUN_148450124(param_2,param_1,0x2742,local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_218 + 0x10))();
  }
  if (local_228[0] != (longlong *)0x0) {
    (**(code **)(*local_228[0] + 0x10))();
  }
  uVar1 = local_258;
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdad110;
  local_a0 = local_258;
  local_c8[0] = &LAB_14456e534;
  local_218 = L"TriSelectDecreaseSizeTooltip";
  local_210 = 0x1c;
  FUN_1446e940c(local_22c,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_230,&local_218);
  FUN_140208bae(local_228,local_230,local_22c,L"Decrease Brush Size");
  local_218 = L"TriSelectDecreaseSize";
  local_210 = 0x15;
  FUN_1446e940c(local_234,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_238,&local_218);
  FUN_140208bae(&local_218,local_238,local_234,L"Decrease Size");
  FUN_140056680(local_248,L"TriSelectDecreaseSize");
  local_270 = &DAT_14c965130;
  local_278 = 0;
  local_288 = &local_218;
  local_280 = local_228;
  local_268 = local_c8;
  FUN_148450124(local_250,uVar1,0x2743,local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_218 + 0x10))();
  }
  if (local_228[0] != (longlong *)0x0) {
    (**(code **)(*local_228[0] + 0x10))();
  }
  uVar1 = local_258;
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bdad130;
  local_e0 = local_258;
  local_108[0] = &LAB_14456e58a;
  local_218 = L"MeshSelectionToolDeleteTooltip";
  local_210 = 0x1e;
  FUN_1446e940c(local_22c,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_230,&local_218);
  FUN_140208bae(local_228,local_230,local_22c,L"Delete Selected Elements");
  local_218 = L"MeshSelectionToolDelete";
  local_210 = 0x17;
  FUN_1446e940c(local_234,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_238,&local_218);
  FUN_140208bae(&local_218,local_238,local_234,L"Delete");
  FUN_140056680(local_248,L"MeshSelectionToolDelete");
  local_270 = &DAT_14c966f58;
  local_278 = 0;
  local_288 = &local_218;
  local_280 = local_228;
  local_268 = local_108;
  FUN_148450124(local_250,uVar1,0x2711,local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_218 + 0x10))();
  }
  if (local_228[0] != (longlong *)0x0) {
    (**(code **)(*local_228[0] + 0x10))();
  }
  uVar1 = local_258;
  local_138 = 0;
  local_128 = &PTR_LAB_14bdad150;
  local_120 = local_258;
  local_148[0] = &LAB_14456e5da;
  local_218 = L"ShrinkSelectionTooltip";
  local_210 = 0x16;
  FUN_1446e940c(local_22c,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_230,&local_218);
  FUN_140208bae(local_228,local_230,local_22c,L"Shrink selection");
  local_218 = L"ShrinkSelection";
  local_210 = 0xf;
  FUN_1446e940c(local_234,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_238,&local_218);
  FUN_140208bae(&local_218,local_238,local_234,L"Shrink Selection");
  FUN_140056680(local_248,L"ShrinkSelection");
  local_270 = &DAT_14c965508;
  local_278 = 4;
  local_288 = &local_218;
  local_280 = local_228;
  local_268 = local_148;
  FUN_148450124(local_250,uVar1,6,local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_218 + 0x10))();
  }
  if (local_228[0] != (longlong *)0x0) {
    (**(code **)(*local_228[0] + 0x10))();
  }
  uVar1 = local_258;
  local_178 = 0;
  local_168 = &PTR_LAB_14bdad170;
  local_160 = local_258;
  local_188[0] = &LAB_14456e62c;
  local_218 = L"GrowSelectionTooltip";
  local_210 = 0x14;
  FUN_1446e940c(local_22c,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_230,&local_218);
  FUN_140208bae(local_228,local_230,local_22c,L"Grow selection");
  local_218 = L"GrowSelection";
  local_210 = 0xd;
  FUN_1446e940c(local_234,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_238,&local_218);
  FUN_140208bae(&local_218,local_238,local_234,L"Grow Selection");
  FUN_140056680(local_248,L"GrowSelection");
  local_270 = &DAT_14c965550;
  local_278 = 4;
  local_288 = &local_218;
  local_280 = local_228;
  local_268 = local_188;
  FUN_148450124(local_250,uVar1,5,local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_218 + 0x10))();
  }
  if (local_228[0] != (longlong *)0x0) {
    (**(code **)(*local_228[0] + 0x10))();
  }
  uVar1 = local_258;
  local_1b8 = 0;
  local_1a8 = &PTR_LAB_14bdad190;
  local_1a0 = local_258;
  local_1c8[0] = &LAB_14456e67e;
  local_218 = L"OptimizeSelectionTooltip";
  local_210 = 0x18;
  FUN_1446e940c(local_22c,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_230,&local_218);
  FUN_140208bae(local_228,local_230,local_22c,L"Optimize selection");
  local_218 = L"OptimizeSelection";
  local_210 = 0x11;
  FUN_1446e940c(local_234,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_238,&local_218);
  FUN_140208bae(&local_218,local_238,local_234,L"Optimize Selection");
  FUN_140056680(local_248,L"OptimizeSelection");
  local_270 = &DAT_14c9650d0;
  local_278 = 0;
  local_288 = &local_218;
  local_280 = local_228;
  local_268 = local_1c8;
  FUN_148450124(local_250,uVar1,10,local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_218 + 0x10))();
  }
  if (local_228[0] != (longlong *)0x0) {
    (**(code **)(*local_228[0] + 0x10))();
  }
  uVar1 = local_258;
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_14bdad1b0;
  local_1e0 = local_258;
  local_208[0] = &LAB_14456e6ce;
  local_218 = L"SmoothBoundaryTooltip";
  local_210 = 0x15;
  FUN_1446e940c(local_22c,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_230,&local_218);
  FUN_140208bae(local_228,local_230,local_22c,L"Smooth Boundary");
  local_218 = L"SmoothBoundary";
  local_210 = 0xe;
  FUN_1446e940c(local_234,&local_218);
  local_218 = L"UMeshSelectionTool";
  local_210 = 0x12;
  FUN_1446e940c(local_238,&local_218);
  FUN_140208bae(&local_218,local_238,local_234,L"Smooth Boundary");
  FUN_140056680(local_248,L"SmoothBoundary");
  local_270 = &DAT_14c964fc8;
  local_278 = 0;
  local_288 = &local_218;
  local_280 = local_228;
  local_268 = local_208;
  FUN_148450124(local_250,uVar1,0x11,local_248);
  if (local_248[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_218 + 0x10))();
  }
  if (local_228[0] != (longlong *)0x0) {
    (**(code **)(*local_228[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14966505a FUN_14966505a body=697 status=ok
// SIG undefined FUN_14966505a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14966505a(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auStack_1a8 [32];
  double *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_110 [8];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar4 = FUN_14962d3a8();
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (*(char *)(param_1[0x5e] + 0xb0) == '\0') {
      uVar6 = FUN_14851bd54(param_1[0x54]);
      local_188 = &local_108;
      FUN_146c1477c(uVar6,*param_3,&local_f0,local_110);
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x378))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_d8);
      FUN_1485063a5(&local_178,param_1[0x14]);
      local_d8 = local_d8 - local_158;
      dStack_d0 = dStack_d0 - dStack_150;
      local_c8 = local_c8 - local_148;
      dVar1 = -local_178;
      dStack_170 = -dStack_170;
      local_168 = local_168 * -1.0;
      dStack_160 = dStack_160 * 1.0;
      dVar9 = local_d8 * local_168 - dVar1 * local_c8;
      dVar2 = dStack_d0 * dVar1 - local_d8 * dStack_170;
      dVar3 = local_c8 * dStack_170 - dStack_d0 * local_168;
      dVar3 = dVar3 + dVar3;
      dVar9 = dVar9 + dVar9;
      dVar2 = dVar2 + dVar2;
      auVar8 = divpd(_DAT_149934d80,local_138);
      bVar5 = (local_f8 -
              (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_128)) &
                      (ulonglong)(1.0 / local_128)) *
              (dStack_160 * dVar2 + local_c8 + (dVar9 * dVar1 - dVar3 * dStack_170))) * local_e0 +
              (local_108 -
              (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_138._0_8_)) & auVar8._0_8_) *
              ((dVar2 * dStack_170 - dVar9 * local_168) + dStack_160 * dVar3 + local_d8)) * local_f0
              + (local_100 -
                (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_138._8_8_)) & auVar8._8_8_) *
                (local_178 * dVar2 + local_168 * dVar3 + dStack_160 * dVar9 + dStack_d0)) * local_e8
              <= 0.0;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149665314 FUN_149665314 body=376 status=ok
// SIG undefined FUN_149665314(void)

void FUN_149665314(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [16];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148440f04();
  if (*(int *)((longlong)param_1 + 0x6bc) < 0) {
    *(undefined4 *)(param_1 + 0xd7) = 0;
    FUN_14481578e(param_1 + 0xd6,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd7) = 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x3c8))(param_1);
  *(char *)(param_1 + 0x76) = (char)uVar1;
  lVar2 = FUN_14001cc68(8,0x10);
  FUN_1484cbd7e(lVar2,*(undefined4 *)((longlong)param_1 + 0x3ac),uVar1 ^ 1);
  param_1[0xe3] = lVar2;
  memcpy(param_1 + 0x77,param_1 + 0x22,0x140);
  memcpy(param_1 + 0x9f,param_1 + 0x22,0x140);
  *(undefined1 *)(param_1 + 199) = 1;
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"MeshSelectionChange";
  local_38 = 0x13;
  FUN_1446e940c(local_54,&local_40);
  local_40 = L"UMeshSelectionTool";
  local_38 = 0x12;
  FUN_1446e940c(local_58,&local_40);
  FUN_140208bae(local_50,local_58,local_54,L"Mesh Selection");
  FUN_148558a3c(param_1 + 0x5c,local_50,uVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


