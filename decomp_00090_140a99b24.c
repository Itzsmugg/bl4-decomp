// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a99b24 FUN_140a99b24 body=477 status=ok
// SIG undefined FUN_140a99b24(void)

void FUN_140a99b24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 == 0) goto LAB_140a99bac;
  if (DAT_14cbadd90 == 0) {
    local_50 = &local_38;
    local_38 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1459f2e4c;
    local_58 = &LAB_148c39de3;
    local_60 = &LAB_1457a9eb2;
    local_68 = &DAT_149e063b2;
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140a99bac;
  cVar3 = FUN_140a99d02(lVar5 + 0x3910);
  bVar4 = (cVar3 == '\x0f' || cVar3 == '\f') || (byte)(cVar3 - 5U) < 3;
  if ((bool)*(char *)(param_1 + 0x58) == bVar4) goto LAB_140a99bac;
  *(bool *)(param_1 + 0x58) = bVar4;
  FUN_1449027d0(param_1,&local_38);
  lVar5 = *(longlong *)(local_38 + 0x170);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x18));
  *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (*(char *)(param_1 + 0x58) == *(char *)(lVar5 + 8)) {
    if (*(int *)(lVar5 + 0xc) == 0) {
      iVar6 = 1;
      goto LAB_140a99c23;
    }
  }
  else {
    iVar6 = *(int *)(lVar5 + 0xc) + 1;
LAB_140a99c23:
    *(char *)(lVar5 + 8) = *(char *)(param_1 + 0x58);
    *(int *)(lVar5 + 0xc) = iVar6;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x18));
LAB_140a99bac:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a99d02 FUN_140a99d02 body=457 status=ok
// SIG undefined FUN_140a99d02(void)

ulonglong FUN_140a99d02(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_140a9a328();
  lVar7 = *(longlong *)(param_1 + 0x90);
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x65) & 2) != 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0xf48);
  }
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x170) != 0) {
      lVar4 = FUN_140425b9a();
      lVar5 = *(longlong *)(lVar3 + 0x170);
      if ((((lVar5 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 != 0)) &&
         (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) && (*(char *)(lVar5 + 0x733) != '\x01')))) {
        uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),5);
        goto LAB_140a99e8f;
      }
    }
    if ((*(longlong *)(lVar3 + 0x30) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 != 0)) {
      lVar5 = FUN_140a99ecc();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30 &&
          (*(char *)(lVar3 + 0x6a0) != '\x01')))) {
        uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),6);
        goto LAB_140a99e8f;
      }
    }
  }
  if (lVar7 != 0) {
    lVar5 = (**(code **)(*(longlong *)(lVar7 + 0x3c20) + 0x18))(lVar7 + 0x3c20);
    uVar9 = (undefined7)((ulonglong)lVar3 >> 8);
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x28) != '\0')) ||
       ((*(longlong *)(param_1 + 0x90) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x90) + 0x39b8) != '\0')))) {
      uVar8 = CONCAT71(uVar9,0xc);
      goto LAB_140a99e8f;
    }
    puVar6 = &DAT_14c846480;
    if (*(longlong *)(lVar7 + 0x1c8) != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(lVar7 + 0x1c8) + 0x240);
    }
    cVar2 = FUN_140a99fb2(param_1,puVar6);
    uVar8 = CONCAT71(uVar9,0xf);
    if (cVar2 != '\0') goto LAB_140a99e8f;
    lVar7 = *(longlong *)(param_1 + 0x128);
    if ((((lVar7 != 0) && (*(char *)(lVar7 + 0x68) == '\x01')) &&
        (*(char *)(lVar7 + 0x69) == '\x01')) && (*(char *)(lVar7 + 0x6a) == '\x01')) {
      FUN_140a9a478(param_1,local_88);
      cVar2 = FUN_140a99fb2(param_1,local_88);
      if (cVar2 != '\0') goto LAB_140a99e8f;
    }
  }
  uVar8 = 0;
LAB_140a99e8f:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a99ecc FUN_140a99ecc body=228 status=ok
// SIG undefined FUN_140a99ecc(void)

longlong FUN_140a99ecc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbf3e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145996cba;
    local_38 = &LAB_148cacce3;
    local_40 = &LAB_14078f9dd;
    local_48 = L"game";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x718;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldSettings",&DAT_14cbbf3e0,&DAT_148cacce2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf3e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a99fb2 FUN_140a99fb2 body=885 status=ok
// SIG undefined FUN_140a99fb2(void)

byte FUN_140a99fb2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined1 auStack_1b8 [32];
  undefined8 **local_198;
  undefined4 local_190;
  undefined8 *local_188;
  undefined1 *local_180;
  undefined4 *local_178;
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
  undefined1 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = FUN_140a9a328();
  lVar4 = *(longlong *)(param_1 + 0x90);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x65) & 2) != 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0;
    if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xf48), plVar2 != (longlong *)0x0)) {
      local_e8 = (undefined8 *)0x0;
      uStack_e0 = 0;
      local_ec = 0;
      local_f0 = 0;
      (**(code **)(*plVar2 + 0x528))(plVar2);
      local_ac = 0;
      local_a8 = 0x101;
      local_80 = 0;
      local_78 = 0x800000000;
      local_60 = 0;
      local_54 = 4;
      local_c0 = 0;
      local_b4 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_bf = 1;
      local_bd = 0;
      local_b0 = 0;
      local_bc = 0x1000000;
      local_b8 = 1;
      local_70 = *(undefined4 *)((longlong)plVar2 + 0xc);
      local_58 = 1;
      lVar4 = *(longlong *)(param_1 + 0x88);
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
        local_6c = *(undefined4 *)(lVar4 + 0xc);
        local_58 = 2;
      }
      local_100 = 3;
      local_fc = local_ec;
      local_f8 = local_f0;
      local_168 = *param_2;
      uStack_160 = param_2[1];
      local_158 = param_2[2];
      uStack_150 = param_2[3];
      local_118 = param_2[4];
      uStack_110 = param_2[5];
      local_108 = param_2[6];
      local_178 = &DAT_14cad0f08;
      local_180 = &DAT_14cad0f10;
      local_188 = &local_d0;
      local_198 = &local_e8;
      local_190 = 6;
      FUN_14052f4ca(lVar3);
      if ((longlong)(int)uStack_e0 == 0) {
        bVar5 = 0;
      }
      else {
        puVar1 = local_e8 + (longlong)(int)uStack_e0 * 9;
        bVar5 = 0;
        puVar6 = local_e8;
        do {
          local_168 = *puVar6;
          uStack_160 = puVar6[1];
          local_158 = puVar6[2];
          uStack_150 = CONCAT35(uStack_150._5_3_,*(undefined5 *)(puVar6 + 3));
          local_128 = *(undefined1 *)(puVar6 + 8);
          local_148 = *(undefined4 *)(puVar6 + 4);
          uStack_144 = *(undefined4 *)((longlong)puVar6 + 0x24);
          uStack_140 = *(undefined4 *)(puVar6 + 5);
          uStack_13c = *(undefined4 *)((longlong)puVar6 + 0x2c);
          local_138 = *(undefined4 *)(puVar6 + 6);
          uStack_134 = *(undefined4 *)((longlong)puVar6 + 0x34);
          uStack_130 = *(undefined4 *)(puVar6 + 7);
          uStack_12c = *(undefined4 *)((longlong)puVar6 + 0x3c);
          lVar4 = FUN_14485cccc(&local_168);
          if (lVar4 != 0) {
            lVar3 = FUN_140a9a392();
            if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
              lVar3 = FUN_140a9a392();
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                bVar5 = bVar5 | *(char *)(lVar4 + 0x3d1) != '\0';
              }
            }
          }
          puVar6 = puVar6 + 9;
        } while (puVar6 != puVar1);
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a9a328 FUN_140a9a328 body=106 status=ok
// SIG undefined FUN_140a9a328(void)

longlong FUN_140a9a328(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x90) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x65) & 2) == 0)) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      cVar1 = FUN_1447ffd82(param_1 + 0xd0,lVar2);
      if (cVar1 == '\0') {
        FUN_14485c47a(param_1 + 0xd0,lVar2);
      }
      return lVar2;
    }
  }
  lVar2 = FUN_14479d2ce(param_1 + 0xd0);
  return lVar2;
}



// FUNCTION 140a9a392 FUN_140a9a392 body=228 status=ok
// SIG undefined FUN_140a9a392(void)

longlong FUN_140a9a392(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbcd48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_148c9b89f;
    local_40 = &LAB_140fad954;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x500;
    FUN_14081cfa3(L"/Script/OakGame",L"OakVehicleBlockingVolume",&DAT_14cbbcd48,&DAT_148c9b89e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbcd48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a9a478 FUN_140a9a478 body=4207 status=ok
// SIG undefined FUN_140a9a478(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140a9a478(longlong param_1,double *param_2)

{
  longlong *plVar1;
  double dVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  double *pdVar15;
  undefined4 *puVar16;
  double *pdVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  longlong local_350;
  undefined4 *local_348;
  longlong **local_340;
  undefined1 *local_338;
  longlong local_330;
  double local_328;
  longlong local_320;
  longlong local_318;
  longlong *local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined4 local_2b8;
  undefined4 local_2b4;
  longlong local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 local_288;
  double dStack_280;
  double local_278;
  longlong *local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined2 local_257;
  undefined1 local_255;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  uint local_248;
  undefined4 uStack_244;
  undefined2 uStack_240;
  undefined6 uStack_23e;
  double local_238;
  longlong local_218;
  undefined8 local_210;
  undefined4 local_208;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  double *pdStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined4 local_144;
  undefined4 local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  pdVar15 = (double *)&DAT_14c846480;
  pdVar17 = param_2;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  lVar11 = *(longlong *)(param_1 + 0x90);
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x65) & 2) != 0)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(lVar11 + 0xf48);
  }
  lVar11 = FUN_140a9a328(param_1);
  if (((((plVar8 == (longlong *)0x0) || (lVar11 == 0)) ||
       (lVar12 = *(longlong *)(param_1 + 0x128), lVar12 == 0)) ||
      ((*(char *)(lVar12 + 0x68) != '\x01' || (*(char *)(lVar12 + 0x69) != '\x01')))) ||
     (*(char *)(lVar12 + 0x6a) != '\x01')) goto LAB_140a9af73;
  pdVar15 = (double *)(plVar8[0x39] + 0x240);
  if (plVar8[0x39] == 0) {
    pdVar15 = (double *)&DAT_14c846480;
  }
  pdVar17 = param_2;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar17 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar17 = pdVar17 + 1;
  }
  plVar1 = (longlong *)plVar8[0x78];
  if (plVar1 == (longlong *)0x0) {
    local_278 = DAT_14c846508;
    dStack_280 = DAT_14c846500;
  }
  else {
    (**(code **)(*plVar1 + 0x680))(plVar1,&local_288);
  }
  local_288 = 0;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = dStack_280;
  auVar29 = divpd(auVar33 << 0x40,_DAT_1499387d0);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = local_278;
  auVar33 = divpd(auVar32,_DAT_1499387d0);
  auVar29 = roundpd(auVar29,auVar29,3);
  auVar33 = roundpd(auVar33,auVar33,3);
  dVar24 = (0.0 - auVar29._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar25 = (dStack_280 - auVar29._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar31 = (local_278 - auVar33._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar2 = (0.0 - auVar33._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar21 = sin(dVar24);
  dVar22 = sin(dVar25);
  dVar23 = sin(dVar31);
  sin(dVar2);
  dVar24 = cos(dVar24);
  dVar25 = cos(dVar25);
  dVar26 = cos(dVar31);
  cos(dVar2);
  dVar31 = dVar22 * dVar21 * dVar23 + dVar25 * dVar24 * dVar26;
  *param_2 = dVar21 * dVar22 * dVar26 - dVar24 * dVar25 * dVar23;
  param_2[1] = -(dVar21 * dVar25 * dVar26) - dVar24 * dVar22 * dVar23;
  auVar29._8_4_ = SUB84(dVar31,0);
  auVar29._0_8_ = -(dVar25 * dVar21 * dVar23) + dVar22 * dVar24 * dVar26;
  auVar29._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar29;
  FUN_140a9b590(param_1,&local_1e8,1);
  if (pdStack_1e0 == (double *)0x0) {
    uVar27 = FUN_14037df6e();
    pdStack_1e0 = (double *)FUN_14477b664(uVar27);
  }
  dVar31 = local_1d8;
  local_330 = param_1;
  local_310 = plVar8;
  if (local_1d8 == 0.0) {
    if (((local_1e8 == (longlong *)0x0) || (pdStack_1e0 == (double *)0x0)) ||
       ((plVar8 = (longlong *)pdStack_1e0[0x17], plVar8 == (longlong *)0x0 ||
        (cVar5 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar5 == '\0')))) goto LAB_140a9af73;
    uVar27 = (**(code **)(*plVar8 + 0x110))(plVar8);
    dVar31 = (double)FUN_144aff482(uVar27,&local_1e8);
    if (dVar31 == 0.0) goto LAB_140a9af73;
  }
  lVar12 = (longlong)dVar31 + 0xb0;
  lVar7 = FUN_140732052(lVar12);
  if (lVar7 == 0) goto LAB_140a9af73;
  lVar7 = FUN_140732052(lVar12);
  lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x50) + 0x10))(lVar7 + 0x50);
  if (lVar7 == 0) goto LAB_140a9af73;
  local_318 = lVar12;
  lVar12 = FUN_140732052(lVar12);
  plVar8 = (longlong *)(**(code **)(*(longlong *)(lVar12 + 0x50) + 0x10))(lVar12 + 0x50);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x80))(plVar8);
  if (plVar8 == (longlong *)0x0) {
    if ((*(longlong *)(local_330 + 0x128) != 0) &&
       (plVar8 = *(longlong **)(*(longlong *)(local_330 + 0x128) + 0x80), plVar8 != (longlong *)0x0)
       ) {
      lVar12 = (**(code **)(*plVar8 + 8))(plVar8);
      lVar7 = FUN_140355bb6();
      if (((lVar7 != 0) &&
          (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar12 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) && (lVar12 = FUN_141870208(plVar8,0), lVar12 != 0)))) &&
         (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 0x3c))) {
        uVar39 = (uint)((ulonglong)DAT_14cbe7010 >> 0x10);
        uVar19 = (uint)DAT_14cbe7010 & 0xffff;
        lVar7 = lVar12 + 0x40;
        if (*(longlong *)(lVar12 + 0x48) != 0) {
          lVar7 = *(longlong *)(lVar12 + 0x48);
        }
        iVar14 = *(int *)(lVar7 + (ulonglong)
                                  (*(int *)(lVar12 + 0x50) - 1U &
                                  (int)((ulonglong)DAT_14cbe7010 >> 0x20) +
                                  ((uint)DAT_14cbe7010 << 0x10 | uVar19) +
                                  (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar19 >> 4)) * 4);
        if (iVar14 != -1) {
          do {
            plVar8 = (longlong *)(*(longlong *)(lVar12 + 8) + (longlong)iVar14 * 0x48);
            if (*plVar8 == DAT_14cbe7010) {
              if ((plVar8 + 1 != (longlong *)0x0 && plVar8 != (longlong *)0x0) &&
                 (lVar12 = plVar8[1], lVar12 != 0)) {
                local_1e8 = (longlong *)0x0;
                pdStack_1e0 = (double *)0x0;
                local_358 = (undefined8 *)((ulonglong)local_358 & 0xffffffffffffff00);
                FUN_1487ef66a(lVar12,&DAT_14cbe7018,&local_1e8,&DAT_14cb73cf0);
                plVar1 = local_1e8;
                lVar12 = (longlong)(int)pdStack_1e0;
                if (lVar12 == 0) {
                  plVar8 = (longlong *)0x0;
                  goto LAB_140a9b4a9;
                }
                lVar7 = 0;
                goto LAB_140a9b467;
              }
              break;
            }
            iVar14 = (int)plVar8[8];
          } while (iVar14 != -1);
        }
      }
    }
    goto LAB_140a9af73;
  }
  goto LAB_140a9a7a9;
  while (iVar14 = (int)plVar8[4], iVar14 != -1) {
LAB_140a9ab35:
    plVar8 = (longlong *)(lVar20 + (longlong)iVar14 * 0x28);
    if (*plVar8 == local_2b0) goto LAB_140a9ab49;
  }
  plVar8 = (longlong *)0x0;
LAB_140a9ab49:
  local_298 = (double)plVar8[3];
  local_2a8 = (double)plVar8[1];
  dStack_2a0 = (double)plVar8[2];
  goto LAB_140a9ab61;
LAB_140a9b467:
  do {
    lVar20 = *(longlong *)((longlong)plVar1 + lVar7);
    if (lVar20 != 0) {
      uVar27 = FUN_1464b0d34();
      cVar5 = FUN_1448093f4(lVar20,uVar27);
      if ((cVar5 != '\0') &&
         (plVar8 = (longlong *)FUN_140655cde(lVar20 + 0x10), plVar8 != (longlong *)0x0))
      goto LAB_140a9b4a9;
    }
    lVar7 = lVar7 + 8;
  } while (lVar12 * 8 != lVar7);
  plVar8 = (longlong *)0x0;
LAB_140a9b4a9:
  if (local_1e8 != (longlong *)0x0) {
    FUN_1400020a8(local_1e8);
  }
  if (plVar8 == (longlong *)0x0) goto LAB_140a9af73;
LAB_140a9a7a9:
  lVar12 = FUN_140a9b4e8(local_330);
  if (lVar12 == 0) goto LAB_140a9af73;
  lVar7 = (longlong)*(int *)((longlong)dVar31 + 0x110);
  fVar37 = 1.0;
  if (0 < lVar7) {
    fVar37 = 1.0 / (float)*(int *)((longlong)dVar31 + 0x110);
  }
  local_328 = dVar31;
  local_320 = lVar11;
  if (lVar7 == 0) {
    fVar43 = 0.0;
    fVar42 = 0.0;
    fVar44 = 0.0;
    fVar38 = 0.0;
  }
  else {
    lVar11 = *(longlong *)((longlong)dVar31 + 0x108);
    fVar38 = 0.0;
    lVar20 = 0;
    fVar44 = 0.0;
    fVar42 = 0.0;
    fVar43 = 0.0;
    do {
      (**(code **)(*plVar8 + 0x348))(plVar8,&local_1e8,*(undefined8 *)(lVar11 + 8 + lVar20));
      FUN_1448ac920(&local_268,&local_1e8);
      fVar38 = (float)((double)fVar38 + local_238);
      fVar44 = fVar44 + *(float *)(lVar11 + 0x84 + lVar20);
      fVar42 = fVar42 + *(float *)(lVar11 + 0x54 + lVar20);
      fVar43 = (float)((double)fVar43 + *(double *)(lVar11 + 0x20 + lVar20));
      lVar20 = lVar20 + 0x188;
    } while (lVar7 * 0x188 - lVar20 != 0);
  }
  plVar1 = local_310;
  lVar7 = local_318;
  lVar11 = local_320;
  dVar25 = local_328;
  dVar24 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar31 = DAT_14c8464e0;
  fVar37 = (fVar42 * fVar37 + fVar44 * fVar37) - (fVar43 * fVar37 + fVar38 * fVar37);
  if (local_310[0x657] != 0) {
    fVar37 = (float)((double)fVar37 + *(double *)(local_310[0x657] + 0x1a8));
  }
  uVar39 = SUB84(DAT_14c8464e0,0);
  uVar6 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
  uVar40 = SUB84(DAT_14c8464e8,0);
  uVar41 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  lVar20 = FUN_140732052(local_318);
  dVar21 = dVar24;
  if (lVar20 != 0) {
    lVar7 = FUN_140732052(lVar7);
    lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x50) + 0x10))(lVar7 + 0x50);
    if (lVar7 != 0) {
      (**(code **)(*plVar8 + 0x348))(plVar8,&local_1e8,*(undefined8 *)(lVar12 + 0x178));
      FUN_1448ac920(&local_268,&local_1e8);
      auVar4._8_2_ = uStack_240;
      auVar4._0_8_ = CONCAT44(uStack_244,local_248);
      auVar4._10_6_ = uStack_23e;
      uVar40 = auVar4._8_4_;
      uVar41 = (undefined4)((uint6)uStack_23e >> 0x10);
      dVar31 = param_2[8] * (double)CONCAT44(uStack_244,local_248);
      dVar34 = param_2[9] * auVar4._8_8_;
      dVar26 = local_238 * param_2[10];
      dVar22 = *param_2;
      dVar23 = param_2[1];
      dVar2 = param_2[2];
      dVar24 = param_2[3];
      dVar21 = dVar34 * dVar22 - dVar31 * dVar23;
      dVar35 = dVar26 * dVar23 - dVar34 * dVar2;
      dVar45 = dVar31 * dVar2 - dVar22 * dVar26;
      dVar35 = dVar35 + dVar35;
      dVar45 = dVar45 + dVar45;
      dVar21 = dVar21 + dVar21;
      dVar31 = (dVar21 * dVar23 - dVar45 * dVar2) + dVar24 * dVar35 + dVar31;
      dVar2 = (dVar2 * dVar35 - dVar22 * dVar21) + param_2[3] * dVar45 + dVar34;
      dVar24 = (dVar21 * dVar24 + dVar26 + (dVar45 * dVar22 - dVar35 * dVar23)) * 0.0;
      uVar39 = local_248;
      uVar6 = uStack_244;
      dVar21 = local_238;
    }
  }
  local_298 = DAT_14c8464f0;
  local_2a8 = DAT_14c8464e0;
  dStack_2a0 = DAT_14c8464e8;
  puVar16 = &DAT_14c9485f0;
  if (*(undefined4 **)((longlong)dVar25 + 8) != (undefined4 *)0x0) {
    puVar16 = *(undefined4 **)((longlong)dVar25 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  FUN_140045924(DAT_14c947fe0,&local_2b0,puVar16,1);
  lVar7 = local_330;
  plVar8 = (longlong *)(local_330 + 0xd8);
  if (*(int *)(local_330 + 0xe0) != *(int *)(local_330 + 0x10c)) {
    uVar19 = (uint)((ulonglong)local_2b0 >> 0x10);
    uVar13 = (uint)local_2b0 & 0xffff;
    lVar20 = local_330 + 0x110;
    if (*(longlong *)(local_330 + 0x118) != 0) {
      lVar20 = *(longlong *)(local_330 + 0x118);
    }
    iVar14 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(local_330 + 0x120) - 1U &
                               (int)((ulonglong)local_2b0 >> 0x20) +
                               ((uint)local_2b0 << 0x10 | uVar13) +
                               (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar14 != -1) {
      lVar20 = *plVar8;
      iVar18 = iVar14;
      do {
        if (*(longlong *)(lVar20 + (longlong)iVar18 * 0x28) == local_2b0) goto LAB_140a9ab35;
        iVar18 = *(int *)(lVar20 + (longlong)iVar18 * 0x28 + 0x20);
      } while (iVar18 != -1);
    }
  }
  local_268 = (longlong *)0x0;
  uStack_260 = 0;
  plVar9 = (longlong *)FUN_140963a30(lVar12 + 0x1b0);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x2d0))(plVar9,&local_268,&DAT_14cb8d438,plVar1 + 0x21c);
  }
  if (0 < (int)uStack_260) {
    uVar27 = (**(code **)(*(longlong *)*local_268 + 0x2b0))();
    lVar12 = *local_268;
    if (lVar12 == 0) {
LAB_140a9b4ca:
      lVar12 = 0;
    }
    else {
      lVar20 = FUN_1402576f0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar20 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar20 + 0x38) * 8) != lVar20 + 0x30)) goto LAB_140a9b4ca;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar12);
      }
    }
    if ((plVar1[0x85] != 0) && (lVar20 = FUN_144a7954a(), lVar20 != 0)) {
      lVar10 = FUN_144a85a6c();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        local_358 = (undefined8 *)((ulonglong)local_358 & 0xffffffffffffff00);
        local_350 = lVar20;
        FUN_141445440(lVar12,&local_1e8,0,uVar27);
        pdStack_1e0 = &local_2a8;
        local_2a8 = local_1c8;
        dStack_2a0 = dStack_1c0;
        local_298 = local_1b8;
        local_1e8 = &local_2b0;
        FUN_1458952b4(plVar8,&local_2d8,&local_1e8,0);
      }
    }
  }
  if (local_268 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140a9ab61:
  dVar28 = local_2a8 * param_2[8];
  dVar30 = dStack_2a0 * param_2[9];
  dVar45 = local_298 * param_2[10];
  dVar25 = param_2[3];
  dVar26 = *param_2;
  dVar34 = param_2[1];
  dVar35 = param_2[2];
  dVar22 = dVar30 * dVar26 - dVar28 * dVar34;
  dVar36 = dVar45 * dVar34 - dVar30 * dVar35;
  dVar23 = dVar28 * dVar35 - dVar26 * dVar45;
  dVar36 = dVar36 + dVar36;
  dVar23 = dVar23 + dVar23;
  dVar22 = dVar22 + dVar22;
  uVar3 = DAT_149931e80;
  param_2[4] = (dVar22 * dVar34 - dVar23 * dVar35) + dVar25 * dVar36 + dVar28 +
               (param_2[4] - dVar31) + 0.0;
  param_2[5] = (dVar35 * dVar36 - dVar26 * dVar22) + param_2[3] * dVar23 + dVar30 +
               (param_2[5] - dVar2) + 0.0;
  param_2[6] = (double)fVar37 +
               (dVar22 * dVar25 + dVar45 + (dVar23 * dVar26 - dVar36 * dVar34)) * 0.0 +
               (double)((ulonglong)dVar24 ^ uVar3) + param_2[6];
  param_2[7] = param_2[7] + 0.0 + 0.0 + 0.0;
  if ((plVar1[0xd0a] != 0) && (*(longlong *)(plVar1[0xd0a] + 0x110) != 0)) {
    memset(&local_1e8,0,0x100);
    local_118 = 0xffffffff;
    local_144 = 0xffffffff;
    local_1e8 = (longlong *)CONCAT44(0x3f800000,(undefined4)local_1e8);
    local_2b4 = 0;
    local_2b8 = 0;
    (**(code **)(*plVar1 + 0x528))(plVar1);
    uStack_244 = 0;
    uStack_240 = 0x101;
    local_218 = 0;
    local_210 = 0x800000000;
    local_1f8 = 0;
    local_258 = 0;
    local_24c = 0;
    local_268 = (longlong *)0x0;
    uStack_260 = 0;
    local_257 = 1;
    local_255 = 0;
    local_248 = local_248 & 0xffffff00;
    local_254 = 0x1000000;
    local_250 = 1;
    local_208 = *(undefined4 *)((longlong)plVar1 + 0xc);
    local_1f0 = 0x400000001;
    if ((*(longlong *)(lVar7 + 0x88) != 0) &&
       ((*(uint *)(*(longlong *)(lVar7 + 0x88) + 8) >> 0x1e & 1) == 0)) {
      FUN_144a85a22(&local_268);
    }
    lVar12 = plVar1[0x39];
    if (lVar12 == 0) {
      local_2c8 = DAT_14c8464f0;
      local_2d8 = DAT_14c8464e0;
      dStack_2d0 = DAT_14c8464e8;
    }
    else {
      local_2d8 = *(double *)(lVar12 + 0x260);
      dStack_2d0 = *(double *)(lVar12 + 0x268);
      local_2c8 = *(double *)(lVar12 + 0x270);
    }
    dVar2 = (double)CONCAT44(uVar6,uVar39) * param_2[8];
    dVar24 = (double)CONCAT44(uVar41,uVar40) * param_2[9];
    dVar21 = dVar21 * param_2[10];
    dVar22 = *param_2;
    dVar23 = param_2[1];
    dVar26 = param_2[2];
    dVar31 = param_2[3];
    dVar34 = dVar24 * dVar22 - dVar2 * dVar23;
    dVar35 = dVar21 * dVar23 - dVar24 * dVar26;
    dVar25 = dVar2 * dVar26 - dVar22 * dVar21;
    dVar35 = dVar35 + dVar35;
    dVar25 = dVar25 + dVar25;
    dVar34 = dVar34 + dVar34;
    dVar24 = (dVar26 * dVar35 - dVar22 * dVar34) + param_2[3] * dVar25 + dVar24 + param_2[5];
    local_2e8 = dVar34 * dVar31 + dVar21 + (dVar25 * dVar22 - dVar35 * dVar23) + param_2[6];
    local_2f8._8_4_ = SUB84(dVar24,0);
    local_2f8._0_8_ = (dVar34 * dVar23 - dVar25 * dVar26) + dVar31 * dVar35 + dVar2 + param_2[4];
    local_2f8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    local_308 = 3;
    local_304 = local_2b4;
    local_300 = local_2b8;
    uVar6 = (**(code **)(**(longlong **)(plVar1[0xd0a] + 0x110) + 0x580))();
    local_338 = &DAT_14cad0f10;
    local_340 = &local_268;
    local_350 = CONCAT44(local_350._4_4_,uVar6);
    local_358 = &DAT_14c8463d0;
    local_348 = &local_308;
    cVar5 = FUN_14021655c(lVar11,&local_1e8,&local_2d8,local_2f8);
    if (cVar5 != '\0') {
      param_2[4] = local_1d8;
      param_2[5] = dStack_1d0;
      param_2[6] = local_1c8;
      param_2[7] = 0.0;
    }
    if (local_1f8 != 0) {
      FUN_1400020a8();
    }
    if (local_218 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140a9af73:
  if ((local_e0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a9b4e8 FUN_140a9b4e8 body=166 status=ok
// SIG undefined FUN_140a9b4e8(void)

undefined8 FUN_140a9b4e8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x90);
  if ((((lVar1 == 0) || ((*(byte *)(lVar1 + 0x65) & 2) != 0)) || (*(longlong *)(lVar1 + 0xf48) == 0)
      ) || (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xf48) + 0x3f70), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    local_40 = *(undefined8 *)(lVar1 + 0xeb0);
    FUN_1446dcdd4(local_38);
    if (DAT_14cbe6df8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_144815d88(DAT_14cbe6df8,local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a9b590 FUN_140a9b590 body=658 status=ok
// SIG undefined FUN_140a9b590(void)

longlong * FUN_140a9b590(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (lVar5 == 0) {
    uVar4 = FUN_14037df6e();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x48) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x50) != 0) {
LAB_140a9b5cb:
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = lVar6;
    uVar4 = FUN_14477b664(lVar5);
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
    param_2[2] = *(longlong *)(param_1 + 0x50);
    goto LAB_140a9b5ee;
  }
  if (lVar5 != 0 && lVar6 != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_1 + 0x40);
        *(longlong *)(param_1 + 0x50) = lVar5;
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x40);
          lVar5 = *(longlong *)(param_1 + 0x48);
          goto LAB_140a9b5cb;
        }
        goto LAB_140a9b628;
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
LAB_140a9b628:
  bVar2 = FUN_1411cf974(param_1);
  if ((bVar2 & param_3) == 1) {
    lVar6 = FUN_1411cfb7f();
    lVar5 = *(longlong *)(lVar6 + 0x58);
    if (lVar5 == 0) {
      uVar4 = FUN_14037df6e();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x58) = lVar5;
    }
    lVar7 = *(longlong *)(lVar6 + 0x60);
    if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(lVar6 + 0x50) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if (plVar1 == (longlong *)0x0) {
LAB_140a9b81f:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 == '\0') goto LAB_140a9b81f;
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x50));
      }
      *(longlong *)(lVar6 + 0x60) = lVar7;
    }
  }
  else {
    lVar7 = 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar4 = FUN_14037df6e();
  lVar5 = FUN_14477b664(uVar4);
  param_2[1] = lVar5;
  lVar5 = FUN_14037df6e();
  uVar4 = FUN_14037df6e();
  FUN_1402d1bfa(&local_38,uVar4,lVar7);
  if (*param_2 != local_38) {
    param_2[2] = 0;
  }
  *param_2 = local_38;
  lVar6 = FUN_14037df6e();
  if (lVar5 == 0) {
LAB_140a9b6b7:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_140a9b6b7;
  if (param_2[1] != lVar6) {
    param_2[2] = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lVar5 = FUN_14477b664(uVar4);
  param_2[1] = lVar5;
  if (lVar5 != 0 && local_38 != 0) {
    param_2[2] = lVar7;
  }
LAB_140a9b5ee:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a9b824 FUN_140a9b824 body=271 status=ok
// SIG undefined FUN_140a9b824(void)

undefined8 *
FUN_140a9b824(undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,float param_9)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = DAT_14c84635c;
  local_50 = 0;
  local_58 = param_7;
  local_60 = param_6;
  local_68 = param_5;
  FUN_140a9b934(param_1);
  *param_1 = &PTR_FUN_149f57478;
  *(float *)(param_1 + 7) = param_8;
  fVar2 = logf(param_8);
  *(float *)((longlong)param_1 + 0x3c) = fVar2;
  param_1[8] = 0;
  fVar2 = param_2[1];
  if (param_9 <= param_2[1]) {
    fVar2 = param_9;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = *param_2;
  if (param_9 <= *param_2) {
    fVar3 = param_9;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  bVar1 = 1;
  if ((*(float *)(param_1 + 5) == fVar3) && (!NAN(*(float *)(param_1 + 5)) && !NAN(fVar3))) {
    bVar1 = -(*(float *)((longlong)param_1 + 0x2c) != fVar2) & 1;
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | bVar1;
  *(float *)(param_1 + 5) = fVar3;
  *(float *)((longlong)param_1 + 0x2c) = fVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a9b934 FUN_140a9b934 body=391 status=ok
// SIG undefined FUN_140a9b934(void)

undefined8 *
FUN_140a9b934(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             int param_5,int param_6,uint param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  *param_1 = &PTR_FUN_149f57480;
  plVar1 = param_1 + 1;
  plVar2 = param_1 + 3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = *param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  iVar3 = (int)param_4[1];
  if ((((longlong)iVar3 < 1) || (param_6 < 1)) || ((int)param_3[1] != param_6)) {
    *(undefined4 *)(param_1 + 2) = 1;
    FUN_1447403be(plVar1,0);
    *(undefined1 *)param_1[1] = 0;
    iVar3 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x24) == iVar3) {
      FUN_14475e4ac(plVar2,iVar3);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar3 * 4) = 0;
  }
  else {
    *(int *)(param_1 + 2) = iVar3;
    lVar5 = 0;
    FUN_1447403be(plVar1,0);
    do {
      lVar7 = 0;
      fVar8 = 0.0;
      bVar4 = true;
      do {
        bVar6 = bVar4;
        fVar9 = *(float *)(*param_3 +
                          ((longlong)*(int *)(lVar5 * 8 + *param_4 + lVar7 * 4) - (longlong)param_5)
                          * 4);
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar8 = fVar8 + fVar9;
        lVar7 = 1;
        bVar4 = false;
      } while (bVar6);
      *(char *)(*plVar1 + lVar5) = (char)(int)(fVar8 * 0.5 * (float)(int)(param_7 - 1));
      lVar5 = lVar5 + 1;
    } while (lVar5 != iVar3);
    iVar3 = *(int *)(param_1 + 4);
    *(uint *)(param_1 + 4) = iVar3 + param_7;
    if ((uint)(*(int *)((longlong)param_1 + 0x24) - iVar3) < param_7) {
      FUN_14475e4ac(plVar2);
    }
    memset((void *)((longlong)iVar3 * 4 + *plVar2),0,(longlong)(int)param_7 << 2);
  }
  return param_1;
}



// FUNCTION 140a9babc FUN_140a9babc body=881 status=ok
// SIG undefined FUN_140a9babc(void)

undefined8 FUN_140a9babc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)FUN_140a9c5d6(param_2,param_3);
  FUN_140a9c259(plVar5,param_3 + 0x20);
  plVar1 = (longlong *)(param_3 + 0x40);
  if ((*(byte *)(plVar5 + 5) & 4) != 0) {
    FUN_147560414(plVar1);
  }
  (**(code **)(*plVar5 + 0x218))(plVar5,&DAT_149e3906c);
  (**(code **)(*plVar5 + 0x10))
            (plVar5,(longlong)*(int *)(param_3 + 0x48) * 0xc,
             (longlong)*(int *)(param_3 + 0x4c) * 0xc);
  local_34 = 0;
  if ((*(byte *)(plVar5 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_3 + 0x48);
  }
  puVar4 = (ulonglong *)plVar5[1];
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(plVar5,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  if (local_34 == 0) {
    if (((*(byte *)(plVar5 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_3 + 0x48) = 0, *(int *)(param_3 + 0x4c) != 0)) {
      FUN_140a9c108(plVar1,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)plVar5 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_34 && (*(char *)((longlong)plVar5 + 0x2b) < '\0')))) {
    FUN_14572541c(plVar5);
  }
  else if ((*(byte *)(plVar5 + 5) & 1) == 0) {
    *(uint *)(param_3 + 0x48) = local_34;
    lVar6 = 0;
    lVar8 = 0;
    do {
      FUN_140a9bed6(plVar5,*(longlong *)(param_3 + 0x40) + lVar6);
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar8 < *(int *)(param_3 + 0x48));
  }
  else {
    *(undefined4 *)(param_3 + 0x48) = 0;
    if ((*(uint *)(param_3 + 0x4c) == local_34) || (FUN_140a9c108(plVar1), 0 < (int)local_34)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar3 + 1U) {
          FUN_1475605dc(plVar1,iVar3);
        }
        FUN_140a9bed6(plVar5,(longlong)iVar3 * 0xc + *plVar1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_34);
    }
  }
  (**(code **)(*plVar5 + 0x10))
            (plVar5,(longlong)*(int *)(param_3 + 0x58) << 3,(longlong)*(int *)(param_3 + 0x5c) << 3)
  ;
  local_34 = 0;
  if ((*(byte *)(plVar5 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_3 + 0x58);
  }
  puVar4 = (ulonglong *)plVar5[1];
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(plVar5,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  plVar1 = (longlong *)(param_3 + 0x50);
  if (local_34 == 0) {
    if (((*(byte *)(plVar5 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_3 + 0x58) = 0, *(int *)(param_3 + 0x5c) != 0)) {
      FUN_140a9bfcc(plVar1,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)plVar5 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)plVar5 + 0x2b) < '\0')))) {
    FUN_14572541c(plVar5);
  }
  else if ((*(byte *)(plVar5 + 5) & 1) == 0) {
    *(uint *)(param_3 + 0x58) = local_34;
    lVar6 = 0;
    lVar8 = 0;
    do {
      FUN_140a9be2e(plVar5,*(longlong *)(param_3 + 0x50) + lVar6);
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar8 < *(int *)(param_3 + 0x58));
  }
  else {
    *(undefined4 *)(param_3 + 0x58) = 0;
    if ((*(uint *)(param_3 + 0x5c) == local_34) || (FUN_140a9bfcc(plVar1), 0 < (int)local_34)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(param_3 + 0x58);
        *(uint *)(param_3 + 0x58) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0x5c) < iVar3 + 1U) {
          FUN_147560556(plVar1,iVar3);
        }
        FUN_140a9be2e(plVar5,(longlong)iVar3 * 8 + *plVar1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140a9be2e FUN_140a9be2e body=168 status=ok
// SIG undefined FUN_140a9be2e(void)

longlong * FUN_140a9be2e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140a9bed6 FUN_140a9bed6 body=246 status=ok
// SIG undefined FUN_140a9bed6(void)

longlong * FUN_140a9bed6(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140a9bfcc FUN_140a9bfcc body=315 status=ok
// SIG undefined FUN_140a9bfcc(void)

void FUN_140a9bfcc(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a9c036;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140a9c036:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 140a9c108 FUN_140a9c108 body=337 status=ok
// SIG undefined FUN_140a9c108(void)

void FUN_140a9c108(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a9c175;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140a9c175:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 140a9c259 FUN_140a9c259 body=864 status=ok
// SIG undefined FUN_140a9c259(void)

longlong * FUN_140a9c259(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    FUN_147560670(param_2);
  }
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3906c);
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140a9c884(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar6 = 0;
    lVar7 = 0;
    do {
      FUN_140a9c6b7(param_1,*param_2 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xc;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_140a9c884(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_147560838(param_2,iVar3);
        }
        FUN_140a9c6b7(param_1,(longlong)iVar3 * 0xc + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[3] << 5,
             (longlong)*(int *)((longlong)param_2 + 0x1c) << 5);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 3);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  plVar2 = param_2 + 2;
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 3) = 0, *(int *)((longlong)param_2 + 0x1c) != 0)) {
      FUN_140a9c7ae(plVar2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 3) = local_34;
    lVar6 = 0;
    lVar7 = 0;
    do {
      FUN_140a9c5d6(param_1,param_2[2] + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (lVar7 < (int)param_2[3]);
  }
  else {
    *(undefined4 *)(param_2 + 3) = 0;
    if ((*(uint *)((longlong)param_2 + 0x1c) == local_34) ||
       (FUN_140a9c7ae(plVar2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar3 = (int)param_2[3];
        *(uint *)(param_2 + 3) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0x1c) < iVar3 + 1U) {
          FUN_1475607b2(plVar2,iVar3);
        }
        lVar6 = (longlong)iVar3 * 0x20 + *plVar2;
        FUN_140a9c5ba(lVar6,1);
        FUN_140a9c5d6(param_1,lVar6);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140a9c5ba FUN_140a9c5ba body=28 status=ok
// SIG undefined FUN_140a9c5ba(void)

void FUN_140a9c5ba(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140a9c5d6 FUN_140a9c5d6 body=143 status=ok
// SIG undefined FUN_140a9c5d6(void)

void FUN_140a9c5d6(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_1402d40ec();
  plVar3 = (longlong *)FUN_1402d40ec(uVar2,param_2 + 8);
  FUN_140a9c665(plVar3,param_2 + 0x10);
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined4 *)(param_2 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(plVar3);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  FUN_140a9c665(plVar3,param_2 + 0x18);
  FUN_140a9c665(plVar3,param_2 + 0x1c);
  return;
}



// FUNCTION 140a9c665 FUN_140a9c665 body=82 status=ok
// SIG undefined FUN_140a9c665(void)

longlong * FUN_140a9c665(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140a9c6b7 FUN_140a9c6b7 body=246 status=ok
// SIG undefined FUN_140a9c6b7(void)

longlong * FUN_140a9c6b7(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140a9c7ae FUN_140a9c7ae body=214 status=ok
// SIG undefined FUN_140a9c7ae(void)

void FUN_140a9c7ae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 140a9c884 FUN_140a9c884 body=337 status=ok
// SIG undefined FUN_140a9c884(void)

void FUN_140a9c884(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a9c8f1;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140a9c8f1:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
  }
  return;
}



// FUNCTION 140a9c9d6 FUN_140a9c9d6 body=2330 status=ok
// SIG undefined FUN_140a9c9d6(void)

void FUN_140a9c9d6(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  char cVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  longlong lVar19;
  double *pdVar20;
  uint uVar21;
  longlong *plVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined8 *local_300;
  undefined1 *local_2f8;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined8 *local_2d0;
  code *local_2c8;
  code *local_2c0;
  longlong local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  undefined1 local_288 [16];
  double local_278;
  undefined8 local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_1c4;
  uint local_1b8;
  int local_1b4;
  undefined4 local_198;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined2 uStack_137;
  undefined1 uStack_135;
  undefined2 uStack_134;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  double local_118;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_140a9d376();
  lVar7 = *(longlong *)(param_1 + 0x4f0);
  if (lVar7 == 0) goto LAB_140a9cb79;
  if (DAT_14cbbd498 == 0) {
    local_2d0 = &local_268;
    local_268 = FUN_140940982;
    local_2c0 = FUN_14081d0ea;
    local_2c8 = (code *)&LAB_146572ba2;
    local_2d8 = &LAB_148ca13ba;
    local_2e0 = &LAB_140e51436;
    local_2e8 = L"Engine";
    local_2f0 = 0;
    local_2f8 = (undefined1 *)CONCAT44(local_2f8._4_4_,0x10000004);
    local_300 = (undefined8 *)CONCAT44(local_300._4_4_,8);
    local_308 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_140a9cb79;
  if (DAT_14cb253f8 == 0) {
    local_2d0 = &local_268;
    local_268 = FUN_1449e2820;
    local_2c0 = FUN_14081d0ea;
    local_2c8 = FUN_14081d0ea;
    local_2d8 = &LAB_147f6f09d;
    local_2e0 = &LAB_146201c25;
    local_2e8 = L"Game";
    local_2f0 = 0;
    local_2f8 = (undefined1 *)CONCAT44(local_2f8._4_4_,0x10000006);
    local_300 = (undefined8 *)CONCAT44(local_300._4_4_,8);
    local_308 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar17 = DAT_14cb253f8;
  if (((((((*(longlong *)(DAT_14cb253f8 + 0x110) == 0) &&
          (FUN_140aa6c08(DAT_14cb253f8), *(longlong *)(lVar17 + 0x110) == 0)) ||
         (lVar17 = FUN_1447210f0(lVar7), lVar17 == 0)) ||
        ((*(int *)(param_1 + 0x4ec) == 0 || (uVar21 = *(uint *)(param_1 + 0x4e8), (int)uVar21 < 0)))
        ) || ((DAT_14c9647dc <= (int)uVar21 ||
              ((plVar22 = (longlong *)
                          ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
               plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(param_1 + 0x4ec))))))) ||
      ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) ||
     (plVar22 = (longlong *)*plVar22, plVar22 == (longlong *)0x0)) goto LAB_140a9cb79;
  if (DAT_14cb5b388 == 0) {
    local_2d0 = &local_268;
    local_268 = FUN_141864c34;
    local_2c0 = FUN_14081d0ea;
    local_2c8 = (code *)&LAB_146431698;
    local_2d8 = &LAB_1486775cb;
    local_2e0 = &LAB_1464cee35;
    local_2e8 = L"Game";
    local_2f0 = 0;
    local_2f8 = (undefined1 *)CONCAT44(local_2f8._4_4_,0x10000005);
    local_300 = (undefined8 *)CONCAT44(local_300._4_4_,0x10);
    local_308 = 0x3a20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  if ((*(int *)(plVar22[2] + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
      != DAT_14cb5b388 + 0x30)) goto LAB_140a9cb79;
  uVar15 = FUN_144a5535e(lVar7);
  param_2 = param_2 & 0xff;
  uVar21 = *(uint *)(param_1 + 0x6a4 + (ulonglong)(param_2 * 0x50));
  cVar14 = (**(code **)(*plVar22 + 0x798))(plVar22);
  if ((cVar14 == '\0') || ((uVar21 & uVar15 & 0xff) == 0)) goto LAB_140a9cb79;
  if (*(char *)(param_1 + 0x68e + (ulonglong)(param_2 * 0x50)) == '\x01') {
    bVar23 = *(int *)(param_1 + 0x90c) == 0;
    *(uint *)(param_1 + 0x90c) = (uint)bVar23;
    uVar27 = (undefined4)(&DAT_149931160)[bVar23];
    uVar28 = (undefined4)((ulonglong)(&DAT_149931160)[bVar23] >> 0x20);
  }
  else {
    uVar27 = 0;
    uVar28 = 0x3ff00000;
  }
  local_2b0 = lVar17;
  memset(&local_268,0,0x100);
  local_198 = 0xffffffff;
  local_268 = (code *)CONCAT44(0x3f800000,(undefined4)local_268);
  local_1c4 = 0xffffffff;
  lVar17 = param_1;
  dVar18 = (double)FUN_140a9d2f2(param_1,&local_148,
                                 *(undefined8 *)(param_1 + 0x67c + (ulonglong)(param_2 * 0x50)));
  uVar24 = (undefined4)lVar17;
  dVar4 = (double)CONCAT44(uStack_124,local_128);
  local_278 = local_118;
  lVar17 = *(longlong *)(lVar7 + 0x1c8);
  if (lVar17 == 0) {
    uVar24 = SUB84(DAT_14c8464f8,0);
    uVar25 = SUB84(DAT_14c846500,0);
    uVar26 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  }
  else {
    dVar12 = *(double *)(lVar17 + 0x240);
    dVar8 = *(double *)(lVar17 + 0x248);
    dVar10 = *(double *)(lVar17 + 0x250);
    dVar9 = *(double *)(lVar17 + 600);
    local_138 = SUB81(dVar10,0);
    uStack_137 = (undefined2)((ulonglong)dVar10 >> 8);
    uStack_135 = (undefined1)((ulonglong)dVar10 >> 0x18);
    uStack_134 = (undefined2)((ulonglong)dVar10 >> 0x20);
    uStack_132 = (undefined1)((ulonglong)dVar10 >> 0x30);
    uStack_131 = (undefined1)((ulonglong)dVar10 >> 0x38);
    uStack_130 = SUB84(dVar9,0);
    uStack_12c = (undefined4)((ulonglong)dVar9 >> 0x20);
    pdVar20 = *(double **)(lVar17 + 0x228);
    local_148 = dVar12;
    uStack_140 = dVar8;
    if (pdVar20 == (double *)0x0) {
      uVar24 = 0x40;
      pdVar20 = (double *)FUN_14001cc68(0x40,0x10);
      dVar18 = DAT_14c8463d8;
      *pdVar20 = DAT_14c8463d0;
      pdVar20[1] = dVar18;
      dVar18 = DAT_14c8463e8;
      pdVar20[2] = DAT_14c8463e0;
      pdVar20[3] = dVar18;
      dVar18 = DAT_14c846500;
      pdVar20[4] = DAT_14c8464f8;
      pdVar20[5] = dVar18;
      dVar18 = DAT_14c846508;
      pdVar20[6] = DAT_14c846508;
      *(double **)(lVar17 + 0x228) = pdVar20;
    }
    auVar11._8_4_ = (int)-(ulonglong)(dVar8 != pdVar20[1]);
    auVar11._0_8_ = -(ulonglong)(dVar12 != *pdVar20);
    auVar11._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar20[1]) >> 0x20);
    iVar16 = movmskpd(SUB84(dVar18,0),auVar11);
    auVar13._8_4_ = (int)-(ulonglong)(dVar9 != pdVar20[3]);
    auVar13._0_8_ = -(ulonglong)(dVar10 != pdVar20[2]);
    auVar13._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar20[3]) >> 0x20);
    uVar21 = movmskpd(uVar24,auVar13);
    if ((uVar21 & 0x3fffffff) != 0 || iVar16 != 0) {
      *(uint *)(pdVar20 + 2) = CONCAT13(uStack_135,CONCAT21(uStack_137,local_138));
      *(uint *)((longlong)pdVar20 + 0x14) = CONCAT13(uStack_131,CONCAT12(uStack_132,uStack_134));
      *(undefined4 *)(pdVar20 + 3) = uStack_130;
      *(undefined4 *)((longlong)pdVar20 + 0x1c) = uStack_12c;
      *(undefined4 *)pdVar20 = (undefined4)local_148;
      *(undefined4 *)((longlong)pdVar20 + 4) = local_148._4_4_;
      *(undefined4 *)(pdVar20 + 1) = (undefined4)uStack_140;
      *(undefined4 *)((longlong)pdVar20 + 0xc) = uStack_140._4_4_;
      FUN_1448052ee(&local_148,&local_168);
      pdVar20[6] = (double)CONCAT44(uStack_154,local_158);
      pdVar20[4] = (double)CONCAT44(uStack_164,local_168);
      pdVar20[5] = (double)CONCAT44(uStack_15c,uStack_160);
    }
    uVar24 = SUB84(pdVar20[4],0);
    uVar25 = SUB84(pdVar20[5],0);
    uVar26 = (undefined4)((ulonglong)pdVar20[5] >> 0x20);
  }
  dVar12 = (double)FUN_144719204(uVar24,0);
  dVar10 = (double)FUN_144719204(SUB84((double)CONCAT44(uVar28,uVar27) * 90.0 +
                                       (double)CONCAT44(uVar26,uVar25),0),0);
  dVar18 = sin(dVar12 * 0.017453292519943295);
  dVar12 = cos(dVar12 * 0.017453292519943295);
  dVar8 = sin(dVar10 * 0.017453292519943295);
  dVar10 = cos(dVar10 * 0.017453292519943295);
  dVar9 = (double)*(float *)(param_1 + 0x688 + (ulonglong)(param_2 * 0x50));
  local_298 = (double)CONCAT62(uStack_11e,uStack_120) + dVar8 * dVar12 * dVar9;
  local_2a0 = dVar4 + dVar10 * dVar12 * dVar9;
  local_290 = local_118 + dVar18 * dVar9 + -512.0;
  FUN_1446f470e(&local_2a8,L"ShellEjectionTrace",1);
  lVar17 = local_2b0;
  uStack_124 = 0;
  uStack_120 = 0x101;
  local_f8 = 0;
  local_f0 = 0x800000000;
  local_d8 = 0;
  local_cc = 4;
  local_138 = 1;
  uStack_12c = 0;
  local_148 = local_2a8;
  uStack_137 = 1;
  local_128 = local_128 & 0xffffff00;
  uStack_134 = 0;
  uStack_132 = 0;
  local_e8 = *(undefined4 *)((longlong)plVar22 + 0xc);
  local_d0 = 1;
  uStack_140 = (double)plVar22[3];
  uStack_131 = 1;
  uStack_130 = CONCAT31(uStack_130._1_3_,1);
  uStack_135 = 1;
  local_2f8 = &DAT_14cad0f10;
  local_300 = &local_148;
  local_308 = 0x10;
  cVar14 = FUN_1400b50cc(local_2b0,&local_268,local_288,&local_2a0);
  if (cVar14 != '\0') {
    if (local_1b4 == 0) {
LAB_140a9d0d0:
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      if ((-1 < (int)local_1b8) && ((int)local_1b8 < DAT_14c9647dc)) {
        plVar22 = (longlong *)
                  ((ulonglong)((local_1b8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_1b8 >> 0x10) * 8));
        if ((plVar22 == (longlong *)0x0) ||
           (((int)plVar22[2] != local_1b4 || ((*(uint *)(plVar22 + 1) & 0x10200000) != 0))))
        goto LAB_140a9d0d0;
        lVar19 = *plVar22;
      }
    }
    fVar3 = *(float *)(param_1 + 0x694 + (ulonglong)(param_2 * 0x50));
    dVar4 = *(double *)(lVar17 + 0x6d0);
    uStack_154 = (undefined4)local_248;
    uStack_150 = (undefined4)((ulonglong)local_248 >> 0x20);
    uStack_164 = local_258;
    uStack_160 = uStack_254;
    uStack_15c = uStack_250;
    local_158 = uStack_24c;
    if (lVar19 == 0) {
      lVar19 = DAT_14c997c50;
    }
    bVar5 = *(byte *)(lVar19 + 0x60);
    uVar6 = *(undefined1 *)(lVar7 + 0xe39);
    iVar16 = *(int *)(param_1 + 0x918);
    *(uint *)(param_1 + 0x918) = iVar16 + 1U;
    if (*(uint *)(param_1 + 0x91c) < iVar16 + 1U) {
      FUN_145769f1c((longlong *)(param_1 + 0x910),iVar16);
    }
    lVar7 = *(longlong *)(param_1 + 0x910);
    lVar17 = (longlong)iVar16 * 0x30;
    *(float *)(lVar7 + lVar17) = (float)((double)fVar3 + dVar4);
    puVar1 = (undefined4 *)(lVar7 + 4 + lVar17);
    *puVar1 = local_168;
    puVar1[1] = uStack_164;
    puVar1[2] = uStack_160;
    puVar1[3] = uStack_15c;
    puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar17);
    *puVar2 = CONCAT44(local_158,uStack_15c);
    puVar2[1] = CONCAT44(uStack_150,uStack_154);
    *(uint *)(lVar7 + 0x20 + lVar17) = (uint)bVar5;
    *(undefined1 *)(lVar7 + 0x24 + lVar17) = uVar6;
    *(uint *)(lVar7 + 0x28 + lVar17) = param_2;
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
LAB_140a9cb79:
  if ((local_c0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a9d2f2 FUN_140a9d2f2 body=132 status=ok
// SIG undefined FUN_140a9d2f2(void)

undefined8 * FUN_140a9d2f2(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if ((((plVar2 == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar1 ||
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0)) ||
      ((*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x1c) ||
       ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))))) {
    puVar3 = &DAT_14c846480;
    puVar4 = param_2;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,0);
  }
  return param_2;
}



// FUNCTION 140a9d376 FUN_140a9d376 body=1218 status=ok
// SIG undefined FUN_140a9d376(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a9d376(longlong *param_1,ulonglong param_2,float param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb;
  
  if (*(char *)((longlong)param_1 + 0x3c) != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x90))();
  if ((((*(int *)((longlong)param_1 + 0x4ec) == 0) ||
       (uVar13 = *(uint *)(param_1 + 0x9d), (int)uVar13 < 0)) || (DAT_14c9647dc <= (int)uVar13)) ||
     (((puVar8 = (undefined8 *)
                 ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       puVar8 == (undefined8 *)0x0 || (*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x4ec)))
      || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140a9d55d;
  if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
    plVar6 = (longlong *)*puVar8;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  lVar5 = (**(code **)(*plVar6 + 0x180))();
  if (lVar5 == 0) goto LAB_140a9d55d;
  if (*(int *)((longlong)param_1 + 0x4ec) == 0) {
LAB_140a9d7fd:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x9d);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x4ec) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140a9d7fd;
      plVar6 = (longlong *)*puVar8;
    }
  }
  lVar5 = (**(code **)(*plVar6 + 0x180))();
  if ((*(longlong *)(lVar5 + 0x30) == 0) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x2b0) == 0)) goto LAB_140a9d55d;
  if (*(int *)((longlong)param_1 + 0x4ec) == 0) {
LAB_140a9d804:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x9d);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x4ec) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140a9d804;
      plVar6 = (longlong *)*puVar8;
    }
  }
  lVar5 = (**(code **)(*plVar6 + 0x180))();
  if (*(longlong *)(lVar5 + 0x30) == 0) {
    auVar15._0_8_ = 0;
  }
  else {
    auVar15._0_8_ = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x2b0);
  }
  auVar15._0_8_ = FUN_144916004(auVar15._0_8_);
  auVar15._8_8_ = extraout_XMM0_Qb;
  if (param_1[0x9e] != 0) {
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = (float)auVar15._0_8_ * *(float *)(param_1[0x9e] + 0x74);
    auVar15._0_8_ = auVar16._0_8_;
  }
  uVar13 = -(uint)(0.0001 < (float)auVar15._0_8_);
  param_3 = param_3 * (float)(~uVar13 & 0x3f800000 | (uint)(1.0 / (float)auVar15._0_8_) & uVar13);
LAB_140a9d55d:
  if (*(char *)((longlong)param_1 + 0x489) == '\x01') {
    bVar4 = *(byte *)((longlong)param_1 + 0x461);
  }
  else {
    FUN_140a9d980(param_1);
    uVar14 = FUN_140086d1f(param_1[0x9d]);
    *(undefined4 *)((longlong)param_1 + 0x48c) = uVar14;
    FUN_140a9d838(param_1,param_1 + 0x7e,param_2 & 0xffffffff,0);
    *(undefined2 *)(param_1 + 0x91) = 0x101;
    bVar4 = param_3 <= 0.5 && param_4 != 1;
    *(byte *)((longlong)param_1 + 0x461) = bVar4;
    if ((int)(param_2 & 0xff) < (int)param_1[0x90]) {
      bVar4 = 1;
      if (param_3 > 0.5 || param_4 == 1) {
        bVar4 = *(byte *)(param_1[0x8f] + (param_2 & 0xff));
      }
      *(byte *)((longlong)param_1 + 0x461) = bVar4;
    }
  }
  if (((bVar4 & 1) == 0) || (lVar5 = param_1[0x8d], lVar5 == 0)) {
    FUN_140a9d838(param_1,param_1 + 0x80,param_2 & 0xffffffff,0);
  }
  else {
    if ((*(char *)(lVar5 + 8) == '\0') &&
       (uVar13 = (uint)param_2 & 0xff, (int)uVar13 < (int)param_1[0x81])) {
      lVar2 = param_1[0x80];
      uVar9 = (ulonglong)(uVar13 << 4);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x10));
      uVar13 = *(uint *)(lVar2 + 8 + uVar9);
      uVar12 = 0;
      if (0 < (int)uVar13) {
        uVar11 = 8;
        if (uVar13 < 8) {
          uVar11 = uVar13;
        }
        puVar8 = (undefined8 *)(lVar5 + 0x50);
        uVar10 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + uVar9);
          plVar6 = *(longlong **)(lVar3 + 0x18 + uVar10);
          if ((((plVar6 != (longlong *)0x0) && (*plVar6 != -1)) &&
              (*(longlong *)(lVar3 + uVar10) != 0)) && ((DAT_14cb26569 & 1) != 0)) {
            *puVar8 = *(undefined8 *)(lVar3 + 0x20 + uVar10);
            plVar6 = *(longlong **)(lVar3 + 0x28 + uVar10);
            plVar7 = (longlong *)puVar8[1];
            if (plVar7 != plVar6) {
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
                UNLOCK();
                plVar7 = (longlong *)puVar8[1];
              }
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))();
                }
              }
              puVar8[1] = plVar6;
            }
            *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(*(longlong *)(lVar3 + uVar10) + 0x38);
            puVar8[3] = (double)*(float *)(lVar3 + 0x30 + uVar10);
            *(undefined4 *)((longlong)puVar8 + 0x27) = *(undefined4 *)(lVar3 + 0x3b + uVar10);
            puVar8[4] = *(undefined8 *)(lVar3 + 0x34 + uVar10);
            *(undefined1 *)((longlong)puVar8 + 0x2a) = 0;
            uVar12 = (ulonglong)((int)uVar12 + 1);
          }
          uVar10 = uVar10 + 0x40;
          puVar8 = puVar8 + 6;
        } while (uVar11 << 6 != uVar10);
        uVar12 = (ulonglong)(int)uVar12;
      }
      *(undefined8 *)(lVar5 + 0x38) = 0x3fa0e5604189374c;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(ulonglong *)(lVar5 + 0x48) = uVar12;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x10));
      lVar5 = param_1[0x8d];
      if ((*(char *)(lVar5 + 8) == '\0') && (DAT_14cb259f8 != 0)) {
        *(undefined8 *)(lVar5 + 0x1d0) = *(undefined8 *)(DAT_14cb259f8 + 0x98);
        if (lVar5 != 0) {
          FUN_140aeb4a6(lVar5);
        }
        *(undefined1 *)(lVar5 + 8) = 1;
        lVar5 = param_1[0x8d];
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x10));
    *(double *)(lVar5 + 0x40) = (double)param_3;
    if ((LPCRITICAL_SECTION)(lVar5 + 0x10) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x10));
    }
  }
  auVar17._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar17._0_8_ = DAT_14cb262c8;
  auVar17._12_4_ = 0x45300000;
  param_1[0x8e] =
       (longlong)
       ((((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
        (auVar17._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0);
  return;
}



// FUNCTION 140a9d838 FUN_140a9d838 body=327 status=ok
// SIG undefined FUN_140a9d838(void)

void FUN_140a9d838(longlong param_1,longlong *param_2,uint param_3,char param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70 [3];
  undefined8 local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)(param_3 & 0xff) < (int)param_2[1]) {
    FUN_140a9d980();
    uVar7 = (ulonglong)((param_3 & 0xff) << 4);
    lVar6 = (longlong)*(int *)(*param_2 + 8 + uVar7);
    if (lVar6 != 0) {
      puVar8 = *(undefined8 **)(*param_2 + uVar7);
      lVar6 = lVar6 << 6;
      do {
        plVar2 = (longlong *)puVar8[3];
        if ((plVar2 != (longlong *)0x0) && (*plVar2 != -1)) {
          if ((*(int *)(param_1 + 0x4ec) == 0) ||
             (uVar1 = *(uint *)(param_1 + 0x4e8), (int)uVar1 < 0)) {
LAB_140a9d972:
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              puVar4 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((puVar4 == (undefined8 *)0x0) ||
                  (*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x4ec))) ||
                 ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) goto LAB_140a9d972;
              uVar5 = *puVar4;
            }
          }
          puVar4 = puVar8;
          puVar3 = local_70;
          if (param_4 != '\0') {
            puVar4 = puVar8 + 1;
            puVar3 = local_58;
          }
          local_78 = 0;
          FUN_14084a448(plVar2,puVar3,*puVar4,uVar5);
          *puVar3 = 0;
          puVar3[1] = 0xffffffffffffffff;
          *(undefined1 *)(param_1 + 0x488) = 1;
        }
        puVar8 = puVar8 + 8;
        lVar6 = lVar6 + -0x40;
      } while (lVar6 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a9d980 FUN_140a9d980 body=876 status=ok
// SIG undefined FUN_140a9d980(void)

void FUN_140a9d980(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_148 [36];
  uint local_124;
  ulonglong local_120;
  uint *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar18 = (uint *)(param_1 + 0x4a8);
  uVar4 = *(uint *)(param_1 + 0x4c0);
  if (uVar4 == 0) {
    uVar12 = 1;
    uVar20 = 0;
    uVar7 = 0;
    iVar19 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x4b8);
    if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
      puVar5 = puVar18;
    }
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      iVar19 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar19 = uVar4 - 1;
      }
      uVar20 = 0;
      uVar12 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar12 = uVar20;
      }
      iVar19 = 0;
      do {
        if (uVar12 == uVar20) goto LAB_140a9dc50;
        iVar19 = iVar19 + 0x20;
        uVar7 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar20 = 0;
      iVar19 = 0;
    }
    uVar12 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar12 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar7 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar7) {
      uVar7 = uVar4;
    }
  }
  if (uVar7 != uVar4) {
    uVar14 = 0xffffffff;
    local_120 = (ulonglong)uVar4;
    do {
      if (((((*(longlong *)(*(longlong *)(param_1 + 0x498) + 8 + (longlong)(int)uVar7 * 0x18) != 0)
            && (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 != (longlong *)0x0)) &&
           (*(int *)(param_1 + 0x1c) != 0)) &&
          ((uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) &&
         ((lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar17 != 0 &&
          ((*(int *)(lVar17 + 0x10) == *(int *)(param_1 + 0x1c) &&
           ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)))))) {
        puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x498) + (longlong)(int)uVar7 * 0x18);
        iVar13 = 0;
        local_124 = uVar14;
        local_118 = puVar18;
        local_110 = param_1;
        (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,*puVar15,0);
        lVar17 = puVar15[1];
        puVar15 = local_a8;
        puVar16 = local_108;
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        lVar10 = lVar17 + 0x140;
        uVar4 = *(uint *)(lVar17 + 0x1d4);
        *(undefined4 *)(lVar17 + 0x1d0) = 0;
        if ((int)uVar4 < 0) {
          FUN_147f80112(lVar10,0);
          iVar13 = *(int *)(lVar17 + 0x1d0);
          uVar4 = *(uint *)(lVar17 + 0x1d4);
        }
        *(undefined1 *)(lVar17 + 0x26c) = 0;
        *(uint *)(lVar17 + 0x1d0) = iVar13 + 1U;
        if (uVar4 < iVar13 + 1U) {
          FUN_140089f7a(lVar10,iVar13);
        }
        if (*(longlong *)(lVar17 + 0x1c0) != 0) {
          lVar10 = *(longlong *)(lVar17 + 0x1c0);
        }
        lVar6 = (longlong)iVar13 * 0x80;
        puVar15 = local_108;
        puVar16 = (undefined8 *)(lVar6 + lVar10);
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar16 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        *(undefined8 *)(lVar10 + 0x60 + lVar6) = 0x3f800000;
        *(undefined2 *)(lVar10 + 0x68 + lVar6) = 0;
        *(undefined8 *)(lVar10 + 0x6c + lVar6) = 0;
        FUN_1447906c0(lVar17,0);
        uVar4 = *(uint *)(local_110 + 0x4c0);
        param_1 = local_110;
        puVar18 = local_118;
        uVar14 = local_124;
      }
      uVar14 = uVar14 & ~(uint)uVar12;
      puVar5 = *(uint **)(param_1 + 0x4b8);
      if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
        puVar5 = puVar18;
      }
      iVar13 = (int)uVar20;
      lVar17 = (longlong)iVar13;
      uVar7 = puVar5[lVar17] & uVar14;
      if (uVar7 == 0) {
        iVar8 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar8 = uVar4 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar13 < iVar8) {
          lVar10 = 0;
          do {
            uVar7 = puVar5[lVar17 + lVar10 + 1];
            if (uVar7 != 0) {
              uVar20 = (ulonglong)(iVar13 + (int)lVar10 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140a9dc20;
            }
            iVar19 = iVar19 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar9 - lVar17 != lVar10);
          uVar14 = 0xffffffff;
          lVar17 = (longlong)iVar9;
        }
        uVar20 = lVar17 + 1U & 0xffffffff;
        uVar7 = uVar4;
      }
      else {
LAB_140a9dc20:
        uVar12 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar12 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar7 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar7) {
          uVar7 = uVar4;
        }
      }
    } while (uVar7 != (uint)local_120);
  }
LAB_140a9dc50:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a9dcee FUN_140a9dcee body=2277 status=ok
// SIG undefined FUN_140a9dcee(void)

void FUN_140a9dcee(longlong param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_90;
  longlong *local_88;
  uint local_7c;
  ulonglong local_78;
  uint *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = *(uint *)(param_1 + 0x4c0);
  if (uVar5 == 0) {
    uVar19 = 1;
    uVar15 = 0;
    uVar12 = 0;
    iVar20 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x4b8);
    if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x4a8);
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar20 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar20 = uVar5 - 1;
      }
      uVar15 = 0;
      uVar19 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar19 = uVar15;
      }
      iVar20 = 0;
      do {
        if (uVar19 == uVar15) goto LAB_140a9e1bd;
        iVar20 = iVar20 + 0x20;
        uVar12 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar20 = 0;
    }
    uVar19 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar19 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar12 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar12) {
      uVar12 = uVar5;
    }
  }
  if (uVar12 != uVar5) {
    uVar18 = 0xffffffff;
    local_78 = (ulonglong)uVar5;
    local_70 = (uint *)(param_1 + 0x4a8);
    do {
      local_7c = uVar18;
      if (*(longlong *)(*(longlong *)(param_1 + 0x498) + 8 + (longlong)(int)uVar12 * 0x18) != 0) {
        puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x498) + (longlong)(int)uVar12 * 0x18 + 8);
        FUN_140086e06(param_1,puVar16);
        if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
LAB_140a9df76:
          iVar22 = 0;
          if (((((*(int *)(param_1 + 0x1c) == 0) ||
                (uVar5 = *(uint *)(param_1 + 0x18), (int)uVar5 < 0)) ||
               (DAT_14c9647dc <= (int)uVar5)) ||
              ((plVar14 = (longlong *)
                          ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
               plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(param_1 + 0x1c))))) ||
             (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (lVar17 = *plVar14, lVar17 == 0))))
          goto LAB_140a9e1b5;
          if (DAT_14cb939a8 == 0) {
            local_b0 = &local_68;
            local_68 = FUN_140940982;
            local_a0 = FUN_14081d0ea;
            local_a8 = (code *)&LAB_146522c26;
            local_b8 = &LAB_148a0db91;
            local_c0 = &LAB_146572ba7;
            local_c8 = L"Engine";
            local_d0 = 0;
            local_d8 = 0x10000004;
            local_e0 = 8;
            local_e8 = 0xdd8;
            FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
          }
          if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30))
          goto LAB_140a9e1b5;
          bVar3 = *(byte *)(lVar17 + 0xbd8);
          if ((*(int *)(lVar17 + 0xbf0) <= (int)(uint)bVar3) ||
             (lVar17 = *(longlong *)
                        (*(longlong *)(lVar17 + 0xbe8) + 8 +
                        (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8), lVar17 == 0))
          goto LAB_140a9e1b5;
          lVar7 = FUN_140086c3a();
          if (*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38))
          goto LAB_140a9e1b5;
          iVar21 = 0;
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30) {
            fVar23 = (float)FUN_140284960(lVar17);
            iVar21 = (int)fVar23;
            fVar23 = (float)FUN_140a9e5d4(lVar17);
            iVar22 = (int)fVar23;
          }
        }
        else {
          if (*(int *)(param_1 + 0x1c) != 0) {
            uVar5 = *(uint *)(param_1 + 0x18);
            if (((((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
                 (lVar17 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8),
                 lVar17 != 0)) &&
                ((*(int *)(lVar17 + 0x10) == *(int *)(param_1 + 0x1c) &&
                 ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)))) &&
               (lVar17 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar17 != 0)) {
              if (DAT_14caf64b8 == 0) {
                local_b0 = &local_68;
                local_68 = FUN_141030f22;
                local_a0 = FUN_14081d0ea;
                local_a8 = FUN_142b4754c;
                local_b8 = &LAB_147c45ce0;
                local_c0 = &LAB_1463f1ff4;
                local_c8 = L"Game";
                local_d0 = 0x4000000000;
                local_d8 = 0x10000004;
                local_e0 = 8;
                local_e8 = 0x428;
                FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
              }
              if (((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38))
                  && (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) &&
                 ((cVar4 = FUN_1449ce79a(lVar17), cVar4 != '\0' &&
                  (lVar7 = FUN_1447210f0(lVar17), lVar7 != 0)))) {
                uVar8 = FUN_1447210f0(lVar17);
                lVar17 = FUN_1405e4c36(uVar8);
                if ((lVar17 != 0) && (lVar7 = FUN_1402a137e(), lVar7 != 0)) {
                  uVar8 = *puVar16;
                  uVar2 = *(undefined4 *)(lVar17 + 0x314);
                  lVar11 = *(longlong *)(lVar7 + 0x430);
                  if (lVar11 == 0) {
                    uVar9 = FUN_1407f787c();
                    lVar11 = FUN_14477b664(uVar9);
                    *(longlong *)(lVar7 + 0x430) = lVar11;
                  }
                  lVar10 = *(longlong *)(lVar7 + 0x438);
                  if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) &&
                     (local_88 = (longlong *)(lVar7 + 0x428), *local_88 != 0)) {
                    local_90 = *(longlong **)(lVar11 + 0xb8);
                    if ((local_90 == (longlong *)0x0) ||
                       (cVar4 = (**(code **)(*local_90 + 0x108))(), cVar4 == '\0')) {
                      lVar10 = 0;
                    }
                    else {
                      uVar9 = (**(code **)(*local_90 + 0x110))();
                      lVar10 = FUN_144aff482(uVar9,local_88);
                    }
                    *(longlong *)(lVar7 + 0x438) = lVar10;
                  }
                  local_e8 = CONCAT31(local_e8._1_3_,1);
                  FUN_1447997cc(uVar8,lVar10,uVar2,0);
                  uVar8 = *puVar16;
                  uVar2 = *(undefined4 *)(lVar17 + 0x318);
                  lVar17 = *(longlong *)(lVar7 + 0x450);
                  if (lVar17 == 0) {
                    uVar9 = FUN_1407f787c();
                    lVar17 = FUN_14477b664(uVar9);
                    *(longlong *)(lVar7 + 0x450) = lVar17;
                  }
                  lVar11 = *(longlong *)(lVar7 + 0x458);
                  if (((lVar11 == 0) && (lVar11 = 0, lVar17 != 0)) &&
                     (local_90 = (longlong *)(lVar7 + 0x448), *local_90 != 0)) {
                    plVar14 = *(longlong **)(lVar17 + 0xb8);
                    if ((plVar14 == (longlong *)0x0) ||
                       (cVar4 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar4 == '\0')) {
                      lVar11 = 0;
                    }
                    else {
                      uVar9 = (**(code **)(*plVar14 + 0x110))(plVar14);
                      lVar11 = FUN_144aff482(uVar9,local_90);
                    }
                    *(longlong *)(lVar7 + 0x458) = lVar11;
                  }
                  local_e8 = CONCAT31(local_e8._1_3_,1);
                  FUN_1447997cc(uVar8,lVar11,uVar2,0);
                }
              }
            }
            goto LAB_140a9df76;
          }
LAB_140a9e1b5:
          iVar22 = 0;
          iVar21 = 0;
        }
        uVar8 = *puVar16;
        lVar17 = *(longlong *)(param_1 + 0x548);
        if (lVar17 == 0) {
          uVar9 = FUN_1407f787c();
          lVar17 = FUN_14477b664(uVar9);
          *(longlong *)(param_1 + 0x548) = lVar17;
        }
        lVar7 = *(longlong *)(param_1 + 0x550);
        if (lVar7 == 0) {
          if (lVar17 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            if (*(longlong *)(param_1 + 0x540) != 0) {
              plVar14 = *(longlong **)(lVar17 + 0xb8);
              if ((plVar14 == (longlong *)0x0) ||
                 (local_90 = plVar14, cVar4 = (**(code **)(*plVar14 + 0x108))(), cVar4 == '\0')) {
                lVar7 = 0;
              }
              else {
                local_88 = (longlong *)(param_1 + 0x540);
                uVar9 = (**(code **)(*local_90 + 0x110))();
                lVar7 = FUN_144aff482(uVar9,local_88);
              }
              *(longlong *)(param_1 + 0x550) = lVar7;
            }
          }
        }
        local_e8 = local_e8 & 0xffffff00;
        FUN_1447997cc(uVar8,lVar7,(float)iVar21,0);
        uVar8 = *puVar16;
        lVar17 = *(longlong *)(param_1 + 0x560);
        if (lVar17 == 0) {
          uVar9 = FUN_1407f787c();
          lVar17 = FUN_14477b664(uVar9);
          *(longlong *)(param_1 + 0x560) = lVar17;
        }
        lVar7 = *(longlong *)(param_1 + 0x568);
        if (lVar7 == 0) {
          if (lVar17 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            if (*(longlong *)(param_1 + 0x558) != 0) {
              plVar14 = *(longlong **)(lVar17 + 0xb8);
              if ((plVar14 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar4 == '\0')) {
                lVar7 = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar14 + 0x110))(plVar14);
                lVar7 = FUN_144aff482(uVar9,param_1 + 0x558);
              }
              *(longlong *)(param_1 + 0x568) = lVar7;
            }
          }
        }
        local_e8 = local_e8 & 0xffffff00;
        FUN_1447997cc(uVar8,lVar7,(float)iVar22,0);
        uVar5 = *(uint *)(param_1 + 0x4c0);
      }
      uVar18 = local_7c & ~(uint)uVar19;
      puVar6 = *(uint **)(param_1 + 0x4b8);
      if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
        puVar6 = local_70;
      }
      iVar22 = (int)uVar15;
      lVar17 = (longlong)iVar22;
      uVar12 = puVar6[lVar17] & uVar18;
      if (uVar12 == 0) {
        iVar21 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar21 = uVar5 - 1;
        }
        iVar21 = iVar21 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar13 = iVar21;
        if (iVar21 < iVar22) {
          iVar13 = iVar22;
        }
        if (iVar22 < iVar21) {
          lVar7 = 0;
          do {
            uVar12 = puVar6[lVar17 + lVar7 + 1];
            if (uVar12 != 0) {
              uVar15 = (ulonglong)(iVar22 + (int)lVar7 + 1);
              uVar18 = 0xffffffff;
              goto LAB_140a9e17b;
            }
            iVar20 = iVar20 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar13 - lVar17 != lVar7);
          uVar18 = 0xffffffff;
          lVar17 = (longlong)iVar13;
        }
        uVar15 = lVar17 + 1U & 0xffffffff;
        uVar12 = uVar5;
      }
      else {
LAB_140a9e17b:
        uVar19 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar19 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar12 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar12) {
          uVar12 = uVar5;
        }
      }
    } while (uVar12 != (uint)local_78);
  }
LAB_140a9e1bd:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a9e5d4 FUN_140a9e5d4 body=287 status=ok
// SIG undefined FUN_140a9e5d4(void)

float FUN_140a9e5d4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if (plVar2 == (longlong *)0x0) {
LAB_140a9e68f:
    fVar6 = *(float *)(param_1 + 0x1e8) * *(float *)(param_1 + 0x264);
  }
  else {
    pcVar3 = *(code **)(*plVar2 + 0x5e8);
    if (pcVar3 == FUN_140972dde) {
      if (plVar2[0x76] == 0) {
        pcVar3 = *(code **)(*plVar2 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          if (*(code **)(plVar2[0x784] + 0x18) == (code *)&LAB_144904684) {
            if ((((*(int *)((longlong)plVar2 + 0x75b4) == 0) ||
                 (uVar1 = *(uint *)(plVar2 + 0xeb6), (int)uVar1 < 0)) ||
                (DAT_14c9647dc <= (int)uVar1)) ||
               (((plVar5 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar5 == (longlong *)0x0 ||
                 ((int)plVar5[2] != *(int *)((longlong)plVar2 + 0x75b4))) ||
                ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_140a9e68f;
            if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar5;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = lVar4 + 0x110;
          }
          else {
            lVar4 = (**(code **)(plVar2[0x784] + 0x18))(plVar2 + 0x784);
          }
          if (lVar4 == 0) goto LAB_140a9e68f;
          lVar4 = *(longlong *)(lVar4 + 0x20);
        }
        else {
          lVar4 = (*pcVar3)();
        }
        if (lVar4 == 0) goto LAB_140a9e68f;
        lVar4 = *(longlong *)(lVar4 + 0x3b0);
        goto LAB_140a9e6cd;
      }
    }
    else {
      lVar4 = (*pcVar3)();
LAB_140a9e6cd:
      if (lVar4 == 0) goto LAB_140a9e68f;
    }
    fVar6 = *(float *)(param_1 + 0x1e8);
  }
  return fVar6;
}



// FUNCTION 140a9e6f4 FUN_140a9e6f4 body=10272 status=ok
// SIG undefined FUN_140a9e6f4(void)

void FUN_140a9e6f4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  double dVar23;
  int iVar24;
  LARGE_INTEGER *pLVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  LARGE_INTEGER *pLVar30;
  longlong lVar31;
  int iVar32;
  uint uVar33;
  double *pdVar34;
  int iVar35;
  longlong lVar36;
  int iVar37;
  int iVar38;
  longlong lVar39;
  double *pdVar40;
  byte bVar41;
  int iVar42;
  ulonglong uVar43;
  int iVar44;
  int iVar45;
  longlong lVar46;
  float fVar47;
  double dVar48;
  double dVar49;
  LARGE_INTEGER LVar50;
  double dVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  float fVar59;
  double dVar60;
  LARGE_INTEGER LVar61;
  float fVar62;
  float fVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auStack_538 [32];
  longlong local_518;
  LARGE_INTEGER *local_510;
  LARGE_INTEGER *local_508;
  longlong local_500;
  undefined4 local_4f8;
  undefined1 local_4f0;
  double local_4e8;
  double local_4e0;
  undefined1 local_4d8 [16];
  double local_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  undefined8 uStack_4a0;
  ulonglong local_498;
  longlong local_490;
  double local_488;
  double local_480;
  uint local_474;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  int local_43c;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  longlong local_418;
  ulonglong uStack_410;
  longlong local_408;
  undefined8 uStack_400;
  double local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_398;
  double local_390;
  double local_388;
  LARGE_INTEGER local_378;
  LARGE_INTEGER local_370;
  double dStack_368;
  undefined8 local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  undefined8 local_340;
  double dStack_338;
  double local_330;
  double dStack_328;
  undefined8 local_320;
  double local_318;
  double local_310;
  double local_308;
  undefined8 local_300;
  LARGE_INTEGER local_2f8;
  LARGE_INTEGER LStack_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  undefined8 local_2c0;
  double dStack_2b8;
  double local_2b0;
  double dStack_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  LARGE_INTEGER local_278;
  double dStack_270;
  double local_268;
  undefined8 local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  LARGE_INTEGER local_218;
  double local_210;
  double local_208;
  undefined8 local_200;
  LARGE_INTEGER local_1f8 [16];
  LARGE_INTEGER local_178;
  LARGE_INTEGER LStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  LARGE_INTEGER local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_538;
  lVar26 = *(longlong *)(param_1 + 0x48);
  QueryPerformanceCounter(&local_178);
  fVar56 = *(float *)(lVar26 + 0x174);
  local_488 = 1.0;
  local_448 = 1.0;
  if ((0.0 < fVar56) && (local_448 = 1.0, ABS(*(float *)(lVar26 + 0x178) - fVar56) <= 1e-08)) {
    local_448 = (double)fVar56;
  }
  fVar56 = *(float *)(lVar26 + 0x16c);
  local_458 = 1.0;
  if ((0.0 < fVar56) && (local_458 = 1.0, ABS(*(float *)(lVar26 + 0x170) - fVar56) <= 1e-08)) {
    local_458 = (double)fVar56;
  }
  fVar56 = *(float *)(lVar26 + 0x164);
  if ((0.0 < fVar56) && (ABS(*(float *)(lVar26 + 0x168) - fVar56) <= 1e-08)) {
    local_488 = (double)fVar56;
  }
  if (*(char *)(lVar26 + 0x160) == '\0') {
    pdVar40 = &local_448;
    local_458 = local_488;
LAB_140a9e881:
    *pdVar40 = local_488;
  }
  else if (*(char *)(lVar26 + 0x160) == '\x02') {
    pdVar40 = &local_458;
    goto LAB_140a9e881;
  }
  dVar51 = (double)local_178.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar44 = *(int *)(lVar26 + 0x120);
  local_408 = 0;
  uStack_400 = 0;
  local_490 = lVar26;
  if (*(int *)(lVar26 + 0x26c) == 0) {
    fVar47 = 1.0 / (float)iVar44;
    fVar56 = *(float *)(lVar26 + 400);
    local_4e0 = *(double *)(lVar26 + 0xf0);
    local_4e8 = *(double *)(lVar26 + 0xf8);
    dVar23 = (double)(fVar47 * 0.5);
    *(double *)(lVar26 + 0xd8) = dVar23 * local_4e0 + *(double *)(lVar26 + 0xd8);
    *(double *)(lVar26 + 0xe0) = local_4e8 * dVar23 + *(double *)(lVar26 + 0xe0);
    *(double *)(lVar26 + 0xe8) = *(double *)(lVar26 + 0x100) * dVar23 + *(double *)(lVar26 + 0xe8);
    local_418 = 0;
    uStack_410 = (ulonglong)(uint)(iVar44 * iVar44);
    local_450 = dVar51;
    if (iVar44 != 0) {
      FUN_140aa1110(&local_418);
      iVar44 = *(int *)(lVar26 + 0x120);
      if (0 < iVar44) {
        if (0.99 <= fVar56) {
          fVar56 = 0.99;
        }
        if (fVar56 <= 0.0) {
          fVar56 = 0.0;
        }
        dVar51 = (double)(fVar56 * fVar47 * 0.5);
        local_4e0 = local_4e0 * dVar51;
        local_4e8 = local_4e8 * dVar51;
        uVar18 = 0;
        lVar22 = 0;
        iVar42 = 0;
        do {
          if (0 < iVar44) {
            local_4d8._0_4_ = iVar42;
            lVar22 = (longlong)(int)lVar22;
            iVar35 = 0;
            do {
              fVar56 = (float)(*(int *)(lVar26 + 0x198) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000)
                       + -1.0;
              uVar33 = *(int *)(lVar26 + 0x198) * -0x4b9b4d07 + 0x9d6f2492;
              *(uint *)(lVar26 + 0x198) = uVar33;
              fVar53 = (float)(uVar33 >> 9 | 0x3f800000) + -1.0;
              dVar51 = (double)(fVar53 + fVar53 + -1.0) * local_4e8 +
                       (double)((float)iVar35 * fVar47) * *(double *)(lVar26 + 0xf8) +
                       *(double *)(lVar26 + 0xe0);
              dVar23 = (double)(fVar56 + fVar56 + -1.0) * local_4e0 +
                       *(double *)(lVar26 + 0xf0) * (double)((float)iVar42 * fVar47) +
                       *(double *)(lVar26 + 0xd8);
              lVar28 = lVar22 * 0x20;
              fVar56 = (float)(dVar23 / *(double *)(lVar26 + 8) - (double)*(int *)(lVar26 + 0xc0));
              dVar48 = dVar51 / *(double *)(lVar26 + 0x10) - (double)*(int *)(lVar26 + 0xc4);
              auVar52._0_4_ = (float)dVar48;
              auVar52._4_4_ = (int)((ulonglong)dVar48 >> 0x20);
              auVar52._8_8_ = 0;
              iVar38 = (int)ROUND(fVar56 + fVar56 + -0.5) >> 1;
              iVar19 = (int)ROUND(auVar52._0_4_ + auVar52._0_4_ + -0.5) >> 1;
              iVar21 = -((int)ROUND(-0.5 - (fVar56 + fVar56)) >> 1);
              iVar24 = -((int)ROUND(-0.5 - (auVar52._0_4_ + auVar52._0_4_)) >> 1);
              iVar45 = *(int *)(lVar26 + 0x158);
              iVar44 = iVar45 + -1;
              if (iVar44 <= iVar38) {
                iVar38 = iVar44;
              }
              if (iVar38 < 1) {
                iVar38 = 0;
              }
              if (iVar44 <= iVar19) {
                iVar19 = iVar44;
              }
              if (iVar19 < 1) {
                iVar19 = 0;
              }
              if (iVar44 <= iVar21) {
                iVar21 = iVar44;
              }
              if (iVar21 < 1) {
                iVar21 = 0;
              }
              if (iVar44 <= iVar24) {
                iVar24 = iVar44;
              }
              if (iVar24 < 1) {
                iVar24 = 0;
              }
              lVar31 = *(longlong *)(lVar26 + 0x148);
              lVar36 = (longlong)(iVar19 * iVar45 + iVar38);
              bVar41 = *(byte *)(lVar31 + lVar36);
              lVar20 = (longlong)(iVar19 * iVar45 + iVar21);
              bVar4 = *(byte *)(lVar31 + lVar20);
              lVar39 = (longlong)(iVar38 + iVar24 * iVar45);
              bVar5 = *(byte *)(lVar31 + lVar39);
              lVar46 = (longlong)(iVar24 * iVar45 + iVar21);
              bVar6 = *(byte *)(lVar31 + lVar46);
              lVar31 = *(longlong *)(local_490 + 0x138);
              uVar8 = *(ushort *)(lVar31 + lVar36 * 2);
              uVar9 = *(ushort *)(lVar31 + lVar20 * 2);
              uVar10 = *(ushort *)(lVar31 + lVar39 * 2);
              uVar11 = *(ushort *)(lVar31 + lVar46 * 2);
              auVar66 = roundss(ZEXT416(0),ZEXT416((uint)fVar56),0xb);
              fVar56 = fVar56 - auVar66._0_4_;
              auVar66 = roundss(ZEXT816(0),auVar52,0xb);
              fVar53 = auVar52._0_4_ - auVar66._0_4_;
              *(double *)(local_418 + lVar28) =
                   dVar23 - (double)*(int *)(local_490 + 200) * *(double *)(lVar26 + 8);
              fVar55 = ((float)uVar11 + -32768.0) * 0.0078125;
              *(double *)(local_418 + 8 + lVar28) =
                   dVar51 - (double)*(int *)(local_490 + 0xcc) * *(double *)(local_490 + 0x10);
              if (fVar53 <= fVar56) {
                fVar67 = ((float)uVar9 + -32768.0) * 0.0078125;
                fVar63 = fVar56 - fVar53;
                fVar68 = fVar56;
                fVar59 = fVar55;
              }
              else {
                fVar68 = fVar53;
                fVar59 = ((float)uVar10 + -32768.0) * 0.0078125;
                fVar63 = fVar56;
                fVar67 = fVar55;
              }
              pdVar40 = (double *)(local_418 + lVar28);
              fVar55 = (float)bVar41 / 255.0;
              fVar69 = (float)bVar5 / 255.0;
              fVar55 = ((float)bVar4 / 255.0 - fVar55) * fVar56 + fVar55;
              fVar55 = fVar53 * ((((float)bVar6 / 255.0 - fVar69) * fVar56 + fVar69) - fVar55) +
                       fVar55;
              pdVar40[2] = ((double)fVar59 * ((1.0 - (1.0 - (double)fVar68)) - (double)fVar63) +
                           (double)(((float)uVar8 + -32768.0) * 0.0078125) * (1.0 - (double)fVar68)
                           + (double)fVar67 * (double)fVar63) * *(double *)(local_490 + 0x18);
              if (((fVar55 < *(float *)(local_490 + 0x17c) ||
                    fVar55 == *(float *)(local_490 + 0x17c)) ||
                  (*(float *)(local_490 + 0x180) < fVar55)) ||
                 (uVar33 = *(int *)(local_490 + 0x198) * 0xbb38435 + 0x3619636b,
                 *(uint *)(local_490 + 0x198) = uVar33,
                 fVar55 < (float)(uVar33 >> 9 | 0x3f800000) + -1.0)) {
                bVar41 = 0;
              }
              else {
                bVar41 = 1;
                if ((longlong)*(int *)(local_490 + 0x2e8) != 0) {
                  lVar26 = *(longlong *)(local_490 + 0x2e0);
                  dVar51 = *pdVar40;
                  lVar28 = 0;
                  do {
                    if ((((*(double *)(lVar26 + lVar28) <= dVar51 &&
                           dVar51 != *(double *)(lVar26 + lVar28)) &&
                         (dVar51 < *(double *)(lVar26 + 0x18 + lVar28))) &&
                        ((dVar23 = pdVar40[1], pdVar34 = (double *)(lVar26 + 8 + lVar28),
                         *pdVar34 <= dVar23 && dVar23 != *pdVar34 &&
                         ((dVar23 < *(double *)(lVar26 + 0x20 + lVar28) &&
                          (dVar23 = pdVar40[2], pdVar34 = (double *)(lVar26 + 0x10 + lVar28),
                          *pdVar34 <= dVar23 && dVar23 != *pdVar34)))))) &&
                       (dVar23 < *(double *)(lVar26 + 0x28 + lVar28))) {
                      bVar41 = 0;
                      break;
                    }
                    lVar28 = lVar28 + 0x38;
                    bVar41 = 1;
                  } while ((longlong)*(int *)(local_490 + 0x2e8) * 0x38 - lVar28 != 0);
                }
              }
              *(byte *)(pdVar40 + 3) = bVar41;
              *(float *)((longlong)pdVar40 + 0x1c) = fVar55;
              uVar18 = uVar18 + bVar41;
              lVar22 = lVar22 + 1;
              iVar35 = iVar35 + 1;
              iVar44 = *(int *)(local_490 + 0x120);
              lVar26 = local_490;
            } while (iVar35 < iVar44);
          }
          iVar42 = iVar42 + 1;
        } while (iVar42 < iVar44);
        if (uVar18 != 0) {
          iVar44 = (uint)uStack_400;
          uStack_400 = CONCAT44(uStack_400._4_4_,(uint)uStack_400 + uVar18);
          if (uStack_400._4_4_ - iVar44 < uVar18) {
            FUN_140518214(&local_408);
          }
          *(int *)(lVar26 + 0x268) = *(int *)(lVar26 + 0x268) + uVar18;
          local_518 = CONCAT71(local_518._1_7_,1);
          FUN_140aa0f16(lVar26 + 0x2f0,uVar18,0,3);
          iVar44 = *(int *)(lVar26 + 0x120);
          if (0 < iVar44) {
            local_4b8._0_8_ = lVar26 + 0x1a0;
            local_498 = 0;
            iVar35 = 0;
            iVar42 = 0;
            do {
              if (iVar44 < 1) {
                uVar18 = (int)local_498 + 1;
              }
              else {
                local_474 = (int)local_498 + 1;
                lVar22 = (longlong)iVar42 * 0x20;
                iVar45 = 0;
                auVar66._8_8_ = 0;
                auVar66._0_8_ = local_488;
                local_43c = iVar42;
                do {
                  lVar28 = local_418;
                  lVar22 = lVar22 + 0x20;
                  if (*(char *)(local_418 + -8 + lVar22) == '\x01') {
                    if (*(char *)(lVar26 + 0x18d) == '\x01') {
                      FUN_144a5562a(lVar26,&local_430,*(undefined4 *)(local_418 + -4 + lVar22));
                    }
                    else {
                      local_430 = auVar66._0_8_;
                      local_428 = local_458;
                      local_420 = local_448;
                    }
                    if (*(char *)(lVar26 + 0x18c) == '\0') {
                      uVar57 = 0;
                      uVar58 = 0;
                      dVar51 = 1.0;
                    }
                    else {
                      uVar18 = *(int *)(lVar26 + 0x198) * 0xbb38435 + 0x3619636b;
                      *(uint *)(lVar26 + 0x198) = uVar18;
                      fVar56 = ((float)(uVar18 >> 9 | 0x3f800000) + -1.0) * 360.0;
                      uVar57 = 0;
                      uVar58 = 0;
                      dVar51 = 1.0;
                      if ((fVar56 != 0.0) || (NAN(fVar56))) {
                        dVar51 = 0.0;
                        uVar57 = 0;
                        uVar58 = 0x3ff00000;
                        if ((fVar56 != 90.0) || (NAN(fVar56))) {
                          uVar57 = 0;
                          uVar58 = 0;
                          dVar51 = -1.0;
                          if ((fVar56 != 180.0) || (NAN(fVar56))) {
                            dVar51 = 0.0;
                            uVar57 = 0;
                            uVar58 = 0xbff00000;
                            if ((fVar56 != 270.0) || (NAN(fVar56))) {
                              dVar51 = sin((double)fVar56 * 0.017453292519943295);
                              uVar57 = SUB84(dVar51,0);
                              uVar58 = (undefined4)((ulonglong)dVar51 >> 0x20);
                              dVar51 = cos((double)fVar56 * 0.017453292519943295);
                            }
                          }
                        }
                      }
                    }
                    local_178 = (LARGE_INTEGER)(dVar51 * local_430);
                    LStack_170 = (LARGE_INTEGER)((double)CONCAT44(uVar58,uVar57) * local_430);
                    local_168 = local_430 * 0.0;
                    dVar23 = dVar51 * 0.0;
                    local_158 = (dVar23 - (double)CONCAT44(uVar58,uVar57)) * local_428;
                    dVar48 = (double)CONCAT44(uVar58,uVar57) * 0.0;
                    dStack_150 = (dVar51 + dVar48) * local_428;
                    local_148 = local_428 * -0.0;
                    local_138 = -(dVar48 + dVar23) * local_420;
                    local_130 = ((double)CONCAT44(uVar58,uVar57) * -0.0 + dVar23) * local_420;
                    uStack_160 = 0;
                    local_140 = 0;
                    local_128 = local_420;
                    local_120 = 0;
                    local_118.s = DAT_14c8464e0.s;
                    local_110 = DAT_14c8464e8;
                    local_108 = DAT_14c8464f0;
                    local_100 = 0x3ff0000000000000;
                    if (*(char *)(lVar26 + 0x18e) == '\x01') {
                      local_4d8._0_8_ = DAT_14c8464e0.QuadPart;
                      local_4e8 = DAT_14c8464e8;
                      local_4e0 = DAT_14c8464f0;
                      pdVar40 = (double *)(lVar28 + lVar22 + -0x20);
                      iVar44 = *(int *)(lVar26 + 0x120);
                      pdVar34 = (double *)(local_418 + (longlong)iVar44 * -0x20 + -0x20 + lVar22);
                      if ((int)local_498 == 0) {
                        pdVar34 = pdVar40;
                      }
                      dVar51 = *pdVar34;
                      dVar23 = pdVar34[1];
                      local_4c0 = pdVar34[2];
                      pdVar34 = (double *)(local_418 + lVar22) + (longlong)iVar44 * 4 + -4;
                      if (iVar44 <= (int)local_474) {
                        pdVar34 = pdVar40;
                      }
                      local_438 = *pdVar34;
                      dVar48 = pdVar34[1];
                      local_460 = pdVar34[2];
                      pdVar34 = (double *)(local_418 + lVar22 + -0x40);
                      if (iVar45 == 0) {
                        pdVar34 = pdVar40;
                      }
                      dVar49 = *pdVar34;
                      local_470 = pdVar34[1];
                      dVar64 = pdVar34[2];
                      if (iVar45 + 1 < iVar44) {
                        pdVar40 = (double *)(local_418 + lVar22);
                      }
                      local_468 = *pdVar40;
                      local_4a8 = pdVar40[1];
                      local_480 = pdVar40[2];
                      if (((((dVar51 != local_438) || (NAN(dVar51) || NAN(local_438))) ||
                           (dVar23 != dVar48)) ||
                          ((NAN(dVar23) || NAN(dVar48) || (local_4c0 != local_460)))) ||
                         (NAN(local_4c0) || NAN(local_460))) {
                        if ((dVar49 == local_468) && (!NAN(dVar49) && !NAN(local_468))) {
                          if ((local_470 == local_4a8) && (!NAN(local_470) && !NAN(local_4a8))) {
                            if ((dVar64 == local_480) && (!NAN(dVar64) && !NAN(local_480)))
                            goto LAB_140aa0248;
                          }
                        }
                        dVar65 = (dVar51 - local_438) * (local_470 - local_4a8) -
                                 (dVar49 - local_468) * (dVar23 - dVar48);
                        dVar51 = (local_4c0 - local_460) * (dVar49 - local_468) -
                                 (dVar64 - local_480) * (dVar51 - local_438);
                        LVar61 = (LARGE_INTEGER)
                                 ((dVar23 - dVar48) * (dVar64 - local_480) -
                                 (local_470 - local_4a8) * (local_4c0 - local_460));
                        dVar23 = dVar65 * dVar65 + (double)LVar61 * (double)LVar61 + dVar51 * dVar51
                        ;
                        if (((dVar23 != 1.0) ||
                            (dVar48 = dVar65, LVar50 = LVar61, local_230 = dVar51, NAN(dVar23))) &&
                           (dVar48 = DAT_14c8464f0, LVar50 = DAT_14c8464e0,
                           local_230 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar23)) {
                          dVar23 = 1.0 / SQRT(dVar23);
                          dVar48 = dVar65 * dVar23;
                          LVar50 = (LARGE_INTEGER)((double)LVar61 * dVar23);
                          local_230 = dVar51 * dVar23;
                        }
                        auVar66._8_8_ = 0;
                        auVar66._0_8_ = local_488;
                        local_228 = (double)(-(ulonglong)(0.0 < dVar48) & 0x3ff0000000000000 |
                                            (ulonglong)
                                            (~(uint)(-(ulonglong)(0.0 < dVar48) >> 0x20) &
                                            (uint)(-(ulonglong)(dVar48 < 0.0) >> 0x20) & 0xbff00000)
                                            << 0x20);
                        local_238 = (double)LVar50 * local_228;
                        local_230 = local_230 * local_228;
                        local_228 = local_228 * dVar48;
                        dVar48 = local_230 * 0.0 + local_238;
                        dVar51 = local_238 * 0.0 + local_228 * -0.0;
                        LVar61 = (LARGE_INTEGER)(local_230 * -0.0 - local_228);
                        dVar23 = dVar48 * dVar48 + (double)LVar61 * (double)LVar61 + dVar51 * dVar51
                        ;
                        if (((dVar23 != 1.0) ||
                            (local_268 = dVar48, local_278 = LVar61, dStack_270 = dVar51,
                            NAN(dVar23))) &&
                           (local_268 = DAT_14c8464f0, local_278 = DAT_14c8464e0,
                           dStack_270 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar23)) {
                          dVar23 = 1.0 / SQRT(dVar23);
                          local_268 = dVar48 * dVar23;
                          local_278 = (LARGE_INTEGER)((double)LVar61 * dVar23);
                          dStack_270 = dVar51 * dVar23;
                        }
                        local_248 = local_238 * dStack_270 - (double)local_278 * local_230;
                        local_250 = local_228 * (double)local_278 - local_268 * local_238;
                        local_258 = local_230 * local_268 - dStack_270 * local_228;
                        local_260 = 0;
                        local_240 = 0;
                        local_220 = 0;
                        local_218.s = DAT_14c8464e0.s;
                        local_210 = DAT_14c8464e8;
                        local_208 = DAT_14c8464f0;
                        local_200 = 0x3ff0000000000000;
                        FUN_1447fea8d(&local_3f8,&local_178,&local_278);
                        local_318 = local_398 + *(double *)(lVar28 + -0x20 + lVar22);
                        local_310 = local_390 + *(double *)(lVar28 + -0x18 + lVar22);
                        local_308 = local_388 + *(double *)(lVar28 + -0x10 + lVar22);
                        pLVar30 = &local_2f8;
                        pLVar25 = &local_378;
                        goto LAB_140aa0408;
                      }
LAB_140aa0248:
                      local_2e0 = 0;
                      local_2c0 = 0;
                      dStack_2a8 = local_420;
                      local_2a0 = 0;
                      local_298 = (double)DAT_14c8464e0 + *(double *)(lVar28 + -0x20 + lVar22);
                      local_290 = DAT_14c8464e8 + *(double *)(lVar28 + -0x18 + lVar22);
                      local_288 = DAT_14c8464f0 + *(double *)(lVar28 + -0x10 + lVar22);
                      local_280 = 0x3ff0000000000000;
                      local_2f8 = local_178;
                      LStack_2f0 = LStack_170;
                      local_2e8 = local_168;
                      dStack_2d8 = local_158;
                      local_2d0 = dStack_150;
                      dStack_2c8 = local_148;
                      dStack_2b8 = local_138;
                      local_2b0 = local_130;
                      FUN_1447fea8d(&local_278,&local_2f8,local_4b8._0_8_);
                      pLVar30 = &local_278;
                      pLVar25 = local_1f8;
                      for (lVar28 = 0x10; lVar28 != 0; lVar28 = lVar28 + -1) {
                        *pLVar25 = *pLVar30;
                        pLVar30 = pLVar30 + 1;
                        pLVar25 = pLVar25 + 1;
                      }
                      auVar66._8_8_ = 0;
                      auVar66._0_8_ = local_488;
                    }
                    else {
                      local_2e0 = 0;
                      local_2c0 = 0;
                      dStack_2a8 = local_420;
                      local_2a0 = 0;
                      local_298 = (double)DAT_14c8464e0 + *(double *)(lVar28 + -0x20 + lVar22);
                      local_290 = DAT_14c8464e8 + *(double *)(lVar28 + -0x18 + lVar22);
                      local_288 = DAT_14c8464f0 + *(double *)(lVar28 + -0x10 + lVar22);
                      local_280 = 0x3ff0000000000000;
                      pLVar30 = &local_278;
                      pLVar25 = &local_2f8;
                      local_2f8 = local_178;
                      LStack_2f0 = LStack_170;
                      local_2e8 = local_168;
                      dStack_2d8 = local_158;
                      local_2d0 = dStack_150;
                      dStack_2c8 = local_148;
                      dStack_2b8 = local_138;
                      local_2b0 = local_130;
LAB_140aa0408:
                      FUN_1447fea8d(pLVar30,pLVar25,local_4b8._0_8_);
                      pLVar25 = local_1f8;
                      for (lVar28 = 0x10; lVar28 != 0; lVar28 = lVar28 + -1) {
                        *pLVar25 = *pLVar30;
                        pLVar30 = pLVar30 + 1;
                        pLVar25 = pLVar25 + 1;
                      }
                    }
                    lVar31 = (longlong)iVar35;
                    pLVar30 = local_1f8;
                    pLVar25 = (LARGE_INTEGER *)(lVar31 * 0x80 + local_408);
                    for (lVar28 = 0x10; lVar28 != 0; lVar28 = lVar28 + -1) {
                      *pLVar25 = *pLVar30;
                      pLVar30 = pLVar30 + 1;
                      pLVar25 = pLVar25 + 1;
                    }
                    *(int *)(lVar26 + 0x198) = *(int *)(lVar26 + 0x198) * 0xbb38435 + 0x3619636b;
                    iVar35 = iVar35 + 1;
                    FUN_144a558f0(lVar26,lVar31,local_1f8);
                    iVar44 = *(int *)(lVar26 + 0x120);
                  }
                  iVar45 = iVar45 + 1;
                } while (iVar45 < iVar44);
                iVar42 = local_43c + iVar45;
                uVar18 = local_474;
              }
              local_498 = (ulonglong)uVar18;
            } while ((int)uVar18 < iVar44);
          }
        }
      }
      if (local_418 != 0) {
        FUN_1400020a8();
      }
    }
    uVar18 = (uint)uStack_400;
    dVar51 = local_450;
  }
  else {
    dVar23 = *(double *)(lVar26 + 0xf0);
    if (dVar23 < 0.0) {
      *(double *)(lVar26 + 0xd8) = *(double *)(lVar26 + 0xd8) + dVar23;
      *(double *)(lVar26 + 0xf0) = -dVar23;
    }
    dVar23 = *(double *)(lVar26 + 0xf8);
    if (dVar23 < 0.0) {
      *(double *)(lVar26 + 0xe0) = *(double *)(lVar26 + 0xe0) + dVar23;
      *(double *)(lVar26 + 0xf8) = -dVar23;
    }
    if (iVar44 == 0) goto LAB_140aa0cf1;
    iVar44 = iVar44 * iVar44;
    local_450 = dVar51;
    FUN_144920e50(&local_408,iVar44);
    local_498 = lVar26 + 0x1a0;
    iVar42 = 0;
    do {
      fVar55 = 0.33333334;
      uVar18 = *(int *)(lVar26 + 0x26c) + iVar42;
      fVar47 = 0.0;
      fVar53 = 0.0;
      uVar33 = uVar18;
      fVar56 = 0.5;
      if (0 < (int)uVar18) {
        do {
          fVar47 = fVar47 + (float)(uVar33 & 1) * fVar56;
          bVar15 = 1 < uVar33;
          uVar33 = uVar33 >> 1;
          fVar56 = fVar56 * 0.5;
        } while (bVar15);
        fVar53 = 0.0;
        do {
          fVar53 = fVar53 + (float)(uVar18 % 3) * fVar55;
          fVar55 = fVar55 * 0.33333334;
          bVar15 = 2 < uVar18;
          uVar18 = uVar18 / 3;
        } while (bVar15);
      }
      local_4e0 = (double)fVar53 * *(double *)(lVar26 + 0xf8) + *(double *)(lVar26 + 0xe0);
      local_4e8 = (double)fVar47 * *(double *)(lVar26 + 0xf0) + *(double *)(lVar26 + 0xd8);
      local_4c0 = *(double *)(lVar26 + 8);
      fVar56 = (float)(local_4e8 / local_4c0 - (double)*(int *)(lVar26 + 0xc0));
      local_460 = *(double *)(lVar26 + 0x10);
      fVar47 = (float)(local_4e0 / local_460 - (double)*(int *)(lVar26 + 0xc4));
      iVar19 = (int)ROUND(fVar56 + fVar56 + -0.5) >> 1;
      iVar24 = (int)ROUND(fVar47 + fVar47 + -0.5) >> 1;
      iVar21 = -((int)ROUND(-0.5 - (fVar56 + fVar56)) >> 1);
      iVar32 = -((int)ROUND(-0.5 - (fVar47 + fVar47)) >> 1);
      iVar45 = *(int *)(lVar26 + 0x158);
      iVar35 = iVar45 + -1;
      iVar38 = iVar35;
      if (iVar19 < iVar35) {
        iVar38 = iVar19;
      }
      if (iVar38 < 1) {
        iVar38 = 0;
      }
      iVar37 = iVar35;
      if (iVar24 < iVar35) {
        iVar37 = iVar24;
      }
      if (iVar37 < 1) {
        iVar37 = 0;
      }
      iVar27 = iVar35;
      if (iVar21 < iVar35) {
        iVar27 = iVar21;
      }
      if (iVar27 < 1) {
        iVar27 = 0;
      }
      if (iVar32 < iVar35) {
        iVar35 = iVar32;
      }
      if (iVar35 < 1) {
        iVar35 = 0;
      }
      auVar52 = roundss(ZEXT816(0),ZEXT416((uint)fVar56),0xb);
      fVar56 = fVar56 - auVar52._0_4_;
      auVar52 = roundss(ZEXT816(0),ZEXT416((uint)fVar47),0xb);
      fVar47 = fVar47 - auVar52._0_4_;
      lVar31 = (longlong)(iVar37 * iVar45 + iVar27);
      lVar46 = (longlong)(iVar35 * iVar45 + iVar38);
      lVar28 = (longlong)(iVar35 * iVar45 + iVar27);
      lVar22 = *(longlong *)(lVar26 + 0x138);
      fVar69 = ((float)*(ushort *)(lVar22 + lVar31 * 2) + -32768.0) * 0.0078125;
      fVar59 = ((float)*(ushort *)(lVar22 + lVar46 * 2) + -32768.0) * 0.0078125;
      fVar67 = ((float)*(ushort *)(lVar22 + lVar28 * 2) + -32768.0) * 0.0078125;
      fVar53 = fVar56;
      fVar55 = fVar67;
      fVar63 = fVar47;
      fVar68 = fVar59;
      if (fVar47 <= fVar56) {
        fVar53 = fVar56 - fVar47;
        fVar55 = fVar69;
        fVar63 = fVar56;
        fVar68 = fVar67;
      }
      lVar20 = *(longlong *)(lVar26 + 0x148);
      lVar36 = (longlong)(iVar37 * iVar45 + iVar38);
      fVar54 = (float)*(byte *)(lVar20 + lVar36) / 255.0;
      fVar62 = (float)*(byte *)(lVar20 + lVar46) / 255.0;
      fVar54 = ((float)*(byte *)(lVar20 + lVar31) / 255.0 - fVar54) * fVar56 + fVar54;
      fVar54 = ((((float)*(byte *)(lVar20 + lVar28) / 255.0 - fVar62) * fVar56 + fVar62) - fVar54) *
               fVar47 + fVar54;
      local_468 = (double)CONCAT44(local_468._4_4_,(float)*(int *)(lVar26 + 200));
      local_470 = (double)CONCAT44(local_470._4_4_,(float)*(int *)(lVar26 + 0xcc));
      fVar62 = ((float)*(ushort *)(lVar22 + lVar36 * 2) + -32768.0) * 0.0078125;
      dVar51 = (double)fVar62;
      dVar23 = ((double)fVar68 * ((1.0 - (1.0 - (double)fVar63)) - (double)fVar53) +
               (1.0 - (double)fVar63) * dVar51 + (double)fVar55 * (double)fVar53) *
               *(double *)(lVar26 + 0x18);
      if (*(char *)(lVar26 + 0x18e) != '\0') {
        fVar63 = (float)iVar24;
        dVar48 = (double)iVar24;
        fVar68 = (float)iVar19;
        dVar49 = (double)iVar19;
        fVar55 = (float)iVar32;
        local_480 = (double)fVar67;
        fVar53 = (float)iVar21;
        dVar64 = (double)iVar32;
        dVar65 = (double)iVar21;
        if (fVar56 <= fVar47) {
          if ((fVar63 == fVar55) && (!NAN(fVar63) && !NAN(fVar55))) {
            if ((fVar62 == fVar59) && (!NAN(fVar62) && !NAN(fVar59))) goto LAB_140a9ee34;
          }
          if ((fVar53 == fVar68) && (!NAN(fVar53) && !NAN(fVar68))) {
            if ((fVar67 == fVar59) && (!NAN(fVar67) && !NAN(fVar59))) goto LAB_140a9ee34;
          }
          dVar51 = dVar51 - (double)fVar59;
          dVar60 = local_480 - (double)fVar59;
          local_4b8._0_8_ =
               (dVar49 - dVar49) * (dVar64 - dVar64) - (dVar65 - dVar49) * (dVar48 - dVar64);
          local_4a8 = dVar51 * (dVar65 - dVar49) - dVar60 * (dVar49 - dVar49);
          dVar51 = (dVar48 - dVar64) * dVar60 - (dVar64 - dVar64) * dVar51;
        }
        else {
          if ((fVar68 == fVar53) && (!NAN(fVar68) && !NAN(fVar53))) {
            if ((fVar62 != fVar69) || (NAN(fVar62) || NAN(fVar69))) goto LAB_140a9ed8b;
LAB_140a9ee34:
            local_4d8._8_8_ = 0;
            local_4d8._0_8_ = DAT_14c8464e0.QuadPart;
            local_4a8 = DAT_14c8464e8;
            uStack_4a0 = 0;
            local_4b8._8_8_ = 0;
            local_4b8._0_8_ = DAT_14c8464f0;
            goto LAB_140a9ee6a;
          }
LAB_140a9ed8b:
          if ((fVar55 == fVar63) && (!NAN(fVar55) && !NAN(fVar63))) {
            if ((fVar67 == fVar69) && (!NAN(fVar67) && !NAN(fVar69))) goto LAB_140a9ee34;
          }
          dVar60 = local_480 - (double)fVar69;
          dVar51 = dVar51 - (double)fVar69;
          local_4b8._0_8_ =
               (dVar65 - dVar65) * (dVar48 - dVar48) - (dVar49 - dVar65) * (dVar64 - dVar48);
          local_4a8 = dVar60 * (dVar49 - dVar65) - dVar51 * (dVar65 - dVar65);
          dVar51 = (dVar64 - dVar48) * dVar51 - (dVar48 - dVar48) * dVar60;
        }
        dVar48 = (double)local_4b8._0_8_ * (double)local_4b8._0_8_ +
                 dVar51 * dVar51 + local_4a8 * local_4a8;
        if ((dVar48 != 1.0) || (NAN(dVar48))) {
          if (dVar48 < 9.99999993922529e-09) {
            local_4d8._8_8_ = 0;
            local_4d8._0_8_ = DAT_14c8464e0.QuadPart;
            local_4a8 = DAT_14c8464e8;
            uStack_4a0 = 0;
            local_4b8._8_8_ = 0;
            local_4b8._0_8_ = DAT_14c8464f0;
            goto LAB_140a9ee6a;
          }
          dVar48 = 1.0 / SQRT(dVar48);
          local_4b8._0_8_ = (double)local_4b8._0_8_ * dVar48;
          local_4a8 = local_4a8 * dVar48;
          dVar51 = dVar51 * dVar48;
        }
        local_4b8._8_8_ = 0;
        uStack_4a0 = 0;
        local_4d8._8_8_ = 0;
        local_4d8._0_8_ = dVar51;
      }
LAB_140a9ee6a:
      if (((*(float *)(lVar26 + 0x17c) <= fVar54 && fVar54 != *(float *)(lVar26 + 0x17c)) &&
          (fVar54 <= *(float *)(lVar26 + 0x180))) &&
         (uVar18 = *(int *)(lVar26 + 0x198) * 0xbb38435 + 0x3619636b,
         *(uint *)(lVar26 + 0x198) = uVar18, (float)(uVar18 >> 9 | 0x3f800000) + -1.0 <= fVar54)) {
        local_4e8 = local_4e8 - local_4c0 * (double)*(int *)(lVar26 + 200);
        local_4e0 = local_4e0 - local_460 * (double)*(int *)(lVar26 + 0xcc);
        if ((longlong)*(int *)(lVar26 + 0x2e8) != 0) {
          lVar22 = *(longlong *)(lVar26 + 0x2e0);
          lVar28 = 0;
          do {
            if ((((*(double *)(lVar22 + lVar28) <= local_4e8 &&
                   local_4e8 != *(double *)(lVar22 + lVar28)) &&
                 (local_4e8 < *(double *)(lVar22 + 0x18 + lVar28))) &&
                ((pdVar40 = (double *)(lVar22 + 8 + lVar28),
                 *pdVar40 <= local_4e0 && local_4e0 != *pdVar40 &&
                 ((local_4e0 < *(double *)(lVar22 + 0x20 + lVar28) &&
                  (pdVar40 = (double *)(lVar22 + 0x10 + lVar28),
                  *pdVar40 <= dVar23 && dVar23 != *pdVar40)))))) &&
               (dVar23 < *(double *)(lVar22 + 0x28 + lVar28))) goto LAB_140a9f3db;
            lVar28 = lVar28 + 0x38;
          } while ((longlong)*(int *)(lVar26 + 0x2e8) * 0x38 - lVar28 != 0);
        }
        if (*(char *)(lVar26 + 0x18d) == '\x01') {
          FUN_144a5562a(lVar26,&local_3f8);
        }
        else {
          local_3f8 = local_488;
          local_3f0 = local_458;
          dStack_3e8 = local_448;
        }
        if (*(char *)(lVar26 + 0x18c) == '\0') {
          uVar57 = 0;
          uVar58 = 0;
          dVar51 = 1.0;
        }
        else {
          uVar18 = *(int *)(lVar26 + 0x198) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar26 + 0x198) = uVar18;
          fVar56 = ((float)(uVar18 >> 9 | 0x3f800000) + -1.0) * 360.0;
          uVar57 = 0;
          uVar58 = 0;
          dVar51 = 1.0;
          if ((fVar56 != 0.0) || (NAN(fVar56))) {
            dVar51 = 0.0;
            uVar57 = 0;
            uVar58 = 0x3ff00000;
            if ((fVar56 != 90.0) || (NAN(fVar56))) {
              uVar57 = 0;
              uVar58 = 0;
              dVar51 = -1.0;
              if ((fVar56 != 180.0) || (NAN(fVar56))) {
                dVar51 = 0.0;
                uVar57 = 0;
                uVar58 = 0xbff00000;
                if ((fVar56 != 270.0) || (NAN(fVar56))) {
                  dVar51 = sin((double)fVar56 * 0.017453292519943295);
                  uVar57 = SUB84(dVar51,0);
                  uVar58 = (undefined4)((ulonglong)dVar51 >> 0x20);
                  dVar51 = cos((double)fVar56 * 0.017453292519943295);
                }
              }
            }
          }
        }
        local_178 = (LARGE_INTEGER)(dVar51 * local_3f8);
        LStack_170 = (LARGE_INTEGER)((double)CONCAT44(uVar58,uVar57) * local_3f8);
        local_168 = local_3f8 * 0.0;
        dVar48 = dVar51 * 0.0;
        local_158 = (dVar48 - (double)CONCAT44(uVar58,uVar57)) * local_3f0;
        dVar49 = (double)CONCAT44(uVar58,uVar57) * 0.0;
        dStack_150 = (dVar51 + dVar49) * local_3f0;
        local_148 = local_3f0 * -0.0;
        local_138 = -(dVar49 + dVar48) * dStack_3e8;
        local_130 = ((double)CONCAT44(uVar58,uVar57) * -0.0 + dVar48) * dStack_3e8;
        uStack_160 = 0;
        local_140 = 0;
        local_128 = dStack_3e8;
        local_120 = 0;
        local_118 = DAT_14c8464e0;
        local_110 = DAT_14c8464e8;
        local_4c0 = DAT_14c8464f0;
        local_108 = DAT_14c8464f0;
        local_100 = 0x3ff0000000000000;
        if (*(char *)(lVar26 + 0x18e) == '\x01') {
          if (((ABS((double)local_4d8._0_8_) <= 9.999999747378752e-05) &&
              (ABS(local_4a8) <= 9.999999747378752e-05)) &&
             (ABS((double)local_4b8._0_8_) <= 9.999999747378752e-05)) goto LAB_140a9f2ae;
          local_238 = (double)(-(ulonglong)(0.0 < (double)local_4b8._0_8_) & 0x3ff0000000000000 |
                              (ulonglong)
                              (~(uint)(-(ulonglong)(0.0 < (double)local_4b8._0_8_) >> 0x20) &
                              (uint)(-(ulonglong)((double)local_4b8._0_8_ < 0.0) >> 0x20) &
                              0xbff00000) << 0x20);
          local_228 = (double)local_4b8._0_8_ * local_238;
          local_230 = local_4a8 * local_238;
          local_238 = local_238 * (double)local_4d8._0_8_;
          dVar49 = local_230 * 0.0 + local_238;
          dVar51 = local_238 * 0.0 + local_228 * -0.0;
          LVar61 = (LARGE_INTEGER)(local_230 * -0.0 - local_228);
          dVar48 = dVar49 * dVar49 + (double)LVar61 * (double)LVar61 + dVar51 * dVar51;
          if (((dVar48 != 1.0) ||
              (local_278 = LVar61, local_268 = dVar49, dStack_270 = dVar51, NAN(dVar48))) &&
             (local_278 = DAT_14c8464e0, local_268 = DAT_14c8464f0, dStack_270 = DAT_14c8464e8,
             9.99999993922529e-09 <= dVar48)) {
            dVar48 = 1.0 / SQRT(dVar48);
            local_278 = (LARGE_INTEGER)((double)LVar61 * dVar48);
            local_268 = dVar49 * dVar48;
            dStack_270 = dVar51 * dVar48;
          }
          local_248 = local_238 * dStack_270 - (double)local_278 * local_230;
          local_250 = local_228 * (double)local_278 - local_268 * local_238;
          local_258 = local_230 * local_268 - dStack_270 * local_228;
          local_260 = 0;
          local_240 = 0;
          local_220 = 0;
          local_218 = DAT_14c8464e0;
          local_210 = DAT_14c8464e8;
          local_208 = DAT_14c8464f0;
          local_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_378,&local_178,&local_278);
          local_2f8 = local_378;
          LStack_2f0 = local_370;
          local_2e8 = dStack_368;
          local_2e0 = local_360;
          dStack_2d8 = dStack_358;
          local_2d0 = local_350;
          dStack_2c8 = dStack_348;
          local_2c0 = local_340;
          dStack_2b8 = dStack_338;
          local_2b0 = local_330;
          dStack_2a8 = dStack_328;
          local_2a0 = local_320;
          local_298 = local_4e8 + local_318;
          local_290 = local_4e0 + local_310;
          local_288 = dVar23 + local_308;
          local_280 = local_300;
          FUN_1447fea8d(local_1f8,&local_2f8,local_498);
        }
        else {
LAB_140a9f2ae:
          local_2e0 = 0;
          local_2c0 = 0;
          dStack_2a8 = dStack_3e8;
          local_2a0 = 0;
          local_298 = local_4e8 + (double)DAT_14c8464e0;
          local_290 = local_4e0 + DAT_14c8464e8;
          local_288 = dVar23 + DAT_14c8464f0;
          local_280 = 0x3ff0000000000000;
          local_2f8 = local_178;
          LStack_2f0 = LStack_170;
          local_2e8 = local_168;
          dStack_2d8 = local_158;
          local_2d0 = dStack_150;
          dStack_2c8 = local_148;
          dStack_2b8 = local_138;
          local_2b0 = local_130;
          FUN_1447fea8d(&local_278,&local_2f8,local_498);
          pLVar30 = &local_278;
          pLVar25 = local_1f8;
          for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
            *pLVar25 = *pLVar30;
            pLVar30 = pLVar30 + 1;
            pLVar25 = pLVar25 + 1;
          }
        }
        uVar29 = uStack_400;
        lVar22 = (longlong)(int)(uint)uStack_400;
        uVar18 = (uint)uStack_400 + 1;
        uStack_400 = CONCAT44(uStack_400._4_4_,uVar18);
        if (uStack_400._4_4_ < uVar18) {
          FUN_140518214(&local_408,uVar29 & 0xffffffff);
        }
        pLVar30 = local_1f8;
        pLVar25 = (LARGE_INTEGER *)(lVar22 * 0x80 + local_408);
        for (lVar28 = 0x10; lVar28 != 0; lVar28 = lVar28 + -1) {
          *pLVar25 = *pLVar30;
          pLVar30 = pLVar30 + 1;
          pLVar25 = pLVar25 + 1;
        }
      }
LAB_140a9f3db:
      dVar51 = local_450;
      iVar42 = iVar42 + 1;
    } while (iVar42 != iVar44 + (uint)(iVar44 == 0));
    if ((uint)uStack_400 == 0) goto LAB_140aa0cf1;
    *(int *)(lVar26 + 0x268) = *(int *)(lVar26 + 0x268) + (uint)uStack_400;
    local_518 = CONCAT71(local_518._1_7_,1);
    FUN_140aa0f16(lVar26 + 0x2f0,uStack_400 & 0xffffffff,0,3);
    uVar18 = (uint)uStack_400;
    if (0 < (int)(uint)uStack_400) {
      lVar22 = 0;
      uVar29 = 0;
      do {
        *(int *)(lVar26 + 0x198) = *(int *)(lVar26 + 0x198) * 0xbb38435 + 0x3619636b;
        FUN_144a558f0(lVar26,uVar29 & 0xffffffff,local_408 + lVar22);
        uVar29 = uVar29 + 1;
        lVar22 = lVar22 + 0x80;
        uVar18 = (uint)uStack_400;
      } while ((longlong)uVar29 < (longlong)(int)(uint)uStack_400);
    }
  }
  if (uVar18 != 0) {
    local_510 = local_1f8;
    local_1f8[0].QuadPart = 0;
    local_1f8[1] = (LARGE_INTEGER)0x0;
    local_508 = &local_278;
    local_278.QuadPart = 0;
    dStack_270 = 0.0;
    local_2f8.QuadPart = 0;
    LStack_2f0.QuadPart = 0;
    local_4f8 = *(undefined4 *)(lVar26 + 600);
    local_500 = lVar26 + 0x350;
    local_518 = lVar26 + 0x340;
    local_4f0 = 0;
    FUN_140aa1206(&local_408,&local_2f8,0,lVar26 + 0x220);
    if (0 < (int)uVar18) {
      uVar29 = CONCAT44(0,uVar18);
      dVar23 = 3.95252516672997e-323;
      lVar22 = 0x10;
      lVar28 = 0;
      uVar43 = 0;
      local_4d8._0_8_ = uVar29;
      do {
        uVar18 = *(uint *)(local_1f8[0].QuadPart + uVar43 * 4);
        if (uVar43 != uVar18) {
          dVar48 = (double)(longlong)(int)uVar18;
          cVar7 = *(char *)(lVar26 + 0x338);
          lVar31 = *(longlong *)(lVar26 + 0x308);
          local_4e8 = dVar23;
          (**(code **)(**(longlong **)(lVar26 + 0x300) + 0x28))();
          (**(code **)(**(longlong **)(lVar26 + 0x300) + 0x20))();
          lVar26 = local_490;
          uVar29 = local_4d8._0_8_;
          if (cVar7 == '\x01') {
            uVar12 = *(undefined8 *)(lVar31 + uVar43 * 0x18);
            uVar13 = *(undefined8 *)(lVar31 + 8 + uVar43 * 0x18);
            uVar14 = *(undefined8 *)(lVar31 + 0x10 + uVar43 * 0x18);
            puVar1 = (undefined8 *)(lVar31 + (longlong)dVar48 * 0x18);
            lVar46 = 0;
            do {
              *(undefined2 *)(lVar31 + lVar28 + lVar46 * 2) =
                   *(undefined2 *)((longlong)puVar1 + lVar46 * 2);
              lVar46 = lVar46 + 1;
            } while (lVar46 != 4);
            lVar46 = 0;
            do {
              *(undefined2 *)((longlong)local_4e8 + lVar31 + lVar46 * 2) =
                   *(undefined2 *)((longlong)puVar1 + lVar46 * 2 + 8);
              lVar46 = lVar46 + 1;
            } while (lVar46 != 4);
            lVar46 = 0;
            do {
              *(undefined2 *)(lVar31 + lVar22 + lVar46 * 2) =
                   *(undefined2 *)((longlong)puVar1 + lVar46 * 2 + 0x10);
              lVar46 = lVar46 + 1;
            } while (lVar46 != 4);
            *puVar1 = uVar12;
            puVar1[1] = uVar13;
            puVar1[2] = uVar14;
          }
          else {
            lVar46 = uVar43 * 0x30;
            local_178 = *(LARGE_INTEGER *)(lVar31 + lVar46);
            LStack_170 = ((LARGE_INTEGER *)(lVar31 + lVar46))[1];
            pauVar3 = (undefined1 (*) [16])(lVar31 + 0x10 + lVar46);
            local_168 = *(double *)*pauVar3;
            uStack_160 = *(undefined8 *)(*pauVar3 + 8);
            auVar52 = *pauVar3;
            pdVar40 = (double *)(lVar31 + 0x20 + lVar46);
            local_158 = *pdVar40;
            dStack_150 = pdVar40[1];
            lVar20 = (longlong)dVar48 * 0x30;
            uVar12 = *(undefined8 *)(lVar31 + lVar20);
            uVar13 = ((undefined8 *)(lVar31 + lVar20))[1];
            puVar1 = (undefined8 *)(lVar31 + 0x10 + lVar20);
            uVar14 = *puVar1;
            uVar16 = puVar1[1];
            puVar1 = (undefined8 *)(lVar31 + 0x20 + lVar20);
            uVar17 = puVar1[1];
            puVar2 = (undefined8 *)(lVar31 + 0x20 + lVar46);
            *puVar2 = *puVar1;
            puVar2[1] = uVar17;
            puVar1 = (undefined8 *)(lVar31 + 0x10 + lVar46);
            *puVar1 = uVar14;
            puVar1[1] = uVar16;
            *(undefined8 *)(lVar31 + lVar46) = uVar12;
            ((undefined8 *)(lVar31 + lVar46))[1] = uVar13;
            pdVar40 = (double *)(lVar31 + 0x20 + lVar20);
            *pdVar40 = local_158;
            pdVar40[1] = dStack_150;
            *(undefined1 (*) [16])(lVar31 + 0x10 + lVar20) = auVar52;
            *(LARGE_INTEGER *)(lVar31 + lVar20) = local_178;
            ((LARGE_INTEGER *)(lVar31 + lVar20))[1] = LStack_170;
          }
          lVar31 = *(longlong *)(local_490 + 0x2f8);
          local_4e0 = dVar48;
          (**(code **)(**(longlong **)(local_490 + 0x2f0) + 0x28))();
          (**(code **)(**(longlong **)(lVar26 + 0x2f0) + 0x20))();
          pLVar30 = (LARGE_INTEGER *)(lVar31 + uVar43 * 0x10);
          local_178 = *pLVar30;
          LStack_170 = pLVar30[1];
          puVar1 = (undefined8 *)(lVar31 + (longlong)dVar48 * 0x10);
          uVar12 = puVar1[1];
          puVar2 = (undefined8 *)(lVar31 + uVar43 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          pLVar30 = (LARGE_INTEGER *)(lVar31 + (longlong)dVar48 * 0x10);
          *pLVar30 = local_178;
          pLVar30[1] = LStack_170;
          lVar31 = *(longlong *)(lVar26 + 0x318);
          (**(code **)(**(longlong **)(lVar26 + 0x310) + 0x28))();
          (**(code **)(**(longlong **)(lVar26 + 0x310) + 0x20))();
          uVar12 = *(undefined8 *)(lVar31 + uVar43 * 8);
          *(undefined8 *)(lVar31 + uVar43 * 8) = *(undefined8 *)(lVar31 + (longlong)dVar48 * 8);
          *(undefined8 *)(lVar31 + (longlong)dVar48 * 8) = uVar12;
          lVar31 = *(longlong *)(lVar26 + 0x328);
          (**(code **)(**(longlong **)(lVar26 + 800) + 0x28))();
          (**(code **)(**(longlong **)(lVar26 + 800) + 0x20))();
          iVar44 = *(int *)(lVar26 + 0x334);
          iVar42 = (int)uVar43;
          if (0 < iVar44) {
            lVar46 = 0;
            do {
              lVar36 = iVar42 * iVar44 + lVar46;
              uVar57 = *(undefined4 *)(lVar31 + lVar36 * 4);
              lVar20 = (int)(iVar44 * uVar18) + lVar46;
              *(undefined4 *)(lVar31 + lVar36 * 4) = *(undefined4 *)(lVar31 + lVar20 * 4);
              *(undefined4 *)(lVar31 + lVar20 * 4) = uVar57;
              iVar44 = *(int *)(lVar26 + 0x334);
              lVar46 = lVar46 + 1;
            } while ((int)lVar46 < iVar44);
          }
          iVar44 = *(int *)(local_278.QuadPart + uVar43 * 4);
          *(int *)(local_1f8[0].QuadPart + (longlong)iVar44 * 4) = SUB84(local_4e0,0);
          *(int *)(local_278.QuadPart + (longlong)local_4e0 * 4) = iVar44;
          *(int *)(local_278.QuadPart + uVar43 * 4) = iVar42;
          *(int *)(local_1f8[0].QuadPart + uVar43 * 4) = iVar42;
          dVar23 = local_4e8;
        }
        uVar43 = uVar43 + 1;
        lVar28 = lVar28 + 0x18;
        dVar23 = (double)((longlong)dVar23 + 0x18);
        lVar22 = lVar22 + 0x18;
      } while (uVar43 != uVar29);
    }
    if ((double)local_2f8.QuadPart != 0.0) {
      FUN_1400020a8();
    }
    if ((double)local_278.QuadPart != 0.0) {
      FUN_1400020a8();
    }
    if (local_1f8[0].QuadPart != 0) {
      FUN_1400020a8();
    }
  }
LAB_140aa0cf1:
  QueryPerformanceCounter(&local_178);
  *(double *)(lVar26 + 0x260) = ((double)local_178.QuadPart * DAT_14c83f420 + 16777216.0) - dVar51;
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa0f16 FUN_140aa0f16 body=208 status=ok
// SIG undefined FUN_140aa0f16(void)

void FUN_140aa0f16(undefined8 *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 8) = (int)param_2;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_3;
  if (param_5 != '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    (**(code **)(*(longlong *)param_1[4] + 0x10))
              ((longlong *)param_1[4],*(undefined4 *)(param_1 + 8));
    (**(code **)(*(longlong *)param_1[2] + 0x10))
              ((longlong *)param_1[2],*(undefined4 *)(param_1 + 8));
    (**(code **)(*(longlong *)param_1[6] + 0x10))
              ((longlong *)param_1[6],*(int *)(param_1 + 8) * *(int *)((longlong)param_1 + 0x44));
    param_2 = (ulonglong)*(uint *)(param_1 + 8);
  }
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_2,param_4);
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
  param_1[1] = uVar1;
  (**(code **)(*(longlong *)param_1[4] + 8))
            ((longlong *)param_1[4],*(undefined4 *)(param_1 + 8),param_4);
  uVar1 = (**(code **)(*(longlong *)param_1[4] + 0x30))();
  param_1[5] = uVar1;
  (**(code **)(*(longlong *)param_1[2] + 8))
            ((longlong *)param_1[2],*(undefined4 *)(param_1 + 8),param_4);
  uVar1 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
  param_1[3] = uVar1;
  (**(code **)(*(longlong *)param_1[6] + 8))
            ((longlong *)param_1[6],*(int *)(param_1 + 8) * *(int *)((longlong)param_1 + 0x44),
             param_4);
  uVar1 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
  param_1[7] = uVar1;
  return;
}



// FUNCTION 140aa1066 FUN_140aa1066 body=42 status=ok
// SIG undefined FUN_140aa1066(void)

void FUN_140aa1066(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407ee10e();
    return;
  }
  return;
}



// FUNCTION 140aa1090 FUN_140aa1090 body=41 status=ok
// SIG undefined FUN_140aa1090(void)

void FUN_140aa1090(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_140272f20();
  return;
}



// FUNCTION 140aa10ba FUN_140aa10ba body=42 status=ok
// SIG undefined FUN_140aa10ba(void)

void FUN_140aa10ba(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407edea8();
    return;
  }
  return;
}



// FUNCTION 140aa10e4 FUN_140aa10e4 body=42 status=ok
// SIG undefined FUN_140aa10e4(void)

void FUN_140aa10e4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1407edfb0();
    return;
  }
  return;
}



// FUNCTION 140aa1110 FUN_140aa1110 body=246 status=ok
// SIG undefined FUN_140aa1110(void)

void FUN_140aa1110(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x400) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 5)) {
      uVar3 = uVar2 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 140aa1206 FUN_140aa1206 body=706 status=ok
// SIG undefined FUN_140aa1206(void)

void FUN_140aa1206(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined4 *param_8,
                  undefined4 param_9,undefined1 param_10)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  void *local_148;
  undefined8 uStack_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined8 uStack_120;
  int local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_cc;
  undefined8 local_c4;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = (void *)0x0;
  local_130 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_130;
  pvVar1 = (void *)*param_2;
  if (lVar3 == 0) {
    local_12c = 0;
  }
  else {
    FUN_1447c510a(&local_138,local_130,0);
    memcpy(local_138,pvVar1,lVar3 << 2);
  }
  local_148 = (void *)0x0;
  uStack_140._0_4_ = *(int *)(param_1 + 1);
  lVar3 = (longlong)(int)uStack_140;
  pvVar1 = (void *)*param_1;
  if (lVar3 == 0) {
    local_8c = 0;
    local_98 = (void *)0x0;
    local_118 = 0;
  }
  else {
    FUN_140aa14ca(&local_148,(int)uStack_140,0);
    memcpy(local_148,pvVar1,lVar3 << 7);
    local_98 = local_148;
    local_118 = (int)uStack_140;
    local_8c = uStack_140._4_4_;
  }
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
  local_110 = *param_4;
  uStack_10c = param_4[1];
  uStack_108 = param_4[2];
  uStack_104 = param_4[3];
  local_100 = param_4[4];
  uStack_fc = param_4[5];
  uStack_f8 = param_4[6];
  uStack_f4 = param_4[7];
  local_f0 = param_4[8];
  uStack_ec = param_4[9];
  uStack_e8 = param_4[10];
  uStack_e4 = param_4[0xb];
  local_e0 = *(undefined8 *)(param_4 + 0xc);
  local_cc = param_9;
  local_c4 = 0x3f80000000000001;
  local_bc = param_10;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_148 = (void *)0x0;
  uStack_140 = 0;
  local_88 = local_138;
  local_138 = (void *)0x0;
  local_80 = local_130;
  local_7c = local_12c;
  local_130 = 0;
  local_12c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_90 = local_118;
  local_78 = param_3;
  FUN_144a5f54e(&local_128);
  plVar2 = local_128;
  *param_8 = (int)local_128[6];
  if (local_128 != param_5) {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_5 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_5 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  plVar2 = local_128;
  if (local_128 + 4 != param_7) {
    if (*param_7 != 0) {
      FUN_1400020a8();
    }
    *param_7 = plVar2[4];
    plVar2[4] = 0;
    *(int *)(param_7 + 1) = (int)plVar2[5];
    *(undefined4 *)((longlong)param_7 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0x2c);
    plVar2[5] = 0;
  }
  plVar2 = local_128;
  if (local_128 + 2 != param_6) {
    if (*param_6 != 0) {
      FUN_1400020a8();
    }
    *param_6 = plVar2[2];
    plVar2[2] = 0;
    *(int *)(param_6 + 1) = (int)plVar2[3];
    *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0x1c);
    plVar2[3] = 0;
  }
  FUN_14082dd98(&local_128);
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa14ca FUN_140aa14ca body=216 status=ok
// SIG undefined FUN_140aa14ca(void)

void FUN_140aa14ca(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x1ffffffffffffffU) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    iVar1 = (int)(uVar2 >> 7);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x80,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140aa15a2 FUN_140aa15a2 body=118 status=ok
// SIG undefined FUN_140aa15a2(void)

void FUN_140aa15a2(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0x118,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  if (*(int *)(param_1 + 0x178) != 3) {
    return;
  }
  FUN_140aa1618(param_1 + 0x158,param_2);
  return;
}



// FUNCTION 140aa1618 FUN_140aa1618 body=1203 status=ok
// SIG undefined FUN_140aa1618(void)

void FUN_140aa1618(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  wchar_t *pwVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined1 local_84 [4];
  longlong local_80;
  undefined8 local_78;
  ushort local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)((longlong)param_2 + 0xac) != -1) goto LAB_140aa1640;
  plVar9 = param_2 + 0x14;
  if ((char)param_1[2] != '\x02') {
    if ((char)param_1[2] == '\x01') {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar3 = param_1[1];
        uVar6 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar12 = (uint)lVar3 & 0xffff;
        plVar7 = param_2 + 7;
        if ((longlong *)param_2[8] != (longlong *)0x0) {
          plVar7 = (longlong *)param_2[8];
        }
        iVar10 = *(int *)((longlong)plVar7 +
                         (ulonglong)
                         ((int)param_2[9] - 1U &
                         (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar12) +
                         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            plVar7 = (longlong *)(*param_2 + (longlong)iVar10 * 0x48);
            if (*plVar7 == lVar3) {
              if (((ulonglong)(plVar7 + 1) & 0xfffffffffffffff7) != 0) {
                lVar3 = plVar7[7];
                cVar5 = FUN_14087248e(param_1);
                if ((char)lVar3 == cVar5) goto LAB_140aa1640;
                FUN_1400021e4(param_1 + 1,&local_98);
                plVar7 = local_98;
                if ((int)local_90 == 0) {
                  plVar7 = (longlong *)&DAT_149dfb77a;
                }
                FUN_140002266(&local_80,L"%s has incompatible types",plVar7);
                if (&local_80 == plVar9) {
                  if (local_80 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (*plVar9 != 0) {
                    FUN_1400020a8();
                  }
                  param_2[0x14] = local_80;
                  local_80 = 0;
                  *(undefined4 *)(param_2 + 0x15) = (undefined4)local_78;
                  *(undefined4 *)((longlong)param_2 + 0xac) = local_78._4_4_;
                  local_78 = (longlong *)0x0;
                }
                plVar9 = local_98;
                if (local_98 == (longlong *)0x0) goto LAB_140aa1640;
                goto LAB_140aa182e;
              }
              break;
            }
            iVar10 = (int)plVar7[8];
          } while (iVar10 != -1);
        }
      }
      (**(code **)(*param_1 + 8))(param_1,&local_80);
      local_98 = param_1 + 1;
      local_90 = &local_80;
      FUN_140ffa80e(param_2,local_84,&local_98,0);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        plVar9 = local_78;
        if (local_60 < 0x19) {
          plVar9 = &local_78;
        }
        (*pcVar4)(plVar9);
      }
      plVar9 = local_78;
      if (0x18 < local_60) {
LAB_140aa182e:
        FUN_1400020a8(plVar9);
      }
    }
    goto LAB_140aa1640;
  }
  plVar7 = param_1 + 1;
  if ((int)param_2[0x17] != *(int *)((longlong)param_2 + 0xe4)) {
    lVar3 = param_1[1];
    uVar6 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar12 = (uint)lVar3 & 0xffff;
    plVar8 = param_2 + 0x1d;
    if ((longlong *)param_2[0x1e] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[0x1e];
    }
    iVar10 = *(int *)((longlong)plVar8 +
                     (ulonglong)
                     ((int)param_2[0x1f] - 1U &
                     (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar12) +
                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        lVar1 = param_2[0x16] + (longlong)iVar10 * 0x38;
        if (*(longlong *)(param_2[0x16] + (longlong)iVar10 * 0x38) == lVar3) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
            uVar6 = FUN_14087248e(param_1);
            bVar2 = *(byte *)(lVar1 + 0x28);
            if (bVar2 == (byte)uVar6) goto LAB_140aa18df;
            uVar12 = (uint)bVar2 * 0x120;
            if ((*(code **)(&DAT_14c9a8560 + uVar12) != (code *)0x0) &&
               (cVar5 = (**(code **)(&DAT_14c9a8560 + uVar12))(uVar6), cVar5 != '\0'))
            goto LAB_140aa18df;
            pcVar4 = *(code **)((longlong)&DAT_14c9a8568 + (ulonglong)((uVar6 & 0xff) * 0x120));
            if (((pcVar4 != (code *)0x0) && (cVar5 = (*pcVar4)((uint)bVar2), cVar5 != '\0')) ||
               (((((&DAT_14c9a8514)[uVar12] & 0x20) != 0 &&
                 (((&DAT_14c9a8514)[(uVar6 & 0xff) * 0x120] & 0x20) == 0)) &&
                ((*(code **)(&DAT_14c9a8588 + uVar12) == (code *)0x0 ||
                 (cVar5 = (**(code **)(&DAT_14c9a8588 + uVar12))(uVar6), cVar5 != '\0'))))))
            goto LAB_140aa18df;
            FUN_1400021e4(plVar7,&local_98);
            plVar8 = local_98;
            if ((int)local_90 == 0) {
              plVar8 = (longlong *)&DAT_149dfb77a;
            }
            pwVar11 = L"%s has incompatible types";
            goto LAB_140aa1874;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x30);
      } while (iVar10 != -1);
    }
  }
  FUN_1400021e4(plVar7,&local_98);
  plVar8 = local_98;
  if ((int)local_90 == 0) {
    plVar8 = (longlong *)&DAT_149dfb77a;
  }
  pwVar11 = L"%s context does not exist";
LAB_140aa1874:
  FUN_140002266(&local_80,pwVar11,plVar8);
  if (&local_80 == plVar9) {
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar9 != 0) {
      FUN_1400020a8();
    }
    param_2[0x14] = local_80;
    local_80 = 0;
    *(undefined4 *)(param_2 + 0x15) = (undefined4)local_78;
    *(undefined4 *)((longlong)param_2 + 0xac) = local_78._4_4_;
    local_78 = (longlong *)0x0;
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140aa18df:
  cVar5 = FUN_14087248e(param_1);
  if (cVar5 == '\x05') {
    plVar9 = param_2 + 0x33;
LAB_140aa1903:
    FUN_142b4ac8e(plVar9,&local_80,plVar7);
  }
  else if (cVar5 == '\x04') {
    plVar9 = param_2 + 0x26;
    goto LAB_140aa1903;
  }
  FUN_142b4ac8e(param_2 + 0x40,&local_80,plVar7);
LAB_140aa1640:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa1acc FUN_140aa1acc body=9 status=ok
// SIG undefined FUN_140aa1acc(void)

void FUN_140aa1acc(longlong param_1)

{
  FUN_140aa1ad6(param_1 + 0x10);
  return;
}



// FUNCTION 140aa1ad6 FUN_140aa1ad6 body=249 status=ok
// SIG undefined FUN_140aa1ad6(void)

void FUN_140aa1ad6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_140aa1bd0();
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x1d8) = &PTR_FUN_14a1ca480;
  if (*(longlong *)(param_1 + 1000) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 1000) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x3e0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1 + 0x1d8);
  FUN_140296b76(param_1 + 0x198);
  FUN_140296ab8(param_1 + 0x158);
  FUN_140296d44(param_1 + 0xd0);
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_14a9e5330;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0xa0);
  return;
}



// FUNCTION 140aa1bd0 FUN_140aa1bd0 body=105 status=ok
// SIG undefined FUN_140aa1bd0(void)

void FUN_140aa1bd0(longlong param_1)

{
  FUN_144725486(param_1 + 0x1d8);
  FUN_144725486(param_1 + 0xa0);
  FUN_144725486(param_1 + 0x158);
  FUN_144725486(param_1 + 0xd0);
  FUN_144725486(param_1 + 0xe0);
  FUN_144725486(param_1 + 0xf8);
  FUN_144725486(param_1 + 0x198);
  return;
}



// FUNCTION 140aa1c40 FUN_140aa1c40 body=507 status=ok
// SIG undefined FUN_140aa1c40(void)

longlong FUN_140aa1c40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar3 = *(int *)(lVar2 + 0x38);
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar3) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
         == DAT_14cac9ca8 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x1c8), lVar1 != 0))
    goto LAB_140aa1cbf;
    if (DAT_14cac7648 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_143242436;
      local_38 = &LAB_14789ef1f;
      local_40 = &LAB_1417b008f;
      local_48 = L"Engine";
      local_50 = 0x8000000000;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      lVar2 = *(longlong *)(param_1 + 0x10);
      iVar3 = *(int *)(lVar2 + 0x38);
    }
    if ((*(int *)(DAT_14cac7648 + 0x38) <= iVar3) &&
       (lVar1 = param_1,
       *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
       DAT_14cac7648 + 0x30)) goto LAB_140aa1cbf;
  }
  lVar1 = 0;
LAB_140aa1cbf:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 140aa1e3c FUN_140aa1e3c body=660 status=ok
// SIG undefined FUN_140aa1e3c(void)

void FUN_140aa1e3c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_2 + 0x10) == '\0') && (pbVar3 = (byte *)*param_3, pbVar3 != (byte *)0x0)) &&
     ((~*pbVar3 & 3) == 0)) {
    puVar6 = (undefined8 *)FUN_1446e60f4(pbVar3,&DAT_14cb70de0);
    pbVar3 = (byte *)*puVar6;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 2)) {
      lVar12 = (longlong)*(int *)(*(undefined8 **)(pbVar3 + 8) + 2);
      if (lVar12 != 0) {
        iVar1 = *(int *)(param_1 + 0x60);
        plVar11 = (longlong *)**(undefined8 **)(pbVar3 + 8);
        lVar12 = lVar12 << 4;
        do {
          if ((*plVar11 != 0) && (cVar5 = FUN_140d79696(), cVar5 != '\0')) {
            lVar8 = FUN_145769fb0((longlong *)(param_1 + 0x58));
            uVar7 = FUN_144a7cdd6(plVar11,0);
            FUN_1446ddc76(&local_50,uVar7,1);
            if (*(longlong *)(lVar8 + 8) != local_50) {
              *(undefined8 *)(lVar8 + 0x18) = 0;
            }
            *(longlong *)(lVar8 + 8) = local_50;
          }
          plVar11 = plVar11 + 2;
          lVar12 = lVar12 + -0x10;
        } while (lVar12 != 0);
        uVar2 = *(uint *)(param_1 + 0x60);
        if (iVar1 < (int)uVar2) {
          if (uVar2 != 0) {
            lVar12 = *(longlong *)(param_1 + 0x58);
            bVar16 = *(longlong *)(lVar12 + 8) == 0;
            local_64 = 0;
            local_58 = lVar12 + 0x48;
            uVar9 = 0;
            local_60 = (longlong)(int)uVar2;
            do {
              uVar15 = (ulonglong)uVar9;
LAB_140aa1f58:
              iVar1 = (int)uVar15;
              lVar8 = (longlong)iVar1;
              if ((int)(iVar1 + 1U) < (int)uVar2) {
                lVar10 = lVar8 + 2;
                plVar11 = (longlong *)(local_58 + lVar8 * 0x38);
                bVar4 = true;
                lVar14 = -1;
                do {
                  if ((plVar11[-1] == 0) || (*plVar11 != 0)) {
                    if (bVar16 != (plVar11[-1] == 0 || *plVar11 == 0)) {
                      uVar9 = iVar1 - (int)lVar14;
                      break;
                    }
                  }
                  else if (bVar16) {
                    FUN_1403d7755(lVar8 * 0x38 + lVar12,-(int)lVar14);
                    if (!bVar4) goto LAB_140aa206c;
                    uVar15 = (uVar15 & 0xffffffff) - lVar14;
                    bVar16 = false;
                    goto LAB_140aa1f58;
                  }
                  bVar4 = lVar10 < local_60;
                  lVar14 = lVar14 + -1;
                  lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 7;
                  uVar9 = uVar2;
                } while (lVar8 - (int)uVar2 != lVar14);
              }
              else {
                bVar4 = false;
                uVar9 = iVar1 + 1U;
              }
              iVar13 = uVar9 - iVar1;
              if (bVar16 != false) {
                FUN_1403d7755(lVar8 * 0x38 + lVar12,iVar13);
                bVar16 = false;
                uVar15 = (ulonglong)uVar9;
                if (!bVar4) break;
                goto LAB_140aa1f58;
              }
              if (local_64 != iVar1) {
                memmove((void *)((longlong)local_64 * 0x38 + lVar12),(void *)(lVar8 * 0x38 + lVar12)
                        ,(longlong)iVar13 * 0x38);
              }
              local_64 = local_64 + iVar13;
              bVar16 = true;
            } while (bVar4);
LAB_140aa206c:
            *(int *)(param_1 + 0x60) = local_64;
          }
          FUN_14576a006(param_1);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa20d2 FUN_140aa20d2 body=369 status=ok
// SIG undefined FUN_140aa20d2(void)

void FUN_140aa20d2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140aa2159;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_140aa2159:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140aa2244 FUN_140aa2244 body=2216 status=ok
// SIG undefined FUN_140aa2244(void)

void FUN_140aa2244(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 **param_7,undefined8 **param_8,
                  undefined4 param_9)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  undefined1 auStack_178 [32];
  undefined8 **local_158;
  undefined8 **local_150;
  undefined8 **local_148;
  undefined4 local_140;
  int local_134;
  longlong local_130;
  undefined8 *local_128;
  ulonglong uStack_120;
  undefined8 *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  ulonglong uStack_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  local_158 = &local_f8;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  local_cc = 0x80;
  uStack_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  local_108 = *param_6;
  local_100 = param_6[1];
  local_140 = param_9;
  local_148 = param_8;
  local_150 = param_7;
  FUN_140aa342c(param_1,param_2,param_4);
  uVar5 = *(uint *)(param_2 + 0x58);
  iVar9 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar9 + uVar5;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar9) < uVar5) {
    FUN_140aa32ca(param_5);
  }
  memset((void *)((longlong)iVar9 * 8 + *param_5),0,(longlong)(int)uVar5 * 8);
  if (0 < (int)uVar5) {
    dVar23 = ABS(dVar2);
    if (ABS(dVar3) <= ABS(dVar2)) {
      dVar23 = ABS(dVar3);
    }
    if (ABS(dVar4) <= dVar23) {
      dVar23 = ABS(dVar4);
    }
    uVar19 = -(uint)((float)dVar23 == 0.0);
    fVar26 = (float)(uVar19 & 0x38d1b717 | ~uVar19 & (uint)(float)dVar23);
    dVar2 = (double)fVar26;
    lVar15 = 0;
    do {
      lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x50) + lVar15 * 8);
      uVar10 = FUN_14001cc68(0x288,0x10);
      FUN_140396f9a(uVar10);
      *(undefined8 *)(*param_5 + lVar15 * 8) = uVar10;
      puVar6 = *(undefined4 **)(*param_5 + lVar15 * 8);
      FUN_140aa2b36(puVar6,lVar17 + 0x28);
      *puVar6 = (int)lVar15;
      *(undefined8 ***)(puVar6 + 4) = param_7;
      if ((int)uStack_f0 != local_c4) {
        lVar17 = *(longlong *)(puVar6 + 0x14);
        uVar19 = (uint)((ulonglong)lVar17 >> 0x10);
        uVar14 = (uint)lVar17 & 0xffff;
        puVar11 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar11 = local_c0;
        }
        iVar9 = *(int *)(puVar11 +
                        (ulonglong)
                        ((int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar14) +
                         (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar14 >> 4) & local_b0 - 1U) * 4);
        while (iVar9 != -1) {
          plVar1 = local_f8 + (longlong)iVar9 * 3;
          if (*plVar1 == lVar17) {
            if (plVar1 != (longlong *)0x0) {
              lVar17 = plVar1[1];
              goto LAB_140aa24d0;
            }
            break;
          }
          iVar9 = (int)plVar1[2];
        }
        lVar17 = 0;
LAB_140aa24d0:
        lVar7 = *(longlong *)(puVar6 + 0x16);
        uVar19 = (uint)((ulonglong)lVar7 >> 0x10);
        uVar14 = (uint)lVar7 & 0xffff;
        iVar9 = *(int *)(puVar11 +
                        (ulonglong)
                        ((int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar14) +
                         (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar14 >> 4) & local_b0 - 1U) * 4);
        while (iVar9 != -1) {
          plVar1 = local_f8 + (longlong)iVar9 * 3;
          if (*plVar1 == lVar7) {
            if ((((plVar1 != (longlong *)0x0) && (lVar17 != 0)) && (lVar7 = plVar1[1], lVar7 != 0))
               && ((*(longlong *)(lVar17 + 0x138) != 0 && (*(longlong *)(lVar7 + 0x138) != 0)))) {
              lVar12 = FUN_140aa2aee(lVar17);
              dVar23 = *(double *)(lVar12 + 0x1a8) * dVar2;
              dVar24 = *(double *)(lVar12 + 0x1a0) * dVar2;
              dVar25 = *(double *)(lVar12 + 0x198) * dVar2;
              uVar20 = -(ulonglong)(dVar25 != 0.0);
              uVar21 = -(ulonglong)(dVar24 != 0.0);
              uVar22 = -(ulonglong)(dVar23 != 0.0);
              dVar3 = *(double *)(lVar17 + 0x60);
              dVar4 = *(double *)(lVar17 + 0x58);
              *(double *)(puVar6 + 0x1a) =
                   (double)(~uVar20 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar25) & uVar20) *
                   *(double *)(lVar17 + 0x50) * *(double *)(puVar6 + 0x1a);
              *(double *)(puVar6 + 0x1c) =
                   (double)(~uVar21 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar24) & uVar21) *
                   dVar4 * *(double *)(puVar6 + 0x1c);
              *(double *)(puVar6 + 0x1e) =
                   (double)(~uVar22 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar23) & uVar22) *
                   dVar3 * *(double *)(puVar6 + 0x1e);
              lVar12 = FUN_140aa2aee(lVar7);
              dVar23 = *(double *)(lVar12 + 0x1a8) * dVar2;
              dVar24 = *(double *)(lVar12 + 0x1a0) * dVar2;
              dVar25 = *(double *)(lVar12 + 0x198) * dVar2;
              uVar20 = -(ulonglong)(dVar25 != 0.0);
              uVar21 = -(ulonglong)(dVar24 != 0.0);
              uVar22 = -(ulonglong)(dVar23 != 0.0);
              dVar3 = *(double *)(lVar7 + 0x60);
              dVar4 = *(double *)(lVar7 + 0x58);
              *(double *)(puVar6 + 0x2c) =
                   (double)(~uVar20 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar25) & uVar20) *
                   *(double *)(lVar7 + 0x50) * *(double *)(puVar6 + 0x2c);
              *(double *)(puVar6 + 0x2e) =
                   (double)(~uVar21 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar24) & uVar21) *
                   dVar4 * *(double *)(puVar6 + 0x2e);
              *(double *)(puVar6 + 0x30) =
                   (double)(~uVar22 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar23) & uVar22) *
                   dVar3 * *(double *)(puVar6 + 0x30);
              local_130 = param_2;
              if (param_8 == (undefined8 **)0x0) {
                local_118 = (undefined8 *)0x0;
                uStack_110 = 0;
                local_128 = (undefined8 *)0x0;
                uStack_120 = 0;
              }
              else {
                local_118 = (undefined8 *)0x0;
                uStack_110 = uStack_110 & 0xffffffff00000000;
                FUN_1446efa72(&local_118,0,3,0x10);
                puVar8 = local_118;
                uStack_110 = CONCAT44(uStack_110._4_4_,3);
                *local_118 = &PTR_LAB_149e35290;
                LOCK();
                UNLOCK();
                lVar13 = DAT_14c758608 + 1;
                lVar12 = DAT_14c758608 + 1;
                if (lVar13 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar13 = DAT_14c758608 + 2;
                  lVar12 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar12;
                local_118[2] = lVar13;
                *local_118 = &PTR_FUN_14aa8f540;
                local_118[3] = 0;
                uVar19 = *(uint *)((longlong)param_8 + 0xc);
                *(uint *)(local_118 + 3) = uVar19;
                if ((int)uVar19 < DAT_14c9647dc) {
                  lVar12 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
                }
                else {
                  lVar12 = 0;
                }
                iVar9 = *(int *)(lVar12 + 0x10);
                if (*(int *)(lVar12 + 0x10) == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar16 = DAT_14c964868 + 1;
                  bVar18 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar18) {
                    local_134 = iVar16;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar16);
                    iVar16 = local_134;
                  }
                  LOCK();
                  iVar9 = *(int *)(lVar12 + 0x10);
                  bVar18 = iVar9 == 0;
                  if (bVar18) {
                    *(int *)(lVar12 + 0x10) = iVar16;
                    iVar9 = 0;
                  }
                  UNLOCK();
                  if (bVar18) {
                    iVar9 = iVar16;
                  }
                }
                *(int *)((longlong)puVar8 + 0x1c) = iVar9;
                puVar8[4] = &LAB_147d19512;
                *(undefined4 *)(puVar8 + 5) = 0;
                local_128 = (undefined8 *)0x0;
                uStack_120 = uStack_120 & 0xffffffff00000000;
                FUN_1446efa72(&local_128,0,3,0x10);
                puVar8 = local_128;
                uStack_120 = CONCAT44(uStack_120._4_4_,3);
                *local_128 = &PTR_LAB_149e35290;
                LOCK();
                UNLOCK();
                lVar13 = DAT_14c758608 + 1;
                lVar12 = DAT_14c758608 + 1;
                if (lVar13 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar13 = DAT_14c758608 + 2;
                  lVar12 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar12;
                local_128[2] = lVar13;
                *local_128 = &PTR_FUN_14aa8f540;
                local_128[3] = 0;
                uVar19 = *(uint *)((longlong)param_8 + 0xc);
                *(uint *)(local_128 + 3) = uVar19;
                if ((int)uVar19 < DAT_14c9647dc) {
                  lVar12 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
                }
                else {
                  lVar12 = 0;
                }
                iVar9 = *(int *)(lVar12 + 0x10);
                if (*(int *)(lVar12 + 0x10) == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar16 = DAT_14c964868 + 1;
                  bVar18 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar18) {
                    local_134 = iVar16;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar16);
                    iVar16 = local_134;
                  }
                  LOCK();
                  iVar9 = *(int *)(lVar12 + 0x10);
                  bVar18 = iVar9 == 0;
                  if (bVar18) {
                    *(int *)(lVar12 + 0x10) = iVar16;
                    iVar9 = 0;
                  }
                  UNLOCK();
                  if (bVar18) {
                    iVar9 = iVar16;
                  }
                }
                *(int *)((longlong)puVar8 + 0x1c) = iVar9;
                puVar8[4] = &LAB_147d19506;
                *(undefined4 *)(puVar8 + 5) = 0;
              }
              local_148 = &local_118;
              local_150 = &local_128;
              local_158 = param_8;
              FUN_140aa2b96(puVar6,lVar17,lVar7,fVar26);
              param_2 = local_130;
            }
            break;
          }
          iVar9 = (int)plVar1[2];
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != (int)uVar5);
  }
  local_b0 = 0;
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar20 = uStack_f0 >> 0x20;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  if ((int)uVar20 != 0) {
    FUN_144727cd0(&local_f8,0);
  }
  uStack_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    FUN_1446efbd8(local_e8,0);
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa2aee FUN_140aa2aee body=72 status=ok
// SIG undefined FUN_140aa2aee(void)

undefined8 FUN_140aa2aee(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(uint *)(puVar3 + 2) != param_1[1]) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140aa2b36 FUN_140aa2b36 body=96 status=ok
// SIG undefined FUN_140aa2b36(void)

void FUN_140aa2b36(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_140146ccc(param_1 + 6,param_2 + 6);
  FUN_1401472fa(param_1 + 10,param_2 + 10);
  FUN_140146ccc(param_1 + 0xe,param_2 + 0xe);
  memcpy(param_1 + 0x12,param_2 + 0x12,0x240);
  return;
}



// FUNCTION 140aa2b96 FUN_140aa2b96 body=389 status=ok
// SIG undefined FUN_140aa2b96(void)

void FUN_140aa2b96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_140aa2d1c(param_2,param_3,&local_58,&local_60);
  if (cVar2 != '\0') {
    uVar4 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_140146ccc(&local_70,param_7);
    local_80 = 0;
    local_78 = 0;
    FUN_140146ccc(&local_80,param_6);
    if (local_60 != 0) {
      uVar4 = *(undefined8 *)(local_60 + 0x50);
    }
    if (local_58 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(local_58 + 0x50);
    }
    local_90 = &local_80;
    local_88 = &local_70;
    FUN_140aa2f88(param_1,uVar3,uVar4,param_4);
  }
  if ((int)param_6[1] == 0) {
LAB_140aa2c5d:
    if (*param_6 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_6;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_6,0,0,0x10);
      *(undefined4 *)(param_6 + 1) = 0;
      goto LAB_140aa2c5d;
    }
  }
  if ((int)param_7[1] != 0) {
    puVar1 = (undefined8 *)*param_7;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140aa2c7b;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_7,0,0,0x10);
    *(undefined4 *)(param_7 + 1) = 0;
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
LAB_140aa2c7b:
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa2d1c FUN_140aa2d1c body=360 status=ok
// SIG undefined FUN_140aa2d1c(void)

undefined8 FUN_140aa2d1c(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  char *local_68;
  longlong *local_60;
  char *local_58;
  longlong *local_50;
  undefined1 *local_48;
  char **local_40;
  char local_32;
  char local_31;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(longlong *)(param_1 + 0x138);
  }
  if (param_2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(longlong *)(param_2 + 0x138);
  }
  if ((((local_28 == 0) || (lVar2 = *(longlong *)(local_28 + 0x40), lVar2 == 0)) ||
      (*(byte *)(lVar2 + 0x90) == 0)) ||
     ((1 < *(byte *)(lVar2 + 0x90) && (*(char *)(lVar2 + 0x1ac) == '\x03')))) {
    if (local_30 != 0) {
      lVar2 = *(longlong *)(local_30 + 0x40);
      uVar1 = 0;
      if ((lVar2 == 0) || (*(byte *)(lVar2 + 0x90) == 0)) goto LAB_140aa2e13;
      if ((*(byte *)(lVar2 + 0x90) < 2) || (*(char *)(lVar2 + 0x1ac) != '\x03')) goto LAB_140aa2d9b;
    }
  }
  else {
LAB_140aa2d9b:
    if (local_28 == 0 || local_28 != local_30) {
      local_68 = &local_31;
      local_31 = '\0';
      local_58 = &local_32;
      local_32 = '\0';
      local_40 = &local_68;
      local_60 = &local_28;
      local_50 = &local_30;
      local_48 = &LAB_143625a20;
      FUN_140aa2e86();
      if ((local_31 == '\x01') && (local_32 != '\0')) {
        *param_3 = local_28;
        uVar1 = 1;
        lVar2 = local_30;
      }
      else {
        *param_3 = 0;
        lVar2 = 0;
        uVar1 = 0;
      }
      *param_4 = lVar2;
      goto LAB_140aa2e13;
    }
  }
  uVar1 = 0;
LAB_140aa2e13:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa2e86 FUN_140aa2e86 body=117 status=ok
// SIG undefined FUN_140aa2e86(void)

undefined8 FUN_140aa2e86(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [40];
  char local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140aa2efc(local_40,param_1,param_2,0);
  (*(code *)*param_3)(param_3[1],param_1,param_2);
  if (local_40[0] == '\x01') {
    FUN_1447e63de(local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa2efc FUN_140aa2efc body=140 status=ok
// SIG undefined FUN_140aa2efc(void)

undefined1 *
FUN_140aa2efc(undefined1 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[0x10] = param_4;
  if (((param_2 == (longlong *)0x0) || (*param_2 == 0)) ||
     (lVar1 = *(longlong *)(*param_2 + 8), lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x260);
  }
  if (((param_3 == (longlong *)0x0) || (*param_3 == 0)) ||
     (lVar2 = *(longlong *)(*param_3 + 8), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x260);
  }
  uVar3 = 0;
  lVar4 = 0;
  if (lVar2 == 0) {
    lVar4 = lVar1;
  }
  if (lVar1 == 0) {
    lVar4 = lVar2;
  }
  if (lVar1 == lVar2) {
    lVar4 = lVar1;
  }
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
  }
  *(undefined8 *)(param_1 + 8) = uVar3;
  FUN_1447e649a(param_1);
  return param_1;
}



// FUNCTION 140aa2f88 FUN_140aa2f88 body=564 status=ok
// SIG undefined FUN_140aa2f88(void)

void FUN_140aa2f88(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined1 auStack_e8 [40];
  code *local_c0;
  undefined8 *local_b8;
  longlong **local_b0;
  undefined4 local_a8;
  longlong **local_a0;
  undefined4 local_98;
  longlong **local_90;
  undefined4 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_90 = &local_48;
  local_88 = 2;
  local_80 = param_2;
  local_78 = param_3;
  local_6c = param_4;
  local_48 = param_2;
  local_40 = param_3;
  FUN_144a56970(&local_68);
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = **(byte **)(*param_2 + 0x20) ^ 1;
  }
  if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = **(byte **)(*param_3 + 0x20) ^ 1;
  }
  if (DAT_14c761725 == '\0') {
    if (bVar2 != 0) {
      local_a0 = &local_80;
      local_98 = 1;
      cVar3 = FUN_146e203b4(&local_50);
      if (cVar3 == '\0') goto LAB_140aa3045;
    }
    if (bVar4 != 0) {
      local_b0 = &local_78;
      local_a8 = 1;
      cVar3 = FUN_146e203b4(&local_50);
      if (cVar3 == '\0') goto LAB_140aa3045;
    }
    FUN_1448635f4(&local_68);
  }
  else {
LAB_140aa3045:
    FUN_1448635f4(&local_68);
    local_60 = &local_6c;
    local_58 = param_6;
    local_50 = param_7;
    local_c0 = FUN_143625a2e;
    local_b8 = &local_68;
    local_68 = param_1;
    FUN_140aa31be(local_80,local_78);
  }
  if ((int)param_6[1] == 0) {
LAB_140aa3091:
    if (*param_6 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_6;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_6,0,0,0x10);
      *(undefined4 *)(param_6 + 1) = 0;
      goto LAB_140aa3091;
    }
  }
  if ((int)param_7[1] != 0) {
    puVar1 = (undefined8 *)*param_7;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140aa30af;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_7,0,0,0x10);
    *(undefined4 *)(param_7 + 1) = 0;
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
LAB_140aa30af:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa31be FUN_140aa31be body=127 status=ok
// SIG undefined FUN_140aa31be(void)

undefined8 FUN_140aa31be(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  char local_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140aa323e(local_50,param_1,param_2,1);
  local_38 = param_1;
  local_30 = param_2;
  (*(code *)*param_3)(param_3[1]);
  if (local_50[0] == '\x01') {
    FUN_1447e63de(local_50);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa323e FUN_140aa323e body=140 status=ok
// SIG undefined FUN_140aa323e(void)

undefined1 *
FUN_140aa323e(undefined1 *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[0x10] = param_4;
  if (((param_2 == (longlong *)0x0) || (*param_2 == 0)) ||
     (lVar1 = *(longlong *)(*param_2 + 8), lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x260);
  }
  if (((param_3 == (longlong *)0x0) || (*param_3 == 0)) ||
     (lVar2 = *(longlong *)(*param_3 + 8), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x260);
  }
  uVar3 = 0;
  lVar4 = 0;
  if (lVar2 == 0) {
    lVar4 = lVar1;
  }
  if (lVar1 == 0) {
    lVar4 = lVar2;
  }
  if (lVar1 == lVar2) {
    lVar4 = lVar1;
  }
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
  }
  *(undefined8 *)(param_1 + 8) = uVar3;
  FUN_1447e649a(param_1);
  return param_1;
}



// FUNCTION 140aa32ca FUN_140aa32ca body=353 status=ok
// SIG undefined FUN_140aa32ca(void)

void FUN_140aa32ca(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140aa334f;
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
LAB_140aa334f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140aa342c FUN_140aa342c body=1966 status=ok
// SIG undefined FUN_140aa342c(void)

void FUN_140aa342c(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong param_6,longlong param_7,uint param_8)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  int *local_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined1 local_b8 [108];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar28 = *(uint *)(param_2 + 0x48);
  uVar22 = (ulonglong)uVar28;
  iVar6 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar6 + uVar28;
  local_d0 = param_4;
  local_c0 = param_2;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar6) < uVar28) {
    FUN_1405a36b0(param_3);
  }
  memset((void *)((longlong)iVar6 * 8 + *param_3),0,(longlong)(int)uVar28 * 8);
  local_f8 = uVar22;
  local_c8 = param_3;
  if ((param_5 == (longlong *)0x0) ||
     (iVar6 = (int)param_5[1], uVar28 <= (uint)(iVar6 - *(int *)((longlong)param_5 + 0x34)))) {
    if ((int)uVar28 < 1) goto LAB_140aa3b2c;
  }
  else {
    if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar28);
    }
    if (iVar6 < (int)uVar28) {
      uVar24 = uVar28 - iVar6;
      iVar26 = *(int *)((longlong)param_5 + 0xc);
      iVar7 = iVar6;
      if (iVar26 < (int)uVar28) {
        FUN_144727cd0(param_5);
        iVar7 = (int)param_5[1];
        iVar26 = *(int *)((longlong)param_5 + 0xc);
      }
      *(uint *)(param_5 + 1) = uVar24 + iVar7;
      if ((uint)(iVar26 - iVar7) < uVar24) {
        FUN_14482b872(param_5);
      }
      if (iVar7 < (int)uVar28) {
        lVar2 = *param_5;
        iVar26 = *(int *)((longlong)param_5 + 0x34);
        puVar20 = (undefined4 *)(lVar2 + uVar22 * 0x18 + -0x14);
        do {
          iVar23 = (int)uVar22;
          if (iVar26 != 0) {
            *(int *)(lVar2 + (longlong)(int)param_5[6] * 0x18) = iVar23 + -1;
          }
          puVar20[-1] = 0xffffffff;
          if (*(int *)((longlong)param_5 + 0x34) < 1) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = (undefined4)param_5[6];
          }
          uVar22 = uVar22 - 1;
          *puVar20 = uVar8;
          *(int *)(param_5 + 6) = iVar23 + -1;
          iVar26 = *(int *)((longlong)param_5 + 0x34) + 1;
          *(int *)((longlong)param_5 + 0x34) = iVar26;
          puVar20 = puVar20 + -6;
        } while ((longlong)iVar7 < (longlong)uVar22);
      }
      if (iVar6 == 0) {
        *(uint *)(param_5 + 5) = uVar24;
        uVar28 = uVar24 + 0x1f >> 5;
        if (*(int *)((longlong)param_5 + 0x2c) + 0x1fU >> 5 < uVar28) {
          if ((0x80 < uVar24) || (param_5[4] != 0)) {
            uVar25 = 0;
            if (0x80 < uVar24) {
              uVar25 = uVar28;
            }
            FUN_1446efa72(param_5 + 4,0,uVar25,4);
          }
          *(uint *)((longlong)param_5 + 0x2c) = uVar24 + 0x1f & 0xffffffe0;
        }
        plVar10 = (longlong *)param_5[4];
        if ((longlong *)param_5[4] == (longlong *)0x0) {
          plVar10 = param_5 + 2;
        }
        if (uVar24 < 0x101) {
          uVar28 = uVar28 + (uVar28 == 0);
        }
        memset(plVar10,0,(ulonglong)(uVar28 << 2));
        uVar28 = (uint)local_f8;
        iVar6 = (int)param_5[5];
        iVar26 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar26 = iVar6;
        }
        if (iVar6 % 0x20 != 0) {
          plVar10 = param_5 + 2;
          if ((longlong *)param_5[4] != (longlong *)0x0) {
            plVar10 = (longlong *)param_5[4];
          }
          bVar11 = -(char)(iVar6 % 0x20);
          *(uint *)((longlong)plVar10 + (longlong)(iVar26 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar26 >> 5) * 4) << (bVar11 & 0x1f))
               >> (bVar11 & 0x1f);
        }
      }
      else {
        uVar28 = (uint)local_f8;
        if (-1 < (int)uVar24) {
          uVar8 = FUN_144a54ea4(param_5 + 2,uVar24);
          FUN_1447c6044(param_5 + 2,uVar8,uVar24,0);
        }
      }
    }
    iVar6 = 1;
    if (3 < uVar28) {
      uVar28 = (uVar28 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar28 != 0) {
        for (; uVar28 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if (((int)param_5[9] == 0) || ((int)param_5[9] < iVar6)) {
      *(int *)(param_5 + 9) = iVar6;
      FUN_1417efd04();
    }
  }
  local_d8 = (undefined8 *)(param_1 + 0x4c0);
  local_e0 = (undefined4 *)(param_1 + 0x4d8);
  local_f0 = param_5 + 2;
  local_e8 = param_5 + 7;
  uVar22 = 0;
  do {
    lVar2 = *(longlong *)(*(longlong *)(local_c0 + 0x40) + uVar22 * 8);
    if (lVar2 != 0) {
      uVar9 = FUN_14001cc68(0x188,0x10);
      FUN_144805afa(uVar9);
      *(undefined8 *)(*local_c8 + uVar22 * 8) = uVar9;
      lVar3 = *(longlong *)(*local_c8 + uVar22 * 8);
      iVar6 = FUN_144909502(param_1,*(undefined8 *)(lVar2 + 0x28));
      if (iVar6 != -1) {
        FUN_1400f437c(lVar3,lVar2 + 0x148);
        bVar11 = *(byte *)(lVar3 + 8);
        *(byte *)(lVar3 + 8) = bVar11 & 0xfe;
        *(int *)(lVar3 + 0xc) = (int)uVar22;
        *(short *)(lVar3 + 0x10) = (short)iVar6;
        if ((int)param_8 < 0) {
          bVar12 = 0x20;
        }
        else {
          bVar12 = *(byte *)(param_1 + 0x418) & 0x20;
        }
        *(byte *)(lVar3 + 8) = bVar11 & 0xde | bVar12;
        *(undefined1 *)(lVar3 + 0x12) = *(undefined1 *)(param_1 + 0x422);
        *(undefined1 *)(lVar3 + 0x13) = *(undefined1 *)(param_1 + 0x423);
        *(undefined1 *)(lVar3 + 0x14) = *(undefined1 *)(param_1 + 0x424);
        FUN_1417e5370(lVar3,*(undefined1 *)(param_1 + 0x426));
        if ((*(byte *)(param_1 + 1099) & 1) != 0) {
          FUN_140e1c5ee(lVar3,1);
        }
        if (uVar22 == param_8) {
          *(undefined1 *)(lVar3 + 0x3a) = *(undefined1 *)(param_1 + 0x44a);
          uVar9 = local_d8[1];
          *(undefined8 *)(lVar3 + 0xb0) = *local_d8;
          *(undefined8 *)(lVar3 + 0xb8) = uVar9;
          *(undefined8 *)(lVar3 + 0xc0) = local_d8[2];
          bVar12 = *(byte *)(param_1 + 0x44c) & 4;
          bVar11 = *(byte *)(lVar3 + 0x3c);
          *(byte *)(lVar3 + 0x3c) = bVar11 & 0xfb | bVar12;
          bVar13 = *(byte *)(param_1 + 0x44c) & 8;
          *(byte *)(lVar3 + 0x3c) = bVar11 & 0xf3 | bVar12 | bVar13;
          bVar14 = *(byte *)(param_1 + 0x44c) & 0x10;
          *(byte *)(lVar3 + 0x3c) = bVar11 & 0xe3 | bVar12 | bVar13 | bVar14;
          bVar15 = *(byte *)(param_1 + 0x44c) & 0x20;
          *(byte *)(lVar3 + 0x3c) = bVar11 & 0xc3 | bVar12 | bVar13 | bVar14 | bVar15;
          bVar16 = *(byte *)(param_1 + 0x44c) & 0x40;
          *(byte *)(lVar3 + 0x3c) = bVar11 & 0x83 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16;
          bVar17 = *(byte *)(param_1 + 0x44c) & 0x80;
          *(byte *)(lVar3 + 0x3c) = bVar11 & 3 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16 | bVar17
          ;
          bVar18 = *(byte *)(param_1 + 0x44c) & 1;
          *(byte *)(lVar3 + 0x3c) =
               bVar11 & 2 | bVar12 | bVar13 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18;
          *(byte *)(lVar3 + 0x3c) =
               bVar12 | bVar13 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 |
               *(byte *)(param_1 + 0x44c) & 2;
          uVar8 = local_e0[1];
          uVar4 = local_e0[2];
          uVar5 = local_e0[3];
          *(undefined4 *)(lVar3 + 200) = *local_e0;
          *(undefined4 *)(lVar3 + 0xcc) = uVar8;
          *(undefined4 *)(lVar3 + 0xd0) = uVar4;
          *(undefined4 *)(lVar3 + 0xd4) = uVar5;
          *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(local_e0 + 4);
        }
        else {
          *(undefined1 *)(lVar3 + 0x3a) = 6;
          if ((param_6 != 0) && (*DAT_14cb06f28 == 0)) goto LAB_140aa3a8e;
        }
        local_4c = iVar6;
        (*(code *)*local_d0)(local_b8,local_d0[1],&local_4c);
        FUN_14025a69a(&local_4c,param_7);
        if (param_7 == 0) {
          local_4c = CONCAT22(local_4c._2_2_,0x100);
        }
        local_100 = 0;
        local_110 = param_6;
        local_118 = 0;
        local_108 = &local_4c;
        FUN_140311a3a(lVar3,lVar2,local_b8,param_7);
        if (param_5 != (longlong *)0x0) {
          if (*(int *)((longlong)param_5 + 0x34) == 0) {
            iVar6 = (int)param_5[1];
            *(int *)(param_5 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_5 + 0xc) == iVar6) {
              FUN_14482b872(param_5,iVar6);
            }
            lVar27 = (longlong)iVar6;
            iVar26 = FUN_144a54ea4(local_f0,1);
            plVar10 = (longlong *)param_5[4];
            if ((longlong *)param_5[4] == (longlong *)0x0) {
              plVar10 = local_f0;
            }
            iVar7 = iVar26 + 0x1f;
            if (-1 < iVar26) {
              iVar7 = iVar26;
            }
            bVar11 = (byte)iVar26 & 0x1f;
            puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar7 >> 5) * 4);
            *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
          }
          else {
            iVar6 = (int)param_5[6];
            lVar27 = (longlong)iVar6;
            iVar26 = *(int *)(*param_5 + 4 + lVar27 * 0x18);
            *(int *)(param_5 + 6) = iVar26;
            iVar7 = *(int *)((longlong)param_5 + 0x34) + -1;
            *(int *)((longlong)param_5 + 0x34) = iVar7;
            if (iVar7 != 0) {
              *(undefined4 *)(*param_5 + (longlong)iVar26 * 0x18) = 0xffffffff;
            }
          }
          plVar10 = (longlong *)param_5[4];
          if ((longlong *)param_5[4] == (longlong *)0x0) {
            plVar10 = local_f0;
          }
          iVar26 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar26 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar26 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
          plVar10 = (longlong *)(*param_5 + lVar27 * 0x18);
          lVar2 = *(longlong *)(lVar2 + 0x28);
          *plVar10 = lVar2;
          plVar10[1] = lVar3;
          *(undefined4 *)(plVar10 + 2) = 0xffffffff;
          uVar28 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar24 = (uint)lVar2 & 0xffff;
          uVar28 = ((uint)lVar2 << 0x10 | uVar24) + (int)((ulonglong)lVar2 >> 0x20) +
                   (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar24 >> 4);
          uVar24 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
          if (1 < uVar24) {
            plVar21 = (longlong *)param_5[8];
            if ((longlong *)param_5[8] == (longlong *)0x0) {
              plVar21 = local_e8;
            }
            iVar26 = *(int *)((longlong)plVar21 + (ulonglong)((int)param_5[9] - 1U & uVar28) * 4);
            if (iVar26 != -1) {
              do {
                plVar21 = (longlong *)(*param_5 + (longlong)iVar26 * 0x18);
                if (*plVar21 == lVar2) {
                  uVar8 = *(undefined4 *)((longlong)plVar10 + 4);
                  lVar2 = plVar10[1];
                  uVar4 = *(undefined4 *)((longlong)plVar10 + 0xc);
                  *(int *)plVar21 = (int)*plVar10;
                  *(undefined4 *)((longlong)plVar21 + 4) = uVar8;
                  *(int *)(plVar21 + 1) = (int)lVar2;
                  *(undefined4 *)((longlong)plVar21 + 0xc) = uVar4;
                  FUN_147d1f642(param_5,iVar6);
                  goto LAB_140aa3a8e;
                }
                iVar26 = (int)plVar21[2];
              } while (iVar26 != -1);
            }
          }
          iVar26 = 1;
          if (3 < uVar24) {
            uVar19 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
            lVar2 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar26 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((int)uVar24 < 1) || (iVar26 <= (int)param_5[9])) {
            uVar28 = (int)param_5[9] - 1U & uVar28;
            *(uint *)((longlong)plVar10 + 0x14) = uVar28;
            plVar21 = (longlong *)param_5[8];
            if ((longlong *)param_5[8] == (longlong *)0x0) {
              plVar21 = local_e8;
            }
            *(undefined4 *)(plVar10 + 2) =
                 *(undefined4 *)
                  ((longlong)plVar21 + ((longlong)(int)param_5[9] - 1U & (longlong)(int)uVar28) * 4)
            ;
            plVar10 = (longlong *)param_5[8];
            if ((longlong *)param_5[8] == (longlong *)0x0) {
              plVar10 = local_e8;
            }
            *(int *)((longlong)plVar10 +
                    ((longlong)(int)param_5[9] - 1U & (longlong)(int)uVar28) * 4) = iVar6;
          }
          else {
            *(int *)(param_5 + 9) = iVar26;
            FUN_1417efd04(param_5);
          }
        }
      }
    }
LAB_140aa3a8e:
    uVar22 = uVar22 + 1;
  } while (uVar22 != local_f8);
LAB_140aa3b2c:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa3bdc FUN_140aa3bdc body=425 status=ok
// SIG undefined FUN_140aa3bdc(void)

void FUN_140aa3bdc(longlong *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_4[2];
  local_68 = *param_4;
  dStack_60 = param_4[1];
  if (param_1[0x62e] == 0) {
    dVar2 = local_68;
    dVar3 = dStack_60;
    if ((char)param_1[0x696] != '\x01') goto LAB_140aa3c47;
    plVar6 = param_1 + 0x642;
  }
  else {
    plVar6 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  lVar5 = FUN_140153468(plVar6);
  dVar1 = local_58;
  dVar2 = local_68;
  dVar3 = dStack_60;
  if ((((lVar5 != 0) && ((*(byte *)(plVar6 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) &&
     ((0.0 < local_58 &&
      (cVar4 = (**(code **)(*param_1 + 0x878))(param_1,param_5), dVar2 = local_68, dVar3 = dStack_60
      , cVar4 == '\0')))) {
    dVar7 = local_68 * local_68 + dStack_60 * dStack_60;
    if ((dVar7 != 1.0) || (NAN(dVar7))) {
      dVar2 = DAT_14c8464e0;
      dVar3 = DAT_14c8464e8;
      local_58 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar7) {
        local_58 = 0.0;
        dVar2 = local_68 * (1.0 / SQRT(dVar7));
        dVar3 = dStack_60 * (1.0 / SQRT(dVar7));
      }
    }
    else {
      local_58 = (double)(-(ulonglong)(dVar1 == 0.0) & (ulonglong)dVar1);
    }
  }
LAB_140aa3c47:
  dStack_60 = dVar3;
  local_68 = dVar2;
  local_70 = param_6;
  local_78 = param_5;
  FUN_140aa3d86(param_1,param_2,param_3,&local_68);
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa3d86 FUN_140aa3d86 body=923 status=ok
// SIG undefined FUN_140aa3d86(void)

void FUN_140aa3d86(longlong *param_1,double *param_2,undefined8 param_3,double *param_4,
                  longlong param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_5 + 0xad) & 1) == 0) {
    uVar6 = 0;
    goto LAB_140aa3ec3;
  }
  dVar3 = param_4[2];
  uVar6 = *(undefined4 *)param_4;
  uVar9 = *(undefined4 *)((longlong)param_4 + 4);
  dVar8 = *param_4;
  uVar10 = *(undefined4 *)(param_4 + 1);
  uVar11 = *(undefined4 *)((longlong)param_4 + 0xc);
  dVar4 = param_4[1];
  dVar7 = (double)param_1[0x46];
  dVar1 = (double)param_1[0x47];
  uVar12 = SUB84(dVar3,0);
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar2 = (double)param_1[0x48];
  local_b8 = dVar8;
  dStack_b0 = dVar4;
  local_a8 = dVar3;
  cVar5 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
  if (cVar5 != '\0') {
    dVar7 = (-dVar7 * dVar8 - dVar1 * dVar4) - dVar2 * dVar3;
    if (dVar7 <= 0.0) {
      if (((dVar7 < -9.999999747378752e-05) &&
          (*(float *)((longlong)param_1 + 0x49c) <= 1.9 &&
           *(float *)((longlong)param_1 + 0x49c) != 1.9)) && ((*(byte *)(param_1 + 0x93) & 1) != 0))
      {
        dVar7 = (double)param_1[0x9d];
        dVar1 = (double)param_1[0x9e];
        dVar2 = (double)param_1[0x9f];
        dVar8 = (double)param_1[0x46];
        dVar4 = (double)param_1[0x47];
        dVar3 = (double)param_1[0x48];
        if ((param_2[2] * dVar2 + *param_2 * dVar7 + param_2[1] * dVar1 < 0.0) &&
           ((-dVar8 * dVar7 - dVar1 * dVar4) - dVar2 * dVar3 < 0.9999899864196777)) {
          uVar12 = SUB84(dVar2,0);
          uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
          uVar10 = SUB84(dVar1,0);
          uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
          uVar6 = SUB84(dVar7,0);
          uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        dVar7 = (double)CONCAT44(uVar13,uVar12) * dVar3 +
                (double)CONCAT44(uVar9,uVar6) * dVar8 + dVar4 * (double)CONCAT44(uVar11,uVar10);
        dVar8 = dVar7 * dVar8;
        dVar3 = (double)CONCAT44(uVar13,uVar12) - dVar3 * dVar7;
        dVar4 = (double)CONCAT44(uVar11,uVar10) - dVar4 * dVar7;
        goto LAB_140aa4084;
      }
    }
    else {
      cVar5 = (**(code **)(*param_1 + 0x878))(param_1,param_5);
      if (cVar5 == '\0') {
        dVar7 = dVar3 * (double)param_1[0x48] +
                dVar8 * (double)param_1[0x46] + dVar4 * (double)param_1[0x47];
        dVar8 = dVar7 * (double)param_1[0x46];
        dVar3 = dVar3 - (double)param_1[0x48] * dVar7;
        dVar4 = dVar4 - (double)param_1[0x47] * dVar7;
LAB_140aa4084:
        dVar8 = (double)CONCAT44(uVar9,uVar6) - dVar8;
        dVar7 = dVar3 * dVar3 + dVar8 * dVar8 + dVar4 * dVar4;
        if (((dVar7 != 1.0) || (local_b8 = dVar8, dStack_b0 = dVar4, local_a8 = dVar3, NAN(dVar7)))
           && (local_b8 = DAT_14c8464e0, dStack_b0 = DAT_14c8464e8, local_a8 = DAT_14c8464f0,
              9.99999993922529e-09 <= dVar7)) {
          local_b8 = 1.0 / SQRT(dVar7);
          local_a8 = dVar3 * local_b8;
          dStack_b0 = dVar4 * local_b8;
          local_b8 = dVar8 * local_b8;
        }
      }
    }
  }
  local_c0 = param_6;
  local_c8 = param_5;
  uVar6 = FUN_140aa4122(param_1,param_2,param_3,&local_b8);
LAB_140aa3ec3:
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar6);
  }
  return;
}



// FUNCTION 140aa4122 FUN_140aa4122 body=648 status=ok
// SIG undefined FUN_140aa4122(void)

float FUN_140aa4122(longlong *param_1,double *param_2,undefined8 param_3,undefined4 *param_4,
                   undefined4 *param_5,char param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_80;
  double local_78;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(byte *)((longlong)param_5 + 0xad) & 1) != 0) {
    local_58 = *(undefined8 *)(param_4 + 4);
    local_68 = *param_4;
    uStack_64 = param_4[1];
    uStack_60 = param_4[2];
    uStack_5c = param_4[3];
    local_b0 = param_5;
    local_b8 = param_4;
    (**(code **)(*param_1 + 0x500))(local_68,&local_80,param_2,param_3);
    if (0.0 < local_70 * param_2[2] + local_80 * *param_2 + local_78 * param_2[1]) {
      lVar1 = param_1[0x22];
      local_a8 = *(undefined8 *)(lVar1 + 0x240);
      uStack_a0 = *(undefined8 *)(lVar1 + 0x248);
      local_98 = *(undefined4 *)(lVar1 + 0x250);
      uStack_94 = *(undefined4 *)(lVar1 + 0x254);
      uStack_90 = *(undefined4 *)(lVar1 + 600);
      uStack_8c = *(undefined4 *)(lVar1 + 0x25c);
      local_b8 = param_5;
      local_b0 = (undefined4 *)((ulonglong)local_b0 & 0xffffffffffffff00);
      FUN_1402eda10(param_1,&local_80,&local_a8,1);
      fVar3 = (float)param_5[1];
      if ((*(byte *)((longlong)param_5 + 0xad) & 3) == 1) {
        if (param_6 != '\0') {
          (**(code **)(*param_1 + 0x4c8))(param_1,param_5,fVar3 * (float)param_3,&local_80);
        }
        (**(code **)(*param_1 + 0x510))(param_1,&local_80,param_5,&local_68);
        if ((((0.0010000000474974513 < ABS(local_80)) || (0.0010000000474974513 < ABS(local_78))) ||
            (0.0010000000474974513 < ABS(local_70))) &&
           (0.0 < local_70 * param_2[2] + local_80 * *param_2 + local_78 * param_2[1])) {
          local_b8 = param_5;
          local_b0 = (undefined4 *)((ulonglong)local_b0 & 0xffffffffffffff00);
          FUN_1402eda10(param_1,&local_80,&local_a8,1);
          fVar2 = (1.0 - fVar3) * (float)param_5[1];
          fVar3 = fVar3 + fVar2;
          if ((param_6 != '\0') && ((*(byte *)((longlong)param_5 + 0xad) & 1) != 0)) {
            (**(code **)(*param_1 + 0x4c8))(param_1,param_5,fVar2 * (float)param_3,&local_80);
          }
        }
      }
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      goto LAB_140aa423a;
    }
  }
  fVar3 = 0.0;
LAB_140aa423a:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar3;
}



// FUNCTION 140aa43ac FUN_140aa43ac body=375 status=ok
// SIG undefined FUN_140aa43ac(void)

undefined8 * FUN_140aa43ac(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140aa4534 FUN_140aa4534 body=375 status=ok
// SIG undefined FUN_140aa4534(void)

undefined8 * FUN_140aa4534(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140aa46b8 FUN_140aa46b8 body=903 status=ok
// SIG undefined FUN_140aa46b8(void)

undefined8 FUN_140aa46b8(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = uVar5;
  if (0 < *(int *)(param_1 + 0x1a8)) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x1a0);
      puVar1 = (uint *)(lVar6 + lVar12);
      iVar2 = *(int *)(lVar6 + 4 + lVar12);
      if ((((iVar2 == 0) || (uVar4 = *puVar1, (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) ||
         (((plVar10 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar10 == (longlong *)0x0 || ((int)plVar10[2] != iVar2)) ||
          (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
           (plVar10 = (longlong *)*plVar10, plVar10 == (longlong *)0x0)))))) {
        if (*(longlong *)(lVar6 + 8 + lVar12) != 0) {
          plVar10 = (longlong *)FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar10 == (longlong *)0x0) || (cVar3 == '\0')) {
            if (plVar10 == (longlong *)0x0) {
              puVar1[0] = 0;
              puVar1[1] = 0;
              goto LAB_140aa47e1;
            }
            uVar4 = *(uint *)((longlong)plVar10 + 0xc);
            *puVar1 = uVar4;
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            uVar4 = *(uint *)(lVar6 + 0x10);
            if (*(uint *)(lVar6 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              uVar9 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar9);
              }
              LOCK();
              uVar4 = *(uint *)(lVar6 + 0x10);
              bVar13 = uVar4 == 0;
              if (bVar13) {
                *(uint *)(lVar6 + 0x10) = uVar9;
                uVar4 = 0;
              }
              UNLOCK();
              if (bVar13) {
                uVar4 = uVar9;
              }
            }
            puVar1[1] = uVar4;
          }
          else {
            uVar4 = *(uint *)((longlong)plVar10 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(puVar1,plVar10);
            }
          }
          if ((*(uint *)(plVar10 + 1) >> 0x1e & 1) == 0) goto LAB_140aa4765;
        }
      }
      else {
LAB_140aa4765:
        if (DAT_14c949118 == 0) {
          local_58 = FUN_140631fbe;
          lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar6;
          FUN_1446f470e(local_50,L"Class",1);
          local_68 = &LAB_146891e90;
          local_70 = &LAB_146273097;
          local_80 = L"Engine";
          local_78 = 199;
          local_88 = 0x20;
          local_90 = 0x10000000;
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,8);
          local_60 = &local_58;
          FUN_14574b4b2(lVar6);
          DAT_14c949118 = lVar6;
          uVar7 = FUN_144a7a812();
          lVar6 = DAT_14c949118;
          uVar8 = FUN_1449e2fb2();
          local_98 = L"Class";
          FUN_14574b446(uVar8,lVar6,uVar7,L"/Script/CoreUObject");
        }
        if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
              DAT_14c949118 + 0x30)) && (lVar6 = FUN_140aa4a40(), lVar6 != 0)) &&
           ((*(int *)(lVar6 + 0x38) <= (int)plVar10[7] &&
            (*(longlong *)(plVar10[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)))) {
          lVar6 = plVar10[0x22];
          if (lVar6 == 0) {
            (**(code **)(*plVar10 + 1000))(plVar10);
            lVar6 = plVar10[0x22];
          }
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_140aa4b1e(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar6;
        }
      }
LAB_140aa47e1:
      lVar11 = lVar11 + 1;
      uVar5 = (ulonglong)*(int *)(param_1 + 0x1a8);
      lVar12 = lVar12 + 0x28;
    } while (lVar11 < (longlong)uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < (int)param_2[1]);
}



// FUNCTION 140aa4a40 FUN_140aa4a40 body=221 status=ok
// SIG undefined FUN_140aa4a40(void)

longlong FUN_140aa4a40(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb92168 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f8bfb;
    local_40 = FUN_14656c368;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUIScript",&DAT_14cb92168,&DAT_1489f8bfa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb92168;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa4b1e FUN_140aa4b1e body=353 status=ok
// SIG undefined FUN_140aa4b1e(void)

void FUN_140aa4b1e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140aa4ba3;
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
LAB_140aa4ba3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140aa4c80 FUN_140aa4c80 body=1690 status=ok
// SIG undefined FUN_140aa4c80(void)

void FUN_140aa4c80(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74 [3];
  undefined8 local_68;
  undefined4 local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined1 *)(param_1 + 0x20);
  cVar4 = FUN_140114204(puVar1);
  if (cVar4 == '\0') {
    local_60 = DAT_14cb7cbf8;
    local_68 = DAT_14cb7cbf0;
    FUN_1448075d0(&local_58);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar6 = &DAT_14c9a1288;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
        plVar8 = plVar6 + 8;
        if ((longlong *)plVar6[9] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[9];
        }
        iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_58) * 4);
        if (iVar9 != -1) {
          do {
            lVar2 = *plVar6 + (longlong)iVar9 * 0x40;
            if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x40) == local_58) {
              if ((((lVar2 != 0) &&
                   (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
              goto LAB_140aa4d55;
              break;
            }
            iVar9 = *(int *)(lVar2 + 0x38);
          } while (iVar9 != -1);
        }
      }
    }
    puVar7 = &DAT_14c9a1308;
LAB_140aa4d55:
    if ((byte *)*puVar7 == (byte *)0x0) {
      bVar10 = false;
    }
    else {
      bVar10 = (*(byte *)*puVar7 & 3) != 0;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (!bVar10) {
      local_60 = DAT_14cb7cc10;
      local_68 = DAT_14cb7cc08;
      FUN_1448075d0(&local_58);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar6 = &DAT_14c9a1288;
        }
        else {
          plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
          plVar8 = plVar6 + 8;
          if ((longlong *)plVar6[9] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar6[9];
          }
          iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_58) * 4);
          if (iVar9 != -1) {
            do {
              lVar2 = *plVar6 + (longlong)iVar9 * 0x40;
              if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x40) == local_58) {
                if (((lVar2 != 0) &&
                    (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0))))
                goto LAB_140aa4f6a;
                break;
              }
              iVar9 = *(int *)(lVar2 + 0x38);
            } while (iVar9 != -1);
          }
        }
      }
      puVar7 = &DAT_14c9a1308;
LAB_140aa4f6a:
      FUN_14068d188(puVar7,local_74,0);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      local_60 = DAT_14cb7cc40;
      local_68 = DAT_14cb7cc38;
      FUN_1448075d0(&local_58);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar6 = &DAT_14c9a1288;
        }
        else {
          plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
          plVar8 = plVar6 + 8;
          if ((longlong *)plVar6[9] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar6[9];
          }
          iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_58) * 4);
          if (iVar9 != -1) {
            do {
              lVar2 = *plVar6 + (longlong)iVar9 * 0x40;
              if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x40) == local_58) {
                if (((lVar2 != 0) &&
                    (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0))))
                goto LAB_140aa5024;
                break;
              }
              iVar9 = *(int *)(lVar2 + 0x38);
            } while (iVar9 != -1);
          }
        }
      }
      puVar7 = &DAT_14c9a1308;
LAB_140aa5024:
      FUN_14068d188(puVar7,&local_80,0);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      local_60 = DAT_14cb7cc28;
      local_68 = DAT_14cb7cc20;
      FUN_1448075d0(&local_58);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar6 = &DAT_14c9a1288;
        }
        else {
          plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
          plVar8 = plVar6 + 8;
          if ((longlong *)plVar6[9] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar6[9];
          }
          iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_58) * 4);
          if (iVar9 != -1) {
            do {
              lVar2 = *plVar6 + (longlong)iVar9 * 0x40;
              if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x40) == local_58) {
                if ((((lVar2 != 0) &&
                     (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                    ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
                goto LAB_140aa50de;
                break;
              }
              iVar9 = *(int *)(lVar2 + 0x38);
            } while (iVar9 != -1);
          }
        }
      }
      puVar7 = &DAT_14c9a1308;
LAB_140aa50de:
      FUN_14068d188(puVar7,&local_68,0);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if ((int)local_68 != 0) {
        *puVar1 = 1;
        FUN_140c25b54(puVar1);
        if (local_74[0] == 0) {
          uStack_50 = DAT_14cb7bba0;
          local_58 = (uint)DAT_14cb7bb98;
          uStack_54 = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
        }
        else {
          local_58 = local_74[0];
          uStack_54 = (undefined4)local_74._4_8_;
          uStack_50 = SUB84(local_74._4_8_,4);
        }
        FUN_144928d62(param_1 + 0x30,1,&local_58);
        local_90 = DAT_14cb7bd68;
        local_88 = DAT_14cb7bd70;
        FUN_14013eb2c(puVar1);
        local_98 = local_78;
        local_a0 = local_80;
        FUN_14013eb54(puVar1);
        local_a8 = local_60;
        local_b0 = local_68;
        FUN_144928d62(param_1 + 0x30,4);
      }
    }
  }
  local_60 = DAT_14cb7cc58;
  local_68 = DAT_14cb7cc50;
  FUN_1448075d0(&local_58);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar8 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar6[9];
      }
      iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_58) * 4);
      if (iVar9 != -1) {
        do {
          lVar2 = *plVar6 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x40) == local_58) {
            if (((lVar2 != 0) &&
                (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
               (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0))))
            goto LAB_140aa4e1a;
            break;
          }
          iVar9 = *(int *)(lVar2 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_140aa4e1a:
  if ((byte *)*puVar7 == (byte *)0x0) {
    bVar10 = false;
  }
  else {
    bVar10 = (*(byte *)*puVar7 & 3) == 1;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (bVar10) {
    local_60 = DAT_14cb7cc58;
    local_68 = DAT_14cb7cc50;
    FUN_1448075d0(&local_58);
    plVar6 = (longlong *)FUN_144a06846(param_2,&local_58);
    if (*plVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_14000584e(*plVar6,0);
    }
    *(undefined1 *)(param_1 + 0x58) = uVar5;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa531c FUN_140aa531c body=168 status=ok
// SIG undefined FUN_140aa531c(void)

void FUN_140aa531c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
           (ulonglong)(param_2 & 0x1fff) * 0xc);
  (**(code **)(*param_1 + 0x168))(param_1,&local_48);
  if (lVar1 == local_48) {
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
                    (ulonglong)(param_2 & 0x1fff) * 0xc)) {
      iVar2 = param_2 + 1;
    }
    (**(code **)(*(longlong *)param_1[0xf] + 0x1a8))((longlong *)param_1[0xf],iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa53c6 FUN_140aa53c6 body=106 status=ok
// SIG undefined FUN_140aa53c6(void)

bool FUN_140aa53c6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
           (ulonglong)(param_2 & 0x1fff) * 0xc);
  (**(code **)(*param_1 + 0x168))(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 == local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa5440 FUN_140aa5440 body=61 status=ok
// SIG undefined FUN_140aa5440(void)

undefined8 * FUN_140aa5440(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4911c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140aa547e FUN_140aa547e body=202 status=ok
// SIG undefined FUN_140aa547e(void)

void FUN_140aa547e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  LOCK();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  UNLOCK();
  QueryPerformanceCounter(&local_58);
  dVar3 = DAT_14c83f420;
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_140aa554a((longlong *)(param_1 + 0x38),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
  *(double *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = (double)local_58.QuadPart * dVar3 + 16777216.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa554a FUN_140aa554a body=269 status=ok
// SIG undefined FUN_140aa554a(void)

void FUN_140aa554a(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140aa5658 FUN_140aa5658 body=68 status=ok
// SIG undefined FUN_140aa5658(void)

ulonglong FUN_140aa5658(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_140aa569c(param_2);
  lVar2 = FUN_140aa56e6(param_1,uVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_140aa5740(param_1);
    uVar3 = FUN_14095026a(lVar2,uVar1);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140aa569c FUN_140aa569c body=73 status=ok
// SIG undefined FUN_140aa569c(void)

longlong FUN_140aa569c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((longlong *)*param_1 != (longlong *)0x0) &&
     (lVar1 = (**(code **)(*(longlong *)*param_1 + 0x5e8))(), lVar1 != 0)) {
    lVar2 = FUN_140082f10();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140aa56e6 FUN_140aa56e6 body=90 status=ok
// SIG undefined FUN_140aa56e6(void)

undefined8 FUN_140aa56e6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140aa5740();
  if ((lVar1 != 0) && (DAT_14cb8d3c0 != 0)) {
    lVar1 = FUN_1409503e6(DAT_14cb8d3c0,lVar1);
    if (lVar1 != 0 && param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140aa5735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 0x7e0))(param_2,lVar1 + 0x1c,*(code **)(*param_2 + 0x7e0));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140aa5740 FUN_140aa5740 body=136 status=ok
// SIG undefined FUN_140aa5740(void)

void FUN_140aa5740(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar3 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x28) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140aa57c8 FUN_140aa57c8 body=185 status=ok
// SIG undefined FUN_140aa57c8(void)

void FUN_140aa57c8(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_140aa5882(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa5882 FUN_140aa5882 body=275 status=ok
// SIG undefined FUN_140aa5882(void)

longlong * FUN_140aa5882(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140aa5d58(param_2);
    }
    FUN_140c7a828(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140aa5998(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x50;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 140aa5998 FUN_140aa5998 body=137 status=ok
// SIG undefined FUN_140aa5998(void)

longlong FUN_140aa5998(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_140aa5a21();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_144a56d22(param_2);
    }
  }
  return param_1;
}



// FUNCTION 140aa5a21 FUN_140aa5a21 body=821 status=ok
// SIG undefined FUN_140aa5a21(void)

longlong * FUN_140aa5a21(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_48._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_4c = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_4c);
      }
    }
    else {
      local_4c = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_40 = param_2 + 2;
    local_48 = (undefined4 *)&DAT_100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_70 = local_48;
    local_68 = local_40;
    local_58 = local_30;
    local_54 = local_2c;
    local_60 = local_38;
    uVar4 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_78 = param_2;
    if (local_60._4_4_ < (int)local_40[3]) {
      iVar8 = local_60._4_4_;
      local_60 = uVar4;
      do {
        puVar6 = (undefined4 *)((longlong)iVar8 * 0xc + *local_78);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *puVar6 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar8 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  else {
    local_48 = (undefined4 *)((ulonglong)local_48._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_48);
      }
      iVar8 = (int)local_48;
    }
    else {
      iVar8 = *(int *)*puVar2;
      local_48 = (undefined4 *)CONCAT44(uVar7,iVar8);
      *puVar2 = (ulonglong)piVar1;
    }
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar8) {
      FUN_1447a08a2(param_2,iVar8);
    }
    param_2[6] = 0xffffffff;
    uVar7 = iVar8 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_2 + 5) = 0;
    if ((*(int *)((longlong)param_2 + 0x2c) < (int)uVar7) ||
       (0x80 < *(int *)((longlong)param_2 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar7) {
        uVar5 = uVar7;
      }
      *(uint *)((longlong)param_2 + 0x2c) = uVar5;
      FUN_1446efbd8(param_2 + 2,0);
    }
    uVar4 = local_60;
    if (0 < (int)local_48) {
      iVar8 = 0;
      do {
        FUN_144a56a60(param_2,&local_78);
        local_70[1] = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_70,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *local_70 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar8 = iVar8 + 1;
        uVar4 = local_60;
      } while (iVar8 < (int)local_48);
    }
  }
  local_60 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140aa5d58 FUN_140aa5d58 body=231 status=ok
// SIG undefined FUN_140aa5d58(void)

void FUN_140aa5d58(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 140aa5e3f FUN_140aa5e3f body=86 status=ok
// SIG undefined FUN_140aa5e3f(void)

void FUN_140aa5e3f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_14284083c;
  local_28 = param_5;
  local_20 = param_2;
  FUN_144a56f9f();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa5e96 FUN_140aa5e96 body=96 status=ok
// SIG undefined FUN_140aa5e96(void)

undefined8 FUN_140aa5e96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,param_3);
  FUN_140aa5ef8(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa5ef8 FUN_140aa5ef8 body=111 status=ok
// SIG undefined FUN_140aa5ef8(void)

undefined8 FUN_140aa5ef8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1401aee94();
  FUN_140056680(local_30,uVar1);
  FUN_1401aeae4(param_1,local_30,param_2);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa5f76 FUN_140aa5f76 body=85 status=ok
// SIG undefined FUN_140aa5f76(void)

undefined8 * FUN_140aa5f76(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b681740;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140aa5fcc FUN_140aa5fcc body=213 status=ok
// SIG undefined FUN_140aa5fcc(void)

void FUN_140aa5fcc(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    plVar6 = *(longlong **)(param_1 + 0xb0);
    plVar1 = plVar6 + *(int *)(param_1 + 0xb8);
    do {
      plVar3 = (longlong *)*plVar6;
      uVar2 = *(uint *)(plVar3 + 0x12);
      if ((uVar2 & 0x20) != 0) {
        if ((uVar2 & 4) == 0) {
LAB_140aa6013:
          uVar5 = 0;
          if ((uVar2 & 8) != 0) {
LAB_140aa6019:
            *(uint *)(plVar3 + 0x12) = uVar2 & 0xfffffff7 | uVar5;
            *(undefined4 *)((longlong)plVar3 + 0x84) = 0;
          }
        }
        else {
          if ((longlong)(int)plVar3[1] != 0) {
            lVar7 = 0;
            do {
              plVar4 = (longlong *)**(longlong **)(*plVar3 + lVar7);
              if (((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) &&
                 (*(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb + (longlong)(int)plVar4[1] * 0x10)
                  == '\x04')) goto LAB_140aa6013;
              lVar7 = lVar7 + 8;
            } while ((longlong)(int)plVar3[1] * 8 != lVar7);
          }
          uVar5 = 8;
          if ((uVar2 & 8) == 0) goto LAB_140aa6019;
        }
        FUN_140aa614a(param_1,plVar3);
        FUN_140aa60a2();
        *(byte *)(plVar3 + 0x12) = *(byte *)(plVar3 + 0x12) & 0xdf;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



// FUNCTION 140aa60a2 FUN_140aa60a2 body=168 status=ok
// SIG undefined FUN_140aa60a2(void)

void FUN_140aa60a2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)(param_2 + 0x10);
  if (*(longlong **)(param_2 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x60);
  }
  if ((longlong)*(int *)(param_2 + 0x68) != 0) {
    plVar4 = plVar5 + (longlong)*(int *)(param_2 + 0x68) * 2;
    do {
      lVar3 = plVar5[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar1 = *plVar5;
        lVar6 = 0;
        do {
          puVar2 = *(undefined8 **)(lVar1 + lVar6);
          if (((*(uint *)(param_2 + 0x90) >> 3 ^ *(uint *)(puVar2 + 8)) & 1) != 0) {
            (**(code **)(*(longlong *)*puVar2 + 0x40))
                      ((longlong *)*puVar2,(*(uint *)(param_2 + 0x90) & 8) >> 3);
            *(uint *)(puVar2 + 8) =
                 *(uint *)(puVar2 + 8) & 0xfffffffe | *(uint *)(param_2 + 0x90) >> 3 & 1;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar3 * 8 != lVar6);
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  return;
}



// FUNCTION 140aa614a FUN_140aa614a body=426 status=ok
// SIG undefined FUN_140aa614a(void)

void FUN_140aa614a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  if ((longlong)(int)param_2[1] == 0) {
    return;
  }
  plVar12 = (longlong *)*param_2;
  plVar1 = plVar12 + (int)param_2[1];
  bVar8 = false;
  do {
    uVar9 = *(uint *)(param_2 + 0x12);
    while (plVar4 = (longlong *)*plVar12,
          ((*(uint *)((longlong)plVar4 + 0x2c) >> 1 ^ uVar9 >> 3) & 1) == 0) {
      plVar12 = plVar12 + 1;
      if (plVar12 == plVar1) {
        if (!bVar8) {
          return;
        }
        goto LAB_140aa61fa;
      }
    }
    plVar5 = (longlong *)*plVar4;
    if ((uVar9 & 8) != 0) {
      FUN_140aa62f4(*param_1,plVar5);
      uVar9 = *(uint *)(param_2 + 0x12);
    }
    if ((uVar9 & 8) == 0) {
      lVar10 = *plVar5;
      if ((plVar5 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar5 + 0xc))) {
        uVar6 = *param_1;
        lVar11 = (longlong)(int)plVar5[1] * 0x10;
        cVar2 = *(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xb + lVar11);
        if (((cVar2 == '\x04') || (cVar2 == '\x01')) &&
           (*(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xd + lVar11) == '\0')) {
          FUN_1403f4a1c(lVar10,(longlong)(int)plVar5[1],0);
          FUN_1403f44de(*plVar5,(int)plVar5[1],4);
          if (5 < *(byte *)((longlong)plVar5 + 0xc)) {
            FUN_1400c9b9a(uVar6,plVar5);
            FUN_1403f3cf4(uVar6,plVar5);
          }
          FUN_140aa6718(uVar6,plVar5);
          lVar10 = *plVar5;
        }
      }
      lVar10 = *(longlong *)(lVar10 + 0xf8) + (longlong)(int)plVar5[1] * 0x18;
      lVar11 = *(longlong *)(lVar10 + 8);
      if (*(longlong *)(lVar10 + 8) == 0) {
        lVar11 = lVar10;
      }
      iVar3 = *(int *)(lVar10 + 0x10);
      if ((longlong)iVar3 != 0) {
        lVar10 = 0;
        do {
          lVar7 = *(longlong *)(lVar11 + lVar10);
          if ((*(byte *)(lVar7 + 8) & 3) == 0) {
            FUN_146e226ae(lVar7,plVar5);
          }
          else {
            FUN_140aa6388(lVar7,plVar5);
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar3 * 8 != lVar10);
      }
    }
    *(uint *)((longlong)plVar4 + 0x2c) =
         *(uint *)((longlong)plVar4 + 0x2c) & 0xfffffffd | *(uint *)(param_2 + 0x12) >> 2 & 2;
    plVar12 = plVar12 + 1;
    bVar8 = true;
  } while (plVar12 != plVar1);
LAB_140aa61fa:
  FUN_1447dd35a(*param_1);
  return;
}



// FUNCTION 140aa62f4 FUN_140aa62f4 body=147 status=ok
// SIG undefined FUN_140aa62f4(void)

void FUN_140aa62f4(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    lVar2 = *(longlong *)(*param_2 + 0x2c0);
    lVar3 = (longlong)(int)param_2[1] * 0x10;
    cVar1 = *(char *)(lVar2 + 0xb + lVar3);
    if (((cVar1 == '\x04') || (cVar1 == '\x01')) && (*(char *)(lVar2 + 0xd + lVar3) == '\0')) {
      FUN_1403f4a1c(*param_2,(longlong)(int)param_2[1],CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
      FUN_1403f44de(*param_2,(int)param_2[1],1);
      if (5 < *(byte *)((longlong)param_2 + 0xc)) {
        FUN_1400c9b9a(param_1,param_2);
        FUN_1403f3cf4(param_1,param_2);
      }
      FUN_1400c9f82(param_1,param_2,1);
      return;
    }
  }
  return;
}



// FUNCTION 140aa6388 FUN_140aa6388 body=911 status=ok
// SIG undefined FUN_140aa6388(void)

void FUN_140aa6388(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_128 [32];
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_1 == 0) || ((*(uint *)(param_1 + 8) & 3) != 2)) goto LAB_140aa6691;
  lVar3 = *param_2;
  lVar21 = (longlong)(int)param_2[1];
  if ((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 2)) {
LAB_140aa6455:
    lVar23 = 0x28;
    lVar24 = 0x48;
  }
  else {
    cVar2 = *(char *)(*(longlong *)(lVar3 + 0x2c0) + 0xb + lVar21 * 0x10);
    lVar23 = 0x530;
    lVar24 = 0x548;
    if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_140aa6455;
  }
  lVar24 = *(longlong *)(lVar3 + lVar24);
  lVar22 = lVar21 * 0x10;
  dVar5 = (double)*(float *)(lVar24 + 0xc + lVar22);
  dVar12 = (double)*(float *)(lVar24 + 8 + lVar22);
  dVar25 = (double)*(float *)(lVar24 + 4 + lVar22);
  auVar32._0_8_ = (double)*(float *)(lVar24 + lVar22);
  auVar32._8_8_ = 0;
  pdVar1 = (double *)(*(longlong *)(lVar3 + lVar23) + lVar21 * 0x18);
  local_f8 = *pdVar1;
  dStack_f0 = pdVar1[1];
  local_108 = *(double *)(*(longlong *)(lVar3 + lVar23) + 0x10 + lVar21 * 0x18);
  uStack_100 = 0;
  local_c8 = (double *)0x0;
  FUN_14472711d(*(undefined8 *)(param_1 + 0x10),&local_c8);
  dVar26 = local_108;
  dVar30 = local_f8;
  dVar6 = dStack_f0;
  if (local_c8 != (double *)0x0) {
    dVar17 = *local_c8;
    dVar18 = local_c8[1];
    dVar19 = local_c8[2];
    dVar20 = local_c8[3];
    local_d8 = local_c8[4];
    dStack_d0 = local_c8[5];
    local_e8 = local_c8[6];
    dStack_e0 = local_c8[7];
    auVar33._8_4_ = SUB84(dVar5,0);
    auVar33._0_8_ = dVar12;
    auVar33._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar33 = blendps(auVar32,auVar33,0xc);
    dVar28 = dStack_d0 * auVar32._0_8_ - dVar25 * local_d8;
    dVar29 = local_e8 * dVar25 - dVar12 * dStack_d0;
    dVar30 = local_d8 * dVar12 - auVar33._0_8_ * local_e8;
    dVar29 = dVar29 + dVar29;
    dVar30 = dVar30 + dVar30;
    dVar28 = dVar28 + dVar28;
    dVar16 = dVar29 * dVar12;
    dVar27 = auVar32._0_8_ * dVar19;
    dVar6 = dVar5 * dVar29;
    dVar7 = dVar5 * dVar30;
    dVar29 = dVar25 * dVar29;
    dVar15 = dVar12 * dVar30;
    dVar30 = dVar30 * auVar32._0_8_;
    dVar31 = dVar28 * dVar25;
    dVar10 = dVar25 * dVar17;
    dVar11 = dVar25 * dVar18;
    dVar26 = auVar32._0_8_ * dVar18;
    dVar8 = auVar32._0_8_ * dVar17;
    dVar14 = dVar19 * dVar12;
    auVar32._0_8_ =
         dVar18 * dVar12 * -1.0 + dVar19 * dVar25 + auVar32._0_8_ * dVar20 * 1.0 + dVar5 * dVar17;
    dVar25 = dVar17 * dVar12 * 1.0 + dVar20 * dVar25 + dVar27 * -1.0 + dVar5 * dVar18;
    dVar12 = dVar20 * dVar12 * 1.0 + ((dVar26 * 1.0 + dVar5 * dVar19) - dVar10);
    dVar26 = local_108 + (dVar30 - dVar29) + dVar5 * dVar28 + local_e8;
    dVar5 = dVar14 * -1.0 + ((dVar8 * -1.0 + dVar5 * dVar20) - dVar11);
    dVar30 = local_f8 + (dVar31 - dVar15) + dVar6 + local_d8;
    dVar6 = dStack_f0 + (dVar16 - dVar28 * auVar33._0_8_) + dVar7 + dStack_d0;
  }
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar30;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar4;
  *(double *)(param_1 + 0xb0) = dVar26;
  auVar9._8_4_ = SUB84(dVar25,0);
  auVar9._0_8_ = auVar32._0_8_;
  auVar9._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar9;
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar12;
  auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x90) = auVar13;
LAB_140aa6691:
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa6718 FUN_140aa6718 body=419 status=ok
// SIG undefined FUN_140aa6718(void)

void FUN_140aa6718(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong *local_48;
  longlong **local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 | *(uint *)(param_1 + 0x248);
  local_48 = param_2;
  if (*(int *)(param_1 + 0x1f0) != *(int *)(param_1 + 0x21c)) {
    uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x220;
    if (*(longlong *)(param_1 + 0x228) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x228);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x230) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1e8);
      do {
        if (*(longlong **)(lVar3 + (longlong)iVar4 * 0x18) == param_2) goto LAB_140aa682e;
        iVar4 = *(int *)(lVar3 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_4c = *(undefined4 *)(param_1 + 0x240);
  local_38 = &local_4c;
  local_40 = &local_48;
  FUN_14043cbec((longlong *)(param_1 + 0x1e8),local_2c,&local_40,0);
  iVar4 = *(int *)(param_1 + 0x240);
  *(uint *)(param_1 + 0x240) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x244) < iVar4 + 1U) {
    FUN_1406b7a4a((longlong *)(param_1 + 0x238),iVar4);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x238) + (longlong)iVar4 * 8) = local_48;
LAB_140aa682e:
  if (*(char *)(param_1 + 0x488) == '\x01') {
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 | *(uint *)(param_1 + 0x380);
    FUN_144aa4382(param_1 + 800,param_2);
  }
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x2b0);
  FUN_1447dd1e0(param_1 + 0x250,param_2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa68bc FUN_140aa68bc body=128 status=ok
// SIG undefined FUN_140aa68bc(void)

char FUN_140aa68bc(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  if (*(int *)(param_2 + 0x24) < 1 && *(int *)(param_2 + 4) < 2) {
    return '\0';
  }
  if (*(int *)(param_2 + 4) < 3) {
    return '\0';
  }
  lVar2 = *(longlong *)(param_2 + 0x18);
  cVar3 = FUN_140aa693c(param_1,(int *)(lVar2 + 0x18));
  if (cVar3 != '\0') {
    iVar1 = *(int *)(lVar2 + 0x18);
    if ((iVar1 == *(int *)(param_1 + 0x50)) && (*(int *)(lVar2 + 0x20) == *(int *)(param_1 + 0x58)))
    {
      return '\x01';
    }
    if ((iVar1 == *(int *)(param_1 + 0x60)) && (*(int *)(lVar2 + 0x20) == *(int *)(param_1 + 0x68)))
    {
      return '\x02';
    }
    if (iVar1 == *(int *)(param_1 + 0x70)) {
      return (*(int *)(lVar2 + 0x20) == *(int *)(param_1 + 0x78)) << 2;
    }
  }
  return '\0';
}



// FUNCTION 140aa693c FUN_140aa693c body=57 status=ok
// SIG undefined FUN_140aa693c(void)

ulonglong FUN_140aa693c(longlong param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *param_2;
  if (((iVar1 == *(int *)(param_1 + 0x50)) && (param_2[2] == *(int *)(param_1 + 0x58))) ||
     ((iVar1 == *(int *)(param_1 + 0x60) && (param_2[2] == *(int *)(param_1 + 0x68))))) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else if (iVar1 == *(int *)(param_1 + 0x70)) {
    uVar2 = (ulonglong)
            CONCAT31((int3)((uint)param_2[2] >> 8),param_2[2] == *(int *)(param_1 + 0x78));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140aa6976 FUN_140aa6976 body=198 status=ok
// SIG undefined FUN_140aa6976(void)

byte FUN_140aa6976(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  
  bVar5 = 0;
  cVar3 = FUN_1402bfec4(param_1,0);
  if (cVar3 == '\0') {
    if (((((*(byte *)(param_1 + 0xc0) & 1) == 0) ||
         (bVar5 = *(byte *)(param_1 + 0xc5), (int)(uint)bVar5 <= param_2)) ||
        (bVar1 = *(byte *)(param_1 + 0xc1), bVar5 <= bVar1)) || (*(byte *)(param_1 + 0xc6) != bVar5)
       ) {
      bVar5 = 0;
    }
    else {
      bVar5 = (byte)param_2;
      if (param_2 < (int)(uint)bVar1) {
        bVar5 = bVar1;
      }
      *(byte *)(param_1 + 0xc6) = bVar5;
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
      lVar4 = FUN_14001cc68(0x110,0x10);
      FUN_140aa6a3c(lVar4,param_1,(*(byte *)(param_1 + 0x195) & 2) >> 1);
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (lVar2 != lVar4) {
        *(longlong *)(param_1 + 0x38) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
          UNLOCK();
        }
        if (lVar2 != 0) {
          FUN_14128f1bc();
        }
      }
      bVar5 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0x5c) ^ 1;
    }
  }
  return bVar5;
}



// FUNCTION 140aa6a3c FUN_140aa6a3c body=458 status=ok
// SIG undefined FUN_140aa6a3c(void)

undefined8 * FUN_140aa6a3c(undefined8 *param_1,longlong param_2,char param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1403225d8();
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14aac06b0;
  *(char *)(param_1 + 0x20) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    *(char *)(*(longlong *)(param_2 + 0xe0) + 0x8f) =
         (*(char *)((longlong)param_1 + 0xc) - *(char *)((longlong)param_1 + 0xe)) +
         *(char *)((longlong)param_1 + 0xb);
  }
  local_90 = param_1;
  local_50 = param_1;
  if (param_3 == '\0') {
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aac2680;
    local_78[0] = &LAB_143720f7a;
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14aac2660;
    local_b8[0] = &LAB_143720f2a;
    *(undefined4 *)(param_1 + 0xd) = 1;
    FUN_140795136(param_1 + 0xe,local_b8);
    *(undefined4 *)(param_1 + 0x16) = 2;
  }
  else {
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aac2640;
    local_78[0] = &LAB_143720ec6;
    local_a8 = (undefined ***)0x0;
    local_98 = &PTR_LAB_14aac2620;
    local_b8[0] = &LAB_143720e76;
    *(undefined4 *)(param_1 + 0xd) = 2;
    FUN_140795136(param_1 + 0xe,local_b8);
    *(undefined4 *)(param_1 + 0x16) = 2;
  }
  FUN_140795136(param_1 + 0x18,local_78);
  if (local_b8[0] != (undefined1 *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = &local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != (undefined1 *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa6c08 FUN_140aa6c08 body=10 status=ok
// SIG undefined FUN_140aa6c08(void)

void FUN_140aa6c08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140aa6c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 1000))();
  return;
}



// FUNCTION 140aa6c12 FUN_140aa6c12 body=1433 status=ok
// SIG undefined FUN_140aa6c12(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140aa6c12(longlong *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1108 [32];
  ulonglong local_10e8;
  uint local_10e0;
  longlong local_10d8;
  undefined8 uStack_10d0;
  wchar_t *local_10c8;
  code *local_10c0;
  undefined1 *local_10b8;
  undefined ***local_10b0;
  code *local_10a8;
  code *local_10a0;
  longlong local_1098;
  undefined1 local_108c [4];
  undefined *local_1088;
  undefined8 local_1080;
  undefined **local_868;
  longlong *local_860;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1108;
  if (param_1[0x22] != 0) goto LAB_140aa6e75;
  plVar5 = (longlong *)param_1[8];
  if (plVar5 == (longlong *)0x0) {
LAB_140aa6ec6:
    if (DAT_14c927740 == (longlong *)0x0) {
      local_10b0 = &local_868;
      local_868 = (undefined **)FUN_1449e2820;
      local_10a0 = FUN_14081d0ea;
      local_10a8 = FUN_14081d0ea;
      local_10b8 = &LAB_146856450;
      local_10c0 = FUN_1427b121c;
      local_10c8 = L"Engine";
      uStack_10d0 = 0;
      local_10d8 = CONCAT44(local_10d8._4_4_,0x10000021);
      local_10e0 = 8;
      local_10e8 = CONCAT44(local_10e8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    if (DAT_14c927740 != param_1) goto LAB_140aa6e75;
    lVar8 = 0;
  }
  else {
    FUN_140aa7318(plVar5,1);
    lVar8 = plVar5[0x22];
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar8 = plVar5[0x22];
      if (lVar8 == 0) goto LAB_140aa6ec6;
    }
  }
  if ((((*(byte *)((longlong)param_1 + 0xd6) & 4) != 0) && (param_1[0xe] == 0)) &&
     (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc88) == '\0')) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    iVar3 = iVar1 + 0xffff;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    if ((iVar3 >> 0x10 < DAT_14c964390) &&
       (lVar4 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar3 >> 0x10) * 0x10), lVar4 != 0)) {
      lVar4 = *(longlong *)(lVar4 + (longlong)(iVar1 % 0x10000) * 0x10);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      if (lVar4 != 0) {
        if ((DAT_14c872ba8 == '\0') && (lVar9 = param_1[9], lVar9 != 0)) {
          do {
            if (*(longlong **)(lVar9 + 0x20) != param_1) break;
            if ((*(uint *)(lVar9 + 8) >> 10 & 1) != 0) {
              FUN_1427ff290(lVar4 + 0x240,lVar9);
            }
            lVar9 = *(longlong *)(lVar9 + 0x28);
          } while (lVar9 != 0);
        }
        FUN_144869430(&local_868);
        local_868 = &PTR_FUN_149e69f40;
        (**(code **)(*param_1 + 0x2b8))(param_1,&local_868,1);
        FUN_144a7fc42(&local_868);
      }
    }
    else {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
    }
  }
  if (param_1[0x22] == 0) {
    local_10d8 = 0;
    uStack_10d0 = 0;
    local_10e0 = local_10e0 & 0xffffff00;
    local_10e8 = local_10e8 & 0xffffffff00000000;
    lVar4 = FUN_140010cf7(param_1,param_1[4],0,0x31);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    param_1[0x22] = lVar4;
    if (param_1 != (longlong *)0x0) {
      for (lVar9 = param_1[10]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x18)) {
        if (((~*(ulonglong *)(*(longlong *)(lVar9 + 8) + 0x18) & 0x8000002008001) == 0) &&
           ((*(byte *)(lVar9 + 0x3b) & 0x20) == 0)) {
          do {
            local_860 = &local_1098;
            local_868 = &local_1088;
            local_1098 = (longlong)*(int *)(lVar9 + 0x44);
            local_1080 = *(undefined8 *)(*(longlong *)(lVar9 + 0x70) + 0xe8);
            local_1088 = *(undefined **)(*(longlong *)(lVar4 + 0x10) + 0x18);
            FUN_140aa77a6(&DAT_14c963dd8,local_108c,&local_868,0);
            do {
              lVar9 = *(longlong *)(lVar9 + 0x18);
              if (lVar9 == 0) {
                lVar4 = param_1[0x22];
                goto LAB_140aa6d12;
              }
            } while (((~*(ulonglong *)(*(longlong *)(lVar9 + 8) + 0x18) & 0x8000002008001) != 0) ||
                    ((*(byte *)(lVar9 + 0x3b) & 0x20) != 0));
            lVar4 = param_1[0x22];
          } while( true );
        }
      }
    }
LAB_140aa6d12:
    pcVar2 = (code *)param_1[0x16];
    local_10e8 = 0;
    FUN_140aa71ae(&local_868,lVar4,lVar8,
                  ((*(uint *)((longlong)param_1 + 0xd4) & 0x10000080) == 0) * '\x02');
    (*pcVar2)(&local_868);
    FUN_140010906(&local_868);
    plVar5 = param_1;
LAB_140aa6d5d:
    plVar6 = plVar5;
    plVar5 = plVar6;
    if ((longlong *)plVar6[4] != (longlong *)0x0) goto code_r0x000140aa6d6c;
    goto LAB_140aa6d7a;
  }
  goto LAB_140aa6e75;
code_r0x000140aa6d6c:
  plVar5 = (longlong *)plVar6[4];
  if ((*(uint *)(plVar6 + 1) >> 0x1c & 1) == 0) goto LAB_140aa6d5d;
  plVar5 = (longlong *)FUN_142840154(plVar6);
LAB_140aa6d7a:
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)plVar6[4];
    goto LAB_140aa6d5d;
  }
  plVar6 = param_1;
  if ((*(byte *)((longlong)plVar5 + 0x2c) & 0x10) != 0) {
LAB_140aa6d90:
    plVar7 = plVar6;
    plVar5 = plVar7;
    if ((longlong *)plVar7[4] != (longlong *)0x0) goto code_r0x000140aa6d9f;
    goto LAB_140aa6dad;
  }
  goto LAB_140aa6e68;
code_r0x000140aa6dd2:
  plVar6 = (longlong *)plVar7[4];
  if ((*(uint *)(plVar7 + 1) >> 0x1c & 1) == 0) goto LAB_140aa6dc3;
  plVar5 = (longlong *)FUN_142840154(plVar7);
LAB_140aa6de0:
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar7[4];
    goto LAB_140aa6dc3;
  }
  local_1088 = (undefined *)plVar5[3];
  FUN_14026f16c(&local_1088,&local_868,0x40b);
  FUN_140aa725c(param_1,&local_1098);
  FUN_14026f16c(&local_1098,&local_1088,0x40b);
  local_10d8 = param_1[0x22];
  local_10e0 = local_10e0 & 0xffffff00;
  local_10e8 = 0;
  FUN_14058d631(&local_868,&local_1088,1,2);
  goto LAB_140aa6e68;
code_r0x000140aa6d9f:
  plVar6 = (longlong *)plVar7[4];
  if ((*(uint *)(plVar7 + 1) >> 0x1c & 1) == 0) goto LAB_140aa6d90;
  plVar5 = (longlong *)FUN_142840154(plVar7);
LAB_140aa6dad:
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar7[4];
    goto LAB_140aa6d90;
  }
  plVar6 = param_1;
  if ((*(byte *)((longlong)plVar5 + 0x2f) & 0x20) == 0) {
LAB_140aa6dc3:
    plVar7 = plVar6;
    plVar5 = plVar7;
    if ((longlong *)plVar7[4] != (longlong *)0x0) goto code_r0x000140aa6dd2;
    goto LAB_140aa6de0;
  }
LAB_140aa6e68:
  (**(code **)(*(longlong *)param_1[0x22] + 0x60))();
LAB_140aa6e75:
  if ((local_48 ^ (ulonglong)auStack_1108) == DAT_14c707940) {
    return param_1[0x22];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa71ae FUN_140aa71ae body=173 status=ok
// SIG undefined FUN_140aa71ae(void)

undefined8 *
FUN_140aa71ae(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
             undefined8 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(byte *)(param_1 + 2) = param_4 & 1;
  *(byte *)((longlong)param_1 + 0x11) = param_4 >> 1 & 1;
  *(undefined2 *)((longlong)param_1 + 0x12) = 1;
  param_1[3] = param_5;
  param_1[0x24] = 0;
  param_1[0x25] = 0x800000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0x800000000;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = &PTR_LAB_149e01e20;
  param_1[0x3f] = &DAT_142840534;
  param_1[0x3a] = FUN_140d11fbe;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_140282ace(param_1);
  return param_1;
}



// FUNCTION 140aa725c FUN_140aa725c body=187 status=ok
// SIG undefined FUN_140aa725c(void)

undefined8 FUN_140aa725c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_878 [32];
  undefined8 local_858;
  wchar_t *local_850;
  wchar_t *local_848;
  undefined1 *local_840;
  char local_838;
  wchar_t local_830 [1035];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_850 = local_830;
  local_838 = '\0';
  local_840 = local_1a;
  builtin_wcsncpy(local_830,L"Default__",9);
  local_848 = local_830 + 9;
  local_858 = *(undefined8 *)(param_1 + 0x18);
  FUN_14005eb5c(&local_858,&local_850);
  *local_848 = L'\0';
  FUN_1446f470e(param_2,local_850,1);
  if (local_838 == '\x01') {
    FUN_1400020a8(local_850);
  }
  if ((local_18 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa7318 FUN_140aa7318 body=1127 status=ok
// SIG undefined FUN_140aa7318(void)

void FUN_140aa7318(ulonglong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar2 = (longlong *)FUN_14171c27a();
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    uVar6 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar7 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar2[8];
    }
    iVar8 = *(int *)((longlong)plVar7 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar8 != -1) {
      do {
        lVar4 = *plVar2 + (longlong)iVar8 * 0x20;
        if (*(ulonglong *)(*plVar2 + (longlong)iVar8 * 0x20) == param_1) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
            FUN_140638db0(plVar2,param_1);
            if (DAT_14c949118 == 0) {
              local_70 = FUN_140631fbe;
              if (DAT_14c963f04 == '\0') {
                uVar3 = FUN_140011aa6();
                lVar4 = FUN_140011c0e(uVar3,0x250,8);
              }
              else {
                lVar4 = FUN_14001cc68(0x250,8);
              }
              DAT_14c949118 = lVar4;
              FUN_1446f470e(local_68,L"Class",1);
              local_90 = &local_70;
              local_98 = &LAB_146891e90;
              local_a0 = (code *)&LAB_146273097;
              local_b0 = L"Engine";
              local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
              local_b8 = 0x20;
              local_c0 = 0x10000000;
              local_c8._0_4_ = 8;
              FUN_14574b4b2(lVar4);
              DAT_14c949118 = lVar4;
              if (DAT_14c951858 == 0) {
                local_90 = &local_50;
                local_50 = FUN_1449e2820;
                local_80 = FUN_14081d0ea;
                local_88 = FUN_14081d0ea;
                local_98 = &LAB_1468c5283;
                local_a0 = FUN_142809da0;
                local_a8 = L"Engine";
                local_b0 = (wchar_t *)0x400000000;
                local_b8 = CONCAT44(local_b8._4_4_,0x10000000);
                local_c0 = 8;
                local_c8._0_4_ = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar1 = DAT_14c951858;
              lVar4 = DAT_14c949118;
              if (DAT_14c948f88 == 0) {
                local_60 = (code *)&DAT_1427db2a2;
                if (DAT_14c963f04 == '\0') {
                  uVar3 = FUN_140011aa6();
                  lVar5 = FUN_140011c0e(uVar3,0x250,8);
                }
                else {
                  lVar5 = FUN_14001cc68(0x250,8);
                }
                DAT_14c948f88 = lVar5;
                FUN_1446f470e(local_58,L"Struct",1);
                local_90 = &local_60;
                local_98 = &LAB_146891313;
                local_a0 = FUN_146272f63;
                local_b0 = L"Engine";
                local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
                local_b8 = 8;
                local_c0 = 0x10000020;
                local_c8._0_4_ = 8;
                FUN_14574b4b2(lVar5);
                local_78 = DAT_14c927740;
                DAT_14c948f88 = lVar5;
                if (DAT_14c927740 == 0) {
                  local_90 = &local_50;
                  local_50 = FUN_1449e2820;
                  local_80 = FUN_14081d0ea;
                  local_88 = FUN_14081d0ea;
                  local_98 = &LAB_146856450;
                  local_a0 = FUN_1427b121c;
                  local_a8 = L"Engine";
                  local_b0 = (wchar_t *)0x0;
                  local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
                  local_c0 = 8;
                  local_c8._0_4_ = 0x28;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                }
                lVar5 = DAT_14c948f88;
                local_78 = DAT_14c927740;
                uVar3 = FUN_1400163b0();
                local_c8 = L"Struct";
                FUN_14574b446(uVar3,lVar5,local_78,L"/Script/CoreUObject");
              }
              local_c8 = L"Class";
              FUN_14574b446(DAT_14c948f88,lVar4,lVar1,L"/Script/CoreUObject");
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
          }
          break;
        }
        iVar8 = *(int *)(lVar4 + 0x18);
      } while (iVar8 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa77a6 FUN_140aa77a6 body=984 status=ok
// SIG undefined FUN_140aa77a6(void)

int * FUN_140aa77a6(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  ulonglong uVar17;
  char cVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1447711aa(param_1,iVar22);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar12 = iVar19 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar16 = iVar19 + 1;
    iVar23 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar23 = iVar19;
    }
    if (iVar23 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar16;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar16 = 0x80;
          iVar12 = iVar19;
        }
        else {
          uVar13 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar13) {
              uVar26 = uVar13;
            }
          }
          else {
            uVar26 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar17 = FUN_144a3809e(uVar26 << 2,0);
          iVar12 = (int)(uVar17 >> 2);
          iVar16 = -0x20;
          if ((int)uVar13 <= iVar12) {
            iVar16 = iVar12 << 5;
          }
          iVar12 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar16;
        FUN_1446efbd8(plVar14,iVar12);
        iVar16 = (int)param_1[5] + 1;
      }
      iVar12 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar12 = iVar16;
      }
      *(int *)(param_1 + 5) = iVar16;
      if (iVar16 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar14;
        }
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar20 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar19 & 0x1f;
    puVar3 = (uint *)((longlong)plVar14 + (longlong)(iVar23 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar20 = (longlong)iVar22;
    iVar19 = *(int *)(*param_1 + 4 + lVar20 * 0x20);
    *(int *)(param_1 + 6) = iVar19;
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x20) = 0xffffffff;
    }
  }
  plVar14 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[4];
  }
  iVar19 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar19 = iVar22;
  }
  puVar3 = (uint *)((longlong)plVar14 + (longlong)(iVar19 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar22 & 0x1f);
  lVar4 = *param_1;
  lVar20 = lVar20 * 0x20;
  puVar1 = (undefined4 *)(lVar4 + lVar20);
  puVar5 = (undefined4 *)*param_3;
  puVar6 = (undefined8 *)param_3[1];
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  puVar2 = (undefined4 *)(lVar4 + lVar20);
  *puVar2 = *puVar5;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(undefined8 *)(lVar4 + 0x10 + lVar20) = *puVar6;
  *(undefined4 *)(lVar4 + 0x18 + lVar20) = 0xffffffff;
  lVar7 = *(longlong *)(lVar4 + lVar20);
  lVar20 = *(longlong *)(lVar4 + 8 + lVar20);
  uVar13 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar26 = (uint)lVar7 & 0xffff;
  uVar26 = ((uint)lVar7 << 0x10 | uVar26) + (int)((ulonglong)lVar7 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar26 >> 4);
  uVar13 = (uint)((ulonglong)lVar20 >> 0x10);
  uVar24 = (uint)lVar20 & 0xffff;
  uVar26 = (uVar26 >> 2) +
           ((uint)lVar20 << 0x10 | uVar24) + (int)((ulonglong)lVar20 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar24 >> 4) + uVar26 * 0x40 + 0x9e3779b9 ^ uVar26;
  cVar18 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar26) * 4);
    if (iVar19 == -1) {
      cVar18 = '\0';
    }
    else {
      lVar4 = *param_1;
      do {
        lVar25 = (longlong)iVar19 * 0x20;
        puVar2 = (undefined4 *)(lVar4 + lVar25);
        if ((*(longlong *)(lVar4 + lVar25) == lVar7) &&
           (*(longlong *)(lVar4 + 8 + lVar25) == lVar20)) {
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar10 = puVar1[2];
          uVar11 = puVar1[3];
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          FUN_1468ff95e(param_1,iVar22);
          cVar18 = '\x01';
          iVar22 = iVar19;
          break;
        }
        iVar19 = puVar2[6];
        cVar18 = '\0';
      } while (iVar19 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar18;
  }
  if (cVar18 == '\0') {
    uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar13 < 4) {
      iVar19 = 1;
    }
    else {
      uVar17 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar20 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar20 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar19 <= (int)param_1[9])) {
      uVar26 = (int)param_1[9] - 1U & uVar26;
      puVar1[7] = uVar26;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      puVar1[6] = *(undefined4 *)
                   ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar26) * 4
                   );
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar26) * 4) =
           iVar22;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_140aa8282(param_1);
    }
  }
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 140aa7b7e FUN_140aa7b7e body=1478 status=ok
// SIG undefined FUN_140aa7b7e(void)

void FUN_140aa7b7e(ulonglong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined4 local_b4;
  uint *local_b0;
  LPCRITICAL_SECTION local_a8;
  ulonglong local_a0;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if (((DAT_14c949800 & 1) == 0) || (uVar6 = FUN_144a61b4f(), (char)uVar6 == '\0')) {
    local_a8 = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    local_b4 = 0;
  }
  else {
    local_b4 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    local_a8 = (LPCRITICAL_SECTION)0x0;
  }
  if (param_3 == '\0') {
    if (DAT_14c964578 != DAT_14c9645a4) {
      uVar7 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      puVar10 = &DAT_14c9645a8;
      if (DAT_14c9645b0 != (undefined *)0x0) {
        puVar10 = DAT_14c9645b0;
      }
      iVar11 = *(int *)(puVar10 + (ulonglong)(DAT_14c9645b8 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      while (iVar11 != -1) {
        lVar18 = DAT_14c964570 + (longlong)iVar11 * 0x60;
        if (*(ulonglong *)(DAT_14c964570 + (longlong)iVar11 * 0x60) == param_1) {
          plVar14 = (longlong *)(lVar18 + 8);
          if (plVar14 != (longlong *)0x0 && lVar18 != 0) {
            iVar11 = (*(int *)(lVar18 + 0x10) - *(int *)(lVar18 + 0x3c)) + (int)local_c0[1];
            if (iVar11 < 0) {
LAB_140aa80ef:
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar11);
            }
            if (*(int *)((longlong)local_c0 + 0xc) < iVar11) {
              FUN_140aa8146(local_c0);
            }
            lVar1 = lVar18 + 0x18;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            uStack_60 = lVar1;
            if (*(int *)(lVar18 + 0x30) == 0) {
              iVar11 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              iVar11 = *(int *)(lVar18 + 0x30);
            }
            local_88 = (undefined4)local_68;
            uStack_84 = local_68._4_4_;
            uStack_80 = (undefined4)uStack_60;
            uStack_7c = uStack_60._4_4_;
            uStack_70 = CONCAT44(uStack_4c,uStack_50);
            local_78 = local_58;
            uVar6 = local_78;
            local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            plVar12 = local_c0;
            iVar19 = local_78._4_4_;
            local_90 = plVar14;
            if ((local_78._4_4_ != iVar11) || (local_78 = local_58, uStack_60 != lVar1)) {
              do {
                local_78 = uVar6;
                uVar6 = *(undefined8 *)(*local_90 + (longlong)iVar19 * 0x10);
                iVar19 = (int)plVar12[1];
                *(uint *)(plVar12 + 1) = iVar19 + 1U;
                if (*(uint *)((longlong)plVar12 + 0xc) < iVar19 + 1U) {
                  FUN_140a0062e(plVar12,iVar19);
                  plVar12 = local_c0;
                }
                *(undefined8 *)(*plVar12 + (longlong)iVar19 * 8) = uVar6;
                local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
                FUN_1449c0562(&local_88);
                bVar21 = local_78._4_4_ != iVar11;
                iVar19 = local_78._4_4_;
                uVar6 = local_78;
              } while (local_90 != plVar14 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || bVar21));
            }
          }
          break;
        }
        iVar11 = *(int *)(lVar18 + 0x58);
      }
    }
LAB_140aa7eec:
    if ((char)local_b4 == '\0') {
      LeaveCriticalSection(local_a8);
    }
    if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar4 = (ulonglong)*(uint *)(local_c0 + 1);
  lVar18 = (longlong)(int)(*(uint *)(local_c0 + 1) - 1);
  plVar14 = local_c0;
LAB_140aa7c12:
  if (DAT_14c964578 != DAT_14c9645a4) {
    uVar7 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    puVar10 = DAT_14c9645b0;
    if (DAT_14c9645b0 == (undefined *)0x0) {
      puVar10 = &DAT_14c9645a8;
    }
    iVar11 = *(int *)(puVar10 + (ulonglong)(DAT_14c9645b8 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    while (iVar11 != -1) {
      lVar1 = DAT_14c964570 + (longlong)iVar11 * 0x60;
      if (*(ulonglong *)(DAT_14c964570 + (longlong)iVar11 * 0x60) == param_1) {
        if ((lVar1 != 0) && (local_98 = (longlong *)(lVar1 + 8), local_98 != (longlong *)0x0)) {
          iVar11 = (*(int *)(lVar1 + 0x10) - *(int *)(lVar1 + 0x3c)) + (int)uVar4;
          if (iVar11 < 0) goto LAB_140aa80ef;
          if (*(int *)((longlong)plVar14 + 0xc) < iVar11) {
            FUN_140aa8146(plVar14);
            plVar14 = local_c0;
          }
          puVar17 = (uint *)(lVar1 + 0x18);
          uVar7 = *(uint *)(lVar1 + 0x30);
          if (uVar7 == 0) {
            uVar4 = 1;
            uVar20 = 0;
            uVar3 = 0;
            iVar11 = 0;
            goto LAB_140aa7d60;
          }
          puVar5 = *(uint **)(lVar1 + 0x28);
          if (*(uint **)(lVar1 + 0x28) == (uint *)0x0) {
            puVar5 = puVar17;
          }
          uVar3 = *puVar5;
          if (uVar3 != 0) {
            uVar20 = 0;
            iVar11 = 0;
            goto LAB_140aa7d3c;
          }
          iVar11 = uVar7 + 0x1e;
          if (-1 < (int)(uVar7 - 1)) {
            iVar11 = uVar7 - 1;
          }
          uVar20 = 0;
          uVar4 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar4 = uVar20;
          }
          iVar11 = 0;
          goto LAB_140aa7d23;
        }
        break;
      }
      iVar11 = *(int *)(lVar1 + 0x58);
    }
  }
  goto LAB_140aa7c98;
  while( true ) {
    iVar11 = iVar11 + 0x20;
    uVar3 = puVar5[uVar20 + 1];
    uVar20 = uVar20 + 1;
    if (uVar3 != 0) break;
LAB_140aa7d23:
    if (uVar4 == uVar20) goto LAB_140aa7c98;
  }
LAB_140aa7d3c:
  uVar4 = (ulonglong)(-uVar3 & uVar3);
  uVar2 = uVar4 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar3 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if ((int)uVar7 <= (int)uVar3) {
    uVar3 = uVar7;
  }
LAB_140aa7d60:
  if (uVar3 != uVar7) {
    uVar13 = 0xffffffff;
    local_b0 = puVar17;
    local_a0 = (ulonglong)uVar7;
    do {
      uVar6 = *(undefined8 *)(*local_98 + (longlong)(int)uVar3 * 0x10);
      iVar19 = (int)plVar14[1];
      *(uint *)(plVar14 + 1) = iVar19 + 1U;
      if (*(uint *)((longlong)plVar14 + 0xc) < iVar19 + 1U) {
        FUN_140a0062e(plVar14,iVar19);
        puVar17 = local_b0;
        plVar14 = local_c0;
      }
      *(undefined8 *)(*plVar14 + (longlong)iVar19 * 8) = uVar6;
      uVar13 = uVar13 & ~(uint)uVar4;
      puVar5 = *(uint **)(lVar1 + 0x28);
      if (*(uint **)(lVar1 + 0x28) == (uint *)0x0) {
        puVar5 = puVar17;
      }
      uVar7 = *(uint *)(lVar1 + 0x30);
      iVar19 = (int)uVar20;
      lVar15 = (longlong)iVar19;
      uVar3 = puVar5[lVar15] & uVar13;
      if (uVar3 == 0) {
        iVar8 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar8 = uVar7 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar19) {
          iVar9 = iVar19;
        }
        puVar17 = local_b0;
        if (iVar19 < iVar8) {
          lVar16 = 0;
          do {
            uVar3 = puVar5[lVar15 + lVar16 + 1];
            if (uVar3 != 0) {
              uVar20 = (ulonglong)(iVar19 + (int)lVar16 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140aa7e16;
            }
            iVar11 = iVar11 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar15 != lVar16);
          uVar13 = 0xffffffff;
          iVar19 = iVar9;
        }
        uVar20 = (ulonglong)(iVar19 + 1);
        plVar14 = local_c0;
        uVar3 = uVar7;
      }
      else {
LAB_140aa7e16:
        uVar4 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar4 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar3 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar7 <= (int)uVar3) {
          uVar3 = uVar7;
        }
      }
    } while (uVar3 != (uint)local_a0);
  }
LAB_140aa7c98:
  lVar18 = lVar18 + 1;
  uVar4 = (ulonglong)(int)plVar14[1];
  if ((longlong)uVar4 <= lVar18) goto LAB_140aa7eec;
  param_1 = *(ulonglong *)(*plVar14 + lVar18 * 8);
  goto LAB_140aa7c12;
}



// FUNCTION 140aa8146 FUN_140aa8146 body=315 status=ok
// SIG undefined FUN_140aa8146(void)

void FUN_140aa8146(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140aa81b0;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140aa81b0:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140aa8282 FUN_140aa8282 body=706 status=ok
// SIG undefined FUN_140aa8282(void)

void FUN_140aa8282(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar6 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar13 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar15 = local_68 >> 0x20;
    }
    iVar7 = (int)local_68;
    uVar13 = (uint)local_58;
    iVar14 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_6c = iVar12;
        lVar11 = *param_1;
        lVar10 = (longlong)iVar14 * 0x20;
        uVar3 = *(undefined8 *)(lVar11 + lVar10);
        uVar4 = *(undefined8 *)(lVar11 + 8 + lVar10);
        uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar16 = (uint)uVar3 & 0xffff;
        uVar17 = ((uint)uVar3 << 0x10 | uVar16) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar16 >> 4);
        uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar16 = (uint)uVar4 & 0xffff;
        uVar9 = (longlong)
                (int)((uVar17 >> 2) +
                      ((uint)uVar4 << 0x10 | uVar16) + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar16 >> 4) + uVar17 * 0x40 + 0x9e3779b9
                     ^ uVar17) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar9;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar14;
        uVar13 = ~(uint)uVar15 & uVar13;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        lVar11 = (longlong)iVar7;
        uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar13;
        iVar12 = local_6c;
        if (uVar6 == 0) {
          iVar14 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar14 = iVar2 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar5 = iVar14;
          if (iVar14 < iVar7) {
            iVar5 = iVar7;
          }
          if (iVar14 <= iVar7) break;
          lVar10 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar6 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar6 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar5 - lVar11 == lVar10) goto LAB_140aa8507;
          }
          iVar7 = iVar7 + (int)lVar10 + 1;
          uVar13 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar9 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar14 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar14 < iVar2);
    }
  }
LAB_140aa8507:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa8546 FUN_140aa8546 body=2685 status=ok
// SIG undefined FUN_140aa8546(void)

void FUN_140aa8546(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ushort *puVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [4];
  int local_6c;
  undefined1 local_68 [4];
  int local_64;
  undefined1 local_60 [4];
  int local_5c;
  undefined8 local_58;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_1 + 0x358;
  uVar3 = FUN_144741050();
  uVar4 = *(undefined8 *)(param_1 + 0x35c);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x6cc) = 1;
    *(undefined4 *)(param_1 + 0x6d0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6d4) = 0xffffffff;
LAB_140aa8e46:
    uVar3 = FUN_144741050(param_1 + 0x240);
    uVar4 = *(undefined8 *)(param_1 + 0x244);
    FUN_144830b78(local_50,uVar3);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x6cc) = 1;
      *(undefined4 *)(param_1 + 0x6d0) = 0xffffffff;
    }
    else {
      FUN_140aa8fc4(param_1 + 0x6cc,param_2,uVar4);
    }
  }
  else {
    FUN_140aa8fc4(param_1 + 0x6cc,param_2,uVar4);
    *(undefined4 *)(param_1 + 0x6d4) = 0xffffffff;
    if ((*(int *)(param_1 + 0x6d0) == -1) &&
       (((*(byte *)(param_1 + 0x13a) & 0x40) == 0 ||
        (FUN_140a6f82a((int *)(param_1 + 0x6d4),param_2,DAT_14cb42dc0),
        *(int *)(param_1 + 0x6d4) == -1)))) goto LAB_140aa8e46;
  }
  local_b8 = param_1 + 0x240;
  uVar3 = FUN_144741050();
  uVar4 = *(undefined8 *)(param_1 + 0x244);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x6e0) = 1;
    *(undefined4 *)(param_1 + 0x6e4) = 0xffffffff;
  }
  else {
    FUN_140aa8fc4(param_1 + 0x6e0,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x198);
  uVar4 = *(undefined8 *)(param_1 + 0x19c);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x6d8) = 1;
    *(undefined4 *)(param_1 + 0x6dc) = 0xffffffff;
  }
  else {
    FUN_140bec572(param_1 + 0x6d8,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x2b0);
  uVar4 = *(undefined8 *)(param_1 + 0x2b4);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x6e8) = 1;
    *(undefined4 *)(param_1 + 0x6ec) = 0xffffffff;
  }
  else {
    FUN_140aa8fc4(param_1 + 0x6e8,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x278);
  uVar4 = *(undefined8 *)(param_1 + 0x27c);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x6f0) = 1;
    *(undefined4 *)(param_1 + 0x6f4) = 0xffffffff;
  }
  else {
    FUN_140aa8fc4(param_1 + 0x6f0,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x2e8);
  uVar4 = *(undefined8 *)(param_1 + 0x2ec);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x6f8) = 1;
    *(undefined4 *)(param_1 + 0x6fc) = 0xffffffff;
  }
  else {
    FUN_140aa948e(param_1 + 0x6f8,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x3c8);
  uVar4 = *(undefined8 *)(param_1 + 0x3cc);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x700) = 1;
    *(undefined4 *)(param_1 + 0x704) = 0xffffffff;
  }
  else {
    FUN_140aa910c(param_1 + 0x700,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x400);
  uVar4 = *(undefined8 *)(param_1 + 0x404);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x708) = 1;
    *(undefined4 *)(param_1 + 0x70c) = 0xffffffff;
  }
  else {
    FUN_140aa910c(param_1 + 0x708,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x438);
  uVar4 = *(undefined8 *)(param_1 + 0x43c);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x710) = 1;
    *(undefined4 *)(param_1 + 0x714) = 0xffffffff;
  }
  else {
    FUN_140aa910c(param_1 + 0x710,param_2,uVar4);
  }
  uVar3 = FUN_144741050(param_1 + 0x470);
  uVar4 = *(undefined8 *)(param_1 + 0x474);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x718) = 1;
    *(undefined4 *)(param_1 + 0x71c) = 0xffffffff;
  }
  else {
    FUN_140aa910c(param_1 + 0x718,param_2,uVar4);
  }
  local_60[0] = 1;
  local_5c = -1;
  uVar3 = FUN_144741050(param_1 + 0x4a8);
  uVar4 = *(undefined8 *)(param_1 + 0x4ac);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    local_60[0] = 1;
    local_5c = -1;
  }
  else {
    FUN_140aa8fc4(local_60,param_2,uVar4);
  }
  *(bool *)(param_1 + 0x720) = local_5c != -1;
  local_68[0] = 1;
  local_64 = -1;
  uVar3 = FUN_144741050(param_1 + 0x4e0);
  uVar4 = *(undefined8 *)(param_1 + 0x4e4);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    local_68[0] = 1;
    local_64 = -1;
    bVar8 = false;
  }
  else {
    FUN_140aa8fc4(local_68,param_2,uVar4);
    bVar8 = local_64 != -1;
  }
  *(bool *)(param_1 + 0x721) = bVar8;
  local_70[0] = 1;
  local_6c = -1;
  uVar3 = FUN_144741050(param_1 + 0x550);
  uVar4 = *(undefined8 *)(param_1 + 0x554);
  FUN_144830b78(local_50,uVar3);
  if (param_2 == 0) {
    local_70[0] = 1;
    local_6c = -1;
    bVar8 = false;
  }
  else {
    FUN_140aa8fc4(local_70,param_2,uVar4);
    bVar8 = local_6c != -1;
  }
  *(bool *)(param_1 + 0x722) = bVar8;
  lVar7 = param_1 + 800;
  uVar4 = FUN_144741050(lVar7);
  local_58 = *(undefined8 *)(param_1 + 0x324);
  local_50[0] = FUN_144830b78(local_50,uVar4);
  plVar5 = (longlong *)FUN_144741050(local_50);
  lVar1 = DAT_14cb421a0;
  if ((DAT_14cb421a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb421a0);
  }
  if (((*plVar5 == lVar1) && ((short)plVar5[1] == DAT_14cb421a8)) &&
     (*(char *)((longlong)plVar5 + 10) == DAT_14cb421aa)) {
    uVar3 = FUN_144741050(lVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x324);
    FUN_144830b78(local_50,uVar3);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x728) = 0;
      *(undefined8 *)(param_1 + 0x72c) = 0xffffffffffffffff;
    }
    else {
      FUN_140aa925c(param_1 + 0x728,param_2,uVar4);
    }
  }
  else {
    uVar3 = FUN_144741050(lVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x324);
    FUN_144830b78(local_50,uVar3);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x724) = 0xffffffff;
    }
    else {
      FUN_140a6f82a((undefined4 *)(param_1 + 0x724),param_2,uVar4);
    }
  }
  cVar2 = *(char *)(param_1 + 0x130);
  lVar7 = param_1 + 0x740;
  *(undefined4 *)(param_1 + 0x748) = 0;
  if (*(int *)(param_1 + 0x74c) < 0x15) {
    FUN_1401fd4ae(lVar7,0x15);
  }
  local_98 = param_1 + 0x3a0;
  local_90 = param_1 + 0x3d8;
  local_88 = param_1 + 0x410;
  local_80 = param_1 + 0x448;
  local_b0 = param_1 + 0x480;
  local_a8 = param_1 + 0x4b8;
  local_a0 = param_1 + 0x528;
  FUN_1401fd468(lVar7,0x15);
  *(undefined4 *)(param_1 + 0x760) = 0;
  FUN_144965dc8(lVar7,param_2,param_1 + 0x170,0);
  FUN_144965dc8(lVar7,param_2,param_1 + 0x1e0,1);
  FUN_144965dc8(lVar7,param_2,param_1 + 0x1a8,2);
  FUN_144965dc8(lVar7,param_2,param_1 + 0x288,3);
  FUN_144965dc8(lVar7,param_2,param_1 + 0x250,4);
  if ((byte)(cVar2 - 1U) < 2) {
    FUN_144965dc8(lVar7,param_2,param_1 + 0x2c0,5);
  }
  FUN_144965dc8(lVar7,param_2,param_1 + 0x218,6);
  FUN_144965dc8(lVar7,param_2,param_1 + 0x368,7);
  FUN_144965dc8(lVar7,param_2,local_b0,0xc);
  FUN_144965dc8(lVar7,param_2,local_a8,0xd);
  FUN_144965dc8(lVar7,param_2,param_1 + 0x4f0,0xe);
  FUN_144965dc8(lVar7,param_2,local_a0,0xf);
  FUN_144965dc8(lVar7,param_2,param_1 + 0x560,0x10);
  FUN_144965dc8(lVar7,param_2,local_98,8);
  FUN_144965dc8(lVar7,param_2,local_90,9);
  FUN_144965dc8(lVar7,param_2,local_88,10);
  FUN_144965dc8(lVar7,param_2,local_80,0xb);
  cVar2 = FUN_1401f76a8(param_1);
  if (cVar2 != '\0') {
    FUN_144965dc8(lVar7,param_2,param_1 + 0x5e8,0x11);
    FUN_144965dc8(lVar7,param_2,param_1 + 0x620,0x12);
    FUN_144965dc8(lVar7,param_2,param_1 + 0x658,0x13);
    FUN_144965dc8(lVar7,param_2,param_1 + 0x690,0x14);
  }
  FUN_140349258(lVar7);
  *(undefined1 *)(param_1 + 0x734) = 0;
  *(undefined4 *)(param_1 + 0x738) = 0xffffffff;
  if (param_2 == 0) goto LAB_140aa8cda;
  uVar4 = FUN_144741050(local_78);
  local_58 = *(undefined8 *)(param_1 + 0x35c);
  local_50[0] = FUN_144830b78(local_50,uVar4);
  puVar6 = (ushort *)FUN_140aa93c6(param_2,&local_58);
  if (puVar6 == (ushort *)0x0) {
    if ((*(byte *)(param_1 + 0x13a) & 0x40) == 0) {
LAB_140aa8d8f:
      if (*(int *)(param_1 + 0x738) != -1) goto LAB_140aa8cda;
      uVar4 = FUN_144741050(local_b8);
      local_58 = *(undefined8 *)(param_1 + 0x244);
      local_50[0] = FUN_144830b78(local_50,uVar4);
      puVar6 = (ushort *)FUN_140aa93c6(param_2,&local_58);
      if (puVar6 == (ushort *)0x0) goto LAB_140aa8cda;
      goto LAB_140aa8cca;
    }
    local_58 = DAT_14cb42dc0;
    local_50[0] = FUN_144830b78(local_50,&DAT_14cb420d0);
    lVar7 = FUN_140aa93c6(param_2,&local_58);
    if (lVar7 == 0) goto LAB_140aa8d8f;
    *(undefined1 *)(param_1 + 0x734) = 0;
    puVar6 = (ushort *)(lVar7 + 2);
  }
  else {
LAB_140aa8cca:
    *(undefined1 *)(param_1 + 0x734) = 1;
  }
  *(uint *)(param_1 + 0x738) = (uint)*puVar6;
LAB_140aa8cda:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa8fc4 FUN_140aa8fc4 body=327 status=ok
// SIG undefined FUN_140aa8fc4(void)

void FUN_140aa8fc4(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40 [2];
  longlong local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  local_38 = param_3;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb420f0);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_38) && (*(int *)(lVar2 + 8 + lVar5) == local_30[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 1;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2]);
          goto LAB_140aa90b8;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  local_48 = param_3;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42100);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_48) && (*(int *)(lVar2 + 8 + lVar5) == local_40[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 0;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2] + 4);
LAB_140aa90b8:
          *(uint *)(param_1 + 4) = (uint)*puVar4;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa910c FUN_140aa910c body=335 status=ok
// SIG undefined FUN_140aa910c(void)

void FUN_140aa910c(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40 [2];
  longlong local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  local_38 = param_3;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb42160);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_38) && (*(int *)(lVar2 + 8 + lVar5) == local_30[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 1;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2]);
          goto LAB_140aa9227;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  local_48 = param_3;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42170);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_48) && (*(int *)(lVar2 + 8 + lVar5) == local_40[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 0;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2] + 4);
LAB_140aa9227:
          *(uint *)(param_1 + 4) = (uint)*puVar4;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa925c FUN_140aa925c body=221 status=ok
// SIG undefined FUN_140aa925c(void)

void FUN_140aa925c(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  FUN_140aa933a(local_50);
  local_40 = param_3;
  local_38[0] = FUN_144830b78(local_38,local_50);
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar3 + lVar4) == local_40) && (*(int *)(lVar3 + 8 + lVar4) == local_38[0])
         ) {
        iVar2 = (int)(lVar4 >> 2) * -0x55555555;
        if (iVar2 != -1) {
          *param_1 = 1;
          lVar3 = (longlong)iVar2 * 0x20;
          *(uint *)(param_1 + 4) = (uint)*(ushort *)(param_2[2] + lVar3);
          *(uint *)(param_1 + 8) = (uint)*(ushort *)(param_2[2] + 2 + lVar3);
        }
        break;
      }
      lVar1 = lVar3 + lVar4;
      lVar4 = lVar4 + 0xc;
    } while (lVar1 + 0xc != lVar3 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa933a FUN_140aa933a body=81 status=ok
// SIG undefined FUN_140aa933a(void)

longlong * FUN_140aa933a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140aa938c();
  *param_1 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(undefined2 *)(param_1 + 1) = 2;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  FUN_140c6c286(lVar1,0);
  return param_1;
}



// FUNCTION 140aa938c FUN_140aa938c body=57 status=ok
// SIG undefined FUN_140aa938c(void)

void FUN_140aa938c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43bd0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43bd0 = FUN_140002ddd(FUN_14647b146,uVar1,L"NiagaraID");
  }
  return;
}



// FUNCTION 140aa93c6 FUN_140aa93c6 body=199 status=ok
// SIG undefined FUN_140aa93c6(void)

longlong FUN_140aa93c6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < (int)param_1[1]) {
    lVar4 = 8;
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (*(longlong *)(*param_1 + -8 + lVar4) == *param_2) {
        plVar2 = (longlong *)FUN_144741050(*param_1 + lVar4);
        plVar3 = (longlong *)FUN_144741050(param_2 + 1);
        lVar1 = *plVar3;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        if (((*plVar2 == lVar1) && ((short)plVar2[1] == (short)plVar3[1])) &&
           (*(char *)((longlong)plVar2 + 10) == *(char *)((longlong)plVar3 + 10))) {
          return lVar5 + param_1[2];
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + 0xc;
    } while (lVar6 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 140aa948e FUN_140aa948e body=327 status=ok
// SIG undefined FUN_140aa948e(void)

void FUN_140aa948e(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40 [2];
  longlong local_38;
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  local_38 = param_3;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb42140);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_38) && (*(int *)(lVar2 + 8 + lVar5) == local_30[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 1;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2]);
          goto LAB_140aa9582;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  local_48 = param_3;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42150);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) == local_48) && (*(int *)(lVar2 + 8 + lVar5) == local_40[0])
         ) {
        iVar3 = (int)(lVar5 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = 0;
          puVar4 = (ushort *)((longlong)iVar3 * 0x20 + param_2[2] + 4);
LAB_140aa9582:
          *(uint *)(param_1 + 4) = (uint)*puVar4;
        }
        break;
      }
      lVar1 = lVar2 + lVar5;
      lVar5 = lVar5 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aa95d6 FUN_140aa95d6 body=107 status=ok
// SIG undefined FUN_140aa95d6(void)

undefined8
FUN_140aa95d6(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5,
             undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  char cVar1;
  
  if ((param_2 < *(int *)(param_1 + 0x8e0)) &&
     (cVar1 = FUN_14015294c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8),
     cVar1 != '\0')) {
    FUN_140aa9642(param_1,param_2,param_3,param_8);
    return 1;
  }
  return 0;
}



// FUNCTION 140aa9642 FUN_140aa9642 body=573 status=ok
// SIG undefined FUN_140aa9642(void)

void FUN_140aa9642(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [44];
  undefined4 local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_4[0x17] = *(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + (longlong)(int)param_2 * 8);
  puVar9 = (undefined8 *)param_4[0x15];
  if ((undefined8 *)param_4[0x15] == (undefined8 *)0x0) {
    puVar9 = param_4;
  }
  puVar9[7] = param_1 + 0x8f8;
  *(uint *)((longlong)puVar9 + 0x7c) =
       *(uint *)((longlong)puVar9 + 0x7c) & 0xfffffef0 | param_2 & 0xf;
  *(undefined4 *)(puVar9 + 0xe) = 0;
  *puVar9 = *(undefined8 *)(param_1 + 0x250);
  if (*(int *)(param_1 + 0xa60) != *(int *)(param_1 + 0xa8c)) {
    lVar5 = param_1 + 0xa90;
    if (*(longlong *)(param_1 + 0xa98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa98);
    }
    uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xaa0) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (uint *)(*(longlong *)(param_1 + 0xa58) + (longlong)(int)uVar4 * 0x18);
        if (*puVar7 == param_2) goto LAB_140aa9703;
        uVar4 = puVar7[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar7 = (uint *)0x0;
LAB_140aa9703:
  lVar5 = *(longlong *)(puVar7 + 2);
  lVar1 = puVar9[2];
  if (lVar1 != lVar5) {
    puVar9[2] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar1 != 0) {
      LOCK();
      puVar7 = (uint *)(lVar1 + 8);
      uVar4 = *puVar7;
      *puVar7 = *puVar7 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  uVar4 = *(uint *)((longlong)puVar9 + 0x7c) | 0x800;
  *(uint *)((longlong)puVar9 + 0x7c) = uVar4;
  if ((param_4[0x18] == 0) || (*(int *)(*(longlong *)(param_1 + 0x210) + 8) < 2))
  goto LAB_140aa97b1;
  plVar6 = (longlong *)FUN_14485b2b4();
  if (*(code **)(*plVar6 + 0x270) == (code *)&LAB_1447f82f4) {
    plVar2 = (longlong *)plVar6[9];
    if (plVar2 == (longlong *)0x0) {
      plVar6 = (longlong *)plVar6[8];
      pcVar8 = *(code **)(*plVar6 + 0x408);
      if (pcVar8 != (code *)&LAB_14470b702) goto LAB_140aa9879;
      bVar3 = *(byte *)((longlong)plVar6 + 0x129);
      if (bVar3 == 1) {
        bVar3 = ~*(byte *)((longlong)plVar6 + 0x1d6) & 1;
      }
      uVar4 = (uint)bVar3;
    }
    else {
      pcVar8 = *(code **)(*plVar2 + 0x408);
      if (pcVar8 == (code *)&LAB_14497e176) {
        uVar4 = (uint)*(byte *)(plVar2 + 0x2b);
      }
      else {
LAB_140aa9879:
        uVar4 = (*pcVar8)();
      }
    }
  }
  else {
    uVar4 = (**(code **)(*plVar6 + 0x270))(plVar6);
  }
  uVar4 = *(uint *)((longlong)puVar9 + 0x7c) & 0xffffefff | (uint)(1 < uVar4) << 0xc;
  *(uint *)((longlong)puVar9 + 0x7c) = uVar4;
LAB_140aa97b1:
  *(uint *)((longlong)puVar9 + 0x7c) =
       uVar4 & 0xffffdfff | (uint)(*(int *)(DAT_14cae4e48 + 4) != 0) << 0xd;
  FUN_1400ec47a(param_1,local_2c);
  *(undefined4 *)(puVar9 + 0xc) = local_2c[0];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aa9886 FUN_140aa9886 body=57 status=ok
// SIG undefined FUN_140aa9886(void)

void FUN_140aa9886(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f818 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f818 = FUN_140002ddd(FUN_146541306,uVar1,L"UsabilityData");
  }
  return;
}



// FUNCTION 140aa98c0 FUN_140aa98c0 body=95 status=ok
// SIG undefined FUN_140aa98c0(void)

void FUN_140aa98c0(longlong param_1)

{
  FUN_140aa9920(*(undefined8 *)(param_1 + 100),*(undefined8 *)(param_1 + 0x48),
                (longlong)*(int *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                (longlong)*(int *)(param_1 + 0x60),0,0);
  if (*(void **)(param_1 + 0x70) == (void *)0x0) {
    return;
  }
  memcpy(*(void **)(param_1 + 0x70),
         (void *)(*(longlong *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x78)),
         *(size_t *)(param_1 + 0x80));
  return;
}



// FUNCTION 140aa9920 FUN_140aa9920 body=779 status=ok
// SIG undefined FUN_140aa9920(void)

ulonglong FUN_140aa9920(ulonglong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 param_6,ulonglong param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892f44 == param_1) {
    if (((ulonglong)param_5 | (ulonglong)param_3) >> 0x20 == 0) {
      uVar6 = 0xf;
      if ((int)param_7 != 0) {
        uVar6 = param_7 & 0xffffffff;
      }
LAB_140aa9a31:
      local_58 = 0;
      local_60 = &LAB_14277a7d4;
      local_68 = &LAB_14277a7c7;
      local_98 = param_4;
      local_90 = (int)param_5;
      local_88 = param_2;
      local_80 = (int)param_3;
      iVar1 = FUN_144b4fce0(&local_98,uVar6,&DAT_149e29fc6,0x58);
      if (iVar1 == 0) {
        iVar1 = FUN_144b4e2a0(&local_98,4);
        puVar8 = (undefined8 *)(ulonglong)local_7c;
        if (iVar1 != 1) {
          puVar8 = (undefined8 *)((ulonglong)param_3 & 0xffffffff);
        }
        iVar2 = FUN_144b4fb40(&local_98);
        uVar6 = CONCAT71((int7)((ulonglong)&local_98 >> 8),
                         (iVar2 == 0 && -1 < iVar1) && puVar8 == param_3);
      }
      else {
        uVar6 = 0;
      }
      goto LAB_140aa9b3f;
    }
LAB_140aa9a47:
    uVar6 = 0;
  }
  else {
    if (DAT_14c892f48 == param_1) {
      if (((ulonglong)param_5 | (ulonglong)param_3) >> 0x20 == 0) {
        uVar6 = 0x1f;
        goto LAB_140aa9a31;
      }
      goto LAB_140aa9a47;
    }
    uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (DAT_14c892f4c == param_1) {
      if (((ulonglong)(param_5 + 0x10000000) | (ulonglong)(param_3 + 0x10000000)) >> 0x20 != 0) {
        uVar6 = 0;
        goto LAB_140aa9b9e;
      }
      iVar1 = FUN_1467a9288(param_4,param_2,(ulonglong)param_5 & 0xffffffff,
                            (ulonglong)param_3 & 0xffffffff);
      uVar6 = CONCAT71(uVar7,0 < iVar1);
LAB_140aa9b3f:
      if ((char)uVar6 != '\0') goto LAB_140aa9b9e;
    }
    else {
      if (DAT_14c892f54 == param_1) {
        FUN_1400416c5();
        local_a8 = param_3;
        lVar4 = FUN_14004172c(&DAT_14c8338c8,param_4,param_5,param_2);
        uVar6 = CONCAT71(uVar7,lVar4 != 0);
        goto LAB_140aa9b3f;
      }
      uVar6 = 0;
      plVar5 = (longlong *)FUN_142772eb6(param_1,0);
      if (plVar5 != (longlong *)0x0) {
        local_a0 = param_7;
        local_a8 = param_5;
        uVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,param_2,param_3,param_4);
        uVar6 = (ulonglong)uVar3;
        goto LAB_140aa9b3f;
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c866bcc) && (FUN_144b3d300(&DAT_14c866bcc), DAT_14c866bcc == -1)) {
    DAT_14c866bc8 = '\x01';
    if (DAT_14c872ce0 != 0) {
      local_a8 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"Core.System",L"FailOnUncompressErrors",&DAT_14c866bc8);
    }
    _Init_thread_footer(&DAT_14c866bcc);
  }
  iVar1 = DAT_14c866bd0;
  uVar6 = uVar6 & 0xff;
  if (DAT_14c866bc8 == '\0') {
    uVar6 = 1;
  }
  LOCK();
  DAT_14c866bd0 = 1;
  UNLOCK();
  if ((iVar1 == 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
LAB_140aa9b9e:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140aa9c2c FUN_140aa9c2c body=2239 status=ok
// SIG undefined FUN_140aa9c2c(void)

void FUN_140aa9c2c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_140aa9d17;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_140aa9d17:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_140aa9de4;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_140aa9de4:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1409e12a0;
      local_60 = 0;
      local_68 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_140aa9eb1;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_140aa9eb1:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_140aa9f7d;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_140aa9f7d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(local_68._4_4_,local_44);
  (**(code **)(*param_1 + 0x4a0))(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aaa4f8 FUN_140aaa4f8 body=138 status=ok
// SIG undefined FUN_140aaa4f8(void)

void FUN_140aaa4f8(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x20))();
  if ((longlong)*(int *)(puVar1 + 1) != 0) {
    plVar2 = (longlong *)*puVar1;
    lVar3 = (longlong)*(int *)(puVar1 + 1) * 0x38;
    do {
      if (((param_3 != 0) && (*plVar2 == param_3)) || ((param_2 != 0 && (plVar2[1] == param_2)))) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        plVar2 = (longlong *)plVar2[2];
        if (plVar2 == (longlong *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000140aaa57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0xa08))(plVar2,param_4,param_5);
        return;
      }
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140aaa582 FUN_140aaa582 body=62 status=ok
// SIG undefined FUN_140aaa582(void)

longlong FUN_140aaa582(longlong param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 5) {
      if (*(longlong *)(piVar1 + 2) != 0) {
        return *(longlong *)(piVar1 + 2);
      }
    }
    else if ((((*piVar1 == 8) && (*(longlong *)(piVar1 + 2) != 0)) &&
             (piVar1 = *(int **)(*(longlong *)(piVar1 + 2) + 0x10), piVar1 != (int *)0x0)) &&
            (*piVar1 == 5)) {
      return *(longlong *)(piVar1 + 2);
    }
  }
  return 0;
}



// FUNCTION 140aaa5c0 FUN_140aaa5c0 body=216 status=ok
// SIG undefined FUN_140aaa5c0(void)

void FUN_140aaa5c0(longlong param_1,uint *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484)) {
    uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar6 = param_1 + 0x488;
    if (*(longlong *)(param_1 + 0x490) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x490);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x498) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x450) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 == (ulonglong *)0x0) || (puVar1 + 1 == (ulonglong *)0x0)) break;
          uVar4 = *(uint *)((longlong)puVar1 + 0xc);
          if (uVar4 == 0xffffffff) {
            uVar2 = (uint)puVar1[1];
            uVar4 = uVar2;
            if (uVar2 == 0xffffffff) break;
          }
          else {
            uVar2 = uVar4 | 0x80000000;
          }
          uVar3 = 0xffffffff;
          if (-1 < (int)uVar4) {
            uVar3 = uVar2;
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 140aaa698 FUN_140aaa698 body=1273 status=ok
// SIG undefined FUN_140aaa698(void)

void FUN_140aaa698(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  longlong local_110;
  undefined4 local_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar10 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar10 = (longlong *)0x0;
  }
  (**(code **)(*plVar10 + 0x58))(plVar10,param_1);
  FUN_14020684a(param_1);
  if ((*(longlong *)(param_1 + 0x3a8) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x3a8) + 8) >> 0x1e & 1) == 0)) {
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0xffffffff00000001;
    local_160 = 0;
    local_158 = 0;
    local_130 = 0;
    local_128 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_124 = 0xffffffff00000080;
    local_11c = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = local_100 & 0xffffff00;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0xffffffff00000001;
    local_d0 = 0;
    local_c8 = (ulonglong)uStack_154 << 0x20;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_140604072(&local_c0,&local_150);
    local_70 = local_100;
    uStack_6c = uStack_fc;
    uStack_68 = (undefined4)uStack_f8;
    uStack_64 = uStack_f8._4_4_;
    local_60 = CONCAT44(uStack_ec,local_f0);
    local_58 = 0;
    local_56 = 0;
    local_108 = 0;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_150);
    local_58 = 0x101;
    FUN_1406041fe(*(undefined8 *)(param_1 + 0x3a8));
    (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0xac0))();
    lVar3 = FUN_1447210f0(param_1);
    if ((lVar3 == 0) || (lVar4 = FUN_140702026(lVar3), lVar3 = param_1, lVar4 == 0)) {
LAB_140aaa9b5:
      plVar10 = *(longlong **)(param_1 + 0x3a8);
    }
    else {
      for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
        if ((*(uint *)(lVar3 + 8) & 0x30) != 0) goto LAB_140aaa9b5;
      }
      plVar10 = *(longlong **)(param_1 + 0x3a8);
      if ((int)plVar10[0x204] == -1) {
        lVar3 = lVar4 + 200;
        FUN_1401bf042(lVar3);
        if (*(int *)(lVar4 + 300) == 0) {
          iVar13 = *(int *)(lVar4 + 0x100);
          *(int *)(lVar4 + 0x100) = iVar13 + 1;
          if (*(int *)(lVar4 + 0x104) == iVar13) {
            FUN_14055ddfe(lVar4 + 0xf8,iVar13);
          }
          iVar1 = *(int *)(lVar4 + 0x120);
          if (iVar1 == 0) {
            iVar2 = -1;
          }
          else {
            iVar2 = iVar1 + 0x1e;
            if (-1 < iVar1 + -1) {
              iVar2 = iVar1 + -1;
            }
            iVar2 = iVar2 >> 5;
          }
          lVar15 = lVar4 + 0x108;
          iVar8 = iVar1 + 1;
          iVar14 = iVar1 + 0x1f;
          if (-1 < iVar1) {
            iVar14 = iVar1;
          }
          local_180 = lVar3;
          if (iVar14 >> 5 == iVar2) {
            *(int *)(lVar4 + 0x120) = iVar8;
          }
          else {
            if (*(int *)(lVar4 + 0x124) <= iVar1) {
              if (iVar1 + 0x20U < 0xa0) {
                iVar8 = 0x80;
                iVar2 = iVar1;
              }
              else {
                uVar11 = iVar1 + 0x20U >> 5;
                local_188 = (ulonglong)uVar11;
                if (*(int *)(lVar4 + 0x124) + 0x1fU < 0xa0) {
                  uVar9 = 4;
                  if (4 < uVar11) {
                    uVar9 = uVar11;
                  }
                }
                else {
                  uVar9 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
                }
                uVar6 = FUN_144a3809e(uVar9 << 2,0);
                iVar2 = (int)(uVar6 >> 2);
                iVar8 = -0x20;
                if ((int)local_188 <= iVar2) {
                  iVar8 = iVar2 << 5;
                }
                iVar2 = *(int *)(lVar4 + 0x120);
              }
              *(int *)(lVar4 + 0x124) = iVar8;
              FUN_1446efbd8(lVar15,iVar2);
              iVar8 = *(int *)(lVar4 + 0x120) + 1;
            }
            iVar2 = iVar8 + 0x1f;
            if (-1 < iVar8) {
              iVar2 = iVar8;
            }
            *(int *)(lVar4 + 0x120) = iVar8;
            if (iVar8 % 0x20 != 0) {
              lVar3 = *(longlong *)(lVar4 + 0x118);
              if (*(longlong *)(lVar4 + 0x118) == 0) {
                lVar3 = lVar15;
              }
              bVar7 = -(char)(iVar8 % 0x20);
              *(uint *)(lVar3 + (longlong)(iVar2 >> 5) * 4) =
                   (uint)(*(int *)(lVar3 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
                   (bVar7 & 0x1f);
            }
          }
          lVar5 = (longlong)iVar13;
          if (*(longlong *)(lVar4 + 0x118) != 0) {
            lVar15 = *(longlong *)(lVar4 + 0x118);
          }
          puVar16 = (uint *)(lVar15 + (longlong)(iVar14 >> 5) * 4);
          *puVar16 = *puVar16 | 1 << ((byte)iVar1 & 0x1f);
          lVar15 = *(longlong *)(lVar4 + 0xf8);
          lVar3 = local_180;
        }
        else {
          puVar16 = (uint *)(lVar4 + 0x108);
          if (*(uint **)(lVar4 + 0x118) != (uint *)0x0) {
            puVar16 = *(uint **)(lVar4 + 0x118);
          }
          uVar11 = *(int *)(lVar4 + 0x120) + 0x1f;
          iVar13 = -1;
          if (0x1f < uVar11) {
            lVar15 = 0;
            puVar12 = puVar16;
LAB_140aaa9ef:
            if (*puVar12 == 0xffffffff) goto code_r0x000140aaa9f8;
            uVar11 = ~*puVar12;
            iVar1 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
              }
            }
            iVar2 = iVar1 - (int)lVar15;
            if ((iVar2 < *(int *)(lVar4 + 0x120)) && (iVar1 + 1 != (int)lVar15)) {
              iVar13 = iVar2 + 0x1f;
              if (-1 < iVar2) {
                iVar13 = iVar2;
              }
              puVar16[iVar13 >> 5] = puVar16[iVar13 >> 5] | 1 << ((byte)iVar1 & 0x1f);
              iVar13 = iVar2;
            }
          }
LAB_140aaaa43:
          lVar15 = *(longlong *)(lVar4 + 0xf8);
          lVar5 = (longlong)iVar13;
          uVar11 = *(uint *)(lVar15 + 4 + lVar5 * 8);
          if (*(int *)(lVar4 + 0x128) == iVar13) {
            *(uint *)(lVar4 + 0x128) = uVar11;
          }
          uVar9 = *(uint *)(lVar15 + lVar5 * 8);
          if (-1 < (int)uVar11) {
            *(uint *)(lVar15 + (ulonglong)uVar11 * 8) = uVar9;
          }
          if (-1 < (int)uVar9) {
            *(undefined4 *)(lVar15 + 4 + (ulonglong)uVar9 * 8) =
                 *(undefined4 *)(lVar15 + 4 + lVar5 * 8);
          }
          *(int *)(lVar4 + 300) = *(int *)(lVar4 + 300) + -1;
        }
        *(longlong **)(lVar15 + lVar5 * 8) = plVar10;
        FUN_1401bf0ae(lVar3,plVar10);
        *(int *)(*(longlong *)(param_1 + 0x3a8) + 0x1020) = iVar13;
        plVar10 = *(longlong **)(param_1 + 0x3a8);
        *(int *)(param_1 + 0x3b0) = (int)plVar10[0x204];
      }
    }
    (**(code **)(*plVar10 + 0xac0))(plVar10);
    (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0xb50))();
    local_78 = 0;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_c0);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140aaa9f8:
  lVar15 = lVar15 + -0x20;
  puVar12 = puVar12 + 1;
  if ((ulonglong)(uVar11 & 0xffffffe0) + lVar15 == 0) goto LAB_140aaaa43;
  goto LAB_140aaa9ef;
}



// FUNCTION 140aaab94 FUN_140aaab94 body=62 status=ok
// SIG undefined FUN_140aaab94(void)

void FUN_140aaab94(longlong *param_1)

{
  (**(code **)(*param_1 + 0xb78))();
  FUN_140aabb36(param_1);
  FUN_140aab796(param_1);
  FUN_140aab3d8(param_1);
  FUN_140aab22c(param_1,4,1);
  return;
}



// FUNCTION 140aaabd2 FUN_140aaabd2 body=59 status=ok
// SIG undefined FUN_140aaabd2(void)

void FUN_140aaabd2(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140aaac0e();
  plVar1 = *(longlong **)(param_1 + 0x19b0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140aaac03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x638))(plVar1,0,*(undefined8 *)(param_1 + 0x1040));
    return;
  }
  return;
}



// FUNCTION 140aaac0e FUN_140aaac0e body=318 status=ok
// SIG undefined FUN_140aaac0e(void)

void FUN_140aaac0e(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x16] != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    local_30 = param_1[0x1e7];
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_38 = param_1[0x1e6];
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar1 = FUN_140297002(param_1 + 0x212);
    FUN_140aaad4e(&local_28,uVar1,&local_38,&local_30);
    FUN_1446f470e(&local_40,L"WaterMID",1);
    lVar2 = FUN_140aaadc2(param_1[0x208],local_40,local_28,0x2100040);
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x208] = lVar2;
    (**(code **)(*param_1 + 0xaa0))(param_1,lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aaad4e FUN_140aaad4e body=116 status=ok
// SIG undefined FUN_140aaad4e(void)

longlong * FUN_140aaad4e(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  
  if (((param_2 != 0) &&
      ((((*DAT_14cb49898 == '\x01' && (lVar1 = *(longlong *)(param_2 + 0x390), lVar1 != 0)) ||
        (lVar1 = *(longlong *)(param_2 + 0x398), lVar1 != 0)) &&
       (((*(byte *)(lVar1 + 0xfe) & 4) != 0 && (*DAT_14cb49940 == '\x01')))))) && (*param_4 != 0)) {
    param_3 = param_4;
  }
  lVar1 = *param_3;
  *param_1 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 140aaadc2 FUN_140aaadc2 body=412 status=ok
// SIG undefined FUN_140aaadc2(void)

longlong FUN_140aaadc2(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_3 == 0) || ((*(uint *)(param_3 + 8) >> 0x1e & 1) != 0)) {
    param_1 = 0;
  }
  else if (((param_1 == 0) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) ||
          (*(longlong *)(param_1 + 0x110) != param_3)) {
    if (DAT_14caec470 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1417df956;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463eaa20;
      local_58 = &LAB_147bbd9ea;
      local_60 = FUN_1401cf6d7;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
       (param_1 = param_3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
      local_88 = 0;
      FUN_140af9fb2(&local_38,DAT_14c951640,DAT_14caec470,param_2);
      param_1 = FUN_14090ceee(param_3,0,local_38);
      FUN_144757f48(param_1,param_4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140aaaf60 FUN_140aaaf60 body=614 status=ok
// SIG undefined FUN_140aaaf60(void)

ulonglong FUN_140aaaf60(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [8];
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
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if ((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_1), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_140702026(lVar2);
    uVar3 = 0;
    if ((param_2 != 0) && (lVar2 != 0)) {
      fVar5 = (float)FUN_140aab1c8(lVar2);
      fVar1 = *(float *)(lVar2 + 0x98);
      local_70 = DAT_14cb471e8;
      local_68 = 2;
      local_64 = 0xffffffff;
      local_c8[0] = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_d8 = local_c8;
      FUN_140042bb4(param_2,&local_70,(float)*(int *)(param_1 + 0x1020),0);
      local_70 = DAT_14cb471f0;
      local_68 = 2;
      local_64 = 0xffffffff;
      local_c8[0] = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_d8 = local_c8;
      FUN_140042bb4(param_2,&local_70,fVar5 + fVar1,0);
      lVar2 = FUN_140297002(param_1 + 0x1090);
      uVar3 = CONCAT71((int7)((ulonglong)&local_70 >> 8),1);
      if (lVar2 != 0) {
        local_70 = DAT_14cb471f8;
        local_68 = 2;
        local_64 = 0xffffffff;
        local_c8[0] = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_d8 = local_c8;
        FUN_140042bb4(param_2,&local_70,(float)*(int *)(lVar2 + 0x458),0);
        if ((*DAT_14cb49898 != '\x01') || (lVar4 = *(longlong *)(lVar2 + 0x390), lVar4 == 0)) {
          lVar4 = *(longlong *)(lVar2 + 0x398);
        }
        FUN_14016d8b0(param_2,DAT_14cb47200,lVar4);
        if ((*DAT_14cb49898 != '\x01') || (lVar4 = *(longlong *)(lVar2 + 0x390), lVar4 == 0)) {
          lVar4 = *(longlong *)(lVar2 + 0x398);
        }
        FUN_14016d8b0(param_2,DAT_14cb47208,lVar4);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140aab1c8 FUN_140aab1c8 body=100 status=ok
// SIG undefined FUN_140aab1c8(void)

float FUN_140aab1c8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  fVar4 = -3.4028235e+38;
  if ((((*(int *)(param_1 + 0x7c) != 0) && (uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x7c))) &&
      ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar3;
    }
    else {
      lVar2 = 0;
    }
    fVar4 = (float)*(double *)(lVar2 + 0x270);
  }
  return fVar4;
}



// FUNCTION 140aab22c FUN_140aab22c body=271 status=ok
// SIG undefined FUN_140aab22c(void)

void FUN_140aab22c(longlong *param_1,uint param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_140297002(param_1 + 0x212);
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0xa08))(param_1);
    uVar4 = param_2 & 0xfffffffd;
    if (cVar1 != '\0') {
      uVar4 = param_2;
    }
    cVar1 = (**(code **)(*param_1 + 0xa00))(param_1);
    uVar3 = uVar4 & 0xfffffffb;
    if (cVar1 != '\0') {
      uVar3 = uVar4;
    }
    if (param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    local_40 = (double)param_1[0x2d] + (double)param_1[0x30];
    local_48 = (double)param_1[0x2c] + (double)param_1[0x2f];
    local_50 = (double)param_1[0x2d] - (double)param_1[0x30];
    local_58 = (double)param_1[0x2c] - (double)param_1[0x2f];
    local_38 = 1;
    FUN_140aab646(lVar2,uVar3,&local_58,param_1[0x15]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aab354 FUN_140aab354 body=65 status=ok
// SIG undefined FUN_140aab354(void)

bool FUN_140aab354(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((char)param_1[0x206] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xa40))();
    if ((cVar1 == '\x03') || (param_1[0x205] != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = param_1[0x1e6] != 0;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



// FUNCTION 140aab396 FUN_140aab396 body=65 status=ok
// SIG undefined FUN_140aab396(void)

bool FUN_140aab396(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((char)param_1[0x206] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xa40))();
    if ((cVar1 == '\x03') || (param_1[0x205] != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = param_1[0x1e6] != 0;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



// FUNCTION 140aab3d8 FUN_140aab3d8 body=326 status=ok
// SIG undefined FUN_140aab3d8(void)

void FUN_140aab3d8(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1[0x16] != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    local_30 = param_1[0x1ec];
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_38 = param_1[0x1eb];
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar1 = FUN_140297002(param_1 + 0x212);
    FUN_140aaad4e(&local_28,uVar1,&local_38,&local_30);
    FUN_1446f470e(&local_40,L"UnderwaterPostProcessMID",1);
    lVar2 = FUN_140aaadc2(param_1[0x20a],local_40,local_28,0x2100040);
    if ((lVar2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x20a] = lVar2;
    (**(code **)(*param_1 + 0xaa8))(param_1,lVar2);
    FUN_140aab578(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aab520 FUN_140aab520 body=88 status=ok
// SIG undefined FUN_140aab520(void)

undefined8 FUN_140aab520(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x16];
  if ((lVar1 == 0) && (lVar1 = FUN_1448abda6(param_1), lVar1 == 0)) {
    return 0;
  }
  lVar1 = FUN_140702026(lVar1);
  uVar2 = 0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    (**(code **)(*param_1 + 0xaa0))(param_1,param_2);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140aab578 FUN_140aab578 body=205 status=ok
// SIG undefined FUN_140aab578(void)

void FUN_140aab578(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  FUN_14477b16e(param_1 + 0x10e0,param_1 + 0x640);
  lVar2 = *(longlong *)(param_1 + 0x1050);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1998) = 0;
    if (*(int *)(param_1 + 0x199c) != 0) {
      FUN_1483f085e(param_1 + 0x1990);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1998) == 0) {
      *(undefined4 *)(param_1 + 0x1998) = 1;
      if (*(int *)(param_1 + 0x199c) == 0) {
        FUN_140aaba28((undefined8 *)(param_1 + 0x1990),0);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x1990);
      *puVar1 = 0xbf800000;
      *(undefined8 *)(puVar1 + 2) = 0;
      lVar2 = *(longlong *)(param_1 + 0x1050);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x1990);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x1050);
      }
    }
    *(longlong *)(puVar1 + 2) = lVar2;
    *puVar1 = 0x3f800000;
  }
  return;
}



// FUNCTION 140aab646 FUN_140aab646 body=335 status=ok
// SIG undefined FUN_140aab646(void)

void FUN_140aab646(longlong param_1,ulonglong param_2,double *param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 & 4) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x3c0), *(char *)(param_3 + 4) != '\x01' ||
      ((((*param_3 < *(double *)(lVar1 + 0x6a8) || *param_3 == *(double *)(lVar1 + 0x6a8) &&
         (*(double *)(lVar1 + 0x698) < param_3[2] || *(double *)(lVar1 + 0x698) == param_3[2])) &&
        (param_3[1] < *(double *)(lVar1 + 0x6b0) || param_3[1] == *(double *)(lVar1 + 0x6b0))) &&
       (*(double *)(lVar1 + 0x6a0) < param_3[3] || *(double *)(lVar1 + 0x6a0) == param_3[3])))))) {
    *(undefined1 *)(lVar1 + 0x811) = 1;
    lVar1 = *(longlong *)(param_1 + 0x3c0);
    if ((~*(byte *)(lVar1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)(lVar1 + 0x9d);
      if ((bVar2 & 1) != 0) {
        if (*(longlong *)(lVar1 + 0xb0) != 0) goto LAB_140aab723;
        lVar3 = FUN_1448abda6(lVar1);
        if (lVar3 != 0) goto LAB_140aab723;
        bVar2 = *(byte *)(lVar1 + 0x9d);
      }
      *(byte *)(lVar1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(lVar1);
      FUN_14010586c(&DAT_14cad0140,lVar1);
    }
  }
LAB_140aab723:
  if ((param_2 & 2) != 0) {
    FUN_1401e2262(param_1,&local_60);
    if ((*(char *)(param_3 + 4) != '\x01') ||
       (((*param_3 <= local_48 && (local_60 < param_3[2] || local_60 == param_3[2])) &&
        ((param_3[1] <= local_40 && (local_58 < param_3[3] || local_58 == param_3[3])))))) {
      *(undefined1 *)(param_1 + 0x420) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aab796 FUN_140aab796 body=656 status=ok
// SIG undefined FUN_140aab796(void)

void FUN_140aab796(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_1[0x16] != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) {
    local_40 = param_1[0x1ea];
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_48 = param_1[0x1e9];
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar3 = FUN_140297002(param_1 + 0x212);
    FUN_140aaad4e(&local_38,uVar3,&local_48,&local_40);
    FUN_1446f470e(&local_50,L"WaterLODMID",1);
    lVar4 = FUN_140aaadc2(param_1[0x209],local_50,local_38,0x2100040);
    if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    param_1[0x209] = lVar4;
    lVar4 = param_1[0x15];
    if (lVar4 != 0) {
      if (DAT_14cb46ec8 == 0) {
        local_70 = &local_30;
        local_30 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_142b4754c;
        local_78 = &LAB_1483e40eb;
        local_80 = &LAB_146486986;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000005;
        local_a0 = 8;
        local_a8 = 0x420;
        FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
      }
      if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
         (iVar1 = *(int *)(lVar4 + 0x3d8), (longlong)iVar1 != 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x3d0);
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(lVar4 + lVar5);
          if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
            (**(code **)(*plVar2 + 0x638))(plVar2,0,param_1[0x209]);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
      }
    }
    (**(code **)(*param_1 + 0xaa0))(param_1,param_1[0x209]);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aaba28 FUN_140aaba28 body=269 status=ok
// SIG undefined FUN_140aaba28(void)

void FUN_140aaba28(longlong param_1,int param_2)

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
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140aabb36 FUN_140aabb36 body=734 status=ok
// SIG undefined FUN_140aabb36(void)

void FUN_140aabb36(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_1[0x16] != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
    lVar2 = param_1[0x1ed];
    FUN_1446f470e(&local_30,L"WaterInfoMID",1);
    lVar2 = FUN_140aaadc2(param_1[0x20b],local_30,lVar2,0x2100040);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x20b] = lVar2;
    lVar2 = param_1[0x15];
    if (lVar2 != 0) {
      if (DAT_14cb46ec8 == 0) {
        local_50 = &local_28;
        local_28 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_142b4754c;
        local_58 = &LAB_1483e40eb;
        local_60 = &LAB_146486986;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000005;
        local_80 = 8;
        local_88 = 0x420;
        FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
      }
      if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
         (plVar1 = *(longlong **)(lVar2 + 0x3c0), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x638))(plVar1,0,param_1[0x20b]);
      }
      lVar2 = param_1[0x15];
      if (lVar2 != 0) {
        if (DAT_14cb46ec8 == 0) {
          local_50 = &local_28;
          local_28 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_142b4754c;
          local_58 = &LAB_1483e40eb;
          local_60 = &LAB_146486986;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000005;
          local_80 = 8;
          local_88 = 0x420;
          FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
        }
        if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
           (plVar1 = *(longlong **)(lVar2 + 0x3c8), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x638))(plVar1,0,param_1[0x20b]);
        }
      }
    }
    (**(code **)(*param_1 + 0xab0))(param_1,param_1[0x20b]);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aabe16 FUN_140aabe16 body=338 status=ok
// SIG undefined FUN_140aabe16(void)

undefined8 FUN_140aabe16(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [8];
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
  undefined1 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 == 0) {
      uVar2 = 0;
      goto LAB_140aabf1f;
    }
  }
  lVar1 = FUN_140702026(lVar1);
  uVar2 = 0;
  if ((param_2 != 0) && (lVar1 != 0)) {
    local_60 = DAT_14cb47020;
    local_58 = 2;
    local_54 = 0xffffffff;
    local_b8[0] = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c8 = local_b8;
    FUN_140042bb4(param_2,&local_60,*(undefined4 *)(param_1 + 0xf84),0);
    local_60 = DAT_14cb47028;
    local_58 = 2;
    local_54 = 0xffffffff;
    local_b8[0] = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_c8 = local_b8;
    FUN_140042bb4(param_2,&local_60,*DAT_14cb49838,0);
    uVar2 = 1;
  }
LAB_140aabf1f:
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aabf6a FUN_140aabf6a body=533 status=ok
// SIG undefined FUN_140aabf6a(void)

void FUN_140aabf6a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a0 = param_4;
  FUN_140aac180(local_68,param_3);
  *(undefined4 *)(param_1 + 0x16c) = local_68[0];
  FUN_140aac1ee(local_68,param_3);
  *(undefined4 *)(param_1 + 0x170) = local_68[0];
  FUN_140aac25c(local_68,param_3);
  *(undefined4 *)(param_1 + 0x174) = local_68[0];
  FUN_140aac2ca(local_68,param_3);
  *(undefined4 *)(param_1 + 0x178) = local_68[0];
  FUN_140aac338(local_68,param_3);
  *(undefined4 *)(param_1 + 0x17c) = local_68[0];
  FUN_140aac3a6(local_68,param_3);
  *(undefined4 *)(param_1 + 0x180) = local_68[0];
  FUN_140aac924(param_1,param_2);
  local_70[0] = 0;
  FUN_140aac5ee(local_68,param_3);
  local_78[0] = 0;
  FUN_140aac69c(local_70,param_3);
  FUN_140aac4a2(local_78,param_3,local_68);
  FUN_140aac548(local_80,param_3,local_70);
  local_94 = 0;
  FUN_140aac74a(&local_90,param_3);
  local_88 = local_90;
  local_98 = 0;
  local_c0 = FUN_140aac414(param_3);
  local_b0 = param_5;
  local_c8 = local_80;
  local_b8 = &local_88;
  FUN_140aac7f8(param_1,local_68,local_78,local_70);
  FUN_140aacf30(param_1,param_3,local_a0);
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_14481578e(param_1 + 0x48,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac180 FUN_140aac180 body=109 status=ok
// SIG undefined FUN_140aac180(void)

undefined4 * FUN_140aac180(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935a0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac1ee FUN_140aac1ee body=109 status=ok
// SIG undefined FUN_140aac1ee(void)

undefined4 * FUN_140aac1ee(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935a8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac25c FUN_140aac25c body=109 status=ok
// SIG undefined FUN_140aac25c(void)

undefined4 * FUN_140aac25c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935b0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac2ca FUN_140aac2ca body=109 status=ok
// SIG undefined FUN_140aac2ca(void)

undefined4 * FUN_140aac2ca(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935b8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac338 FUN_140aac338 body=109 status=ok
// SIG undefined FUN_140aac338(void)

undefined4 * FUN_140aac338(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935c0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac3a6 FUN_140aac3a6 body=109 status=ok
// SIG undefined FUN_140aac3a6(void)

undefined4 * FUN_140aac3a6(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935c8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac414 FUN_140aac414 body=141 status=ok
// SIG undefined FUN_140aac414(void)

undefined4 FUN_140aac414(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9935c0,local_40);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac4a2 FUN_140aac4a2 body=164 status=ok
// SIG undefined FUN_140aac4a2(void)

undefined8 * FUN_140aac4a2(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935a8,local_38);
  uVar2 = *param_3;
  iVar3 = FUN_144a41c6c(param_2,local_38);
  if (iVar3 == -1) {
    *param_1 = uVar2;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar3 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar3 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac548 FUN_140aac548 body=164 status=ok
// SIG undefined FUN_140aac548(void)

undefined8 * FUN_140aac548(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935b8,local_38);
  uVar2 = *param_3;
  iVar3 = FUN_144a41c6c(param_2,local_38);
  if (iVar3 == -1) {
    *param_1 = uVar2;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar3 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar3 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac5ee FUN_140aac5ee body=173 status=ok
// SIG undefined FUN_140aac5ee(void)

undefined8 * FUN_140aac5ee(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935a0,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac69c FUN_140aac69c body=173 status=ok
// SIG undefined FUN_140aac69c(void)

undefined8 * FUN_140aac69c(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935b0,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac74a FUN_140aac74a body=173 status=ok
// SIG undefined FUN_140aac74a(void)

undefined8 * FUN_140aac74a(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9935c8,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aac7f8 FUN_140aac7f8 body=300 status=ok
// SIG undefined FUN_140aac7f8(void)

void FUN_140aac7f8(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float param_6,float *param_7,float param_8)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  if (10.0 <= fVar2) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (10.0 <= fVar1) {
    fVar1 = 10.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0xe0) = fVar1;
  *(float *)(param_1 + 0xe4) = fVar2 - fVar1;
  fVar1 = *param_3;
  fVar2 = param_3[1];
  if (10.0 <= fVar2) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (10.0 <= fVar1) {
    fVar1 = 10.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x110) = fVar1;
  *(float *)(param_1 + 0x114) = fVar2 - fVar1;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  if (10.0 <= fVar2) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (10.0 <= fVar1) {
    fVar1 = 10.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x80) = fVar1;
  *(float *)(param_1 + 0x84) = fVar2 - fVar1;
  fVar1 = *param_5;
  fVar2 = param_5[1];
  if (10.0 <= fVar2) {
    fVar2 = 10.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (10.0 <= fVar1) {
    fVar1 = 10.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0xb0) = fVar1;
  *(float *)(param_1 + 0xb4) = fVar2 - fVar1;
  fVar1 = *param_7;
  fVar2 = param_7[1];
  *(float *)(param_1 + 0x140) = fVar1 / param_8;
  *(float *)(param_1 + 0x144) = fVar2 / param_8 - fVar1 / param_8;
  param_6 = param_6 / (param_8 * param_8 * param_8);
  if (param_6 <= 0.0) {
    param_6 = 0.0;
  }
  *(float *)(param_1 + 0x164) = param_6;
  *(float *)(param_1 + 0x168) = param_6 * 0.25;
  return;
}



// FUNCTION 140aac924 FUN_140aac924 body=421 status=ok
// SIG undefined FUN_140aac924(void)

void FUN_140aac924(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (undefined8 *)0x0) {
    FUN_140aaccac(param_2,&local_30);
    *(undefined4 *)(param_1 + 1) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
    *(undefined4 *)(param_1 + 2) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_24;
    iVar1 = *(int *)((longlong)param_1 + 0x34);
    FUN_144716727(param_1[5],*(undefined4 *)(param_1 + 6));
    *(undefined4 *)(param_1 + 6) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
      FUN_1403b10bc(param_1 + 5,0);
    }
    uVar2 = *(undefined4 *)(param_2 + 1);
    param_1[3] = *param_2;
    *(undefined4 *)(param_1 + 4) = uVar2;
    if (*(int *)((longlong)param_1 + 0x44) < 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      FUN_1405c2e9e(param_1 + 7,0);
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *param_1 = param_2[0x28];
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  FUN_144716727(param_1[5],*(undefined4 *)(param_1 + 6));
  *(undefined4 *)(param_1 + 6) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x34) != 0)) {
    FUN_1403b10bc(param_1 + 5,0);
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_1405c2e9e(param_1 + 7,0);
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  if (-1 < *(int *)((longlong)param_1 + 0x154)) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_140163800(param_1 + 0x29,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aacae8 FUN_140aacae8 body=77 status=ok
// SIG undefined FUN_140aacae8(void)

void FUN_140aacae8(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140aacb36();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_140aacd98();
      return;
    }
  }
  return;
}



// FUNCTION 140aacb36 FUN_140aacb36 body=373 status=ok
// SIG undefined FUN_140aacb36(void)

void FUN_140aacb36(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140aacbbf;
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
LAB_140aacbbf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140aaccac FUN_140aaccac body=235 status=ok
// SIG undefined FUN_140aaccac(void)

longlong * FUN_140aaccac(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[3] == 0) {
    uVar1 = *(uint *)((longlong)param_1 + 0x144);
    *(uint *)(param_1 + 3) = uVar1;
    if (*(uint *)((longlong)param_1 + 0x1c) < uVar1) {
      FUN_140bfc2d4(param_1 + 2);
    }
    memset((void *)param_1[2],0,(longlong)(int)uVar1 << 4);
    if (0 < (int)param_1[1]) {
      lVar7 = 0;
      lVar5 = 0;
      do {
        lVar6 = 0;
        do {
          lVar3 = param_1[2];
          lVar4 = ((longlong)*(int *)(*param_1 + lVar7 + lVar6 * 4) - (longlong)(int)param_1[0x28])
                  * 0x10;
          iVar2 = *(int *)(lVar3 + 8 + lVar4);
          *(uint *)(lVar3 + 8 + lVar4) = iVar2 + 1U;
          if (*(uint *)(lVar3 + 0xc + lVar4) < iVar2 + 1U) {
            FUN_1446f48e2((longlong *)(lVar3 + lVar4),iVar2);
          }
          *(int *)(*(longlong *)(lVar3 + lVar4) + (longlong)iVar2 * 4) = (int)lVar5;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0xc;
      } while (lVar5 < (int)param_1[1]);
    }
  }
  lVar5 = param_1[0x28];
  iVar2 = *(int *)((longlong)param_1 + 0x144);
  *param_2 = param_1[2] + (longlong)(int)lVar5 * -0x10;
  *(int *)(param_2 + 1) = iVar2 + (int)lVar5;
  return param_2;
}



// FUNCTION 140aacd98 FUN_140aacd98 body=63 status=ok
// SIG undefined FUN_140aacd98(void)

void FUN_140aacd98(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140aacdd8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 140aacdd8 FUN_140aacdd8 body=344 status=ok
// SIG undefined FUN_140aacdd8(void)

ulonglong FUN_140aacdd8(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0xc)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar4 = (ulonglong)param_2;
    }
    else {
      uVar4 = (ulonglong)param_2 * 0xc;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar3 = uVar4 + 0xf;
          if (param_2 < 0xaaa) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
          }
          else {
            if ((uVar3 & 0xffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140aace7c;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
        }
      }
LAB_140aace7c:
      uVar4 = uVar4 / 0xc;
    }
  }
  return uVar4;
}



// FUNCTION 140aacf30 FUN_140aacf30 body=2760 status=ok
// SIG undefined FUN_140aacf30(void)

void FUN_140aacf30(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
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
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined2 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong local_110;
  int local_108;
  undefined4 local_104;
  int local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 uStack_ec;
  float fStack_e8;
  float fStack_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((longlong)(int)param_1[0x5b] == -1) {
LAB_140aad074:
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
  }
  else {
    iVar12 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)(int)param_1[0x5b] * 0x10);
    iVar16 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    if (0 < iVar16) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
      } while (iVar16 != iVar12);
    }
    iVar12 = FUN_140aad9fa(param_3);
    lVar14 = (longlong)iVar12 * 0x28 + *param_3;
    if (lVar14 == 0 || iVar12 == -1) goto LAB_140aad074;
    local_138 = *(undefined4 *)(lVar14 + 0x10);
    uStack_134 = *(undefined4 *)(lVar14 + 0x14);
    uStack_130 = *(undefined4 *)(lVar14 + 0x18);
    uStack_12c = *(undefined4 *)(lVar14 + 0x1c);
  }
  uVar13 = local_138;
  uVar18 = uStack_134;
  uStack_140 = uStack_130;
  uVar19 = uStack_12c;
  if ((longlong)(int)param_1[0x5c] == -1) {
LAB_140aad09b:
    local_148 = CONCAT44(uVar18,uVar13);
    uStack_13c = uVar19;
  }
  else {
    lVar14 = *(longlong *)(param_2 + 0x38);
    lVar15 = (longlong)(int)param_1[0x5c] * 0x10;
    iVar12 = *(int *)(lVar14 + 8 + lVar15);
    if (iVar12 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = *(undefined2 **)(lVar14 + lVar15);
    }
    iVar16 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    uVar13 = FUN_144a49b4a(iVar16,puVar17);
    iVar12 = FUN_140aad9fa(param_3,uVar13,lVar14 + lVar15);
    lVar14 = (longlong)iVar12 * 0x28 + *param_3;
    if (lVar14 != 0 && iVar12 != -1) {
      uVar13 = *(undefined4 *)(lVar14 + 0x10);
      uVar18 = *(undefined4 *)(lVar14 + 0x14);
      uStack_140 = *(undefined4 *)(lVar14 + 0x18);
      uVar19 = *(undefined4 *)(lVar14 + 0x1c);
      goto LAB_140aad09b;
    }
    local_148 = 0;
    uStack_140 = 0;
  }
  if ((longlong)(int)param_1[0x5d] == -1) {
LAB_140aad160:
    local_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
  }
  else {
    iVar12 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)(int)param_1[0x5d] * 0x10);
    iVar16 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    if (0 < iVar16) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
      } while (iVar16 != iVar12);
    }
    iVar12 = FUN_140aad9fa(param_3);
    lVar14 = (longlong)iVar12 * 0x28 + *param_3;
    if (lVar14 == 0 || iVar12 == -1) goto LAB_140aad160;
    local_158 = *(undefined4 *)(lVar14 + 0x10);
    uStack_154 = *(undefined4 *)(lVar14 + 0x14);
    uStack_150 = *(undefined4 *)(lVar14 + 0x18);
    uStack_14c = *(undefined4 *)(lVar14 + 0x1c);
  }
  uVar13 = local_158;
  uVar18 = uStack_154;
  uStack_160 = uStack_150;
  uVar19 = uStack_14c;
  if ((longlong)(int)param_1[0x5e] == -1) {
LAB_140aad187:
    local_168 = CONCAT44(uVar18,uVar13);
    uStack_15c = uVar19;
  }
  else {
    lVar14 = *(longlong *)(param_2 + 0x38);
    lVar15 = (longlong)(int)param_1[0x5e] * 0x10;
    iVar12 = *(int *)(lVar14 + 8 + lVar15);
    if (iVar12 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = *(undefined2 **)(lVar14 + lVar15);
    }
    iVar16 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    uVar13 = FUN_144a49b4a(iVar16,puVar17);
    iVar12 = FUN_140aad9fa(param_3,uVar13,lVar14 + lVar15);
    lVar14 = (longlong)iVar12 * 0x28 + *param_3;
    if (lVar14 != 0 && iVar12 != -1) {
      uVar13 = *(undefined4 *)(lVar14 + 0x10);
      uVar18 = *(undefined4 *)(lVar14 + 0x14);
      uStack_160 = *(undefined4 *)(lVar14 + 0x18);
      uVar19 = *(undefined4 *)(lVar14 + 0x1c);
      goto LAB_140aad187;
    }
    local_168 = 0;
    uStack_160 = 0;
  }
  if ((longlong)(int)param_1[0x60] != -1) {
    iVar12 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)(int)param_1[0x60] * 0x10);
    iVar16 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    if (0 < iVar16) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
      } while (iVar16 != iVar12);
    }
    iVar12 = FUN_140aad9fa(param_3);
    lVar14 = (longlong)iVar12 * 0x28 + *param_3;
    if (lVar14 != 0 && iVar12 != -1) {
      local_178 = *(undefined8 *)(lVar14 + 0x10);
      uStack_170 = *(longlong *)(lVar14 + 0x18);
      goto LAB_140aad25d;
    }
  }
  local_178 = 0;
  uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
LAB_140aad25d:
  fVar2 = (float)param_1[0x38];
  fVar3 = (float)param_1[0x39];
  fVar4 = (float)param_1[0x44];
  fVar5 = (float)param_1[0x45];
  fVar6 = (float)param_1[0x20];
  fVar7 = (float)param_1[0x2c];
  fVar8 = (float)param_1[0x21];
  fVar9 = (float)param_1[0x2d];
  fVar10 = (float)param_1[0x50];
  fVar11 = (float)param_1[0x51];
  local_188 = param_1[1];
  puVar1 = param_1 + 6;
  local_128 = param_1[6];
  uStack_124 = param_1[7];
  iStack_120 = param_1[8];
  uStack_11c = param_1[9];
  FUN_140aadabc(&local_110,&local_138,&local_128,*param_1);
  local_100 = iStack_120;
  local_f0 = 0;
  uStack_f8 = 0;
  if (local_108 == iStack_120) {
    uStack_f8 = local_110;
    local_f0 = iStack_120;
  }
  fStack_e4 = (fVar3 + fVar2) - fVar2;
  fStack_e8 = fVar2;
  if ((longlong *)(param_1 + 0x2e) == &local_110) {
    param_1[0x36] = local_f0;
    *(ulonglong *)(param_1 + 0x37) = CONCAT44(fVar2,uStack_ec);
    param_1[0x39] = fStack_e4;
    param_1[0x32] = iStack_120;
    param_1[0x33] = uStack_fc;
    *(longlong *)(param_1 + 0x34) = uStack_f8;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x2e) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x2e));
    }
    *(longlong *)(param_1 + 0x2e) = local_110;
    local_110 = 0;
    param_1[0x30] = local_108;
    param_1[0x31] = local_104;
    *(ulonglong *)(param_1 + 0x32) = CONCAT44(uStack_fc,local_100);
    *(longlong *)(param_1 + 0x34) = uStack_f8;
    *(ulonglong *)(param_1 + 0x36) = CONCAT44(uStack_ec,local_f0);
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(fStack_e4,fStack_e8);
  }
  local_188 = param_1[1];
  local_128 = *puVar1;
  uStack_124 = param_1[7];
  iStack_120 = param_1[8];
  uStack_11c = param_1[9];
  FUN_140aadabc(&local_110,&local_148,&local_128,*param_1);
  local_100 = iStack_120;
  local_f0 = 0;
  uStack_f8 = 0;
  if (local_108 == iStack_120) {
    uStack_f8 = local_110;
    local_f0 = iStack_120;
  }
  fStack_e4 = (fVar5 + fVar4) - fVar4;
  fStack_e8 = fVar4;
  if ((longlong *)(param_1 + 0x3a) == &local_110) {
    uStack_f8._4_4_ = (undefined4)((ulonglong)uStack_f8 >> 0x20);
    param_1[0x42] = local_f0;
    param_1[0x43] = uStack_ec;
    param_1[0x44] = fVar4;
    param_1[0x45] = fStack_e4;
    param_1[0x3e] = iStack_120;
    param_1[0x3f] = uStack_fc;
    param_1[0x40] = (undefined4)uStack_f8;
    param_1[0x41] = uStack_f8._4_4_;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x3a) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x3a));
    }
    *(longlong *)(param_1 + 0x3a) = local_110;
    local_110 = 0;
    param_1[0x3c] = local_108;
    param_1[0x3d] = local_104;
    *(ulonglong *)(param_1 + 0x3e) = CONCAT44(uStack_fc,local_100);
    *(longlong *)(param_1 + 0x40) = uStack_f8;
    *(ulonglong *)(param_1 + 0x42) = CONCAT44(uStack_ec,local_f0);
    *(ulonglong *)(param_1 + 0x44) = CONCAT44(fStack_e4,fStack_e8);
  }
  local_188 = param_1[1];
  local_128 = *puVar1;
  uStack_124 = param_1[7];
  iStack_120 = param_1[8];
  uStack_11c = param_1[9];
  FUN_140aadabc(&local_110,&local_158,&local_128,*param_1);
  local_100 = iStack_120;
  local_f0 = 0;
  uStack_f8 = 0;
  if (local_108 == iStack_120) {
    uStack_f8 = local_110;
    local_f0 = iStack_120;
  }
  fStack_e4 = (fVar8 + fVar6) - fVar6;
  fStack_e8 = fVar6;
  if ((longlong *)(param_1 + 0x16) == &local_110) {
    uStack_f8._4_4_ = (undefined4)((ulonglong)uStack_f8 >> 0x20);
    param_1[0x1e] = local_f0;
    param_1[0x1f] = uStack_ec;
    param_1[0x20] = fVar6;
    param_1[0x21] = fStack_e4;
    param_1[0x1a] = iStack_120;
    param_1[0x1b] = uStack_fc;
    param_1[0x1c] = (undefined4)uStack_f8;
    param_1[0x1d] = uStack_f8._4_4_;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x16) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x16));
    }
    *(longlong *)(param_1 + 0x16) = local_110;
    local_110 = 0;
    param_1[0x18] = local_108;
    param_1[0x19] = local_104;
    *(ulonglong *)(param_1 + 0x1a) = CONCAT44(uStack_fc,local_100);
    *(longlong *)(param_1 + 0x1c) = uStack_f8;
    *(ulonglong *)(param_1 + 0x1e) = CONCAT44(uStack_ec,local_f0);
    *(ulonglong *)(param_1 + 0x20) = CONCAT44(fStack_e4,fStack_e8);
  }
  local_188 = param_1[1];
  local_128 = *puVar1;
  uStack_124 = param_1[7];
  iStack_120 = param_1[8];
  uStack_11c = param_1[9];
  FUN_140aadabc(&local_110,&local_168,&local_128,*param_1);
  local_100 = iStack_120;
  local_f0 = 0;
  uStack_f8 = 0;
  if (local_108 == iStack_120) {
    uStack_f8 = local_110;
    local_f0 = iStack_120;
  }
  fStack_e4 = (fVar9 + fVar7) - fVar7;
  fStack_e8 = fVar7;
  if ((longlong *)(param_1 + 0x22) == &local_110) {
    uStack_f8._4_4_ = (undefined4)((ulonglong)uStack_f8 >> 0x20);
    param_1[0x2a] = local_f0;
    param_1[0x2b] = uStack_ec;
    param_1[0x2c] = fVar7;
    param_1[0x2d] = fStack_e4;
    param_1[0x26] = iStack_120;
    param_1[0x27] = uStack_fc;
    param_1[0x28] = (undefined4)uStack_f8;
    param_1[0x29] = uStack_f8._4_4_;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x22) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x22));
    }
    *(longlong *)(param_1 + 0x22) = local_110;
    local_110 = 0;
    param_1[0x24] = local_108;
    param_1[0x25] = local_104;
    *(ulonglong *)(param_1 + 0x26) = CONCAT44(uStack_fc,local_100);
    *(longlong *)(param_1 + 0x28) = uStack_f8;
    *(ulonglong *)(param_1 + 0x2a) = CONCAT44(uStack_ec,local_f0);
    *(ulonglong *)(param_1 + 0x2c) = CONCAT44(fStack_e4,fStack_e8);
  }
  local_188 = param_1[1];
  local_128 = *puVar1;
  uStack_124 = param_1[7];
  iStack_120 = param_1[8];
  uStack_11c = param_1[9];
  FUN_140aadabc(&local_110,&local_178,&local_128,*param_1);
  local_100 = iStack_120;
  local_f0 = 0;
  uStack_f8 = 0;
  if (local_108 == iStack_120) {
    uStack_f8 = local_110;
    local_f0 = iStack_120;
  }
  fStack_e4 = (fVar11 + fVar10) - fVar10;
  fStack_e8 = fVar10;
  if ((longlong *)(param_1 + 0x46) == &local_110) {
    uStack_f8._4_4_ = (undefined4)((ulonglong)uStack_f8 >> 0x20);
    param_1[0x4e] = local_f0;
    param_1[0x4f] = uStack_ec;
    param_1[0x50] = fVar10;
    param_1[0x51] = fStack_e4;
    param_1[0x4a] = iStack_120;
    param_1[0x4b] = uStack_fc;
    param_1[0x4c] = (undefined4)uStack_f8;
    param_1[0x4d] = uStack_f8._4_4_;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x46) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x46));
    }
    *(longlong *)(param_1 + 0x46) = local_110;
    param_1[0x48] = local_108;
    param_1[0x49] = local_104;
    param_1[0x4a] = local_100;
    param_1[0x4b] = uStack_fc;
    param_1[0x4c] = (undefined4)uStack_f8;
    param_1[0x4d] = uStack_f8._4_4_;
    *(ulonglong *)(param_1 + 0x4e) = CONCAT44(uStack_ec,local_f0);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(fStack_e4,fStack_e8);
  }
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aad9fa FUN_140aad9fa body=193 status=ok
// SIG undefined FUN_140aad9fa(void)

int FUN_140aad9fa(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_140aada3c:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140aada94;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140aada94;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140aada9a;
    }
  }
  return -1;
LAB_140aada94:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140aada9a:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140aada3c;
}



// FUNCTION 140aadabc FUN_140aadabc body=183 status=ok
// SIG undefined FUN_140aadabc(void)

longlong *
FUN_140aadabc(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_3[1];
  if (((0 < (longlong)iVar1) && (0 < param_5)) && ((int)param_2[1] == param_5)) {
    FUN_144a12820(param_1,iVar1,1);
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar4 = 0;
      fVar5 = 0.0;
      do {
        fVar6 = *(float *)(*param_2 +
                          ((longlong)*(int *)(*param_3 + lVar2 + lVar4 * 4) - (longlong)param_4) * 4
                          );
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar5 = fVar5 + fVar6;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      *(float *)(*param_1 + lVar3 * 4) = fVar5 / 3.0;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0xc;
    } while (lVar3 != iVar1);
  }
  return param_1;
}



// FUNCTION 140aadb8e FUN_140aadb8e body=92 status=ok
// SIG undefined FUN_140aadb8e(void)

void FUN_140aadb8e(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x700))();
  if (cVar1 == '\0') {
    if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    iVar2 = FUN_14487fd02(param_1);
    if (iVar2 == 3) {
      FUN_140aec0a6(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140aadbf8 FUN_140aadbf8 body=133 status=ok
// SIG undefined FUN_140aadbf8(void)

undefined8 * FUN_140aadbf8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7f2890;
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140aadc88 FUN_140aadc88 body=279 status=ok
// SIG undefined FUN_140aadc88(void)

undefined8 * FUN_140aadc88(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140aade60();
  *param_1 = &PTR_FUN_14b0983a0;
  param_1[5] = &PTR_LAB_14b0986c0;
  param_1[6] = &PTR_FUN_14b0987d0;
  param_1[0x42] = &PTR_FUN_14b0987f0;
  param_1[0x94] = &PTR_LAB_14b098820;
  param_1[0xb7] = &PTR_FUN_14b098840;
  param_1[0x110] = &PTR_FUN_14b098860;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8d4) = 0;
  *(undefined4 *)(param_1 + 0x11b) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x8dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0xffffffff;
  FUN_140aadda0(&local_28);
  local_38 = FUN_1410ac360;
  local_30 = 0;
  FUN_140aae2ce(param_1 + 0x4e,param_1,&local_38,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aadda0 FUN_140aadda0 body=190 status=ok
// SIG undefined FUN_140aadda0(void)

undefined8 * FUN_140aadda0(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8a5a0) {
    FUN_144b3d300(&DAT_14cb8a5a0);
    if (DAT_14cb8a5a0 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"shed",5);
      builtin_wcsncpy(local_48 + 8,L"tionFini",8);
      builtin_wcsncpy(local_48,L"OnTransi",8);
      FUN_1446f470e(&DAT_14cb8a598,local_48,1);
      _Init_thread_footer(&DAT_14cb8a5a0);
    }
  }
  *param_1 = DAT_14cb8a598;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aade60 FUN_140aade60 body=378 status=ok
// SIG undefined FUN_140aade60(void)

undefined8 * FUN_140aade60(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140aae198();
  *param_1 = &PTR_FUN_14b2148b0;
  param_1[5] = &PTR_LAB_14b214bd0;
  param_1[6] = &PTR_FUN_14b214ce0;
  param_1[0x42] = &PTR_FUN_14b214d00;
  param_1[0x94] = &PTR_LAB_14b214d30;
  param_1[0xb7] = &PTR_FUN_14b214d50;
  param_1[0x110] = &PTR_FUN_14b214d70;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  FUN_1446f470e(&local_38,L"BindingOverrides",1);
  uVar2 = FUN_140aadfdc();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,local_38,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x112] = lVar3;
  local_30 = "InstanceData";
  local_28 = 0xc;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  uVar2 = FUN_140aae0ba();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x113] = lVar3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aadfdc FUN_140aadfdc body=221 status=ok
// SIG undefined FUN_140aadfdc(void)

longlong FUN_140aadfdc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3408 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14756f40d;
    local_40 = FUN_1432dd3dc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneBindingOverrides",&DAT_14cab3408,&DAT_14756f40c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3408;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aae0ba FUN_140aae0ba body=221 status=ok
// SIG undefined FUN_140aae0ba(void)

longlong FUN_140aae0ba(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabc978 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14781b69d;
    local_40 = FUN_143377cc8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/LevelSequence",L"DefaultLevelSequenceInstanceData",&DAT_14cabc978,
                  &DAT_14781b69c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc978;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aae198 FUN_140aae198 body=309 status=ok
// SIG undefined FUN_140aae198(void)

undefined8 * FUN_140aae198(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  FUN_140b57c6a();
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined2 *)(param_1 + 0x99) = 0x101;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *param_1 = &PTR_FUN_14b19c8e0;
  param_1[5] = &PTR_LAB_14b19cbf0;
  param_1[6] = &PTR_FUN_14b19cd00;
  param_1[0x42] = &PTR_FUN_14b19cd20;
  param_1[0x94] = &PTR_LAB_14b19cd50;
  param_1[0xb7] = &PTR_FUN_14b19cd70;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)(puVar2 + 8) = 0x1000000;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x35) = 0;
  param_1[0xb9] = puVar2;
  param_1[0xb8] = puVar2;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0x1000000000;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0x1000000000;
  *(undefined4 *)(param_1 + 0xba) = 1;
  iVar1 = DAT_14cb8a588 + 1;
  *(int *)(param_1 + 0x10f) = DAT_14cb8a588;
  DAT_14cb8a588 = iVar1;
  return param_1;
}



// FUNCTION 140aae2ce FUN_140aae2ce body=595 status=ok
// SIG undefined FUN_140aae2ce(void)

void FUN_140aae2ce(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_4 == 0) {
      param_4 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_4);
    }
  }
  local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
  local_40 = param_4;
  FUN_1403350f6(param_1);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar9 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        _Dst = (uint *)(lVar1 + lVar9 * 0x10);
        if (((*(longlong *)(lVar1 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar8 = *_Dst, -1 < (int)uVar8 &&
            (((((int)uVar8 < DAT_14c9647dc &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
        iVar7 = ~(uint)lVar9 + iVar2;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar10 = true;
        if (iVar2 <= lVar9) goto LAB_140aae4c3;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
    if (bVar10) {
LAB_140aae4c3:
      FUN_1400bbcfc(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aae530 FUN_140aae530 body=60 status=ok
// SIG undefined FUN_140aae530(void)

undefined8 * FUN_140aae530(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4a99c0;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140aae57a FUN_140aae57a body=56 status=ok
// SIG undefined FUN_140aae57a(void)

undefined8 FUN_140aae57a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return 1;
}



// FUNCTION 140aae5b2 FUN_140aae5b2 body=199 status=ok
// SIG undefined FUN_140aae5b2(void)

void FUN_140aae5b2(longlong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140aaeb1e();
  if (param_1[0xf] == 0) {
    local_50 = DAT_14cb87208;
    local_58 = DAT_14cb87200;
    FUN_1448075d0(local_48);
    puVar2 = (undefined8 *)FUN_144a06846(param_2,local_48);
    pbVar1 = (byte *)*puVar2;
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(pbVar1 + 8);
    }
    FUN_1446ddc76(&local_58,uVar3,1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x58))(param_1,local_58,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aae67a FUN_140aae67a body=1187 status=ok
// SIG undefined FUN_140aae67a(void)

void FUN_140aae67a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong local_70;
  longlong *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140aaeb1e();
  local_a8 = DAT_14cb871b0;
  local_b0 = DAT_14cb871a8;
  FUN_1448075d0(&local_88);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar9 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar6[9];
      }
      iVar7 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & (uint)local_88) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *plVar6 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar7 * 0x40) == (uint)local_88) {
            if ((((lVar2 != 0) &&
                 (puVar8 = (undefined8 *)(lVar2 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                ((byte *)*puVar8 != (byte *)0x0)) && ((*(byte *)*puVar8 & 0x40) == 0))
            goto LAB_140aae743;
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar8 = &DAT_14c9a1308;
LAB_140aae743:
  FUN_140ab0556(param_1,1,puVar8);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cb87198;
  local_b0 = DAT_14cb87190;
  FUN_1448075d0(&local_88);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar9 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar6[9];
      }
      iVar7 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & (uint)local_88) * 4);
      if (iVar7 != -1) {
        do {
          lVar2 = *plVar6 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar7 * 0x40) == (uint)local_88) {
            if (((lVar2 != 0) &&
                (puVar8 = (undefined8 *)(lVar2 + 0x28), puVar8 != (undefined8 *)0x0)) &&
               (((byte *)*puVar8 != (byte *)0x0 && ((*(byte *)*puVar8 & 0x40) == 0))))
            goto LAB_140aae7f4;
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar8 = &DAT_14c9a1308;
LAB_140aae7f4:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar8 != (byte *)0x0) && ((*(byte *)*puVar8 & 3) != 0)) {
    FUN_140ab09e2(&local_c0,puVar8);
    if (local_c0 != (longlong *)0x0) {
      iVar7 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar7 + 1U) {
        FUN_140ab0fd8((longlong *)(param_1 + 0x40),iVar7);
      }
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar7 * 0x18);
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar5 = FUN_140822eba();
      FUN_140005f6c(puVar8,uVar5,0,0);
      FUN_14576bc44(puVar8,&local_d0);
      local_80 = (longlong *)CONCAT44(local_80._4_4_,DAT_14cb87180);
      local_88 = DAT_14cb87178;
      FUN_1448075d0(&local_b0,&local_88);
      uVar5 = FUN_144a06846(param_2,&local_b0);
      uVar4 = FUN_140e1edd4(uVar5,1);
      local_88 = (longlong *)(CONCAT44(uVar4,(int)local_88) & 0xffffffffffffff00);
      local_80 = (longlong *)CONCAT71(local_80._1_7_,1);
      local_78 = local_78 & 0xffffffffffffff00;
      local_70 = 0;
      plStack_68 = (longlong *)0x0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0xf00000d0;
      local_48 = 0;
      *(undefined1 *)(local_d0 + 0x10) = 1;
      *(longlong **)(local_d0 + 8) = local_88;
      FUN_140e3f0da(local_d0 + 0x18,&local_78);
      plVar6 = plStack_68;
      if (plStack_68 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_68 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plStack_68)(plStack_68);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      local_88 = local_c0;
      local_80 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
        UNLOCK();
      }
      if (local_c0 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*local_c0 + 8))();
      }
      local_78 = 0;
      FUN_14485c47a(&local_78,uVar5);
      FUN_14029d0b6(local_d0 + 0x50,&local_88);
      plVar6 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_80 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8);
          }
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140aaeb1e FUN_140aaeb1e body=6652 status=ok
// SIG undefined FUN_140aaeb1e(void)

void FUN_140aaeb1e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  longlong local_d0;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e0 = DAT_14cb86fc8;
  local_e8 = DAT_14cb86fc0;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if ((((lVar11 != 0) &&
                 (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_140aaebef;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaebef:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) &&
     (cVar3 = FUN_1410c4486(puVar9,0), cVar3 != '\0')) {
    iVar12 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
      FUN_140ab0fd8((longlong *)(param_1 + 0x40),iVar12);
    }
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 0x18);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    uVar4 = FUN_140822c64();
    FUN_140005f6c(puVar9,uVar4,0,0);
    FUN_140ab0f4c(puVar9,&local_e8);
    *(undefined1 *)(local_e8 + 8) = 2;
    lVar11 = local_e8 + 0x10;
    uVar4 = FUN_14089d5a8();
    FUN_140005f6c(lVar11,uVar4,0,0);
    FUN_14089d554(lVar11,&local_108);
    local_f0 = DAT_14cb86fb0;
    local_f8 = DAT_14cb86fa8;
    FUN_1448075d0(&local_c0);
    puVar9 = (undefined8 *)FUN_144a06846(param_2,&local_c0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
      uVar16 = FUN_140b963dc(puVar9,0);
      local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar16);
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0xf00000d0;
      local_80 = 0;
      local_78 = 0x3f800000;
      FUN_140f85fd4(local_108 + 1);
    }
    plVar8 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_100 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_dc,local_e0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  local_e0 = DAT_14cb86fe0;
  local_e8 = DAT_14cb86fd8;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if ((((lVar11 != 0) &&
                 (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_140aaecaa;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaecaa:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
    iVar12 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
      FUN_140ab0fd8((longlong *)(param_1 + 0x40),iVar12);
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 0x18);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    uVar4 = FUN_140822c64();
    FUN_140005f6c(puVar7,uVar4,0,0);
    FUN_140ab0f4c(puVar7,&local_e8);
    lVar14 = local_e8;
    lVar11 = local_e8 + 0x10;
    uVar4 = FUN_14576b998();
    FUN_140005f6c(lVar11,uVar4,0,0);
    FUN_14576ba66(lVar11,&local_108);
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
      *(undefined1 *)(local_108 + 1) = 0;
      FUN_14049dff8((longlong)local_108 + 0xc,puVar9);
    }
    local_f0 = DAT_14cb86ff8;
    local_f8 = DAT_14cb86ff0;
    FUN_1448075d0(&local_c0);
    uVar4 = FUN_144a06846(param_2,&local_c0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    cVar3 = FUN_1410c4486(uVar4,1);
    plVar8 = local_100;
    if (cVar3 != '\0') {
      *(undefined1 *)(lVar14 + 8) = 2;
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_100 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_dc,local_e0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  local_e0 = DAT_14cb87010;
  local_e8 = DAT_14cb87008;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if ((((lVar11 != 0) &&
                 (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_140aaed65;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaed65:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  pbVar5 = (byte *)*puVar9;
  if (((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) == 1)) &&
     (cVar3 = FUN_14576baba(*(undefined8 *)(pbVar5 + 8)), cVar3 != '\0')) {
    iVar12 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
      FUN_140ab0fd8((longlong *)(param_1 + 0x40),iVar12);
    }
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 0x18);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    uVar4 = FUN_140822c64();
    FUN_140005f6c(puVar9,uVar4,0,0);
    FUN_140ab0f4c(puVar9,&local_e8);
    lVar11 = local_e8;
    *(char *)(local_e8 + 8) = cVar3;
    local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb87028);
    local_108 = DAT_14cb87020;
    FUN_1448075d0(&local_c0);
    uVar4 = FUN_144a06846(param_2,&local_c0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    fVar15 = (float)FUN_140b963dc(uVar4,0);
    if (fVar15 <= 0.0) {
      local_100 = (longlong *)FUN_14001cc68(0x18,0x10);
      local_100[1] = (longlong)&DAT_100000001;
      *local_100 = (longlong)&PTR_FUN_14b41daf0;
      local_108 = local_100 + 2;
      local_100[2] = (longlong)&PTR_FUN_14b3a49e0;
      FUN_14891ea94(&local_c0);
      FUN_14029d0b6(lVar11 + 0x10,&local_c0);
      plVar8 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_b8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      plVar8 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_100 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_100)(local_100);
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
    else {
      plVar8 = (longlong *)FUN_14001cc68(0xc0);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14b41db50;
      memset(plVar8 + 3,0,0x90);
      plVar8[2] = (longlong)&PTR_FUN_14b3a4a90;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      plVar8[8] = 0;
      plVar8[9] = 0;
      *(undefined4 *)(plVar8 + 10) = 0xf00000d0;
      *(undefined4 *)(plVar8 + 0xc) = 0x3f800000;
      *(undefined2 *)(plVar8 + 0xd) = 0x101;
      *(undefined1 *)((longlong)plVar8 + 0x6a) = 1;
      *(undefined8 *)((longlong)plVar8 + 0x6c) = 0;
      *(undefined8 *)((longlong)plVar8 + 0x74) = 0;
      plVar8[0x10] = 0;
      plVar8[0x11] = 0;
      plVar8[0x12] = 0;
      plVar8[0x13] = 0;
      *(undefined1 *)(plVar8 + 0x14) = 0;
      plVar8[0x15] = 0;
      plVar8[0x16] = 0;
      plVar8[0x17] = 0;
      local_108 = plVar8 + 2;
      local_100 = plVar8;
      FUN_14576bbbe(&local_c0);
      FUN_14029d0b6(lVar11 + 0x10,&local_c0);
      plVar8 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_b8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      plVar8 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_100 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_c0 = (undefined **)CONCAT44(local_c0._4_4_,fVar15);
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0xf00000d0;
      local_80 = 0;
      local_78 = 0x3f800000;
      FUN_14089d554(local_e8 + 0x10,&local_108);
      FUN_140f85fd4(local_108 + 1,&local_c0);
      plVar8 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_100 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb87040);
      local_108 = DAT_14cb87038;
      FUN_1448075d0(&local_c0);
      uVar4 = FUN_144a06846(param_2,&local_c0);
      uVar2 = FUN_1410c4486(uVar4,1);
      FUN_14089d554(local_e8 + 0x10,&local_108);
      plVar8 = local_100;
      *(undefined1 *)(local_108 + 0xb) = uVar2;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_100 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_dc,local_e0);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  local_e0 = DAT_14cb87058;
  local_e8 = DAT_14cb87050;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if (((lVar11 != 0) &&
                (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
               (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
            goto LAB_140aaee22;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaee22:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) != 0)) {
    local_e0 = DAT_14cb87070;
    local_e8 = DAT_14cb87068;
    FUN_1448075d0(&local_c0);
    puVar7 = (undefined8 *)FUN_144a06846(param_2,&local_c0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    pbVar5 = (byte *)*puVar7;
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) != 0)) {
      if ((*pbVar5 & 3) == 1) {
        uVar4 = *(undefined8 *)(pbVar5 + 8);
      }
      else {
        uVar4 = 0;
      }
      cVar3 = FUN_14576baba(uVar4);
      if (cVar3 != '\0') {
        iVar12 = *(int *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x48) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
          FUN_140ab0fd8((longlong *)(param_1 + 0x40),iVar12);
        }
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 0x18);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        uVar4 = FUN_140822c64();
        FUN_140005f6c(puVar7,uVar4,0,0);
        FUN_140ab0f4c(puVar7,&local_e8);
        lVar11 = local_e8;
        *(char *)(local_e8 + 8) = cVar3;
        local_100 = (longlong *)FUN_148926b0d();
        local_108 = local_100 + 2;
        FUN_14891eb18(&local_c0);
        FUN_14029d0b6(lVar11 + 0x10,&local_c0);
        plVar8 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_b8 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        plVar8 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_100 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        uVar4 = FUN_146537d22();
        FUN_14576ba66(local_e8 + 0x10,&local_c0);
        FUN_1446e7478(puVar9,local_c0 + 1,uVar4,0);
        plVar8 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_b8 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        plVar8 = (longlong *)CONCAT44(uStack_dc,local_e0);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar8 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
    }
  }
  local_e0 = DAT_14cb87088;
  local_e8 = DAT_14cb87080;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if ((((lVar11 != 0) &&
                 (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_140aaeeda;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaeeda:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) != 0)) {
    plVar8 = (longlong *)FUN_1407cbaec(puVar9);
    if ((longlong)(int)plVar8[2] != 0) {
      lVar11 = *plVar8;
      lVar14 = (longlong)(int)plVar8[2] << 4;
      do {
        iVar12 = *(int *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x48) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
          FUN_140ab0fd8((longlong *)(param_1 + 0x40),iVar12);
        }
        puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 0x18);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        uVar4 = FUN_14576b95e();
        FUN_140005f6c(puVar9,uVar4,0,0);
        FUN_14576bb6a(puVar9,&local_c0);
        FUN_14576b95e();
        FUN_1446e7478(lVar11,local_c0);
        plVar8 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_b8 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        lVar11 = lVar11 + 0x10;
        lVar14 = lVar14 + -0x10;
      } while (lVar14 != 0);
    }
  }
  local_e0 = DAT_14cb86f80;
  local_e8 = DAT_14cb86f78;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if (((lVar11 != 0) &&
                (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
               (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
            goto LAB_140aaef92;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaef92:
  FUN_140ab0556(param_1,2,puVar9);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_e0 = DAT_14cb86f98;
  local_e8 = DAT_14cb86f90;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if ((((lVar11 != 0) &&
                 (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_140aaf043;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaf043:
  FUN_140ab0556(param_1,3,puVar9);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  ppuVar10 = DAT_14cb87160;
  local_e0 = DAT_14cb87130;
  local_e8 = DAT_14cb87128;
  FUN_1448075d0(&local_c0);
  pbVar5 = (byte *)*param_2;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar8 = &DAT_14c9a1288;
    }
    else {
      plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
      plVar13 = plVar8 + 8;
      if ((longlong *)plVar8[9] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[9];
      }
      iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4);
      if (iVar12 != -1) {
        do {
          lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
            if (((lVar11 != 0) &&
                (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
               (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
            goto LAB_140aaf0fb;
            break;
          }
          iVar12 = *(int *)(lVar11 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140aaf0fb:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  pbVar5 = (byte *)*puVar9;
  if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) == 0)) {
    local_e0 = DAT_14cb870b8;
    local_e8 = DAT_14cb870b0;
    FUN_1448075d0(&local_c0);
    pbVar5 = (byte *)*param_2;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar13 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar8[9];
        }
        iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_c0) * 4
                         );
        if (iVar12 != -1) {
          do {
            lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_c0) {
              if ((((lVar11 != 0) &&
                   (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_140aaf1b5;
              break;
            }
            iVar12 = *(int *)(lVar11 + 0x38);
          } while (iVar12 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_140aaf1b5:
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    pbVar5 = (byte *)*puVar9;
    if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) goto LAB_140aaf1dc;
LAB_140aaf787:
    uVar4 = *(undefined8 *)(pbVar5 + 8);
  }
  else {
    if ((*pbVar5 & 3) == 1) goto LAB_140aaf787;
    uVar4 = 0;
  }
  FUN_1446ddc76(&local_c0,uVar4,1);
  ppuVar10 = local_c0;
LAB_140aaf1dc:
  if (ppuVar10 == (undefined **)0x0) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else if (ppuVar10 == DAT_14cb87158) {
    *(undefined1 *)(param_1 + 8) = 1;
    iVar12 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar12 + 1U) {
      FUN_14576b9d2((longlong *)(param_1 + 0x28),iVar12);
    }
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar14 = (longlong)iVar12 * 0x30;
    puVar9 = (undefined8 *)(lVar11 + lVar14);
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    local_e0 = DAT_14cb87100;
    local_e8 = DAT_14cb870f8;
    FUN_1448075d0(&local_c0);
    uVar4 = FUN_144a06846(param_2,&local_c0);
    FUN_14049dff8(lVar11 + lVar14,uVar4);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_e0 = DAT_14cb87118;
    local_e8 = DAT_14cb87110;
    FUN_1448075d0(&local_c0);
    uVar4 = FUN_144a06846(param_2,&local_c0);
    FUN_14049dff8((longlong)puVar9 + 0xc,uVar4);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_c0 = &PTR_FUN_14b3a4880;
    local_b8 = (longlong *)(((ulonglong)local_b8 >> 8 & 0xffffff) << 8);
    uStack_b0._0_4_ = (uint)uStack_b0 & 0xffff0000;
    uStack_b0 = CONCAT44(4,(uint)uStack_b0);
    local_a8 = 0;
    uStack_a0 = 0;
    uVar4 = FUN_140ab051c();
    local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb87148);
    local_108 = DAT_14cb87140;
    FUN_1448075d0(&local_e8);
    uVar6 = FUN_144a06846(param_2,&local_e8);
    FUN_1402057ac(uVar6,&local_c0,uVar4,0);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb870d0);
    local_108 = DAT_14cb870c8;
    FUN_1448075d0(&local_e8);
    puVar9 = (undefined8 *)FUN_144a06846(param_2,&local_e8);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
      uVar2 = FUN_1410c4486(puVar9,0);
      local_b8 = (longlong *)CONCAT71(local_b8._1_7_,uVar2);
    }
    local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb870e8);
    local_108 = DAT_14cb870e0;
    FUN_1448075d0(&local_e8);
    puVar9 = (undefined8 *)FUN_144a06846(param_2,&local_e8);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
      uVar16 = FUN_140b963dc(puVar9,0);
      local_b8 = (longlong *)CONCAT44(uVar16,(undefined4)local_b8);
    }
    FUN_140ab07b4(&local_c0,lVar11 + lVar14 + 0x18);
    FUN_140ab0fa0(&local_c0);
  }
  else if ((ppuVar10 == DAT_14cb87160) && (*(longlong *)(param_1 + 0x10) == 0)) {
    local_c0 = &PTR_FUN_14b3a4880;
    local_b8 = (longlong *)(((ulonglong)local_b8 >> 8 & 0xffffff) << 8);
    uStack_b0._0_4_ = (uint)uStack_b0 & 0xffff0000;
    uStack_b0 = CONCAT44(4,(uint)uStack_b0);
    local_a8 = 0;
    uStack_a0 = 0;
    uVar4 = FUN_140ab051c();
    local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb87148);
    local_108 = DAT_14cb87140;
    FUN_1448075d0(&local_e8);
    pbVar5 = (byte *)*param_2;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar13 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar8[9];
        }
        iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_e8) * 4
                         );
        if (iVar12 != -1) {
          do {
            lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_e8) {
              if ((((lVar11 != 0) &&
                   (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_140aaf2db;
              break;
            }
            iVar12 = *(int *)(lVar11 + 0x38);
          } while (iVar12 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_140aaf2db:
    FUN_1402057ac(puVar9,&local_c0,uVar4,0);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb870d0);
    local_108 = DAT_14cb870c8;
    FUN_1448075d0(&local_e8);
    pbVar5 = (byte *)*param_2;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar13 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar8[9];
        }
        iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_e8) * 4
                         );
        if (iVar12 != -1) {
          do {
            lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_e8) {
              if (((lVar11 != 0) &&
                  (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar9 != (byte *)0x0 && ((*(byte *)*puVar9 & 0x40) == 0))))
              goto LAB_140aaf38f;
              break;
            }
            iVar12 = *(int *)(lVar11 + 0x38);
          } while (iVar12 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_140aaf38f:
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
      uVar2 = FUN_1410c4486(puVar9,0);
      local_b8 = (longlong *)CONCAT71(local_b8._1_7_,uVar2);
    }
    local_100 = (longlong *)CONCAT44(local_100._4_4_,DAT_14cb870e8);
    local_108 = DAT_14cb870e0;
    FUN_1448075d0(&local_e8);
    pbVar5 = (byte *)*param_2;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar13 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar8[9];
        }
        iVar12 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar8[10] - 1U & (uint)local_e8) * 4
                         );
        if (iVar12 != -1) {
          do {
            lVar11 = *plVar8 + (longlong)iVar12 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar12 * 0x40) == (uint)local_e8) {
              if ((((lVar11 != 0) &&
                   (puVar9 = (undefined8 *)(lVar11 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_140aaf447;
              break;
            }
            iVar12 = *(int *)(lVar11 + 0x38);
          } while (iVar12 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_140aaf447:
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
      uVar16 = FUN_140b963dc(puVar9,0);
      local_b8 = (longlong *)CONCAT44(uVar16,(undefined4)local_b8);
    }
    FUN_140ab07b4(&local_c0,param_1 + 0x10);
    local_c0 = &PTR_FUN_14b3a4880;
    FUN_1447cd778(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ab051c FUN_140ab051c body=57 status=ok
// SIG undefined FUN_140ab051c(void)

void FUN_140ab051c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e1a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e1a8 = FUN_140002ddd(FUN_146539f39,uVar1,L"ObjectiveWaypointSettings");
  }
  return;
}



// FUNCTION 140ab0556 FUN_140ab0556 body=604 status=ok
// SIG undefined FUN_140ab0556(void)

void FUN_140ab0556(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  uint local_58;
  int local_54;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ab09e2(&local_40,param_3);
  if (local_40 == (longlong *)0x0) goto LAB_140ab058d;
  iVar5 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar5 + 1U) {
    FUN_140ab0fd8((longlong *)(param_1 + 0x40),iVar5);
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar5 * 0x18);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar6 = FUN_140822c64();
  FUN_140005f6c(puVar4,uVar6,0,0);
  FUN_140ab0f4c(puVar4,&local_50);
  *(undefined1 *)(local_50 + 8) = param_2;
  local_68 = local_40;
  local_60 = local_38;
  if (local_38 == (longlong *)0x0) {
LAB_140ab0648:
    lVar7 = (**(code **)(*local_40 + 8))(local_40);
    local_54 = 0;
    if (lVar7 == 0) goto LAB_140ab0756;
    local_58 = *(uint *)(lVar7 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar8;
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) goto LAB_140ab0648;
LAB_140ab0756:
    local_58 = 0;
    iVar5 = 0;
  }
  local_54 = iVar5;
  FUN_14029d0b6(local_50 + 0x10,&local_68);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_140ab058d:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ab07b4 FUN_140ab07b4 body=558 status=ok
// SIG undefined FUN_140ab07b4(void)

void FUN_140ab07b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (((*(char *)(param_1 + 8) == '\0') && (*(float *)(param_1 + 0xc) <= 0.0)) &&
     (*(int *)(param_1 + 0x20) == 0)) {
    return;
  }
  if (((((((DAT_14cb88704 == 0) || ((int)DAT_14cb88700 < 0)) ||
         ((DAT_14c9647dc <= (int)DAT_14cb88700 ||
          ((plVar7 = (longlong *)
                     ((ulonglong)((DAT_14cb88700 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14cb88700 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || ((int)plVar7[2] != DAT_14cb88704)))))) ||
        ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) || (lVar5 = *plVar7, lVar5 == 0)) &&
      (lVar5 = FUN_140ab051c(), lVar5 == 0)) ||
     ((lVar6 = FUN_140ab051c(), lVar6 == 0 || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))))) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      lVar8 = lVar5;
    }
  }
  FUN_140005f6c(param_2,lVar8,0,0);
  uVar4 = *(undefined1 *)(param_1 + 8);
  lVar5 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *(undefined1 *)(lVar5 + 8) = uVar4;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
    *(undefined1 *)(lVar5 + 8) = uVar4;
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
  }
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  lVar5 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
    *(undefined4 *)(lVar5 + 0xc) = uVar3;
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
  }
  lVar5 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
    FUN_1400fce78(lVar5 + 0x18,param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000140ab09a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
    return;
  }
  FUN_1400fce78(lVar5 + 0x18,param_1 + 0x18);
  return;
}



// FUNCTION 140ab09e2 FUN_140ab09e2 body=1385 status=ok
// SIG undefined FUN_140ab09e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140ab09e2(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  ulonglong local_78;
  undefined4 local_70;
  uint local_68;
  undefined4 uStack_64;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((byte *)*param_2 != (byte *)0x0) {
    bVar4 = *(byte *)*param_2 & 3;
    if (bVar4 == 3) {
      local_70 = DAT_14cb86f08;
      local_78 = DAT_14cb86f00;
      FUN_1448075d0(&local_68);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar8 = &DAT_14c9a1288;
        }
        else {
          plVar8 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
          plVar10 = plVar8 + 8;
          if ((longlong *)plVar8[9] != (longlong *)0x0) {
            plVar10 = (longlong *)plVar8[9];
          }
          iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar8[10] - 1U & local_68) * 4);
          if (iVar9 != -1) {
            do {
              lVar2 = *plVar8 + (longlong)iVar9 * 0x40;
              if (*(uint *)(*plVar8 + (longlong)iVar9 * 0x40) == local_68) {
                if ((((lVar2 != 0) &&
                     (plVar8 = (longlong *)(lVar2 + 0x28), plVar8 != (longlong *)0x0)) &&
                    ((byte *)*plVar8 != (byte *)0x0)) && ((*(byte *)*plVar8 & 0x40) == 0))
                goto LAB_140ab0ade;
                break;
              }
              iVar9 = *(int *)(lVar2 + 0x38);
            } while (iVar9 != -1);
          }
        }
      }
      plVar8 = &DAT_14c9a1308;
LAB_140ab0ade:
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      local_80 = 0;
      if (*plVar8 == 0) {
        local_78 = 0;
      }
      else {
        FUN_1400bc2ec(*plVar8,&local_78,&local_80);
      }
      uVar5 = DAT_14cb86f64;
      if ((DAT_14cb86f64 == DAT_14c948034) &&
         (uVar5 = DAT_14c948034, DAT_14cb86f60 != DAT_14c948030)) {
        FUN_14011791e(&local_68,DAT_14cb86f60,DAT_14cb86f64 >> 0x20);
        uVar5 = CONCAT44(uStack_64,local_68);
        DAT_14cb86f64 = uVar5;
      }
      if (local_78 == uVar5) {
        plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_LAB_14b41db10;
        plVar8[2] = (longlong)&PTR_FUN_14b3a4a30;
        plVar8[3] = 0;
        plVar8[4] = 0;
        uVar6 = FUN_14117c614();
        local_70 = _DAT_14cb86f38;
        local_78 = CONCAT44(DAT_14cb86f30._4_4_,(int)DAT_14cb86f30);
        FUN_1448075d0(&local_68);
        uVar7 = FUN_144a06846(param_2,&local_68);
        FUN_1446e7478(uVar7,plVar8 + 3,uVar6,0);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        local_70 = DAT_14cb86f50;
        local_78 = DAT_14cb86f48;
        FUN_1448075d0(&local_68);
        uVar6 = FUN_144a06846(param_2,&local_68);
        FUN_14049dff8(plVar8 + 3,uVar6);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        *param_1 = (longlong)(plVar8 + 2);
      }
      else {
        local_80 = 0;
        if (*plVar8 == 0) {
          local_78 = 0;
        }
        else {
          FUN_1400bc2ec(*plVar8,&local_78,&local_80);
        }
        uVar5 = CONCAT44(_DAT_14cb86f38,DAT_14cb86f30._4_4_);
        if ((uVar5 == DAT_14c948034) && (uVar5 = DAT_14c948034, (int)DAT_14cb86f30 != DAT_14c948030)
           ) {
          FUN_14011791e(&local_68,(int)DAT_14cb86f30,_DAT_14cb86f38);
          uVar5 = CONCAT44(uStack_64,local_68);
          DAT_14cb86f30._4_4_ = local_68;
          _DAT_14cb86f38 = uStack_64;
        }
        if (local_78 == uVar5) {
          plVar8 = (longlong *)FUN_14001cc68(0x48,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_LAB_14b41db30;
          plVar8[3] = 0;
          plVar8[4] = 0;
          plVar8[5] = 0;
          plVar8[2] = (longlong)&PTR_FUN_14b3a4a60;
          plVar8[6] = 0;
          plVar8[7] = 0;
          plVar8[8] = 0;
          *(undefined8 *)((longlong)plVar8 + 0x21) = 0;
          *(undefined8 *)((longlong)plVar8 + 0x1c) = 0;
          uVar6 = FUN_14576b924();
          local_70 = _DAT_14cb86f38;
          local_78 = CONCAT44(DAT_14cb86f30._4_4_,(int)DAT_14cb86f30);
        }
        else {
          plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar8[1] = (longlong)&DAT_100000001;
          *plVar8 = (longlong)&PTR_FUN_14b41ba80;
          plVar8[2] = (longlong)&PTR_FUN_14b3a4a00;
          plVar8[3] = 0;
          plVar8[4] = 0;
          uVar6 = FUN_1407ed88e();
          local_70 = DAT_14cb86f20;
          local_78 = DAT_14cb86f18;
        }
        FUN_1448075d0(&local_68);
        uVar7 = FUN_144a06846(param_2,&local_68);
        FUN_1446e7478(uVar7,plVar8 + 3,uVar6,0);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        *param_1 = (longlong)(plVar8 + 2);
      }
      param_1[1] = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      goto LAB_140ab0c33;
    }
    if (bVar4 == 1) {
      plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14b41ba80;
      plVar8[2] = (longlong)&PTR_FUN_14b3a4a00;
      plVar8[3] = 0;
      plVar8[4] = 0;
      pbVar3 = (byte *)*param_2;
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(pbVar3 + 8);
      }
      FUN_140822ef4(plVar8 + 3,uVar6,0);
      *param_1 = (longlong)(plVar8 + 2);
      param_1[1] = (longlong)plVar8;
      if (plVar8 == (longlong *)0x0) {
LAB_140ab0c33:
        if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 != 0) goto LAB_140ab0c33;
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_140ab0c33;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      goto LAB_140ab0a28;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_140ab0a28:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140ab0f4c FUN_140ab0f4c body=83 status=ok
// SIG undefined FUN_140ab0f4c(void)

longlong * FUN_140ab0f4c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140822c64();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140ab0fa0 FUN_140ab0fa0 body=55 status=ok
// SIG undefined FUN_140ab0fa0(void)

void FUN_140ab0fa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3a4880;
  FUN_1447cd778(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ab0fd8 FUN_140ab0fd8 body=370 status=ok
// SIG undefined FUN_140ab0fd8(void)

void FUN_140ab0fd8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ab1061;
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
LAB_140ab1061:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140ab114a FUN_140ab114a body=3910 status=ok
// SIG undefined FUN_140ab114a(void)

longlong * FUN_140ab114a(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  uint *puVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_488 [40];
  longlong *local_460;
  longlong *local_458;
  ulonglong *local_450;
  longlong *local_448;
  longlong local_440;
  longlong *local_438;
  int *local_430;
  longlong local_428;
  undefined8 uStack_420;
  longlong *local_418;
  undefined8 uStack_410;
  longlong local_408;
  ulonglong uStack_400;
  uint local_3f8 [4];
  uint *local_3e8;
  int local_3e0;
  uint local_3dc;
  undefined4 uStack_3d8;
  int local_3d4;
  undefined4 local_3d0 [2];
  longlong local_3c8;
  int local_3c0;
  longlong local_3b8;
  ulonglong uStack_3b0;
  undefined4 local_3a8 [4];
  longlong local_398;
  undefined4 local_390;
  uint local_38c;
  undefined4 uStack_388;
  undefined4 local_384;
  undefined4 local_380;
  longlong local_378;
  int local_370;
  longlong local_b0 [10];
  ulonglong local_60;
  
  local_448 = (longlong *)CONCAT44(local_448._4_4_,param_4);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_488;
  *param_2 = 0;
  param_2[1] = 0;
  local_418 = (longlong *)0x0;
  uStack_410 = 0;
  local_460 = param_2;
  FUN_1449f3ff4(param_3);
  local_428 = 0;
  uStack_420 = 0;
  local_3e8 = (uint *)0x0;
  local_3e0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3dc = 0x80;
  uStack_3d8 = 0xffffffff;
  local_3d4 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  if ((longlong)(int)uStack_410 != 0) {
    plVar23 = local_418 + (int)uStack_410;
    plVar10 = local_418;
    do {
      uVar26 = uStack_420;
      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
LAB_140ab18e8:
        FUN_140ab23df(local_428);
        uVar26 = uStack_420 >> 0x20;
        uStack_420 = uStack_420 & 0xffffffff00000000;
        if ((int)uVar26 == 0) goto LAB_140ab1914;
        FUN_14576bc98(&local_428);
        break;
      }
      lVar8 = *plVar10;
      uVar12 = (uint)((ulonglong)lVar8 >> 0x10);
      uVar6 = (uint)lVar8 & 0xffff;
      lVar24 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar24 = param_1 + 0x40;
      }
      iVar3 = *(int *)(lVar24 + (ulonglong)
                                (*(int *)(param_1 + 0x50) - 1U &
                                (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                                (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar3 == -1) goto LAB_140ab18e8;
      while (lVar24 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x60,
            *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x60) != lVar8) {
        iVar3 = *(int *)(lVar24 + 0x58);
        if (iVar3 == -1) goto LAB_140ab18e8;
      }
      if ((lVar24 == 0) || (lVar24 == -8)) goto LAB_140ab18e8;
      lVar8 = (longlong)(int)uStack_420;
      uVar12 = (int)uStack_420 + 1;
      uStack_420 = CONCAT44(uStack_420._4_4_,uVar12);
      if (uStack_420._4_4_ < uVar12) {
        FUN_140ab247c(&local_428,uVar26 & 0xffffffff);
      }
      lVar8 = lVar8 * 0x50;
      *(undefined8 *)(local_428 + 0x20 + lVar8) = 0;
      *(undefined4 *)(local_428 + 0x28 + lVar8) = 0;
      *(undefined8 *)(local_428 + lVar8) = 0;
      ((undefined8 *)(local_428 + lVar8))[1] = 0;
      *(undefined8 *)(local_428 + 0x2c + lVar8) = 0xffffffff00000080;
      *(undefined4 *)(local_428 + 0x34 + lVar8) = 0;
      *(undefined8 *)(local_428 + 0x40 + lVar8) = 0;
      *(undefined4 *)(local_428 + 0x48 + lVar8) = 0;
      FUN_140ab21dc(local_428 + lVar8);
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar23);
  }
  lVar8 = local_428;
  iVar3 = (int)uStack_420;
  uVar26 = uStack_420 & 0xffffffff;
  if (uVar26 != 0) {
    if (1 < (int)uStack_420) {
      memset(local_3a8,0,0x2f0);
      local_3b8 = lVar8;
      uStack_3b0 = (uVar26 * 0x50 + lVar8) - 0x50;
      fVar31 = logf((float)iVar3);
      local_3a8[0] = (int)(longlong)(fVar31 + fVar31);
      plVar23 = &local_3b8;
      do {
        plVar10 = (longlong *)*plVar23;
        plVar15 = (longlong *)plVar23[1];
        iVar3 = (int)plVar23[2];
        iVar5 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar10) >> 4) * -0x33333333;
        uVar12 = iVar5 + 1;
        plVar18 = plVar15;
        plVar14 = plVar10;
        if (iVar3 != 0) {
LAB_140ab13a8:
          if (8 < (int)uVar12) {
            plVar16 = plVar10 + (ulonglong)(uVar12 >> 1) * 10;
            plVar11 = local_b0;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar11 = *plVar16;
              plVar16 = plVar16 + 1;
              plVar11 = plVar11 + 1;
            }
            plVar16 = plVar10;
            plVar11 = plVar10 + (ulonglong)(uVar12 >> 1) * 10;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar11 = *plVar16;
              plVar16 = plVar16 + 1;
              plVar11 = plVar11 + 1;
            }
            plVar16 = local_b0;
            plVar11 = plVar10;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar11 = *plVar16;
              plVar16 = plVar16 + 1;
              plVar11 = plVar11 + 1;
            }
            plVar16 = plVar15 + 10;
            plVar11 = plVar10;
            do {
              plVar17 = plVar11 + 10;
              plVar19 = plVar11 + 10;
              do {
                plVar11 = plVar19;
                plVar9 = plVar17;
                if (plVar15 < plVar11) break;
                plVar17 = plVar9 + 10;
                plVar19 = plVar11 + 10;
              } while ((int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34) <=
                       (int)plVar10[1] - *(int *)((longlong)plVar10 + 0x34));
              plVar17 = plVar16 + -0x14;
              do {
                plVar19 = plVar16;
                plVar13 = plVar17;
                plVar16 = plVar19 + -10;
                if (plVar16 <= plVar10) break;
                plVar17 = plVar13 + -10;
              } while ((int)plVar10[1] - *(int *)((longlong)plVar10 + 0x34) <=
                       (int)plVar19[-9] - *(int *)((longlong)plVar19 + -0x1c));
              if (plVar16 < plVar11) goto LAB_140ab1fcb;
              plVar17 = plVar11;
              plVar19 = local_b0;
              for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                *plVar19 = *plVar17;
                plVar17 = plVar17 + 1;
                plVar19 = plVar19 + 1;
              }
              plVar17 = plVar16;
              plVar19 = plVar11;
              for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                *plVar19 = *plVar17;
                plVar17 = plVar17 + 1;
                plVar19 = plVar19 + 1;
              }
              plVar17 = local_b0;
              plVar19 = plVar16;
              for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                *plVar19 = *plVar17;
                plVar17 = plVar17 + 1;
                plVar19 = plVar19 + 1;
              }
            } while( true );
          }
          while (plVar9 = local_458, plVar18 = plVar10, plVar14 = plVar10, plVar10 < plVar15) {
            while (plVar16 = plVar18, plVar18 = plVar14 + 10, plVar18 <= plVar15) {
              piVar1 = (int *)((longlong)plVar14 + 0x84);
              plVar14 = plVar18;
              if ((int)plVar18[1] - *piVar1 <= (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34))
              {
                plVar18 = plVar16;
              }
            }
            plVar18 = plVar15 + -10;
            plVar14 = plVar16;
            plVar11 = local_b0;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar11 = *plVar14;
              plVar14 = plVar14 + 1;
              plVar11 = plVar11 + 1;
            }
            plVar14 = plVar15;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar16 = *plVar14;
              plVar14 = plVar14 + 1;
              plVar16 = plVar16 + 1;
            }
            plVar14 = local_b0;
            plVar16 = plVar15;
            for (lVar8 = 10; plVar15 = plVar18, lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar16 = *plVar14;
              plVar14 = plVar14 + 1;
              plVar16 = plVar16 + 1;
            }
          }
          goto LAB_140ab1423;
        }
LAB_140ab1c90:
        plVar9 = local_458;
        if (uVar12 != 0) {
          iVar5 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
          iVar3 = iVar5;
joined_r0x000140ab1cbd:
          do {
            iVar21 = iVar3 * 2 + 1;
            if (iVar21 < (int)uVar12) {
              iVar27 = iVar3 * 2 + 2;
              if ((iVar27 < (int)uVar12) &&
                 ((int)plVar10[(longlong)iVar21 * 10 + 1] -
                  *(int *)((longlong)plVar10 + (longlong)iVar21 * 0x50 + 0x34) <=
                  (int)plVar10[(longlong)iVar27 * 10 + 1] -
                  *(int *)((longlong)plVar10 + (longlong)iVar27 * 0x50 + 0x34))) {
                iVar21 = iVar27;
              }
              lVar8 = (longlong)iVar3;
              lVar24 = (longlong)iVar21;
              if ((int)plVar10[lVar8 * 10 + 1] - *(int *)((longlong)plVar10 + lVar8 * 0x50 + 0x34) <
                  (int)plVar10[lVar24 * 10 + 1] - *(int *)((longlong)plVar10 + lVar24 * 0x50 + 0x34)
                 ) {
                plVar15 = plVar10 + lVar8 * 10;
                plVar18 = local_b0;
                for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                  *plVar18 = *plVar15;
                  plVar15 = plVar15 + 1;
                  plVar18 = plVar18 + 1;
                }
                plVar15 = plVar10 + lVar24 * 10;
                plVar18 = plVar10 + lVar8 * 10;
                for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                  *plVar18 = *plVar15;
                  plVar15 = plVar15 + 1;
                  plVar18 = plVar18 + 1;
                }
                plVar15 = local_b0;
                plVar18 = plVar10 + lVar24 * 10;
                for (lVar8 = 10; iVar3 = iVar21, lVar8 != 0; lVar8 = lVar8 + -1) {
                  *plVar18 = *plVar15;
                  plVar15 = plVar15 + 1;
                  plVar18 = plVar18 + 1;
                }
                goto joined_r0x000140ab1cbd;
              }
            }
            bVar30 = iVar5 != 0;
            iVar5 = iVar5 + -1;
            iVar3 = iVar5;
          } while (bVar30);
          if (1 < (int)uVar12) {
            plVar15 = plVar10;
            plVar18 = local_b0;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar18 = *plVar15;
              plVar15 = plVar15 + 1;
              plVar18 = plVar18 + 1;
            }
            plVar15 = plVar10 + ((ulonglong)uVar12 - 1) * 10;
            plVar18 = plVar10;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar18 = *plVar15;
              plVar15 = plVar15 + 1;
              plVar18 = plVar18 + 1;
            }
            plVar15 = local_b0;
            plVar18 = plVar10 + ((ulonglong)uVar12 - 1) * 10;
            for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *plVar18 = *plVar15;
              plVar15 = plVar15 + 1;
              plVar18 = plVar18 + 1;
            }
            uVar26 = (ulonglong)uVar12 - 1;
            if (uVar12 != 2) {
              do {
                iVar3 = 0;
                iVar21 = 1;
                iVar5 = 0;
                do {
                  lVar8 = (longlong)(iVar3 + 2);
                  iVar27 = iVar21;
                  if ((lVar8 < (longlong)uVar26) &&
                     ((int)plVar10[(longlong)iVar21 * 10 + 1] -
                      *(int *)((longlong)plVar10 + (longlong)iVar21 * 0x50 + 0x34) <=
                      (int)plVar10[lVar8 * 10 + 1] -
                      *(int *)((longlong)plVar10 + lVar8 * 0x50 + 0x34))) {
                    iVar27 = iVar3 + 2;
                  }
                  lVar8 = (longlong)iVar5;
                  lVar24 = (longlong)iVar27;
                  if ((int)plVar10[lVar24 * 10 + 1] -
                      *(int *)((longlong)plVar10 + lVar24 * 0x50 + 0x34) <=
                      (int)plVar10[lVar8 * 10 + 1] -
                      *(int *)((longlong)plVar10 + lVar8 * 0x50 + 0x34)) break;
                  plVar15 = plVar10 + lVar8 * 10;
                  plVar18 = local_b0;
                  for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                    *plVar18 = *plVar15;
                    plVar15 = plVar15 + 1;
                    plVar18 = plVar18 + 1;
                  }
                  plVar15 = plVar10 + lVar24 * 10;
                  plVar18 = plVar10 + lVar8 * 10;
                  for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                    *plVar18 = *plVar15;
                    plVar15 = plVar15 + 1;
                    plVar18 = plVar18 + 1;
                  }
                  plVar15 = local_b0;
                  plVar18 = plVar10 + lVar24 * 10;
                  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                    *plVar18 = *plVar15;
                    plVar15 = plVar15 + 1;
                    plVar18 = plVar18 + 1;
                  }
                  iVar3 = iVar27 * 2;
                  iVar21 = iVar27 * 2 + 1;
                  iVar5 = iVar27;
                } while ((longlong)iVar21 < (longlong)uVar26);
                plVar15 = plVar10;
                plVar18 = local_b0;
                for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *plVar18 = *plVar15;
                  plVar15 = plVar15 + 1;
                  plVar18 = plVar18 + 1;
                }
                plVar15 = plVar10 + (uVar26 - 1) * 10;
                plVar18 = plVar10;
                for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *plVar18 = *plVar15;
                  plVar15 = plVar15 + 1;
                  plVar18 = plVar18 + 1;
                }
                plVar15 = local_b0;
                plVar18 = plVar10 + (uVar26 - 1) * 10;
                for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *plVar18 = *plVar15;
                  plVar15 = plVar15 + 1;
                  plVar18 = plVar18 + 1;
                }
                bVar30 = 2 < uVar26;
                uVar26 = uVar26 - 1;
              } while (bVar30);
            }
          }
        }
LAB_140ab1423:
        local_458 = plVar9;
        plVar23 = plVar23 + -3;
      } while (&local_3b8 <= plVar23);
    }
    if (*(int *)(local_428 + 8) - *(int *)(local_428 + 0x34) < (int)local_448) {
      FUN_140ab21dc(&local_408,local_428);
      if (1 < (int)uStack_420) {
        lVar8 = 1;
        do {
          lVar24 = local_428;
          lVar25 = lVar8 * 0x50;
          plVar23 = (longlong *)(local_428 + lVar25);
          iVar27 = (int)uStack_400 - local_3d4;
          iVar3 = *(int *)(local_428 + 8 + lVar25);
          iVar5 = *(int *)(local_428 + 0x34 + lVar25);
          iVar21 = iVar3 - iVar5;
          local_450 = (ulonglong *)CONCAT44(local_450._4_4_,iVar21);
          local_458 = plVar23;
          local_448 = &local_408;
          if (iVar21 < iVar27) {
            local_458 = &local_408;
            local_448 = plVar23;
          }
          local_398 = 0;
          local_390 = 0;
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_38c = 0x80;
          uStack_388 = 0xffffffff;
          local_384 = 0;
          local_378 = 0;
          iVar7 = (int)uStack_400;
          if (iVar21 < iVar27) {
            iVar7 = iVar3;
          }
          local_370 = 0;
          iVar3 = local_3d4;
          if (iVar21 < iVar27) {
            iVar3 = iVar5;
          }
          uVar12 = iVar7 - iVar3;
          if (uVar12 != 0) {
            if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b((longlong)(int)uVar12);
            }
            FUN_140ab2830(&local_3b8,uVar12);
            if (uVar12 < 4) {
              iVar3 = 1;
            }
            else {
              uVar12 = (uVar12 | 1) + 0xe;
              iVar3 = 0x1f;
              if (uVar12 != 0) {
                for (; uVar12 >> iVar3 == 0; iVar3 = iVar3 + -1) {
                }
              }
              iVar3 = 1 << ((byte)iVar3 & 0x1f);
            }
            if ((local_370 == 0) || (local_370 < iVar3)) {
              local_370 = iVar3;
              FUN_140ab258c(&local_3b8);
            }
          }
          local_438 = &local_408;
          if ((int)local_450 < iVar27) {
            local_438 = plVar23;
          }
          puVar4 = (uint *)(local_438 + 2);
          iVar3 = (int)local_438[5];
          local_440 = lVar8;
          if (iVar3 == 0) {
            uVar26 = 1;
            uVar29 = 0;
            iVar5 = 0;
            iVar21 = 0;
          }
          else {
            plVar10 = &local_408;
            if ((int)local_450 < iVar27) {
              plVar10 = plVar23;
            }
            puVar22 = (uint *)plVar10[4];
            if ((uint *)plVar10[4] == (uint *)0x0) {
              puVar22 = puVar4;
            }
            uVar12 = *puVar22;
            if (uVar12 == 0) {
              iVar5 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar5 = iVar3 + -1;
              }
              uVar29 = 0;
              uVar26 = (ulonglong)(uint)(iVar5 >> 5);
              if (iVar5 >> 5 < 1) {
                uVar26 = uVar29;
              }
              iVar21 = 0;
              do {
                if (uVar26 == uVar29) goto LAB_140ab17c2;
                iVar21 = iVar21 + 0x20;
                uVar12 = puVar22[uVar29 + 1];
                uVar29 = uVar29 + 1;
              } while (uVar12 == 0);
            }
            else {
              uVar29 = 0;
              iVar21 = 0;
            }
            uVar26 = (ulonglong)(-uVar12 & uVar12);
            uVar2 = uVar26 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar5 = (iVar21 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar5) {
              iVar5 = iVar3;
            }
          }
          if (iVar5 < iVar3) {
            bVar30 = iVar27 <= (int)local_450;
            local_430 = &local_3d4;
            plVar15 = &local_408;
            plVar10 = (longlong *)local_3d0;
            plVar18 = plVar23;
            local_450 = &uStack_400;
            if (bVar30) {
              plVar18 = &local_408;
              plVar15 = plVar23;
              plVar10 = plVar23 + 7;
              local_430 = (int *)(lVar24 + lVar25 + 0x34);
              local_450 = (ulonglong *)(lVar24 + lVar25 + 8);
            }
            uVar12 = 0xffffffff;
            do {
              if ((int)*local_450 != *local_430) {
                puVar22 = (uint *)((longlong)iVar5 * 0x10 + *local_448);
                uVar6 = *puVar22;
                plVar23 = (longlong *)plVar15[8];
                if ((longlong *)plVar15[8] == (longlong *)0x0) {
                  plVar23 = plVar10;
                }
                iVar5 = *(int *)((longlong)plVar23 +
                                (ulonglong)
                                ((int)plVar15[9] - 1U &
                                (uVar6 * 0x40 + puVar22[1] + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6)) * 4
                                );
                if (iVar5 != -1) {
                  lVar8 = *local_458;
                  do {
                    lVar24 = (longlong)iVar5 * 0x10;
                    if ((*(uint *)(lVar8 + lVar24) == uVar6) &&
                       (*(uint *)(lVar8 + 4 + lVar24) == puVar22[1])) {
                      FUN_140ab2092(&local_3b8,local_b0,puVar22,0);
                      iVar3 = (int)local_438[5];
                      break;
                    }
                    iVar5 = *(int *)(lVar24 + lVar8 + 8);
                  } while (iVar5 != -1);
                }
              }
              uVar12 = uVar12 & ~(uint)uVar26;
              puVar22 = (uint *)plVar18[4];
              if ((uint *)plVar18[4] == (uint *)0x0) {
                puVar22 = puVar4;
              }
              iVar5 = (int)uVar29;
              lVar8 = (longlong)iVar5;
              uVar6 = puVar22[lVar8] & uVar12;
              if (uVar6 == 0) {
                iVar27 = iVar3 + 0x1e;
                if (-1 < iVar3 + -1) {
                  iVar27 = iVar3 + -1;
                }
                iVar27 = iVar27 >> 5;
                iVar7 = iVar27;
                if (iVar27 < iVar5) {
                  iVar7 = iVar5;
                }
                if (iVar27 <= iVar5) break;
                lVar24 = 0;
                while( true ) {
                  iVar21 = iVar21 + 0x20;
                  uVar6 = puVar22[lVar8 + lVar24 + 1];
                  if (uVar6 != 0) break;
                  lVar24 = lVar24 + 1;
                  if (iVar7 - lVar8 == lVar24) goto LAB_140ab17c2;
                }
                uVar29 = (ulonglong)(iVar5 + (int)lVar24 + 1);
                uVar12 = 0xffffffff;
              }
              uVar26 = (ulonglong)(-uVar6 & uVar6);
              uVar2 = uVar26 * 2 + 1;
              lVar8 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              iVar5 = (iVar21 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            } while (iVar5 < iVar3);
          }
LAB_140ab17c2:
          FUN_1403080ec(&local_408,&local_3b8);
          lVar8 = local_440;
          if (local_378 == 0) {
            local_3d0[0] = local_380;
          }
          if (local_3c8 != 0) {
            FUN_1400020a8();
          }
          local_3c8 = local_378;
          local_378 = 0;
          local_3c0 = local_370;
          local_370 = 0;
          uVar26 = uStack_3b0 >> 0x20;
          uStack_3b0 = uStack_3b0 & 0xffffffff00000000;
          if ((int)uVar26 != 0) {
            FUN_14472eb64(&local_3b8,0);
          }
          uStack_388 = 0xffffffff;
          local_384 = 0;
          local_390 = 0;
          if (0x80 < local_38c) {
            local_38c = 0x80;
            FUN_1446efbd8(local_3a8,0);
          }
          if (local_398 != 0) {
            FUN_1400020a8();
          }
          if (local_3b8 != 0) {
            FUN_1400020a8();
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uStack_420);
      }
    }
  }
LAB_140ab1914:
  iVar3 = (int)uStack_400 - local_3d4;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)local_460 + 0xc) < iVar3) {
    FUN_14481578e(local_460);
  }
  iVar3 = local_3e0;
  if (local_3e0 == 0) {
    uVar26 = 1;
    uVar29 = 0;
    iVar5 = 0;
    iVar21 = 0;
  }
  else {
    puVar4 = local_3e8;
    if (local_3e8 == (uint *)0x0) {
      puVar4 = local_3f8;
    }
    uVar12 = *puVar4;
    if (uVar12 == 0) {
      iVar5 = local_3e0 + 0x1e;
      if (-1 < local_3e0 + -1) {
        iVar5 = local_3e0 + -1;
      }
      uVar29 = 0;
      uVar26 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar26 = uVar29;
      }
      iVar21 = 0;
      do {
        if (uVar26 == uVar29) goto LAB_140ab1aa3;
        iVar21 = iVar21 + 0x20;
        uVar12 = puVar4[uVar29 + 1];
        uVar29 = uVar29 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar29 = 0;
      iVar21 = 0;
    }
    uVar26 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar26 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar5 = (iVar21 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (local_3e0 <= iVar5) {
      iVar5 = local_3e0;
    }
  }
  if (iVar5 != local_3e0) {
    uVar12 = 0xffffffff;
    do {
      puVar28 = (undefined4 *)((longlong)iVar5 * 0x10 + local_408);
      iVar5 = (int)local_460[1];
      *(uint *)(local_460 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)local_460 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(local_460,iVar5);
      }
      *(undefined4 *)(*local_460 + (longlong)iVar5 * 4) = *puVar28;
      uVar12 = uVar12 & ~(uint)uVar26;
      puVar4 = local_3e8;
      if (local_3e8 == (uint *)0x0) {
        puVar4 = local_3f8;
      }
      iVar5 = (int)uVar29;
      lVar8 = (longlong)iVar5;
      uVar6 = puVar4[lVar8] & uVar12;
      if (uVar6 == 0) {
        iVar27 = local_3e0 + 0x1e;
        if (-1 < local_3e0 + -1) {
          iVar27 = local_3e0 + -1;
        }
        iVar27 = iVar27 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar7 = iVar27;
        if (iVar27 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar5 < iVar27) {
          lVar24 = 0;
          do {
            uVar6 = puVar4[lVar8 + lVar24 + 1];
            if (uVar6 != 0) {
              uVar29 = (ulonglong)(iVar5 + (int)lVar24 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140ab1a74;
            }
            iVar21 = iVar21 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar7 - lVar8 != lVar24);
          uVar12 = 0xffffffff;
          iVar5 = iVar7;
        }
        uVar29 = (ulonglong)(iVar5 + 1);
        iVar5 = local_3e0;
      }
      else {
LAB_140ab1a74:
        uVar26 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar26 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar5 = (iVar21 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (local_3e0 <= iVar5) {
          iVar5 = local_3e0;
        }
      }
    } while (iVar5 != iVar3);
  }
LAB_140ab1aa3:
  local_3c0 = 0;
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  uVar26 = uStack_400 >> 0x20;
  uStack_400 = uStack_400 & 0xffffffff00000000;
  if ((int)uVar26 != 0) {
    FUN_14472eb64(&local_408,0);
  }
  uStack_3d8 = 0xffffffff;
  local_3d4 = 0;
  local_3e0 = 0;
  if (0x80 < local_3dc) {
    local_3dc = 0x80;
    FUN_1446efbd8(local_3f8,0);
  }
  if (local_3e8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  FUN_140ab23df(local_428,uStack_420 & 0xffffffff);
  if (local_428 != 0) {
    FUN_1400020a8();
  }
  if (local_418 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_460;
LAB_140ab1fcb:
  plVar17 = plVar10;
  plVar20 = local_b0;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar20 = *plVar17;
    plVar17 = plVar17 + 1;
    plVar20 = plVar20 + 1;
  }
  plVar17 = plVar16;
  plVar20 = plVar10;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar20 = *plVar17;
    plVar17 = plVar17 + 1;
    plVar20 = plVar20 + 1;
  }
  plVar17 = local_b0;
  plVar20 = plVar16;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar20 = *plVar17;
    plVar17 = plVar17 + 1;
    plVar20 = plVar20 + 1;
  }
  iVar3 = iVar3 + -1;
  plVar19 = plVar19 + -0x14;
  if ((longlong)plVar13 - (longlong)plVar14 < (longlong)plVar18 - (longlong)plVar9) {
    if (plVar11 < plVar15) {
      *plVar23 = (longlong)plVar11;
      plVar23[1] = (longlong)plVar15;
      *(int *)(plVar23 + 2) = iVar3;
      plVar23 = plVar23 + 3;
    }
    local_458 = plVar10;
    if (plVar16 <= plVar10 + 10) goto LAB_140ab1423;
  }
  else {
    if (plVar10 + 10 < plVar16) {
      *plVar23 = (longlong)plVar10;
      plVar23[1] = (longlong)plVar19;
      *(int *)(plVar23 + 2) = iVar3;
      plVar23 = plVar23 + 3;
    }
    plVar13 = plVar15;
    plVar10 = plVar11;
    plVar19 = plVar15;
    local_458 = plVar9;
    if (plVar15 <= plVar11) goto LAB_140ab1423;
  }
  iVar5 = (int)((ulonglong)((longlong)plVar13 - (longlong)local_458) >> 4) * -0x33333333;
  uVar12 = iVar5 + 1;
  plVar15 = plVar19;
  plVar18 = plVar13;
  plVar14 = local_458;
  if (iVar3 == 0) goto LAB_140ab1c90;
  goto LAB_140ab13a8;
}



// FUNCTION 140ab2092 FUN_140ab2092 body=328 status=ok
// SIG undefined FUN_140ab2092(void)

undefined4 *
FUN_140ab2092(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (uint)uVar1;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (int)((ulonglong)uVar1 >> 0x20) + 0x9e3779b9 ^ uVar5;
  local_68 = param_4;
  cVar2 = FUN_1405dc59a(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140ab258c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ab21dc FUN_140ab21dc body=154 status=ok
// SIG undefined FUN_140ab21dc(void)

longlong FUN_140ab21dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140ab2231;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140ab2231:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140ab2276(param_1,param_2);
  return param_1;
}



// FUNCTION 140ab2276 FUN_140ab2276 body=361 status=ok
// SIG undefined FUN_140ab2276(void)

undefined8 * FUN_140ab2276(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  ulonglong uVar5;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    uVar5 = (ulonglong)uVar3;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(uint *)((longlong)param_1 + 0xc) != uVar3) {
      FUN_14472eb64(param_1,uVar3);
    }
    param_1[6] = 0xffffffff;
    uVar2 = uVar3 + 0x1f & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar2) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar4 = uVar2;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar1 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar1 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar1 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar5 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,uVar5 << 4);
    }
  }
  return param_1;
}



// FUNCTION 140ab23df FUN_140ab23df body=156 status=ok
// SIG undefined FUN_140ab23df(void)

void FUN_140ab23df(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_14472eb64(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
    if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
      FUN_1446efbd8(param_1 + 2);
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 140ab247c FUN_140ab247c body=272 status=ok
// SIG undefined FUN_140ab247c(void)

void FUN_140ab247c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140ab258c FUN_140ab258c body=676 status=ok
// SIG undefined FUN_140ab258c(void)

void FUN_140ab258c(longlong *param_1)

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
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140ab25f0;
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
LAB_140ab25f0:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
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
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = *(uint *)(lVar6 + lVar13);
      uVar15 = (longlong)
               (int)((uVar2 >> 2) + uVar2 * 0x40 + *(int *)(lVar6 + 4 + lVar13) + 0x9e3779b9 ^ uVar2
                    ) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140ab2830 FUN_140ab2830 body=460 status=ok
// SIG undefined FUN_140ab2830(void)

void FUN_140ab2830(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_144869a3c(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(uVar8 * 0x10 + lVar2 + -0xc);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -4;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 140ab29fc FUN_140ab29fc body=89 status=ok
// SIG undefined FUN_140ab29fc(void)

void FUN_140ab29fc(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)(param_1 + 0xf0);
  if (plVar2 != param_2) {
    puVar3 = (undefined8 *)*plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FUN_140ab2a56(param_1,param_3 == 1);
  return;
}



// FUNCTION 140ab2a56 FUN_140ab2a56 body=285 status=ok
// SIG undefined FUN_140ab2a56(void)

void FUN_140ab2a56(longlong param_1,char param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != '\0') || (*(int *)(param_1 + 0x48) == 0)) {
    local_38 = 0;
    uStack_30 = 0;
    iVar3 = *(int *)(param_1 + 0x38);
    if (0 < (longlong)iVar3) {
      local_28[0] = 0;
      local_28[1] = 0;
      FUN_140627580(local_28,iVar3,1);
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x30);
        dVar1 = *(double *)(lVar4 + 0x10 + lVar5 * 2);
        dVar2 = *(double *)(lVar4 + 8 + lVar5 * 2);
        *(float *)(local_28[0] + lVar5) = (float)*(double *)(lVar4 + lVar5 * 2);
        *(float *)(local_28[0] + 4 + lVar5) = (float)dVar2;
        *(float *)(local_28[0] + 8 + lVar5) = (float)dVar1;
        lVar5 = lVar5 + 0xc;
      } while ((longlong)iVar3 * 0xc != lVar5);
      FUN_140ab2b74(local_28,&local_38,0);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
    if ((longlong *)(param_1 + 0x40) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x40) = local_38;
      *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x4c) = uStack_30._4_4_;
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ab2b74 FUN_140ab2b74 body=1245 status=ok
// SIG undefined FUN_140ab2b74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ab2b74(undefined8 *param_1,longlong *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 **local_68;
  undefined1 local_59;
  undefined4 *local_58;
  undefined1 *puStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_3 == 0) {
    if (DAT_14c75f014 == '\0') {
LAB_140ab2d00:
      local_e8 = 0;
      uStack_e4 = 0;
      iStack_e0 = 0;
      uStack_dc = 0;
      uVar13 = FUN_146cb8794(param_1);
      local_58 = (undefined4 *)CONCAT44(local_58._4_4_,uVar13);
      FUN_142991572(param_1,&local_e8);
      iVar7 = iStack_e0 * 3;
      if (iStack_e0 < 0) goto LAB_140ab304b;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        FUN_14481578e(param_2);
      }
      puVar10 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
      if (iStack_e0 != 0) {
        puVar9 = puVar10 + (longlong)iStack_e0 * 3;
        do {
          uVar13 = *puVar10;
          uVar1 = puVar10[1];
          uVar2 = puVar10[2];
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_2,iVar7);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = uVar13;
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_2,iVar7);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = uVar1;
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_2,iVar7);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = uVar2;
          puVar10 = puVar10 + 3;
        } while (puVar10 != puVar9);
        puVar10 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
      }
      goto joined_r0x000140ab2cbf;
    }
  }
  else if ((param_3 & 0xfffffffe) != 2) goto LAB_140ab2d00;
  uVar4 = local_e8 >> 8;
  local_e8 = local_e8 & 0xffffff00;
  uStack_e4 = 0;
  iStack_e0 = -1;
  uStack_dc = 0xff7fffff;
  uStack_d8 = 0xff7fffff;
  local_d0 = 0;
  local_c4 = DAT_14c846330;
  local_bc = DAT_14c846338;
  local_b8 = _DAT_14c84637c;
  local_b0 = DAT_14c846384;
  local_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  local_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_7c = 0;
  if (param_3 == 0) {
    if ((DAT_14c75f014 == '\x01') && (DAT_14c992ba0 != '\0')) goto LAB_140ab2df8;
LAB_140ab2c3c:
    bVar3 = false;
  }
  else {
    if (param_3 != 3) goto LAB_140ab2c3c;
LAB_140ab2df8:
    local_e8 = CONCAT31((int3)uVar4,1);
    uStack_e4 = 0x322bcc77;
    bVar3 = true;
  }
  local_f8 = *param_1;
  local_78 = &local_f8;
  local_f0 = *(undefined4 *)(param_1 + 1);
  puStack_50 = &local_59;
  local_58 = (undefined4 *)&LAB_142995734;
  local_68 = &local_78;
  local_70 = (undefined8 *)&LAB_142995738;
  cVar5 = FUN_140ab3054(&local_e8,local_f0,&local_70);
  if (cVar5 != '\0') {
    if (bVar3) {
      local_58 = (undefined4 *)0x0;
      puStack_50 = (undefined1 *)0x0;
      local_108 = &LAB_14299575a;
      local_110 = 0;
      local_118 = 0x3f800000;
      local_100 = &local_70;
      local_70 = param_1;
      FUN_146babade(&local_e8,&local_58,&local_108,0x3f800000);
      uVar8 = 0;
      if ((longlong)(int)puStack_50 != 0) {
        puVar9 = local_58 + (longlong)(int)puStack_50 * 0xc;
        puVar10 = local_58;
        do {
          iVar6 = puVar10[10];
          iVar7 = iVar6 * 3 + (int)param_2[1] + -6;
          if (iVar7 < 0) goto LAB_140ab304b;
          if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
            FUN_14481578e(param_2);
            iVar6 = puVar10[10];
          }
          if (2 < iVar6) {
            lVar12 = 2;
            do {
              puVar11 = *(undefined4 **)(puVar10 + 8);
              if (*(undefined4 **)(puVar10 + 8) == (undefined4 *)0x0) {
                puVar11 = puVar10;
              }
              iVar7 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
                FUN_1446f48e2(param_2,iVar7);
              }
              *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = *puVar11;
              puVar11 = *(undefined4 **)(puVar10 + 8);
              if (*(undefined4 **)(puVar10 + 8) == (undefined4 *)0x0) {
                puVar11 = puVar10;
              }
              iVar7 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
                FUN_1446f48e2(param_2,iVar7);
              }
              *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = puVar11[lVar12];
              puVar11 = *(undefined4 **)(puVar10 + 8);
              if (*(undefined4 **)(puVar10 + 8) == (undefined4 *)0x0) {
                puVar11 = puVar10;
              }
              iVar7 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
                FUN_1446f48e2(param_2,iVar7);
              }
              *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = puVar11[lVar12 + -1];
              lVar12 = lVar12 + 1;
            } while (lVar12 < (int)puVar10[10]);
          }
          puVar10 = puVar10 + 0xc;
        } while (puVar10 != puVar9);
        uVar8 = (ulonglong)puStack_50 & 0xffffffff;
      }
      FUN_146bf47ee(local_58,uVar8);
      if (local_58 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar7 = iStack_90 * 3;
      if (iStack_90 < 0) {
LAB_140ab304b:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        FUN_14481578e(param_2);
      }
      if (iStack_90 != 0) {
        puVar9 = (undefined4 *)CONCAT44(uStack_94,uStack_98);
        puVar10 = puVar9 + (longlong)iStack_90 * 3;
        do {
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_2,iVar7);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = *puVar9;
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_2,iVar7);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = puVar9[2];
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_1446f48e2(param_2,iVar7);
          }
          *(undefined4 *)(*param_2 + (longlong)iVar7 * 4) = puVar9[1];
          puVar9 = puVar9 + 3;
        } while (puVar9 != puVar10);
      }
    }
  }
  if (CONCAT44(uStack_84,uStack_88) != 0) {
    FUN_1400020a8();
  }
  puVar10 = (undefined4 *)CONCAT44(uStack_94,uStack_98);
joined_r0x000140ab2cbf:
  if (puVar10 != (undefined4 *)0x0) {
    FUN_1400020a8(puVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ab3054 FUN_140ab3054 body=1847 status=ok
// SIG undefined FUN_140ab3054(void)

ulonglong FUN_140ab3054(char *param_1,int param_2,float *param_3,undefined8 *param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  code *pcVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  double dVar17;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  float local_1c0;
  float local_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_164 [3];
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  pcVar1 = param_1 + 0x50;
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_146be7820(pcVar1,0);
  }
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  local_138 = *param_4;
  local_148 = *param_3;
  fStack_144 = param_3[1];
  fStack_140 = param_3[2];
  fStack_13c = param_3[3];
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0.0;
  fStack_a4 = 0.0;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0.0;
  fStack_130 = (float)param_4[1];
  uStack_12c = (undefined4)((ulonglong)param_4[1] >> 0x20);
  local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,0x34000000);
  FUN_140ab378c(&local_b8,param_2);
  *(int *)(param_1 + 0x20) = (int)local_b8;
  if ((int)local_b8 < 3) {
    if ((int)local_b8 == 2) {
      *(float *)(param_1 + 0x44) = local_78;
      *(undefined8 *)(param_1 + 0x3c) = uStack_80;
      *(float *)(param_1 + 0x48) =
           local_78 * fStack_9c + (float)uStack_80 * fStack_a4 + uStack_80._4_4_ * fStack_a0;
    }
    else if ((int)local_b8 == 1) {
      fStack_130 = fStack_9c;
      local_138 = CONCAT44(fStack_a0,fStack_a4);
      uStack_12c = (undefined4)local_98;
      uStack_128 = (undefined4)((ulonglong)local_98 >> 0x20);
      uStack_124 = (undefined4)uStack_90;
      *(undefined8 *)(param_1 + 0x24) = local_138;
      *(float *)(param_1 + 0x2c) = fStack_9c;
      *(undefined4 *)(param_1 + 0x30) = uStack_12c;
      *(ulonglong *)(param_1 + 0x34) = CONCAT44((undefined4)uStack_90,uStack_128);
    }
  }
  else {
    local_148 = local_a8;
    (**(code **)param_3)(&local_138,*(undefined8 *)(param_3 + 2));
    local_158 = uStack_b0._4_4_;
    (**(code **)param_3)(&local_148,*(undefined8 *)(param_3 + 2));
    local_164[0] = (undefined4)uStack_b0;
    (**(code **)param_3)(&local_158,*(undefined8 *)(param_3 + 2));
    local_14c = local_b8._4_4_;
    (**(code **)param_3)(local_164,*(undefined8 *)(param_3 + 2));
    fVar16 = (float)FUN_146ba99e6(local_164,&local_158,&local_148,&local_138);
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      local_1ac = local_a8;
      uVar7 = (undefined4)uStack_b0;
      uVar8 = uStack_b0._4_4_;
      iVar2 = *(int *)(param_1 + 0x58);
      lVar14 = (longlong)iVar2;
      *(uint *)(param_1 + 0x58) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
        FUN_146bd78c8(pcVar1,iVar2);
      }
      fVar16 = local_a8;
      lVar3 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(lVar3 + lVar14 * 0xc) = uVar7;
      *(undefined4 *)(lVar3 + 4 + lVar14 * 0xc) = uVar8;
      *(float *)(lVar3 + 8 + lVar14 * 0xc) = local_1ac;
      uVar7 = local_b8._4_4_;
      local_1ac = uStack_b0._4_4_;
      iVar2 = *(int *)(param_1 + 0x58);
      lVar14 = (longlong)iVar2;
      *(uint *)(param_1 + 0x58) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
        FUN_146bd78c8(pcVar1,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(lVar3 + lVar14 * 0xc) = uVar7;
      *(float *)(lVar3 + 4 + lVar14 * 0xc) = fVar16;
      *(float *)(lVar3 + 8 + lVar14 * 0xc) = local_1ac;
      local_1ac = local_a8;
      uVar7 = local_b8._4_4_;
      uVar8 = (undefined4)uStack_b0;
      iVar2 = *(int *)(param_1 + 0x58);
      lVar14 = (longlong)iVar2;
      *(uint *)(param_1 + 0x58) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
        FUN_146bd78c8(pcVar1,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(lVar3 + lVar14 * 0xc) = uVar7;
      *(undefined4 *)(lVar3 + 4 + lVar14 * 0xc) = uVar8;
      *(float *)(lVar3 + 8 + lVar14 * 0xc) = local_1ac;
      uVar7 = local_b8._4_4_;
      local_1ac = (float)(undefined4)uStack_b0;
      uVar8 = uStack_b0._4_4_;
      iVar2 = *(int *)(param_1 + 0x58);
      lVar14 = (longlong)iVar2;
      *(uint *)(param_1 + 0x58) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
        FUN_146bd78c8(pcVar1,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x50);
      *(undefined4 *)(lVar3 + lVar14 * 0xc) = uVar7;
      *(undefined4 *)(lVar3 + 4 + lVar14 * 0xc) = uVar8;
      *(float *)(lVar3 + 8 + lVar14 * 0xc) = local_1ac;
      param_1[0x4c] = '\x04';
      param_1[0x4d] = '\0';
      param_1[0x4e] = '\0';
      param_1[0x4f] = '\0';
      iVar2 = *(int *)(param_1 + 8);
      iVar13 = param_2;
      if (0 < iVar2) {
        iVar13 = iVar2;
      }
      fVar16 = *(float *)(param_1 + 4);
      local_f8 = 0;
      local_f0 = 0;
      local_138 = 0;
      fStack_130 = 0.0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_ec = 0xffffffff00000080;
      local_e4 = 0;
      local_d8 = 0;
      local_d0 = 0;
      dVar17 = (double)*(float *)(param_1 + 0xc);
      if (0.0 < *(float *)(param_1 + 0x10)) {
        local_158 = local_b8._4_4_;
        (**(code **)param_3)(&local_148,*(undefined8 *)(param_3 + 2));
        local_164[0] = (undefined4)uStack_b0;
        (**(code **)param_3)(&local_158,*(undefined8 *)(param_3 + 2));
        dVar6 = (double)*(float *)(param_1 + 0x10) *
                (double)SQRT((fStack_140 - local_150) * (fStack_140 - local_150) +
                             (local_148 - local_158) * (local_148 - local_158) +
                             (fStack_144 - local_154) * (fStack_144 - local_154));
        uVar15 = -(ulonglong)(dVar6 <= dVar17);
        dVar17 = (double)(uVar15 & (ulonglong)dVar17 | ~uVar15 & (ulonglong)dVar6);
      }
      local_c8 = dVar17;
      FUN_146ba9b1c(&local_138,pcVar1);
      local_178 = *param_4;
      local_1c8 = &local_178;
      local_170 = param_4[1];
      local_188 = *(undefined8 *)param_3;
      local_180 = *(undefined8 *)(param_3 + 2);
      FUN_146ba9d72(&local_138,pcVar1,param_2);
      iVar10 = *(int *)(param_1 + 0x4c);
      if (iVar10 < iVar13) {
        do {
          pcVar4 = *(char **)(param_1 + 0x18);
          if ((iVar10 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar10 * 0x40000000) < 0x28f5c29 &&
              pcVar4 != (char *)0x0) {
            if (*pcVar4 == '\0') {
              pcVar5 = *(code **)(pcVar4 + 0x70);
              plVar12 = (longlong *)(pcVar4 + 0x90);
              if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
                plVar12 = *(longlong **)(pcVar4 + 0x80);
              }
              uVar11 = (**(code **)(*plVar12 + 8))();
              cVar9 = (*pcVar5)(uVar11);
              *pcVar4 = cVar9;
              if (cVar9 == '\0') goto LAB_140ab368d;
            }
            uVar15 = 0;
            goto LAB_140ab3776;
          }
LAB_140ab368d:
          FUN_146baa114(&local_138,&local_148,0 < iVar2);
          if (local_148 == -NAN) break;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          local_198 = *(undefined8 *)param_3;
          local_190 = *(undefined8 *)(param_3 + 2);
          local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,fStack_144);
          local_1c0 = fVar16 * fVar16;
          cVar9 = FUN_146baa30a(&local_138,pcVar1,&local_198);
          if (cVar9 == '\0') {
            local_1a8 = *(undefined8 *)param_3;
            local_1a0 = *(undefined8 *)(param_3 + 2);
            FUN_146baaba2(&local_138,CONCAT44(fStack_144,local_148),&local_1a8);
          }
          iVar10 = *(int *)(param_1 + 0x4c);
        } while (iVar10 < iVar13);
      }
      uVar15 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      if ((*param_1 == '\x01') && (param_1 + 0x60 != (char *)&local_138)) {
        if (*(longlong *)(param_1 + 0x60) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(param_1 + 0x60) = local_138;
        local_138 = 0;
        *(float *)(param_1 + 0x68) = fStack_130;
        *(undefined4 *)(param_1 + 0x6c) = uStack_12c;
        fStack_130 = 0.0;
        uStack_12c = 0;
      }
LAB_140ab3776:
      FUN_146baac38(&local_138);
      goto LAB_140ab3177;
    }
    *(float *)(param_1 + 0x44) = local_78;
    *(undefined8 *)(param_1 + 0x3c) = uStack_80;
    *(float *)(param_1 + 0x48) =
         local_78 * fStack_9c + (float)uStack_80 * fStack_a4 + uStack_80._4_4_ * fStack_a0;
    param_1[0x20] = '\x02';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
  }
  uVar15 = 0;
LAB_140ab3177:
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ab378c FUN_140ab378c body=1941 status=ok
// SIG undefined FUN_140ab378c(void)

void FUN_140ab378c(undefined4 *param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  float fVar7;
  float *pfVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_168 [40];
  undefined8 *local_140;
  undefined4 *local_138;
  float local_130 [4];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c [7];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_168;
  if (0 < (int)param_2) {
    fVar14 = 0.0;
    local_140 = param_4;
    local_138 = param_1;
    do {
      local_10c[3] = fVar14;
      cVar6 = (*(code *)*local_140)(local_140[1],local_130 + 0xc);
      if (cVar6 != '\0') {
        local_10c[0] = fVar14;
        (*(code *)*param_3)(local_130 + 0xc,param_3[1],local_130 + 9);
        local_10c[0] = fVar14;
        (*(code *)*param_3)(local_130 + 0xc,param_3[1],local_130 + 9);
        local_118 = fVar14;
        (*(code *)*param_3)(local_130 + 9,param_3[1],local_130 + 6);
        local_118 = fVar14;
        local_114 = fVar14;
        local_110 = fVar14;
        local_130[3] = fVar14;
        local_120 = fVar14;
        local_11c = fVar14;
        fVar15 = (float)((int)fVar14 + 1);
        if ((int)fVar15 < (int)param_2) {
          do {
            local_130[0] = fVar15;
            cVar6 = (*(code *)*local_140)(local_140[1],local_130);
            if (cVar6 != '\0') {
              lVar13 = 0;
              lVar12 = 0;
              do {
                local_10c[6] = fVar15;
                (*(code *)*param_3)(local_130,param_3[1],local_130 + 0xf);
                fVar7 = *(float *)((longlong)local_130 + lVar13);
                if (fVar7 < *(float *)((longlong)local_130 + lVar13 + 0x30)) {
                  pfVar8 = local_130 + lVar12 + 0xc;
                  pfVar10 = local_130 + 6;
LAB_140ab3917:
                  *pfVar8 = fVar7;
                  *(float *)((longlong)pfVar10 + lVar13) = fVar15;
                }
                else {
                  pfVar10 = (float *)((longlong)local_130 + lVar13 + 0x24);
                  if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
                    pfVar8 = (float *)((longlong)local_130 + lVar13 + 0x24);
                    pfVar10 = local_130 + 3;
                    goto LAB_140ab3917;
                  }
                }
                lVar12 = lVar12 + 1;
                lVar13 = lVar13 + 4;
              } while (lVar13 != 0xc);
            }
            fVar15 = (float)((int)fVar15 + 1);
          } while (fVar15 != param_2);
        }
        puVar5 = local_138;
        puVar4 = local_140;
        fVar15 = local_10c[0] - local_10c[3];
        uVar9 = 0;
        uVar11 = 1;
        do {
          if (fVar15 < local_130[uVar11 + 9] - local_130[uVar11 + 0xc]) {
            uVar9 = uVar11 & 0xffffffff;
            fVar15 = local_130[uVar11 + 9] - local_130[uVar11 + 0xc];
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != 3);
        fVar7 = local_130[(longlong)(int)uVar9 + 6];
        local_138[1] = fVar7;
        local_138[2] = local_130[(longlong)(int)uVar9 + 3];
        if (fVar15 <= param_5) {
          *local_138 = 0;
          local_138[2] = fVar7;
LAB_140ab3ed5:
          puVar5[3] = fVar7;
        }
        else {
          local_10c[6] = fVar7;
          (*(code *)*param_3)(local_130,param_3[1],local_130 + 0xf);
          puVar5[7] = local_130[2];
          *(ulonglong *)(puVar5 + 5) = CONCAT44(local_130[1],local_130[0]);
          local_10c[6] = (float)puVar5[2];
          (*(code *)*param_3)(local_130,param_3[1],local_130 + 0xf);
          fVar7 = (float)puVar5[7];
          fVar17 = local_130[2] - fVar7;
          fVar2 = (float)puVar5[5];
          fVar3 = (float)puVar5[6];
          fVar24 = local_130[1] - fVar3;
          fVar23 = local_130[0] - fVar2;
          fVar18 = SQRT(fVar17 * fVar17 + fVar23 * fVar23 + fVar24 * fVar24);
          fVar22 = 0.0;
          fVar20 = 1.0 / fVar18;
          if (0.0 < fVar18) {
            fVar23 = fVar23 * fVar20;
            fVar24 = fVar24 * fVar20;
          }
          else {
            fVar23 = 0.0;
            fVar24 = 0.0;
          }
          fVar17 = (float)(-(uint)(0.0 < fVar18) & (uint)(fVar17 * fVar20));
          puVar5[8] = fVar23;
          puVar5[9] = fVar24;
          puVar5[10] = fVar17;
          if ((int)fVar14 < (int)param_2) {
            fVar18 = fVar14;
            do {
              local_130[0] = fVar18;
              cVar6 = (*(code *)*puVar4)(puVar4[1],local_130);
              if (cVar6 != '\0') {
                local_10c[6] = fVar18;
                (*(code *)*param_3)(local_130,param_3[1],local_130 + 0xf);
                fVar20 = (local_130[2] - fVar7) * fVar17 +
                         (local_130[0] - fVar2) * fVar23 + (local_130[1] - fVar3) * fVar24;
                fVar19 = (fVar17 * fVar20 + fVar7) - local_130[2];
                fVar21 = (fVar24 * fVar20 + fVar3) - local_130[1];
                fVar20 = (fVar20 * fVar23 + fVar2) - local_130[0];
                fVar20 = fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21;
                if (fVar22 < fVar20) {
                  puVar5[3] = fVar18;
                  fVar22 = fVar20;
                }
              }
              fVar18 = (float)((int)fVar18 + 1);
            } while (param_2 != fVar18);
          }
          if (fVar22 < 0.0) {
            fVar22 = sqrtf(fVar22);
          }
          else {
            fVar22 = SQRT(fVar22);
          }
          fVar15 = fVar15 * param_5;
          if (fVar22 <= fVar15) {
LAB_140ab3ecc:
            *puVar5 = 1;
            fVar7 = (float)puVar5[2];
            goto LAB_140ab3ed5;
          }
          local_10c[6] = (float)puVar5[3];
          (*(code *)*param_3)(local_130,param_3[1]);
          fVar7 = (float)puVar5[7];
          fVar20 = local_130[2] - fVar7;
          fVar2 = (float)puVar5[5];
          fVar3 = (float)puVar5[6];
          fVar23 = local_130[1] - fVar3;
          fVar24 = local_130[0] - fVar2;
          fVar22 = (float)puVar5[8];
          fVar17 = (float)puVar5[9];
          fVar18 = (float)puVar5[10];
          fVar19 = fVar18 * fVar20 + fVar22 * fVar24 + fVar23 * fVar17;
          fVar24 = fVar24 - fVar19 * fVar22;
          puVar5[0xb] = fVar24;
          fVar23 = fVar23 - fVar17 * fVar19;
          puVar5[0xc] = fVar23;
          fVar20 = fVar20 - fVar18 * fVar19;
          puVar5[0xd] = fVar20;
          fVar19 = fVar20 * fVar20 + fVar24 * fVar24 + fVar23 * fVar23;
          if (fVar19 <= param_5) goto LAB_140ab3ecc;
          fVar19 = 1.0 / SQRT(fVar19);
          fVar24 = fVar24 * fVar19;
          puVar5[0xb] = fVar24;
          fVar23 = fVar23 * fVar19;
          puVar5[0xc] = fVar23;
          fVar20 = fVar20 * fVar19;
          puVar5[0xd] = fVar20;
          fVar19 = fVar22 * fVar23 - fVar24 * fVar17;
          fVar24 = fVar18 * fVar24 - fVar20 * fVar22;
          fVar17 = fVar17 * fVar20 - fVar23 * fVar18;
          puVar5[0xe] = fVar17;
          puVar5[0xf] = fVar24;
          puVar5[0x10] = fVar19;
          fVar22 = fVar19 * fVar19 + fVar17 * fVar17 + fVar24 * fVar24;
          if (fVar22 <= param_5) goto LAB_140ab3ecc;
          fVar22 = 1.0 / SQRT(fVar22);
          fVar17 = fVar17 * fVar22;
          puVar5[0xe] = fVar17;
          fVar24 = fVar24 * fVar22;
          puVar5[0xf] = fVar24;
          fVar19 = fVar19 * fVar22;
          puVar5[0x10] = fVar19;
          if ((int)fVar14 < (int)param_2) {
            fVar22 = 0.0;
            fVar18 = 0.0;
            do {
              local_130[0] = fVar14;
              cVar6 = (*(code *)*puVar4)(puVar4[1],local_130);
              if (cVar6 != '\0') {
                local_10c[6] = fVar14;
                (*(code *)*param_3)(local_130,param_3[1],local_130 + 0xf);
                fVar23 = (local_130[2] * fVar19 + local_130[0] * fVar17 + local_130[1] * fVar24) -
                         (fVar7 * fVar19 + fVar2 * fVar17 + fVar3 * fVar24);
                uVar16 = -(uint)(-fVar23 <= fVar23);
                fVar20 = (float)(~uVar16 & (uint)-fVar23 | uVar16 & (uint)fVar23);
                if (fVar18 < fVar20) {
                  fVar22 = (float)(-(uint)(0.0 < fVar23) & 0x3f800000 |
                                  ~-(uint)(0.0 < fVar23) & -(uint)(fVar23 < 0.0) & 0xbf800000);
                  puVar5[4] = fVar14;
                  fVar18 = fVar20;
                }
              }
              fVar14 = (float)((int)fVar14 + 1);
            } while (param_2 != fVar14);
            if (fVar15 < fVar18) {
              if (0.0 < fVar22) {
                puVar1 = (ulonglong *)(puVar5 + 3);
                *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
              }
LAB_140ab3f17:
              *puVar5 = 3;
              goto LAB_140ab3dfb;
            }
          }
          else if (fVar15 < 0.0) goto LAB_140ab3f17;
          *puVar5 = 2;
          fVar7 = (float)puVar5[3];
        }
        puVar5[4] = fVar7;
        goto LAB_140ab3dfb;
      }
      fVar14 = (float)((int)fVar14 + 1);
      param_1 = local_138;
    } while (param_2 != fVar14);
  }
  *param_1 = 0;
LAB_140ab3dfb:
  if ((local_f0 ^ (ulonglong)local_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ab3f22 FUN_140ab3f22 body=10521 status=ok
// SIG undefined FUN_140ab3f22(void)

void FUN_140ab3f22(longlong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  uint uVar25;
  longlong *plVar26;
  longlong *plVar27;
  int *piVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong *puVar32;
  ulonglong uVar33;
  longlong *plVar34;
  int iVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  byte bVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_208 [47];
  byte local_1d9;
  longlong *local_1d8;
  uint *local_1d0;
  uint *local_1c8;
  longlong *local_1c0;
  int local_1b4;
  ulonglong *local_1b0;
  uint *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong *local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined8 uStack_170;
  char local_15c [4];
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  uint *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_118;
  int local_110;
  LARGE_INTEGER local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  undefined4 *puStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar30 = param_1[0x40];
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  bVar40 = uVar30 == DAT_14c892fa8 & DAT_14caf2368;
  dVar4 = 0.0;
  if (bVar40 == 1) {
    DAT_14caf2380 = 0.0;
    QueryPerformanceCounter(&local_108);
    dVar4 = (double)local_108.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  cVar8 = (**(code **)(*param_1 + 0x3c0))(param_1);
  if (((cVar8 == '\0') || ((int)param_1[0x20] < 1)) ||
     ((*(byte *)((longlong)param_1 + 0x309) & 0x10) != 0)) {
    cVar8 = (**(code **)(*param_1 + 0x3c0))(param_1);
    if (((cVar8 != '\0') || (param_1[0x1e] == 0)) || (param_1[0x108] == 0)) goto LAB_140ab40ee;
    FUN_1435952a4(param_1);
  }
  else {
    if (param_1[0x108] == 0) {
      (**(code **)(*param_1 + 800))(param_1);
      goto LAB_140ab40ee;
    }
    FUN_1435952a4(param_1);
    if ((longlong)(int)param_1[0x20] != 0) {
      plVar26 = (longlong *)param_1[0x1f];
      plVar34 = plVar26 + (int)param_1[0x20];
      do {
        lVar12 = *plVar26;
        if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x90) != 0)) {
          if (*(longlong **)(lVar12 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar12 + 0x30) + 0xed0))();
          }
          iVar35 = *(int *)(lVar12 + 0x50);
          if ((longlong)iVar35 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x48);
            lVar37 = 0;
            do {
              lVar43 = *(longlong *)(lVar12 + lVar37);
              if ((lVar43 != 0) &&
                 (plVar27 = *(longlong **)(lVar43 + 0x30), plVar27 != (longlong *)0x0)) {
                (**(code **)(*plVar27 + 0xed0))();
              }
              lVar37 = lVar37 + 8;
            } while ((longlong)iVar35 * 8 != lVar37);
          }
        }
        plVar26 = plVar26 + 1;
      } while (plVar26 != plVar34);
    }
  }
  local_108.s.HighPart = param_2;
  local_108.s.LowPart = 2;
  FUN_142a9cafc(param_1[0x108]);
LAB_140ab40ee:
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (param_1[0x1e] == 0) {
    (**(code **)(*param_1 + 0x358))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x360))();
    (**(code **)(*(longlong *)param_1[0x1e] + 0x300))();
  }
  lVar12 = param_1[0x20];
  if ((longlong)(int)lVar12 != 0) {
    lVar37 = param_1[0x1f];
    lVar43 = 0;
    do {
      (**(code **)(**(longlong **)(lVar37 + lVar43) + 0x300))();
      lVar43 = lVar43 + 8;
    } while ((longlong)(int)lVar12 * 8 != lVar43);
  }
  if (param_1[0x2e] != 0) {
    FUN_142b03c24();
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar35 = *(int *)(lVar12 + 0xc60);
  if (((iVar35 != 0x40000002) && (iVar35 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  lVar37 = DAT_14caf2338;
  if (*(char *)((longlong)param_1 + 0x849) == '\0') {
    plVar34 = (longlong *)(lVar12 + 0xc60);
    iVar35 = *(int *)plVar34;
    if (iVar35 == 0x40000002) {
      uVar30 = 0;
    }
    else {
      bVar44 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar35 != 2)) {
        if (iVar35 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          bVar44 = DVar10 == DVar11;
        }
        else {
          bVar44 = false;
        }
      }
      uVar30 = (ulonglong)(bVar44 ^ 1);
    }
    local_1d9 = bVar40;
    if ((*(int *)(lVar37 + uVar30 * 4) == 0) ||
       (puVar15 = (uint *)param_1[0x37], puVar15 == (uint *)0x0)) {
      iVar35 = (int)param_1[0xc9];
      if (iVar35 == 0) {
        uVar30 = 1;
        uVar38 = 0;
        iVar17 = 0;
        iVar31 = 0;
      }
      else {
        puVar15 = (uint *)param_1[200];
        if ((uint *)param_1[200] == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0xc6);
        }
        uVar42 = *puVar15;
        if (uVar42 == 0) {
          iVar31 = iVar35 + 0x1e;
          if (-1 < iVar35 + -1) {
            iVar31 = iVar35 + -1;
          }
          uVar38 = 0;
          uVar30 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar30 = uVar38;
          }
          iVar17 = 0;
          do {
            if (uVar30 == uVar38) goto LAB_140ab5768;
            iVar17 = iVar17 + 0x20;
            uVar42 = puVar15[uVar38 + 1];
            uVar38 = uVar38 + 1;
          } while (uVar42 == 0);
        }
        else {
          uVar38 = 0;
          iVar17 = 0;
        }
        uVar30 = (ulonglong)(-uVar42 & uVar42);
        uVar16 = uVar30 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar35 <= iVar31) {
          iVar31 = iVar35;
        }
      }
      if (iVar31 < iVar35) {
        uVar42 = 0xffffffff;
        do {
          local_108.QuadPart = local_108.QuadPart & 0xffffffffffffff00;
          FUN_1434b4e5a(*(undefined8 *)(param_1[0xc4] + (longlong)iVar31 * 0x10),&local_108);
          if (local_108.s.LowPart._0_1_ == '\0') {
            FUN_140441d4e(param_1 + 0xc4,iVar31);
          }
          uVar42 = uVar42 & ~(uint)uVar30;
          puVar15 = (uint *)param_1[200];
          if ((uint *)param_1[200] == (uint *)0x0) {
            puVar15 = (uint *)(param_1 + 0xc6);
          }
          iVar35 = (int)param_1[0xc9];
          iVar31 = (int)uVar38;
          lVar12 = (longlong)iVar31;
          uVar36 = puVar15[lVar12] & uVar42;
          if (uVar36 == 0) {
            iVar18 = iVar35 + 0x1e;
            if (-1 < iVar35 + -1) {
              iVar18 = iVar35 + -1;
            }
            iVar18 = iVar18 >> 5;
            iVar19 = iVar18;
            if (iVar18 < iVar31) {
              iVar19 = iVar31;
            }
            if (iVar18 <= iVar31) break;
            lVar37 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar36 = puVar15[lVar12 + lVar37 + 1];
              if (uVar36 != 0) break;
              lVar37 = lVar37 + 1;
              if (iVar19 - lVar12 == lVar37) goto LAB_140ab5768;
            }
            uVar38 = (ulonglong)(iVar31 + (int)lVar37 + 1);
            uVar42 = 0xffffffff;
          }
          uVar30 = (ulonglong)(-uVar36 & uVar36);
          uVar16 = uVar30 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        } while (iVar31 < iVar35);
      }
    }
    else {
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2f38,(longlong)(int)puVar15[0x2c] - (longlong)(int)puVar15[0x37]
                   );
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2f40,(longlong)(int)puVar15[0x40] - (longlong)(int)puVar15[0x4b]
                   );
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      local_1a0 = param_1 + 0xc4;
      FUN_1435a82a8(lVar12,DAT_14caf2f48,
                    (longlong)(int)param_1[0xc5] - (longlong)*(int *)((longlong)param_1 + 0x654));
      iVar31 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_108.QuadPart = 0;
      uStack_100 = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      iVar35 = (int)param_1[0xc9];
      local_1d0 = puVar15;
      local_1c0 = plVar34;
      if (iVar35 == 0) {
        uVar30 = 1;
        uVar38 = 0;
        iVar17 = 0;
      }
      else {
        puVar15 = (uint *)param_1[200];
        if ((uint *)param_1[200] == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0xc6);
        }
        uVar42 = *puVar15;
        if (uVar42 == 0) {
          iVar31 = iVar35 + 0x1e;
          if (-1 < iVar35 + -1) {
            iVar31 = iVar35 + -1;
          }
          uVar38 = 0;
          uVar30 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar30 = uVar38;
          }
          iVar31 = 0;
          do {
            if (uVar30 == uVar38) goto LAB_140ab454b;
            iVar31 = iVar31 + 0x20;
            uVar42 = puVar15[uVar38 + 1];
            uVar38 = uVar38 + 1;
          } while (uVar42 == 0);
        }
        else {
          iVar31 = 0;
          uVar38 = 0;
        }
        uVar30 = (ulonglong)(-uVar42 & uVar42);
        uVar16 = uVar30 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar31 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar35 <= iVar17) {
          iVar17 = iVar35;
        }
      }
      if (iVar17 != iVar35) {
        uVar42 = 0xffffffff;
        iVar18 = iVar35;
        do {
          local_158 = *(ulonglong *)(*local_1a0 + (longlong)iVar17 * 0x10);
          if ((*(uint *)(local_158 + 0xc) & 4) != 0) {
            *(uint *)(local_158 + 0xc) = *(uint *)(local_158 + 0xc) & 0xfffffffb;
            FUN_1417e4262(&local_108,&local_b8,&local_158);
            iVar18 = (int)param_1[0xc9];
          }
          uVar42 = uVar42 & ~(uint)uVar30;
          puVar15 = (uint *)param_1[200];
          if ((uint *)param_1[200] == (uint *)0x0) {
            puVar15 = (uint *)(param_1 + 0xc6);
          }
          iVar17 = (int)uVar38;
          lVar12 = (longlong)iVar17;
          uVar36 = puVar15[lVar12] & uVar42;
          if (uVar36 == 0) {
            iVar19 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar19 = iVar18 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar31 = iVar31 + 0x20;
            iVar20 = iVar19;
            if (iVar19 < iVar17) {
              iVar20 = iVar17;
            }
            if (iVar17 < iVar19) {
              lVar37 = 0;
              do {
                uVar36 = puVar15[lVar12 + lVar37 + 1];
                if (uVar36 != 0) {
                  uVar38 = (ulonglong)(iVar17 + (int)lVar37 + 1);
                  uVar42 = 0xffffffff;
                  goto LAB_140ab4683;
                }
                iVar31 = iVar31 + 0x20;
                lVar37 = lVar37 + 1;
              } while (iVar20 - lVar12 != lVar37);
              uVar42 = 0xffffffff;
              lVar12 = (longlong)iVar20;
            }
            uVar38 = lVar12 + 1U & 0xffffffff;
            iVar17 = iVar18;
          }
          else {
LAB_140ab4683:
            uVar30 = (ulonglong)(-uVar36 & uVar36);
            uVar16 = uVar30 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar17 = (iVar31 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar18 <= iVar17) {
              iVar17 = iVar18;
            }
          }
        } while (iVar17 != iVar35);
      }
LAB_140ab454b:
      puVar15 = local_1d0;
      if ((local_1d0[0x2c] != local_1d0[0x37]) || ((int)uStack_100 != local_d4)) {
        cVar8 = (**(code **)(*param_1 + 0x3c0))(param_1);
        lVar12 = DAT_14caf2350;
        local_1b4 = 0;
        if (cVar8 == '\0') {
          iVar35 = (int)*local_1c0;
          if (iVar35 == 0x40000002) {
            uVar30 = 0;
          }
          else {
            bVar44 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar35 != 2)) {
              if (iVar35 == 1) {
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                bVar44 = DVar10 == DVar11;
              }
              else {
                bVar44 = false;
              }
            }
            uVar30 = (ulonglong)(bVar44 ^ 1);
          }
          local_1b4 = *(int *)(lVar12 + uVar30 * 4);
        }
        plVar34 = (longlong *)0x0;
        puVar32 = (ulonglong *)(puVar15 + 0x2a);
        local_1c8 = puVar15 + 0x3e;
        local_178 = 0;
        uStack_170 = 0;
        local_1a8 = puVar15 + 0x2e;
        local_188 = (longlong *)0x0;
        uStack_180 = 0;
        uVar42 = puVar15[0x34];
        local_1b0 = puVar32;
        if (uVar42 == 0) {
          uVar30 = 1;
          iVar35 = 0;
          uVar36 = 0;
        }
        else {
          puVar21 = *(uint **)(puVar15 + 0x32);
          if (*(uint **)(puVar15 + 0x32) == (uint *)0x0) {
            puVar21 = local_1a8;
          }
          uVar36 = *puVar21;
          if (uVar36 == 0) {
            iVar35 = uVar42 + 0x1e;
            if (-1 < (int)(uVar42 - 1)) {
              iVar35 = uVar42 - 1;
            }
            plVar34 = (longlong *)0x0;
            plVar26 = (longlong *)(ulonglong)(uint)(iVar35 >> 5);
            if (iVar35 >> 5 < 1) {
              plVar26 = plVar34;
            }
            iVar35 = 0;
            do {
              if (plVar26 == plVar34) goto LAB_140ab4b0d;
              iVar35 = iVar35 + 0x20;
              uVar36 = puVar21[(longlong)plVar34 + 1];
              plVar34 = (longlong *)((longlong)plVar34 + 1);
            } while (uVar36 == 0);
          }
          else {
            plVar34 = (longlong *)0x0;
            iVar35 = 0;
          }
          uVar30 = (ulonglong)(-uVar36 & uVar36);
          uVar38 = uVar30 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar36 = (iVar35 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar42 <= (int)uVar36) {
            uVar36 = uVar42;
          }
        }
        if ((int)uVar36 < (int)uVar42) {
          uVar42 = 0xffffffff;
          iVar31 = 0;
          do {
            local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,iVar35);
            local_b8 = *(ulonglong *)(*puVar32 + (longlong)(int)uVar36 * 0x10);
            local_1c0 = plVar34;
            lVar12 = FUN_140634914(param_1[0x37],&local_b8,0);
            uVar38 = local_b8;
            if (lVar12 != 0) {
              if ((DAT_14c75f435 == '\x01') &&
                 (puVar13 = (undefined8 *)FUN_1435b1e36(param_1[0x37],local_b8),
                 puVar13 != (undefined8 *)0x0)) {
                uVar14 = FUN_141652bd0(local_1c8,(int)(uVar38 >> 0x20) * 0x17 + (int)uVar38);
                local_198 = *puVar13;
                local_190 = *(undefined4 *)(puVar13 + 1);
                FUN_1417e32a4(uVar14,&local_198);
                local_158 = local_b8;
                FUN_140cf1248(param_1[0x37] + 0x3d0,&local_158);
              }
              uVar38 = uStack_180;
              lVar37 = (longlong)(int)uStack_180;
              uVar36 = (int)uStack_180 + 1;
              uStack_180 = CONCAT44(uStack_180._4_4_,uVar36);
              if (uStack_180._4_4_ < uVar36) {
                FUN_140b3b51e(&local_188,uVar38 & 0xffffffff);
              }
              local_188[lVar37] = local_b8;
              puVar32 = local_1b0;
            }
            cVar8 = FUN_1408c2550(param_1[0x37],&local_b8);
            FUN_140646052(puVar32);
            puVar15 = local_1a8;
            if ((lVar12 == 0) && (cVar8 == '\0')) {
              lVar12 = param_1[0x37];
              lVar37 = FUN_1400fcfc4(lVar12);
              if ((lVar37 == 0) ||
                 ((((uVar38 = *(ulonglong *)(lVar37 + 8), local_158 = uVar38, DAT_14c761628 == 0 ||
                    (uVar38 < 2)) || (cVar8 = FUN_1417e4b24(lVar12), cVar8 != '\0')) ||
                  ((lVar12 = FUN_1400fcfc4(param_1[0x37]), lVar12 != 0 &&
                   ((*(byte *)(lVar12 + 0x28) & 4) != 0)))))) {
                if (local_b8 != 0) {
                  lVar12 = (longlong)(int)uStack_170;
                  uVar36 = (int)uStack_170 + 1;
                  uStack_170 = CONCAT44(uStack_170._4_4_,uVar36);
                  if (uStack_170._4_4_ < uVar36) {
                    FUN_140b3b51e(&local_178);
                  }
                  *(ulonglong *)(local_178 + lVar12 * 8) = local_b8;
                }
              }
              else {
                uVar14 = FUN_141652bd0(local_1c8,(int)(uVar38 >> 0x20) * 0x17 + (int)uVar38,
                                       &local_158);
                FUN_140325a06(uVar14,local_15c,&local_b8,0);
              }
            }
            iVar31 = iVar31 + 1;
            if (local_1b4 <= iVar31 && 0 < local_1b4) break;
            uVar42 = uVar42 & ~(uint)uVar30;
            puVar21 = *(uint **)(local_1d0 + 0x32);
            if (*(uint **)(local_1d0 + 0x32) == (uint *)0x0) {
              puVar21 = puVar15;
            }
            uVar41 = local_1d0[0x34];
            iVar17 = (int)local_1c0;
            lVar12 = (longlong)iVar17;
            uVar36 = puVar21[lVar12] & uVar42;
            plVar34 = local_1c0;
            iVar35 = (int)local_1d8;
            if (uVar36 == 0) {
              iVar18 = uVar41 + 0x1e;
              if (-1 < (int)(uVar41 - 1)) {
                iVar18 = uVar41 - 1;
              }
              iVar18 = iVar18 >> 5;
              iVar19 = iVar18;
              if (iVar18 < iVar17) {
                iVar19 = iVar17;
              }
              if (iVar18 <= iVar17) break;
              lVar37 = 0;
              while( true ) {
                iVar35 = iVar35 + 0x20;
                uVar36 = puVar21[lVar12 + lVar37 + 1];
                if (uVar36 != 0) break;
                lVar37 = lVar37 + 1;
                if (iVar19 - lVar12 == lVar37) goto LAB_140ab4b0d;
              }
              plVar34 = (longlong *)(ulonglong)(iVar17 + (int)lVar37 + 1);
              uVar42 = 0xffffffff;
            }
            uVar30 = (ulonglong)(-uVar36 & uVar36);
            uVar38 = uVar30 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar38 != 0) {
              for (; uVar38 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar36 = (iVar35 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          } while ((int)uVar36 < (int)uVar41);
        }
LAB_140ab4b0d:
        puVar15 = local_1d0;
        if ((longlong)(int)uStack_180 != 0) {
          plVar34 = local_188 + (int)uStack_180;
          puVar21 = local_1d0 + 0x4c;
          plVar26 = local_188;
          puVar23 = local_1c8;
          do {
            if (puVar15[0x40] != puVar15[0x4b]) {
              lVar12 = *plVar26;
              puVar22 = *(uint **)(puVar15 + 0x4e);
              if (*(uint **)(puVar15 + 0x4e) == (uint *)0x0) {
                puVar22 = puVar21;
              }
              uVar42 = puVar22[puVar15[0x50] - 1 &
                               (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17];
              if (uVar42 != 0xffffffff) {
                do {
                  lVar37 = *(longlong *)puVar23 + (longlong)(int)uVar42 * 0x60;
                  if (*(longlong *)(*(longlong *)puVar23 + (longlong)(int)uVar42 * 0x60) == lVar12)
                  {
                    if ((lVar37 != -8 && lVar37 != 0) &&
                       (FUN_1403257c8(local_1b0), puVar23 = local_1c8,
                       puVar15[0x40] != puVar15[0x4b])) {
                      lVar12 = *plVar26;
                      puVar22 = *(uint **)(puVar15 + 0x4e);
                      if (*(uint **)(puVar15 + 0x4e) == (uint *)0x0) {
                        puVar22 = puVar21;
                      }
                      uVar42 = puVar22[(longlong)
                                       ((int)((ulonglong)lVar12 >> 0x20) * 0x17 + (int)lVar12) &
                                       (longlong)(int)puVar15[0x50] - 1U];
                      if (uVar42 != 0xffffffff) {
                        lVar37 = *(longlong *)local_1c8;
                        goto LAB_140ab4c31;
                      }
                    }
                    break;
                  }
                  uVar42 = *(uint *)(lVar37 + 0x58);
                } while (uVar42 != 0xffffffff);
              }
            }
LAB_140ab4ca6:
            plVar26 = plVar26 + 1;
          } while (plVar26 != plVar34);
        }
        puVar21 = local_1a8;
        if ((int)uStack_170 != 0) {
          if (puVar15[0x37] != 0) {
            local_98 = (uint *)0x0;
            uStack_90 = 0;
            local_b8 = 0;
            puStack_b0 = (undefined4 *)0x0;
            uStack_8c = 0x80;
            uStack_88 = 0xffffffff;
            uStack_84 = 0;
            iVar35 = puVar15[0x2c] - puVar15[0x37];
            if (iVar35 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar35);
            }
            if (iVar35 != 0) {
              FUN_14474875a(&local_b8,iVar35);
            }
            uStack_88 = 0xffffffff;
            uStack_84 = 0;
            uVar42 = iVar35 + 0x1fU & 0xffffffe0;
            uStack_90 = 0;
            if (((int)uStack_8c < (int)uVar42) || (0x80 < (int)uStack_8c)) {
              uStack_8c = 0x80;
              if (0x80 < (int)uVar42) {
                uStack_8c = uVar42;
              }
              FUN_1446efbd8(&local_a8,0);
            }
            uVar42 = puVar15[0x34];
            if (uVar42 == 0) {
              uVar30 = 0;
              uVar38 = 1;
              uVar36 = 0;
              iVar35 = 0;
            }
            else {
              puVar23 = *(uint **)(puVar15 + 0x32);
              if (*(uint **)(puVar15 + 0x32) == (uint *)0x0) {
                puVar23 = puVar21;
              }
              uVar36 = *puVar23;
              if (uVar36 == 0) {
                iVar35 = uVar42 + 0x1e;
                if (-1 < (int)(uVar42 - 1)) {
                  iVar35 = uVar42 - 1;
                }
                uVar30 = 0;
                uVar38 = (ulonglong)(uint)(iVar35 >> 5);
                if (iVar35 >> 5 < 1) {
                  uVar38 = uVar30;
                }
                iVar35 = 0;
                do {
                  if (uVar38 == uVar30) goto LAB_140ab4e0b;
                  iVar35 = iVar35 + 0x20;
                  uVar36 = puVar23[uVar30 + 1];
                  uVar30 = uVar30 + 1;
                } while (uVar36 == 0);
              }
              else {
                uVar30 = 0;
                iVar35 = 0;
              }
              uVar38 = (ulonglong)(-uVar36 & uVar36);
              uVar16 = uVar38 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              uVar36 = (iVar35 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
              if ((int)uVar42 <= (int)uVar36) {
                uVar36 = uVar42;
              }
            }
            if ((int)uVar36 < (int)uVar42) {
              uVar42 = 0xffffffff;
              do {
                FUN_140325bc2(&local_b8,&local_158);
                puVar1 = (undefined4 *)
                         (*(longlong *)(local_1d0 + 0x2a) + (longlong)(int)uVar36 * 0x10);
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                *uStack_150 = *puVar1;
                uStack_150[1] = uVar5;
                uStack_150[2] = uVar6;
                uStack_150[3] = uVar7;
                uVar42 = ~(uint)uVar38 & uVar42;
                puVar15 = *(uint **)(local_1d0 + 0x32);
                if (*(uint **)(local_1d0 + 0x32) == (uint *)0x0) {
                  puVar15 = local_1a8;
                }
                uVar41 = local_1d0[0x34];
                iVar31 = (int)uVar30;
                lVar12 = (longlong)iVar31;
                uVar36 = puVar15[lVar12] & uVar42;
                if (uVar36 == 0) {
                  iVar17 = uVar41 + 0x1e;
                  if (-1 < (int)(uVar41 - 1)) {
                    iVar17 = uVar41 - 1;
                  }
                  iVar17 = iVar17 >> 5;
                  iVar18 = iVar17;
                  if (iVar17 < iVar31) {
                    iVar18 = iVar31;
                  }
                  if (iVar17 <= iVar31) break;
                  lVar37 = 0;
                  while( true ) {
                    iVar35 = iVar35 + 0x20;
                    uVar36 = puVar15[lVar12 + lVar37 + 1];
                    if (uVar36 != 0) break;
                    lVar37 = lVar37 + 1;
                    if (iVar18 - lVar12 == lVar37) goto LAB_140ab4e0b;
                  }
                  uVar30 = (ulonglong)(iVar31 + (int)lVar37 + 1);
                  uVar42 = 0xffffffff;
                }
                uVar38 = (ulonglong)(-uVar36 & uVar36);
                uVar16 = uVar38 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                uVar36 = (iVar35 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
              } while ((int)uVar36 < (int)uVar41);
            }
LAB_140ab4e0b:
            puVar32 = local_1b0;
            local_128 = local_1b0[6];
            local_158 = *local_1b0;
            uStack_150 = (undefined4 *)local_1b0[1];
            uVar30 = local_1b0[2];
            uVar38 = local_1b0[3];
            local_138 = (uint *)local_1b0[4];
            uVar16 = local_1b0[5];
            local_1b0[6] = CONCAT44(uStack_84,uStack_88);
            local_1b0[4] = (ulonglong)local_98;
            local_1b0[5] = CONCAT44(uStack_8c,uStack_90);
            local_1b0[2] = CONCAT44(uStack_a4,local_a8);
            local_1b0[3] = CONCAT44(uStack_9c,uStack_a0);
            *local_1b0 = local_b8;
            local_1b0[1] = (ulonglong)puStack_b0;
            uStack_88 = (undefined4)local_128;
            uStack_84 = (undefined4)(local_128 >> 0x20);
            local_148._0_4_ = (uint)uVar30;
            local_148._4_4_ = (undefined4)(uVar30 >> 0x20);
            uStack_140._0_4_ = (undefined4)uVar38;
            uStack_140._4_4_ = (undefined4)(uVar38 >> 0x20);
            uStack_130._0_4_ = (int)uVar16;
            uStack_130._4_4_ = (int)(uVar16 >> 0x20);
            uStack_90 = (int)uStack_130;
            uStack_8c = uStack_130._4_4_;
            local_a8 = (uint)local_148;
            uStack_a4 = local_148._4_4_;
            uStack_a0 = (undefined4)uStack_140;
            uStack_9c = uStack_140._4_4_;
            local_148 = uVar30;
            uStack_140 = uVar38;
            uStack_130 = uVar16;
            local_b8 = local_158;
            puStack_b0 = uStack_150;
            local_98 = local_138;
            FUN_14041fb7c();
            uVar42 = 1;
            if (3 < local_1d0[0x2c] - local_1d0[0x37]) {
              uVar30 = (ulonglong)(local_1d0[0x2c] - local_1d0[0x37] & 0xfffffffe) + 0xf;
              lVar12 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              uVar42 = 1 << ((byte)lVar12 & 0x1f);
            }
            local_1d0[0x3c] = uVar42;
            FUN_1403263ea(puVar32);
          }
          local_b8 = local_178;
          puStack_b0 = (undefined4 *)CONCAT44(puStack_b0._4_4_,(int)uStack_170);
          FUN_1417e32a4(local_1b0);
        }
        if (((int)uStack_180 != 0) || ((int)uStack_100 != local_d4)) {
          FUN_1407b285a();
          if ((longlong)(int)uStack_180 != 0) {
            plVar34 = local_188 + (int)uStack_180;
            local_1c0 = param_1 + 0xc0;
            plVar26 = local_188;
            local_1d8 = plVar34;
            do {
              if ((int)param_1[0xba] != *(int *)((longlong)param_1 + 0x5fc)) {
                lVar12 = *plVar26;
                plVar27 = (longlong *)param_1[0xc1];
                if ((longlong *)param_1[0xc1] == (longlong *)0x0) {
                  plVar27 = local_1c0;
                }
                iVar35 = *(int *)((longlong)plVar27 +
                                 (ulonglong)
                                 ((int)param_1[0xc2] - 1U &
                                 (int)lVar12 + (int)((ulonglong)lVar12 >> 0x20) * 0x17) * 4);
                if (iVar35 != -1) {
LAB_140ab4fac:
                  lVar37 = param_1[0xb9] + (longlong)iVar35 * 0x60;
                  if (*(longlong *)(param_1[0xb9] + (longlong)iVar35 * 0x60) != lVar12)
                  goto code_r0x000140ab4fc1;
                  if ((lVar37 + 8U & 0xfffffffffffffff7) != 0) {
                    uVar42 = (uint)uStack_150;
                    uVar36 = (*(int *)(lVar37 + 0x10) - *(int *)(lVar37 + 0x3c)) +
                             ((uint)uStack_150 - local_128._4_4_);
                    if ((uint)uStack_150 - local_128._4_4_ < uVar36) {
                      if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_1456acd4b((longlong)(int)uVar36);
                      }
                      uVar41 = uVar36 - (uint)uStack_150;
                      if (uVar41 != 0 && (int)(uint)uStack_150 <= (int)uVar36) {
                        iVar35 = uStack_150._4_4_;
                        uVar25 = (uint)uStack_150;
                        if (uStack_150._4_4_ < (int)uVar36) {
                          FUN_14474875a(&local_158);
                          plVar34 = local_1d8;
                          iVar35 = uStack_150._4_4_;
                          uVar25 = (uint)uStack_150;
                        }
                        uStack_150 = (undefined4 *)CONCAT44(uStack_150._4_4_,uVar25 + uVar41);
                        if (iVar35 - uVar25 < uVar41) {
                          FUN_1446efaca(&local_158);
                          plVar34 = local_1d8;
                        }
                        if ((int)uVar25 < (int)uVar36) {
                          piVar28 = (int *)((ulonglong)uVar36 * 0x10 + local_158 + -0xc);
                          uVar30 = (ulonglong)uVar36;
                          iVar35 = local_128._4_4_;
                          do {
                            uVar38 = uVar30 - 1;
                            if (iVar35 == 0) {
                              iVar31 = (int)uVar30 + -1;
                            }
                            else {
                              *(int *)(local_158 + (longlong)(int)local_128 * 0x10) =
                                   (int)uVar30 + -1;
                              iVar31 = (int)uVar38;
                            }
                            piVar28[-1] = -1;
                            iVar35 = -1;
                            if (0 < local_128._4_4_) {
                              iVar35 = (int)local_128;
                            }
                            *piVar28 = iVar35;
                            iVar35 = local_128._4_4_ + 1;
                            local_128 = CONCAT44(iVar35,iVar31);
                            piVar28 = piVar28 + -4;
                            uVar30 = uVar38;
                          } while ((longlong)(int)uVar25 < (longlong)uVar38);
                        }
                        if (uVar42 == 0) {
                          uStack_130 = CONCAT44(uStack_130._4_4_,uVar41);
                          uVar42 = uVar41 + 0x1f >> 5;
                          puVar15 = local_138;
                          if (uStack_130._4_4_ + 0x1fU >> 5 < uVar42) {
                            if (local_138 == (uint *)0x0 && uVar41 < 0x81) {
                              puVar15 = (uint *)0x0;
                            }
                            else {
                              uVar25 = 0;
                              if (0x80 < uVar41) {
                                uVar25 = uVar42;
                              }
                              FUN_1446efa72(&local_138,0,uVar25);
                              puVar15 = local_138;
                            }
                            uStack_130 = CONCAT44(uVar41 + 0x1f,(int)uStack_130) &
                                         0xffffffe0ffffffff;
                          }
                          if (puVar15 == (uint *)0x0) {
                            puVar15 = (uint *)&local_148;
                          }
                          if (uVar41 < 0x101) {
                            uVar42 = uVar42 + (uVar42 == 0);
                          }
                          memset(puVar15,0,(ulonglong)(uVar42 << 2));
                          iVar35 = (int)uStack_130 + 0x1f;
                          if (-1 < (int)uStack_130) {
                            iVar35 = (int)uStack_130;
                          }
                          plVar34 = local_1d8;
                          if ((int)uStack_130 % 0x20 != 0) {
                            puVar15 = local_138;
                            if (local_138 == (uint *)0x0) {
                              puVar15 = (uint *)&local_148;
                            }
                            bVar40 = -(char)((int)uStack_130 % 0x20);
                            puVar15[iVar35 >> 5] =
                                 (puVar15[iVar35 >> 5] << (bVar40 & 0x1f)) >> (bVar40 & 0x1f);
                          }
                        }
                        else if (-1 < (int)uVar41) {
                          uVar30 = uStack_130 & 0xffffffff;
                          if (uVar36 != uVar42) {
                            if ((int)uStack_130 == 0) {
                              iVar35 = -1;
                            }
                            else {
                              iVar35 = (int)uStack_130 + 0x1e;
                              if (-1 < (int)uStack_130 + -1) {
                                iVar35 = (int)uStack_130 + -1;
                              }
                              iVar35 = iVar35 >> 5;
                            }
                            iVar18 = (int)uStack_130 + uVar41;
                            iVar17 = (int)uStack_130 + uVar41 + -1;
                            iVar31 = (int)uStack_130 + uVar41 + 0x1e;
                            if (-1 < iVar17) {
                              iVar31 = iVar17;
                            }
                            if (iVar31 >> 5 == iVar35) {
                              uStack_130 = CONCAT44(uStack_130._4_4_,iVar18);
                            }
                            else {
                              if (uStack_130._4_4_ < iVar18) {
                                uVar38 = uVar30;
                                if (iVar18 + 0x1fU < 0xa0) {
                                  iVar35 = 0x80;
                                }
                                else {
                                  uVar42 = iVar18 + 0x1fU >> 5;
                                  if (uStack_130._4_4_ + 0x1fU < 0xa0) {
                                    uVar25 = 4;
                                    if (4 < uVar42) {
                                      uVar25 = uVar42;
                                    }
                                  }
                                  else {
                                    uVar25 = uVar42 + (uVar42 * 3 >> 3) + 0x10;
                                  }
                                  uVar16 = (ulonglong)(uVar25 * 4);
                                  if (DAT_14c872d28 != (longlong *)0x0) {
                                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8)
                                    {
                                      uVar9 = (uint)(uVar16 + 0xf);
                                      if (uVar25 < 0x1ffd) {
                                        uVar16 = (ulonglong)
                                                 (ushort)(&DAT_14c841d90)
                                                         [0x32 - (byte)(&DAT_14c841e00)
                                                                       [uVar16 + 0xf >> 4]];
                                      }
                                      else {
                                        uVar24 = (ulonglong)(uVar9 & 0xfffffff0);
                                        if (uVar24 < 0x7ff1) {
                                          bVar40 = (&DAT_14c841e00)[uVar9 >> 4];
                                          uVar29 = 0x32;
                                          if (0x32 < bVar40) {
                                            uVar29 = (ulonglong)bVar40;
                                          }
                                          uVar33 = 0x32 - (ulonglong)bVar40;
                                          do {
                                            uVar16 = (ulonglong)
                                                     (ushort)(&DAT_14c841d90)[uVar33 & 0xffffffff];
                                            if (((&DAT_14c841d90)[uVar33 & 0xffffffff] & 0xf) == 0)
                                            goto LAB_140ab54e4;
                                            lVar12 = uVar29 + 1 + uVar33;
                                            uVar33 = uVar33 - 1;
                                          } while (lVar12 != 0x33);
                                        }
                                        uVar16 = (ulonglong)DAT_14c841df8;
                                        if (DAT_14c841df8 < 0x11) {
                                          uVar16 = 0x10;
                                        }
                                        uVar16 = -uVar16 & (uVar24 + uVar16) - 1;
                                      }
                                    }
                                    else {
                                      uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                         (DAT_14c872d28,uVar16,0);
                                      uVar38 = uStack_130 & 0xffffffff;
                                    }
                                  }
LAB_140ab54e4:
                                  iVar31 = (int)(uVar16 >> 2);
                                  iVar35 = iVar31 << 5;
                                  if (iVar31 < (int)uVar42) {
                                    iVar35 = -0x20;
                                  }
                                }
                                uStack_130 = CONCAT44(iVar35,(int)uStack_130);
                                FUN_1446efbd8(&local_148,uVar38);
                                iVar18 = (int)uStack_130 + uVar41;
                              }
                              iVar35 = iVar18 + 0x1f;
                              if (-1 < iVar18) {
                                iVar35 = iVar18;
                              }
                              uStack_130 = CONCAT44(uStack_130._4_4_,iVar18);
                              if (iVar18 % 0x20 != 0) {
                                puVar15 = local_138;
                                if (local_138 == (uint *)0x0) {
                                  puVar15 = (uint *)&local_148;
                                }
                                bVar40 = -(char)(iVar18 % 0x20);
                                puVar15[iVar35 >> 5] =
                                     (puVar15[iVar35 >> 5] << (bVar40 & 0x1f)) >> (bVar40 & 0x1f);
                              }
                            }
                          }
                          FUN_1447c6044(&local_148,uVar30,uVar41,0);
                          plVar34 = local_1d8;
                        }
                      }
                      iVar35 = 1;
                      if (3 < uVar36) {
                        uVar42 = (uVar36 | 1) + 0xe;
                        iVar35 = 0x1f;
                        if (uVar42 != 0) {
                          for (; uVar42 >> iVar35 == 0; iVar35 = iVar35 + -1) {
                          }
                        }
                        iVar35 = 1 << ((byte)iVar35 & 0x1f);
                      }
                      if ((local_110 == 0) || (local_110 < iVar35)) {
                        local_110 = iVar35;
                        FUN_14066d476(&local_158);
                        plVar34 = local_1d8;
                      }
                    }
                    local_1d0 = (uint *)(lVar37 + 0x18);
                    iVar35 = *(int *)(lVar37 + 0x30);
                    if (iVar35 == 0) {
                      uVar30 = 1;
                      uVar38 = 0;
                      iVar31 = 0;
                      iVar17 = 0;
LAB_140ab52d8:
                      if (iVar31 != iVar35) {
                        uVar42 = 0xffffffff;
                        do {
                          FUN_1417e4262(&local_158,local_15c,
                                        (longlong)iVar31 * 0x10 + *(longlong *)(lVar37 + 8));
                          uVar42 = ~(uint)uVar30 & uVar42;
                          puVar15 = *(uint **)(lVar37 + 0x28);
                          if (*(uint **)(lVar37 + 0x28) == (uint *)0x0) {
                            puVar15 = local_1d0;
                          }
                          iVar18 = *(int *)(lVar37 + 0x30);
                          iVar31 = (int)uVar38;
                          lVar12 = (longlong)iVar31;
                          uVar36 = puVar15[lVar12] & uVar42;
                          if (uVar36 == 0) {
                            iVar19 = iVar18 + 0x1e;
                            if (-1 < iVar18 + -1) {
                              iVar19 = iVar18 + -1;
                            }
                            iVar19 = iVar19 >> 5;
                            iVar17 = iVar17 + 0x20;
                            iVar20 = iVar19;
                            if (iVar19 < iVar31) {
                              iVar20 = iVar31;
                            }
                            if (iVar31 < iVar19) {
                              lVar43 = 0;
                              do {
                                uVar36 = puVar15[lVar12 + lVar43 + 1];
                                if (uVar36 != 0) {
                                  uVar38 = (ulonglong)(iVar31 + (int)lVar43 + 1);
                                  uVar42 = 0xffffffff;
                                  goto LAB_140ab5390;
                                }
                                iVar17 = iVar17 + 0x20;
                                lVar43 = lVar43 + 1;
                              } while (iVar20 - lVar12 != lVar43);
                              uVar42 = 0xffffffff;
                              lVar12 = (longlong)iVar20;
                            }
                            uVar38 = lVar12 + 1U & 0xffffffff;
                            iVar31 = iVar18;
                          }
                          else {
LAB_140ab5390:
                            uVar30 = (ulonglong)(-uVar36 & uVar36);
                            uVar16 = uVar30 * 2 + 1;
                            lVar12 = 0x3f;
                            if (uVar16 != 0) {
                              for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                              }
                            }
                            iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                            if (iVar18 <= iVar31) {
                              iVar31 = iVar18;
                            }
                          }
                          plVar34 = local_1d8;
                        } while (iVar31 != iVar35);
                      }
                    }
                    else {
                      puVar15 = *(uint **)(lVar37 + 0x28);
                      if (*(uint **)(lVar37 + 0x28) == (uint *)0x0) {
                        puVar15 = local_1d0;
                      }
                      uVar42 = *puVar15;
                      if (uVar42 != 0) {
                        uVar38 = 0;
                        iVar17 = 0;
LAB_140ab52b5:
                        uVar30 = (ulonglong)(-uVar42 & uVar42);
                        uVar16 = uVar30 * 2 + 1;
                        lVar12 = 0x3f;
                        if (uVar16 != 0) {
                          for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                          }
                        }
                        iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                        if (iVar35 <= iVar31) {
                          iVar31 = iVar35;
                        }
                        goto LAB_140ab52d8;
                      }
                      iVar31 = iVar35 + 0x1e;
                      if (-1 < iVar35 + -1) {
                        iVar31 = iVar35 + -1;
                      }
                      uVar38 = 0;
                      uVar30 = (ulonglong)(uint)(iVar31 >> 5);
                      if (iVar31 >> 5 < 1) {
                        uVar30 = uVar38;
                      }
                      iVar17 = 0;
                      while (uVar30 != uVar38) {
                        iVar17 = iVar17 + 0x20;
                        uVar42 = puVar15[uVar38 + 1];
                        uVar38 = uVar38 + 1;
                        if (uVar42 != 0) goto LAB_140ab52b5;
                      }
                    }
                  }
                }
              }
LAB_140ab4fd8:
              plVar26 = plVar26 + 1;
            } while (plVar26 != plVar34);
          }
          iVar35 = (int)uStack_130;
          if ((int)uStack_130 == 0) {
            uVar38 = 1;
            uVar30 = 0;
            iVar17 = 0;
            iVar31 = 0;
          }
          else {
            puVar15 = local_138;
            if (local_138 == (uint *)0x0) {
              puVar15 = (uint *)&local_148;
            }
            uVar42 = *puVar15;
            if (uVar42 == 0) {
              iVar31 = (int)uStack_130 + 0x1e;
              if (-1 < (int)uStack_130 + -1) {
                iVar31 = (int)uStack_130 + -1;
              }
              uVar30 = 0;
              uVar38 = (ulonglong)(uint)(iVar31 >> 5);
              if (iVar31 >> 5 < 1) {
                uVar38 = uVar30;
              }
              iVar17 = 0;
              do {
                if (uVar38 == uVar30) goto LAB_140ab56f0;
                iVar17 = iVar17 + 0x20;
                uVar42 = puVar15[uVar30 + 1];
                uVar30 = uVar30 + 1;
              } while (uVar42 == 0);
            }
            else {
              uVar30 = 0;
              iVar17 = 0;
            }
            uVar38 = (ulonglong)(-uVar42 & uVar42);
            uVar16 = uVar38 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if ((int)uStack_130 <= iVar31) {
              iVar31 = (int)uStack_130;
            }
          }
          if (iVar31 != (int)uStack_130) {
            uVar42 = 0xffffffff;
            iVar18 = (int)uStack_130;
            do {
              if ((int)param_1[0xc5] != *(int *)((longlong)param_1 + 0x654)) {
                uVar16 = *(ulonglong *)(local_158 + (longlong)iVar31 * 0x10);
                uVar36 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
                uVar36 = (uVar36 >> 0xd ^ uVar36) * -0x3d4d51cb;
                plVar34 = (longlong *)param_1[0xcc];
                if ((longlong *)param_1[0xcc] == (longlong *)0x0) {
                  plVar34 = param_1 + 0xcb;
                }
                iVar31 = *(int *)((longlong)plVar34 +
                                 (ulonglong)((int)param_1[0xcd] - 1U & (uVar36 >> 0x10 ^ uVar36)) *
                                 4);
                if (iVar31 != -1) {
                  do {
                    if (*(ulonglong *)(*local_1a0 + (longlong)iVar31 * 0x10) == uVar16) {
                      local_15c[0] = '\0';
                      FUN_1434b4e5a(uVar16,local_15c);
                      if (local_15c[0] == '\0') {
                        FUN_140441cb0(local_1a0,uVar16);
                      }
                      iVar18 = (int)uStack_130;
                      break;
                    }
                    iVar31 = *(int *)((longlong)iVar31 * 0x10 + *local_1a0 + 8);
                  } while (iVar31 != -1);
                }
              }
              uVar42 = uVar42 & ~(uint)uVar38;
              puVar15 = local_138;
              if (local_138 == (uint *)0x0) {
                puVar15 = (uint *)&local_148;
              }
              iVar31 = (int)uVar30;
              lVar12 = (longlong)iVar31;
              uVar36 = puVar15[lVar12] & uVar42;
              if (uVar36 == 0) {
                iVar19 = iVar18 + 0x1e;
                if (-1 < iVar18 + -1) {
                  iVar19 = iVar18 + -1;
                }
                iVar19 = iVar19 >> 5;
                iVar17 = iVar17 + 0x20;
                iVar20 = iVar19;
                if (iVar19 < iVar31) {
                  iVar20 = iVar31;
                }
                if (iVar31 < iVar19) {
                  lVar37 = 0;
                  do {
                    uVar36 = puVar15[lVar12 + lVar37 + 1];
                    if (uVar36 != 0) {
                      uVar30 = (ulonglong)(iVar31 + (int)lVar37 + 1);
                      uVar42 = 0xffffffff;
                      goto LAB_140ab610b;
                    }
                    iVar17 = iVar17 + 0x20;
                    lVar37 = lVar37 + 1;
                  } while (iVar20 - lVar12 != lVar37);
                  uVar42 = 0xffffffff;
                  lVar12 = (longlong)iVar20;
                }
                uVar30 = lVar12 + 1U & 0xffffffff;
                iVar31 = iVar18;
              }
              else {
LAB_140ab610b:
                uVar38 = (ulonglong)(-uVar36 & uVar36);
                uVar16 = uVar38 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                if (iVar18 <= iVar31) {
                  iVar31 = iVar18;
                }
              }
            } while (iVar31 != iVar35);
          }
LAB_140ab56f0:
          local_110 = 0;
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          FUN_1404427ee(&local_158);
        }
        if (local_188 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_178 != 0) {
          FUN_1400020a8();
        }
      }
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1404427ee(&local_108);
    }
LAB_140ab5768:
    QueryPerformanceCounter(&local_108);
    bVar40 = local_1d9;
    dVar3 = (double)local_108.QuadPart * DAT_14c83f420 + 16777216.0;
    if (10.0 < dVar3 - (double)param_1[0x77]) {
      iVar35 = (int)param_1[0xb4];
      if (iVar35 == 0) {
        uVar38 = 1;
        uVar30 = 0;
        iVar17 = 0;
        iVar31 = 0;
      }
      else {
        puVar15 = (uint *)param_1[0xb3];
        if ((uint *)param_1[0xb3] == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0xb1);
        }
        uVar42 = *puVar15;
        if (uVar42 == 0) {
          iVar31 = iVar35 + 0x1e;
          if (-1 < iVar35 + -1) {
            iVar31 = iVar35 + -1;
          }
          uVar30 = 0;
          uVar38 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar38 = uVar30;
          }
          iVar17 = 0;
          do {
            if (uVar38 == uVar30) goto LAB_140ab5950;
            iVar17 = iVar17 + 0x20;
            uVar42 = puVar15[uVar30 + 1];
            uVar30 = uVar30 + 1;
          } while (uVar42 == 0);
        }
        else {
          uVar30 = 0;
          iVar17 = 0;
        }
        uVar38 = (ulonglong)(-uVar42 & uVar42);
        uVar16 = uVar38 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar35 <= iVar31) {
          iVar31 = iVar35;
        }
      }
      if (iVar31 < iVar35) {
        uVar42 = 0xffffffff;
        do {
          lVar12 = param_1[0xaf];
          iVar18 = *(int *)(lVar12 + 0x1c + (longlong)iVar31 * 0x28);
          if ((((iVar18 == 0) ||
               (uVar36 = *(uint *)(lVar12 + 0x18 + (longlong)iVar31 * 0x28), (int)uVar36 < 0)) ||
              (DAT_14c9647dc <= (int)uVar36)) ||
             (((lVar12 = (ulonglong)((uVar36 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar36 >> 0x10) * 8), lVar12 == 0
               || (*(int *)(lVar12 + 0x10) != iVar18)) ||
              ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))) {
            FUN_14048c9d0(param_1 + 0xaf);
            iVar35 = (int)param_1[0xb4];
          }
          uVar42 = uVar42 & ~(uint)uVar38;
          puVar15 = (uint *)param_1[0xb3];
          if ((uint *)param_1[0xb3] == (uint *)0x0) {
            puVar15 = (uint *)(param_1 + 0xb1);
          }
          iVar31 = (int)uVar30;
          lVar12 = (longlong)iVar31;
          uVar36 = puVar15[lVar12] & uVar42;
          if (uVar36 == 0) {
            iVar18 = iVar35 + 0x1e;
            if (-1 < iVar35 + -1) {
              iVar18 = iVar35 + -1;
            }
            iVar18 = iVar18 >> 5;
            iVar19 = iVar18;
            if (iVar18 < iVar31) {
              iVar19 = iVar31;
            }
            if (iVar18 <= iVar31) break;
            lVar37 = 0;
            while( true ) {
              iVar17 = iVar17 + 0x20;
              uVar36 = puVar15[lVar12 + lVar37 + 1];
              if (uVar36 != 0) break;
              lVar37 = lVar37 + 1;
              if (iVar19 - lVar12 == lVar37) goto LAB_140ab5950;
            }
            uVar30 = (ulonglong)(iVar31 + (int)lVar37 + 1);
            uVar42 = 0xffffffff;
          }
          uVar38 = (ulonglong)(-uVar36 & uVar36);
          uVar16 = uVar38 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar31 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        } while (iVar31 < iVar35);
      }
LAB_140ab5950:
      lVar12 = param_1[0x20];
      if ((longlong)(int)lVar12 != 0) {
        lVar37 = param_1[0x1f];
        lVar43 = 0;
        do {
          lVar39 = *(longlong *)(lVar37 + lVar43);
          if ((lVar39 != 0) && (*(longlong *)(lVar39 + 0x58) != 0)) {
            FUN_140d7cbf2(lVar39 + 0x15d0);
          }
          lVar43 = lVar43 + 8;
        } while ((longlong)(int)lVar12 * 8 != lVar43);
      }
      lVar12 = param_1[0x1e];
      if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x58) != 0)) {
        FUN_140d7cbf2(lVar12 + 0x15d0);
      }
      param_1[0x77] = (longlong)dVar3;
    }
    if ((int)param_1[0x119] != 0) {
      *(undefined4 *)(param_1 + 0x119) = 0;
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x30a) & 8) == 0) && (DAT_14caf22b8 != '\x01')) {
    lVar12 = param_1[0x20];
    if ((longlong)(int)lVar12 != 0) {
      lVar37 = param_1[0x1f];
      lVar43 = 0;
      do {
        if (*(longlong *)(lVar37 + lVar43) != 0) {
          *(undefined8 *)(*(longlong *)(lVar37 + lVar43) + 0x4cc) = 0;
        }
        lVar43 = lVar43 + 8;
      } while ((longlong)(int)lVar12 * 8 != lVar43);
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x8bc) = *(int *)((longlong)param_1 + 0x8bc) + 1;
    cVar8 = (**(code **)(*param_1 + 0x3c0))(param_1);
    fVar45 = 0.0;
    if (cVar8 == '\0') {
      fVar45 = DAT_14caf2160;
    }
    if (fVar45 <= 0.0) {
      bVar44 = false;
    }
    else {
      bVar44 = fVar45 < *(float *)(param_1 + 0x118);
    }
    *(int *)((longlong)param_1 + 0x8c4) = *(int *)((longlong)param_1 + 0x8c4) + (uint)bVar44;
    lVar12 = param_1[0x51];
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar12);
    }
    FUN_1435a82a8(lVar12,DAT_14caf2f70,*(int *)((longlong)param_1 + 0x33c) - (int)param_1[0x68]);
    lVar12 = param_1[0x51];
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar12);
    }
    FUN_1435a82a8(lVar12,DAT_14caf2f78,(int)param_1[0x69] - *(int *)((longlong)param_1 + 0x34c));
    lVar12 = param_1[0x51];
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar12);
    }
    FUN_1435a82a8(lVar12,DAT_14caf2f80,*(int *)((longlong)param_1 + 0x36c) - (int)param_1[0x6e]);
    lVar12 = param_1[0x51];
    if ((lVar12 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar12);
    }
    FUN_1435a82a8(lVar12);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((longlong)param_1 + 0x33c);
    *(int *)((longlong)param_1 + 0x34c) = (int)param_1[0x69];
    *(undefined4 *)(param_1 + 0x6e) = *(undefined4 *)((longlong)param_1 + 0x36c);
    *(int *)((longlong)param_1 + 0x37c) = (int)param_1[0x6f];
    QueryPerformanceCounter(&local_108);
    dVar3 = (double)local_108.QuadPart * DAT_14c83f420;
    uVar30 = param_1[0x40];
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a();
      DAT_14c87ead8 = '\x01';
    }
    if ((uVar30 != DAT_14c892fa8) ||
       (dVar3 = dVar3 + 16777216.0,
       dVar3 - (double)param_1[0x74] <= (double)*(float *)(param_1 + 0x75))) {
      lVar12 = param_1[0x20];
      if ((longlong)(int)lVar12 != 0) {
        lVar37 = param_1[0x1f];
        lVar43 = 0;
        do {
          if (*(longlong *)(lVar37 + lVar43) != 0) {
            *(undefined8 *)(*(longlong *)(lVar37 + lVar43) + 0x4cc) = 0;
          }
          lVar43 = lVar43 + 8;
        } while ((longlong)(int)lVar12 * 8 != lVar43);
      }
    }
    else {
      lVar12 = param_1[0x20];
      if ((longlong)(int)lVar12 == 0) {
        iVar35 = 0;
        iVar31 = 0;
        iVar18 = 0;
        iVar17 = 0;
      }
      else {
        lVar37 = param_1[0x1f];
        lVar43 = 0;
        iVar17 = 0;
        iVar35 = 0;
        iVar18 = 0;
        iVar31 = 0;
        iVar19 = 0;
        do {
          lVar39 = *(longlong *)(lVar37 + lVar43);
          if (lVar39 != 0) {
            iVar20 = *(int *)(lVar39 + 0x4cc);
            iVar2 = *(int *)(lVar39 + 0x4d0);
            iVar17 = iVar17 + iVar20;
            iVar18 = iVar18 + iVar2;
            if (iVar35 < iVar20) {
              iVar35 = iVar20;
            }
            if (iVar31 < iVar2) {
              iVar31 = iVar2;
            }
            *(undefined8 *)(lVar39 + 0x4cc) = 0;
            iVar19 = iVar19 + 1;
          }
          lVar43 = lVar43 + 8;
        } while ((longlong)(int)lVar12 * 8 != lVar43);
        if (1 < iVar19) {
          iVar17 = iVar17 / iVar19;
          iVar18 = iVar18 / iVar19;
        }
      }
      if (((*(byte *)((longlong)param_1 + 0x30a) & 8) == 0) && (DAT_14caf22b8 != '\x01')) {
        lVar37 = 0;
      }
      else {
        fVar46 = (float)(dVar3 - (double)param_1[0x74]);
        iVar20 = (int)((float)*(uint *)((longlong)param_1 + 0x324) / fVar46);
        *(int *)((longlong)param_1 + 0x324) = iVar20;
        iVar19 = (int)((float)*(uint *)((longlong)param_1 + 0x32c) / fVar46);
        *(int *)((longlong)param_1 + 0x32c) = iVar19;
        *(int *)((longlong)param_1 + 0x334) =
             (int)((float)*(uint *)((longlong)param_1 + 0x334) / fVar46);
        *(int *)(param_1 + 0x67) = (int)((float)*(uint *)(param_1 + 0x67) / fVar46);
        *(int *)((longlong)param_1 + 0x31c) = iVar20;
        *(int *)(param_1 + 100) = iVar19;
        uVar36 = (uint)((float)*(uint *)((longlong)param_1 + 0x33c) / fVar46);
        *(uint *)((longlong)param_1 + 0x33c) = uVar36;
        uVar42 = *(uint *)(param_1 + 0x69);
        *(int *)(param_1 + 0x69) = (int)((float)uVar42 / fVar46);
        *(int *)((longlong)param_1 + 0x354) =
             (int)((float)*(uint *)((longlong)param_1 + 0x354) / fVar46);
        *(int *)(param_1 + 0x6b) = (int)((float)*(uint *)(param_1 + 0x6b) / fVar46);
        fVar45 = (float)(uint)(int)((float)uVar42 / fVar46);
        if (fVar45 <= 1.0) {
          fVar45 = 1.0;
        }
        *(int *)(param_1 + 0x6f) = (int)(((float)*(uint *)(param_1 + 0x6f) * 100.0) / fVar45);
        fVar45 = (float)uVar36 + (float)*(uint *)((longlong)param_1 + 0x36c);
        if (fVar45 <= 1.0) {
          fVar45 = 1.0;
        }
        *(int *)((longlong)param_1 + 0x36c) =
             (int)(((float)*(uint *)((longlong)param_1 + 0x36c) * 100.0) / fVar45);
        lVar12 = param_1[0x51];
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
          uVar36 = *(uint *)((longlong)param_1 + 0x33c);
        }
        FUN_1435a82a8(lVar12,DAT_14caf2f60,uVar36);
        lVar12 = param_1[0x51];
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
        }
        FUN_1435a82a8(lVar12,DAT_14caf2f68,(int)param_1[0x69]);
        lVar12 = param_1[0x51];
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
        }
        FUN_1435a82a8(lVar12,DAT_14caf3038,*(undefined4 *)((longlong)param_1 + 0x354));
        lVar12 = param_1[0x51];
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
        }
        FUN_1435a82a8(lVar12,DAT_14caf3040,(int)param_1[0x6b]);
        lVar12 = param_1[0x51];
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
        }
        local_1d9 = bVar40;
        FUN_1435a82a8(lVar12,DAT_14caf3028,(int)param_1[0x6f]);
        lVar12 = param_1[0x51];
        if ((lVar12 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar12);
        }
        FUN_1435a82a8(lVar12,DAT_14caf3020,*(undefined4 *)((longlong)param_1 + 0x36c));
        lVar12 = param_1[0x1e];
        iVar19 = 0;
        if (lVar12 == 0) {
          lVar37 = 0;
        }
        else {
          if ((*(longlong *)(lVar12 + 0x30) == 0) ||
             (lVar37 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x398), lVar37 == 0)) {
            lVar37 = 0;
          }
          else {
            lVar37 = (longlong)(int)*(float *)(lVar37 + 0x3d8);
          }
          lVar43 = param_1[0x51];
          if ((lVar43 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar43);
            lVar12 = param_1[0x1e];
          }
          FUN_1435a81f8(lVar43,DAT_14caf3030,*(undefined4 *)(lVar12 + 0x54c));
        }
        bVar40 = local_1d9;
        *(int *)((longlong)param_1 + 900) =
             (int)((float)*(uint *)((longlong)param_1 + 900) / fVar46);
        *(int *)((longlong)param_1 + 0x38c) =
             (int)((float)*(uint *)((longlong)param_1 + 0x38c) / fVar46);
        uVar42 = *(uint *)(param_1 + 0x71);
        *(int *)(param_1 + 0x71) = (int)((float)uVar42 / fVar46);
        uVar36 = *(uint *)(param_1 + 0x72);
        *(int *)(param_1 + 0x72) = (int)((float)uVar36 / fVar46);
        if (*(uint *)((longlong)param_1 + 0x324) != 0) {
          iVar19 = (int)(((float)(uint)(int)((float)uVar36 / fVar46) * 100.0) /
                        (float)*(uint *)((longlong)param_1 + 0x324));
        }
        *(int *)((longlong)param_1 + 0x394) = iVar19;
        if (*(uint *)((longlong)param_1 + 0x32c) == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = (int)(((float)(uint)(int)((float)uVar42 / fVar46) * 100.0) /
                        (float)*(uint *)((longlong)param_1 + 0x32c));
        }
        *(int *)(param_1 + 0x73) = iVar19;
        if (param_1[0x1e] == 0) {
          if (0 < (int)param_1[0x20]) {
            lVar12 = 0;
            do {
              FUN_147bd6f5e(param_1[0x10b],*(undefined8 *)(param_1[0x1f] + lVar12 * 8));
              plVar34 = *(longlong **)(param_1[0x1f] + lVar12 * 8);
              (**(code **)(*plVar34 + 0x308))(plVar34,0);
              lVar12 = lVar12 + 1;
            } while (lVar12 < (int)param_1[0x20]);
          }
        }
        else {
          FUN_147bd6f5e(param_1[0x10b]);
          (**(code **)(*(longlong *)param_1[0x1e] + 0x308))((longlong *)param_1[0x1e],0);
        }
      }
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf3048,lVar37);
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2fe0,*(undefined4 *)((longlong)param_1 + 0x31c));
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2fe8,(int)param_1[100]);
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2fc0,(longlong)iVar17);
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2fc8,iVar35);
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2fd0,(longlong)iVar18);
      lVar12 = param_1[0x51];
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      FUN_1435a82a8(lVar12,DAT_14caf2fd8,iVar31);
      *(undefined4 *)((longlong)param_1 + 0x324) = 0;
      *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
      param_1[0x69] = 0;
      *(undefined8 *)((longlong)param_1 + 0x354) = 0;
      param_1[0x6f] = 0;
      *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
      *(undefined4 *)((longlong)param_1 + 0x8c4) = 0;
      *(undefined8 *)((longlong)param_1 + 0x334) = 0;
      *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
      *(undefined8 *)((longlong)param_1 + 900) = 0;
      *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
      *(undefined8 *)((longlong)param_1 + 0x394) = 0;
      param_1[0x74] = (longlong)dVar3;
      *(undefined4 *)((longlong)param_1 + 0x8bc) = 0;
    }
  }
  lVar12 = param_1[0x51];
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar12);
  }
  FUN_1447bf274(lVar12);
  (**(code **)(*param_1 + 0x368))(param_1);
  if (bVar40 != 0) {
    QueryPerformanceCounter(&local_108);
    DAT_14caf2380 =
         (((double)local_108.QuadPart * DAT_14c83f420 + 16777216.0) - dVar4) + DAT_14caf2380;
  }
  if ((local_80 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140ab4c31:
  lVar39 = (longlong)(int)uVar42 * 0x60;
  lVar43 = lVar37 + lVar39;
  if (*(longlong *)(lVar37 + lVar39) != lVar12) goto code_r0x000140ab4c46;
  uVar36 = puVar22[*(int *)(lVar43 + 0x5c)];
  if (uVar36 == uVar42) {
    puVar22 = puVar22 + *(int *)(lVar43 + 0x5c);
  }
  else {
    do {
      puVar22 = (uint *)(lVar37 + (longlong)(int)uVar36 * 0x60 + 0x58);
      uVar36 = *puVar22;
    } while (uVar36 != uVar42);
  }
  *puVar22 = *(uint *)(lVar43 + 0x58);
  lVar12 = *(longlong *)local_1c8;
  *(undefined4 *)(lVar12 + 0x50 + lVar39) = 0;
  if (*(longlong *)(lVar12 + 0x48 + lVar39) != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(lVar12 + lVar39 + 8);
  FUN_1435a484c(puVar23);
  puVar15 = local_1d0;
  goto LAB_140ab4ca6;
code_r0x000140ab4c46:
  uVar42 = *(uint *)(lVar43 + 0x58);
  puVar15 = local_1d0;
  if (uVar42 == 0xffffffff) goto LAB_140ab4ca6;
  goto LAB_140ab4c31;
code_r0x000140ab4fc1:
  iVar35 = *(int *)(lVar37 + 0x58);
  if (iVar35 == -1) goto LAB_140ab4fd8;
  goto LAB_140ab4fac;
}



// FUNCTION 140ab683c FUN_140ab683c body=697 status=ok
// SIG undefined FUN_140ab683c(void)

void FUN_140ab683c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong alStack_100 [3];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  undefined5 uStack_84;
  undefined8 local_78 [3];
  void *local_60;
  uint local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  alStack_100[1] = 0;
  alStack_100[2] = 0;
  local_108 = 0;
  alStack_100[0] = 0;
  local_e8 = 0xffffffff;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_c8 = (void *)0x0;
  local_c0 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  uStack_8f = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  FUN_140851e80(local_78,uVar3);
  _Src = local_60;
  local_e0 = local_78[0];
  local_c0 = CONCAT44(local_c0._4_4_,local_58);
  if (local_58 == 0 && local_c0._4_4_ == 0) {
    local_c0 = (ulonglong)local_58;
  }
  else {
    FUN_1446dd670(&pvStack_c8,local_58);
    if (local_58 != 0) {
      memcpy(pvStack_c8,_Src,(longlong)(int)local_58 * 2);
    }
  }
  if (local_b8 != local_50) {
    local_a8 = 0;
  }
  local_b8 = local_50;
  if (lStack_b0 != local_48) {
    local_a8 = 0;
  }
  uVar3 = FUN_14477b664();
  lStack_b0 = FUN_14477b664(uVar3);
  plVar2 = local_98;
  local_a8 = local_40;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
  }
  uStack_a0 = local_38;
  local_98 = local_30;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_108 = *(undefined8 *)(param_1 + 0x44);
  local_e8 = *(undefined4 *)(param_1 + 0x4c);
  alStack_100[2] = 0;
  FUN_1406fa324(alStack_100,param_1 + 0x50);
  FUN_140ab6af6(param_2,&local_108);
  FUN_14072ffb2(CONCAT71(uStack_8f,local_90),uStack_88);
  if (CONCAT71(uStack_8f,local_90) != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if (pvStack_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (alStack_100[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ab6af6 FUN_140ab6af6 body=1144 status=ok
// SIG undefined FUN_140ab6af6(void)

longlong FUN_140ab6af6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  
  plVar18 = param_2 + 3;
  iVar15 = (int)param_2[4];
  if ((longlong)iVar15 < 0) {
    plVar7 = (longlong *)param_2[1];
    uVar16 = *(uint *)(param_2 + 2);
LAB_140ab6b29:
    if (uVar16 != 0) {
      plVar12 = plVar7 + (int)uVar16;
      lVar14 = *plVar18;
LAB_140ab6b38:
      iVar15 = 0;
      do {
        if (*plVar7 == lVar14) goto LAB_140ab6b52;
        plVar7 = plVar7 + 1;
        iVar15 = iVar15 + 1;
      } while (plVar7 != plVar12);
    }
    iVar15 = -1;
LAB_140ab6b52:
    *(int *)(param_2 + 4) = iVar15;
  }
  else {
    uVar16 = *(uint *)(param_2 + 2);
    plVar7 = (longlong *)param_2[1];
    if ((int)uVar16 <= iVar15) goto LAB_140ab6b29;
    lVar14 = *plVar18;
    if (lVar14 != plVar7[iVar15]) {
      if (lVar14 == 0) {
        *plVar18 = plVar7[iVar15];
        goto LAB_140ab6b56;
      }
      plVar12 = plVar7 + uVar16;
      goto LAB_140ab6b38;
    }
  }
LAB_140ab6b56:
  if ((char)param_2[0x11] == '\0') {
    FUN_140851464(param_2,0);
  }
  lVar14 = *(longlong *)(param_1 + 0x78);
  iVar15 = *(int *)(param_1 + 0x80);
  lVar19 = (longlong)iVar15;
  if (lVar19 != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar14 + lVar8) == *param_2) {
        iVar11 = (int)(lVar8 >> 4) * 0x38e38e39;
        if ((iVar11 != -1) && (lVar8 = (longlong)iVar11 * 0x90 + lVar14, lVar8 != 0)) {
          if (*(char *)(lVar8 + 0x88) != '\0') {
            return lVar8;
          }
          if ((char)param_2[0x11] != '\0') {
            return lVar8;
          }
          if ((longlong)(int)param_2[2] == 0) {
            return lVar8;
          }
          lVar14 = param_2[1];
          lVar19 = (longlong)(int)param_2[2] << 3;
          do {
            FUN_140721fbe(lVar8 + 8,lVar14);
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
          return lVar8;
        }
        break;
      }
      lVar8 = lVar8 + 0x90;
    } while (lVar19 * 0x90 != lVar8);
  }
  *(uint *)(param_1 + 0x80) = iVar15 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar15 + 1U) {
    FUN_1412a7732((longlong *)(param_1 + 0x78),iVar15);
    lVar14 = *(longlong *)(param_1 + 0x78);
  }
  lVar19 = lVar19 * 0x90;
  lVar8 = lVar14 + lVar19;
  plVar7 = (longlong *)(lVar14 + lVar19);
  *plVar7 = *param_2;
  plVar7[1] = 0;
  plVar7[1] = param_2[1];
  param_2[1] = 0;
  *(int *)(plVar7 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)plVar7 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  *(int *)(plVar7 + 4) = (int)param_2[4];
  plVar7[3] = *plVar18;
  plVar7[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar10 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(plVar7 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)plVar7 + 0x34) = uVar3;
  *(int *)(plVar7 + 7) = (int)lVar10;
  *(undefined4 *)((longlong)plVar7 + 0x3c) = uVar4;
  plVar7[8] = 0;
  plVar7[8] = param_2[8];
  param_2[8] = 0;
  *(int *)(plVar7 + 9) = (int)param_2[9];
  *(undefined4 *)((longlong)plVar7 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  plVar7[0xc] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = param_2[10];
  uVar9 = FUN_14477b664(param_2[0xb]);
  lVar10 = FUN_14477b664(uVar9);
  plVar7[0xb] = lVar10;
  plVar7[0xc] = param_2[0xc];
  plVar7[0xd] = param_2[0xd];
  plVar7[0xe] = param_2[0xe];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(int *)(plVar7 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)plVar7 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  lVar10 = param_2[0x11];
  *(char *)(plVar7 + 0x11) = (char)lVar10;
  if (((char)lVar10 == '\x01') &&
     ((puVar13 = (undefined8 *)(lVar14 + lVar19 + 8), *(int *)(lVar8 + 0x10) != DAT_14c9a6310 ||
      (cVar6 = FUN_14000b9e1(*puVar13,DAT_14c9a6308), cVar6 == '\0')))) {
    FUN_1406fa324(puVar13,&DAT_14c9a6308);
  }
  lVar10 = lVar14 + lVar19;
  lVar2 = plVar7[3];
  if (lVar2 == 0) {
    if (*(int *)(lVar8 + 0x10) < 1) {
      puVar13 = DAT_14c9a6308;
      if (*(char *)(lVar8 + 0x88) != '\x01') {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
        goto LAB_140ab6df0;
      }
    }
    else {
      puVar13 = *(undefined8 **)(lVar8 + 8);
    }
    *(undefined8 *)(lVar8 + 0x18) = *puVar13;
    *(undefined4 *)(lVar8 + 0x20) = 0;
    goto LAB_140ab6df0;
  }
  iVar15 = *(int *)(lVar8 + 0x20);
  if ((longlong)iVar15 < 0) {
    plVar18 = *(longlong **)(lVar8 + 8);
    uVar16 = *(uint *)(lVar8 + 0x10);
LAB_140ab6d96:
    if (uVar16 != 0) {
      uVar17 = (ulonglong)(int)uVar16;
      goto LAB_140ab6d9e;
    }
  }
  else {
    uVar16 = *(uint *)(lVar8 + 0x10);
    uVar17 = (ulonglong)uVar16;
    plVar18 = *(longlong **)(lVar8 + 8);
    if ((int)uVar16 <= iVar15) goto LAB_140ab6d96;
    if (lVar2 == plVar18[iVar15]) goto LAB_140ab6df0;
LAB_140ab6d9e:
    plVar7 = plVar18 + uVar17;
    iVar15 = 0;
    do {
      if (*plVar18 == lVar2) goto LAB_140ab6dbc;
      plVar18 = plVar18 + 1;
      iVar15 = iVar15 + 1;
    } while (plVar18 != plVar7);
  }
  iVar15 = -1;
LAB_140ab6dbc:
  *(int *)(lVar8 + 0x20) = iVar15;
LAB_140ab6df0:
  if ((*(longlong *)(lVar10 + 0x30) == 0) &&
     ((plVar18 = (longlong *)(lVar14 + lVar19 + 0x50), *plVar18 == 0 ||
      (*(longlong *)(lVar8 + 0x58) == 0)))) {
    puVar13 = (undefined8 *)(lVar14 + lVar19 + 0x40);
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar10 + 0x34) = uVar3;
    *(undefined4 *)(lVar10 + 0x38) = uVar4;
    *(undefined4 *)(lVar10 + 0x3c) = uVar5;
    if (puVar13 != (undefined8 *)(param_1 + 0x30)) {
      iVar15 = *(int *)(param_1 + 0x38);
      _Src = *(void **)(param_1 + 0x30);
      *(int *)(lVar8 + 0x48) = iVar15;
      if (iVar15 == 0 && *(int *)(lVar8 + 0x4c) == 0) {
        *(undefined4 *)(lVar8 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(puVar13,iVar15);
        if (iVar15 != 0) {
          memcpy((void *)*puVar13,_Src,(longlong)iVar15 * 2);
        }
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (*plVar18 != lVar14) {
      *(undefined8 *)(lVar8 + 0x60) = 0;
    }
    *(longlong *)(lVar8 + 0x50) = lVar14;
    if (*(longlong *)(lVar8 + 0x58) != *(longlong *)(param_1 + 0x48)) {
      *(undefined8 *)(lVar8 + 0x60) = 0;
    }
    uVar9 = FUN_14477b664();
    uVar9 = FUN_14477b664(uVar9);
    *(undefined8 *)(lVar8 + 0x58) = uVar9;
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    lVar14 = *(longlong *)(param_1 + 0x60);
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
      UNLOCK();
    }
    plVar18 = *(longlong **)(lVar8 + 0x70);
    *(undefined8 *)(lVar8 + 0x68) = uVar9;
    *(longlong *)(lVar8 + 0x70) = lVar14;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
  }
  return lVar8;
}



// FUNCTION 140ab6f6e FUN_140ab6f6e body=302 status=ok
// SIG undefined FUN_140ab6f6e(void)

undefined8 FUN_140ab6f6e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x43d8) == 0) goto LAB_140ab6f88;
  lVar4 = *(longlong *)(param_1 + 0x43d8) + 0x20;
  lVar2 = FUN_14485c28e(lVar4);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14485c28e(lVar4);
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_140ab6f88;
    lVar4 = param_1 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar4);
  if (((lVar3 == 0) || ((*(byte *)(lVar4 + 0x298) & 2) != 0)) ||
     (*(longlong *)(param_1 + 0x110) == 0)) goto LAB_140ab6f88;
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_140ab6f88;
    lVar4 = param_1 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar4 = FUN_140153468(lVar4);
  if ((lVar2 == 0) || (lVar4 == 0)) goto LAB_140ab6f88;
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) == '\x01') {
      lVar4 = param_1 + 0x3210;
      goto LAB_140ab7085;
    }
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x3170) + 0xd8;
LAB_140ab7085:
    lVar4 = FUN_140153468(lVar4);
  }
  if (lVar4 == lVar2) {
    return 0;
  }
LAB_140ab6f88:
  if (*(char *)(param_1 + 0x43f0) != '\0') {
    return 0;
  }
  uVar1 = FUN_140ab709c(param_1,param_2);
  return uVar1;
}



// FUNCTION 140ab709c FUN_140ab709c body=296 status=ok
// SIG undefined FUN_140ab709c(void)

bool FUN_140ab709c(longlong *param_1,char param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  float extraout_XMM0_Da;
  
  if (param_1[0x76c] == 0) {
    return false;
  }
  if (*(char *)(param_1[0x76c] + 300) != '\x01') {
    return false;
  }
  if ((*(byte *)(param_1 + 0x774) & 2) == 0) {
    return false;
  }
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] != '\x01') goto LAB_140ab7102;
    plVar7 = param_1 + 0x642;
  }
  else {
    plVar7 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  lVar5 = FUN_140153468(plVar7);
  if (((lVar5 != 0) && ((*(byte *)(plVar7 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
    return false;
  }
LAB_140ab7102:
  if (param_2 != '\x03') {
    return false;
  }
  if ((char)param_1[0x220] == '\x01') {
    cVar4 = (**(code **)(*param_1 + 0xed0))(param_1);
    if (cVar4 == '\0') {
      return false;
    }
    lVar5 = param_1[0x76c];
    pfVar6 = (float *)(lVar5 + 0x18);
    if (*(char *)(lVar5 + 0x12d) != '\0') {
      pfVar6 = (float *)(lVar5 + 0x130);
    }
    fVar1 = *pfVar6;
    dVar2 = (double)param_1[0x25];
    dVar3 = (double)param_1[0x26];
    (**(code **)(*param_1 + 0xcf8))(param_1);
    return (double)(extraout_XMM0_Da * extraout_XMM0_Da * fVar1) <= dVar2 * dVar2 + dVar3 * dVar3;
  }
  return false;
}



// FUNCTION 140ab71c4 FUN_140ab71c4 body=487 status=ok
// SIG undefined FUN_140ab71c4(void)

bool FUN_140ab71c4(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar7;
  
  puVar3 = *(uint **)(param_1 + 0xf8);
  uVar1 = *puVar3;
  uVar11 = (*(uint *)(*(longlong *)(param_1 + 0x100) + (ulonglong)uVar1 * 4) >> 4) + param_5;
  if (uVar11 <= param_4) {
    uVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)(int)uVar1 * 0x10)
                    + 0x74) - 1;
    if (0 < (int)uVar5) {
      lVar4 = *(longlong *)
               (param_3 + 0x10 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x68) + 0x70) * 8);
      iVar7 = *(int *)(lVar4 + 0x50);
      uVar8 = (ulonglong)uVar5;
      lVar13 = uVar8 * 2;
      do {
        if ((int)uVar8 < iVar7) {
          lVar12 = 0;
          do {
            if (*(short *)(*(longlong *)(lVar4 + 0x48) + lVar13 + lVar12 * 2) != -1) {
              FUN_140ab73ac();
              goto LAB_140ab7256;
            }
            lVar12 = lVar12 + 1;
          } while ((int)uVar8 + (int)lVar12 < iVar7);
        }
        uVar8 = uVar8 - 1;
        lVar13 = lVar13 + -2;
      } while (0 < (int)uVar8);
    }
    uVar5 = *(int *)(param_1 + 0xe8) - 1;
    *(uint *)(param_1 + 0xe8) = uVar5;
    *puVar3 = puVar3[uVar5];
    *(undefined4 *)(*(longlong *)(param_1 + 0x108) + (ulonglong)**(uint **)(param_1 + 0xf8) * 4) = 0
    ;
    *(undefined4 *)(*(longlong *)(param_1 + 0x108) + (ulonglong)uVar1 * 4) = 0xffffffff;
    uVar5 = *(uint *)(param_1 + 0xe8);
    if (1 < uVar5) {
      uVar2 = **(uint **)(param_1 + 0xf8);
      iVar7 = 0;
      uVar10 = 1;
      uVar8 = 0;
      do {
        uVar6 = iVar7 + 2;
        lVar13 = *(longlong *)(param_1 + 0xf8);
        lVar4 = *(longlong *)(param_1 + 0x100);
        uVar9 = uVar10;
        if ((uVar6 < uVar5) &&
           (*(uint *)(lVar4 + (ulonglong)*(uint *)(lVar13 + (ulonglong)uVar6 * 4) * 4) <=
            *(uint *)(lVar4 + (ulonglong)*(uint *)(lVar13 + (ulonglong)uVar10 * 4) * 4))) {
          uVar9 = uVar6;
        }
        uVar5 = *(uint *)(lVar13 + (ulonglong)uVar9 * 4);
        if (*(uint *)(lVar4 + (ulonglong)uVar2 * 4) <= *(uint *)(lVar4 + (ulonglong)uVar5 * 4)) {
          if ((int)uVar8 != 0) goto LAB_140ab7371;
          goto LAB_140ab738e;
        }
        *(uint *)(lVar13 + uVar8 * 4) = uVar5;
        *(int *)(*(longlong *)(param_1 + 0x108) +
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf8) + uVar8 * 4) * 4) = (int)uVar8;
        iVar7 = uVar9 * 2;
        uVar10 = uVar9 * 2 + 1;
        uVar5 = *(uint *)(param_1 + 0xe8);
        uVar8 = (ulonglong)uVar9;
      } while (uVar10 < uVar5);
      lVar13 = *(longlong *)(param_1 + 0xf8);
      uVar8 = (ulonglong)uVar9;
LAB_140ab7371:
      *(uint *)(lVar13 + uVar8 * 4) = uVar2;
      *(int *)(*(longlong *)(param_1 + 0x108) +
              (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf8) + uVar8 * 4) * 4) = (int)uVar8;
    }
LAB_140ab738e:
    FUN_140ab8c10(param_1,param_3,uVar1);
  }
LAB_140ab7256:
  return uVar11 <= param_4;
}



// FUNCTION 140ab73ac FUN_140ab73ac body=5578 status=ok
// SIG undefined FUN_140ab73ac(void)

void FUN_140ab73ac(longlong param_1,undefined8 param_2,undefined4 *param_3,uint param_4,uint param_5
                  ,uint param_6,int param_7)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  DWORD DVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  ushort uVar27;
  bool bVar28;
  undefined1 auStack_568 [32];
  uint local_548;
  uint local_540;
  uint local_538;
  ulonglong local_530;
  int local_528;
  ulonglong local_520;
  longlong local_518;
  int local_510;
  int local_50c;
  uint *local_508;
  longlong local_500;
  uint *local_4f8;
  longlong local_4f0;
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  uint local_4c0;
  uint local_4bc;
  ulonglong local_4b8;
  undefined4 *local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  ulonglong local_498;
  longlong local_490;
  ulonglong local_488;
  longlong local_480;
  uint *local_478;
  longlong local_470;
  longlong local_468;
  uint *local_460;
  uint local_458 [256];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_568;
  uVar8 = *(uint *)(param_1 + 0x60);
  uVar15 = 0;
  uVar19 = param_4 / uVar8;
  uVar18 = param_4 % uVar8;
  local_528 = *(int *)(param_1 + 0x10) - param_6;
  local_480 = (longlong)(int)param_5;
  if (param_5 != 0xffffffff) {
    uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 8 + local_480 * 0x10);
  }
  local_530 = (ulonglong)(*(int *)(param_1 + 8) * uVar18) / (ulonglong)uVar8 |
              (ulonglong)(*(int *)(param_1 + 0xc) * uVar19) / (ulonglong)*(uint *)(param_1 + 100) <<
              0x20;
  local_540 = 1 << ((byte)param_6 & 0x1f);
  local_548 = CONCAT31(local_548._1_3_,*(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x70));
  local_538 = local_540;
  uVar9 = FUN_140ab89e0(param_2,param_3,param_1 + 0x14,*(undefined8 *)(param_1 + 0x60));
  if (uVar15 == 0) {
    iVar4 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar4 == 0) {
      uVar8 = *(uint *)(param_1 + 0x80);
      uVar15 = (ulonglong)uVar8;
      *(uint *)(param_1 + 0x80) = uVar8 + 1;
      if (*(uint *)(param_1 + 0x84) < uVar8 + 1) {
        FUN_14576c0a8((longlong *)(param_1 + 0x78));
      }
      puVar12 = (uint *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar8 * 0x10);
      *puVar12 = param_4;
    }
    else {
      uVar15 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x88) + -4 + (longlong)iVar4 * 4);
      *(int *)(param_1 + 0x90) = iVar4 + -1;
      FUN_14479f406(param_1 + 0x88);
      *(uint *)(*(longlong *)(param_1 + 0x78) + uVar15 * 0x10) = param_4;
      puVar12 = (uint *)(*(longlong *)(param_1 + 0x78) + uVar15 * 0x10);
    }
    *(ulonglong *)(puVar12 + 2) = uVar9;
    iVar4 = *(int *)(param_1 + 0xe0);
    uVar8 = iVar4 + 1;
    *(uint *)(param_1 + 0xe0) = uVar8;
    if (*(uint *)(param_1 + 0xe4) < uVar8) {
      FUN_1446f48e2(param_1 + 0xd8);
    }
    uVar18 = (uint)uVar15;
    *(uint *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar4 * 4) = uVar18;
    uVar8 = (param_4 >> 0x10 ^ param_4) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (*(uint *)(param_1 + 0xa0) <= uVar18) {
      uVar14 = (ulonglong)(uVar18 + (uVar18 == 0xffffffff)) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      FUN_1404b04e2(param_1 + 0x98);
    }
    uVar14 = (ulonglong)(((uVar8 & 0xffff ^ uVar8 >> 0x10) & *(uint *)(param_1 + 0x9c)) << 2);
    uVar15 = uVar15 & 0xffffffff;
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + uVar15 * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + uVar14);
    *(uint *)(*(longlong *)(param_1 + 0xa8) + uVar14) = uVar18;
    if (*(uint *)(param_1 + 0xc0) <= uVar18) {
      uVar14 = (ulonglong)(uVar18 + (uVar18 == 0xffffffff)) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      FUN_1404b04e2(param_1 + 0xb8);
    }
    uVar9 = (ulonglong)(((uint)(uVar9 >> 4) & 0xffff & *(uint *)(param_1 + 0xbc)) << 2);
    *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + uVar15 * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 200) + uVar9);
    *(uint *)(*(longlong *)(param_1 + 200) + uVar9) = uVar18;
    if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xec)) {
      FUN_141400538(param_1 + 0xe8);
    }
    if (*(uint *)(param_1 + 0xf0) <= uVar18) {
      uVar9 = (ulonglong)(uVar18 + (uVar18 == 0xffffffff)) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      FUN_1414005c0(param_1 + 0xe8);
    }
    uVar8 = *(uint *)(param_1 + 0xe8);
    uVar9 = (ulonglong)uVar8;
    *(uint *)(param_1 + 0xe8) = uVar8 + 1;
    *(uint *)(*(longlong *)(param_1 + 0xf8) + uVar9 * 4) = uVar18;
    *(uint *)(*(longlong *)(param_1 + 0x100) + uVar15 * 4) = param_7 << 4 | param_6;
    *(uint *)(*(longlong *)(param_1 + 0x108) + uVar15 * 4) = uVar8;
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0xf8) + uVar9 * 4);
    uVar19 = uVar8;
    if (uVar9 == 0) {
      uVar15 = 0;
    }
    else {
      do {
        uVar25 = uVar19 - 1;
        uVar23 = uVar25 >> 1;
        uVar15 = (ulonglong)uVar23;
        uVar16 = *(uint *)(*(longlong *)(param_1 + 0xf8) + uVar15 * 4);
        if (*(uint *)(*(longlong *)(param_1 + 0x100) + (ulonglong)uVar16 * 4) <=
            *(uint *)(*(longlong *)(param_1 + 0x100) + (ulonglong)uVar18 * 4)) {
          uVar15 = (ulonglong)uVar19;
          break;
        }
        *(uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar19 * 4) = uVar16;
        *(uint *)(*(longlong *)(param_1 + 0x108) +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar19 * 4) * 4) =
             uVar19;
        uVar19 = uVar23;
      } while (1 < uVar25);
    }
    if ((uint)uVar15 != uVar8) {
      *(uint *)(*(longlong *)(param_1 + 0xf8) + uVar15 * 4) = uVar18;
      *(uint *)(*(longlong *)(param_1 + 0x108) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf8) + uVar15 * 4) * 4) = (uint)uVar15;
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    goto LAB_140ab8259;
  }
  local_520 = uVar15;
  local_4d8 = uVar19;
  if (*(int *)(uVar15 + 0xa0) != 0) {
    uVar8 = *(uint *)(uVar9 + 0x78);
    local_4e8 = *(uint *)(uVar15 + 0x78);
    uVar19 = 0;
    local_4e0 = uVar18;
    do {
      local_518 = (longlong)(int)uVar19;
      uVar18 = *(uint *)(*(longlong *)(local_520 + 0x98) + local_518 * 8);
      uVar25 = uVar18 & 0x3fffff;
      if (uVar25 < (uint)param_3[0x2a]) {
        local_500 = (ulonglong)uVar25 * 0xf0;
        if (uVar18 >> 0x16 != (uint)*(ushort *)(*(longlong *)(param_3 + 0x28) + 0xec + local_500))
        goto LAB_140ab8800;
        local_500 = *(longlong *)(param_3 + 0x28) + local_500;
      }
      else {
LAB_140ab8800:
        local_500 = 0;
      }
      local_4f0 = *(longlong *)(uVar9 + 0x98);
      uVar18 = *(uint *)(local_4f0 + local_518 * 8);
      uVar25 = uVar18 & 0x3fffff;
      if (uVar25 < (uint)param_3[0x2a]) {
        lVar13 = (ulonglong)uVar25 * 0xf0;
        if (uVar18 >> 0x16 != (uint)*(ushort *)(*(longlong *)(param_3 + 0x28) + 0xec + lVar13))
        goto LAB_140ab8808;
        lVar13 = *(longlong *)(param_3 + 0x28) + lVar13;
      }
      else {
LAB_140ab8808:
        lVar13 = 0;
      }
      local_508 = (uint *)(*(longlong *)(local_520 + 0x98) + local_518 * 8);
      local_4dc = uVar19;
      if (*(char *)(local_500 + 0xc) == '\x01') {
        FUN_14063e03a(param_3);
      }
      if (*(char *)(local_500 + 0xbc) != '\0') {
        local_510 = (uint)*(byte *)(lVar13 + 0x29) - (uint)*(byte *)(local_500 + 0x29);
        uVar15 = 0;
        puVar12 = local_508;
        lVar13 = local_500;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar13 + 200) + uVar15 * 8);
          uVar18 = (*puVar12 >> 0x10 ^ *puVar12) * -0x7a143595;
          local_4bc = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          local_4bc = local_4bc >> 0x10 ^ local_4bc;
          uVar18 = *(uint *)(local_4f0 + local_518 * 8);
          local_58 = (uint *)0x0;
          local_50 = 0x10000000000;
          uVar19 = *(uint *)(*(longlong *)(lVar5 + 200) +
                            (ulonglong)(*(uint *)(lVar5 + 0xbc) & local_4bc) * 4);
          local_488 = uVar15;
          if (uVar19 != 0xffffffff) {
            local_4a0 = lVar5 + 0x48;
            uVar18 = (uVar18 >> 0x10 ^ uVar18) * -0x7a143595;
            local_4c0 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
            local_4c0 = local_4c0 >> 0x10 ^ local_4c0;
            local_4a8 = lVar5 + 0xb8;
            do {
              uVar15 = local_50;
              if (*(uint *)(*(longlong *)(lVar5 + 0xd8) + (longlong)(int)uVar19 * 8) == *puVar12) {
                lVar20 = (longlong)(int)local_50;
                uVar18 = (int)local_50 + 1;
                local_50 = CONCAT44(local_50._4_4_,uVar18);
                if (local_50._4_4_ < uVar18) {
                  FUN_14063e724(local_458,uVar15 & 0xffffffff);
                  puVar12 = local_508;
                  lVar13 = local_500;
                }
                puVar10 = local_58;
                if (local_58 == (uint *)0x0) {
                  puVar10 = local_458;
                }
                puVar10[lVar20] = uVar19;
              }
              uVar19 = *(uint *)(*(longlong *)(lVar5 + 0xd0) + (ulonglong)uVar19 * 4);
            } while (uVar19 != 0xffffffff);
            puVar10 = local_58;
            if (local_58 == (uint *)0x0) {
              puVar10 = local_458;
            }
            local_498 = uVar9;
            local_490 = param_1;
            if ((longlong)(int)local_50 != 0) {
              local_478 = puVar10 + (int)local_50;
              uVar18 = ((local_4e8 & 0x55555555) >> 1 | local_4e8 & 0x55555555) & 0x33333333;
              uVar18 = (uVar18 >> 2 | uVar18) & 0xf0f0f0f;
              uVar18 = uVar18 >> 4 | uVar18;
              local_4c4 = uVar18 & 0xff | uVar18 >> 8 & 0xff00;
              uVar18 = local_4e8 & 0x22222222 | local_4e8 >> 1 & 0x44444444;
              uVar18 = (uVar18 >> 3 | uVar18 >> 1) & 0xf0f0f0f;
              uVar18 = uVar18 >> 4 | uVar18;
              local_4c8 = uVar18 & 0xff | uVar18 >> 8 & 0xff00;
              uVar18 = ((uVar8 & 0x55555555) >> 1 | uVar8 & 0x55555555) & 0x33333333;
              uVar18 = (uVar18 >> 2 | uVar18) & 0xf0f0f0f;
              uVar18 = uVar18 >> 4 | uVar18;
              local_4cc = uVar18 & 0xff | uVar18 >> 8 & 0xff00;
              uVar18 = uVar8 & 0x22222222 | uVar8 >> 1 & 0x44444444;
              uVar18 = (uVar18 >> 3 | uVar18 >> 1) & 0xf0f0f0f;
              uVar18 = uVar18 >> 4 | uVar18;
              local_4d0 = uVar18 & 0xff | uVar18 >> 8 & 0xff00;
              local_4d4 = param_7 << 4;
              local_4b8 = (ulonglong)(uint)(local_510 << 0x18);
              local_50c = -local_510;
              local_4f8 = (uint *)(lVar5 + 0x70);
              local_4e4 = uVar8;
              local_4b0 = param_3;
              do {
                uVar8 = *puVar10;
                uVar15 = (ulonglong)uVar8;
                lVar13 = *(longlong *)(lVar5 + 0xd8);
                lVar20 = (longlong)(int)uVar8;
                uVar18 = *(uint *)(lVar13 + 4 + lVar20 * 8);
                local_460 = puVar10;
                if ((int)(uVar18 >> 0x18 & 0xf) < local_50c) {
                  FUN_145731d18(local_4a0,param_3,uVar8,0);
                  *(undefined4 *)(*(longlong *)(lVar5 + 0x88) + (ulonglong)(uVar8 & 0xffff) * 4) = 0
                  ;
                  uVar2 = *(ushort *)(*(longlong *)(lVar5 + 0x90) + (ulonglong)(uVar8 & 0xffff) * 2)
                  ;
                  uVar15 = (ulonglong)uVar2;
                  if (uVar15 == 0) {
                    uVar15 = 0;
                  }
                  else if (*(int *)(*(longlong *)(lVar5 + 0x88) +
                                   (ulonglong)
                                   *(ushort *)
                                    (*(longlong *)(lVar5 + 0x80) + (ulonglong)(uVar2 - 1 & 0x1fffe))
                                   * 4) != 0) {
                    FUN_1456e6cf4(local_4f8);
                    goto LAB_140ab7d75;
                  }
                  uVar24 = uVar2 * 2 + 1;
                  uVar8 = *local_4f8;
                  if (uVar24 < uVar8) {
                    uVar3 = *(ushort *)(*(longlong *)(lVar5 + 0x80) + uVar15 * 2);
                    uVar22 = uVar2;
                    do {
                      uVar27 = uVar22 * 2 + 2;
                      lVar13 = *(longlong *)(lVar5 + 0x80);
                      lVar20 = *(longlong *)(lVar5 + 0x88);
                      uVar21 = uVar24;
                      if ((uVar27 < uVar8) &&
                         (*(uint *)(lVar20 + (ulonglong)
                                             *(ushort *)(lVar13 + (ulonglong)(uint)uVar27 * 2) * 4)
                          <= *(uint *)(lVar20 + (ulonglong)
                                                *(ushort *)(lVar13 + (ulonglong)uVar24 * 2) * 4))) {
                        uVar21 = uVar27;
                      }
                      uVar24 = *(ushort *)(lVar13 + (ulonglong)uVar21 * 2);
                      if (*(uint *)(lVar20 + (ulonglong)uVar3 * 4) <=
                          *(uint *)(lVar20 + (ulonglong)uVar24 * 4)) break;
                      *(ushort *)(lVar13 + (ulonglong)((uint)uVar22 * 2)) = uVar24;
                      *(ushort *)
                       (*(longlong *)(lVar5 + 0x90) +
                       (ulonglong)
                       *(ushort *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)((uint)uVar22 * 2)) * 2)
                           = uVar22;
                      uVar24 = uVar21 * 2 + 1;
                      uVar8 = *(uint *)(lVar5 + 0x70);
                      uVar22 = uVar21;
                    } while (uVar24 < uVar8);
                    if (uVar22 != uVar2) {
                      *(ushort *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)((uint)uVar22 * 2)) =
                           uVar3;
                      *(ushort *)
                       (*(longlong *)(lVar5 + 0x90) +
                       (ulonglong)
                       *(ushort *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)((uint)uVar22 * 2)) * 2)
                           = uVar22;
                    }
                  }
                }
                else {
                  if (uVar8 < *(uint *)(lVar5 + 0xa0)) {
                    uVar9 = *(ulonglong *)(lVar13 + lVar20 * 8);
                    uVar14 = (uVar9 >> 0x21 ^ uVar9) * -0xae502812aa7333;
                    lVar17 = (uVar14 >> 0x21 ^ uVar14) * -0x3b314601e57a13ad;
                    uVar14 = (ulonglong)
                             (((uint)((ulonglong)lVar17 >> 0x21) ^ (uint)lVar17) &
                              *(uint *)(lVar5 + 0x9c) & 0xffff);
                    uVar19 = *(uint *)(*(longlong *)(lVar5 + 0xa8) + uVar14 * 4);
                    if (uVar19 == uVar8) {
                      puVar11 = (undefined4 *)(*(longlong *)(lVar5 + 0xa8) + uVar14 * 4);
                      lVar17 = *(longlong *)(lVar5 + 0xb0);
                    }
                    else {
                      uVar18 = (uint)(uVar9 >> 0x20);
                      do {
                        if (uVar19 == 0xffffffff) goto LAB_140ab78fb;
                        lVar17 = *(longlong *)(lVar5 + 0xb0);
                        uVar9 = (ulonglong)uVar19;
                        uVar19 = *(uint *)(lVar17 + uVar9 * 4);
                      } while (uVar19 != uVar8);
                      puVar11 = (undefined4 *)(lVar17 + uVar9 * 4);
                    }
                    *puVar11 = *(undefined4 *)(lVar17 + uVar15 * 4);
                    uVar18 = *(uint *)(lVar13 + 4 + lVar20 * 8);
                  }
LAB_140ab78fb:
                  *(undefined4 *)(lVar13 + lVar20 * 8) = *(undefined4 *)(local_4f0 + local_518 * 8);
                  *(uint *)(lVar13 + 4 + lVar20 * 8) =
                       uVar18 & 0xf0ffffff | (int)local_4b8 + uVar18 & 0xf000000;
                  uVar9 = *(ulonglong *)(lVar13 + lVar20 * 8);
                  if (*(uint *)(lVar5 + 0xa0) <= uVar8) {
                    uVar14 = (ulonglong)(uVar8 + (uVar8 == 0xffffffff)) * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar14 != 0) {
                      for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    uVar19 = 1 << ((byte)lVar17 & 0x1f);
                    uVar18 = 0x20;
                    if (0x20 < uVar19) {
                      uVar18 = uVar19;
                    }
                    FUN_1404b04e2(lVar5 + 0x98,uVar18);
                  }
                  uVar9 = (uVar9 >> 0x21 ^ uVar9) * -0xae502812aa7333;
                  lVar17 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
                  uVar9 = (ulonglong)
                          ((((uint)((ulonglong)lVar17 >> 0x21) ^ (uint)lVar17) & 0xffff &
                           *(uint *)(lVar5 + 0x9c)) << 2);
                  *(undefined4 *)(*(longlong *)(lVar5 + 0xb0) + uVar15 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar5 + 0xa8) + uVar9);
                  *(uint *)(*(longlong *)(lVar5 + 0xa8) + uVar9) = uVar8;
                  uVar18 = *(uint *)(lVar5 + 0xc0);
                  if (uVar8 < uVar18) {
                    uVar9 = (ulonglong)(*(uint *)(lVar5 + 0xbc) & local_4bc);
                    uVar19 = *(uint *)(*(longlong *)(lVar5 + 200) + uVar9 * 4);
                    if (uVar19 == uVar8) {
                      puVar11 = (undefined4 *)(*(longlong *)(lVar5 + 200) + uVar9 * 4);
                      lVar17 = *(longlong *)(lVar5 + 0xd0);
                    }
                    else {
                      do {
                        if (uVar19 == 0xffffffff) goto LAB_140ab79e1;
                        lVar17 = *(longlong *)(lVar5 + 0xd0);
                        uVar9 = (ulonglong)uVar19;
                        uVar19 = *(uint *)(lVar17 + uVar9 * 4);
                      } while (uVar19 != uVar8);
                      puVar11 = (undefined4 *)(lVar17 + uVar9 * 4);
                    }
                    *puVar11 = *(undefined4 *)(lVar17 + uVar15 * 4);
                    uVar18 = *(uint *)(lVar5 + 0xc0);
                  }
LAB_140ab79e1:
                  if (uVar18 <= uVar8) {
                    uVar9 = (ulonglong)(uVar8 + (uVar8 == 0xffffffff)) * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar9 != 0) {
                      for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    uVar19 = 1 << ((byte)lVar17 & 0x1f);
                    uVar18 = 0x20;
                    if (0x20 < uVar19) {
                      uVar18 = uVar19;
                    }
                    FUN_1404b04e2(local_4a8,uVar18);
                  }
                  uVar9 = (ulonglong)(*(uint *)(lVar5 + 0xbc) & local_4c0);
                  *(undefined4 *)(*(longlong *)(lVar5 + 0xd0) + uVar15 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar5 + 200) + uVar9 * 4);
                  *(uint *)(*(longlong *)(lVar5 + 200) + uVar9 * 4) = uVar8;
                  uVar15 = (ulonglong)(uVar8 & 0xffff);
                  if (((uVar8 & 0xffff) < *(uint *)(lVar5 + 0x78)) &&
                     (*(short *)(*(longlong *)(lVar5 + 0x90) + uVar15 * 2) != -1)) {
                    uVar18 = *(byte *)(lVar13 + 7 + lVar20 * 8) & 0xf | local_4d4;
                    *(uint *)(*(longlong *)(lVar5 + 0x88) + uVar15 * 4) = uVar18;
                    uVar2 = *(ushort *)(*(longlong *)(lVar5 + 0x90) + uVar15 * 2);
                    uVar15 = (ulonglong)uVar2;
                    if (uVar15 == 0) {
                      uVar15 = 0;
                    }
                    else if (uVar18 < *(uint *)(*(longlong *)(lVar5 + 0x88) +
                                               (ulonglong)
                                               *(ushort *)
                                                (*(longlong *)(lVar5 + 0x80) +
                                                (ulonglong)(uVar2 - 1 & 0x1fffe)) * 4)) {
                      FUN_1456e6cf4(local_4f8);
                      goto LAB_140ab7aa8;
                    }
                    uVar24 = uVar2 * 2 + 1;
                    uVar18 = *local_4f8;
                    if (uVar24 < uVar18) {
                      uVar3 = *(ushort *)(*(longlong *)(lVar5 + 0x80) + uVar15 * 2);
                      uVar22 = uVar2;
                      do {
                        uVar27 = uVar22 * 2 + 2;
                        lVar17 = *(longlong *)(lVar5 + 0x80);
                        lVar6 = *(longlong *)(lVar5 + 0x88);
                        uVar21 = uVar24;
                        if ((uVar27 < uVar18) &&
                           (*(uint *)(lVar6 + (ulonglong)
                                              *(ushort *)(lVar17 + (ulonglong)(uint)uVar27 * 2) * 4)
                            <= *(uint *)(lVar6 + (ulonglong)
                                                 *(ushort *)(lVar17 + (ulonglong)uVar24 * 2) * 4)))
                        {
                          uVar21 = uVar27;
                        }
                        uVar24 = *(ushort *)(lVar17 + (ulonglong)uVar21 * 2);
                        if (*(uint *)(lVar6 + (ulonglong)uVar3 * 4) <=
                            *(uint *)(lVar6 + (ulonglong)uVar24 * 4)) break;
                        *(ushort *)(lVar17 + (ulonglong)((uint)uVar22 * 2)) = uVar24;
                        *(ushort *)
                         (*(longlong *)(lVar5 + 0x90) +
                         (ulonglong)
                         *(ushort *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)((uint)uVar22 * 2)) *
                         2) = uVar22;
                        uVar24 = uVar21 * 2 + 1;
                        uVar18 = *(uint *)(lVar5 + 0x70);
                        uVar22 = uVar21;
                      } while (uVar24 < uVar18);
                      if (uVar22 != uVar2) {
                        *(ushort *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)((uint)uVar22 * 2)) =
                             uVar3;
                        *(ushort *)
                         (*(longlong *)(lVar5 + 0x90) +
                         (ulonglong)
                         *(ushort *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)((uint)uVar22 * 2)) *
                         2) = uVar22;
                      }
                    }
                  }
LAB_140ab7aa8:
                  uVar18 = *(uint *)(*(longlong *)(lVar5 + 0xe8) + 4 + lVar20 * 0xc);
                  local_468 = lVar13;
                  while ((uVar18 & 0xffffff) != uVar8) {
                    lVar13 = *(longlong *)(lVar5 + 0xe8);
                    uVar15 = (ulonglong)(uVar18 & 0xffffff);
                    uVar18 = *(uint *)(lVar13 + uVar15 * 0xc);
                    lVar17 = *(longlong *)(param_3 + (ulonglong)(uVar18 >> 0x1c) * 2 + 4);
                    local_470 = lVar17 + (ulonglong)*(byte *)(lVar13 + 0xb + uVar15 * 0xc) * 0xa8 +
                                0xc0;
                    local_548 = uVar18 & 0xffffff;
                    local_540 = local_540 & 0xffffff00;
                    FUN_14576bcc8(local_470,local_4b0,lVar17,uVar18 >> 0x18 & 0xffffff0f);
                    param_3 = local_4b0;
                    uVar18 = *(uint *)(lVar13 + uVar15 * 0xc);
                    uVar19 = ((uVar18 & 0x555555) >> 1 | uVar18 & 0x555555) & 0x333333;
                    uVar19 = uVar19 >> 2 | uVar19;
                    uVar25 = uVar19 & 0xf0f0f;
                    uVar16 = ((uVar25 >> 4 | uVar25) & 0xff | uVar19 >> 8 & 0xf00) - local_4c4;
                    uVar19 = uVar18 & 0x222222 | uVar18 >> 1 & 0x444444;
                    uVar25 = uVar19 >> 3 | uVar19 >> 1;
                    uVar19 = uVar25 & 0xf0f0f;
                    uVar23 = ((uVar19 >> 4 | uVar19) & 0xff | uVar25 >> 8 & 0xf00) - local_4c8;
                    uVar19 = uVar23 >> ((byte)local_50c & 0x1f);
                    uVar25 = uVar16 >> ((byte)local_50c & 0x1f);
                    if (-1 < local_510) {
                      uVar19 = uVar23 << ((byte)local_510 & 0x1f);
                      uVar25 = uVar16 << ((byte)local_510 & 0x1f);
                    }
                    uVar16 = *(uint *)(lVar13 + 4 + uVar15 * 0xc);
                    uVar25 = (uVar25 + local_4cc) * 0x100 & 0xff00ff | uVar25 + local_4cc & 0xff;
                    uVar25 = (uVar25 << 4 | uVar25) & 0xf0f0f0f;
                    uVar25 = (uVar25 * 4 | uVar25) & 0x33333333;
                    uVar19 = (uVar19 + local_4d0) * 0x100 & 0xff00ff | uVar19 + local_4d0 & 0xff;
                    uVar19 = (uVar19 << 4 | uVar19) & 0xf0f0f0f;
                    uVar19 = (uVar19 * 4 | uVar19) & 0x33333333;
                    local_538 = (uVar19 * 2 | uVar19 * 4) & 0xaaaaaa |
                                (uVar25 * 2 | uVar25) & 0x555555;
                    uVar19 = uVar18 + (int)local_4b8;
                    *(uint *)(lVar13 + uVar15 * 0xc) =
                         uVar19 & 0xf000000 | uVar18 & 0xf0000000 | local_538;
                    uVar18 = uVar16 + (int)local_4b8;
                    *(uint *)(lVar13 + 4 + uVar15 * 0xc) = uVar16 & 0xf0ffffff | uVar18 & 0xf000000;
                    local_528 = CONCAT22(local_528._2_2_,(short)uVar8);
                    local_530 = CONCAT71(local_530._1_7_,*(undefined1 *)(local_468 + 7 + lVar20 * 8)
                                        ) & 0xffffffffffffff0f;
                    local_540 = CONCAT31(local_540._1_3_,(char)(uVar19 >> 0x18)) & 0xffffff0f;
                    local_548 = CONCAT31(local_548._1_3_,(char)(uVar18 >> 0x18)) & 0xffffff0f;
                    FUN_14490e93c(local_470,lVar17,lVar5);
                    uVar18 = *(uint *)(lVar13 + 4 + uVar15 * 0xc);
                  }
                }
LAB_140ab7d75:
                puVar10 = local_460 + 1;
                puVar12 = local_508;
                lVar13 = local_500;
                uVar8 = local_4e4;
              } while (puVar10 != local_478);
            }
            param_1 = local_490;
            uVar9 = local_498;
            if (local_58 != (uint *)0x0) {
              FUN_1400020a8();
              puVar12 = local_508;
              lVar13 = local_500;
            }
          }
          uVar15 = local_488 + 1;
        } while (uVar15 < *(byte *)(lVar13 + 0xbc));
      }
      uVar19 = local_4dc + 1;
      uVar18 = local_4e0;
    } while (uVar19 < *(uint *)(local_520 + 0xa0));
  }
  if (*(char *)(local_520 + 0x21) != '\0') {
    lVar13 = local_520 + 0x24;
    uVar15 = 0;
    do {
      FUN_140ab8978(param_1 + 0x130,lVar13);
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 4;
    } while (uVar15 < *(byte *)(local_520 + 0x21));
  }
  puVar12 = param_3 + 1;
  DVar7 = GetCurrentThreadId();
  uVar8 = param_3[1];
  if ((uVar8 & 1) == 0) {
    LOCK();
    uVar19 = *puVar12;
    bVar28 = uVar8 == uVar19;
    if (bVar28) {
      *puVar12 = uVar8 | 1;
      uVar19 = uVar8;
    }
    uVar8 = uVar19;
    UNLOCK();
    if (!bVar28) goto LAB_140ab7fb5;
    param_3[2] = DVar7;
  }
  else {
LAB_140ab7fb5:
    if (param_3[2] == DVar7) {
      LOCK();
      *puVar12 = *puVar12 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(puVar12,uVar8);
    }
  }
  piVar1 = (int *)(local_520 + 0x68);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(local_520 + 100) = *param_3;
    iVar4 = param_3[0x48];
    param_3[0x48] = iVar4 + 1U;
    if ((uint)param_3[0x49] < iVar4 + 1U) {
      FUN_140430e10(param_3 + 0x46,iVar4);
    }
    *(ulonglong *)(*(longlong *)(param_3 + 0x46) + (longlong)iVar4 * 8) = local_520;
  }
  uVar8 = *puVar12;
  if (uVar8 < 4) {
    param_3[2] = 0;
    if (uVar8 < 2) {
      LOCK();
      uVar19 = *puVar12;
      if (uVar8 == uVar19) {
        *puVar12 = 0;
      }
      UNLOCK();
      if (uVar8 == uVar19) goto LAB_140ab7fd1;
    }
    FUN_140d366d2(puVar12);
  }
  else {
    LOCK();
    *puVar12 = *puVar12 - 4;
    UNLOCK();
  }
LAB_140ab7fd1:
  uVar8 = *(uint *)(param_1 + 0xc0);
  uVar15 = (ulonglong)param_5;
  if (param_5 < uVar8) {
    uVar14 = (ulonglong)((uint)*(ushort *)(param_1 + 0xbc) & (uint)(local_520 >> 4) & 0xfffffff);
    uVar19 = *(uint *)(*(longlong *)(param_1 + 200) + uVar14 * 4);
    if (uVar19 == param_5) {
      puVar11 = (undefined4 *)(*(longlong *)(param_1 + 200) + uVar14 * 4);
      lVar13 = *(longlong *)(param_1 + 0xd0);
    }
    else {
      do {
        if (uVar19 == 0xffffffff) goto LAB_140ab8025;
        lVar13 = *(longlong *)(param_1 + 0xd0);
        uVar14 = (ulonglong)uVar19;
        uVar19 = *(uint *)(lVar13 + uVar14 * 4);
      } while (uVar19 != param_5);
      puVar11 = (undefined4 *)(lVar13 + uVar14 * 4);
    }
    *puVar11 = *(undefined4 *)(lVar13 + uVar15 * 4);
    uVar8 = *(uint *)(param_1 + 0xc0);
  }
LAB_140ab8025:
  if (uVar8 <= param_5) {
    uVar14 = (ulonglong)(param_5 + (param_5 == 0xffffffff)) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar13 & 0x1f);
    uVar8 = 0x20;
    if (0x20 < uVar19) {
      uVar8 = uVar19;
    }
    FUN_1404b04e2(param_1 + 0xb8,uVar8);
  }
  uVar14 = (ulonglong)(((uint)(uVar9 >> 4) & 0xffff & *(uint *)(param_1 + 0xbc)) << 2);
  *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + uVar15 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 200) + uVar14);
  *(uint *)(*(longlong *)(param_1 + 200) + uVar14) = param_5;
  *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 8 + local_480 * 0x10) = uVar9;
  uVar19 = param_7 << 4 | param_6;
  *(uint *)(*(longlong *)(param_1 + 0x100) + uVar15 * 4) = uVar19;
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x108) + uVar15 * 4);
  uVar15 = (ulonglong)uVar8;
  if (uVar15 == 0) {
    lVar13 = *(longlong *)(param_1 + 0xf8);
LAB_140ab80a4:
    uVar25 = uVar8 * 2 + 1;
    uVar19 = *(uint *)(param_1 + 0xe8);
    if (uVar25 < uVar19) {
      uVar16 = *(uint *)(lVar13 + uVar15 * 4);
      uVar23 = uVar8;
      do {
        uVar26 = uVar23 * 2 + 2;
        lVar13 = *(longlong *)(param_1 + 0xf8);
        lVar5 = *(longlong *)(param_1 + 0x100);
        uVar23 = uVar25;
        if ((uVar26 < uVar19) &&
           (*(uint *)(lVar5 + (ulonglong)*(uint *)(lVar13 + (ulonglong)uVar26 * 4) * 4) <=
            *(uint *)(lVar5 + (ulonglong)*(uint *)(lVar13 + (ulonglong)uVar25 * 4) * 4))) {
          uVar23 = uVar26;
        }
        uVar19 = *(uint *)(lVar13 + (ulonglong)uVar23 * 4);
        uVar26 = (uint)uVar15;
        if (*(uint *)(lVar5 + (ulonglong)uVar16 * 4) <= *(uint *)(lVar5 + (ulonglong)uVar19 * 4))
        break;
        *(uint *)(lVar13 + uVar15 * 4) = uVar19;
        *(uint *)(*(longlong *)(param_1 + 0x108) +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf8) + uVar15 * 4) * 4) = uVar26;
        uVar25 = uVar23 * 2 + 1;
        uVar19 = *(uint *)(param_1 + 0xe8);
        uVar15 = (ulonglong)uVar23;
        uVar26 = uVar23;
      } while (uVar25 < uVar19);
      if (uVar26 != uVar8) {
        *(uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar26 * 4) = uVar16;
        *(uint *)(*(longlong *)(param_1 + 0x108) +
                 (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar26 * 4) * 4) =
             uVar26;
      }
    }
  }
  else {
    lVar13 = *(longlong *)(param_1 + 0xf8);
    if (*(uint *)(*(longlong *)(param_1 + 0x100) +
                 (ulonglong)*(uint *)(lVar13 + (ulonglong)(uVar8 - 1 >> 1) * 4) * 4) <= uVar19)
    goto LAB_140ab80a4;
    FUN_144b130ce();
  }
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    uVar15 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0xd8) + uVar15) == param_5) {
        if ((int)(~uVar15 >> 2) != 0) goto LAB_140ab8259;
        break;
      }
      uVar15 = uVar15 + 4;
    } while ((longlong)*(int *)(param_1 + 0xe0) * 4 != uVar15);
  }
  uVar8 = *(uint *)(uVar9 + 0x78);
  uVar19 = ((uVar8 & 0x55555555) >> 1 | uVar8 & 0x55555555) & 0x33333333;
  uVar19 = (uVar19 >> 2 | uVar19) & 0xf0f0f0f;
  uVar19 = uVar19 >> 4 | uVar19;
  uVar8 = uVar8 & 0x22222222 | uVar8 >> 1 & 0x44444444;
  uVar8 = (uVar8 >> 3 | uVar8 >> 1) & 0xf0f0f0f;
  uVar8 = uVar8 >> 4 | uVar8;
  iVar4 = *(int *)(param_1 + 0x128);
  lVar13 = (longlong)iVar4;
  *(uint *)(param_1 + 0x128) = iVar4 + 1U;
  if (*(uint *)(param_1 + 300) < iVar4 + 1U) {
    FUN_146317c0a((longlong *)(param_1 + 0x120),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  *(uint *)(lVar5 + lVar13 * 0xc) = uVar18;
  *(uint *)(lVar5 + 4 + lVar13 * 0xc) = local_4d8;
  *(uint *)(lVar5 + 8 + lVar13 * 0xc) =
       (uVar8 & 0xff | uVar8 >> 8 & 0xff00) << 0xc |
       param_6 << 0x18 | uVar19 & 0xff | uVar19 >> 8 & 0xff00 | 0x10000000;
LAB_140ab8259:
  if ((local_48 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ab8978 FUN_140ab8978 body=103 status=ok
// SIG undefined FUN_140ab8978(void)

void FUN_140ab8978(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 2) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 4;
    } while (lVar4 * 4 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14576c12e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + lVar4 * 4) = *param_2;
  return;
}



// FUNCTION 140ab89e0 FUN_140ab89e0 body=558 status=ok
// SIG undefined FUN_140ab89e0(void)

void FUN_140ab89e0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5,int param_6,int param_7,undefined8 param_8,undefined4 param_9)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  void *_Src;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  longlong local_178;
  undefined4 *local_170;
  undefined8 local_168;
  uint local_15c;
  undefined1 local_158 [24];
  int local_140;
  int local_13c;
  undefined1 local_12f;
  undefined4 local_90 [5];
  int local_7c;
  undefined1 local_76;
  undefined1 local_75;
  uint local_74 [10];
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar9 = param_3;
  puVar11 = local_90;
  for (lVar6 = 0x12; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_4c = local_4c | 1;
  local_76 = param_5;
  local_7c = (int)((ulonglong)param_4 >> 0x20);
  if (local_7c <= (int)param_4) {
    local_7c = (int)param_4;
  }
  local_75 = (undefined1)param_9;
  bVar4 = *(byte *)((longlong)param_3 + 0x19);
  if (bVar4 != 0) {
    puVar9 = param_3 + 7;
    iVar3 = param_6;
    if (param_6 < param_7) {
      iVar3 = param_7;
    }
    puVar10 = local_74;
    uVar8 = (ulonglong)(iVar3 + -1 + (uint)(iVar3 == 0)) * 2 + 1;
    local_178 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> local_178 == 0; local_178 = local_178 + -1) {
      }
    }
    lVar6 = 0;
    uVar8 = 0;
    puVar11 = puVar9;
    local_170 = puVar9;
    local_168 = param_1;
    do {
      uVar1 = local_74[uVar8];
      if (uVar1 == puVar11[uVar8]) {
        if ((uVar1 & 0x3fffff) < *(uint *)(param_2 + 0xa8)) {
          lVar5 = (ulonglong)(uVar1 & 0x3fffff) * 0xf0;
          if (uVar1 >> 0x16 != (uint)*(ushort *)(*(longlong *)(param_2 + 0xa0) + 0xec + lVar5))
          goto LAB_140ab8c07;
          _Src = (void *)(*(longlong *)(param_2 + 0xa0) + lVar5);
        }
        else {
LAB_140ab8c07:
          _Src = (void *)0x0;
        }
        memcpy(local_158,_Src,200);
        local_140 = param_6;
        local_13c = param_7;
        local_12f = (undefined1)local_178;
        uVar2 = *(undefined8 *)((longlong)_Src + 0xd8);
        local_188 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        param_1 = local_168;
        *local_188 = &PTR_FUN_14a336eb0;
        local_188[1] = uVar2;
        local_188[2] = param_8;
        *(undefined4 *)(local_188 + 3) = param_9;
        FUN_14072e100(param_2,&local_15c,local_168);
        bVar4 = *(byte *)((longlong)param_3 + 0x19);
        uVar7 = (ulonglong)bVar4;
        puVar11 = local_170;
        if (uVar8 < uVar7) {
          lVar5 = 0;
          do {
            if (puVar9[lVar5] == uVar1) {
              puVar10[lVar5] = local_15c;
            }
            lVar5 = lVar5 + 1;
          } while (lVar6 + uVar7 != lVar5);
        }
      }
      else {
        uVar7 = (ulonglong)bVar4;
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + -1;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 < uVar7);
  }
  FUN_140142292(param_2,param_1,local_90);
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ab8c10 FUN_140ab8c10 body=908 status=ok
// SIG undefined FUN_140ab8c10(void)

void FUN_140ab8c10(longlong param_1,undefined4 *param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  DWORD DVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  
  lVar14 = (longlong)(int)param_3 * 0x10;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x78) + lVar14);
  uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 8 + lVar14);
  if (*(char *)(uVar11 + 0x21) != '\0') {
    uVar15 = 0;
    do {
      FUN_140ab8978(param_1 + 0x130);
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(byte *)(uVar11 + 0x21));
  }
  puVar1 = param_2 + 1;
  DVar6 = GetCurrentThreadId();
  uVar10 = param_2[1];
  if ((uVar10 & 1) == 0) {
    LOCK();
    uVar7 = *puVar1;
    if (uVar10 == uVar7) {
      *puVar1 = uVar10 | 1;
    }
    UNLOCK();
    if (uVar10 != uVar7) goto LAB_140ab8cd1;
    param_2[2] = DVar6;
  }
  else {
LAB_140ab8cd1:
    if (param_2[2] == DVar6) {
      LOCK();
      *puVar1 = *puVar1 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea();
    }
  }
  piVar2 = (int *)(uVar11 + 0x68);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(uVar11 + 100) = *param_2;
    iVar8 = param_2[0x48];
    uVar10 = iVar8 + 1;
    param_2[0x48] = uVar10;
    if ((uint)param_2[0x49] < uVar10) {
      FUN_140430e10();
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x46) + (longlong)iVar8 * 8) = uVar11;
  }
  uVar10 = *puVar1;
  if (uVar10 < 4) {
    param_2[2] = 0;
    if (uVar10 < 2) {
      LOCK();
      uVar7 = *puVar1;
      if (uVar10 == uVar7) {
        *puVar1 = 0;
      }
      UNLOCK();
      if (uVar10 == uVar7) goto LAB_140ab8cef;
    }
    FUN_140d366d2();
  }
  else {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
  }
LAB_140ab8cef:
  if (param_3 < *(uint *)(param_1 + 0xa0)) {
    uVar10 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar15 = (ulonglong)((uVar10 & 0xffff ^ uVar10 >> 0x10) & *(uint *)(param_1 + 0x9c));
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0xa8) + uVar15 * 4);
    if (uVar10 == param_3) {
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0xa8) + uVar15 * 4);
      lVar12 = *(longlong *)(param_1 + 0xb0);
    }
    else {
      do {
        uVar15 = (ulonglong)uVar10;
        if (uVar10 == 0xffffffff) goto LAB_140ab8d46;
        lVar12 = *(longlong *)(param_1 + 0xb0);
        uVar10 = *(uint *)(lVar12 + uVar15 * 4);
      } while (uVar10 != param_3);
      puVar13 = (undefined4 *)(lVar12 + uVar15 * 4);
    }
    *puVar13 = *(undefined4 *)(lVar12 + (ulonglong)param_3 * 4);
  }
LAB_140ab8d46:
  if (param_3 < *(uint *)(param_1 + 0xc0)) {
    uVar11 = (ulonglong)((uint)*(ushort *)(param_1 + 0xbc) & (uint)(uVar11 >> 4) & 0xfffffff);
    uVar10 = *(uint *)(*(longlong *)(param_1 + 200) + uVar11 * 4);
    if (uVar10 == param_3) {
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 200) + uVar11 * 4);
      lVar12 = *(longlong *)(param_1 + 0xd0);
    }
    else {
      do {
        uVar11 = (ulonglong)uVar10;
        if (uVar10 == 0xffffffff) goto LAB_140ab8d8f;
        lVar12 = *(longlong *)(param_1 + 0xd0);
        uVar10 = *(uint *)(lVar12 + uVar11 * 4);
      } while (uVar10 != param_3);
      puVar13 = (undefined4 *)(lVar12 + uVar11 * 4);
    }
    *puVar13 = *(undefined4 *)(lVar12 + (ulonglong)param_3 * 4);
  }
LAB_140ab8d8f:
  lVar12 = *(longlong *)(param_1 + 0x78);
  *(undefined4 *)(lVar12 + lVar14) = 0;
  *(undefined8 *)(lVar12 + 8 + lVar14) = 0;
  iVar8 = *(int *)(param_1 + 0x90);
  uVar10 = iVar8 + 1;
  *(uint *)(param_1 + 0x90) = uVar10;
  if (*(uint *)(param_1 + 0x94) < uVar10) {
    FUN_1446f48e2();
  }
  *(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar8 * 4) = param_3;
  iVar8 = *(int *)(param_1 + 0xe0);
  if (0 < iVar8) {
    lVar14 = 0;
    bVar9 = false;
    do {
      lVar5 = *(longlong *)(param_1 + 0xd8);
      uVar10 = (uint)lVar14;
      lVar14 = (longlong)(int)uVar10;
      lVar12 = lVar5 + lVar14 * 4;
      lVar19 = 0;
      while (*(uint *)(lVar12 + lVar19 * 4) != param_3) {
        lVar3 = lVar14 + lVar19;
        lVar19 = lVar19 + 1;
        if ((longlong)iVar8 <= lVar3 + 1) {
          if (bVar9) goto LAB_140ab8f8a;
          goto LAB_140ab8dd5;
        }
      }
      iVar18 = (int)lVar19;
      if (~uVar10 + iVar8 != iVar18) {
        iVar17 = (~uVar10 + iVar8) - iVar18;
        iVar16 = 1;
        if (iVar17 < 1) {
          iVar16 = iVar17;
        }
        memmove((void *)(lVar12 + lVar19 * 4),(void *)(lVar5 + (longlong)(iVar8 - iVar16) * 4),
                (longlong)iVar16 << 2);
        iVar8 = *(int *)(param_1 + 0xe0);
      }
      lVar14 = lVar14 + lVar19;
      iVar8 = iVar8 + -1;
      *(int *)(param_1 + 0xe0) = iVar8;
      bVar9 = true;
    } while ((int)(uVar10 + iVar18) < iVar8);
LAB_140ab8f8a:
    FUN_14479f406((longlong *)(param_1 + 0xd8));
  }
LAB_140ab8dd5:
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  uVar10 = *(uint *)(param_1 + 0x60);
  lVar14 = (longlong)*(int *)(param_1 + 0x128);
  uVar7 = *(int *)(param_1 + 0x128) + 1;
  *(uint *)(param_1 + 0x128) = uVar7;
  if (*(uint *)(param_1 + 300) < uVar7) {
    FUN_146317c0a((longlong *)(param_1 + 0x120));
  }
  lVar12 = *(longlong *)(param_1 + 0x120);
  *(uint *)(lVar12 + lVar14 * 0xc) = uVar4 % uVar10;
  *(uint *)(lVar12 + 4 + lVar14 * 0xc) = uVar4 / uVar10;
  *(undefined4 *)(lVar12 + 8 + lVar14 * 0xc) = 0;
  return;
}



// FUNCTION 140ab8f9c FUN_140ab8f9c body=370 status=ok
// SIG undefined FUN_140ab8f9c(void)

void FUN_140ab8f9c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ab9043;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_140ab9043:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 140ab910e FUN_140ab910e body=454 status=ok
// SIG undefined FUN_140ab910e(void)

ulonglong * FUN_140ab910e(longlong param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  code *local_80;
  ulonglong local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *(ulonglong *)(param_1 + 0x210);
  puVar7 = (undefined *)(param_1 + 0x40);
  if (*(undefined **)(param_1 + 0x238) != (undefined *)0x0) {
    puVar7 = *(undefined **)(param_1 + 0x238);
  }
  if (uVar5 < 0xf1) {
    lVar6 = *(longlong *)(param_1 + 0x228);
    if (lVar6 == 0) {
      local_88 = *(longlong *)(param_1 + 0x220) + 0x40;
      local_80 = (code *)&LAB_1427613ff;
      lVar6 = 0;
    }
    else {
      local_80 = FUN_14276132e;
      local_88 = 0xc0;
      puVar7 = &DAT_149e18840;
    }
    uVar5 = FUN_140ab9477(param_1 + 0x100,uVar5,lVar6,puVar7);
  }
  else {
    FUN_140ab92d5(local_78,param_1,puVar7);
    lVar6 = uVar5 * -0x61c8864e7a143579;
    lVar9 = 0;
    lVar8 = 0;
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)((longlong)local_78 + lVar8 + 0x10) ^
                     *(ulonglong *)(puVar7 + lVar8 + 0x1b);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)((longlong)local_78 + lVar8 + 0x18) ^
                     *(ulonglong *)((longlong)(puVar7 + lVar8 + 0x1b) + 8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)((longlong)local_78 + lVar8) ^
                     *(ulonglong *)(puVar7 + lVar8 + 0xb);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)((longlong)local_78 + lVar8 + 8) ^
                     *(ulonglong *)((longlong)(puVar7 + lVar8 + 0xb) + 8);
      lVar6 = lVar6 + (SUB168(auVar2 * auVar4,8) ^ SUB168(auVar2 * auVar4,0));
      lVar9 = lVar9 + (SUB168(auVar1 * auVar3,8) ^ SUB168(auVar1 * auVar3,0));
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != 0x40);
    uVar5 = ((ulonglong)(lVar9 + lVar6) >> 0x25 ^ lVar9 + lVar6) * 0x165667919e3779f9;
    uVar5 = uVar5 >> 0x20 ^ uVar5;
  }
  *param_2 = uVar5;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ab92d5 FUN_140ab92d5 body=417 status=ok
// SIG undefined FUN_140ab92d5(void)

void FUN_140ab92d5(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong _Size;
  size_t _Size_00;
  uint uVar16;
  uint uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_78 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 7);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar9;
  *(undefined4 *)(param_1 + 7) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar11;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  _Size = (ulonglong)*(uint *)(param_2 + 0x40);
  if (_Size < 0x40) {
    _Size_00 = -_Size + 0x40;
    memcpy(local_78,(void *)((longlong)param_2 + (0x200 - _Size_00)),_Size_00);
    memcpy((void *)((longlong)&local_38 + -_Size),param_2 + 0x20,_Size);
    lVar2 = param_2[0x44];
    lVar13 = 0;
    do {
      auVar1 = *(undefined1 (*) [16])((longlong)local_78 + lVar13);
      auVar15 = *(undefined1 (*) [16])(lVar2 + param_3 + -7 + lVar13) ^ auVar1;
      uVar17 = auVar15._4_4_;
      auVar19._4_4_ = uVar17;
      auVar19._0_4_ = uVar17;
      auVar19._8_4_ = auVar15._12_4_;
      auVar19._12_4_ = auVar15._12_4_;
      auVar14._0_8_ = auVar1._8_8_;
      auVar14._8_4_ = auVar1._0_4_;
      auVar14._12_4_ = auVar1._4_4_;
      lVar12 = ((longlong *)((longlong)param_1 + lVar13))[1];
      *(longlong *)((longlong)param_1 + lVar13) =
           auVar14._0_8_ + *(longlong *)((longlong)param_1 + lVar13) +
           (ulonglong)uVar17 * (ulonglong)auVar15._0_4_;
      ((longlong *)((longlong)param_1 + lVar13))[1] =
           auVar14._8_8_ + lVar12 + (auVar19._8_8_ & 0xffffffff) * (ulonglong)auVar15._8_4_;
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x40);
  }
  else {
    local_98 = (ulonglong)(*(uint *)(param_2 + 0x40) - 1 >> 6);
    local_78[0] = param_2[0x41];
    local_88 = param_2[0x44];
    local_90 = param_3;
    FUN_142761163(param_1,local_78,param_2[0x43],param_2 + 0x20);
    lVar2 = param_2[0x44];
    uVar17 = *(uint *)(param_2 + 0x40);
    lVar13 = 0;
    do {
      auVar1 = *(undefined1 (*) [16])((longlong)param_2 + lVar13 + (ulonglong)uVar17 + 0xc0);
      auVar14 = *(undefined1 (*) [16])(lVar2 + param_3 + -7 + lVar13) ^ auVar1;
      uVar16 = auVar14._4_4_;
      auVar18._4_4_ = uVar16;
      auVar18._0_4_ = uVar16;
      auVar18._8_4_ = auVar14._12_4_;
      auVar18._12_4_ = auVar14._12_4_;
      auVar15._0_8_ = auVar1._8_8_;
      auVar15._8_4_ = auVar1._0_4_;
      auVar15._12_4_ = auVar1._4_4_;
      lVar12 = ((longlong *)((longlong)param_1 + lVar13))[1];
      *(longlong *)((longlong)param_1 + lVar13) =
           auVar15._0_8_ + *(longlong *)((longlong)param_1 + lVar13) +
           (ulonglong)uVar16 * (ulonglong)auVar14._0_4_;
      ((longlong *)((longlong)param_1 + lVar13))[1] =
           auVar15._8_8_ + lVar12 + (auVar18._8_8_ & 0xffffffff) * (ulonglong)auVar14._8_4_;
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x40);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ab9477 FUN_140ab9477 body=1077 status=ok
// SIG undefined FUN_140ab9477(void)

ulonglong FUN_140ab9477(ulonglong *param_1,ulonglong param_2,ulonglong param_3,uint *param_4,
                       undefined8 param_5,code *UNRECOVERED_JUMPTABLE)

{
  ulonglong *puVar1;
  longlong *plVar2;
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
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  
  uVar31 = (uint)param_3;
  if (param_2 < 0x11) {
    if (param_2 < 9) {
      if (param_2 < 4) {
        if (param_2 == 0) {
          param_3 = *(ulonglong *)(param_4 + 0xe) ^ *(ulonglong *)(param_4 + 0x10) ^ param_3;
        }
        else {
          param_3 = (param_4[1] ^ *param_4) + param_3 ^
                    (param_2 << 8 |
                    (ulonglong)
                    ((uint)*(byte *)((longlong)param_1 + (param_2 >> 1)) << 0x18 |
                    (uint)(byte)*param_1 << 0x10) |
                    (ulonglong)*(byte *)((longlong)param_1 + (param_2 - 1)));
        }
        uVar30 = (param_3 >> 0x21 ^ param_3) * -0x3d4d51c2d82b14b1;
        uVar30 = (uVar30 >> 0x1d ^ uVar30) * 0x165667b19e3779f9;
        return uVar30 >> 0x20 ^ uVar30;
      }
      uVar30 = CONCAT44((int)*param_1,*(undefined4 *)((longlong)param_1 + (param_2 - 4))) ^
               (*(ulonglong *)(param_4 + 4) ^ *(ulonglong *)(param_4 + 2)) -
               ((ulonglong)
                (uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18
                ) << 0x20 ^ param_3);
      uVar30 = ((uVar30 << 0x18 | uVar30 >> 0x28) ^ (uVar30 << 0x31 | uVar30 >> 0xf) ^ uVar30) *
               -0x604de39ae16720db;
      uVar30 = ((uVar30 >> 0x23) + param_2 ^ uVar30) * -0x604de39ae16720db;
      uVar32 = uVar30 >> 0x1c;
      goto LAB_140ab962f;
    }
    uVar30 = (*(ulonglong *)(param_4 + 8) ^ *(ulonglong *)(param_4 + 6)) + param_3 ^ *param_1;
    uVar32 = (*(ulonglong *)(param_4 + 0xc) ^ *(ulonglong *)(param_4 + 10)) - param_3 ^
             *(ulonglong *)((longlong)param_1 + (param_2 - 8));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar32;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar30;
    uVar30 = (SUB168(auVar3 * auVar16,8) ^ SUB168(auVar3 * auVar16,0)) +
             param_2 + uVar32 +
             (uVar30 >> 0x38 | (uVar30 & 0xff000000000000) >> 0x28 |
              (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
              (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 | (uVar30 & 0xff00) << 0x28 |
             uVar30 << 0x38);
LAB_140ab9610:
    uVar30 = uVar30 >> 0x25 ^ uVar30;
  }
  else {
    if (param_2 < 0x81) {
      lVar33 = param_2 * -0x61c8864e7a143579;
      if (0x20 < param_2) {
        if (0x40 < param_2) {
          if (0x60 < param_2) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = *(longlong *)(param_4 + 0x18) + param_3 ^ param_1[6];
            auVar17._8_8_ = 0;
            auVar17._0_8_ = *(longlong *)(param_4 + 0x1a) - param_3 ^ param_1[7];
            auVar5._8_8_ = 0;
            auVar5._0_8_ = *(longlong *)(param_4 + 0x1c) + param_3 ^
                           *(ulonglong *)((longlong)param_1 + (param_2 - 0x40));
            auVar18._8_8_ = 0;
            auVar18._0_8_ =
                 *(longlong *)(param_4 + 0x1e) - param_3 ^
                 *(ulonglong *)((longlong)param_1 + (param_2 - 0x38));
            lVar33 = lVar33 + (SUB168(auVar4 * auVar17,8) ^ SUB168(auVar4 * auVar17,0)) +
                     (SUB168(auVar5 * auVar18,8) ^ SUB168(auVar5 * auVar18,0));
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(longlong *)(param_4 + 0x10) + param_3 ^ param_1[4];
          auVar19._8_8_ = 0;
          auVar19._0_8_ = *(longlong *)(param_4 + 0x12) - param_3 ^ param_1[5];
          auVar7._8_8_ = 0;
          auVar7._0_8_ = *(longlong *)(param_4 + 0x14) + param_3 ^
                         *(ulonglong *)((longlong)param_1 + (param_2 - 0x30));
          auVar20._8_8_ = 0;
          auVar20._0_8_ =
               *(longlong *)(param_4 + 0x16) - param_3 ^
               *(ulonglong *)((longlong)param_1 + (param_2 - 0x28));
          lVar33 = (SUB168(auVar7 * auVar20,8) ^ SUB168(auVar7 * auVar20,0)) +
                   (SUB168(auVar6 * auVar19,8) ^ SUB168(auVar6 * auVar19,0)) + lVar33;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(longlong *)(param_4 + 8) + param_3 ^ param_1[2];
        auVar21._8_8_ = 0;
        auVar21._0_8_ = *(longlong *)(param_4 + 10) - param_3 ^ param_1[3];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(longlong *)(param_4 + 0xc) + param_3 ^
                       *(ulonglong *)((longlong)param_1 + (param_2 - 0x20));
        auVar22._8_8_ = 0;
        auVar22._0_8_ =
             *(longlong *)(param_4 + 0xe) - param_3 ^
             *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
        lVar33 = (SUB168(auVar9 * auVar22,8) ^ SUB168(auVar9 * auVar22,0)) +
                 (SUB168(auVar8 * auVar21,8) ^ SUB168(auVar8 * auVar21,0)) + lVar33;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(longlong *)param_4 + param_3 ^ *param_1;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = *(longlong *)(param_4 + 2) - param_3 ^ param_1[1];
      auVar11._8_8_ = 0;
      auVar11._0_8_ =
           param_3 + *(longlong *)(param_4 + 4) ^
           *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
      auVar24._8_8_ = 0;
      auVar24._0_8_ =
           *(longlong *)(param_4 + 6) - param_3 ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      uVar30 = (SUB168(auVar11 * auVar24,8) ^ SUB168(auVar11 * auVar24,0)) +
               (SUB168(auVar10 * auVar23,8) ^ SUB168(auVar10 * auVar23,0)) + lVar33;
      goto LAB_140ab9610;
    }
    if (0xf0 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x000140ab97b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar30 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar30;
    }
    lVar33 = param_2 * -0x61c8864e7a143579;
    lVar34 = 0;
    auVar35._8_4_ = uVar31;
    auVar35._0_8_ = param_3;
    auVar35._12_4_ = (int)(param_3 >> 0x20);
    lVar29 = 0;
    do {
      puVar1 = (ulonglong *)((longlong)param_1 + lVar29 + 0x10);
      plVar2 = (longlong *)((longlong)param_4 + lVar29 + 0x10);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *plVar2 + auVar35._8_8_ ^ *puVar1;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = plVar2[1] - auVar35._8_8_ ^ puVar1[1];
      auVar13._8_8_ = 0;
      auVar13._0_8_ =
           *(longlong *)((longlong)param_4 + lVar29) + param_3 ^
           *(ulonglong *)((longlong)param_1 + lVar29);
      auVar26._8_8_ = 0;
      auVar26._0_8_ =
           ((longlong *)((longlong)param_4 + lVar29))[1] - param_3 ^
           ((ulonglong *)((longlong)param_1 + lVar29))[1];
      lVar33 = lVar33 + (SUB168(auVar13 * auVar26,8) ^ SUB168(auVar13 * auVar26,0));
      lVar34 = lVar34 + (SUB168(auVar12 * auVar25,8) ^ SUB168(auVar12 * auVar25,0));
      lVar29 = lVar29 + 0x20;
    } while (lVar29 != 0x80);
    uVar30 = ((ulonglong)(lVar34 + lVar33) >> 0x25 ^ lVar34 + lVar33) * 0x165667919e3779f9;
    uVar30 = uVar30 >> 0x20 ^ uVar30;
    if (0x8f < param_2) {
      lVar29 = (param_2 >> 4) - 8;
      lVar33 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ =
             *(longlong *)((longlong)param_4 + lVar33 + 3) + param_3 ^
             *(ulonglong *)((longlong)param_1 + lVar33 + 0x80);
        auVar27._8_8_ = 0;
        auVar27._0_8_ =
             *(longlong *)((longlong)param_4 + lVar33 + 0xb) - param_3 ^
             *(ulonglong *)((longlong)param_1 + lVar33 + 0x88);
        uVar30 = uVar30 + (SUB168(auVar14 * auVar27,8) ^ SUB168(auVar14 * auVar27,0));
        lVar33 = lVar33 + 0x10;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    auVar15._8_8_ = 0;
    auVar15._0_8_ =
         param_3 + *(longlong *)((longlong)param_4 + 0x77) ^
         *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
    auVar28._8_8_ = 0;
    auVar28._0_8_ =
         *(longlong *)((longlong)param_4 + 0x7f) - param_3 ^
         *(ulonglong *)((longlong)param_1 + (param_2 - 8));
    uVar30 = (SUB168(auVar15 * auVar28,8) ^ SUB168(auVar15 * auVar28,0)) + uVar30;
    uVar30 = uVar30 >> 0x25 ^ uVar30;
  }
  uVar30 = uVar30 * 0x165667919e3779f9;
  uVar32 = uVar30 >> 0x20;
LAB_140ab962f:
  return uVar32 ^ uVar30;
}



// FUNCTION 140ab98ac FUN_140ab98ac body=1946 status=ok
// SIG undefined FUN_140ab98ac(void)

ulonglong FUN_140ab98ac(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_58 [40];
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if ((iVar8 < 0xc) && (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbb8), iVar8 < 0x35)) {
    uVar11 = 0;
    goto LAB_140ab9bc7;
  }
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_3 + 0x50),1);
  }
  else {
    *(undefined1 *)(param_3 + 0x50) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_3 + 0x51),1);
  }
  else {
    *(undefined1 *)(param_3 + 0x51) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      local_2c = 4;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_2c);
        }
      }
      else {
        local_2c = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x60) << 2,
                 (longlong)*(int *)(param_3 + 100) << 2);
      local_30 = *(uint *)(param_3 + 0x60);
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if (0 < (int)local_30) {
        (**(code **)(*param_2 + 0x170))
                  (param_2,*(undefined8 *)(param_3 + 0x58),
                   (longlong)(int)local_30 * (longlong)(int)local_2c);
      }
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x70) << 5,
                 (longlong)*(int *)(param_3 + 0x74) << 5);
      local_2c = 0x20;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_2c);
        }
      }
      else {
        local_2c = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      local_30 = *(uint *)(param_3 + 0x70);
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if (0 < (int)local_30) {
        lVar12 = (longlong)(int)local_30 * (longlong)(int)local_2c;
        uVar9 = *(undefined8 *)(param_3 + 0x68);
LAB_140ab9afd:
        (**(code **)(*param_2 + 0x170))(param_2,uVar9,lVar12);
      }
    }
  }
  else {
    local_2c = 0;
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    if ((local_2c == 4) && ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0)) {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x60) << 2,
                 (longlong)*(int *)(param_3 + 100) << 2);
      local_30 = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if ((int)local_30 < 0) goto LAB_140ab9c0c;
      puVar2 = (undefined8 *)(param_3 + 0x58);
      *(undefined4 *)(param_3 + 0x60) = 0;
      if (*(uint *)(param_3 + 100) != local_30) {
        FUN_140aba11c(puVar2);
      }
      if (0 < (int)local_30) {
        iVar3 = *(int *)(param_3 + 0x60);
        *(uint *)(param_3 + 0x60) = iVar3 + local_30;
        if ((uint)(*(int *)(param_3 + 100) - iVar3) < local_30) {
          FUN_14753e8f2(puVar2,iVar3);
        }
        (**(code **)(*param_2 + 0x170))
                  (param_2,*puVar2,(longlong)(int)local_30 * (longlong)(int)local_2c);
      }
    }
    else {
      FUN_14753ef10(param_2,param_3 + 0x58);
    }
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    if ((local_2c == 0x20) && ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0)) {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x70) << 5,
                 (longlong)*(int *)(param_3 + 0x74) << 5);
      local_30 = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if ((int)local_30 < 0) {
LAB_140ab9c0c:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_30);
      }
      puVar2 = (undefined8 *)(param_3 + 0x68);
      *(undefined4 *)(param_3 + 0x70) = 0;
      if (*(uint *)(param_3 + 0x74) != local_30) {
        FUN_140aba048(puVar2);
      }
      if (0 < (int)local_30) {
        iVar3 = *(int *)(param_3 + 0x70);
        *(uint *)(param_3 + 0x70) = iVar3 + local_30;
        if ((uint)(*(int *)(param_3 + 0x74) - iVar3) < local_30) {
          FUN_14753f65a(puVar2,iVar3);
        }
        lVar12 = (longlong)(int)local_30 * (longlong)(int)local_2c;
        uVar9 = *puVar2;
        goto LAB_140ab9afd;
      }
    }
    else {
      FUN_14753f4a8(param_2,param_3 + 0x68);
    }
  }
  puVar2 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_3 + 0x78),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_3 + 0x78) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  piVar6 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
    local_2c = (uint)*(byte *)(param_3 + 0x80);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_3 + 0x80) = local_2c != 0;
  }
  else {
    *(bool *)(param_3 + 0x80) = *piVar6 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar7 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_3 + 0x110),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x110) = *puVar7;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar10 = (undefined4 *)(param_3 + 0x114);
  puVar7 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar10,4);
    }
    else {
      thunk_FUN_14572512c(param_2,puVar10);
    }
  }
  else {
    *puVar10 = *puVar7;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  if (0x34 < iVar8) {
    puVar5 = (ulonglong *)param_2[1];
    if (puVar5[1] < *puVar5 + 4) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      if (1 < local_2c) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar5 = *puVar5 + 4;
    }
  }
LAB_140ab9bc7:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 140aba048 FUN_140aba048 body=212 status=ok
// SIG undefined FUN_140aba048(void)

void FUN_140aba048(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 140aba11c FUN_140aba11c body=315 status=ok
// SIG undefined FUN_140aba11c(void)

void FUN_140aba11c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140aba186;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140aba186:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,4);
  }
  return;
}



// FUNCTION 140aba258 FUN_140aba258 body=212 status=ok
// SIG undefined FUN_140aba258(void)

void FUN_140aba258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d15602(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140aba350 FUN_140aba350 body=2117 status=ok
// SIG undefined FUN_140aba350(void)

longlong FUN_140aba350(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  short sVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  longlong lVar15;
  short sVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  double *pdVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  ulonglong uVar27;
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
  
  sVar5 = *(short *)(DAT_14c992a40 + 2 + (longlong)param_5 * 4);
  sVar16 = 0x20;
  if (sVar5 < 0x20) {
    sVar16 = sVar5;
  }
  uVar18 = (ulonglong)(uint)(int)sVar16;
  *param_9 = (int)sVar16;
  if (0 < sVar5) {
    pdVar20 = (double *)(param_7 + 0x10);
    lVar15 = 0;
    do {
      dVar7 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
      lVar24 = (longlong)
               *(short *)(DAT_14c992a50 + 2 +
                         (longlong)
                         ((int)*(short *)(DAT_14c992a40 + (longlong)param_5 * 4) + (int)lVar15) * 6)
      ;
      dVar29 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
      dVar34 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
      dVar8 = dVar7 * *(double *)(DAT_14c992a20 + 0x10 + lVar24 * 0x18) * 0.5 +
              dVar7 * 0.5 + *(double *)(param_2 + 0x30);
      dVar30 = dVar29 * *(double *)(DAT_14c992a20 + 8 + lVar24 * 0x18) * 0.5 +
               dVar29 * 0.5 + *(double *)(param_2 + 0x28);
      dVar35 = dVar34 * *(double *)(DAT_14c992a20 + lVar24 * 0x18) * 0.5 +
               dVar34 * 0.5 + *(double *)(param_2 + 0x20);
      dVar10 = *param_3;
      dVar32 = param_3[1];
      dVar28 = param_3[2];
      dVar37 = dVar35 * dVar28 - dVar10 * dVar8;
      dVar31 = dVar30 * dVar10 - dVar32 * dVar35;
      dVar33 = dVar8 * dVar32 - dVar28 * dVar30;
      dVar29 = param_3[3];
      dVar7 = param_3[3];
      dVar33 = dVar33 + dVar33;
      dVar37 = dVar37 + dVar37;
      dVar31 = dVar31 + dVar31;
      dVar36 = param_3[5];
      dVar34 = param_3[6];
      pdVar20[-2] = (dVar31 * dVar32 - dVar37 * dVar28) + dVar29 * dVar33 + dVar35 + param_3[4];
      pdVar20[-1] = (dVar28 * dVar33 - dVar10 * dVar31) + dVar7 * dVar37 + dVar30 + dVar36;
      *pdVar20 = dVar31 * dVar29 + dVar8 + (dVar37 * dVar10 - dVar33 * dVar32) + dVar34;
      lVar15 = lVar15 + 1;
      uVar18 = (ulonglong)(int)*param_9;
      pdVar20 = pdVar20 + 3;
    } while (lVar15 < (longlong)uVar18);
  }
  lVar15 = *(longlong *)(param_1 + 0x88);
  plVar6 = *(longlong **)(lVar15 + 0x58);
  if (plVar6 != (longlong *)0x0) {
    cVar4 = *(char *)(lVar15 + 0x60);
    if (cVar4 == '\x01') {
      uVar14 = (ulonglong)*(byte *)(*plVar6 + 1 + (longlong)param_4 * 2);
      uVar17 = (uint)*(byte *)(plVar6[2] + -2 +
                              (*(byte *)(*plVar6 + (longlong)param_4 * 2) + uVar14) * 3);
    }
    else if (cVar4 == '\x02') {
      uVar14 = (ulonglong)*(short *)(*plVar6 + 2 + (longlong)param_4 * 4);
      uVar17 = (uint)*(short *)(plVar6[2] + -4 +
                               ((longlong)*(short *)(*plVar6 + (longlong)param_4 * 4) + uVar14) * 6)
      ;
    }
    else {
      if (cVar4 != '\x03') {
        return param_7;
      }
      uVar14 = (ulonglong)*(int *)(*plVar6 + 4 + (longlong)param_4 * 8);
      uVar17 = *(uint *)(plVar6[2] + -8 +
                        ((longlong)*(int *)(*plVar6 + (longlong)param_4 * 8) + uVar14) * 0xc);
    }
    if ((1 < (uint)uVar18) && (0 < (int)uVar14)) {
      uVar27 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x20));
      uVar25 = ~uVar27 & ((&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)] ^ 0x8000000000000000)
               | uVar27 & (&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)];
      uVar27 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x30));
      dVar36 = (double)(~uVar27 & (uVar25 ^ 0x8000000000000000) | uVar25 & uVar27);
      lVar21 = (longlong)(int)uVar17;
      lVar15 = *(longlong *)(lVar15 + 0x30);
      lVar22 = (longlong)param_4;
      iVar19 = 0;
      lVar24 = param_7;
      lVar23 = param_8;
      dVar34 = *(double *)(param_1 + 0x28) * (double)*(float *)(lVar15 + 4 + lVar21 * 0xc);
      dVar7 = (double)*(float *)(lVar15 + lVar21 * 0xc) * *(double *)(param_1 + 0x20);
      dVar29 = (double)*(float *)(lVar15 + 8 + lVar21 * 0xc) * *(double *)(param_1 + 0x30);
      do {
        param_7 = lVar23;
        lVar23 = lVar24;
        lVar15 = *(longlong *)(param_1 + 0x88);
        plVar6 = *(longlong **)(lVar15 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar4 = *(char *)(lVar15 + 0x60);
          if (cVar4 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar6[2] + 1 +
                                    (ulonglong)((uint)*(byte *)(*plVar6 + lVar22 * 2) + iVar19) * 3)
            ;
          }
          else if (cVar4 == '\x02') {
            uVar17 = (uint)*(short *)(plVar6[2] + 2 +
                                     ((longlong)iVar19 + (longlong)*(short *)(*plVar6 + lVar22 * 4))
                                     * 6);
          }
          else if (cVar4 == '\x03') {
            uVar17 = *(uint *)(plVar6[2] + 4 +
                              ((longlong)iVar19 + (longlong)*(int *)(*plVar6 + lVar22 * 8)) * 0xc);
          }
        }
        lVar15 = *(longlong *)(lVar15 + 0x30);
        lVar24 = (longlong)(int)uVar17;
        dVar31 = (double)*(float *)(lVar15 + 8 + lVar24 * 0xc) * *(double *)(param_1 + 0x30);
        dVar8 = (double)*(float *)(lVar15 + 4 + lVar24 * 0xc) * *(double *)(param_1 + 0x28);
        dVar10 = (double)*(float *)(lVar15 + lVar24 * 0xc) * *(double *)(param_1 + 0x20);
        dVar28 = (param_6[1] * (dVar29 - dVar31) - (dVar34 - dVar8) * param_6[2]) * dVar36;
        dVar29 = ((dVar7 - dVar10) * param_6[2] - (dVar29 - dVar31) * *param_6) * dVar36;
        dVar30 = (*param_6 * (dVar34 - dVar8) - (dVar7 - dVar10) * param_6[1]) * dVar36;
        dVar33 = dVar30 * dVar30 + dVar28 * dVar28 + dVar29 * dVar29;
        dVar7 = SQRT(dVar33);
        dVar34 = 0.0;
        dVar32 = 0.0;
        if (9.999999747378752e-05 <= dVar33) {
          dVar32 = dVar30 / dVar7;
          dVar34 = dVar29 / dVar7;
        }
        dVar37 = (double)(-(ulonglong)(dVar33 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar33 < 9.999999747378752e-05) & (ulonglong)(dVar28 / dVar7)
                         );
        dVar30 = dVar31 * dVar32 + dVar10 * dVar37 + dVar8 * dVar34;
        dVar33 = dVar30 * 9.99999993922529e-09 + dVar30;
        uVar27 = (ulonglong)((int)uVar18 - 1);
        dVar7 = *(double *)(lVar23 + 0x10 + uVar27 * 0x18);
        dVar29 = *(double *)(lVar23 + uVar27 * 0x18);
        dVar28 = *(double *)(lVar23 + 8 + uVar27 * 0x18);
        uVar27 = uVar18 & 0xffffffff;
        uVar18 = 0;
        lVar15 = 0;
        dVar35 = dVar7 * dVar32 + dVar37 * dVar29 + dVar28 * dVar34;
LAB_140aba885:
        uVar17 = (uint)uVar18;
        dVar1 = *(double *)(lVar23 + lVar15);
        dVar2 = *(double *)(lVar23 + 8 + lVar15);
        dVar3 = *(double *)(lVar23 + 0x10 + lVar15);
        dVar9 = dVar3 * dVar32 + dVar1 * dVar37 + dVar34 * dVar2;
        if (dVar33 < dVar9) {
          if (dVar35 < dVar33) {
            dVar11 = dVar7;
            dVar12 = dVar29;
            dVar13 = dVar28;
            if (9.99999993922529e-09 <= ABS(dVar9 - dVar35)) {
              dVar35 = (dVar30 - dVar35) / (dVar9 - dVar35);
              dVar11 = dVar7 + (dVar3 - dVar7) * dVar35;
              dVar12 = dVar29 + (dVar1 - dVar29) * dVar35;
              dVar13 = dVar28 + (dVar2 - dVar28) * dVar35;
            }
            goto LAB_140aba8dd;
          }
          goto LAB_140aba8fa;
        }
        dVar11 = dVar3;
        dVar12 = dVar1;
        dVar13 = dVar2;
        if (dVar35 <= dVar33) {
LAB_140aba8dd:
          uVar25 = (ulonglong)uVar17;
          uVar18 = (ulonglong)(uVar17 + 1);
          *(double *)(param_7 + uVar25 * 0x18) = dVar12;
          *(double *)(param_7 + 8 + uVar25 * 0x18) = dVar13;
          *(double *)(param_7 + 0x10 + uVar25 * 0x18) = dVar11;
LAB_140aba8fa:
          if ((0x1f < (uint)uVar18) ||
             (bVar26 = uVar27 * 0x18 + -0x18 == lVar15, lVar15 = lVar15 + 0x18, dVar35 = dVar9,
             dVar29 = dVar1, dVar28 = dVar2, dVar7 = dVar3, bVar26)) goto LAB_140abaa4d;
          goto LAB_140aba885;
        }
        if (9.99999993922529e-09 <= ABS(dVar9 - dVar35)) {
          dVar35 = (dVar30 - dVar35) / (dVar9 - dVar35);
          dVar7 = dVar7 + (dVar3 - dVar7) * dVar35;
          dVar28 = dVar28 + (dVar2 - dVar28) * dVar35;
          dVar29 = dVar29 + (dVar1 - dVar29) * dVar35;
        }
        *(double *)(param_7 + uVar18 * 0x18) = dVar29;
        *(double *)(param_7 + 8 + uVar18 * 0x18) = dVar28;
        *(double *)(param_7 + 0x10 + uVar18 * 0x18) = dVar7;
        if (uVar17 < 0x1f) {
          uVar17 = uVar17 + 1;
          goto LAB_140aba8dd;
        }
        uVar18 = 0x20;
LAB_140abaa4d:
        *param_9 = (uint)uVar18;
        iVar19 = iVar19 + 1;
      } while ((iVar19 < (int)uVar14) &&
              (lVar24 = param_7, dVar34 = dVar8, dVar7 = dVar10, dVar29 = dVar31, 1 < (uint)uVar18))
      ;
    }
  }
  return param_7;
}



// FUNCTION 140abab96 FUN_140abab96 body=21 status=ok
// SIG undefined FUN_140abab96(void)

undefined8 FUN_140abab96(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140ababac FUN_140ababac body=16344 status=ok
// SIG undefined FUN_140ababac(void)

void FUN_140ababac(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  float fVar2;
  byte bVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined1 uVar34;
  longlong *plVar35;
  undefined1 uVar36;
  uint uVar37;
  undefined2 uVar38;
  ulonglong uVar39;
  byte bVar40;
  ulonglong uVar41;
  int iVar42;
  uint uVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_678 [32];
  wchar_t *local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  char *local_640;
  undefined4 local_638;
  undefined4 local_630;
  undefined8 *local_628;
  undefined1 local_620;
  undefined8 local_618;
  undefined1 local_610;
  undefined1 local_602;
  undefined1 local_601;
  longlong local_600;
  undefined8 *local_5f8;
  longlong *local_5f0;
  longlong *local_5e8;
  uint *local_5e0;
  longlong local_5d8;
  longlong *local_5d0;
  uint local_5c4;
  longlong local_5c0;
  undefined8 *local_5b8;
  ulonglong *local_5b0;
  undefined1 local_5a1;
  undefined8 local_5a0;
  undefined8 local_598;
  longlong *local_590;
  longlong local_588;
  int local_57c;
  int local_578;
  undefined4 local_574;
  longlong *local_570;
  longlong local_568;
  undefined8 local_560;
  int local_554;
  ulonglong local_550;
  longlong *local_548;
  longlong *local_540;
  longlong local_538;
  uint local_530;
  int local_52c;
  longlong local_528;
  longlong *local_520;
  uint *local_518;
  longlong local_510;
  ulonglong local_508;
  longlong local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  uint local_4e8;
  undefined8 local_4e4;
  uint local_4dc;
  undefined8 local_4d8;
  uint local_4d0;
  undefined4 local_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined8 local_4bc;
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  undefined8 local_498;
  undefined1 local_489;
  undefined8 local_488;
  longlong lStack_480;
  undefined4 local_478;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  longlong lStack_440;
  undefined4 local_438;
  undefined8 local_428;
  longlong lStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  int local_408;
  int local_404;
  undefined4 local_400;
  int local_3fc;
  int local_3f8;
  undefined4 local_3f4;
  longlong *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  int local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  uint local_3c8;
  undefined4 local_3c4;
  undefined8 local_3c0;
  undefined8 *local_3b8;
  undefined8 local_3b0;
  longlong local_3a0;
  int local_398;
  uint local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  float local_36c;
  undefined1 local_368 [48];
  undefined4 local_338;
  undefined4 uStack_334;
  uint uStack_330;
  int iStack_32c;
  int local_328;
  uint uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  uint local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  uint local_300;
  undefined8 local_2fc;
  uint local_2f4;
  undefined8 local_2f0;
  uint local_2e8;
  undefined8 local_2e4;
  undefined8 uStack_2dc;
  undefined8 local_2d4;
  undefined8 local_2c8;
  longlong *local_2c0;
  longlong local_2b8;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  longlong *local_268;
  longlong lStack_260;
  undefined *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined6 uStack_240;
  undefined2 uStack_23a;
  undefined6 uStack_238;
  undefined8 local_228;
  uint uStack_220;
  int iStack_21c;
  int iStack_218;
  uint uStack_214;
  undefined8 uStack_210;
  uint local_208;
  undefined8 uStack_204;
  undefined2 uStack_1fc;
  undefined2 uStack_1fa;
  undefined2 uStack_1f8;
  undefined1 uStack_1f6;
  undefined1 uStack_1f5;
  undefined1 uStack_1f4;
  undefined1 uStack_1f3;
  undefined6 uStack_1f2;
  longlong *local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined8 local_130;
  longlong lStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_678;
  local_5c0 = param_1;
  if (DAT_14cb0d2b0 == 0) {
LAB_140abacaf:
    local_498 = DAT_14c967818;
    uVar17 = DAT_14c967818;
  }
  else {
    lVar13 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
    if ((lVar13 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar13);
    }
    else if (lVar13 == 0) goto LAB_140abacaf;
    plVar35 = *(longlong **)(lVar13 + 0xf8);
    if (plVar35 == (longlong *)0x0) goto LAB_140abacaf;
    plVar19 = (longlong *)plVar35[0x12];
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      (**(code **)(*plVar35 + 0x28))(plVar35,&local_498);
      local_540 = plVar19;
      local_600 = (**(code **)(*plVar19 + 0x30))(plVar19);
      local_574 = 0;
      goto LAB_140abacd6;
    }
    uVar17 = (**(code **)(*plVar35 + 0x28))(plVar35,&local_498);
  }
  local_574 = (undefined4)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
  local_540 = (longlong *)0x0;
  local_600 = 0;
LAB_140abacd6:
  lVar11 = DAT_14cc28e58;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar42 = *(int *)(lVar13 + 0xc60);
  if (iVar42 == 0x40000002) {
    uVar41 = 0;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar42 != 2)) {
      if (iVar42 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar44 = DVar7 == DVar8;
      }
      else {
        bVar44 = false;
      }
    }
    uVar41 = (ulonglong)(bVar44 ^ 1);
  }
  bVar40 = 0;
  local_5d8 = param_2;
  if ((local_600 != 0) && (bVar40 = 0, *(int *)(lVar11 + uVar41 * 4) != 0)) {
    if (*(int *)(local_5c0 + 0x3c) < *(int *)(local_5c0 + 0x10)) {
      local_598 = (int *)(lVar13 + 0xc60);
      (**(code **)(*DAT_14ca83900 + 0x2c8))(DAT_14ca83900,&local_4a0,local_540);
      uVar6 = ((uint)((ulonglong)local_4a0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_4a0 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar37 = uVar6 & 0x7fffffff ^ uVar6 >> 0x10;
      uVar6 = *(uint *)(param_2 + 0x248);
      uVar32 = uVar37 & uVar6;
      lVar13 = param_2 + 0x230;
      if (*(longlong *)(param_2 + 0x238) != 0) {
        lVar13 = *(longlong *)(param_2 + 0x238);
      }
      lVar11 = param_2 + 0x218;
      if (*(longlong *)(param_2 + 0x220) != 0) {
        lVar11 = *(longlong *)(param_2 + 0x220);
      }
      do {
        if (*(uint *)(lVar13 + (longlong)(int)uVar32 * 4) == uVar37) {
          iVar42 = *(int *)(lVar11 + (longlong)(int)uVar32 * 4);
          lVar14 = (longlong)iVar42 * 0x10;
          if (*(longlong **)(*(longlong *)(param_2 + 0x1d8) + lVar14) == local_4a0) {
            if (((iVar42 != -1) &&
                (puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar14 + 8),
                puVar20 != (undefined8 *)0x0)) &&
               (local_5e0 = (uint *)*puVar20, local_5e0 != (uint *)0x0)) goto LAB_140abb2f7;
            break;
          }
        }
        uVar32 = uVar32 + 1 & uVar6;
      } while (uVar32 != (*(int *)(param_2 + 0x24c) + uVar37 + 1 & uVar6));
      FUN_1447ec05f(&local_228,local_4a0,0);
      local_5e0 = (uint *)FUN_14473c272(local_5d8,&local_228,0);
      if (local_228 != (longlong *)0x0) {
        (**(code **)(*local_228 + 0x38))();
      }
LAB_140abb2f7:
      lVar13 = local_5c0;
      param_2 = local_5d8;
      local_5f0 = (longlong *)(local_5c0 + 0x68);
      if (((*(longlong **)(local_5c0 + 0x68) == (longlong *)0x0) ||
          (lVar11 = (**(code **)(**(longlong **)(local_5c0 + 0x68) + 0x10))(),
          *(uint *)(lVar11 + 0x2c) != local_5e0[0x21])) ||
         ((lVar11 = (**(code **)(*(longlong *)*local_5f0 + 0x10))(),
          *(uint *)(lVar11 + 0x30) != local_5e0[0x22] ||
          (lVar11 = (**(code **)(*(longlong *)*local_5f0 + 0x10))(),
          *(char *)(lVar11 + 0x28) != *(char *)((longlong)local_5e0 + 0x93))))) {
        lVar13 = (**(code **)(*local_4a0 + 8))();
        uVar9 = DAT_14ca83a68;
        uVar37 = DAT_14ca83a64;
        iVar28 = DAT_14ca83a60;
        iVar42 = DAT_14ca83a5c;
        uVar6 = DAT_14ca83a58;
        uVar36 = *(undefined1 *)(lVar13 + 0x33);
        uVar41 = *(ulonglong *)(local_5e0 + 0x21);
        local_208 = 0;
        uStack_1fc = 1;
        uStack_1f6 = 0;
        uStack_220 = DAT_14ca83a58;
        iStack_21c = DAT_14ca83a5c;
        iStack_218 = DAT_14ca83a60;
        uStack_214 = DAT_14ca83a64;
        uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
        uStack_1f4 = 0;
        uStack_1f3 = 0xff;
        uStack_1fa = 1;
        uStack_1f8 = 0x101;
        local_228 = (longlong *)&DAT_00020008;
        local_658 = L"BackBufferRT";
        uStack_204 = uVar41;
        uStack_1f5 = uVar36;
        FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228,local_5f0);
        lVar13 = local_5c0;
        local_208 = 0;
        uStack_1fc = 1;
        uStack_1f6 = 0;
        uStack_220 = uVar6;
        iStack_21c = iVar42;
        iStack_218 = iVar28;
        uStack_214 = uVar37;
        uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),uVar9);
        uStack_1f4 = 0;
        uStack_1f3 = 0xff;
        uStack_1fa = 1;
        uStack_1f8 = 0x101;
        local_228 = (longlong *)&DAT_00020008;
        local_658 = L"InterpolatedRT";
        uStack_204 = uVar41;
        uStack_1f5 = uVar36;
        FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228,local_5c0 + 0x70);
      }
      if (*(int *)(local_600 + 0xa4) == 1) {
        puVar20 = (undefined8 *)(lVar13 + 0x78);
        if (((*(longlong **)(lVar13 + 0x78) == (longlong *)0x0) ||
            (lVar11 = (**(code **)(**(longlong **)(lVar13 + 0x78) + 0x10))(),
            *(uint *)(lVar11 + 0x2c) != local_5e0[0x21])) ||
           ((lVar11 = (**(code **)(*(longlong *)*puVar20 + 0x10))(),
            *(uint *)(lVar11 + 0x30) != local_5e0[0x22] ||
            (lVar11 = (**(code **)(*(longlong *)*puVar20 + 0x10))(),
            *(char *)(lVar11 + 0x28) != *(char *)((longlong)local_5e0 + 0x93))))) {
          lVar13 = (**(code **)(*local_4a0 + 8))();
          uVar9 = DAT_14ca83a68;
          uVar37 = DAT_14ca83a64;
          iVar28 = DAT_14ca83a60;
          iVar42 = DAT_14ca83a5c;
          uVar6 = DAT_14ca83a58;
          uVar36 = *(undefined1 *)(lVar13 + 0x33);
          uVar41 = *(ulonglong *)(local_5e0 + 0x21);
          local_208 = 0;
          uStack_1fc = 1;
          uStack_1f6 = 0;
          uStack_220 = DAT_14ca83a58;
          iStack_21c = DAT_14ca83a5c;
          iStack_218 = DAT_14ca83a60;
          uStack_214 = DAT_14ca83a64;
          uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
          uStack_1f4 = 0;
          uStack_1f3 = 0xff;
          uStack_1fa = 1;
          uStack_1f8 = 0x101;
          local_228 = (longlong *)&DAT_00020008;
          local_658 = L"AsyncBufferRT0";
          uStack_204 = uVar41;
          uStack_1f5 = uVar36;
          FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228,puVar20);
          lVar13 = local_5c0;
          local_208 = 0;
          uStack_1fc = 1;
          uStack_1f6 = 0;
          uStack_220 = uVar6;
          iStack_21c = iVar42;
          iStack_218 = iVar28;
          uStack_214 = uVar37;
          uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),uVar9);
          uStack_1f4 = 0;
          uStack_1f3 = 0xff;
          uStack_1fa = 1;
          uStack_1f8 = 0x101;
          local_228 = (longlong *)&DAT_00020008;
          local_658 = L"AsyncBufferRT1";
          uStack_204 = uVar41;
          uStack_1f5 = uVar36;
          FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228,local_5c0 + 0x80);
        }
      }
      FUN_149827e84(local_600);
      local_4a8 = *(longlong **)(lVar13 + 0x70);
      if (local_4a8 != (longlong *)0x0) {
        (**(code **)(*local_4a8 + 0x30))();
      }
      local_4b0 = (longlong *)*local_5f0;
      if (local_4b0 != (longlong *)0x0) {
        (**(code **)(*local_4b0 + 0x30))();
      }
      lVar11 = local_600;
      FUN_149827ede(local_600,&local_4b0,&local_4a8);
      *(undefined1 *)(lVar11 + 0xac) = 1;
      local_4e8 = DAT_14c9a52a0;
      local_4f0 = DAT_14c9a5298;
      local_4e4 = DAT_14c9a5298;
      local_4dc = DAT_14c9a52a0;
      local_4d8 = DAT_14c9a5298;
      local_4d0 = DAT_14c9a52a0;
      local_4cc = 0;
      uStack_4c8 = 0;
      uStack_4c4 = 1;
      uStack_4c0 = 0;
      local_4bc = 0x100000000;
      uVar9 = 0;
      lVar14 = FUN_14473c272(param_2,local_5f0,0);
      lVar15 = FUN_14473c272(param_2,lVar13 + 0x70,0);
      local_538 = lVar14;
      FUN_1400e8d41(param_2,local_5e0,lVar14,&local_4f0);
      if (*(int *)(lVar11 + 0xa4) == 1) {
        local_538 = FUN_14473c272(param_2,lVar13 + (ulonglong)*(uint *)(lVar13 + 0x150) * 8 + 0x78,0
                                 );
        FUN_1400e8d41(param_2,local_5e0,local_538,&local_4f0);
        *(uint *)(lVar13 + 0x150) = ~*(uint *)(lVar13 + 0x150) & 1;
        if (*(ulonglong *)(lVar13 + 0x140) <= *(ulonglong *)(lVar13 + 0x148)) {
          uVar9 = *(undefined4 *)(lVar13 + 0x154);
        }
        *(undefined4 *)(lVar13 + 0x154) = uVar9;
      }
      uVar36 = *(undefined1 *)(lVar15 + 0x94);
      puVar1 = (ulonglong *)(param_2 + 0x70);
      puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar20 = puVar30 + 9;
      local_5b0 = puVar1;
      if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
        FUN_140023dd8(puVar1,0x50);
        puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar20 = puVar30 + 9;
      }
      local_588 = param_2 + 0x198;
      *(undefined8 **)(param_2 + 0x70) = puVar20;
      puVar30[1] = *(undefined8 *)(lVar15 + 8);
      puVar30[2] = 0;
      uVar41 = 0;
      *(undefined1 *)(puVar30 + 3) = 0;
      *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar30 + 5) = 0;
      *puVar30 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar30 + 6) = uVar36;
      *(undefined1 *)(puVar30 + 7) = 0;
      *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
      puVar30[8] = lVar15;
      iVar42 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar42 + 1U;
      local_510 = lVar15;
      if (*(uint *)(param_2 + 0x1a4) < iVar42 + 1U) {
        FUN_1447568fc(local_588,iVar42);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar42 * 8) = puVar30;
      *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      FUN_14742bae0(param_2,puVar30,&DAT_14c8464e0,2);
      puVar25 = (uint *)(local_5c0 + 0x18);
      uVar6 = *(uint *)(local_5c0 + 0x30);
      uVar10 = (ulonglong)uVar6;
      uVar39 = 1;
      iVar42 = 0;
      uVar37 = 0;
      if (uVar6 != 0) {
        puVar16 = *(uint **)(local_5c0 + 0x28);
        if (*(uint **)(local_5c0 + 0x28) == (uint *)0x0) {
          puVar16 = puVar25;
        }
        uVar37 = *puVar16;
        if (uVar37 == 0) {
          iVar42 = uVar6 + 0x1e;
          if (-1 < (int)(uVar6 - 1)) {
            iVar42 = uVar6 - 1;
          }
          uVar41 = 0;
          uVar39 = (ulonglong)(uint)(iVar42 >> 5);
          if (iVar42 >> 5 < 1) {
            uVar39 = uVar41;
          }
          iVar42 = 0;
          do {
            if (uVar39 == uVar41) {
              local_5a0 = 0;
              goto LAB_140abb9fe;
            }
            iVar42 = iVar42 + 0x20;
            uVar37 = puVar16[uVar41 + 1];
            uVar41 = uVar41 + 1;
          } while (uVar37 == 0);
        }
        else {
          uVar41 = 0;
        }
        uVar39 = (ulonglong)(-uVar37 & uVar37);
        uVar31 = uVar39 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar37 = (iVar42 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar6 <= (int)uVar37) {
          uVar37 = uVar6;
        }
      }
      local_5a0 = 0;
      if (uVar37 != uVar6) {
        local_570 = (longlong *)(param_2 + 0x98);
        local_520 = (longlong *)(param_2 + 0x178);
        local_528 = param_2 + 0x168;
        uVar32 = 0xffffffff;
        local_5a0 = 0;
        local_554 = 0;
        lVar13 = local_5c0;
        local_550 = uVar10;
        local_518 = puVar25;
        do {
          lVar11 = *(longlong *)(lVar13 + 8);
          lVar15 = (longlong)(int)uVar37 * 0x68;
          lVar14 = *(longlong *)(lVar11 + lVar15);
          if ((((*(longlong *)(lVar14 + 0x10) != 0) &&
               ((*(byte *)(lVar11 + 0x5d + lVar15) & 1) != 0)) &&
              (lVar24 = *(longlong *)(lVar11 + 8 + lVar15), lVar24 != 0)) &&
             (((int)local_498 == *(int *)(lVar24 + 0x84) &&
              (local_498._4_4_ == *(int *)(lVar24 + 0x88))))) {
            local_5f0 = *(longlong **)(lVar11 + 0x10 + lVar15);
            local_5b8 = *(undefined8 **)(lVar11 + 0x18 + lVar15);
            puVar20 = *(undefined8 **)(lVar11 + 0x20 + lVar15);
            uVar17 = *(undefined8 *)(lVar11 + 0x28 + lVar15);
            iVar28 = *(int *)(lVar11 + 0x30 + lVar15);
            plVar35 = (longlong *)(ulonglong)*(uint *)(lVar11 + 0x34 + lVar15);
            uVar9 = *(undefined4 *)(lVar11 + 0x50 + lVar15);
            uVar21 = *(undefined4 *)(lVar11 + 0x54 + lVar15);
            bVar40 = *(byte *)(lVar11 + 0x5c + lVar15);
            local_500 = DAT_14cb0d2b0;
            local_52c = iVar42;
            if (DAT_14cb0d2b0 == 0) {
LAB_140abbcba:
              local_2c8 = DAT_14c967818;
              local_590 = (longlong *)0x0;
              local_548 = (longlong *)0x0;
            }
            else {
              lVar13 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
              if ((lVar13 != 0 & DAT_14c950c29) == 1) {
                local_5d0 = (longlong *)CONCAT71(local_5d0._1_7_,bVar40);
                local_5f8 = puVar20;
                local_5e8 = plVar35;
                FUN_1456cec3c(lVar13);
                plVar35 = local_5e8;
                puVar20 = local_5f8;
                bVar40 = (byte)local_5d0;
              }
              else if (lVar13 == 0) goto LAB_140abbcba;
              local_548 = *(longlong **)(lVar13 + 0xf8);
              if (local_548 == (longlong *)0x0) goto LAB_140abbcba;
              local_5d0 = (longlong *)CONCAT71(local_5d0._1_7_,bVar40);
              local_590 = (longlong *)local_548[0x12];
              if (local_590 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_590 + 1) = (int)local_590[1] + 1;
                UNLOCK();
              }
              local_5f8 = puVar20;
              (**(code **)(*local_548 + 0x28))(local_548,&local_2c8);
              puVar20 = local_5f8;
              bVar40 = (byte)local_5d0;
            }
            uVar6 = (int)((ulonglong)uVar17 >> 0x20) - (int)((ulonglong)puVar20 >> 0x20);
            iVar42 = (int)uVar17 - (int)puVar20;
            bVar44 = *(int *)(DAT_14cc28cc0 + 4) == 0;
            if (bVar44) {
              iVar28 = iVar42;
            }
            local_5f8 = (undefined8 *)CONCAT44(local_5f8._4_4_,iVar28);
            local_5e8 = (longlong *)((ulonglong)plVar35 & 0xffffffff);
            if (bVar44) {
              local_5e8 = (longlong *)(ulonglong)uVar6;
            }
            local_57c = *(int *)(lVar14 + 0x4d8);
            local_578 = *(int *)(lVar14 + 0x4dc);
            local_602 = true;
            if ((bVar40 & 1) == 0) {
              local_602 = *(int *)(local_5c0 + 0x154) == 0;
            }
            uVar43 = *(int *)(lVar14 + 0x4e4) - local_578;
            uVar37 = *(int *)(lVar14 + 0x4e0) - local_57c;
            local_568 = CONCAT71(local_568._1_7_,*(undefined1 *)(local_600 + 0xad));
            fVar2 = *(float *)(local_5c0 + 0x128);
            local_300 = DAT_14c9a52a0;
            local_308 = DAT_14c9a5298;
            local_2f4 = DAT_14c9a52a0;
            local_2fc = DAT_14c9a5298;
            local_2e8 = DAT_14c9a52a0;
            local_2f0 = DAT_14c9a5298;
            local_2e4 = 0;
            uStack_2dc = 1;
            local_2d4 = 0x100000000;
            memset(&local_3b8,0,0xb0);
            local_3c0 = 0x20004;
            lVar13 = *(longlong *)(lVar14 + 8);
            local_3b0 = *(undefined8 *)(lVar13 + 0xb0);
            local_380 = *(float *)(lVar13 + 0x9c) * 1000.0;
            local_378 = 0x7f7fffff;
            local_36c = 1.0 / *(float *)(lVar14 + 0x1108);
            local_390 = (float)*(double *)(lVar14 + 0x125a0);
            local_38c = (float)*(double *)(lVar14 + 0x125a8);
            local_388 = (float)iVar42;
            local_384 = (float)(int)uVar6;
            lStack_128 = 0;
            local_130 = 0x2000a;
            fStack_118 = (float)*(double *)(lVar14 + 0x10b0);
            fStack_11c = (float)*(double *)(lVar14 + 0x10a8);
            local_120 = (float)*(double *)(lVar14 + 0x10a0);
            fStack_10c = (float)*(double *)(lVar14 + 0x9f8);
            local_110 = (float)*(double *)(lVar14 + 0x9d8);
            fStack_114 = (float)*(double *)(lVar14 + 0x9b8);
            fStack_f4 = (float)*(double *)(lVar14 + 0xa00);
            fStack_f8 = (float)*(double *)(lVar14 + 0x9e0);
            fStack_fc = (float)*(double *)(lVar14 + 0x9c0);
            local_100 = (float)*(double *)(lVar14 + 0x9f0);
            fStack_104 = (float)*(double *)(lVar14 + 0x9d0);
            fStack_108 = (float)*(double *)(lVar14 + 0x9b0);
            fVar45 = (float)(int)uVar43 * *(float *)(lVar13 + 0x110) * *(float *)(lVar14 + 0x45c);
            uVar27 = -((int)ROUND(-0.5 - (fVar45 + fVar45)) >> 1);
            fVar45 = (float)(int)uVar37 * *(float *)(lVar13 + 0x110) * *(float *)(lVar14 + 0x45c);
            uVar29 = -((int)ROUND(-0.5 - (fVar45 + fVar45)) >> 1);
            local_3e0 = 0;
            local_3e8 = 0x20001;
            local_398 = iVar42;
            local_394 = uVar6;
            local_374 = uVar9;
            local_370 = uVar21;
            local_3c4 = FUN_14981064d(*(undefined1 *)((longlong)local_5e0 + 0x93),0);
            param_2 = local_5d8;
            lVar13 = DAT_14cc28f48;
            local_3d4 = uVar29;
            if (uVar29 < uVar37) {
              local_3d4 = uVar37;
            }
            local_3d0 = uVar27;
            if (uVar27 < uVar43) {
              local_3d0 = uVar43;
            }
            iVar42 = *local_598;
            uVar10 = 0;
            local_530 = uVar37;
            local_3cc = uVar29;
            local_3c8 = uVar27;
            if (iVar42 != 0x40000002) {
              bVar44 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar42 != 2)) {
                if (iVar42 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar8 = GetCurrentThreadId();
                  bVar44 = DVar7 == DVar8;
                }
                else {
                  bVar44 = false;
                }
              }
              uVar10 = (ulonglong)(bVar44 ^ 1);
            }
            local_3d8 = 0x39 - (uint)(*(int *)(lVar13 + uVar10 * 4) == 0);
            local_508 = (ulonglong)uVar43;
            FUN_149827ac6(local_600,&local_3f0,*(undefined4 *)(*(longlong *)(lVar14 + 0x10) + 0x20))
            ;
            plVar35 = local_3f0 + 0xc;
            if ((longlong *)local_3f0[0xc] == (longlong *)0x0) {
LAB_140abc139:
              uStack_204 = (ulonglong)local_5f8 & 0xffffffff | (longlong)local_5e8 << 0x20;
              local_208 = 0;
              uStack_1fc = 1;
              uStack_1f6 = 0;
              uStack_220 = DAT_14ca83a58;
              iStack_21c = DAT_14ca83a5c;
              iStack_218 = DAT_14ca83a60;
              uStack_214 = DAT_14ca83a64;
              uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
              uStack_1f5 = 0xf;
              uStack_1f4 = 0;
              uStack_1fa = 1;
              uStack_1f8 = 0x101;
              local_228 = (longlong *)0x20009;
              uStack_1f3 = 0xff;
              local_658 = L"FFXFIMotionVectorTexture";
              FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228);
            }
            else {
              lVar13 = (**(code **)(*(longlong *)local_3f0[0xc] + 0x10))();
              if ((*(int *)(lVar13 + 0x2c) != (uint)local_5f8) ||
                 (lVar13 = (**(code **)(*(longlong *)*plVar35 + 0x10))(),
                 *(int *)(lVar13 + 0x30) != (int)local_5e8)) goto LAB_140abc139;
            }
            local_5d0 = (longlong *)FUN_14473c272(param_2,plVar35,0);
            puVar1 = local_5b0;
            puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar20 = puVar30 + 0xc;
            if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
              FUN_140023dd8(local_5b0,0x70);
              puVar30 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              puVar20 = puVar30 + 0xc;
            }
            plVar35 = local_5d0;
            *(undefined8 **)(param_2 + 0x70) = puVar20;
            *puVar30 = &PTR_FUN_14beac618;
            puVar30[8] = 0;
            puVar30[2] = 0;
            puVar30[3] = 0;
            *(undefined4 *)(puVar30 + 4) = 0;
            puVar30[5] = 0;
            puVar30[6] = 0;
            *(undefined1 *)(puVar30 + 9) = 1;
            puVar30[10] = 0;
            iVar42 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar42 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar42 + 1U) {
              FUN_1448cfae8(local_570,iVar42);
            }
            puVar1 = local_5b0;
            *(undefined8 **)(*local_570 + (longlong)iVar42 * 8) = puVar30;
            local_560 = CONCAT71(local_560._1_7_,*(undefined1 *)((longlong)plVar35 + 0x94));
            uVar36 = *(undefined1 *)((longlong)local_5f0 + 0x90);
            if ((*(char *)((longlong)local_5f0 + 0x92) == '\x04') ||
               (*(char *)((longlong)local_5f0 + 0x92) == '\x01')) {
              uVar38 = *(undefined2 *)((longlong)local_5f0 + 0x8e);
            }
            else {
              uVar38 = 0;
            }
            uVar34 = *(undefined1 *)((longlong)local_5b8 + 0x90);
            if ((*(char *)((longlong)local_5b8 + 0x92) == '\x04') ||
               (*(char *)((longlong)local_5b8 + 0x92) == '\x01')) {
              uVar6 = (uint)*(ushort *)((longlong)local_5b8 + 0x8e);
            }
            else {
              uVar6 = 0;
            }
            if (local_5f0 == (longlong *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)((longlong)local_5f0 + 0xac);
            }
            puVar30[2] = local_5f0;
            puVar30[3] = uVar17;
            *(undefined4 *)(puVar30 + 4) = 0x10;
            puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar20 = puVar33 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
              local_601 = uVar34;
              local_5c4 = uVar6;
              local_5a1 = uVar36;
              FUN_140023dd8(local_5b0,0x48);
              puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar20 = puVar33 + 8;
              uVar36 = local_5a1;
              uVar34 = local_601;
              uVar6 = local_5c4;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar20;
            puVar33[1] = *(undefined8 *)((longlong)local_5f0 + 8);
            puVar33[2] = 0;
            *(undefined1 *)(puVar33 + 3) = 1;
            *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
            *puVar33 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar33 + 5) = 0;
            *(undefined1 *)((longlong)puVar33 + 0x2a) = uVar36;
            *(undefined1 *)((longlong)puVar33 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar33 + 0x2c) = 0;
            *(undefined2 *)((longlong)puVar33 + 0x2e) = uVar38;
            *(undefined1 *)(puVar33 + 6) = 0;
            *(undefined1 *)((longlong)puVar33 + 0x32) = 0;
            puVar33[7] = local_5f0;
            iVar42 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar42 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar42 + 1U) {
              local_601 = uVar34;
              local_5c4 = uVar6;
              FUN_1447568fc(local_588,iVar42);
              uVar34 = local_601;
              uVar6 = local_5c4;
            }
            puVar1 = local_5b0;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar42 * 8) = puVar33;
            *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar30[5] = puVar33;
            puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar20 = puVar33 + 8;
            if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
              local_5c4 = uVar6;
              FUN_140023dd8(local_5b0,0x48);
              puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar20 = puVar33 + 8;
              uVar6 = local_5c4;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar20;
            puVar33[1] = *(undefined8 *)((longlong)local_5b8 + 8);
            puVar33[2] = 0;
            *(undefined1 *)(puVar33 + 3) = 1;
            *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
            *puVar33 = &PTR_FUN_14a203858;
            *(undefined2 *)(puVar33 + 5) = 0;
            *(undefined1 *)((longlong)puVar33 + 0x2a) = uVar34;
            *(undefined1 *)((longlong)puVar33 + 0x2b) = 0;
            *(undefined2 *)((longlong)puVar33 + 0x2c) = 0;
            *(short *)((longlong)puVar33 + 0x2e) = (short)uVar6;
            *(undefined1 *)(puVar33 + 6) = 0;
            *(undefined1 *)((longlong)puVar33 + 0x32) = 0;
            puVar33[7] = local_5b8;
            iVar42 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar42 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar42 + 1U) {
              FUN_1447568fc(local_588,iVar42);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar42 * 8) = puVar33;
            *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar30[6] = puVar33;
            lVar13 = FUN_1447e4f80();
            puVar1 = local_5b0;
            cVar5 = *(char *)(lVar13 + 0x41);
            if (*(char *)(lVar13 + 0x41) == '\x03') {
              cVar5 = '\x02';
            }
            puVar30[8] = *(undefined8 *)(lVar14 + 0x18);
            *(char *)(puVar30 + 9) = cVar5;
            puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar20 = puVar33 + 9;
            if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
              FUN_140023dd8(local_5b0,0x50);
              puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar20 = puVar33 + 9;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar20;
            puVar33[1] = *(undefined8 *)((longlong)local_5d0 + 8);
            puVar33[2] = 0;
            *(undefined1 *)(puVar33 + 3) = 0;
            *(undefined8 *)((longlong)puVar33 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar33 + 5) = 0;
            *puVar33 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar33 + 6) = (undefined1)local_560;
            *(undefined1 *)(puVar33 + 7) = 0;
            *(undefined4 *)((longlong)puVar33 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar33 + 0x35) = 0;
            puVar33[8] = local_5d0;
            iVar42 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar42 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar42 + 1U) {
              FUN_1447568fc(local_588,iVar42);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar42 * 8) = puVar33;
            *(int *)((longlong)puVar33 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar30[10] = puVar33;
            uVar17 = *(undefined8 *)(lVar14 + 0x13818);
            FUN_145f3bfe2();
            FUN_1448e935e(uVar17,&local_228,&DAT_14cc2ac70,0);
            FUN_145f3bfe2();
            iVar42 = *(int *)((longlong)local_5f0 + 0x88) + 7;
            local_3f8 = *(int *)((longlong)local_5f0 + 0x88) + 0xe;
            if (-1 < iVar42) {
              local_3f8 = iVar42;
            }
            local_3f8 = local_3f8 >> 3;
            iVar42 = *(int *)((longlong)local_5f0 + 0x84) + 7;
            local_3fc = *(int *)((longlong)local_5f0 + 0x84) + 0xe;
            if (-1 < iVar42) {
              local_3fc = iVar42;
            }
            local_3fc = local_3fc >> 3;
            local_3f4 = 1;
            local_658 = (wchar_t *)&local_3fc;
            FUN_149827d1f(param_2,&local_2a8,&local_228,puVar30 + 2);
            if ((*(int *)(DAT_14cc28ed0 + 4) == 0) ||
               (iVar42 = *(int *)(param_2 + 0x180), iVar42 == 0)) {
LAB_140abc679:
              local_5b8 = (undefined8 *)0x0;
            }
            else {
              lVar13 = *local_520;
              iVar28 = 0;
              do {
                lVar11 = *(longlong *)(lVar13 + (longlong)iVar28 * 8);
                iVar22 = wcscmp(*(wchar_t **)(lVar11 + 8),L"Distortion");
                puVar1 = local_5b0;
                param_2 = local_5d8;
                if (iVar22 == 0) {
                  if (lVar11 != 0) {
                    if ((*(byte *)(lVar11 + 0x24) & 4) == 0) goto LAB_140abc679;
                    iVar42 = (uint)local_5f8;
                    if (DAT_14ca84e40 <= (int)(uint)local_5f8) {
                      iVar42 = DAT_14ca84e40;
                    }
                    if (iVar42 < 2) {
                      iVar42 = 1;
                    }
                    iVar28 = DAT_14ca84e40;
                    if ((int)local_5e8 < DAT_14ca84e40) {
                      iVar28 = (int)local_5e8;
                    }
                    uStack_220 = DAT_14ca83a58;
                    iStack_21c = DAT_14ca83a5c;
                    iStack_218 = DAT_14ca83a60;
                    uStack_214 = DAT_14ca83a64;
                    uStack_1f6 = 0;
                    local_228 = (longlong *)&DAT_00020008;
                    uStack_1f5 = 0xf;
                    uStack_1f4 = 0;
                    uStack_1fc = 1;
                    uStack_1fa = 1;
                    uStack_1f8 = 0x101;
                    local_208 = 0;
                    uStack_1f3 = 0xff;
                    uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
                    if (iVar28 < 2) {
                      iVar28 = 1;
                    }
                    uStack_204 = CONCAT44(iVar28,iVar42);
                    puVar30 = (undefined8 *)
                              (*(longlong *)(local_5d8 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar20 = puVar30 + 0x24;
                    if (*(undefined8 **)(local_5d8 + 0x78) < puVar20) {
                      FUN_140023dd8(local_5b0,0x128);
                      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar20 = puVar30 + 0x24;
                    }
                    *(undefined8 **)(param_2 + 0x70) = puVar20;
                    FUN_1456bbb8c(puVar30,L"FFXFIDistortionTexture",&local_228,0);
                    iVar42 = *(int *)(param_2 + 0x180);
                    uVar6 = iVar42 + 1;
                    *(uint *)(param_2 + 0x180) = uVar6;
                    if (*(uint *)(param_2 + 0x184) < uVar6) {
                      FUN_14472c0f6(local_520);
                    }
                    puVar1 = local_5b0;
                    *(undefined8 **)(*(longlong *)(param_2 + 0x178) + (longlong)iVar42 * 8) =
                         puVar30;
                    *(int *)((longlong)puVar30 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
                    puVar33 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
                    puVar20 = puVar33 + 8;
                    local_5b8 = puVar30;
                    if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
                      FUN_140023dd8(local_5b0);
                      puVar33 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                      puVar20 = puVar33 + 8;
                    }
                    *(undefined8 **)(param_2 + 0x70) = puVar20;
                    *puVar33 = &PTR_FUN_14beac638;
                    puVar33[2] = 0;
                    puVar33[4] = 0;
                    *(undefined1 *)(puVar33 + 5) = 1;
                    puVar33[6] = 0;
                    iVar42 = *(int *)(param_2 + 0xa0);
                    uVar6 = iVar42 + 1;
                    *(uint *)(param_2 + 0xa0) = uVar6;
                    if (*(uint *)(param_2 + 0xa4) < uVar6) {
                      FUN_1448cfae8(local_570);
                    }
                    *(undefined8 **)(*local_570 + (longlong)iVar42 * 8) = puVar33;
                    lVar13 = FUN_1447e4f80();
                    puVar1 = local_5b0;
                    cVar5 = *(char *)(lVar13 + 0x41);
                    if (*(char *)(lVar13 + 0x41) == '\x03') {
                      cVar5 = '\x02';
                    }
                    puVar33[4] = *(undefined8 *)(lVar14 + 0x18);
                    *(char *)(puVar33 + 5) = cVar5;
                    if ((*(char *)(lVar11 + 0x92) == '\x04') || (*(char *)(lVar11 + 0x92) == '\x01')
                       ) {
                      uVar6 = (uint)*(ushort *)(lVar11 + 0x8e);
                    }
                    else {
                      uVar6 = 0;
                    }
                    puVar30 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar20 = puVar30 + 8;
                    uVar36 = *(undefined1 *)(lVar11 + 0x90);
                    if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
                      local_5e8 = (longlong *)
                                  CONCAT71(local_5e8._1_7_,*(undefined1 *)(lVar11 + 0x90));
                      local_5f8 = (undefined8 *)CONCAT44(local_5f8._4_4_,uVar6);
                      FUN_140023dd8(local_5b0,0x48);
                      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar20 = puVar30 + 8;
                      uVar36 = local_5e8._0_1_;
                      uVar6 = (uint)local_5f8;
                    }
                    *(undefined8 **)(param_2 + 0x70) = puVar20;
                    puVar30[1] = *(undefined8 *)(lVar11 + 8);
                    puVar30[2] = 0;
                    *(undefined1 *)(puVar30 + 3) = 1;
                    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
                    *puVar30 = &PTR_FUN_14a203858;
                    *(undefined2 *)(puVar30 + 5) = 0;
                    *(undefined1 *)((longlong)puVar30 + 0x2a) = uVar36;
                    *(undefined1 *)((longlong)puVar30 + 0x2b) = 0;
                    *(undefined2 *)((longlong)puVar30 + 0x2c) = 0;
                    *(short *)((longlong)puVar30 + 0x2e) = (short)uVar6;
                    *(undefined1 *)(puVar30 + 6) = 0;
                    *(undefined1 *)((longlong)puVar30 + 0x32) = 0;
                    puVar30[7] = lVar11;
                    iVar42 = *(int *)(param_2 + 0x1a0);
                    *(uint *)(param_2 + 0x1a0) = iVar42 + 1U;
                    if (*(uint *)(param_2 + 0x1a4) < iVar42 + 1U) {
                      FUN_1447568fc(local_588,iVar42);
                    }
                    puVar1 = local_5b0;
                    puVar4 = local_5b8;
                    local_5e8 = puVar33 + 2;
                    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar42 * 8) =
                         puVar30;
                    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                    *local_5e8 = (longlong)puVar30;
                    puVar30 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar20 = puVar30 + 9;
                    uVar36 = *(undefined1 *)((longlong)local_5b8 + 0x94);
                    if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
                      local_5f8 = (undefined8 *)
                                  CONCAT71(local_5f8._1_7_,
                                           *(undefined1 *)((longlong)local_5b8 + 0x94));
                      FUN_140023dd8(local_5b0,0x50);
                      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar20 = puVar30 + 9;
                      uVar36 = local_5f8._0_1_;
                    }
                    *(undefined8 **)(param_2 + 0x70) = puVar20;
                    puVar30[1] = puVar4[1];
                    puVar30[2] = 0;
                    *(undefined1 *)(puVar30 + 3) = 0;
                    *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
                    *(undefined1 *)(puVar30 + 5) = 0;
                    *puVar30 = &PTR_FUN_14a1fb948;
                    *(undefined1 *)(puVar30 + 6) = uVar36;
                    *(undefined1 *)(puVar30 + 7) = 0;
                    *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
                    *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
                    puVar30[8] = puVar4;
                    iVar42 = *(int *)(param_2 + 0x1a0);
                    *(uint *)(param_2 + 0x1a0) = iVar42 + 1U;
                    if (*(uint *)(param_2 + 0x1a4) < iVar42 + 1U) {
                      FUN_1447568fc(local_588,iVar42);
                    }
                    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar42 * 8) =
                         puVar30;
                    *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
                    puVar33[6] = puVar30;
                    uVar17 = *(undefined8 *)(lVar14 + 0x13818);
                    FUN_145e9eb64();
                    FUN_1448e935e(uVar17,&local_228,&DAT_14cc2ad98,0);
                    FUN_145e9eb64();
                    iVar42 = *(int *)((longlong)local_5f0 + 0x88) + 7;
                    local_404 = *(int *)((longlong)local_5f0 + 0x88) + 0xe;
                    if (-1 < iVar42) {
                      local_404 = iVar42;
                    }
                    local_404 = local_404 >> 3;
                    iVar42 = *(int *)((longlong)local_5f0 + 0x84) + 7;
                    local_408 = *(int *)((longlong)local_5f0 + 0x84) + 0xe;
                    if (-1 < iVar42) {
                      local_408 = iVar42;
                    }
                    local_408 = local_408 >> 3;
                    local_400 = 1;
                    local_658 = (wchar_t *)&local_408;
                    FUN_149827dd1(param_2,&local_2a8,&local_228,local_5e8);
                    goto LAB_140abc69b;
                  }
                  break;
                }
                iVar28 = iVar28 + 1;
              } while (iVar42 != iVar28);
              local_5b8 = (undefined8 *)0x0;
            }
LAB_140abc69b:
            plVar35 = local_3f0;
            if ((*(int *)((longlong)local_3f0 + 0x2c) == (int)local_2c8) &&
               ((int)local_3f0[6] == local_2c8._4_4_)) {
              local_5f8 = (undefined8 *)0x0;
              local_5e8 = (longlong *)local_538;
              lVar13 = local_510;
            }
            else {
              local_5e8 = local_3f0 + 9;
              if (((longlong *)local_3f0[9] == (longlong *)0x0) ||
                 (((lVar13 = (**(code **)(*(longlong *)local_3f0[9] + 0x10))(),
                   *(int *)(lVar13 + 0x2c) != *(int *)((longlong)plVar35 + 0x2c) ||
                   (lVar13 = (**(code **)(*(longlong *)plVar35[9] + 0x10))(),
                   *(int *)(lVar13 + 0x30) != (int)plVar35[6])) ||
                  (lVar13 = (**(code **)(*(longlong *)*local_5e8 + 0x10))(),
                  *(char *)(lVar13 + 0x28) != *(char *)((longlong)local_5e0 + 0x93))))) {
                uVar9 = DAT_14ca83a68;
                uVar37 = DAT_14ca83a64;
                iVar28 = DAT_14ca83a60;
                iVar42 = DAT_14ca83a5c;
                uVar6 = DAT_14ca83a58;
                uStack_1f5 = *(undefined1 *)((longlong)local_5e0 + 0x93);
                local_5f8 = (undefined8 *)CONCAT71(local_5f8._1_7_,uStack_1f5);
                local_560 = *(undefined8 *)((longlong)plVar35 + 0x2c);
                local_208 = 0;
                uStack_1fc = 1;
                uStack_1f6 = 0;
                uStack_220 = DAT_14ca83a58;
                iStack_21c = DAT_14ca83a5c;
                iStack_218 = DAT_14ca83a60;
                uStack_214 = DAT_14ca83a64;
                uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
                uStack_1f4 = 0;
                uStack_1f3 = 0xff;
                uStack_1fa = 1;
                uStack_1f8 = 0x101;
                local_228 = (longlong *)&DAT_00020008;
                local_658 = L"FIColor";
                uStack_204 = local_560;
                FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228,local_5e8);
                uVar17 = local_560;
                local_208 = 0;
                uStack_1fc = 1;
                uStack_1f6 = 0;
                uVar36 = local_5f8._0_1_;
                local_5c4 = uVar6;
                uStack_220 = uVar6;
                iStack_21c = iVar42;
                iStack_218 = iVar28;
                uStack_214 = uVar37;
                uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),uVar9);
                uStack_1f5 = local_5f8._0_1_;
                uStack_1f4 = 0;
                uStack_1f3 = 0xff;
                uStack_204 = local_560;
                uStack_1fa = 1;
                uStack_1f8 = 0x101;
                local_228 = (longlong *)&DAT_00020008;
                local_658 = L"FIInter";
                FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228,
                              plVar35 + 0xb);
                cVar5 = (**(code **)(**(longlong **)(local_600 + 0x58) + 0x30))();
                if ((cVar5 != '\x01') && (*(int *)(local_600 + 0xa4) == 1)) {
                  local_208 = 0;
                  uStack_1fc = 1;
                  uStack_1f6 = 0;
                  uStack_220 = local_5c4;
                  iStack_21c = iVar42;
                  iStack_218 = iVar28;
                  uStack_214 = uVar37;
                  uStack_210 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),uVar9);
                  uStack_1f5 = uVar36;
                  uStack_1f4 = 0;
                  uStack_1f3 = 0xff;
                  uStack_204 = uVar17;
                  uStack_1fa = 1;
                  uStack_1f8 = 0x101;
                  local_228 = (longlong *)&DAT_00020008;
                  local_658 = L"FIHud";
                  FUN_14490a8c0(&DAT_14ca9a3e8,*(undefined8 *)(param_2 + 0x18),&local_228,
                                plVar35 + 10);
                }
              }
              uStack_220 = DAT_14c9a52a0;
              local_228 = (longlong *)DAT_14c9a5298;
              uStack_214 = DAT_14c9a52a0;
              iStack_21c = (int)DAT_14c9a5298;
              iStack_218 = (int)((ulonglong)DAT_14c9a5298 >> 0x20);
              local_208 = DAT_14c9a52a0;
              uStack_210 = DAT_14c9a5298;
              uStack_204 = 0;
              uStack_1fc = 1;
              uStack_1fa = 0;
              uStack_1f8 = 0;
              uStack_1f6 = 0;
              uStack_1f5 = 0;
              uStack_1f4 = 0;
              uStack_1f3 = 0;
              uStack_1f2 = 0x10000;
              local_5e8 = (longlong *)FUN_14473c272(param_2,local_5e8,0);
              iStack_21c = local_57c;
              iStack_218 = local_578;
              uVar6 = *(uint *)(local_538 + 0x84);
              if (*(uint *)((longlong)plVar35 + 0x2c) < *(uint *)(local_538 + 0x84)) {
                uVar6 = *(uint *)((longlong)plVar35 + 0x2c);
              }
              uVar37 = *(uint *)(local_538 + 0x88);
              if (*(uint *)(plVar35 + 6) < *(uint *)(local_538 + 0x88)) {
                uVar37 = *(uint *)(plVar35 + 6);
              }
              local_228 = (longlong *)CONCAT44(uVar37,uVar6);
              FUN_1400e8d41(param_2,local_538,local_5e8,&local_228);
              lVar13 = local_600;
              cVar5 = (**(code **)(**(longlong **)(local_600 + 0x58) + 0x30))();
              if ((cVar5 == '\x01') || (*(int *)(lVar13 + 0xa4) != 1)) {
                local_5f8 = (undefined8 *)0x0;
              }
              else {
                local_5f8 = (undefined8 *)FUN_14473c272(param_2,plVar35 + 10,0);
                FUN_1400e8d41(param_2,local_5e0,local_5f8,&local_228);
              }
              lVar13 = FUN_14473c272(param_2,plVar35 + 0xb,0);
              puVar1 = local_5b0;
              uVar36 = *(undefined1 *)(lVar13 + 0x94);
              puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar20 = puVar30 + 9;
              if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
                FUN_140023dd8(local_5b0,0x50);
                puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar20 = puVar30 + 9;
              }
              *(undefined8 **)(param_2 + 0x70) = puVar20;
              puVar30[1] = *(undefined8 *)(lVar13 + 8);
              puVar30[2] = 0;
              *(undefined1 *)(puVar30 + 3) = 0;
              *(undefined8 *)((longlong)puVar30 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar30 + 5) = 0;
              *puVar30 = &PTR_FUN_14a1fb948;
              *(undefined1 *)(puVar30 + 6) = uVar36;
              *(undefined1 *)(puVar30 + 7) = 0;
              *(undefined4 *)((longlong)puVar30 + 0x31) = 0;
              *(undefined2 *)((longlong)puVar30 + 0x35) = 0;
              puVar30[8] = lVar13;
              iVar42 = *(int *)(param_2 + 0x1a0);
              *(uint *)(param_2 + 0x1a0) = iVar42 + 1U;
              if (*(uint *)(param_2 + 0x1a4) < iVar42 + 1U) {
                FUN_1447568fc(local_588,iVar42);
              }
              *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar42 * 8) = puVar30;
              *(int *)((longlong)puVar30 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
              FUN_14742bae0(param_2,puVar30,&DAT_14c8464e0,2);
            }
            puVar1 = local_5b0;
            puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar20 = puVar30 + 0x1a;
            if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
              FUN_140023dd8(local_5b0,0xe0);
              puVar30 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
              puVar20 = puVar30 + 0x1a;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar20;
            *puVar30 = &PTR_FUN_14beac658;
            puVar30[2] = 0;
            puVar30[3] = 0;
            *(undefined4 *)(puVar30 + 4) = 0;
            puVar30[5] = 0;
            puVar30[6] = 0;
            *(undefined4 *)(puVar30 + 7) = 0;
            puVar30[8] = 0;
            puVar30[9] = 0;
            *(undefined4 *)(puVar30 + 10) = 0;
            puVar30[0xb] = 0;
            puVar30[0xc] = 0;
            *(undefined4 *)(puVar30 + 0xd) = 0;
            puVar30[0xe] = 0;
            puVar30[0xf] = 0;
            *(undefined4 *)(puVar30 + 0x10) = 0;
            puVar30[0x11] = 0;
            puVar30[0x12] = 0;
            *(undefined4 *)(puVar30 + 0x13) = 0;
            puVar30[0x14] = 0;
            puVar30[0x15] = 0;
            *(undefined4 *)(puVar30 + 0x16) = 0;
            *(undefined4 *)(puVar30 + 0x19) = 0;
            puVar30[0x17] = 0;
            puVar30[0x18] = 0;
            iVar42 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar42 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar42 + 1U) {
              FUN_1448cfae8(local_570,iVar42);
            }
            *(undefined8 **)(*local_570 + (longlong)iVar42 * 8) = puVar30;
            if (local_5e8 == (longlong *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)((longlong)local_5e8 + 0xac);
            }
            puVar30[2] = local_5e8;
            puVar30[3] = uVar17;
            *(undefined4 *)(puVar30 + 4) = 0x10;
            if (local_5e0 == (uint *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)(local_5e0 + 0x2b);
            }
            puVar30[5] = local_5e0;
            puVar30[6] = uVar17;
            *(undefined4 *)(puVar30 + 7) = 0x10;
            if (local_5f8 == (undefined8 *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)((longlong)local_5f8 + 0xac);
            }
            puVar30[0x11] = local_5f8;
            puVar30[0x12] = uVar17;
            *(undefined4 *)(puVar30 + 0x13) = 0x2000;
            if (lVar13 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)(lVar13 + 0xac);
            }
            puVar30[0x14] = lVar13;
            puVar30[0x15] = uVar17;
            *(undefined4 *)(puVar30 + 0x16) = 0x2000;
            if (local_510 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)(local_510 + 0xac);
            }
            puVar30[0x17] = local_510;
            puVar30[0x18] = uVar17;
            *(undefined4 *)(puVar30 + 0x19) = 0x2000;
            if (local_5f0 == (longlong *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)((longlong)local_5f0 + 0xac);
            }
            puVar30[8] = local_5f0;
            puVar30[9] = uVar17;
            *(undefined4 *)(puVar30 + 10) = 0x10;
            if (local_5d0 == (longlong *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)((longlong)local_5d0 + 0xac);
            }
            puVar30[0xb] = local_5d0;
            puVar30[0xc] = uVar17;
            *(undefined4 *)(puVar30 + 0xd) = 0x10;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cc2ae60) && (FUN_144b3d300(&DAT_14cc2ae60), DAT_14cc2ae60 == -1))
            {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              plVar35 = (longlong *)
                        (**(code **)(*DAT_14c8407a8 + 200))
                                  (DAT_14c8407a8,L"r.HDR.Display.MinLuminanceLog10",1);
              if (plVar35 == (longlong *)0x0) {
                DAT_14cc2ae58 = 0;
              }
              else {
                DAT_14cc2ae58 = (**(code **)(*plVar35 + 0x70))(plVar35);
              }
              _Init_thread_footer(&DAT_14cc2ae60);
              param_2 = local_5d8;
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cc2ae70) && (FUN_144b3d300(&DAT_14cc2ae70), DAT_14cc2ae70 == -1))
            {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              plVar35 = (longlong *)
                        (**(code **)(*DAT_14c8407a8 + 200))
                                  (DAT_14c8407a8,L"r.HDR.Display.MaxLuminance",1);
              if (plVar35 == (longlong *)0x0) {
                DAT_14cc2ae68 = 0;
              }
              else {
                DAT_14cc2ae68 = (**(code **)(*plVar35 + 0x68))(plVar35);
              }
              _Init_thread_footer(&DAT_14cc2ae70);
              param_2 = local_5d8;
            }
            lVar13 = DAT_14cc2ae58;
            if (DAT_14cc2ae58 == 0) {
              fVar45 = 0.0;
            }
            else {
              iVar42 = *local_598;
              if (iVar42 == 0x40000002) {
                uVar10 = 0;
              }
              else {
                bVar44 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar42 != 2)) {
                  if (iVar42 == 1) {
                    DVar7 = FUN_140ad26c0();
                    DVar8 = GetCurrentThreadId();
                    bVar44 = DVar7 == DVar8;
                  }
                  else {
                    bVar44 = false;
                  }
                }
                uVar10 = (ulonglong)(bVar44 ^ 1);
              }
              fVar45 = *(float *)(lVar13 + uVar10 * 4);
            }
            lVar13 = DAT_14cc2ae68;
            iVar42 = 1;
            uVar9 = 1;
            if (DAT_14cc2ae68 != 0) {
              iVar28 = *local_598;
              if (iVar28 == 0x40000002) {
                uVar10 = 0;
              }
              else {
                bVar44 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar28 != 2)) {
                  if (iVar28 == 1) {
                    uVar9 = FUN_140ad26c0();
                    local_5f0 = (longlong *)CONCAT44(local_5f0._4_4_,uVar9);
                    DVar7 = GetCurrentThreadId();
                    bVar44 = (DWORD)local_5f0 == DVar7;
                  }
                  else {
                    bVar44 = false;
                  }
                }
                uVar10 = (ulonglong)(bVar44 ^ 1);
              }
              uVar9 = *(undefined4 *)(lVar13 + uVar10 * 4);
            }
            local_5d0 = (longlong *)CONCAT44(local_5d0._4_4_,uVar9);
            uVar6 = (**(code **)(*local_548 + 0x40))();
            plVar35 = (longlong *)FUN_14001cc68(0x138,0x10);
            *plVar35 = 0x20003;
            plVar35[1] = 0;
            *(undefined4 *)(plVar35 + 0x21) = 1;
            plVar35[0x26] = *(longlong *)(*(longlong *)(lVar14 + 8) + 0xb0);
            bVar44 = false;
            if (uVar6 < 7) {
              if ((3U >> (uVar6 & 0x1f) & 1) == 0) {
                if ((0x18U >> (uVar6 & 0x1f) & 1) == 0) {
                  if ((0x60U >> (uVar6 & 0x1f) & 1) == 0) goto LAB_140abcb08;
                  iVar42 = 2;
                  bVar44 = false;
                }
              }
              else {
                iVar42 = 0;
                bVar44 = true;
              }
            }
            else {
LAB_140abcb08:
              bVar44 = true;
              iVar42 = 0;
            }
            *(int *)(plVar35 + 0x22) = iVar42;
            uVar17 = *(undefined8 *)((longlong)local_3f0 + 0x2c);
            *(undefined8 *)((longlong)plVar35 + 0x11c) = 0;
            *(undefined8 *)((longlong)plVar35 + 0x124) = uVar17;
            *(undefined1 *)((longlong)plVar35 + 0x10c) = local_602;
            fVar46 = 0.0;
            local_5c4 = uVar6;
            if (!bVar44) {
              fVar46 = powf(10.0,fVar45);
              iVar42 = (int)plVar35[0x22];
            }
            *(float *)((longlong)plVar35 + 0x114) = fVar46;
            fVar46 = 1.0;
            if (iVar42 != 0) {
              fVar46 = (float)(int)local_5d0;
            }
            *(float *)(plVar35 + 0x23) = fVar46;
            lVar13 = DAT_14cc28f30;
            local_560 = CONCAT44(local_560._4_4_,*(undefined4 *)((longlong)local_5e8 + 0x84));
            local_548 = (longlong *)
                        CONCAT44(local_548._4_4_,*(undefined4 *)((longlong)local_5e8 + 0x88));
            iVar42 = *local_598;
            local_5f0 = plVar35;
            if (iVar42 == 0x40000002) {
              uVar10 = 0;
            }
            else {
              bVar44 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar42 != 2)) {
                if (iVar42 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar8 = GetCurrentThreadId();
                  bVar44 = DVar7 == DVar8;
                }
                else {
                  bVar44 = false;
                }
              }
              uVar10 = (ulonglong)(bVar44 ^ 1);
            }
            iVar42 = 0;
            if (*(int *)(lVar13 + uVar10 * 4) == 0) {
              if (DAT_14c846b14 == '\0') {
                FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                              L"Attempting to get the command line but it hasn\'t been initialized yet."
                             );
              }
              bVar40 = FUN_14054d46e(&DAT_14c846b20,L"fsr3swapchain");
              iVar42 = (uint)(bVar40 ^ 1) << 3;
            }
            local_5e8 = (longlong *)CONCAT44(local_5e8._4_4_,iVar42);
            local_428 = 0;
            lStack_420 = 0;
            local_418 = 0;
            uStack_410 = 0;
            local_168 = (longlong *)0x0;
            lStack_160 = 0;
            local_158 = (undefined *)0x0;
            uStack_150 = 0;
            local_148 = 0;
            uStack_140 = 0;
            uStack_13c = 0;
            uStack_13a = 0;
            uStack_138 = 0;
            local_448 = 0;
            lStack_440 = 0;
            local_438 = 0;
            plVar35 = *(longlong **)(local_600 + 0x58);
            uVar17 = (**(code **)(*local_590 + 8))();
            local_5f8 = (undefined8 *)(**(code **)(*plVar35 + 0x40))(plVar35,uVar17);
            lVar13 = DAT_14cc28f48;
            iVar42 = *local_598;
            if (iVar42 == 0x40000002) {
              uVar10 = 0;
            }
            else {
              bVar44 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar42 != 2)) {
                if (iVar42 == 1) {
                  DVar7 = FUN_140ad26c0();
                  DVar8 = GetCurrentThreadId();
                  bVar44 = DVar7 == DVar8;
                }
                else {
                  bVar44 = false;
                }
              }
              uVar10 = (ulonglong)(bVar44 ^ 1);
            }
            plVar19 = puVar30 + 2;
            local_602 = *(int *)(lVar13 + uVar10 * 4) != 0;
            lStack_440 = local_5f0[0x24];
            local_438 = (undefined4)local_5f0[0x25];
            local_448 = CONCAT44(*(undefined4 *)((longlong)local_5f0 + 0x11c),(undefined4)local_448)
            ;
            lVar13 = local_5f0[0x26];
            cVar5 = (**(code **)(**(longlong **)(local_600 + 0x58) + 0x30))();
            plVar35 = local_590;
            lVar11 = local_600;
            if (cVar5 == '\x01') {
              local_568 = lVar13;
              (**(code **)(**(longlong **)(local_600 + 0x58) + 0x48))
                        (*(longlong **)(local_600 + 0x58),&local_228,*plVar19,0x20);
              plVar35 = local_3f0;
              *(uint *)(local_5f0 + 7) = local_208;
              *(undefined4 *)((longlong)local_5f0 + 0x3c) = (undefined4)uStack_204;
              *(undefined4 *)(local_5f0 + 8) = uStack_204._4_4_;
              *(uint *)((longlong)local_5f0 + 0x44) = CONCAT22(uStack_1fa,uStack_1fc);
              *(int *)(local_5f0 + 5) = iStack_218;
              *(uint *)((longlong)local_5f0 + 0x2c) = uStack_214;
              *(undefined4 *)(local_5f0 + 6) = (undefined4)uStack_210;
              *(undefined4 *)((longlong)local_5f0 + 0x34) = uStack_210._4_4_;
              *(undefined4 *)(local_5f0 + 3) = (undefined4)local_228;
              *(undefined4 *)((longlong)local_5f0 + 0x1c) = local_228._4_4_;
              *(uint *)(local_5f0 + 4) = uStack_220;
              *(int *)((longlong)local_5f0 + 0x24) = iStack_21c;
              (**(code **)(**(longlong **)(lVar11 + 0x58) + 0x38))
                        (*(longlong **)(lVar11 + 0x58),local_3f0 + 8,
                         *(undefined4 *)(lVar14 + 0x3090));
              if (((local_5b8 == (undefined8 *)0x0) ||
                  (puVar20 = local_5b8, (*(byte *)((longlong)local_5b8 + 0x24) & 4) == 0)) &&
                 (puVar20 = (undefined8 *)FUN_14473c272(param_2,&DAT_14ca63b28,0),
                 puVar20 == (undefined8 *)0x0)) {
                puVar20 = (undefined8 *)0x0;
                uVar17 = 0;
              }
              else {
                uVar17 = *(undefined8 *)((longlong)puVar20 + 0xac);
              }
              puVar30[0xe] = puVar20;
              puVar30[0xf] = uVar17;
              *(undefined4 *)(puVar30 + 0x10) = 0x10;
              if (plVar35 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar35 + 1) = (int)plVar35[1] + 1;
                UNLOCK();
              }
              local_298 = local_418;
              uStack_290 = uStack_410;
              local_2a8 = local_428;
              uStack_2a0 = lStack_420;
              local_228 = local_168;
              uStack_220 = (uint)lStack_160;
              iStack_21c = (int)((ulonglong)lStack_160 >> 0x20);
              iStack_218 = (int)local_158;
              uStack_214 = local_158._4_4_;
              uStack_210 = uStack_150;
              local_208 = (uint)local_148;
              uStack_204 = CONCAT44(uStack_140,local_148._4_4_);
              uStack_1fc = uStack_13c;
              uStack_1fa = uStack_13a;
              uStack_1f8 = (undefined2)uStack_138;
              uStack_1f6 = (undefined1)((uint6)uStack_138 >> 0x10);
              uStack_1f5 = (undefined1)((uint6)uStack_138 >> 0x18);
              uStack_1f4 = (undefined1)((uint6)uStack_138 >> 0x20);
              uStack_1f3 = (undefined1)((uint6)uStack_138 >> 0x28);
              local_468 = local_448;
              uStack_460 = lStack_440;
              local_458 = CONCAT44(local_458._4_4_,local_438);
              FUN_14982fa86();
              FUN_140069376(param_2);
              puVar1 = local_5b0;
              uVar17 = 0x1a;
              if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
                 ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0))))))
              {
                uVar17 = 0x1c;
              }
              puVar33 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar20 = puVar33 + 0x4c;
              if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
                local_5d0 = plVar35;
                FUN_140023dd8(local_5b0,0x268);
                puVar33 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar20 = puVar33 + 0x4c;
                plVar35 = local_5d0;
              }
              *local_5b0 = (ulonglong)puVar20;
              lStack_260 = DAT_14cc2cb10;
              if (DAT_14cc2cb10 != 0) {
                LOCK();
                *(int *)(DAT_14cc2cb10 + 8) = *(int *)(DAT_14cc2cb10 + 8) + 1;
                UNLOCK();
              }
              local_258 = &DAT_14cc2cac8;
              local_658 = (wchar_t *)((ulonglong)local_658 & 0xffffffffffffff00);
              local_268 = plVar19;
              FUN_140068f1a(puVar33,&local_2c0,&local_268,uVar17);
              *puVar33 = &PTR_FUN_14beac660;
              puVar33[0x37] = local_600;
              puVar33[0x38] = plVar19;
              puVar33[0x39] = plVar35;
              puVar33[0x3a] = 0x20002;
              puVar33[0x3b] = 0;
              puVar33[0x3c] = local_5f8;
              puVar33[0x3d] = local_2a8;
              puVar33[0x3e] = uStack_2a0;
              puVar33[0x3f] = local_298;
              puVar33[0x40] = uStack_290;
              *(undefined1 *)(puVar33 + 0x41) = 1;
              *(undefined1 *)((longlong)puVar33 + 0x209) = local_602;
              *(longlong **)((longlong)puVar33 + 0x20a) = local_228;
              *(ulonglong *)((longlong)puVar33 + 0x212) = CONCAT44(iStack_21c,uStack_220);
              *(int *)((longlong)puVar33 + 0x21a) = iStack_218;
              *(uint *)((longlong)puVar33 + 0x21e) = uStack_214;
              *(undefined4 *)((longlong)puVar33 + 0x222) = (undefined4)uStack_210;
              *(undefined4 *)((longlong)puVar33 + 0x226) = uStack_210._4_4_;
              *(uint *)((longlong)puVar33 + 0x22a) = local_208;
              *(undefined4 *)((longlong)puVar33 + 0x22e) = (undefined4)uStack_204;
              *(undefined4 *)((longlong)puVar33 + 0x232) = uStack_204._4_4_;
              *(uint *)((longlong)puVar33 + 0x236) = CONCAT22(uStack_1fa,uStack_1fc);
              puVar33[0x47] =
                   CONCAT17(uStack_1f3,
                            CONCAT16(uStack_1f4,
                                     CONCAT15(uStack_1f5,
                                              CONCAT14(uStack_1f6,CONCAT22(uStack_1f8,uStack_1fa))))
                           );
              *(undefined4 *)(puVar33 + 0x48) = local_5e8._0_4_;
              *(undefined4 *)((longlong)puVar33 + 0x254) = (undefined4)local_458;
              *(undefined4 *)((longlong)puVar33 + 0x244) = (undefined4)local_468;
              *(undefined4 *)(puVar33 + 0x49) = local_468._4_4_;
              *(undefined4 *)((longlong)puVar33 + 0x24c) = (undefined4)uStack_460;
              *(undefined4 *)(puVar33 + 0x4a) = uStack_460._4_4_;
              puVar33[0x4b] = local_568;
              iVar42 = *(int *)(param_2 + 0x170);
              *(uint *)(param_2 + 0x170) = iVar42 + 1U;
              if (*(uint *)(param_2 + 0x174) < iVar42 + 1U) {
                FUN_14470e57a(local_528,iVar42);
              }
              local_5b8 = puVar30 + 8;
              local_5f8 = puVar30 + 0xb;
              local_5d0 = puVar30 + 0x14;
              local_5e8 = puVar30 + 0x17;
              *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar42 * 8) = puVar33;
              *(int *)((longlong)puVar33 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
              FUN_140069100(param_2,puVar33);
              plVar35 = local_5f0;
              lVar13 = local_600;
              local_5f0[2] = param_2;
              (**(code **)(**(longlong **)(local_600 + 0x58) + 0x48))
                        (*(longlong **)(local_600 + 0x58),&local_228,*local_5d0,2);
              *(uint *)(plVar35 + 0xd) = local_208;
              *(undefined4 *)((longlong)plVar35 + 0x6c) = (undefined4)uStack_204;
              *(undefined4 *)(plVar35 + 0xe) = uStack_204._4_4_;
              *(uint *)((longlong)plVar35 + 0x74) = CONCAT22(uStack_1fa,uStack_1fc);
              *(int *)(plVar35 + 0xb) = iStack_218;
              *(uint *)((longlong)plVar35 + 0x5c) = uStack_214;
              *(undefined4 *)(plVar35 + 0xc) = (undefined4)uStack_210;
              *(undefined4 *)((longlong)plVar35 + 100) = uStack_210._4_4_;
              *(undefined4 *)(plVar35 + 9) = (undefined4)local_228;
              *(undefined4 *)((longlong)plVar35 + 0x4c) = local_228._4_4_;
              *(uint *)(plVar35 + 10) = uStack_220;
              *(int *)((longlong)plVar35 + 0x54) = iStack_21c;
              local_3a0 = plVar35[2];
              (**(code **)(**(longlong **)(lVar13 + 0x58) + 0x48))
                        (*(longlong **)(lVar13 + 0x58),local_368,*local_5b8,4);
              (**(code **)(**(longlong **)(lVar13 + 0x58) + 0x48))
                        (*(longlong **)(lVar13 + 0x58),&local_228,*local_5f8,2);
              uStack_30c = CONCAT22(uStack_1fa,uStack_1fc);
              local_318 = local_208;
              uStack_314 = (undefined4)uStack_204;
              uStack_310 = uStack_204._4_4_;
              local_328 = iStack_218;
              uStack_324 = uStack_214;
              uStack_320 = (undefined4)uStack_210;
              uStack_31c = uStack_210._4_4_;
              local_338 = (undefined4)local_228;
              uStack_334 = local_228._4_4_;
              uStack_330 = uStack_220;
              iStack_32c = iStack_21c;
              local_3b8 = &local_130;
              plVar12 = local_3f0 + 8;
              (**(code **)(**(longlong **)(lVar13 + 0x58) + 0x20))
                        (*(longlong **)(lVar13 + 0x58),plVar12,&local_3c0);
              plVar19 = local_5d0;
              (**(code **)(**(longlong **)(lVar13 + 0x58) + 0x20))
                        (*(longlong **)(lVar13 + 0x58),plVar12,plVar35);
              local_308 = CONCAT44((uint)local_548,(uint)local_560);
              lVar13 = *local_5e8;
              lVar11 = *plVar19;
              if ((lVar13 != lVar11) || (*(int *)(puVar30 + 0x19) != *(int *)(puVar30 + 0x16))) {
                local_2f0 = CONCAT44(local_578,local_57c);
                uVar6 = *(uint *)(lVar13 + 0x84);
                if ((uint)local_560 < *(uint *)(lVar13 + 0x84)) {
                  uVar6 = (uint)local_560;
                }
                uVar37 = *(uint *)(lVar13 + 0x88);
                if ((uint)local_548 < *(uint *)(lVar13 + 0x88)) {
                  uVar37 = (uint)local_548;
                }
                local_308 = CONCAT44(uVar37,uVar6);
                FUN_1400e8d41(param_2,lVar11,lVar13,&local_308);
                lVar11 = *plVar19;
              }
              plVar35 = local_590;
              FUN_1400e8d41(param_2,lVar11,local_5e0,&local_308);
              uVar10 = local_550;
              bVar40 = 1;
              if (local_5f0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((char)local_568 == '\0') {
              if ((local_5b8 != (undefined8 *)0x0) &&
                 ((*(byte *)((longlong)local_5b8 + 0x24) & 4) != 0)) {
                uVar17 = *(undefined8 *)((longlong)local_5b8 + 0xac);
                puVar30[0xe] = local_5b8;
                puVar30[0xf] = uVar17;
                *(undefined4 *)(puVar30 + 0x10) = 0x10;
              }
              local_568 = lVar13;
              memcpy((void *)((longlong)&local_228 + 4),&local_3c0,0xb8);
              plVar12 = local_3f0;
              local_468 = local_428;
              uStack_460 = lStack_420;
              local_458 = local_418;
              uStack_450 = uStack_410;
              uStack_240 = CONCAT24(uStack_13c,uStack_140);
              local_268 = local_168;
              lStack_260 = lStack_160;
              local_258 = local_158;
              uStack_250 = uStack_150;
              local_248 = local_148;
              uStack_23a = uStack_13a;
              uStack_238 = uStack_138;
              local_488 = local_448;
              lStack_480 = lStack_440;
              local_478 = local_438;
              local_278 = local_100;
              fStack_274 = fStack_fc;
              fStack_270 = fStack_f8;
              fStack_26c = fStack_f4;
              local_288 = local_110;
              fStack_284 = fStack_10c;
              fStack_280 = fStack_108;
              fStack_27c = fStack_104;
              local_298 = CONCAT44(fStack_11c,local_120);
              uStack_290 = CONCAT44(fStack_114,fStack_118);
              local_2a8 = local_130;
              uStack_2a0 = lStack_128;
              if (plVar35 != (longlong *)0x0) {
                LOCK();
                plVar35 = plVar35 + 1;
                *(int *)plVar35 = (int)*plVar35 + 1;
                UNLOCK();
              }
              if (local_3f0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_3f0 + 1) = (int)local_3f0[1] + 1;
                UNLOCK();
              }
              FUN_14982fa86();
              FUN_140069376(param_2);
              puVar1 = local_5b0;
              uVar17 = 0x1a;
              if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
                 ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
                uVar17 = 0x1c;
              }
              puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar20 = puVar30 + 0x74;
              if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
                FUN_140023dd8(local_5b0,0x3a8);
                puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar20 = puVar30 + 0x74;
              }
              *local_5b0 = (ulonglong)puVar20;
              local_2b8 = DAT_14cc2cb10;
              if (DAT_14cc2cb10 != 0) {
                LOCK();
                *(int *)(DAT_14cc2cb10 + 8) = *(int *)(DAT_14cc2cb10 + 8) + 1;
                UNLOCK();
              }
              uVar10 = local_508 << 0x20;
              uVar31 = (ulonglong)local_530;
              local_2b0 = &DAT_14cc2cac8;
              local_658 = (wchar_t *)((ulonglong)local_658 & 0xffffffffffffff00);
              local_2c0 = plVar19;
              FUN_140068f1a(puVar30,&local_489,&local_2c0,uVar17);
              *puVar30 = &PTR_FUN_14beac6e0;
              *(int *)(puVar30 + 0x37) = local_554;
              memcpy((void *)((longlong)puVar30 + 0x1bc),&local_228,0xbc);
              plVar35 = local_590;
              puVar30[0x4f] = 0x20002;
              puVar30[0x50] = 0;
              puVar30[0x51] = local_5f8;
              puVar30[0x52] = local_468;
              puVar30[0x53] = uStack_460;
              puVar30[0x54] = local_458;
              puVar30[0x55] = uStack_450;
              *(undefined1 *)(puVar30 + 0x56) = 1;
              *(undefined1 *)((longlong)puVar30 + 0x2b1) = local_602;
              *(longlong **)((longlong)puVar30 + 0x2b2) = local_268;
              *(longlong *)((longlong)puVar30 + 0x2ba) = lStack_260;
              *(undefined **)((longlong)puVar30 + 0x2c2) = local_258;
              *(undefined8 *)((longlong)puVar30 + 0x2ca) = uStack_250;
              *(undefined8 *)((longlong)puVar30 + 0x2d2) = local_248;
              *(ulonglong *)((longlong)puVar30 + 0x2da) = CONCAT26(uStack_23a,uStack_240);
              puVar30[0x5c] = CONCAT62(uStack_238,uStack_23a);
              *(undefined4 *)(puVar30 + 0x5d) = local_5e8._0_4_;
              *(undefined4 *)((longlong)puVar30 + 0x2fc) = local_478;
              *(undefined8 *)((longlong)puVar30 + 0x2ec) = local_488;
              *(longlong *)((longlong)puVar30 + 0x2f4) = lStack_480;
              puVar30[0x60] = local_568;
              *(undefined4 *)(puVar30 + 0x61) = (undefined4)local_2a8;
              *(undefined4 *)((longlong)puVar30 + 0x30c) = local_2a8._4_4_;
              *(undefined4 *)(puVar30 + 0x62) = (undefined4)uStack_2a0;
              *(undefined4 *)((longlong)puVar30 + 0x314) = uStack_2a0._4_4_;
              *(undefined4 *)(puVar30 + 99) = (undefined4)local_298;
              *(undefined4 *)((longlong)puVar30 + 0x31c) = local_298._4_4_;
              *(undefined4 *)(puVar30 + 100) = (undefined4)uStack_290;
              *(undefined4 *)((longlong)puVar30 + 0x324) = uStack_290._4_4_;
              *(float *)(puVar30 + 0x65) = local_288;
              *(float *)((longlong)puVar30 + 0x32c) = fStack_284;
              *(float *)(puVar30 + 0x66) = fStack_280;
              *(float *)((longlong)puVar30 + 0x334) = fStack_27c;
              *(float *)(puVar30 + 0x67) = local_278;
              *(float *)((longlong)puVar30 + 0x33c) = fStack_274;
              *(float *)(puVar30 + 0x68) = fStack_270;
              *(float *)((longlong)puVar30 + 0x344) = fStack_26c;
              puVar30[0x69] = uVar31 | uVar10;
              *(int *)(puVar30 + 0x6a) = local_57c;
              *(int *)((longlong)puVar30 + 0x354) = local_578;
              puVar30[0x6b] = local_590;
              puVar30[0x6c] = local_600;
              puVar30[0x6d] = plVar12;
              puVar30[0x6e] = plVar19;
              puVar30[0x6f] = local_5f0;
              *(float *)(puVar30 + 0x70) = fVar2 * 1000.0;
              puVar30[0x71] = local_500;
              *(uint *)(puVar30 + 0x72) = local_5c4;
              *(float *)((longlong)puVar30 + 0x394) = fVar45;
              *(int *)(puVar30 + 0x73) = (int)local_5d0;
              iVar42 = *(int *)(param_2 + 0x170);
              *(uint *)(param_2 + 0x170) = iVar42 + 1U;
              if (*(uint *)(param_2 + 0x174) < iVar42 + 1U) {
                FUN_14470e57a(local_528,iVar42);
              }
              *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar42 * 8) = puVar30;
              *(int *)((longlong)puVar30 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
              FUN_140069100(param_2,puVar30);
              bVar40 = 1;
              uVar10 = local_550;
            }
            else {
              bVar40 = 0;
              uVar10 = local_550;
            }
            plVar19 = local_3f0;
            if (local_3f0 != (longlong *)0x0) {
              LOCK();
              puVar25 = (uint *)(local_3f0 + 1);
              uVar6 = *puVar25;
              *puVar25 = *puVar25 - 1;
              UNLOCK();
              if ((uVar6 & 0x3fffffff) == 1) {
                puVar25 = (uint *)(local_3f0 + 1);
                LOCK();
                uVar6 = *puVar25;
                *puVar25 = *puVar25 | 0x40000000;
                UNLOCK();
                if ((uVar6 >> 0x1e & 1) == 0) {
                  bVar3 = *(byte *)((longlong)local_3f0 + 0xd);
                  plVar18 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar18[1] = (longlong)plVar19;
                  plVar19 = DAT_14ca843c0;
                  plVar12 = DAT_14ca843c8;
                  param_2 = local_5d8;
                  if ((bVar3 & 2) == 0) {
                    do {
                      *plVar18 = (longlong)plVar19;
                      LOCK();
                      bVar44 = plVar19 != DAT_14ca843c0;
                      plVar12 = plVar18;
                      if (bVar44) {
                        plVar19 = DAT_14ca843c0;
                        plVar12 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar12;
                      UNLOCK();
                    } while (bVar44);
                  }
                  else {
                    do {
                      *plVar18 = (longlong)plVar12;
                      LOCK();
                      bVar44 = plVar12 != DAT_14ca843c8;
                      plVar19 = plVar18;
                      if (bVar44) {
                        plVar12 = DAT_14ca843c8;
                        plVar19 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar19;
                      UNLOCK();
                    } while (bVar44);
                  }
                }
              }
            }
            iVar42 = local_52c;
            if (plVar35 != (longlong *)0x0) {
              LOCK();
              puVar25 = (uint *)(plVar35 + 1);
              uVar6 = *puVar25;
              *puVar25 = *puVar25 - 1;
              UNLOCK();
              if ((uVar6 & 0x3fffffff) == 1) {
                puVar25 = (uint *)(plVar35 + 1);
                LOCK();
                uVar6 = *puVar25;
                *puVar25 = *puVar25 | 0x40000000;
                UNLOCK();
                if ((uVar6 >> 0x1e & 1) == 0) {
                  bVar3 = *(byte *)((longlong)plVar35 + 0xd);
                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar12[1] = (longlong)plVar35;
                  plVar35 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c8;
                  param_2 = local_5d8;
                  if ((bVar3 & 2) == 0) {
                    do {
                      *plVar12 = (longlong)plVar35;
                      LOCK();
                      bVar44 = plVar35 != DAT_14ca843c0;
                      plVar19 = plVar12;
                      if (bVar44) {
                        plVar35 = DAT_14ca843c0;
                        plVar19 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar19;
                      UNLOCK();
                    } while (bVar44);
                  }
                  else {
                    do {
                      *plVar12 = (longlong)plVar19;
                      LOCK();
                      bVar44 = plVar19 != DAT_14ca843c8;
                      plVar35 = plVar12;
                      if (bVar44) {
                        plVar19 = DAT_14ca843c8;
                        plVar35 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar35;
                      UNLOCK();
                    } while (bVar44);
                  }
                }
              }
            }
            local_554 = local_554 + (uint)bVar40;
            local_5a0 = CONCAT71((int7)((ulonglong)local_5a0 >> 8),(byte)local_5a0 | bVar40);
            uVar6 = *(uint *)(local_5c0 + 0x30);
            puVar25 = local_518;
            lVar13 = local_5c0;
          }
          uVar32 = uVar32 & ~(uint)uVar39;
          puVar16 = *(uint **)(lVar13 + 0x28);
          if (*(uint **)(lVar13 + 0x28) == (uint *)0x0) {
            puVar16 = puVar25;
          }
          iVar28 = (int)uVar41;
          lVar11 = (longlong)iVar28;
          uVar37 = puVar16[lVar11] & uVar32;
          if (uVar37 == 0) {
            iVar22 = uVar6 + 0x1e;
            if (-1 < (int)(uVar6 - 1)) {
              iVar22 = uVar6 - 1;
            }
            iVar22 = iVar22 >> 5;
            iVar42 = iVar42 + 0x20;
            iVar23 = iVar22;
            if (iVar22 < iVar28) {
              iVar23 = iVar28;
            }
            if (iVar28 < iVar22) {
              lVar14 = 0;
              do {
                uVar37 = (puVar16 + lVar11 + 1)[lVar14];
                if (uVar37 != 0) {
                  uVar41 = (ulonglong)(iVar28 + (int)lVar14 + 1);
                  uVar32 = 0xffffffff;
                  goto LAB_140abbbbc;
                }
                iVar42 = iVar42 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar23 - lVar11 != lVar14);
              uVar32 = 0xffffffff;
              iVar28 = iVar23;
            }
            uVar41 = (ulonglong)(iVar28 + 1);
            param_2 = local_5d8;
            puVar25 = local_518;
            lVar13 = local_5c0;
            uVar10 = local_550;
            uVar37 = uVar6;
          }
          else {
LAB_140abbbbc:
            uVar39 = (ulonglong)(-uVar37 & uVar37);
            uVar31 = uVar39 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar37 = (iVar42 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if ((int)uVar6 <= (int)uVar37) {
              uVar37 = uVar6;
            }
          }
        } while (uVar37 != (uint)uVar10);
      }
LAB_140abb9fe:
      FUN_149827f74(local_600);
      if (local_4a0 != (longlong *)0x0) {
        LOCK();
        puVar25 = (uint *)(local_4a0 + 1);
        uVar6 = *puVar25;
        *puVar25 = *puVar25 - 1;
        UNLOCK();
        if ((uVar6 & 0x3fffffff) == 1) {
          puVar25 = (uint *)(local_4a0 + 1);
          LOCK();
          uVar6 = *puVar25;
          *puVar25 = *puVar25 | 0x40000000;
          UNLOCK();
          if ((uVar6 >> 0x1e & 1) == 0) {
            bVar40 = *(byte *)((longlong)local_4a0 + 0xd);
            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
            plVar12[1] = (longlong)local_4a0;
            plVar35 = DAT_14ca843c0;
            plVar19 = DAT_14ca843c8;
            param_2 = local_5d8;
            if ((bVar40 & 2) == 0) {
              do {
                *plVar12 = (longlong)plVar35;
                LOCK();
                bVar44 = plVar35 != DAT_14ca843c0;
                plVar19 = plVar12;
                if (bVar44) {
                  plVar35 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar19;
                UNLOCK();
              } while (bVar44);
            }
            else {
              do {
                *plVar12 = (longlong)plVar19;
                LOCK();
                bVar44 = plVar19 != DAT_14ca843c8;
                plVar35 = plVar12;
                if (bVar44) {
                  plVar19 = DAT_14ca843c8;
                  plVar35 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar35;
                UNLOCK();
              } while (bVar44);
            }
          }
        }
      }
      bVar40 = (byte)local_5a0 & 1;
    }
    else {
      bVar40 = 0;
    }
  }
  FUN_140069376(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar20 = puVar30 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
    FUN_140023dd8(puVar1,0x1c8);
    puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar20 = puVar30 + 0x38;
  }
  *puVar1 = (ulonglong)puVar20;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
    FUN_14596f92a(&local_228);
    local_610 = 0;
    local_620 = 0;
    local_640 = "Unknown";
    local_650 = 0;
    uStack_648 = 0;
    local_658 = L"FEmptyShaderParameters";
    local_618 = 0;
    local_630 = 0x10;
    local_638 = 0x7a6;
    local_628 = &local_228;
    FUN_140b49562(&DAT_14c9e1d18,0,1);
    if (local_228 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_144660355);
    _Init_thread_footer(&DAT_14c9e1d98);
    param_2 = local_5d8;
  }
  local_228 = (longlong *)&DAT_14cc2c700;
  uStack_220 = (uint)DAT_14c9e1d60;
  iStack_21c = (int)((ulonglong)DAT_14c9e1d60 >> 0x20);
  if (DAT_14c9e1d60 != 0) {
    LOCK();
    *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
    UNLOCK();
  }
  lVar13 = param_2 + 0x168;
  iStack_218 = 0x4c9e1d18;
  uStack_214 = 1;
  local_658 = (wchar_t *)((ulonglong)local_658 & 0xffffffffffffff00);
  FUN_140068f1a(puVar30,&local_3c0,&local_228);
  *puVar30 = &PTR_FUN_14beac700;
  iVar42 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar42 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar42 + 1U) {
    FUN_14470e57a(lVar13,iVar42);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar42 * 8) = puVar30;
  *(int *)((longlong)puVar30 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_143204634(param_2,puVar30);
  lVar14 = local_5c0;
  lVar11 = local_5c0 + 8;
  iVar42 = *(int *)(local_5c0 + 0x50);
  if (iVar42 < 2) {
    lVar15 = local_5c0 + 0x40;
    if (*(longlong *)(local_5c0 + 0x48) != 0) {
      lVar15 = *(longlong *)(local_5c0 + 0x48);
    }
    iVar28 = iVar42 + 3;
    if (-1 < iVar42) {
      iVar28 = iVar42;
    }
    if (*(int *)(local_5c0 + 0x10) - *(int *)(local_5c0 + 0x3c) < iVar28 >> 2) {
      uVar6 = *(uint *)(local_5c0 + 0x30);
      local_5f0 = (longlong *)(ulonglong)uVar6;
      if (uVar6 != 0) {
        local_5e0 = (uint *)(local_5c0 + 0x18);
        puVar25 = *(uint **)(local_5c0 + 0x28);
        if (*(uint **)(local_5c0 + 0x28) == (uint *)0x0) {
          puVar25 = local_5e0;
        }
        uVar37 = *puVar25;
        param_2 = local_5d8;
        if (uVar37 == 0) {
          iVar42 = uVar6 + 0x1e;
          if (-1 < (int)(uVar6 - 1)) {
            iVar42 = uVar6 - 1;
          }
          plVar35 = (longlong *)0x0;
          plVar19 = (longlong *)(ulonglong)(uint)(iVar42 >> 5);
          if (iVar42 >> 5 < 1) {
            plVar19 = plVar35;
          }
          local_598 = (int *)((ulonglong)local_598._4_4_ << 0x20);
          do {
            if (plVar19 == plVar35) goto LAB_140abaed8;
            local_598 = (int *)CONCAT44(local_598._4_4_,(int)local_598 + 0x20);
            uVar37 = puVar25[(longlong)plVar35 + 1];
            plVar35 = (longlong *)((longlong)plVar35 + 1);
          } while (uVar37 == 0);
        }
        else {
          plVar35 = (longlong *)0x0;
          local_598 = (int *)((ulonglong)local_598._4_4_ << 0x20);
        }
        uVar10 = (ulonglong)(-uVar37 & uVar37);
        uVar41 = uVar10 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar37 = ((int)local_598 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if ((int)uVar37 < (int)uVar6) {
          uVar32 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar15 + (longlong)
                       *(int *)(*(longlong *)(local_5c0 + 8) + 100 + (longlong)(int)uVar37 * 0x68) *
                       4) = 0xffffffff;
            uVar32 = ~(uint)uVar10 & uVar32;
            puVar25 = *(uint **)(local_5c0 + 0x28);
            if (*(uint **)(local_5c0 + 0x28) == (uint *)0x0) {
              puVar25 = local_5e0;
            }
            uVar29 = *(uint *)(local_5c0 + 0x30);
            iVar42 = (int)plVar35;
            lVar24 = (longlong)iVar42;
            uVar27 = puVar25[lVar24] & uVar32;
            uVar37 = uVar29;
            if (uVar27 == 0) {
              iVar28 = uVar29 + 0x1e;
              if (-1 < (int)(uVar29 - 1)) {
                iVar28 = uVar29 - 1;
              }
              iVar28 = iVar28 >> 5;
              local_598 = (int *)CONCAT44(local_598._4_4_,(int)local_598 + 0x20);
              iVar22 = iVar28;
              if (iVar28 < iVar42) {
                iVar22 = iVar42;
              }
              if (iVar42 < iVar28) {
                plVar35 = (longlong *)((longlong)iVar22 + 1);
                lVar26 = 0;
                do {
                  uVar27 = puVar25[lVar24 + lVar26 + 1];
                  local_5d0 = plVar35;
                  if (uVar27 != 0) {
                    plVar35 = (longlong *)(ulonglong)(iVar42 + (int)lVar26 + 1);
                    uVar32 = 0xffffffff;
                    goto LAB_140abea85;
                  }
                  local_598 = (int *)CONCAT44(local_598._4_4_,(int)local_598 + 0x20);
                  lVar26 = lVar26 + 1;
                } while (iVar22 - lVar24 != lVar26);
                uVar32 = 0xffffffff;
              }
              else {
                plVar35 = (longlong *)(lVar24 + 1);
                local_5d0 = plVar35;
              }
            }
            else {
LAB_140abea85:
              uVar10 = (ulonglong)(-uVar27 & uVar27);
              uVar41 = uVar10 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar41 != 0) {
                for (; uVar41 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              uVar37 = ((int)local_598 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if ((int)uVar29 <= (int)uVar37) {
                uVar37 = uVar29;
              }
            }
          } while (uVar37 != uVar6);
        }
      }
    }
    else if (iVar42 == 1) {
      lVar24 = 0;
      do {
        *(undefined4 *)(lVar15 + lVar24 * 4) = 0xffffffff;
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(local_5c0 + 0x50));
    }
LAB_140abaed8:
    FUN_14059efac(lVar11);
  }
  else {
    FUN_14059efac(lVar11);
    *(undefined4 *)(lVar14 + 0x50) = 1;
    FUN_145736890(lVar11);
  }
  bVar40 = bVar40 | *(byte *)(lVar14 + 0x158);
  *(byte *)(lVar14 + 0x158) = bVar40;
  uVar9 = 3;
  if ((local_600 != 0) && (*(int *)(local_600 + 0xa4) == 1)) {
    uVar10 = (ulonglong)bVar40 + *(ulonglong *)(lVar14 + 0x140);
    uVar41 = *(ulonglong *)(lVar14 + 0x148);
    if (*(ulonglong *)(lVar14 + 0x148) < *(ulonglong *)(lVar14 + 0x140)) {
      uVar41 = uVar10;
    }
    *(ulonglong *)(lVar14 + 0x148) = uVar41;
    *(ulonglong *)(lVar14 + 0x140) = uVar10;
    uVar9 = 2;
  }
  uVar21 = 0;
  if (bVar40 != 0) {
    uVar21 = uVar9;
  }
  *(undefined4 *)(lVar14 + 0x154) = uVar21;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  FUN_1446f470e(&local_4f8,L"AntiLag2",1);
  lVar11 = FUN_1401e3324(&DAT_14c874628,local_4f8);
  if (lVar11 != 0) {
    FUN_140069376(param_2);
    puVar30 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar20 = puVar30 + 0x38;
    if (*(undefined8 **)(param_2 + 0x78) < puVar20) {
      FUN_140023dd8(puVar1,0x1c8);
      puVar30 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar20 = puVar30 + 0x38;
    }
    *puVar1 = (ulonglong)puVar20;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
      FUN_14596f92a(&local_228);
      local_610 = 0;
      local_620 = 0;
      local_640 = "Unknown";
      local_650 = 0;
      uStack_648 = 0;
      local_658 = L"FEmptyShaderParameters";
      local_618 = 0;
      local_630 = 0x10;
      local_638 = 0x7a6;
      local_628 = &local_228;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_228 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144660355);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
    local_228 = (longlong *)&DAT_14cc2c710;
    uStack_220 = (uint)DAT_14c9e1d60;
    iStack_21c = (int)((ulonglong)DAT_14c9e1d60 >> 0x20);
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    iStack_218 = 0x4c9e1d18;
    uStack_214 = 1;
    local_658 = (wchar_t *)((ulonglong)local_658 & 0xffffffffffffff00);
    FUN_140068f1a(puVar30,&local_3c0,&local_228,0x10);
    puVar30[0x37] = lVar11;
    *puVar30 = &PTR_FUN_14beac720;
    iVar42 = *(int *)(local_5d8 + 0x170);
    *(uint *)(local_5d8 + 0x170) = iVar42 + 1U;
    if (*(uint *)(local_5d8 + 0x174) < iVar42 + 1U) {
      FUN_14470e57a(lVar13,iVar42);
    }
    *(undefined8 **)(*(longlong *)(local_5d8 + 0x168) + (longlong)iVar42 * 8) = puVar30;
    *(int *)((longlong)puVar30 + 0x2c) = *(int *)(local_5d8 + 0x170) + -1;
    FUN_143204634(local_5d8,puVar30);
  }
  plVar35 = local_540;
  if ((char)local_574 == '\0') {
    LOCK();
    puVar25 = (uint *)(local_540 + 1);
    uVar6 = *puVar25;
    *puVar25 = *puVar25 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      puVar25 = (uint *)(local_540 + 1);
      LOCK();
      uVar6 = *puVar25;
      *puVar25 = *puVar25 | 0x40000000;
      UNLOCK();
      if ((uVar6 >> 0x1e & 1) == 0) {
        bVar40 = *(byte *)((longlong)local_540 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = (longlong)plVar35;
        plVar35 = DAT_14ca843c0;
        plVar19 = DAT_14ca843c8;
        if ((bVar40 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar35;
            LOCK();
            bVar44 = plVar35 != DAT_14ca843c0;
            plVar19 = plVar12;
            if (bVar44) {
              plVar35 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar19;
            UNLOCK();
          } while (bVar44);
        }
        else {
          do {
            *plVar12 = (longlong)plVar19;
            LOCK();
            bVar44 = plVar19 != DAT_14ca843c8;
            plVar35 = plVar12;
            if (bVar44) {
              plVar19 = DAT_14ca843c8;
              plVar35 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar35;
            UNLOCK();
          } while (bVar44);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_678) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140abeb8c FUN_140abeb8c body=57 status=ok
// SIG undefined FUN_140abeb8c(void)

void FUN_140abeb8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21610 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21610 = FUN_140002ddd(FUN_146433a49,uVar1,L"GbxBrainAspect_LockTarget");
  }
  return;
}



// FUNCTION 140abebd0 FUN_140abebd0 body=1230 status=ok
// SIG undefined FUN_140abebd0(void)

void FUN_140abebd0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafb1a0);
  iVar1 = *(int *)((longlong)param_1 + 0x6c);
  FUN_140abf09f(param_1[0xc],(int)param_1[0xd]);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x6c) != 0)) {
    FUN_140abf0d0(param_1 + 0xc);
  }
  uVar2 = *(uint *)(param_1 + 3);
  iVar1 = *(int *)((longlong)param_1 + 0x4c);
  FUN_140b3acda(param_1[8],(int)param_1[9]);
  *(undefined4 *)(param_1 + 9) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x4c) != 0)) {
    FUN_147cc03c6(param_1 + 8);
  }
  FUN_140abf100(param_1 + 8,(ulonglong)uVar2);
  uVar3 = *(uint *)(param_1 + 5);
  iVar1 = *(int *)((longlong)param_1 + 0x5c);
  FUN_140b3acda(param_1[10],(int)param_1[0xb]);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
    FUN_147cc03c6(param_1 + 10);
  }
  FUN_140abf100(param_1 + 10,(ulonglong)uVar3);
  if (0 < (int)uVar2) {
    lVar6 = 4;
    lVar7 = 0;
    do {
      local_a0 = *(undefined4 *)(param_1[2] + lVar6);
      local_a8 = (longlong)*(int *)(param_1[2] + -4 + lVar6) * 0x40 + *param_1;
      local_88 = param_1[8] + lVar7;
      local_98 = 0;
      uStack_90 = 0;
      local_78 = 0;
      local_80 = param_1;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      local_70 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_68 = 0;
      cVar5 = FUN_140abf19a(&local_a8);
      if (cVar5 == '\0') {
        FUN_140abf09f(local_98,uStack_90 & 0xffffffff);
        uVar4 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if ((int)uVar4 != 0) {
          FUN_140abf0d0(&local_98);
        }
        *(undefined4 *)(local_88 + 0x24) = 0xffffffff;
        *(undefined4 *)(local_88 + 0x20) = 0xffffffff;
      }
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
      }
      FUN_140abf09f(local_98,uStack_90 & 0xffffffff);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x28;
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar2 * 0x28 != lVar7);
  }
  if (0 < (int)uVar3) {
    lVar7 = 4;
    lVar6 = 0;
    do {
      local_a0 = *(undefined4 *)(param_1[4] + lVar7);
      local_a8 = (longlong)*(int *)(param_1[4] + -4 + lVar7) * 0x40 + *param_1;
      local_88 = param_1[10] + lVar6;
      local_98 = 0;
      uStack_90 = 0;
      local_78 = 0;
      local_80 = param_1;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      local_70 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_68 = 0;
      cVar5 = FUN_140abf19a(&local_a8);
      if (cVar5 == '\0') {
        FUN_140abf09f(local_98,uStack_90 & 0xffffffff);
        uVar4 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if ((int)uVar4 != 0) {
          FUN_140abf0d0(&local_98);
        }
        *(undefined4 *)(local_88 + 0x24) = 0xffffffff;
        *(undefined4 *)(local_88 + 0x20) = 0xffffffff;
      }
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
      }
      FUN_140abf09f(local_98,uStack_90 & 0xffffffff);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x28;
      lVar7 = lVar7 + 8;
    } while ((ulonglong)uVar3 * 0x28 != lVar6);
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafb1a0);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140abf09f FUN_140abf09f body=49 status=ok
// SIG undefined FUN_140abf09f(void)

void FUN_140abf09f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140abf0d0 FUN_140abf0d0 body=48 status=ok
// SIG undefined FUN_140abf0d0(void)

void FUN_140abf0d0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 140abf100 FUN_140abf100 body=153 status=ok
// SIG undefined FUN_140abf100(void)

void FUN_140abf100(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140ac08d8(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x28 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[4] = 0xffffffffffffffff;
      puVar2 = puVar2 + 5;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147cc03f6(param_1,param_2,iVar1 - param_2);
    FUN_147cc0458(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140abf19a FUN_140abf19a body=4912 status=ok
// SIG undefined FUN_140abf19a(void)

undefined8 FUN_140abf19a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ushort uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  void *_Dst;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  bool bVar30;
  int local_94;
  longlong local_78;
  
  uVar27 = (ulonglong)*(uint *)(param_1 + 1);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    plVar2 = param_1 + 2;
    uVar28 = 0;
    do {
      lVar20 = *param_1;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar12 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar12,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      lVar23 = lVar20 + uVar28 * 0x40;
      lVar20 = lVar20 + uVar28 * 0x40;
      plVar18 = (longlong *)(lVar20 + 0x10);
      lVar9 = *plVar18;
      if ((((lVar9 == 0) || (*(int *)(lVar23 + 0x1c) == 0)) ||
          (uVar4 = *(uint *)(lVar23 + 0x18), (int)uVar4 < 0)) ||
         (((DAT_14c9647dc <= (int)uVar4 ||
           (lVar29 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar29 == 0)) ||
          ((*(int *)(lVar29 + 0x10) != *(int *)(lVar23 + 0x1c) ||
           ((*(uint *)(lVar29 + 8) & 0x10200000) != 0)))))) {
        if (*(int *)(lVar23 + 0x28) != 0) {
          lVar9 = FUN_14007daa4(plVar18,0,0);
          if (lVar9 == 0) {
LAB_140abffcb:
            if (*plVar18 == 0) {
              return 0;
            }
            *plVar18 = 0;
            *(undefined8 *)(lVar20 + 0x18) = 0;
            return 0;
          }
          puVar11 = *(undefined **)(lVar9 + 8);
          if (DAT_14c951a40 == 0) {
            bVar30 = puVar11 != (undefined *)0x0;
            if (puVar11 != &DAT_14c951a38 && bVar30) {
              do {
                puVar11 = *(undefined **)(puVar11 + 0x30);
                bVar30 = puVar11 != (undefined *)0x0;
                if (puVar11 == &DAT_14c951a38) break;
              } while (puVar11 != (undefined *)0x0);
            }
            if (!bVar30) goto LAB_140abffcb;
          }
          else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) == 0) goto LAB_140abffcb;
          *plVar18 = lVar9;
        }
        if (lVar9 == 0) {
          return 0;
        }
      }
      uVar15 = *(ushort *)(lVar23 + 0x3c);
      if ((short)uVar15 < 0) {
        if (*(longlong *)(lVar23 + 0x30) == 0) {
          return 0;
        }
        puVar14 = (undefined8 *)FUN_140ac04ca(plVar2);
        *(char *)((longlong)puVar14 + 0x39) =
             ((*(uint *)(*(longlong *)(lVar23 + 0x30) + 0xb0) >> 10 & 1) != 0) + '\x03';
        uVar15 = (*(ushort *)(lVar23 + 0x3c) & 0x7fff) - 1;
        if (uVar15 < 5) {
          *(char *)(puVar14 + 7) = (char)(0x302010000 >> ((char)uVar15 * '\b' & 0x3fU));
        }
        lVar9 = *(longlong *)(lVar23 + 0x30);
        if (DAT_14c950c29 == '\x01') {
          if (lVar9 == 0) {
            lVar9 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar9 = *(longlong *)(lVar23 + 0x30);
          }
        }
        puVar14[4] = lVar9;
        uVar12 = FUN_140d2ab24(*(undefined8 *)(lVar23 + 0x30));
        *puVar14 = uVar12;
        FUN_1449651a4(puVar14,uVar12);
        lVar9 = FUN_1446ddbd2();
        if (((*(longlong *)(lVar23 + 0x10) == 0) ||
            (cVar5 = FUN_144729dda(lVar23 + 0x18), cVar5 == '\0')) && (*(int *)(lVar23 + 0x28) != 0)
           ) {
          lVar29 = FUN_14007daa4(plVar18,0,0);
          if (lVar29 == 0) {
LAB_140ac0063:
            if (*plVar18 != 0) {
              *plVar18 = 0;
              *(undefined8 *)(lVar20 + 0x18) = 0;
            }
          }
          else {
            lVar21 = *(longlong *)(lVar29 + 8);
            if (*(ulonglong *)(lVar9 + 8) == 0) {
              bVar30 = lVar21 != 0;
              if (lVar21 != lVar9 && bVar30) {
                do {
                  lVar21 = *(longlong *)(lVar21 + 0x30);
                  bVar30 = lVar21 != 0;
                  if (lVar21 == lVar9) break;
                } while (lVar21 != 0);
              }
              if (!bVar30) goto LAB_140ac0063;
            }
            else if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar9 + 8)) == 0)
            goto LAB_140ac0063;
            *plVar18 = lVar29;
          }
        }
        *(int *)(puVar14 + 5) = *(int *)(*plVar18 + 0x34) * *(int *)(*plVar18 + 0x30);
        lVar9 = FUN_1446ddbd2();
        if (((*plVar18 == 0) || (cVar5 = FUN_144729dda(lVar23 + 0x18), cVar5 == '\0')) &&
           (*(int *)(lVar23 + 0x28) != 0)) {
          lVar23 = FUN_14007daa4(plVar18,0,0);
          if (lVar23 == 0) {
LAB_140ac00f6:
            if (*plVar18 != 0) {
              *plVar18 = 0;
              *(undefined8 *)(lVar20 + 0x18) = 0;
            }
          }
          else {
            lVar29 = *(longlong *)(lVar23 + 8);
            if (*(ulonglong *)(lVar9 + 8) == 0) {
              bVar30 = lVar29 != 0;
              if (lVar29 != lVar9 && bVar30) {
                do {
                  lVar29 = *(longlong *)(lVar29 + 0x30);
                  bVar30 = lVar29 != 0;
                  if (lVar29 == lVar9) break;
                } while (lVar29 != 0);
              }
              if (!bVar30) goto LAB_140ac00f6;
            }
            else if ((*(ulonglong *)(lVar29 + 0x18) & *(ulonglong *)(lVar9 + 8)) == 0)
            goto LAB_140ac00f6;
            *plVar18 = lVar23;
          }
        }
        uVar8 = (**(code **)(*(longlong *)*plVar18 + 0x178))();
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uVar8;
      }
      else {
        iVar6 = *(int *)(lVar23 + 0x38);
        if (*(int *)(lVar23 + 0x38) == -1) {
          iVar6 = 0;
        }
        if (uVar15 - 1 < 2) {
          lVar9 = FUN_140ac04ca(plVar2);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            uVar12 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar12,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          lVar29 = *plVar18;
          if (((((((lVar29 == 0) || (*(int *)(lVar23 + 0x1c) == 0)) ||
                 (uVar4 = *(uint *)(lVar23 + 0x18), (int)uVar4 < 0)) ||
                ((DAT_14c9647dc <= (int)uVar4 ||
                 (lVar21 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8),
                 lVar21 == 0)))) || (*(int *)(lVar21 + 0x10) != *(int *)(lVar23 + 0x1c))) ||
              ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)) && (*(int *)(lVar23 + 0x28) != 0)) {
            lVar29 = FUN_14007daa4(plVar18,0,0);
            if (lVar29 == 0) {
LAB_140abf6db:
              if (*plVar18 != 0) {
                *plVar18 = 0;
                *(undefined8 *)(lVar20 + 0x18) = 0;
              }
              lVar29 = 0;
            }
            else {
              puVar11 = *(undefined **)(lVar29 + 8);
              if (DAT_14c951a40 == 0) {
                bVar30 = puVar11 != (undefined *)0x0;
                if (puVar11 != &DAT_14c951a38 && bVar30) {
                  do {
                    puVar11 = *(undefined **)(puVar11 + 0x30);
                    bVar30 = puVar11 != (undefined *)0x0;
                    if (puVar11 == &DAT_14c951a38) break;
                  } while (puVar11 != (undefined *)0x0);
                }
                if (!bVar30) goto LAB_140abf6db;
              }
              else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) == 0) goto LAB_140abf6db;
              *plVar18 = lVar29;
            }
          }
          *(int *)(lVar9 + 0x34) = iVar6 * *(int *)(lVar29 + 0x34) + *(int *)(lVar29 + 0x44);
          *(undefined1 *)(lVar9 + 0x39) = 0;
        }
        else {
          switch(uVar15) {
          case 3:
            lVar9 = FUN_140ac04ca(plVar2);
            lVar29 = FUN_1446ddbd2();
            if (((*plVar18 == 0) || (cVar5 = FUN_144729dda(lVar23 + 0x18), cVar5 == '\0')) &&
               (*(int *)(lVar23 + 0x28) != 0)) {
              lVar23 = FUN_14007daa4(plVar18,0,0);
              if (lVar23 == 0) {
LAB_140ac02b7:
                if (*plVar18 != 0) {
                  *plVar18 = 0;
                  *(undefined8 *)(lVar20 + 0x18) = 0;
                }
              }
              else {
                lVar21 = *(longlong *)(lVar23 + 8);
                if (*(ulonglong *)(lVar29 + 8) == 0) {
                  bVar30 = lVar21 != 0;
                  if (lVar21 != lVar29 && bVar30) {
                    do {
                      lVar21 = *(longlong *)(lVar21 + 0x30);
                      bVar30 = lVar21 != 0;
                      if (lVar21 == lVar29) break;
                    } while (lVar21 != 0);
                  }
                  if (!bVar30) goto LAB_140ac02b7;
                }
                else if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar29 + 8)) == 0)
                goto LAB_140ac02b7;
                *plVar18 = lVar23;
              }
            }
            *(int *)(lVar9 + 0x34) = iVar6 * *(int *)(*plVar18 + 0x34) + *(int *)(*plVar18 + 0x44);
            *(undefined2 *)(lVar9 + 0x38) = 0x101;
            break;
          case 4:
            lVar9 = FUN_140ac04ca(plVar2);
            lVar29 = FUN_1446ddbd2();
            if (((*plVar18 == 0) || (cVar5 = FUN_144729dda(lVar23 + 0x18), cVar5 == '\0')) &&
               (*(int *)(lVar23 + 0x28) != 0)) {
              lVar23 = FUN_14007daa4(plVar18,0,0);
              if (lVar23 == 0) {
LAB_140ac030d:
                if (*plVar18 != 0) {
                  *plVar18 = 0;
                  *(undefined8 *)(lVar20 + 0x18) = 0;
                }
              }
              else {
                lVar21 = *(longlong *)(lVar23 + 8);
                if (*(ulonglong *)(lVar29 + 8) == 0) {
                  bVar30 = lVar21 != 0;
                  if (lVar21 != lVar29 && bVar30) {
                    do {
                      lVar21 = *(longlong *)(lVar21 + 0x30);
                      bVar30 = lVar21 != 0;
                      if (lVar21 == lVar29) break;
                    } while (lVar21 != 0);
                  }
                  if (!bVar30) goto LAB_140ac030d;
                }
                else if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar29 + 8)) == 0)
                goto LAB_140ac030d;
                *plVar18 = lVar23;
              }
            }
            *(int *)(lVar9 + 0x34) = iVar6 * *(int *)(*plVar18 + 0x34) + *(int *)(*plVar18 + 0x44);
            *(undefined2 *)(lVar9 + 0x38) = 0x102;
            break;
          case 5:
            lVar9 = FUN_140ac04ca(plVar2);
            lVar29 = FUN_1446ddbd2();
            if (((*plVar18 == 0) || (cVar5 = FUN_144729dda(lVar23 + 0x18), cVar5 == '\0')) &&
               (*(int *)(lVar23 + 0x28) != 0)) {
              lVar23 = FUN_14007daa4(plVar18,0,0);
              if (lVar23 == 0) {
LAB_140ac0363:
                if (*plVar18 != 0) {
                  *plVar18 = 0;
                  *(undefined8 *)(lVar20 + 0x18) = 0;
                }
              }
              else {
                lVar21 = *(longlong *)(lVar23 + 8);
                if (*(ulonglong *)(lVar29 + 8) == 0) {
                  bVar30 = lVar21 != 0;
                  if (lVar21 != lVar29 && bVar30) {
                    do {
                      lVar21 = *(longlong *)(lVar21 + 0x30);
                      bVar30 = lVar21 != 0;
                      if (lVar21 == lVar29) break;
                    } while (lVar21 != 0);
                  }
                  if (!bVar30) goto LAB_140ac0363;
                }
                else if ((*(ulonglong *)(lVar21 + 0x18) & *(ulonglong *)(lVar29 + 8)) == 0)
                goto LAB_140ac0363;
                *plVar18 = lVar23;
              }
            }
            *(int *)(lVar9 + 0x34) = iVar6 * *(int *)(*plVar18 + 0x34) + *(int *)(*plVar18 + 0x44);
            *(undefined2 *)(lVar9 + 0x38) = 0x103;
            break;
          case 6:
          case 7:
          case 8:
            plVar10 = (longlong *)FUN_140ac04ca(plVar2);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              uVar12 = FUN_140342cba();
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar12,FUN_1468c7f1e);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            lVar9 = *plVar18;
            if ((((lVar9 == 0) || (*(int *)(lVar23 + 0x1c) == 0)) ||
                ((uVar4 = *(uint *)(lVar23 + 0x18), (int)uVar4 < 0 ||
                 ((((DAT_14c9647dc <= (int)uVar4 ||
                    (lVar29 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8),
                    lVar29 == 0)) || (*(int *)(lVar29 + 0x10) != *(int *)(lVar23 + 0x1c))) ||
                  ((*(uint *)(lVar29 + 8) & 0x10200000) != 0)))))) && (*(int *)(lVar23 + 0x28) != 0)
               ) {
              lVar9 = FUN_14007daa4(plVar18,0,0);
              if (lVar9 == 0) {
LAB_140abfafc:
                if (*plVar18 != 0) {
                  *plVar18 = 0;
                  *(undefined8 *)(lVar20 + 0x18) = 0;
                }
                lVar9 = 0;
              }
              else {
                puVar11 = *(undefined **)(lVar9 + 8);
                if (DAT_14c951a40 == 0) {
                  bVar30 = puVar11 != (undefined *)0x0;
                  if (puVar11 != &DAT_14c951a38 && bVar30) {
                    do {
                      puVar11 = *(undefined **)(puVar11 + 0x30);
                      bVar30 = puVar11 != (undefined *)0x0;
                      if (puVar11 == &DAT_14c951a38) break;
                    } while (puVar11 != (undefined *)0x0);
                  }
                  if (!bVar30) goto LAB_140abfafc;
                }
                else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) == 0) goto LAB_140abfafc;
                *plVar18 = lVar9;
              }
            }
            *(undefined4 *)((longlong)plVar10 + 0x34) = *(undefined4 *)(lVar9 + 0x44);
            *(undefined1 *)((longlong)plVar10 + 0x39) = 2;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              uVar12 = FUN_140342cba();
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar12,FUN_1468c7f1e);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            lVar9 = *plVar18;
            if (((((lVar9 == 0) || (*(int *)(lVar23 + 0x1c) == 0)) ||
                 ((uVar4 = *(uint *)(lVar23 + 0x18), (int)uVar4 < 0 ||
                  (((DAT_14c9647dc <= (int)uVar4 ||
                    (lVar29 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8),
                    lVar29 == 0)) || (*(int *)(lVar29 + 0x10) != *(int *)(lVar23 + 0x1c))))))) ||
                ((*(uint *)(lVar29 + 8) & 0x10200000) != 0)) && (*(int *)(lVar23 + 0x28) != 0)) {
              lVar9 = FUN_14007daa4(plVar18,0,0);
              if (lVar9 == 0) {
LAB_140abfb48:
                if (*plVar18 != 0) {
                  *plVar18 = 0;
                  *(undefined8 *)(lVar20 + 0x18) = 0;
                }
                lVar9 = 0;
              }
              else {
                puVar11 = *(undefined **)(lVar9 + 8);
                if (DAT_14c951a40 == 0) {
                  bVar30 = puVar11 != (undefined *)0x0;
                  if (puVar11 != &DAT_14c951a38 && bVar30) {
                    do {
                      puVar11 = *(undefined **)(puVar11 + 0x30);
                      bVar30 = puVar11 != (undefined *)0x0;
                      if (puVar11 == &DAT_14c951a38) break;
                    } while (puVar11 != (undefined *)0x0);
                  }
                  if (!bVar30) goto LAB_140abfb48;
                }
                else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) == 0) goto LAB_140abfb48;
                *plVar18 = lVar9;
              }
            }
            *plVar10 = lVar9;
            FUN_1449651a4(plVar10);
            *(int *)(plVar10 + 6) = iVar6;
            if ((uVar15 == 8) && (uVar28 != (int)uVar27 - 1)) {
              lVar20 = FUN_140ac04ca(plVar2);
              *(undefined4 *)(lVar20 + 0x34) = 0;
              *(undefined1 *)(lVar20 + 0x39) = 1;
              lVar23 = FUN_1446ddbd2();
              if (*plVar10 == 0) {
                if ((int)plVar10[3] != 0) goto LAB_140abf8b4;
LAB_140ac03c5:
                lVar9 = 0;
              }
              else {
                cVar5 = FUN_144729dda(plVar10 + 1);
                if ((cVar5 == '\0') && ((int)plVar10[3] != 0)) {
LAB_140abf8b4:
                  lVar9 = FUN_14007daa4(plVar10,0,0);
                  if (lVar9 == 0) {
LAB_140ac03b9:
                    if (*plVar10 != 0) {
                      *plVar10 = 0;
                      plVar10[1] = 0;
                    }
                    goto LAB_140ac03c5;
                  }
                  lVar29 = *(longlong *)(lVar9 + 8);
                  if (*(ulonglong *)(lVar23 + 8) == 0) {
                    bVar30 = lVar29 != 0;
                    if (lVar29 != lVar23 && bVar30) {
                      do {
                        lVar29 = *(longlong *)(lVar29 + 0x30);
                        bVar30 = lVar29 != 0;
                        if (lVar29 == lVar23) break;
                      } while (lVar29 != 0);
                    }
                    if (!bVar30) goto LAB_140ac03b9;
                  }
                  else if ((*(ulonglong *)(lVar29 + 0x18) & *(ulonglong *)(lVar23 + 8)) == 0)
                  goto LAB_140ac03b9;
                  *plVar10 = lVar9;
                }
                else {
                  lVar9 = *plVar10;
                }
              }
              lVar23 = *(longlong *)(lVar9 + 0x78);
              if (lVar23 != 0) {
                lVar9 = *(longlong *)(lVar23 + 8);
                lVar29 = FUN_144a810c6();
                if (*(ulonglong *)(lVar29 + 8) == 0) {
                  bVar30 = lVar9 != 0;
                  if (lVar9 != lVar29 && bVar30) {
                    do {
                      lVar9 = *(longlong *)(lVar9 + 0x30);
                      bVar30 = lVar9 != 0;
                      if (lVar9 == lVar29) break;
                    } while (lVar9 != 0);
                  }
                  if (!bVar30) goto LAB_140ac0423;
                }
                else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar29 + 8)) == 0) {
LAB_140ac0423:
                  lVar9 = *(longlong *)(lVar23 + 8);
                  lVar29 = FUN_14010a2ea();
                  if (*(ulonglong *)(lVar29 + 8) == 0) {
                    bVar30 = lVar9 != 0;
                    if (lVar9 != lVar29 && bVar30) {
                      do {
                        lVar9 = *(longlong *)(lVar9 + 0x30);
                        bVar30 = lVar9 != 0;
                        if (lVar9 == lVar29) break;
                      } while (lVar9 != 0);
                    }
                    if (!bVar30) goto LAB_140ac0472;
                  }
                  else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar29 + 8)) == 0) {
LAB_140ac0472:
                    lVar23 = *(longlong *)(lVar23 + 8);
                    lVar9 = FUN_1446ef9c4();
                    if (*(ulonglong *)(lVar9 + 8) == 0) {
                      bVar30 = lVar23 != 0;
                      if (lVar23 != lVar9 && bVar30) {
                        do {
                          lVar23 = *(longlong *)(lVar23 + 0x30);
                          bVar30 = lVar23 != 0;
                          if (lVar23 == lVar9) break;
                        } while (lVar23 != 0);
                      }
                      if (bVar30) goto LAB_140ac04c0;
                    }
                    else if ((*(ulonglong *)(lVar23 + 0x18) & *(ulonglong *)(lVar9 + 8)) != 0) {
LAB_140ac04c0:
                      *(undefined1 *)(lVar20 + 0x38) = 3;
                    }
                    break;
                  }
                  *(undefined1 *)(lVar20 + 0x38) = 2;
                  break;
                }
                *(undefined1 *)(lVar20 + 0x38) = 1;
              }
            }
          }
        }
      }
      uVar28 = uVar28 + 1;
      uVar27 = (ulonglong)(int)param_1[1];
    } while ((longlong)uVar28 < (longlong)uVar27);
  }
  iVar6 = (int)param_1[3];
  if (0 < iVar6) {
    plVar2 = param_1 + 2;
    lVar9 = 1;
    iVar19 = -2;
    lVar29 = 0xb9;
    iVar25 = 2;
    lVar23 = 0;
    lVar20 = 0x100000000;
    do {
      lVar21 = *plVar2;
      lVar26 = lVar23 * 0x40;
      lVar23 = lVar23 + 1;
      lVar17 = (longlong)iVar6;
      if (((*(char *)(lVar21 + 0x39 + lVar26) == '\0') && (lVar23 < lVar17)) &&
         (*(char *)(lVar21 + 0x39 + lVar9 * 0x40) == '\0')) {
        lVar16 = lVar9 * 0x40 + lVar21;
        lVar17 = lVar9;
        lVar22 = lVar20;
        iVar24 = iVar25;
        local_94 = iVar19;
        local_78 = lVar29;
        do {
          piVar1 = (int *)(lVar26 + lVar21 + 0x34);
          *piVar1 = *piVar1 + *(int *)(lVar16 + 0x34);
          lVar16 = *plVar2;
          if (*(longlong *)(lVar16 + 0x10 + (lVar22 >> 0x1a)) != 0) {
            FUN_1400020a8();
          }
          iVar6 = (int)param_1[3];
          if (local_94 + iVar6 != 0) {
            _Dst = (void *)(lVar16 + (lVar22 >> 0x1a));
            memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(local_94 + iVar6) << 6);
            iVar6 = (int)param_1[3];
          }
          *(int *)(param_1 + 3) = iVar6 + -1;
          FUN_140ac0624(plVar2);
          iVar6 = (int)param_1[3];
          if (iVar6 <= iVar24) break;
          lVar17 = lVar17 + 1;
          lVar16 = lVar17 * 0x40 + *plVar2;
          local_94 = local_94 + -1;
          iVar24 = iVar24 + 1;
          lVar22 = lVar22 + 0x100000000;
          pcVar3 = (char *)(*plVar2 + local_78);
          local_78 = local_78 + 0x40;
        } while (*pcVar3 == '\0');
        lVar17 = (longlong)iVar6;
      }
      lVar9 = lVar9 + 1;
      iVar19 = iVar19 + -1;
      lVar29 = lVar29 + 0x40;
      iVar25 = iVar25 + 1;
      lVar20 = lVar20 + 0x100000000;
    } while (lVar23 < lVar17);
  }
  *(undefined4 *)(param_1[4] + 0x20) = *(undefined4 *)(param_1[5] + 0x68);
  lVar20 = param_1[5];
  uVar4 = *(uint *)(param_1 + 3);
  if (uVar4 != 0) {
    iVar6 = *(int *)(lVar20 + 0x68);
    *(uint *)(lVar20 + 0x68) = iVar6 + uVar4;
    if ((uint)(*(int *)(lVar20 + 0x6c) - iVar6) < uVar4) {
      FUN_140ac0524((longlong *)(lVar20 + 0x60),iVar6);
    }
    FUN_140ac06a5((longlong)iVar6 * 0x40 + *(longlong *)(lVar20 + 0x60),param_1[2],uVar4);
    lVar20 = param_1[5];
  }
  *(undefined4 *)(param_1[4] + 0x24) = *(undefined4 *)(lVar20 + 0x68);
  lVar23 = (longlong)((int)param_1[1] + -1) * 0x40;
  lVar20 = *param_1 + lVar23;
  uVar7 = *(ushort *)(*param_1 + 0x3c + lVar23) & 0x7fff;
  uVar12 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  if (4 < uVar7 - 1) {
    if (2 < uVar7 - 6) {
      return uVar12;
    }
    plVar2 = (longlong *)(lVar20 + 0x10);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar13 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar13,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    lVar23 = *plVar2;
    if ((((((lVar23 == 0) || (*(int *)(lVar20 + 0x1c) == 0)) ||
          (uVar4 = *(uint *)(lVar20 + 0x18), (int)uVar4 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar4 ||
          (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 == 0)))) ||
        ((*(int *)(lVar9 + 0x10) != *(int *)(lVar20 + 0x1c) ||
         ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) && (*(int *)(lVar20 + 0x28) != 0)) {
      lVar23 = FUN_14007daa4(plVar2,0,0);
      if (lVar23 == 0) {
LAB_140abfb97:
        if (*plVar2 != 0) {
          *plVar2 = 0;
          *(undefined8 *)(lVar20 + 0x18) = 0;
        }
        lVar23 = 0;
      }
      else {
        puVar11 = *(undefined **)(lVar23 + 8);
        if (DAT_14c951a40 == 0) {
          bVar30 = puVar11 != (undefined *)0x0;
          if (puVar11 != &DAT_14c951a38 && bVar30) {
            do {
              puVar11 = *(undefined **)(puVar11 + 0x30);
              bVar30 = puVar11 != (undefined *)0x0;
              if (puVar11 == &DAT_14c951a38) break;
            } while (puVar11 != (undefined *)0x0);
          }
          if (!bVar30) goto LAB_140abfb97;
        }
        else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) == 0) goto LAB_140abfb97;
        *plVar2 = lVar23;
      }
    }
    lVar23 = *(longlong *)(lVar23 + 0x78);
    goto LAB_140abf645;
  }
  plVar2 = (longlong *)(lVar20 + 0x10);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    uVar13 = FUN_140342cba();
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar13,FUN_1468c7f1e);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  lVar23 = *plVar2;
  if (((((lVar23 != 0) && (*(int *)(lVar20 + 0x1c) != 0)) &&
       (uVar4 = *(uint *)(lVar20 + 0x18), -1 < (int)uVar4)) &&
      ((((int)uVar4 < DAT_14c9647dc &&
        (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 != 0)) &&
       ((*(int *)(lVar9 + 0x10) == *(int *)(lVar20 + 0x1c) &&
        ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))))) || (*(int *)(lVar20 + 0x28) == 0))
  goto LAB_140abf645;
  lVar23 = FUN_14007daa4(plVar2,0,0);
  if (lVar23 == 0) {
LAB_140abf9d1:
    if (*plVar2 != 0) {
      *plVar2 = 0;
      *(undefined8 *)(lVar20 + 0x18) = 0;
    }
    lVar23 = 0;
  }
  else {
    puVar11 = *(undefined **)(lVar23 + 8);
    if (DAT_14c951a40 == 0) {
      bVar30 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c951a38 && bVar30) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar30 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c951a38) break;
        } while (puVar11 != (undefined *)0x0);
      }
      if (!bVar30) goto LAB_140abf9d1;
    }
    else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) == 0) goto LAB_140abf9d1;
    *plVar2 = lVar23;
  }
LAB_140abf645:
  *(longlong *)param_1[4] = lVar23;
  FUN_1449651a4();
  return uVar12;
}



// FUNCTION 140ac04ca FUN_140ac04ca body=59 status=ok
// SIG undefined FUN_140ac04ca(void)

longlong FUN_140ac04ca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140ac0524(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_140ac0505(lVar2);
  return lVar2;
}



// FUNCTION 140ac0505 FUN_140ac0505 body=30 status=ok
// SIG undefined FUN_140ac0505(void)

void FUN_140ac0505(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0xffffffff;
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 140ac0524 FUN_140ac0524 body=255 status=ok
// SIG undefined FUN_140ac0524(void)

void FUN_140ac0524(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140ac0624 FUN_140ac0624 body=129 status=ok
// SIG undefined FUN_140ac0624(void)

void FUN_140ac0624(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0x3ffffffffffff00U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 6,8);
      uVar2 = uVar2 >> 6;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,0x40,8);
    }
  }
  return;
}



// FUNCTION 140ac06a5 FUN_140ac06a5 body=562 status=ok
// SIG undefined FUN_140ac06a5(void)

void FUN_140ac06a5(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  bool bVar8;
  
  do {
    if (param_3 == 0) {
      return;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar5 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar5,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    lVar4 = *param_2;
    if (lVar4 == 0) {
      if ((int)param_2[3] != 0) {
LAB_140ac07c5:
        lVar4 = FUN_14007daa4(param_2,0,0);
        if (lVar4 != 0) {
          puVar6 = *(undefined **)(lVar4 + 8);
          if (DAT_14c951a40 == 0) {
            bVar8 = puVar6 != (undefined *)0x0;
            if (puVar6 != &DAT_14c951a38 && bVar8) {
              do {
                puVar6 = *(undefined **)(puVar6 + 0x30);
                bVar8 = puVar6 != (undefined *)0x0;
                if (puVar6 == &DAT_14c951a38) break;
              } while (puVar6 != (undefined *)0x0);
            }
            if (bVar8) goto LAB_140ac07f9;
          }
          else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951a40) != 0) {
LAB_140ac07f9:
            *param_2 = lVar4;
            goto LAB_140ac0706;
          }
        }
        if (*param_2 != 0) {
          *param_2 = 0;
          param_2[1] = 0;
        }
      }
      lVar4 = 0;
    }
    else {
      if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_140ac0801:
        bVar8 = false;
      }
      else {
        uVar1 = *(uint *)(param_2 + 1);
        bVar8 = false;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)((longlong)param_2 + 0xc)))
          goto LAB_140ac0801;
          bVar8 = (*(uint *)(lVar7 + 8) & 0x10200000) == 0;
        }
      }
      if ((!bVar8) && ((int)param_2[3] != 0)) goto LAB_140ac07c5;
    }
LAB_140ac0706:
    *param_1 = lVar4;
    param_1[1] = param_2[1];
    FUN_1406fa324(param_1 + 2,param_2 + 2);
    lVar4 = param_2[4];
    param_1[4] = lVar4;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(short *)(param_1 + 7) = (short)param_2[7];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
    lVar4 = param_2[6];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
    *(int *)(param_1 + 6) = (int)lVar4;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 140ac08d8 FUN_140ac08d8 body=370 status=ok
// SIG undefined FUN_140ac08d8(void)

void FUN_140ac08d8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ac0961;
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
LAB_140ac0961:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140ac0a4a FUN_140ac0a4a body=103 status=ok
// SIG undefined FUN_140ac0a4a(void)

ulonglong FUN_140ac0a4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140ac0a94:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140ac0a94;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140ac0ab2 FUN_140ac0ab2 body=28 status=ok
// SIG undefined FUN_140ac0ab2(void)

void FUN_140ac0ab2(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140ac0ace();
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 140ac0ace FUN_140ac0ace body=419 status=ok
// SIG undefined FUN_140ac0ace(void)

bool FUN_140ac0ace(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 == 0) {
    uVar5 = FUN_140e391b0();
    lVar8 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (lVar6 == 0) {
    if (lVar8 == 0) {
      return false;
    }
    if (*plVar1 == 0) {
      return false;
    }
    plVar2 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,plVar1);
      *(longlong *)(param_1 + 0x40) = lVar6;
      if (lVar6 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x38);
        goto LAB_140ac0af7;
      }
    }
switchD_140ac0b3c_default:
    bVar9 = false;
  }
  else {
LAB_140ac0af7:
    uVar5 = *param_2;
    if (lVar8 == 0) {
      uVar7 = FUN_140e391b0(0,lVar6);
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x38) = lVar8;
      if (((*(longlong *)(param_1 + 0x40) == 0) && (lVar8 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar7 = FUN_144aff482(uVar7,plVar1);
        }
        *(undefined8 *)(param_1 + 0x40) = uVar7;
      }
    }
    iVar4 = FUN_140ac0c72(uVar5);
    if (*(char *)(param_1 + 0x48) == '\0') {
      return iVar4 == *(int *)(param_1 + 0x4c);
    }
    switch(*(char *)(param_1 + 0x48)) {
    case '\x01':
      bVar9 = iVar4 != *(int *)(param_1 + 0x4c);
      break;
    case '\x02':
      bVar9 = iVar4 < *(int *)(param_1 + 0x4c);
      break;
    case '\x03':
      bVar9 = iVar4 <= *(int *)(param_1 + 0x4c);
      break;
    case '\x04':
      bVar9 = *(int *)(param_1 + 0x4c) < iVar4;
      break;
    case '\x05':
      bVar9 = *(int *)(param_1 + 0x4c) <= iVar4;
      break;
    default:
      goto switchD_140ac0b3c_default;
    }
  }
  return bVar9;
}



// FUNCTION 140ac0c72 FUN_140ac0c72 body=181 status=ok
// SIG undefined FUN_140ac0c72(void)

undefined4 FUN_140ac0c72(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc))) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x20) == param_2) {
          if (lVar3 == 0) {
            return 0;
          }
          if (lVar3 == -8) {
            return 0;
          }
          return *(undefined4 *)(lVar3 + 0x10);
        }
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 140ac0d28 FUN_140ac0d28 body=58 status=ok
// SIG undefined FUN_140ac0d28(void)

void FUN_140ac0d28(longlong param_1,longlong *param_2)

{
  FUN_140b972e4(param_1,*(undefined8 *)(*(longlong *)(*param_2 + 0x58) + 0x10),
                *(undefined8 *)(*param_2 + 0x38));
  FUN_140b9733e(param_1);
  FUN_140ac0d62(*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



// FUNCTION 140ac0d62 FUN_140ac0d62 body=552 status=ok
// SIG undefined FUN_140ac0d62(void)

void FUN_140ac0d62(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar14 = *param_2;
  lVar4 = param_2[1];
  local_60 = *(undefined8 *)(lVar14 + 0x68);
  local_4c = 0;
  iVar2 = *(int *)(lVar4 + 0xd0);
  local_58 = param_1;
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar16 = 0;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar4 + 200);
    if (*(uint **)(lVar4 + 200) == (uint *)0x0) {
      puVar7 = (uint *)(lVar4 + 0xb8);
    }
    uVar8 = *puVar7;
    if (uVar8 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar12 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar12 = uVar16;
      }
      iVar11 = 0;
      do {
        if (uVar12 == uVar16) goto LAB_140ac0f16;
        iVar11 = iVar11 + 0x20;
        uVar8 = puVar7[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar12 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar8 = 0xffffffff;
    do {
      FUN_140665b14(local_58,*(longlong *)(lVar4 + 0xa8) + (longlong)iVar6 * 0x60 + 8,local_60,
                    &local_4c);
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar7 = *(uint **)(lVar4 + 200);
      if (*(uint **)(lVar4 + 200) == (uint *)0x0) {
        puVar7 = (uint *)(lVar4 + 0xb8);
      }
      iVar3 = *(int *)(lVar4 + 0xd0);
      iVar6 = (int)uVar16;
      lVar14 = (longlong)iVar6;
      uVar13 = puVar7[lVar14] & uVar8;
      if (uVar13 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar6) {
          iVar10 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar15 = 0;
          do {
            uVar13 = puVar7[lVar14 + lVar15 + 1];
            if (uVar13 != 0) {
              uVar16 = (ulonglong)(iVar6 + (int)lVar15 + 1);
              uVar8 = 0xffffffff;
              goto LAB_140ac0edd;
            }
            iVar11 = iVar11 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar14 != lVar15);
          uVar8 = 0xffffffff;
          lVar14 = (longlong)iVar10;
        }
        uVar16 = lVar14 + 1U & 0xffffffff;
        iVar6 = iVar3;
      }
      else {
LAB_140ac0edd:
        uVar12 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    lVar14 = *param_2;
  }
LAB_140ac0f16:
  piVar5 = *(int **)(lVar14 + 0x70);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + local_4c;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac0f8c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac0f92 FUN_140ac0f92 body=124 status=ok
// SIG undefined FUN_140ac0f92(void)

void FUN_140ac0f92(longlong param_1,undefined1 *param_2,undefined1 param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_14;
  char local_13;
  undefined1 local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    local_13 = param_2[1];
    if (local_13 == '\x01') {
      local_14 = *param_2;
      local_12 = local_14;
    }
    local_28 = param_3;
    local_11 = local_13;
    FUN_144a5ad3c(*(longlong *)(param_1 + 0x2b8),&local_14,&local_12);
  }
  if (param_2[1] == '\x01') {
    param_2[1] = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ac1010 FUN_140ac1010 body=40 status=ok
// SIG undefined FUN_140ac1010(void)

undefined8 FUN_140ac1010(undefined8 param_1,int param_2)

{
  FUN_140ac1038();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ac1038 FUN_140ac1038 body=48 status=ok
// SIG undefined FUN_140ac1038(void)

void FUN_140ac1038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acb1c40;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}



// FUNCTION 140ac1076 FUN_140ac1076 body=31 status=ok
// SIG undefined FUN_140ac1076(void)

undefined8 FUN_140ac1076(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ac1096 FUN_140ac1096 body=38 status=ok
// SIG undefined FUN_140ac1096(void)

undefined8 FUN_140ac1096(undefined8 param_1,int param_2)

{
  FUN_140ac10bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ac10bc FUN_140ac10bc body=200 status=ok
// SIG undefined FUN_140ac10bc(void)

void FUN_140ac10bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149e119d0;
  puVar1 = (undefined8 *)param_1[0x17];
  if (puVar1 != (undefined8 *)0x0) {
    param_1[0x17] = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x17];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  lVar3 = param_1[0xf];
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar3);
  return;
}



// FUNCTION 140ac1184 FUN_140ac1184 body=102 status=ok
// SIG undefined FUN_140ac1184(void)

ulonglong FUN_140ac1184(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140ac11cd:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140ac11cd;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140ac11f0 FUN_140ac11f0 body=312 status=ok
// SIG undefined FUN_140ac11f0(void)

void FUN_140ac11f0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    cVar5 = '\0';
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140ac125b;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x34) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        plVar8 = (longlong *)*puVar6;
      }
      else {
        plVar8 = (longlong *)0x0;
      }
      cVar5 = (**(code **)(*plVar8 + 0x878))();
      goto LAB_140ac125b;
    }
  }
  cVar5 = '\0';
LAB_140ac125b:
  if (*(char *)(param_1 + 0xf0) != cVar5) {
    *(char *)(param_1 + 0xf0) = cVar5;
    iVar2 = *(int *)(param_1 + 0xc4);
    *(int *)(param_1 + 0xc4) = iVar2 + 1;
    uVar7 = (ulonglong)*(int *)(param_1 + 0xb8);
    if (0 < (longlong)uVar7) {
      bVar9 = false;
      do {
        lVar10 = uVar7 * 0x10 + -8;
        uVar11 = uVar7;
        while (((lVar3 = *(longlong *)(param_1 + 0xb0), *(int *)(lVar3 + lVar10) != 0 &&
                (plVar8 = *(longlong **)(lVar3 + -8 + lVar10), plVar8 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar8 + 0x60))(), cVar5 != '\0'))) {
          lVar10 = lVar10 + -0x10;
          bVar4 = uVar11 < 2;
          uVar11 = uVar11 - 1;
          if (bVar4) {
            *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
            if (!bVar9) {
              return;
            }
            goto LAB_140ac1308;
          }
        }
        uVar7 = uVar11 - 1;
        bVar9 = true;
      } while (1 < uVar11);
      *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + -1;
LAB_140ac1308:
      FUN_14474d06a((longlong *)(param_1 + 0xb0),0);
      return;
    }
    *(int *)(param_1 + 0xc4) = iVar2;
  }
  return;
}



// FUNCTION 140ac1328 FUN_140ac1328 body=86 status=ok
// SIG undefined FUN_140ac1328(void)

longlong FUN_140ac1328(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar4 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    do {
      plVar1 = (longlong *)FUN_1400d690e(lVar3);
      if ((plVar1 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x78))(plVar1), lVar2 != 0)
         ) {
        return lVar2;
      }
      lVar3 = lVar3 + 0xf8;
      lVar4 = lVar4 + -0xf8;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 140ac137e FUN_140ac137e body=108 status=ok
// SIG undefined FUN_140ac137e(void)

ulonglong FUN_140ac137e(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((*(char *)(param_1 + 0x200) == '\x01') && (*(char *)(param_1 + 0x202) != '\x03')) {
    iVar1 = (**(code **)(*param_2 + 0x410))(param_2);
    uVar2 = 3;
    if (iVar1 != 3) {
      uVar2 = (ulonglong)*(byte *)(param_1 + 0x202);
    }
    return uVar2;
  }
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ac13a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x58))();
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140ac13e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_2 + 0x410))(param_2);
  return uVar2;
}



// FUNCTION 140ac13ea FUN_140ac13ea body=595 status=ok
// SIG undefined FUN_140ac13ea(void)

void FUN_140ac13ea(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  uint local_4c [2];
  int local_44;
  uint local_40;
  int local_38;
  uint local_34;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((((*(int *)(param_1 + 0x20) == 0) || (uVar5 = *(uint *)(param_1 + 0x1c), (int)uVar5 < 0)) ||
        (DAT_14c9647dc <= (int)uVar5)) ||
       ((lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar7 == 0 ||
        (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x20))))) ||
      (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 || (iVar3 = FUN_140ac16d8(param_1), iVar3 != 3))))
     && (cVar2 = FUN_1401144ce(param_2), cVar2 != '\0')) {
    FUN_140ac173c(local_4c,param_2);
    uVar5 = local_4c[0];
    if (local_44 != 0) {
      uVar5 = FUN_144a78877(local_4c[0]);
    }
    if (local_38 != 0) {
      local_40 = FUN_144a78877(local_40,local_38);
    }
    if (local_2c != 0) {
      uVar6 = local_2c >> 0xd ^ local_34 - local_2c;
      uVar4 = uVar6 << 8 ^ (-0x61c88647 - local_2c) - uVar6;
      uVar10 = uVar4 >> 0xd ^ (local_2c - uVar6) - uVar4;
      uVar6 = uVar10 >> 0xc ^ (uVar6 - uVar4) - uVar10;
      uVar4 = uVar6 << 0x10 ^ (uVar4 - uVar10) - uVar6;
      uVar10 = uVar4 >> 5 ^ (uVar10 - uVar6) - uVar4;
      uVar6 = uVar10 >> 3 ^ (uVar6 - uVar4) - uVar10;
      uVar4 = uVar6 << 10 ^ (uVar4 - uVar10) - uVar6;
      local_34 = uVar4 >> 0xf ^ uVar10 - (uVar6 + uVar4);
    }
    iVar3 = FUN_140ac163e((longlong *)(param_1 + 0x528),local_40 ^ uVar5 ^ local_34,local_4c);
    if (((iVar3 != -1) &&
        (lVar7 = (longlong)iVar3 * 0xb0 + *(longlong *)(param_1 + 0x528),
        lVar7 != -0x28 && lVar7 != 0)) && ((longlong)*(int *)(lVar7 + 0x48) != 0)) {
      puVar8 = *(uint **)(lVar7 + 0x40);
      puVar1 = puVar8 + *(int *)(lVar7 + 0x48);
      do {
        if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
          lVar7 = *(longlong *)(param_1 + 0x428);
          if (*(longlong *)(param_1 + 0x428) == 0) {
            lVar7 = param_1 + 0x420;
          }
          iVar3 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & *puVar8) * 4);
          if (iVar3 != -1) {
            do {
              lVar9 = (longlong)iVar3 * 0x10;
              lVar7 = *(longlong *)(param_1 + 1000) + lVar9;
              if (*(uint *)(*(longlong *)(param_1 + 1000) + lVar9) == *puVar8) {
                if ((undefined4 *)(lVar7 + 4) != (undefined4 *)0x0 && lVar7 != 0) {
                  FUN_140d82418(param_1,*(undefined4 *)(lVar7 + 4),
                                CONCAT71((int7)((ulonglong)lVar9 >> 8),1),0);
                }
                break;
              }
              iVar3 = *(int *)(lVar7 + 8);
            } while (iVar3 != -1);
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ac163e FUN_140ac163e body=114 status=ok
// SIG undefined FUN_140ac163e(void)

int FUN_140ac163e(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_140ac16b0(lVar3 + (longlong)iVar4 * 0xb0,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xa8 + (longlong)iVar4 * 0xb0);
      } while (iVar4 != -1);
    }
  }
  return -1;
}


