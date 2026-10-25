// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497de724 FUN_1497de724 body=174 status=ok
// SIG undefined FUN_1497de724(void)

void FUN_1497de724(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
     (lVar1 = FUN_1497de5ce(lVar1), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x2c8);
    if (((*(byte *)(lVar1 + 0x40) & 1) == 0) && (*(int *)(param_1 + 0x2d0) != 0)) {
      lVar3 = (longlong)*(int *)(param_1 + 0x2d0) << 4;
      do {
        if ((*(int *)(lVar2 + 4) != -1) && ((*(byte *)(lVar1 + 0x40) & 1) == 0)) {
          FUN_1497da33e(lVar1,lVar2);
        }
        lVar2 = lVar2 + 0x10;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_1497e3cf8(param_1 + 0x2c8);
    return;
  }
  return;
}



// FUNCTION 1497de7d2 FUN_1497de7d2 body=26 status=ok
// SIG undefined FUN_1497de7d2(void)

void FUN_1497de7d2(undefined8 param_1)

{
  FUN_1408453d0();
  FUN_14461e56c(param_1);
  return;
}



// FUNCTION 1497de7ec FUN_1497de7ec body=26 status=ok
// SIG undefined FUN_1497de7ec(void)

void FUN_1497de7ec(undefined8 param_1)

{
  FUN_1497de724();
  FUN_1402b6186(param_1);
  return;
}



// FUNCTION 1497de806 FUN_1497de806 body=32 status=ok
// SIG undefined FUN_1497de806(void)

void FUN_1497de806(undefined8 param_1,undefined4 param_2)

{
  FUN_1497de724();
  FUN_14067484e(param_1,param_2);
  return;
}



// FUNCTION 1497de826 FUN_1497de826 body=457 status=ok
// SIG undefined FUN_1497de826(void)

void FUN_1497de826(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1 = param_1 + 0x130;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14be803b0;
  local_78[0] = FUN_144621a86;
  local_50 = param_2;
  local_48 = param_3;
  FUN_1497de9f0(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14be803d0;
  local_78[0] = (code *)&LAB_144621b4a;
  local_50 = param_2;
  FUN_1497de9f0(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14be803f0;
  local_78[0] = FUN_144621ba0;
  local_50 = param_2;
  FUN_1497dea9c(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14be80410;
  local_78[0] = FUN_144621cb2;
  local_50 = param_2;
  local_48 = param_3;
  FUN_1497deb48(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14be80430;
  local_78[0] = (code *)&LAB_144621eb4;
  local_50 = param_2;
  FUN_1497debf4(param_1,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar1 = local_68;
    }
    (*(code *)(*pppuVar1)[2])(pppuVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497de9f0 FUN_1497de9f0 body=170 status=ok
// SIG undefined FUN_1497de9f0(void)

void FUN_1497de9f0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x100;
  plVar11 = (longlong *)FUN_1497e3d28(param_1,0x100);
  iVar2 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar2 + 1U) {
    FUN_1497e42a2(plVar11,iVar2);
  }
  lVar3 = *plVar11;
  lVar12 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + lVar12) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar12) = param_2[2];
  param_2[2] = 0;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 7);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar12);
  *puVar1 = *(undefined4 *)(param_2 + 6);
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar12);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (*(longlong *)(lVar3 + lVar12) != 0) {
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dea9c FUN_1497dea9c body=170 status=ok
// SIG undefined FUN_1497dea9c(void)

void FUN_1497dea9c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x101;
  plVar11 = (longlong *)FUN_1497e3d28(param_1,0x101);
  iVar2 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar2 + 1U) {
    FUN_1497e42a2(plVar11,iVar2);
  }
  lVar3 = *plVar11;
  lVar12 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + lVar12) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar12) = param_2[2];
  param_2[2] = 0;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 7);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar12);
  *puVar1 = *(undefined4 *)(param_2 + 6);
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar12);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (*(longlong *)(lVar3 + lVar12) != 0) {
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497deb48 FUN_1497deb48 body=170 status=ok
// SIG undefined FUN_1497deb48(void)

void FUN_1497deb48(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 1;
  plVar11 = (longlong *)FUN_1497e3d28(param_1,1);
  iVar2 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar2 + 1U) {
    FUN_1497e42a2(plVar11,iVar2);
  }
  lVar3 = *plVar11;
  lVar12 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + lVar12) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar12) = param_2[2];
  param_2[2] = 0;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 7);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar12);
  *puVar1 = *(undefined4 *)(param_2 + 6);
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar12);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (*(longlong *)(lVar3 + lVar12) != 0) {
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497debf4 FUN_1497debf4 body=167 status=ok
// SIG undefined FUN_1497debf4(void)

void FUN_1497debf4(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  plVar11 = (longlong *)FUN_1497e3d28(param_1,0);
  iVar2 = (int)plVar11[1];
  *(uint *)(plVar11 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar11 + 0xc) < iVar2 + 1U) {
    FUN_1497e42a2(plVar11,iVar2);
  }
  lVar3 = *plVar11;
  lVar12 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + lVar12) = *param_2;
  *(undefined8 *)(lVar3 + 0x10 + lVar12) = param_2[2];
  param_2[2] = 0;
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 7);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar12);
  *puVar1 = *(undefined4 *)(param_2 + 6);
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar12);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (*(longlong *)(lVar3 + lVar12) != 0) {
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dec9c FUN_1497dec9c body=26 status=ok
// SIG undefined FUN_1497dec9c(void)

void FUN_1497dec9c(undefined8 param_1)

{
  FUN_1408453d0();
  FUN_14461f908(param_1);
  return;
}



// FUNCTION 1497decb6 FUN_1497decb6 body=26 status=ok
// SIG undefined FUN_1497decb6(void)

void FUN_1497decb6(undefined8 param_1)

{
  FUN_1497decd0();
  FUN_1402b6186(param_1);
  return;
}



// FUNCTION 1497decd0 FUN_1497decd0 body=93 status=ok
// SIG undefined FUN_1497decd0(void)

void FUN_1497decd0(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x1198) != -1) {
    if ((*(longlong *)(param_1 + 0xb0) == 0) && (lVar1 = FUN_1448abda6(param_1), lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_1497df500();
    }
    FUN_1497e014c(lVar1 + 0xd0,*(undefined4 *)(param_1 + 0x1198));
    *(undefined4 *)(param_1 + 0x1198) = 0xffffffff;
    return;
  }
  return;
}



// FUNCTION 1497ded2e FUN_1497ded2e body=93 status=ok
// SIG undefined FUN_1497ded2e(void)

void FUN_1497ded2e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x9c) & 2) == 0) {
    return;
  }
  cVar1 = FUN_140041326();
  if (cVar1 != '\0') {
    lVar2 = param_1[0x16];
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x218) + 0x70))(*(longlong **)(lVar2 + 0x218),param_1);
  }
  (**(code **)(*param_1 + 0x540))(param_1);
  FUN_144b20ebc(param_1);
  return;
}



// FUNCTION 1497ded8c FUN_1497ded8c body=1906 status=ok
// SIG undefined FUN_1497ded8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1497ded8c(longlong param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double *pdVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_2e8 [32];
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
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
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
  double dVar3;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8) == param_1) {
    FUN_14480333a(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_2e8);
  }
  uVar25 = SUB84(&local_2c8,0);
  FUN_14480333a(param_1);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
  pdVar1 = (double *)(lVar6 + 0x240);
  pdVar23 = (double *)&DAT_14c846480;
  if (lVar6 != 0) {
    pdVar23 = pdVar1;
  }
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  auVar41 = _DAT_149934d80;
  auVar30 = *(undefined1 (*) [16])(pdVar23 + 8);
  dVar7 = auVar30._0_8_;
  dVar11 = auVar30._8_8_;
  auVar4 = *(undefined1 (*) [16])(pdVar23 + 10);
  dVar8 = auVar4._0_8_;
  dVar9 = local_288._0_8_;
  dVar12 = local_288._8_8_;
  dVar10 = local_278._0_8_;
  auVar30 = minpd(local_288,auVar30);
  auVar34 = minpd(local_278,auVar4);
  auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
  iVar24 = movmskpd((int)pdVar1,auVar31);
  auVar30._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar26 = movmskpd(uVar25,auVar30);
  if ((uVar26 & 0x3fffffff) == 0 && iVar24 == 0) {
    dVar19 = *pdVar23;
    dVar20 = pdVar23[1];
    dVar21 = pdVar23[2];
    dVar22 = pdVar23[3];
    dVar29 = pdVar23[3];
    dVar35 = pdVar23[3];
    dVar40 = *pdVar23;
    dVar38 = *pdVar23;
    dVar2 = pdVar23[1];
    dVar3 = pdVar23[1];
    dVar33 = pdVar23[2];
    dVar36 = pdVar23[2];
    local_2a8 = local_2a8 * dVar7;
    dStack_2a0 = dStack_2a0 * dVar11;
    local_298 = local_298 * dVar8;
    dStack_290 = dStack_290 * auVar4._8_8_;
    dVar13 = dStack_2a0 * dVar19 - dVar20 * local_2a8;
    dVar14 = local_298 * dVar20 - dVar21 * dStack_2a0;
    dVar17 = local_2a8 * dVar21 - dVar19 * local_298;
    dVar18 = dStack_290 * dVar22 - dVar22 * dStack_290;
    dVar14 = dVar14 + dVar14;
    dVar17 = dVar17 + dVar17;
    dVar13 = dVar13 + dVar13;
    dVar18 = dVar18 + dVar18;
    dVar37 = pdVar23[4];
    dVar15 = (dVar14 * dVar21 - dVar13 * dVar19) + dVar35 * dVar17 + dStack_2a0 + pdVar23[5];
    dVar39 = pdVar23[6];
    dVar5 = pdVar23[7];
    *param_2 = dStack_2c0 * dVar33 * -1.0 +
               local_2b8 * dVar2 + dStack_2b0 * dVar40 * 1.0 + local_2c8 * dVar29;
    param_2[1] = local_2c8 * dVar36 * 1.0 +
                 dStack_2b0 * dVar3 + local_2b8 * dVar38 * -1.0 + dStack_2c0 * dVar35;
    param_2[2] = dStack_2b0 * dVar33 * 1.0 +
                 ((dVar40 * dStack_2c0 * 1.0 + local_2b8 * dVar29) - local_2c8 * dVar2);
    param_2[3] = local_2b8 * dVar36 * -1.0 +
                 ((dVar38 * local_2c8 * -1.0 + dStack_2b0 * dVar35) - dStack_2c0 * dVar3);
    auVar41._8_4_ = SUB84(dVar15,0);
    auVar41._0_8_ = (dVar13 * dVar20 - dVar21 * dVar17) + dVar29 * dVar14 + local_2a8 + dVar37;
    auVar41._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar41;
    param_2[6] = (dVar17 * dVar19 - dVar20 * dVar14) + dVar29 * dVar13 + local_298 + dVar39;
    param_2[7] = (dVar18 * dVar22 - dVar18 * dVar22) + dVar35 * dVar18 + dStack_290 + dVar5;
  }
  else {
    dVar40 = *pdVar23;
    dVar2 = pdVar23[1];
    dVar3 = pdVar23[2];
    dVar33 = dVar2 + dVar2;
    dVar36 = dVar3 + dVar3;
    dVar35 = dVar40 * (dVar40 + dVar40);
    local_178 = (1.0 - (dVar35 + dVar2 * dVar33)) * dVar8;
    dVar29 = pdVar23[3];
    dVar37 = dVar36 * dVar29;
    dVar39 = (dVar40 + dVar40) * pdVar23[3];
    dVar29 = dVar33 * dVar29;
    local_188 = (dVar29 + *pdVar23 * dVar36) * dVar8;
    dVar35 = (DAT_149934d80._8_8_ - (dVar3 * dVar36 + dVar35)) * dVar11;
    dVar38 = (dVar33 * dVar40 + dVar37) * dVar7;
    local_198 = (dVar36 * dVar2 + dVar39) * dVar11;
    dStack_180 = (dVar36 * dVar2 - dVar39) * dVar8;
    local_1b8 = (*pdVar23 * dVar36 - dVar29) * dVar7;
    local_1c8._8_4_ = SUB84(dVar38,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar3 * dVar36 + dVar2 * dVar33)) * dVar7;
    local_1c8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar35,0);
    local_1a8._0_8_ = (dVar33 * dVar40 - dVar37) * dVar11;
    local_1a8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = pdVar23[4];
    dStack_160 = pdVar23[5];
    local_158 = pdVar23[6];
    uStack_150 = 0x3ff0000000000000;
    dVar35 = dStack_2c0 + dStack_2c0;
    dVar38 = local_2b8 + local_2b8;
    dVar29 = local_2c8 * (local_2c8 + local_2c8);
    local_1f8 = (1.0 - (dVar29 + dStack_2c0 * dVar35)) * dVar10;
    dVar40 = (local_2c8 + local_2c8) * dStack_2b0;
    local_208 = (dVar35 * dStack_2b0 + local_2c8 * dVar38) * dVar10;
    dStack_200 = (dVar38 * dStack_2c0 - dVar40) * dVar10;
    local_248 = ((double)DAT_149934d80 - (local_2b8 * dVar38 + dStack_2c0 * dVar35)) * dVar9;
    dVar29 = (DAT_149934d80._8_8_ - (local_2b8 * dVar38 + dVar29)) * dVar12;
    dStack_240 = (dVar35 * local_2c8 + dVar38 * dStack_2b0) * dVar9;
    local_218 = (dVar38 * dStack_2c0 + dVar40) * dVar12;
    local_238 = (local_2c8 * dVar38 - dVar35 * dStack_2b0) * dVar9;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar29,0);
    local_228._0_8_ = (dVar35 * local_2c8 - dVar38 * dStack_2b0) * dVar12;
    local_228._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = local_2a8;
    dStack_1e0 = dStack_2a0;
    local_1d8 = local_298;
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar12);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
    auVar30 = blendvpd(_DAT_149936790,auVar41,auVar34);
    uVar27 = -(ulonglong)(0.0 <= dVar8 * dVar10);
    dVar29 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
    dVar35 = auVar30._0_8_;
    local_138 = local_138 * dVar35;
    local_140 = local_140 * dVar35;
    local_148 = local_148 * dVar35;
    dVar35 = auVar30._8_8_;
    local_118 = local_118 * dVar35;
    local_120 = local_120 * dVar35;
    local_128 = dVar35 * local_128;
    local_f8 = local_f8 * dVar29;
    local_100 = local_100 * dVar29;
    local_108 = dVar29 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar29 = local_258 * local_258 + local_268 * local_268;
    dVar35 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar32._0_8_ = dVar29 + dVar35;
    auVar32._8_8_ = dVar29 + dVar35;
    auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    auVar30 = sqrtpd(auVar32,auVar32);
    auVar41 = divpd(auVar41,auVar30);
    auVar42._0_8_ = auVar41._0_8_ * local_258;
    auVar42._8_8_ = auVar41._8_8_ * dStack_250;
    auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar28);
    *param_2 = (double)((ulonglong)(local_268 * auVar41._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_260 * auVar41._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar30;
    param_2[4] = local_e8;
    param_2[5] = dStack_e0;
    param_2[6] = local_d8;
    param_2[7] = 0.0;
  }
  dVar29 = auVar4._8_8_ * local_278._8_8_;
  auVar16._8_4_ = SUB84(dVar11 * dVar12,0);
  auVar16._0_8_ = dVar7 * dVar9;
  auVar16._12_4_ = (int)((ulonglong)(dVar11 * dVar12) >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar16;
  auVar4._8_4_ = SUB84(dVar29,0);
  auVar4._0_8_ = dVar8 * dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar4;
  if ((local_c0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1497df500 FUN_1497df500 body=103 status=ok
// SIG undefined FUN_1497df500(void)

void FUN_1497df500(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145bb0e86();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1497e4328(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497df568 FUN_1497df568 body=609 status=ok
// SIG undefined FUN_1497df568(void)

float * FUN_1497df568(float *param_1,double *param_2,longlong *param_3,longlong *param_4,
                     undefined8 param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  longlong lVar4;
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
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStack_b8 [46];
  undefined2 local_8a;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = DAT_14c846330;
  param_1[0x18] = DAT_14c846338;
  fVar20 = 0.0;
  param_1[0x54] = 0.0;
  param_1[0x55] = 0.0;
  param_1[0x56] = 0.0;
  memset(param_1 + 0x1a,0,0xc1);
  param_1[0x4c] = 0.0;
  param_1[0x4d] = 0.0;
  param_1[0x4e] = 0.0;
  param_1[0x4f] = 0.0;
  param_1[0x57] = 1.79366e-43;
  param_1[0x58] = -NAN;
  param_1[0x59] = 0.0;
  param_1[0x5c] = 0.0;
  param_1[0x5d] = 0.0;
  param_1[0x5e] = 0.0;
  dVar5 = param_2[10];
  dVar6 = param_2[0xb];
  dVar7 = param_2[8];
  dVar8 = param_2[9];
  dVar9 = param_2[6];
  dVar10 = param_2[7];
  dVar11 = param_2[4];
  dVar12 = param_2[5];
  dVar13 = param_2[2];
  dVar14 = param_2[3];
  dVar15 = param_2[1];
  *param_1 = (float)*param_2;
  param_1[1] = (float)dVar15;
  param_1[2] = (float)dVar13;
  param_1[3] = (float)dVar14;
  param_1[4] = (float)dVar11;
  param_1[5] = (float)dVar12;
  param_1[6] = (float)dVar9;
  param_1[7] = (float)dVar10;
  param_1[8] = (float)dVar7;
  param_1[9] = (float)dVar8;
  param_1[10] = (float)dVar5;
  param_1[0xb] = (float)dVar6;
  *(undefined8 *)(param_1 + 0x48) = param_5;
  if ((int)param_3[1] != 0) {
    uVar19 = 0;
    do {
      lVar4 = *param_3;
      lVar18 = (longlong)(int)uVar19 * 0x60;
      pdVar2 = (double *)(lVar4 + 0x50 + lVar18);
      fStack_60 = (float)*pdVar2;
      fStack_5c = (float)pdVar2[1];
      pdVar2 = (double *)(lVar4 + 0x40 + lVar18);
      local_68 = (float)*pdVar2;
      fStack_64 = (float)pdVar2[1];
      pdVar2 = (double *)(lVar4 + 0x30 + lVar18);
      fStack_70 = (float)*pdVar2;
      fStack_6c = (float)pdVar2[1];
      pdVar2 = (double *)(lVar4 + 0x20 + lVar18);
      local_78 = (float)*pdVar2;
      fStack_74 = (float)pdVar2[1];
      pdVar2 = (double *)(lVar4 + 0x10 + lVar18);
      fStack_80 = (float)*pdVar2;
      fStack_7c = (float)pdVar2[1];
      local_88 = (float)*(double *)(lVar4 + lVar18);
      fStack_84 = (float)((double *)(lVar4 + lVar18))[1];
      local_8a = *(undefined2 *)(*param_4 + 8 + (longlong)(int)uVar19 * 0xc);
      FUN_1497e6816(param_1 + 0x3c,&local_88,&local_8a);
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_3 + 1));
    fVar20 = param_1[0x3e];
    if ((longlong)(int)fVar20 == 0) {
      fVar20 = 0.0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x3c);
      lVar18 = 0;
      do {
        uVar16 = *(undefined8 *)(lVar4 + lVar18);
        uVar17 = ((undefined8 *)(lVar4 + lVar18))[1];
        fVar3 = param_1[0x3a];
        param_1[0x3a] = (float)((int)fVar3 + 1U);
        if ((uint)param_1[0x3b] < (int)fVar3 + 1U) {
          FUN_146ed4f5e(param_1 + 0x38,fVar3);
        }
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)fVar3 * 0x10);
        *puVar1 = uVar16;
        puVar1[1] = uVar17;
        lVar18 = lVar18 + 0x30;
      } while ((longlong)(int)fVar20 * 0x30 != lVar18);
      fVar20 = param_1[0x3e];
    }
  }
  FUN_140676836(param_1 + 0x2c,fVar20,1);
  FUN_140676836(param_1 + 0x30,fVar20,1);
  FUN_140676836(param_1 + 0x34,fVar20,1);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497df7ca FUN_1497df7ca body=467 status=ok
// SIG undefined FUN_1497df7ca(void)

void FUN_1497df7ca(longlong param_1)

{
  int iVar1;
  undefined ***pppuVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x44) = DAT_14c846338;
  *(undefined8 *)(param_1 + 0x3c) = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x38) = DAT_14c846338;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c846330;
  *(undefined1 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (lVar3 < *(int *)(param_1 + 0x78)) {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14be80630;
        local_88 = FUN_144622756;
        local_60[0] = param_1;
        FUN_144622756(local_60,*(longlong *)(param_1 + 0x70) + lVar4);
        if (local_88 != (code *)0x0) {
          pppuVar2 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar2 = &local_68;
          }
          (*(code *)(*pppuVar2)[2])();
        }
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x14;
    } while ((longlong)iVar1 * 0x14 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (lVar3 < *(int *)(param_1 + 0x98)) {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14be80630;
        local_88 = FUN_144622ee6;
        local_60[0] = param_1;
        FUN_144622ee6(local_60,*(longlong *)(param_1 + 0x90) + lVar4);
        if (local_88 != (code *)0x0) {
          pppuVar2 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar2 = &local_68;
          }
          (*(code *)(*pppuVar2)[2])();
        }
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  *(float *)(param_1 + 0x4c) =
       (*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x3c)) * 0.5 - *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x50) =
       (*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x40)) * 0.5 - *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x54) =
       (*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x44)) * 0.5 - *(float *)(param_1 + 0x18);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497df99e FUN_1497df99e body=149 status=ok
// SIG undefined FUN_1497df99e(void)

void FUN_1497df99e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_1497e29da(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1497e2b9a(param_1 + 0xb0);
  FUN_1497e298e(param_1 + 0x70);
  return;
}



// FUNCTION 1497dfa42 FUN_1497dfa42 body=338 status=ok
// SIG undefined FUN_1497dfa42(void)

void FUN_1497dfa42(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [24];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_144a126be();
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
    uVar6 = (undefined4)DAT_14c8464e0;
    uVar7 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar9 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    uVar10 = (undefined4)DAT_14c8464f0;
    uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    lVar5 = FUN_140636ec6(lVar4);
    if ((lVar5 != 0) && (plVar3 = *(longlong **)(lVar5 + 0x448), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x730))(plVar3,local_88);
      uVar6 = (undefined4)local_88._0_8_;
      uVar7 = SUB84(local_88._0_8_,4);
      uVar8 = (undefined4)local_88._8_8_;
      uVar9 = SUB84(local_88._8_8_,4);
      uVar10 = (undefined4)local_88._16_8_;
      uVar11 = SUB84(local_88._16_8_,4);
    }
    *(float *)(param_1 + 0x1ac) = (float)(double)CONCAT44(uVar7,uVar6);
    *(float *)(param_1 + 0x1b0) = (float)(double)CONCAT44(uVar9,uVar8);
    *(float *)(param_1 + 0x1b4) = (float)(double)CONCAT44(uVar11,uVar10);
    local_90 = *param_2;
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    FUN_1497dfb96(param_1 + 0xd0,&local_90,param_3,lVar4);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dfb96 FUN_1497dfb96 body=290 status=ok
// SIG undefined FUN_1497dfb96(void)

void FUN_1497dfb96(undefined8 param_1,undefined8 **param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_98;
  undefined8 *local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_68 = &PTR_LAB_14be80730;
  local_88[0] = FUN_144624336;
  local_a8 = 0x6ff;
  local_60 = param_1;
  FUN_140e6df44(&local_90,local_88,param_3,param_2);
  local_98 = local_90;
  if (&local_90 != param_2) {
    puVar2 = *param_2;
    *param_2 = local_90;
    local_90 = (undefined8 *)0x0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1497dfc51;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_90 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_90 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_90)(local_90,1);
    }
  }
  local_98 = *param_2;
LAB_1497dfc51:
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + 1;
    UNLOCK();
  }
  FUN_1446215c0(param_1,&local_98,param_3,param_4);
  puVar2 = *param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dfcc4 FUN_1497dfcc4 body=138 status=ok
// SIG undefined FUN_1497dfcc4(void)

void FUN_1497dfcc4(longlong param_1)

{
  longlong lVar1;
  
  *(undefined2 *)(param_1 + 0x38) = 0x101;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf8 | 6;
  FUN_14485c47a(param_1 + 0x58,param_1);
  lVar1 = FUN_144a126be(param_1);
  FUN_1402eb876(param_1 + 0x30,*(undefined8 *)(lVar1 + 0x30));
  *(undefined2 *)(param_1 + 0x68) = 0x404;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xf8 | 6;
  FUN_14485c47a(param_1 + 0x88,param_1);
  lVar1 = FUN_144a126be(param_1);
  FUN_1402eb876(param_1 + 0x60,*(undefined8 *)(lVar1 + 0x30));
  FUN_14082bc44(param_1 + 0x60,param_1,param_1 + 0x30);
  return;
}



// FUNCTION 1497dfd4e FUN_1497dfd4e body=417 status=ok
// SIG undefined FUN_1497dfd4e(void)

undefined8 ** FUN_1497dfd4e(longlong param_1,undefined8 **param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 *local_130;
  code *local_128 [2];
  undefined8 local_118 [6];
  code *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  code *local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_c0 = param_1 + 0xd0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14be80520;
  local_68 = FUN_144621fa8;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_FUN_14be80540;
  local_a8 = FUN_144622114;
  local_e8[0] = FUN_144621fa8;
  local_d8 = 0;
  local_c8 = &PTR_LAB_14be80520;
  local_138 = 0xff;
  local_80 = local_c0;
  local_40 = local_c0;
  FUN_14014aede(param_2,local_e8,FUN_144621fa8,0);
  local_128[0] = local_a8;
  local_118[0] = 0;
  if (local_a8 != (code *)0x0) {
    pppuVar3 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar3 = &local_88;
    }
    (*(code *)**pppuVar3)(pppuVar3,local_118);
  }
  local_138 = 0xff;
  FUN_140e6df44(&local_130,local_128);
  if (&local_130 != param_2) {
    puVar2 = *param_2;
    *param_2 = local_130;
    local_130 = (undefined8 *)0x0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1497dfe81;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_130 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_130 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_130)(local_130,1);
    }
  }
LAB_1497dfe81:
  if (local_a8 != (code *)0x0) {
    pppuVar3 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar3 = local_98;
    }
    (*(code *)(*pppuVar3)[2])(pppuVar3);
  }
  if (local_68 != (code *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dfef0 FUN_1497dfef0 body=238 status=ok
// SIG undefined FUN_1497dfef0(void)

void FUN_1497dfef0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  local_68 = *(undefined8 *)(param_1 + 0x110);
  local_50 = &local_68;
  local_60 = *(uint *)(param_1 + 0x118);
  local_38 = &local_58;
  local_78 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_1497e454e;
  local_80 = 0;
  local_58 = param_2;
  local_48 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",(uint)(local_60 != (local_60 / 0x14) * 0x14) + local_60 / 0x14,1
               );
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497dffe0 FUN_1497dffe0 body=126 status=ok
// SIG undefined FUN_1497dffe0(void)

void FUN_1497dffe0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
    iVar1 = *(int *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
      FUN_1497e48ba((longlong *)(param_1 + 0xb8),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001497e003d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
    return;
  }
  return;
}



// FUNCTION 1497e005e FUN_1497e005e body=237 status=ok
// SIG undefined FUN_1497e005e(void)

undefined4 * FUN_1497e005e(LPCRITICAL_SECTION param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  HANDLE pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection(param_1);
  FUN_1497e6978(&param_1[1].LockCount,local_60);
  FUN_1497e6a68(local_58,param_3);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x10);
  EnterCriticalSection((LPCRITICAL_SECTION)&param_1[2].LockSemaphore);
  iVar2 = (int)param_1[3].SpinCount;
  lVar5 = (longlong)iVar2;
  *(uint *)&param_1[3].SpinCount = iVar2 + 1U;
  if (*(uint *)((longlong)&param_1[3].SpinCount + 4) < iVar2 + 1U) {
    FUN_1497e6f24(&param_1[3].LockSemaphore,iVar2);
  }
  pvVar3 = param_1[3].LockSemaphore;
  *(undefined4 *)((longlong)pvVar3 + lVar5 * 0x14) = local_60[0];
  *(longlong *)((longlong)pvVar3 + lVar5 * 0x14 + 4) = auVar1._0_8_;
  uVar4 = extractps(auVar1,2);
  *(undefined8 *)((longlong)pvVar3 + lVar5 * 0x14 + 0xc) = uVar4;
  *(undefined1 *)((longlong)pvVar3 + lVar5 * 0x14 + 0x10) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[2].LockSemaphore);
  *param_2 = local_60[0];
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e014c FUN_1497e014c body=371 status=ok
// SIG undefined FUN_1497e014c(void)

void FUN_1497e014c(LPCRITICAL_SECTION param_1,int param_2)

{
  HANDLE pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  FUN_1497e1dfc();
  EnterCriticalSection(param_1);
  FUN_1497df99e((longlong)param_2 * 0x180 + *(longlong *)&param_1[1].LockCount);
  FUN_1497e6fb8(&param_1[1].LockCount,param_2);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&param_1[2].LockSemaphore);
  pvVar1 = param_1[3].LockSemaphore;
  iVar2 = (int)param_1[3].SpinCount;
  uVar3 = 0xffffffff;
  if ((longlong)iVar2 != 0) {
    uVar5 = 0;
    do {
      if (*(int *)((longlong)pvVar1 + uVar5) == param_2) {
        uVar3 = (int)(uVar5 >> 2) * -0x33333333;
        break;
      }
      uVar5 = uVar5 + 0x14;
    } while ((longlong)iVar2 * 0x14 != uVar5);
  }
  iVar4 = ~uVar3 + iVar2;
  if (iVar4 != 0) {
    iVar6 = 1;
    if (iVar4 < 1) {
      iVar6 = iVar4;
    }
    memmove((void *)((longlong)pvVar1 + (longlong)(int)uVar3 * 0x14),
            (void *)((longlong)pvVar1 + (longlong)(iVar2 - iVar6) * 0x14),(longlong)iVar6 * 0x14);
    iVar2 = (int)param_1[3].SpinCount;
  }
  *(int *)&param_1[3].SpinCount = iVar2 + -1;
  FUN_1497e7032(&param_1[3].LockSemaphore);
  LeaveCriticalSection((LPCRITICAL_SECTION)&param_1[2].LockSemaphore);
  EnterCriticalSection(param_1 + 4);
  FUN_1497e1e5c(param_1 + 5,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001497e0285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1 + 4);
  return;
}



// FUNCTION 1497e02c0 FUN_1497e02c0 body=164 status=ok
// SIG undefined FUN_1497e02c0(void)

undefined8 FUN_1497e02c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 0x28);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x28);
    FUN_144750a86(uVar2,local_28,0,0);
    FUN_144a882a8(param_2,local_28,L"[VegetationTick]");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140056680(param_2,L"<NULL>[VegetationTick]");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1497e0366 FUN_1497e0366 body=260 status=ok
// SIG undefined FUN_1497e0366(void)

undefined8 FUN_1497e0366(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
      FUN_140056680(&local_40,&DAT_149e01fe8);
    }
    else {
      FUN_144750a86(lVar1,&local_40,0,0);
    }
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_140002266(&local_30,L"VegetationSubsystemTick/%s",puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1446f470e(param_2,L"VegetationSubsystemTick",1);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1497e046c FUN_1497e046c body=164 status=ok
// SIG undefined FUN_1497e046c(void)

undefined8 FUN_1497e046c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 0x28);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x28);
    FUN_144750a86(uVar2,local_28,0,0);
    FUN_144a882a8(param_2,local_28,L"[VegetationWaitUntilDone]");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140056680(param_2,L"<NULL>[VegetationWaitUntilDone]");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1497e0512 FUN_1497e0512 body=260 status=ok
// SIG undefined FUN_1497e0512(void)

undefined8 FUN_1497e0512(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != '\0') {
    lVar1 = FUN_14479d2ce(param_1 + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
      FUN_140056680(&local_40,&DAT_149e01fe8);
    }
    else {
      FUN_144750a86(lVar1,&local_40,0,0);
    }
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_140002266(&local_30,L"VegetationSubsystemWaitUntilDone/%s",puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1446f470e(param_2,L"VegetationSubsystemWaitUntilDone",1);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1497e0639 FUN_1497e0639 body=201 status=ok
// SIG undefined FUN_1497e0639(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497e0639(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  plVar6 = (longlong *)FUN_144a7954a(param_2);
  lVar7 = (**(code **)(*plVar6 + 0x368))(plVar6);
  iVar10 = *(int *)(lVar7 + 8);
  if ((int)param_1[1] != iVar10) {
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    iVar5 = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar10) {
      FUN_14491ce3c(param_1);
      iVar5 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    uVar2 = *(uint *)(lVar7 + 8);
    iVar8 = uVar2 + iVar5;
    *(int *)(param_1 + 1) = iVar8;
    if ((uint)(iVar10 - iVar5) < uVar2) {
      FUN_140491d2e(param_1,iVar5);
      iVar8 = (int)param_1[1];
    }
    if (0 < iVar8) {
      lVar7 = 0;
      lVar9 = 0;
      do {
        uVar4 = _DAT_14c846288;
        lVar3 = *param_1;
        puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
        *puVar1 = _DAT_14c846280;
        puVar1[1] = uVar4;
        uVar4 = _DAT_14c846278;
        puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
        *puVar1 = _DAT_14c846270;
        puVar1[1] = uVar4;
        uVar4 = _DAT_14c846268;
        puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
        *puVar1 = _DAT_14c846260;
        puVar1[1] = uVar4;
        uVar4 = DAT_14c846258;
        *(undefined8 *)(lVar3 + lVar7) = _DAT_14c846250;
        ((undefined8 *)(lVar3 + lVar7))[1] = uVar4;
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0x40;
      } while (lVar9 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 1497e0703 FUN_1497e0703 body=503 status=ok
// SIG undefined FUN_1497e0703(void)

void FUN_1497e0703(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
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
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  *(undefined4 *)(param_2 + 0x50) = 0;
  FUN_1497e0639(param_2 + 0x10,param_1);
  *(undefined4 *)(param_2 + 0xc0) = 0;
  if (*(int *)(param_2 + 0xc4) != 0) {
    FUN_14481578e(param_2 + 0xb8,0);
  }
  dVar6 = *(double *)(param_1 + 0x240);
  dVar7 = *(double *)(param_1 + 0x248);
  dVar8 = *(double *)(param_1 + 0x250);
  uVar9 = *(undefined4 *)(param_1 + 0x260);
  uVar10 = *(undefined4 *)(param_1 + 0x264);
  uVar11 = *(undefined4 *)(param_1 + 0x268);
  uVar12 = *(undefined4 *)(param_1 + 0x26c);
  uVar13 = *(undefined8 *)(param_1 + 0x270);
  dVar21 = dVar7 + dVar7;
  dVar17 = dVar8 + dVar8;
  dVar3 = dVar6 * (dVar6 + dVar6);
  dVar14 = *(double *)(param_1 + 0x280);
  dVar15 = *(double *)(param_1 + 0x288);
  dVar16 = *(double *)(param_1 + 0x290);
  dVar4 = *(double *)(param_1 + 0x240) * dVar17;
  dVar20 = *(double *)(param_1 + 600);
  dVar18 = dVar17 * dVar20;
  dVar19 = (dVar6 + dVar6) * *(double *)(param_1 + 600);
  dVar20 = dVar21 * dVar20;
  dVar5 = (dVar21 * dVar6 + dVar18) * dVar14;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = (1.0 - (dVar8 * dVar17 + dVar7 * dVar21)) * dVar14;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x260) = auVar2;
  *(double *)(param_2 + 0x270) = (dVar4 - dVar20) * dVar14;
  *(undefined8 *)(param_2 + 0x278) = 0;
  *(double *)(param_2 + 0x280) = (dVar21 * dVar6 - dVar18) * dVar15;
  *(double *)(param_2 + 0x288) = (1.0 - (dVar8 * dVar17 + dVar3)) * dVar15;
  *(double *)(param_2 + 0x290) = (dVar17 * dVar7 + dVar19) * dVar15;
  *(undefined8 *)(param_2 + 0x298) = 0;
  *(double *)(param_2 + 0x2a0) = (dVar20 + dVar4) * dVar16;
  *(double *)(param_2 + 0x2a8) = (dVar17 * dVar7 - dVar19) * dVar16;
  *(double *)(param_2 + 0x2b0) = (1.0 - (dVar3 + dVar7 * dVar21)) * dVar16;
  *(undefined8 *)(param_2 + 0x2b8) = 0;
  *(undefined4 *)(param_2 + 0x2c0) = uVar9;
  *(undefined4 *)(param_2 + 0x2c4) = uVar10;
  *(undefined4 *)(param_2 + 0x2c8) = uVar11;
  *(undefined4 *)(param_2 + 0x2cc) = uVar12;
  *(undefined8 *)(param_2 + 0x2d0) = uVar13;
  *(undefined8 *)(param_2 + 0x2d8) = 0x3ff0000000000000;
  lVar1 = FUN_144b22354(param_1,0);
  *(char *)(param_2 + 0x2e4) = (lVar1 != 0) * '\x02';
  return;
}



// FUNCTION 1497e08fa FUN_1497e08fa body=98 status=ok
// SIG undefined FUN_1497e08fa(void)

void FUN_1497e08fa(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001497e0929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,uVar1);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,uVar1);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 1497e095c FUN_1497e095c body=1371 status=ok
// SIG undefined FUN_1497e095c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1497e095c(undefined1 (*param_1) [16],longlong *param_2,int param_3)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auStack_1d8 [32];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [16];
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_f8 [16];
  ulonglong local_e0;
  
  uVar11 = uRam000000014c846068;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *(undefined8 *)*param_1 = _DAT_14c846060;
  *(undefined8 *)(*param_1 + 8) = uVar11;
  uVar11 = uRam000000014c846088;
  *(undefined8 *)param_1[2] = _DAT_14c846080;
  *(undefined8 *)(param_1[2] + 8) = uVar11;
  uVar11 = uRam000000014c846078;
  *(undefined8 *)param_1[1] = _DAT_14c846070;
  *(undefined8 *)(param_1[1] + 8) = uVar11;
  auVar10 = _DAT_149e1ef10;
  auVar9 = _DAT_149932320;
  auVar35 = *param_1;
  if (param_3 != -1) {
    auVar38 = param_1[1];
    auVar15 = param_1[2];
    fVar4 = DAT_149e1ef10._4_4_;
    fVar7 = DAT_149e1ef10._12_4_;
    do {
      lVar2 = *param_2;
      lVar13 = (longlong)param_3 * 0x30;
      pfVar1 = (float *)(lVar2 + lVar13);
      auVar16 = *(undefined1 (*) [16])(lVar2 + 0x20 + lVar13);
      fVar3 = auVar16._0_4_;
      fVar5 = auVar16._4_4_;
      fVar6 = auVar16._8_4_;
      fVar8 = auVar16._12_4_;
      fVar23 = auVar15._0_4_;
      fVar24 = auVar15._4_4_;
      fVar25 = auVar15._8_4_;
      fVar26 = auVar15._12_4_;
      auVar15 = minps(auVar15,auVar16);
      auVar16._4_4_ = -(uint)(auVar15._4_4_ < 0.0);
      auVar16._0_4_ = -(uint)(auVar15._0_4_ < 0.0);
      auVar16._8_4_ = -(uint)(auVar15._8_4_ < 0.0);
      auVar16._12_4_ = -(uint)(auVar15._12_4_ < 0.0);
      iVar12 = movmskps((int)lVar2,auVar16);
      fVar14 = auVar35._0_4_;
      fVar20 = auVar35._4_4_;
      fVar27 = auVar35._8_4_;
      fVar42 = auVar35._12_4_;
      if (iVar12 == 0) {
        fVar22 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar33 = pfVar1[3];
        fVar37 = auVar38._0_4_ * fVar3;
        fVar39 = auVar38._4_4_ * fVar5;
        fVar40 = auVar38._8_4_ * fVar6;
        fVar41 = auVar38._12_4_ * fVar8;
        fVar21 = fVar39 * fVar22 - fVar37 * fVar32;
        fVar43 = fVar40 * fVar32 - fVar39 * fVar31;
        fVar44 = fVar37 * fVar31 - fVar40 * fVar22;
        fVar45 = fVar41 * fVar33 - fVar41 * fVar33;
        fVar21 = fVar21 + fVar21;
        fVar43 = fVar43 + fVar43;
        fVar44 = fVar44 + fVar44;
        fVar45 = fVar45 + fVar45;
        auVar38._4_4_ = (fVar43 * fVar31 - fVar21 * fVar22) + fVar33 * fVar44 + fVar39 + pfVar1[5];
        auVar38._0_4_ = (fVar21 * fVar32 - fVar44 * fVar31) + fVar33 * fVar43 + fVar37 + pfVar1[4];
        auVar35._4_4_ =
             fVar31 * fVar14 * 1.0 +
             fVar32 * fVar42 * 1.0 + fVar22 * fVar27 * -1.0 + fVar20 * fVar33;
        auVar35._0_4_ =
             fVar31 * fVar20 * -1.0 +
             fVar32 * fVar27 * 1.0 + fVar22 * fVar42 * 1.0 + fVar14 * fVar33;
        auVar15._0_4_ = fVar23 * fVar3;
        auVar15._4_4_ = fVar24 * fVar5;
        auVar15._8_4_ = fVar25 * fVar6;
        auVar15._12_4_ = fVar26 * fVar8;
        auVar38._8_4_ = (fVar44 * fVar22 - fVar43 * fVar32) + fVar33 * fVar21 + fVar40 + pfVar1[6];
        auVar38._12_4_ = (fVar45 * fVar33 - fVar45 * fVar33) + fVar33 * fVar45 + fVar41 + pfVar1[7];
        auVar35._8_4_ =
             fVar31 * fVar42 * 1.0 +
             fVar32 * fVar14 * -1.0 + fVar22 * fVar20 * 1.0 + fVar27 * fVar33;
        auVar35._12_4_ =
             fVar31 * fVar27 * -1.0 +
             fVar32 * fVar20 * -1.0 + fVar22 * fVar14 * -1.0 + fVar42 * fVar33;
      }
      else {
        fVar22 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar31 = pfVar1[2];
        fVar33 = pfVar1[3];
        fVar43 = fVar22 + fVar22;
        fVar44 = fVar32 + fVar32;
        fVar45 = fVar31 + fVar31;
        fVar21 = fVar33 * (fVar33 + fVar33);
        auVar34._0_4_ = (auVar10._0_4_ - (fVar31 * fVar45 + fVar32 * fVar44)) * fVar3;
        auVar34._4_4_ = (fVar4 - (fVar31 * fVar45 + fVar22 * fVar43)) * fVar5;
        auVar34._8_4_ = (auVar10._8_4_ - (fVar32 * fVar44 + fVar22 * fVar43)) * fVar6;
        auVar34._12_4_ = (fVar7 - (fVar21 + fVar21)) * fVar8;
        fVar31 = (fVar44 * fVar22 + fVar45 * fVar33) * fVar3;
        local_148 = (fVar45 * fVar22 + fVar44 * fVar33) * fVar6;
        local_158 = (fVar44 * fVar22 - fVar45 * fVar33) * fVar5;
        fStack_144 = (fVar45 * fVar32 - fVar43 * fVar33) * fVar6;
        auVar35 = blendps(auVar34,ZEXT816(0),8);
        auVar46._4_4_ = (fVar45 * fVar32 + fVar43 * fVar33) * fVar5;
        auVar46._0_4_ = fVar31;
        auVar46._8_4_ = local_148;
        auVar46._12_4_ = (fVar43 * fVar22 + fVar43 * fVar33) * fVar8;
        local_168._4_4_ = fVar31;
        local_168._0_4_ = auVar34._0_4_;
        local_168._8_4_ = (fVar45 * fVar22 - fVar44 * fVar33) * fVar3;
        local_168._12_4_ = 0;
        auVar15 = insertps(auVar46,auVar46,0x4c);
        uStack_150 = auVar15._0_4_;
        uStack_14c = auVar15._8_4_;
        uStack_140 = auVar35._8_4_;
        uStack_13c = auVar35._12_4_;
        local_138 = insertps(*(undefined1 (*) [16])(pfVar1 + 4),ZEXT816(0x3f800000),0x30);
        fVar32 = fVar14 + fVar14;
        fVar31 = fVar20 + fVar20;
        fVar33 = fVar27 + fVar27;
        fVar22 = fVar42 * (fVar42 + fVar42);
        auVar29._0_4_ = (auVar10._0_4_ - (fVar27 * fVar33 + fVar20 * fVar31)) * fVar23;
        auVar29._4_4_ = (fVar4 - (fVar27 * fVar33 + fVar14 * fVar32)) * fVar24;
        auVar29._8_4_ = (auVar10._8_4_ - (fVar20 * fVar31 + fVar14 * fVar32)) * fVar25;
        auVar29._12_4_ = (fVar7 - (fVar22 + fVar22)) * fVar26;
        fVar27 = (fVar31 * fVar14 + fVar33 * fVar42) * fVar23;
        auVar36._4_4_ = (fVar33 * fVar20 + fVar32 * fVar42) * fVar24;
        auVar36._0_4_ = fVar27;
        local_188 = (fVar33 * fVar14 + fVar31 * fVar42) * fVar25;
        auVar17._0_4_ = (fVar31 * fVar14 - fVar33 * fVar42) * fVar24;
        auVar17._4_4_ = (fVar33 * fVar20 - fVar32 * fVar42) * fVar25;
        auVar17._8_4_ = (fVar33 * fVar14 - fVar31 * fVar42) * fVar23;
        auVar17._12_4_ = (fVar32 * fVar14 - fVar32 * fVar42) * fVar26;
        auVar35 = blendps(auVar29,ZEXT816(0),8);
        auVar36._8_4_ = local_188;
        auVar36._12_4_ = (fVar32 * fVar14 + fVar32 * fVar42) * fVar26;
        local_1a8._4_4_ = fVar27;
        local_1a8._0_4_ = auVar29._0_4_;
        local_1a8._8_4_ = auVar17._8_4_;
        local_1a8._12_4_ = 0;
        auVar15 = insertps(auVar36,auVar36,0x4c);
        uStack_190 = auVar15._0_4_;
        uStack_18c = auVar15._8_4_;
        uStack_180 = auVar35._8_4_;
        uStack_17c = auVar35._12_4_;
        local_178 = insertps(auVar38,ZEXT816(0x3f800000),0x30);
        local_198 = auVar17._0_4_;
        fStack_194 = auVar29._4_4_;
        fStack_184 = auVar17._4_4_;
        fStack_154 = auVar34._4_4_;
        FUN_144afeb32(auVar17._8_8_,local_1a8,local_168,auVar35._0_8_);
        FUN_144afd82e(&local_128);
        auVar18._4_4_ = -(uint)(0.0 <= fVar24 * fVar5);
        auVar18._0_4_ = -(uint)(0.0 <= fVar23 * fVar3);
        auVar18._8_4_ = -(uint)(0.0 <= fVar25 * fVar6);
        auVar18._12_4_ = -(uint)(0.0 <= fVar26 * fVar8);
        auVar35 = blendvps(_DAT_149f63320,auVar10,auVar18);
        fVar14 = auVar35._0_4_;
        local_120 = local_120 * fVar14;
        local_124 = local_124 * fVar14;
        local_128 = local_128 * fVar14;
        fVar14 = auVar35._4_4_;
        local_110 = local_110 * fVar14;
        local_114 = local_114 * fVar14;
        local_118 = fVar14 * local_118;
        fVar14 = auVar35._8_4_;
        local_100 = local_100 * fVar14;
        local_104 = local_104 * fVar14;
        local_108 = fVar14 * local_108;
        FUN_14066c2ac(&local_1b8,&local_128);
        fVar14 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
        fVar20 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
        auVar28._0_4_ = fVar20 + fVar14;
        auVar28._4_4_ = fVar20 + fVar14;
        auVar28._8_4_ = fVar14 + fVar20;
        auVar28._12_4_ = fVar14 + fVar20;
        auVar19._4_4_ = -(uint)(1e-08 <= auVar28._4_4_);
        auVar19._0_4_ = -(uint)(1e-08 <= auVar28._0_4_);
        auVar19._8_4_ = -(uint)(1e-08 <= auVar28._8_4_);
        auVar19._12_4_ = -(uint)(1e-08 <= auVar28._12_4_);
        auVar35 = sqrtps(auVar28,auVar28);
        auVar35 = divps(_DAT_1499314a0,auVar35);
        auVar30._0_4_ = auVar35._0_4_ * local_1b8;
        auVar30._4_4_ = auVar35._4_4_ * fStack_1b4;
        auVar30._8_4_ = auVar35._8_4_ * fStack_1b0;
        auVar30._12_4_ = auVar35._12_4_ * fStack_1ac;
        auVar35 = blendvps(auVar9,auVar30,auVar19);
        auVar38 = blendps(local_f8,ZEXT816(0),8);
        auVar15._4_4_ = fVar24 * fVar5;
        auVar15._0_4_ = fVar23 * fVar3;
        auVar15._8_4_ = fVar25 * fVar6;
        auVar15._12_4_ = fVar26 * fVar8;
      }
      param_3 = (int)*(short *)(param_2[2] + (longlong)param_3 * 2);
    } while (param_3 != -1);
    param_1[2] = auVar15;
    param_1[1] = auVar38;
  }
  *param_1 = auVar35;
  if ((local_e0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e0eb8 FUN_1497e0eb8 body=1476 status=ok
// SIG undefined FUN_1497e0eb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1497e0eb8(float *param_1,undefined8 param_2,float *param_3,short *param_4,
                     ulonglong *param_5,float *param_6)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_1b8 [32];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  float local_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined1 local_a8 [16];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar1 = FUN_1497e095c(&local_198,param_2,(int)*param_4);
  auVar23 = _DAT_149e1ef10;
  fVar4 = local_178._0_4_;
  fVar7 = local_178._4_4_;
  fVar3 = local_178._12_4_;
  auVar9 = *(undefined1 (*) [16])(param_3 + 8);
  fVar13 = auVar9._0_4_;
  fVar16 = auVar9._4_4_;
  fVar8 = auVar9._8_4_;
  fVar6 = auVar9._12_4_;
  fVar11 = local_178._8_4_;
  auVar9 = minps(local_178,auVar9);
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar32._4_4_ = -(uint)(auVar9._4_4_ < 0.0);
  auVar32._0_4_ = -(uint)(auVar9._0_4_ < 0.0);
  auVar32._8_4_ = -(uint)(auVar9._8_4_ < 0.0);
  auVar32._12_4_ = -(uint)(auVar9._12_4_ < 0.0);
  iVar2 = movmskps(uVar1,auVar32);
  if (iVar2 == 0) {
    fVar3 = *param_3;
    fVar6 = param_3[1];
    fVar18 = param_3[2];
    fVar24 = param_3[3];
    fVar19 = local_188._0_4_ * fVar13;
    fVar26 = local_188._4_4_ * fVar16;
    fVar12 = local_188._8_4_ * fVar8;
    fVar27 = fVar26 * fVar3 - fVar19 * fVar6;
    fVar29 = fVar12 * fVar6 - fVar26 * fVar18;
    fVar30 = fVar19 * fVar18 - fVar12 * fVar3;
    fVar27 = fVar27 + fVar27;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    auVar9._0_4_ = fVar18 * fStack_194 * -1.0 +
                   fVar6 * fStack_190 * 1.0 + fVar3 * fStack_18c * 1.0 + local_198 * fVar24;
    auVar9._4_4_ = fVar18 * local_198 * 1.0 +
                   fVar6 * fStack_18c * 1.0 + fVar3 * fStack_190 * -1.0 + fStack_194 * fVar24;
    auVar9._8_4_ = fVar18 * fStack_18c * 1.0 +
                   fVar6 * local_198 * -1.0 + fVar3 * fStack_194 * 1.0 + fStack_190 * fVar24;
    auVar9._12_4_ =
         fVar18 * fStack_190 * -1.0 +
         fVar6 * fStack_194 * -1.0 + fVar3 * local_198 * -1.0 + fStack_18c * fVar24;
    auVar21._0_4_ = (fVar27 * fVar6 - fVar30 * fVar18) + fVar24 * fVar29 + fVar19 + param_3[4];
    auVar21._4_4_ = (fVar29 * fVar18 - fVar27 * fVar3) + fVar24 * fVar30 + fVar26 + param_3[5];
    auVar21._8_4_ = (fVar30 * fVar3 - fVar29 * fVar6) + fVar24 * fVar27 + fVar12 + param_3[6];
  }
  else {
    fVar18 = *param_3;
    fVar24 = param_3[1];
    fVar19 = param_3[2];
    fVar26 = param_3[3];
    fVar27 = fVar18 + fVar18;
    fVar29 = fVar24 + fVar24;
    fVar30 = fVar19 + fVar19;
    fVar12 = fVar26 * (fVar26 + fVar26);
    auVar25._0_4_ = ((float)DAT_149e1ef10 - (fVar19 * fVar30 + fVar24 * fVar29)) * fVar13;
    auVar25._4_4_ = (DAT_149e1ef10._4_4_ - (fVar19 * fVar30 + fVar18 * fVar27)) * fVar16;
    auVar25._8_4_ = (DAT_149e1ef10._8_4_ - (fVar24 * fVar29 + fVar18 * fVar27)) * fVar8;
    auVar25._12_4_ = (DAT_149e1ef10._12_4_ - (fVar12 + fVar12)) * fVar6;
    fVar19 = (fVar29 * fVar18 + fVar30 * fVar26) * fVar13;
    auVar31._4_4_ = (fVar30 * fVar24 + fVar27 * fVar26) * fVar16;
    auVar31._0_4_ = fVar19;
    local_f8 = (fVar30 * fVar18 + fVar29 * fVar26) * fVar8;
    local_108 = (fVar29 * fVar18 - fVar30 * fVar26) * fVar16;
    fStack_f4 = (fVar30 * fVar24 - fVar27 * fVar26) * fVar8;
    auVar9 = blendps(auVar25,auVar22,8);
    auVar31._8_4_ = local_f8;
    auVar31._12_4_ = (fVar27 * fVar18 + fVar27 * fVar26) * fVar6;
    local_118._4_4_ = fVar19;
    local_118._0_4_ = auVar25._0_4_;
    local_118._8_4_ = (fVar30 * fVar18 - fVar29 * fVar26) * fVar13;
    local_118._12_4_ = 0;
    auVar32 = insertps(auVar31,auVar31,0x4c);
    uStack_100 = auVar32._0_4_;
    uStack_fc = auVar32._8_4_;
    uStack_f0 = auVar9._8_4_;
    uStack_ec = auVar9._12_4_;
    auVar10._0_12_ = ZEXT812(0x3f800000);
    auVar10._12_4_ = 0;
    local_e8 = insertps(*(undefined1 (*) [16])(param_3 + 4),auVar10,0x30);
    fVar24 = local_198 + local_198;
    fVar19 = fStack_194 + fStack_194;
    fVar26 = fStack_190 + fStack_190;
    fVar18 = fStack_18c * (fStack_18c + fStack_18c);
    auVar20._0_4_ = ((float)DAT_149e1ef10 - (fStack_190 * fVar26 + fStack_194 * fVar19)) * fVar4;
    auVar20._4_4_ = (DAT_149e1ef10._4_4_ - (fStack_190 * fVar26 + local_198 * fVar24)) * fVar7;
    auVar20._8_4_ = (DAT_149e1ef10._8_4_ - (fStack_194 * fVar19 + local_198 * fVar24)) * fVar11;
    auVar20._12_4_ = (DAT_149e1ef10._12_4_ - (fVar18 + fVar18)) * fVar3;
    fVar18 = (fVar19 * local_198 + fVar26 * fStack_18c) * fVar4;
    auVar28._4_4_ = (fVar26 * fStack_194 + fVar24 * fStack_18c) * fVar7;
    auVar28._0_4_ = fVar18;
    local_138 = (fVar26 * local_198 + fVar19 * fStack_18c) * fVar11;
    local_148 = (fVar19 * local_198 - fVar26 * fStack_18c) * fVar7;
    fStack_134 = (fVar26 * fStack_194 - fVar24 * fStack_18c) * fVar11;
    auVar9 = blendps(auVar20,auVar22,8);
    auVar28._8_4_ = local_138;
    auVar28._12_4_ = (fVar24 * local_198 + fVar24 * fStack_18c) * fVar3;
    local_158._4_4_ = fVar18;
    local_158._0_4_ = auVar20._0_4_;
    local_158._8_4_ = (fVar26 * local_198 - fVar19 * fStack_18c) * fVar4;
    local_158._12_4_ = 0;
    auVar32 = insertps(auVar28,auVar28,0x4c);
    uStack_140 = auVar32._0_4_;
    uStack_13c = auVar32._8_4_;
    uStack_130 = auVar9._8_4_;
    uStack_12c = auVar9._12_4_;
    local_128 = insertps(local_188,auVar10,0x30);
    fStack_144 = auVar20._4_4_;
    fStack_104 = auVar25._4_4_;
    FUN_144afeb32(&local_d8);
    FUN_144afd82e(&local_d8);
    auVar5._4_4_ = -(uint)(0.0 <= fVar7 * fVar16);
    auVar5._0_4_ = -(uint)(0.0 <= fVar4 * fVar13);
    auVar5._8_4_ = -(uint)(0.0 <= fVar11 * fVar8);
    auVar5._12_4_ = -(uint)(0.0 <= fVar3 * fVar6);
    auVar9 = blendvps(_DAT_149f63320,auVar23,auVar5);
    fVar3 = auVar9._0_4_;
    local_d0 = local_d0 * fVar3;
    local_d4 = local_d4 * fVar3;
    local_d8 = local_d8 * fVar3;
    fVar3 = auVar9._4_4_;
    local_c0 = local_c0 * fVar3;
    local_c4 = local_c4 * fVar3;
    local_c8 = fVar3 * local_c8;
    fVar3 = auVar9._8_4_;
    local_b0 = local_b0 * fVar3;
    local_b4 = local_b4 * fVar3;
    local_b8 = fVar3 * local_b8;
    FUN_14066c2ac(&local_168,&local_d8);
    fVar3 = local_168 * local_168 + fStack_164 * fStack_164;
    fVar6 = fStack_160 * fStack_160 + fStack_15c * fStack_15c;
    auVar14._0_4_ = fVar6 + fVar3;
    auVar14._4_4_ = fVar6 + fVar3;
    auVar14._8_4_ = fVar3 + fVar6;
    auVar14._12_4_ = fVar3 + fVar6;
    auVar23._4_4_ = -(uint)(1e-08 <= auVar14._4_4_);
    auVar23._0_4_ = -(uint)(1e-08 <= auVar14._0_4_);
    auVar23._8_4_ = -(uint)(1e-08 <= auVar14._8_4_);
    auVar23._12_4_ = -(uint)(1e-08 <= auVar14._12_4_);
    auVar9 = sqrtps(auVar14,auVar14);
    auVar9 = divps(_DAT_1499314a0,auVar9);
    auVar17._0_4_ = auVar9._0_4_ * local_168;
    auVar17._4_4_ = auVar9._4_4_ * fStack_164;
    auVar17._8_4_ = auVar9._8_4_ * fStack_160;
    auVar17._12_4_ = auVar9._12_4_ * fStack_15c;
    auVar9 = blendvps(_DAT_149932320,auVar17,auVar23);
    auVar23 = blendps(auVar22,local_a8,7);
    auVar21 = auVar23._0_12_;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_5;
  auVar23 = insertps(auVar15,(int)param_5[1],0x28);
  fVar13 = auVar23._0_4_ * fVar4 * fVar13;
  fVar16 = auVar23._4_4_ * fVar7 * fVar16;
  fVar24 = auVar23._8_4_ * fVar11 * fVar8;
  fVar3 = auVar9._0_4_;
  fVar6 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar18 = auVar9._12_4_;
  fVar4 = fVar16 * fVar3 - fVar6 * fVar13;
  fVar7 = fVar24 * fVar6 - fVar11 * fVar16;
  fVar8 = fVar13 * fVar11 - fVar3 * fVar24;
  fVar4 = fVar4 + fVar4;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar13 = ((fVar4 * fVar6 - fVar8 * fVar11) + fVar18 * fVar7 + fVar13 + auVar21._0_4_) -
           auVar21._0_4_;
  fVar16 = ((fVar7 * fVar11 - fVar4 * fVar3) + fVar18 * fVar8 + fVar16 + auVar21._4_4_) -
           auVar21._4_4_;
  fVar4 = ((fVar8 * fVar3 - fVar7 * fVar6) + fVar18 * fVar4 + fVar24 + auVar21._8_4_) -
          auVar21._8_4_;
  fVar7 = fVar13 * param_6[1] - *param_6 * fVar16;
  fVar13 = fVar4 * *param_6 - fVar13 * param_6[2];
  fVar3 = fVar3 * -1.0;
  fVar6 = fVar6 * -1.0;
  fVar11 = fVar11 * -1.0;
  fVar18 = fVar18 * 1.0;
  fVar4 = fVar16 * param_6[2] - fVar4 * param_6[1];
  fVar8 = fVar6 * fVar7 - fVar13 * fVar11;
  fVar8 = fVar8 + fVar8;
  fVar24 = fVar3 * fVar13 - fVar4 * fVar6;
  fVar24 = fVar24 + fVar24;
  fVar16 = fVar11 * fVar4 - fVar7 * fVar3;
  fVar16 = fVar16 + fVar16;
  *param_1 = (fVar6 * fVar24 - fVar16 * fVar11) + fVar18 * fVar8 + fVar4;
  param_1[1] = (fVar11 * fVar8 - fVar24 * fVar3) + fVar18 * fVar16 + fVar13;
  param_1[2] = (fVar3 * fVar16 - fVar8 * fVar6) + fVar18 * fVar24 + fVar7;
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e147d FUN_1497e147d body=132 status=ok
// SIG undefined FUN_1497e147d(void)

void FUN_1497e147d(float param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  uVar7 = *(uint *)(param_2 + 8);
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(param_2 + 0x10);
      lVar8 = (longlong)(int)uVar6;
      fVar2 = *(float *)(lVar5 + lVar8 * 0xc);
      fVar3 = *(float *)(lVar5 + 4 + lVar8 * 0xc);
      fVar4 = *(float *)(lVar5 + 8 + lVar8 * 0xc);
      fVar9 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
      if (param_1 * param_1 < fVar9) {
        pfVar1 = (float *)(lVar5 + lVar8 * 0xc);
        fVar9 = SQRT((param_1 * param_1) / fVar9);
        *pfVar1 = fVar2 * fVar9;
        pfVar1[1] = fVar3 * fVar9;
        pfVar1[2] = fVar4 * fVar9;
        uVar7 = *(uint *)(param_2 + 8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return;
}



// FUNCTION 1497e1501 FUN_1497e1501 body=471 status=ok
// SIG undefined FUN_1497e1501(void)

void FUN_1497e1501(longlong param_1,float param_2,longlong *param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar11 = *param_4;
  if (uVar11 < *(uint *)(param_3 + 1)) {
    fVar12 = -*(float *)(param_1 + 0xc);
    fVar1 = *(float *)(param_1 + 0x10);
    do {
      lVar7 = *param_3;
      lVar10 = param_3[2];
      lVar9 = (longlong)(int)uVar11 * 0xc;
      fVar2 = *(float *)(lVar10 + 4 + lVar9);
      fVar3 = *(float *)(lVar10 + 8 + lVar9);
      lVar8 = param_3[4];
      fVar4 = *(float *)(lVar8 + lVar9);
      fVar5 = *(float *)(lVar8 + 4 + lVar9);
      fVar6 = *(float *)(lVar8 + 8 + lVar9);
      fVar13 = ((fVar3 * fVar12 - fVar1 * fVar6) + *(float *)(lVar7 + 8 + lVar9)) * param_2;
      fVar14 = ((fVar2 * fVar12 - fVar1 * fVar5) + *(float *)(lVar7 + 4 + lVar9)) * param_2;
      fVar15 = ((*(float *)(lVar10 + lVar9) * fVar12 - fVar1 * fVar4) + *(float *)(lVar7 + lVar9)) *
               param_2;
      *(float *)(lVar10 + lVar9) = fVar15 * param_2 + fVar4 * param_2 + *(float *)(lVar10 + lVar9);
      *(float *)(lVar10 + 4 + lVar9) = fVar14 * param_2 + fVar5 * param_2 + fVar2;
      *(float *)(lVar10 + 8 + lVar9) = fVar13 * param_2 + fVar6 * param_2 + fVar3;
      lVar10 = (longlong)(int)*param_4;
      lVar7 = param_3[4];
      *(float *)(lVar7 + lVar10 * 0xc) = fVar4 + fVar15;
      *(float *)(lVar7 + 4 + lVar10 * 0xc) = fVar5 + fVar14;
      *(float *)(lVar7 + 8 + lVar10 * 0xc) = fVar6 + fVar13;
      uVar11 = *param_4 + 1;
      *param_4 = uVar11;
    } while (uVar11 < *(uint *)(param_3 + 1));
  }
  return;
}



// FUNCTION 1497e16d8 FUN_1497e16d8 body=411 status=ok
// SIG undefined FUN_1497e16d8(void)

void FUN_1497e16d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  fVar2 = *(float *)(param_1 + 2);
  auVar1 = *(undefined1 (*) [16])(param_2 + 2);
  auVar6 = blendps(ZEXT816(0),auVar1,7);
  fVar4 = *(float *)(param_2 + 3);
  *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  fVar4 = (fVar4 + *(float *)((longlong)param_1 + 0x54)) -
          (*(float *)(param_1 + 7) + *(float *)((longlong)param_1 + 0x44)) * 0.5;
  fVar5 = (auVar1._4_4_ + *(float *)(param_1 + 10)) -
          (*(float *)((longlong)param_1 + 0x34) + *(float *)(param_1 + 8)) * 0.5;
  fVar7 = (*(float *)((longlong)param_1 + 0x4c) + auVar1._0_4_) -
          (*(float *)(param_1 + 6) + *(float *)((longlong)param_1 + 0x3c)) * 0.5;
  *(float *)(param_1 + 6) = fVar7 + *(float *)(param_1 + 6);
  *(float *)((longlong)param_1 + 0x34) = fVar5 + *(float *)((longlong)param_1 + 0x34);
  *(float *)(param_1 + 7) = fVar4 + *(float *)(param_1 + 7);
  *(float *)((longlong)param_1 + 0x3c) = *(float *)((longlong)param_1 + 0x3c) + fVar7;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar5;
  *(float *)((longlong)param_1 + 0x44) = *(float *)((longlong)param_1 + 0x44) + fVar4;
  *(undefined1 *)(param_1 + 9) = 1;
  fVar5 = 1.0 - *(float *)(param_1[0xd] + 8);
  fVar4 = 0.0;
  if (fVar5 <= 0.0) {
    fVar4 = fVar5;
  }
  if (fVar4 <= 1.0) {
    fVar4 = 1.0;
  }
  *(float *)(param_1 + 0xb) = (fVar2 - auVar1._0_4_) * fVar4;
  *(float *)((longlong)param_1 + 0x5c) =
       (*(float *)((longlong)param_1 + 0x14) - auVar1._4_4_) * fVar4;
  *(float *)(param_1 + 0xc) = (*(float *)(param_1 + 3) - auVar1._8_4_) * fVar4;
  return;
}



// FUNCTION 1497e1873 FUN_1497e1873 body=661 status=ok
// SIG undefined FUN_1497e1873(void)

void FUN_1497e1873(longlong *param_1,longlong *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0 < (int)param_2[1]) {
    lVar11 = 0x10;
    lVar12 = 0;
    lVar10 = 0;
    do {
      lVar13 = *param_2;
      pfVar1 = (float *)(lVar13 + -0x20 + lVar11 * 2);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar1 = (float *)(lVar13 + lVar11 * 2);
      local_b8._8_4_ = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar18 = fVar5 + fVar5;
      fVar19 = fVar6 + fVar6;
      fVar20 = fVar15 + fVar15;
      fVar14 = fVar7 * (fVar7 + fVar7);
      auVar16._0_4_ = (1.0 - (fVar15 * fVar20 + fVar6 * fVar19)) * (float)local_b8._8_4_;
      auVar16._4_4_ = (1.0 - (fVar15 * fVar20 + fVar5 * fVar18)) * fVar8;
      auVar16._8_4_ = (1.0 - (fVar6 * fVar19 + fVar5 * fVar18)) * fVar9;
      auVar16._12_4_ = (0.0 - (fVar14 + fVar14)) * pfVar1[3];
      fVar15 = (fVar19 * fVar5 + fVar20 * fVar7) * (float)local_b8._8_4_;
      fVar14 = (fVar20 * fVar5 + fVar19 * fVar7) * fVar9;
      local_a8 = (fVar19 * fVar5 - fVar20 * fVar7) * fVar8;
      local_b8._8_4_ = (fVar20 * fVar5 - fVar19 * fVar7) * (float)local_b8._8_4_;
      auVar17 = blendps(auVar16,ZEXT816(0),8);
      auVar21._4_4_ = (fVar20 * fVar6 + fVar18 * fVar7) * fVar8;
      auVar21._0_4_ = fVar15;
      auVar21._8_4_ = fVar14;
      auVar21._12_4_ = (fVar18 * fVar5 + fVar18 * fVar7) * pfVar1[3];
      auVar22 = insertps(auVar21,auVar21,0x4c);
      fStack_a0 = auVar22._0_4_;
      fStack_9c = auVar22._8_4_;
      uVar4 = CONCAT44(fVar15,auVar16._0_4_);
      auVar22._8_4_ = local_b8._8_4_;
      auVar22._0_8_ = uVar4;
      auVar22._12_4_ = 0;
      local_98 = CONCAT44((fVar20 * fVar6 - fVar18 * fVar7) * fVar9,fVar14);
      uStack_90 = auVar17._8_8_;
      local_88 = insertps(*(undefined1 (*) [16])(lVar13 + -0x10 + lVar11 * 2),0x3f800000,0x30);
      local_b8 = auVar22;
      fStack_a4 = auVar16._4_4_;
      if (*(short *)(param_2[2] + lVar10 * 2) == -1) {
        local_b8._12_4_ = 0;
        uStack_f0 = local_b8._8_8_;
        local_e8 = CONCAT44(auVar16._4_4_,local_a8);
        uStack_e0 = CONCAT44(fStack_9c,fStack_a0);
        local_d8 = local_98;
        uStack_d0 = uStack_90;
        local_c8 = local_88._0_8_;
        uStack_c0 = local_88._8_8_;
        lVar13 = *param_3;
        local_f8 = uVar4;
      }
      else {
        lVar13 = *param_3;
        FUN_144afeb32(&local_f8,local_b8,auVar17._0_8_);
      }
      puVar2 = (undefined4 *)(lVar13 + 0x30 + lVar12);
      *puVar2 = (undefined4)local_c8;
      puVar2[1] = local_c8._4_4_;
      puVar2[2] = (undefined4)uStack_c0;
      puVar2[3] = uStack_c0._4_4_;
      puVar3 = (undefined8 *)(lVar13 + 0x20 + lVar12);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      puVar2 = (undefined4 *)(lVar13 + 0x10 + lVar12);
      *puVar2 = (undefined4)local_e8;
      puVar2[1] = local_e8._4_4_;
      puVar2[2] = (undefined4)uStack_e0;
      puVar2[3] = uStack_e0._4_4_;
      *(undefined8 *)(lVar13 + lVar12) = local_f8;
      ((undefined8 *)(lVar13 + lVar12))[1] = uStack_f0;
      lVar10 = lVar10 + 1;
      lVar12 = lVar12 + 0x40;
      lVar11 = lVar11 + 0x18;
    } while (lVar10 < (int)param_2[1]);
    if (0 < (int)param_2[1]) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        lVar12 = *param_1;
        local_b8 = *(undefined1 (*) [16])(lVar12 + lVar10);
        pfVar1 = (float *)(lVar12 + 0x10 + lVar10);
        local_a8 = *pfVar1;
        fStack_a4 = pfVar1[1];
        fStack_a0 = pfVar1[2];
        fStack_9c = pfVar1[3];
        puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar10);
        local_98 = *puVar3;
        uStack_90 = puVar3[1];
        local_88 = *(undefined1 (*) [16])(lVar12 + 0x30 + lVar10);
        lVar12 = *param_3;
        FUN_144afeb32(&local_f8,local_b8,lVar10 + lVar12);
        puVar2 = (undefined4 *)(lVar12 + 0x30 + lVar10);
        *puVar2 = (undefined4)local_c8;
        puVar2[1] = local_c8._4_4_;
        puVar2[2] = (undefined4)uStack_c0;
        puVar2[3] = uStack_c0._4_4_;
        puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar10);
        *puVar3 = local_d8;
        puVar3[1] = uStack_d0;
        puVar2 = (undefined4 *)(lVar12 + 0x10 + lVar10);
        *puVar2 = (undefined4)local_e8;
        puVar2[1] = local_e8._4_4_;
        puVar2[2] = (undefined4)uStack_e0;
        puVar2[3] = uStack_e0._4_4_;
        *(undefined8 *)(lVar12 + lVar10) = local_f8;
        ((undefined8 *)(lVar12 + lVar10))[1] = uStack_f0;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x40;
      } while (lVar11 < (int)param_2[1]);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e1b09 FUN_1497e1b09 body=414 status=ok
// SIG undefined FUN_1497e1b09(void)

undefined8 FUN_1497e1b09(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  void *local_e8;
  undefined8 uStack_e0;
  code *local_d8 [2];
  undefined8 local_c8;
  code *local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = (void *)0x0;
  iVar3 = *(int *)(param_3 + 1);
  pvVar4 = (void *)*param_3;
  if ((longlong)iVar3 == 0) {
    pvVar4 = (void *)0x0;
    iVar3 = 0;
    uVar2 = 0;
  }
  else {
    uStack_e0._0_4_ = iVar3;
    FUN_1497e691e(&local_e8,iVar3);
    memcpy(local_e8,pvVar4,(longlong)iVar3 << 2);
    pvVar4 = local_e8;
    iVar3 = (int)uStack_e0;
    uVar2 = uStack_e0._4_4_;
  }
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_98 = (code *)0x0;
  local_88 = (longlong *)FUN_14001cc68(0x28,8);
  *local_88 = (longlong)&PTR_FUN_14be80670;
  local_88[1] = param_2;
  local_88[2] = (longlong)pvVar4;
  *(int *)(local_88 + 3) = iVar3;
  *(undefined4 *)((longlong)local_88 + 0x1c) = uVar2;
  *(undefined4 *)(local_88 + 4) = param_4;
  if (local_88 + 1 == (longlong *)0x0) {
    local_d8[0] = (code *)0x0;
    local_c8 = 0;
  }
  else {
    local_98 = FUN_144623780;
    local_d8[0] = FUN_144623780;
    local_c8 = 0;
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = local_78;
    }
    (**(code **)*plVar1)(plVar1);
  }
  local_f8 = 0xff;
  FUN_14014aede(param_1,local_d8);
  if (local_98 != (code *)0x0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e1ca8 FUN_1497e1ca8 body=338 status=ok
// SIG undefined FUN_1497e1ca8(void)

undefined8
FUN_1497e1ca8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  void *local_c8;
  undefined8 uStack_c0;
  code *local_b8 [2];
  undefined8 local_a8;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = (void *)0x0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar4 = (void *)*param_3;
  if ((longlong)iVar2 == 0) {
    pvVar4 = (void *)0x0;
    local_40 = 0;
    local_3c = 0;
  }
  else {
    uStack_c0._0_4_ = iVar2;
    FUN_1497e691e(&local_c8,iVar2);
    memcpy(local_c8,pvVar4,(longlong)iVar2 << 2);
    pvVar4 = local_c8;
    local_40 = (int)uStack_c0;
    local_3c = uStack_c0._4_4_;
  }
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_68 = 0;
  local_58 = &PTR_FUN_14be80690;
  local_78 = FUN_144623e2a;
  local_b8[0] = FUN_144623e2a;
  local_a8 = 0;
  local_50 = param_2;
  local_48 = pvVar4;
  FUN_144623eac(&local_58);
  local_d8 = 0xff;
  FUN_140e6df44(param_1,local_b8);
  local_58 = &PTR_FUN_14be80690;
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8(pvVar4);
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)*param_4;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e1dfc FUN_1497e1dfc body=95 status=ok
// SIG undefined FUN_1497e1dfc(void)

void FUN_1497e1dfc(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 400);
    *(undefined8 **)(param_1 + 400) = puVar2;
    *puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001497e1e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  return;
}



// FUNCTION 1497e1e5c FUN_1497e1e5c body=192 status=ok
// SIG undefined FUN_1497e1e5c(void)

void FUN_1497e1e5c(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 4;
    lVar9 = 0;
    while (*(int *)(lVar1 + lVar9 * 4) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_1497e1f08;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 4),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 4),
              (longlong)iVar6 << 2);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_1497e1f08:
  FUN_1497e70e0(param_1);
  return;
}



// FUNCTION 1497e1f1c FUN_1497e1f1c body=95 status=ok
// SIG undefined FUN_1497e1f1c(void)

void FUN_1497e1f1c(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    *(undefined8 **)(param_1 + 0x150) = puVar2;
    *puVar1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001497e1f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return;
}



// FUNCTION 1497e1f7c FUN_1497e1f7c body=252 status=ok
// SIG undefined FUN_1497e1f7c(void)

void FUN_1497e1f7c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  lVar2 = **(longlong **)(param_1 + 0x158);
  if (lVar2 != 0) {
    do {
      iVar1 = *(int *)(lVar2 + 8);
      lVar5 = *(longlong *)(param_1 + 0x158);
      *(longlong *)(param_1 + 0x158) = lVar2;
      *(undefined4 *)(lVar2 + 8) = 0xffffffff;
      if (lVar5 != 0) {
        FUN_1400020a8();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
      lVar2 = *(longlong *)(param_1 + 0x110);
      lVar5 = (longlong)*(int *)(param_1 + 0x118);
      if (lVar5 != 0) {
        lVar4 = 0;
        do {
          if (*(int *)(lVar2 + lVar4) == iVar1) goto LAB_1497e2037;
          lVar4 = lVar4 + 4;
        } while (lVar5 * 4 - lVar4 != 0);
      }
      uVar3 = *(int *)(param_1 + 0x118) + 1;
      *(uint *)(param_1 + 0x118) = uVar3;
      if (*(uint *)(param_1 + 0x11c) < uVar3) {
        FUN_1497e717c((longlong *)(param_1 + 0x110));
        lVar2 = *(longlong *)(param_1 + 0x110);
      }
      *(int *)(lVar2 + lVar5 * 4) = iVar1;
LAB_1497e2037:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
      lVar2 = **(longlong **)(param_1 + 0x158);
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001497e2071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return;
}



// FUNCTION 1497e2078 FUN_1497e2078 body=228 status=ok
// SIG undefined FUN_1497e2078(void)

void FUN_1497e2078(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
  local_44 = 0xffffffff;
  lVar2 = **(longlong **)(param_1 + 0x198);
  if (lVar2 != 0) {
    do {
      local_44 = *(undefined4 *)(lVar2 + 8);
      lVar1 = *(longlong *)(param_1 + 0x198);
      *(longlong *)(param_1 + 0x198) = lVar2;
      *(undefined4 *)(lVar2 + 8) = 0xffffffff;
      if (lVar1 != 0) {
        FUN_1400020a8();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
      FUN_1497e1e5c(param_1 + 0x110,&local_44);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
      lVar2 = **(longlong **)(param_1 + 0x198);
    } while (lVar2 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001497e2150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x160));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e215e FUN_1497e215e body=170 status=ok
// SIG undefined FUN_1497e215e(void)

void FUN_1497e215e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    local_68[0] = 0;
    local_58 = (longlong *)0x0;
    FUN_14702925e(*param_1,local_68);
    if (local_68[0] != 0) {
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar3 = local_48;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e2214 FUN_1497e2214 body=45 status=ok
// SIG undefined FUN_1497e2214(void)

longlong FUN_1497e2214(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e2242 FUN_1497e2242 body=48 status=ok
// SIG undefined FUN_1497e2242(void)

longlong FUN_1497e2242(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e2272 FUN_1497e2272 body=48 status=ok
// SIG undefined FUN_1497e2272(void)

longlong FUN_1497e2272(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e22a2 FUN_1497e22a2 body=48 status=ok
// SIG undefined FUN_1497e22a2(void)

longlong FUN_1497e22a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e22d2 FUN_1497e22d2 body=48 status=ok
// SIG undefined FUN_1497e22d2(void)

longlong FUN_1497e22d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xad0;
  FUN_1403c5294(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e23b4 FUN_1497e23b4 body=59 status=ok
// SIG undefined FUN_1497e23b4(void)

undefined8 FUN_1497e23b4(longlong *param_1)

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



// FUNCTION 1497e245a FUN_1497e245a body=71 status=ok
// SIG undefined FUN_1497e245a(void)

undefined8 * FUN_1497e245a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14be7fec8;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e24a2 FUN_1497e24a2 body=71 status=ok
// SIG undefined FUN_1497e24a2(void)

undefined8 * FUN_1497e24a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14be7fec8;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e25a0 FUN_1497e25a0 body=59 status=ok
// SIG undefined FUN_1497e25a0(void)

undefined8 FUN_1497e25a0(longlong *param_1)

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



// FUNCTION 1497e2642 FUN_1497e2642 body=67 status=ok
// SIG undefined FUN_1497e2642(void)

void FUN_1497e2642(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14be80320;
  param_2[5] = 0;
  FUN_14485c47a(param_2 + 5,0);
  return;
}



// FUNCTION 1497e2686 FUN_1497e2686 body=53 status=ok
// SIG undefined FUN_1497e2686(void)

void FUN_1497e2686(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14be80320;
  param_2[5] = 0;
  FUN_14485c47a(param_2 + 5,0);
  return;
}



// FUNCTION 1497e270c FUN_1497e270c body=59 status=ok
// SIG undefined FUN_1497e270c(void)

undefined8 FUN_1497e270c(longlong *param_1)

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



// FUNCTION 1497e2752 FUN_1497e2752 body=32 status=ok
// SIG undefined FUN_1497e2752(void)

void FUN_1497e2752(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1497e27c2 FUN_1497e27c2 body=67 status=ok
// SIG undefined FUN_1497e27c2(void)

void FUN_1497e27c2(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14be80350;
  param_2[5] = 0;
  FUN_14485c47a(param_2 + 5,0);
  return;
}



// FUNCTION 1497e2806 FUN_1497e2806 body=53 status=ok
// SIG undefined FUN_1497e2806(void)

void FUN_1497e2806(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14be80350;
  param_2[5] = 0;
  FUN_14485c47a(param_2 + 5,0);
  return;
}



// FUNCTION 1497e288c FUN_1497e288c body=59 status=ok
// SIG undefined FUN_1497e288c(void)

undefined8 FUN_1497e288c(longlong *param_1)

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



// FUNCTION 1497e28d2 FUN_1497e28d2 body=32 status=ok
// SIG undefined FUN_1497e28d2(void)

void FUN_1497e28d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1497e2942 FUN_1497e2942 body=38 status=ok
// SIG undefined FUN_1497e2942(void)

undefined8 FUN_1497e2942(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e2968 FUN_1497e2968 body=38 status=ok
// SIG undefined FUN_1497e2968(void)

undefined8 FUN_1497e2968(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e298e FUN_1497e298e body=75 status=ok
// SIG undefined FUN_1497e298e(void)

void FUN_1497e298e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1497e29da FUN_1497e29da body=52 status=ok
// SIG undefined FUN_1497e29da(void)

void FUN_1497e29da(longlong *param_1)

{
  FUN_1497e2a0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1497e2a0e FUN_1497e2a0e body=337 status=ok
// SIG undefined FUN_1497e2a0e(void)

void FUN_1497e2a0e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1497e2b60(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e2b60 FUN_1497e2b60 body=58 status=ok
// SIG undefined FUN_1497e2b60(void)

void FUN_1497e2b60(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1497e2b9a FUN_1497e2b9a body=61 status=ok
// SIG undefined FUN_1497e2b9a(void)

void FUN_1497e2b9a(longlong *param_1)

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



// FUNCTION 1497e2bd8 FUN_1497e2bd8 body=96 status=ok
// SIG undefined FUN_1497e2bd8(void)

undefined8 * FUN_1497e2bd8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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



// FUNCTION 1497e2c38 FUN_1497e2c38 body=132 status=ok
// SIG undefined FUN_1497e2c38(void)

void FUN_1497e2c38(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1497e2cbc(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x14) = param_2[4];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x14);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1497e2d50(param_1 + 2,iVar2);
  }
  lVar3 = param_1[2];
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *param_3;
  return;
}



// FUNCTION 1497e2cbc FUN_1497e2cbc body=147 status=ok
// SIG undefined FUN_1497e2cbc(void)

void FUN_1497e2cbc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e2d50 FUN_1497e2d50 body=147 status=ok
// SIG undefined FUN_1497e2d50(void)

void FUN_1497e2d50(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e2de4 FUN_1497e2de4 body=136 status=ok
// SIG undefined FUN_1497e2de4(void)

void FUN_1497e2de4(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1497e2e6c(param_1,iVar2);
  }
  lVar3 = *param_1;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = param_2[4];
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1497e2d50(param_1 + 2,iVar2);
  }
  lVar3 = param_1[2];
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *param_3;
  return;
}



// FUNCTION 1497e2e6c FUN_1497e2e6c body=132 status=ok
// SIG undefined FUN_1497e2e6c(void)

void FUN_1497e2e6c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e2ef2 FUN_1497e2ef2 body=132 status=ok
// SIG undefined FUN_1497e2ef2(void)

void FUN_1497e2ef2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e2f78 FUN_1497e2f78 body=114 status=ok
// SIG undefined FUN_1497e2f78(void)

void FUN_1497e2f78(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1497e2fea FUN_1497e2fea body=114 status=ok
// SIG undefined FUN_1497e2fea(void)

void FUN_1497e2fea(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1497e305c FUN_1497e305c body=114 status=ok
// SIG undefined FUN_1497e305c(void)

void FUN_1497e305c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1497e30ce FUN_1497e30ce body=282 status=ok
// SIG undefined FUN_1497e30ce(void)

void FUN_1497e30ce(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar6 = 8;
    if (uVar2 != 0) {
      uVar6 = uVar2 * 2;
    }
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < (int)uVar6) {
      FUN_14480809c(plVar1);
    }
    uVar7 = uVar6 - uVar2;
    if (uVar2 <= uVar6 && uVar7 != 0) {
      do {
        uVar6 = uVar6 - 1;
        iVar3 = *(int *)(param_1 + 0x20);
        uVar4 = iVar3 + 1;
        *(uint *)(param_1 + 0x20) = uVar4;
        if (*(uint *)(param_1 + 0x24) < uVar4) {
          FUN_1447808da(plVar1);
        }
        *(uint *)(*plVar1 + (longlong)iVar3 * 4) = uVar6;
      } while (uVar6 != uVar2);
    }
    iVar3 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar3 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar3) < uVar7) {
      FUN_1497e31ea(param_1 + 0x28);
    }
    memset((void *)((longlong)iVar3 * 0x34 + *(longlong *)(param_1 + 0x28)),0,
           (longlong)(int)uVar7 * 0x34);
    iVar3 = *(int *)(param_1 + 0x20);
  }
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar3 + -1) * 4) * 0x34;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar5) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8 + lVar5) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar5) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar5) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 1497e31ea FUN_1497e31ea body=143 status=ok
// SIG undefined FUN_1497e31ea(void)

void FUN_1497e31ea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x34,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x34)) {
      uVar5 = uVar4 / 0x34 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x34,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e327a FUN_1497e327a body=132 status=ok
// SIG undefined FUN_1497e327a(void)

void FUN_1497e327a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e3300 FUN_1497e3300 body=251 status=ok
// SIG undefined FUN_1497e3300(void)

int * FUN_1497e3300(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406245f8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1497e33fc FUN_1497e33fc body=128 status=ok
// SIG undefined FUN_1497e33fc(void)

void FUN_1497e33fc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1497e347c FUN_1497e347c body=31 status=ok
// SIG undefined FUN_1497e347c(void)

void FUN_1497e347c(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 2;
    *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1497e349c FUN_1497e349c body=132 status=ok
// SIG undefined FUN_1497e349c(void)

void FUN_1497e349c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e3522 FUN_1497e3522 body=62 status=ok
// SIG undefined FUN_1497e3522(void)

void FUN_1497e3522(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497e3560(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1497e3560 FUN_1497e3560 body=93 status=ok
// SIG undefined FUN_1497e3560(void)

ulonglong FUN_1497e3560(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1497e35be FUN_1497e35be body=381 status=ok
// SIG undefined FUN_1497e35be(void)

undefined8 * FUN_1497e35be(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  uint local_68;
  float fStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = local_68 & 0xffffff00;
  local_58 = DAT_14c846338;
  local_60 = DAT_14c846330;
  FUN_1497e373c(param_1 + 0x70,&local_88);
  puVar3 = (undefined4 *)CONCAT44(fStack_7c,fStack_80);
  puVar3[4] = param_3[4];
  uVar5 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  *puVar3 = *param_3;
  puVar3[1] = uVar5;
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  FUN_1497e3822(param_1 + 0xa8,&local_88);
  *(undefined4 *)((undefined8 *)CONCAT44(fStack_7c,fStack_80) + 1) = local_58;
  *(undefined8 *)CONCAT44(fStack_7c,fStack_80) = local_60;
  fStack_64 = local_88;
  local_88 = (float)param_3[4];
  local_74 = (float)param_3[3] + local_88;
  local_78 = (float)param_3[2] + local_88;
  fStack_7c = (float)param_3[1] + local_88;
  fStack_80 = (float)param_3[3] - local_88;
  fStack_84 = (float)param_3[2] - local_88;
  local_88 = (float)param_3[1] - local_88;
  local_70 = (float)CONCAT31(local_70._1_3_,1);
  uVar5 = FUN_1497db1a4(param_1,&local_88,&local_68);
  FUN_1497e3300(param_1 + 0x38,&local_60);
  pfVar4 = (float *)CONCAT44(uStack_54,local_58);
  pfVar4[3] = fStack_7c;
  pfVar4[4] = local_78;
  pfVar4[5] = local_74;
  pfVar4[6] = local_70;
  *pfVar4 = local_88;
  pfVar4[1] = fStack_84;
  pfVar4[2] = fStack_80;
  pfVar4[3] = fStack_7c;
  *param_2 = CONCAT44(fStack_64,local_68);
  param_2[1] = CONCAT44(uVar5,(undefined4)local_60);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e373c FUN_1497e373c body=230 status=ok
// SIG undefined FUN_1497e373c(void)

int * FUN_1497e373c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1497e3822 FUN_1497e3822 body=230 status=ok
// SIG undefined FUN_1497e3822(void)

int * FUN_1497e3822(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447cc1b4(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1497e3908 FUN_1497e3908 body=234 status=ok
// SIG undefined FUN_1497e3908(void)

void FUN_1497e3908(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = (float)param_3[4];
  local_48 = (float)param_3[3] + local_5c;
  local_4c = (float)param_3[2] + local_5c;
  local_50 = (float)param_3[1] + local_5c;
  local_54 = (float)param_3[3] - local_5c;
  local_58 = (float)param_3[2] - local_5c;
  local_5c = (float)param_3[1] - local_5c;
  local_44 = 1;
  FUN_1497db7e6(local_5c,&local_5c,param_2);
  lVar6 = (longlong)*(int *)(param_2 + 4);
  lVar2 = *(longlong *)(param_1 + 0x70);
  *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x14) = param_3[4];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar2 + lVar6 * 0x14);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  *(undefined8 *)(lVar2 + lVar6 * 0xc) = *param_4;
  *(undefined4 *)(lVar2 + 8 + lVar6 * 0xc) = *(undefined4 *)(param_4 + 1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e39f4 FUN_1497e39f4 body=178 status=ok
// SIG undefined FUN_1497e39f4(void)

void FUN_1497e39f4(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_78 [36];
  undefined1 local_54 [28];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    FUN_1497daaf3(local_54,param_3);
    FUN_1497db7e6(param_1 + 0x48,local_54,param_2);
    lVar10 = (longlong)*(int *)(param_2 + 4);
    lVar2 = *(longlong *)(param_1 + 0x128);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar10 * 0x20);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + lVar10 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    lVar2 = *(longlong *)(param_1 + 0x160);
    *(undefined8 *)(lVar2 + lVar10 * 0xc) = *param_4;
    *(undefined4 *)(lVar2 + 8 + lVar10 * 0xc) = *(undefined4 *)(param_4 + 1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e3aa8 FUN_1497e3aa8 body=285 status=ok
// SIG undefined FUN_1497e3aa8(void)

undefined8 * FUN_1497e3aa8(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = CONCAT31(local_50._1_3_,1);
  local_40 = DAT_14c846338;
  local_48 = DAT_14c846330;
  FUN_1497e3bc6(param_1 + 0xe0,&local_70);
  puVar7 = (undefined4 *)CONCAT44(uStack_64,uStack_68);
  uVar8 = *param_3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  puVar7[4] = param_3[4];
  puVar7[5] = uVar4;
  puVar7[6] = uVar5;
  puVar7[7] = uVar6;
  *puVar7 = uVar8;
  puVar7[1] = uVar1;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  FUN_1497e3822(param_1 + 0x118,&local_70);
  *(undefined4 *)((undefined8 *)CONCAT44(uStack_64,uStack_68) + 1) = local_40;
  *(undefined8 *)CONCAT44(uStack_64,uStack_68) = local_48;
  uStack_4c = local_70;
  FUN_1497daaf3(&local_70,param_3);
  uVar8 = FUN_1497db1a4(param_1,&local_70,&local_50);
  FUN_1497e3300(param_1 + 0x38,&local_48);
  puVar7 = (undefined4 *)CONCAT44(uStack_3c,local_40);
  puVar7[3] = uStack_64;
  puVar7[4] = uStack_60;
  puVar7[5] = uStack_5c;
  puVar7[6] = uStack_58;
  *puVar7 = local_70;
  puVar7[1] = uStack_6c;
  puVar7[2] = uStack_68;
  puVar7[3] = uStack_64;
  *param_2 = CONCAT44(uStack_4c,local_50);
  param_2[1] = CONCAT44(uVar8,(undefined4)local_48);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e3bc6 FUN_1497e3bc6 body=229 status=ok
// SIG undefined FUN_1497e3bc6(void)

int * FUN_1497e3bc6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1405b363e(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1497e3cac FUN_1497e3cac body=76 status=ok
// SIG undefined FUN_1497e3cac(void)

void FUN_1497e3cac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145bb0d9c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1497e3cc0;
    }
  }
  lVar2 = 0;
LAB_1497e3cc0:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1497e3cf8 FUN_1497e3cf8 body=48 status=ok
// SIG undefined FUN_1497e3cf8(void)

void FUN_1497e3cf8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 1497e3d28 FUN_1497e3d28 body=181 status=ok
// SIG undefined FUN_1497e3d28(void)

longlong FUN_1497e3d28(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1497e3dc0;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1497e3dde(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1497e3dc0:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1497e3dde FUN_1497e3dde body=278 status=ok
// SIG undefined FUN_1497e3dde(void)

undefined4 * FUN_1497e3dde(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1497e3ef6(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  FUN_1497e2b60(0,0);
  local_40[6] = 0xffffffff;
  cVar1 = FUN_1497e3fdc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[7] = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1497e40fa(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e3ef6 FUN_1497e3ef6 body=229 status=ok
// SIG undefined FUN_1497e3ef6(void)

int * FUN_1497e3ef6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1497e3fdc FUN_1497e3fdc body=172 status=ok
// SIG undefined FUN_1497e3fdc(void)

undefined8 FUN_1497e3fdc(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1497e2b60(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1497e4088(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1497e4088 FUN_1497e4088 body=114 status=ok
// SIG undefined FUN_1497e4088(void)

void FUN_1497e4088(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1497e40fa FUN_1497e40fa body=422 status=ok
// SIG undefined FUN_1497e40fa(void)

void FUN_1497e40fa(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497e42a2 FUN_1497e42a2 body=132 status=ok
// SIG undefined FUN_1497e42a2(void)

void FUN_1497e42a2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e4328 FUN_1497e4328 body=76 status=ok
// SIG undefined FUN_1497e4328(void)

void FUN_1497e4328(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145bb0e86();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1497e433c;
    }
  }
  lVar2 = 0;
LAB_1497e433c:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1497e4374 FUN_1497e4374 body=31 status=ok
// SIG undefined FUN_1497e4374(void)

undefined8 FUN_1497e4374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e43b0 FUN_1497e43b0 body=93 status=ok
// SIG undefined FUN_1497e43b0(void)

void FUN_1497e43b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be80470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e440e FUN_1497e440e body=126 status=ok
// SIG undefined FUN_1497e440e(void)

void FUN_1497e440e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be80470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497e447d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497e448c FUN_1497e448c body=21 status=ok
// SIG undefined FUN_1497e448c(void)

undefined8 FUN_1497e448c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1497e44a2 FUN_1497e44a2 body=88 status=ok
// SIG undefined FUN_1497e44a2(void)

void FUN_1497e44a2(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar2 = (longlong *)FUN_1497e44fa();
  if ((longlong)(int)plVar2[1] != 0) {
    puVar4 = (undefined8 *)*plVar2;
    puVar5 = puVar4 + (longlong)(int)plVar2[1] * 8;
    do {
      pcVar1 = (code *)*puVar4;
      plVar2 = puVar4 + 4;
      if ((longlong *)puVar4[2] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar4[2];
      }
      uVar3 = (**(code **)(*plVar2 + 8))();
      (*pcVar1)(uVar3,param_2);
      puVar4 = puVar4 + 8;
    } while (puVar4 != puVar5);
  }
  return;
}



// FUNCTION 1497e44fa FUN_1497e44fa body=83 status=ok
// SIG undefined FUN_1497e44fa(void)

longlong FUN_1497e44fa(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)(~*(uint *)(param_1 + 9) & 1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x20) == 1) goto LAB_1497e4504;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_1497e4504:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1497e4556 FUN_1497e4556 body=173 status=ok
// SIG undefined FUN_1497e4556(void)

void FUN_1497e4556(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[2];
  lVar8 = 0;
  do {
    uVar1 = (ulonglong)(uint)(param_2 * 0x14) + lVar8;
    iVar5 = (int)uVar1;
    if ((-1 < iVar5) && (iVar5 < (int)((longlong *)param_1[1])[1])) {
      iVar5 = *(int *)(*(longlong *)param_1[1] + (uVar1 & 0xffffffff) * 4);
      EnterCriticalSection(lpCriticalSection);
      lVar2 = *(longlong *)&lpCriticalSection[1].LockCount;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      puVar3 = (undefined8 *)*param_1;
      pcVar4 = (code *)*puVar3;
      plVar7 = puVar3 + 4;
      if ((longlong *)puVar3[2] != (longlong *)0x0) {
        plVar7 = (longlong *)puVar3[2];
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,lVar2 + (longlong)iVar5 * 0x180);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x14);
  return;
}



// FUNCTION 1497e4604 FUN_1497e4604 body=159 status=ok
// SIG undefined FUN_1497e4604(void)

void FUN_1497e4604(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = (int)*plVar5;
    if (iVar2 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar2 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x20) == 0) goto LAB_1497e461a;
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_1497e461a:
  plVar5 = (longlong *)(lVar3 + 8);
  if (lVar3 == 0) {
    plVar5 = (longlong *)0x0;
  }
  if ((longlong)(int)plVar5[1] != 0) {
    puVar6 = (undefined8 *)*plVar5;
    puVar7 = puVar6 + (longlong)(int)plVar5[1] * 8;
    do {
      pcVar1 = (code *)*puVar6;
      plVar5 = puVar6 + 4;
      if ((longlong *)puVar6[2] != (longlong *)0x0) {
        plVar5 = (longlong *)puVar6[2];
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,param_2);
      puVar6 = puVar6 + 8;
    } while (puVar6 != puVar7);
  }
  return;
}



// FUNCTION 1497e46cc FUN_1497e46cc body=12 status=ok
// SIG undefined FUN_1497e46cc(void)

void FUN_1497e46cc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001497e46d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1497e46d8 FUN_1497e46d8 body=29 status=ok
// SIG undefined FUN_1497e46d8(void)

undefined8 FUN_1497e46d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e46f6 FUN_1497e46f6 body=88 status=ok
// SIG undefined FUN_1497e46f6(void)

void FUN_1497e46f6(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar2 = (longlong *)FUN_1497e474e();
  if ((longlong)(int)plVar2[1] != 0) {
    puVar4 = (undefined8 *)*plVar2;
    puVar5 = puVar4 + (longlong)(int)plVar2[1] * 8;
    do {
      pcVar1 = (code *)*puVar4;
      plVar2 = puVar4 + 4;
      if ((longlong *)puVar4[2] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar4[2];
      }
      uVar3 = (**(code **)(*plVar2 + 8))();
      (*pcVar1)(uVar3,param_2);
      puVar4 = puVar4 + 8;
    } while (puVar4 != puVar5);
  }
  return;
}



// FUNCTION 1497e474e FUN_1497e474e body=89 status=ok
// SIG undefined FUN_1497e474e(void)

longlong FUN_1497e474e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & 0x100) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x20) == 0x100) goto LAB_1497e4758;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_1497e4758:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1497e47a8 FUN_1497e47a8 body=88 status=ok
// SIG undefined FUN_1497e47a8(void)

void FUN_1497e47a8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar2 = (longlong *)FUN_1497e4800();
  if ((longlong)(int)plVar2[1] != 0) {
    puVar4 = (undefined8 *)*plVar2;
    puVar5 = puVar4 + (longlong)(int)plVar2[1] * 8;
    do {
      pcVar1 = (code *)*puVar4;
      plVar2 = puVar4 + 4;
      if ((longlong *)puVar4[2] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar4[2];
      }
      uVar3 = (**(code **)(*plVar2 + 8))();
      (*pcVar1)(uVar3,param_2);
      puVar4 = puVar4 + 8;
    } while (puVar4 != puVar5);
  }
  return;
}



// FUNCTION 1497e4800 FUN_1497e4800 body=89 status=ok
// SIG undefined FUN_1497e4800(void)

longlong FUN_1497e4800(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & 0x101) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x20) == 0x101) goto LAB_1497e480a;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_1497e480a:
  lVar1 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1497e485a FUN_1497e485a body=95 status=ok
// SIG undefined FUN_1497e485a(void)

void FUN_1497e485a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1497e48ba FUN_1497e48ba body=132 status=ok
// SIG undefined FUN_1497e48ba(void)

void FUN_1497e48ba(longlong param_1,int param_2)

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



// FUNCTION 1497e4940 FUN_1497e4940 body=38 status=ok
// SIG undefined FUN_1497e4940(void)

undefined8 FUN_1497e4940(undefined8 param_1,int param_2)

{
  FUN_146036b52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e4966 FUN_1497e4966 body=48 status=ok
// SIG undefined FUN_1497e4966(void)

longlong FUN_1497e4966(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_146036b52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e499a FUN_1497e499a body=48 status=ok
// SIG undefined FUN_1497e499a(void)

longlong FUN_1497e499a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c8;
  FUN_146036b52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e49ca FUN_1497e49ca body=38 status=ok
// SIG undefined FUN_1497e49ca(void)

undefined8 FUN_1497e49ca(undefined8 param_1,int param_2)

{
  FUN_1415c3278();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e49f0 FUN_1497e49f0 body=60 status=ok
// SIG undefined FUN_1497e49f0(void)

void FUN_1497e49f0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2);
    *(longlong *)(param_1 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1497e4a2c FUN_1497e4a2c body=147 status=ok
// SIG undefined FUN_1497e4a2c(void)

void FUN_1497e4a2c(longlong param_1,int param_2)

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



// FUNCTION 1497e4ac0 FUN_1497e4ac0 body=48 status=ok
// SIG undefined FUN_1497e4ac0(void)

void FUN_1497e4ac0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1497e4af0 FUN_1497e4af0 body=106 status=ok
// SIG undefined FUN_1497e4af0(void)

void FUN_1497e4af0(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
  FUN_1417c9c76(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1497e4b5a FUN_1497e4b5a body=62 status=ok
// SIG undefined FUN_1497e4b5a(void)

void FUN_1497e4b5a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497e4b98(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1497e4b98 FUN_1497e4b98 body=112 status=ok
// SIG undefined FUN_1497e4b98(void)

ulonglong FUN_1497e4b98(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1497e4bd2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1497e4bd2:
  return param_2 & 0xffffffff;
}



// FUNCTION 1497e4c08 FUN_1497e4c08 body=89 status=ok
// SIG undefined FUN_1497e4c08(void)

void FUN_1497e4c08(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1497e4c62 FUN_1497e4c62 body=132 status=ok
// SIG undefined FUN_1497e4c62(void)

void FUN_1497e4c62(longlong param_1,int param_2)

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



// FUNCTION 1497e4ce8 FUN_1497e4ce8 body=132 status=ok
// SIG undefined FUN_1497e4ce8(void)

void FUN_1497e4ce8(longlong param_1,int param_2)

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



// FUNCTION 1497e4d6e FUN_1497e4d6e body=132 status=ok
// SIG undefined FUN_1497e4d6e(void)

void FUN_1497e4d6e(longlong param_1,int param_2)

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



// FUNCTION 1497e4df4 FUN_1497e4df4 body=285 status=ok
// SIG undefined FUN_1497e4df4(void)

void FUN_1497e4df4(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  uint local_28;
  uint uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  lStack_30 = 0;
  FUN_1446226ce(&local_38,param_1);
  uStack_24 = DAT_14c7590b0;
  local_28 = *(uint *)(*param_1 + 0x20);
  uVar3 = 0;
  do {
    uVar4 = (ulonglong)uVar3;
    uVar3 = uVar3 + 1;
  } while ((uint)(&DAT_14be7fbf8)[uVar4] < local_28);
  uVar3 = DAT_14c7590b0 % 3;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc26a40);
  lVar5 = uVar4 * 0x10 + (ulonglong)uVar3 * 0xa0;
  iVar2 = *(int *)(lVar5 + 0x14cc26b10);
  *(uint *)(lVar5 + 0x14cc26b10) = iVar2 + 1U;
  if (*(uint *)(lVar5 + 0x14cc26b14) < iVar2 + 1U) {
    FUN_1497e4a2c((longlong *)(lVar5 + 0x14cc26b08),iVar2);
  }
  plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x14cc26b08) + (longlong)iVar2 * 0x18);
  *plVar1 = local_38;
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  plVar1[1] = lStack_30;
  if (lStack_30 != 0) {
    LOCK();
    *(int *)(lStack_30 + 8) = *(int *)(lStack_30 + 8) + 1;
    UNLOCK();
  }
  plVar1[2] = CONCAT44(uStack_24,local_28);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc26a40);
  FUN_1417c9c76(&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e4f12 FUN_1497e4f12 body=229 status=ok
// SIG undefined FUN_1497e4f12(void)

undefined8 * FUN_1497e4f12(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = 0;
  do {
    uVar2 = (ulonglong)uVar1;
    uVar1 = uVar1 + 1;
  } while ((uint)(&DAT_14be7fbf8)[uVar2] < param_3);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc26a40);
  if ((int)(&DAT_14cc26a70)[uVar2 * 4] < 1) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc26a40);
    FUN_144620762(param_1,param_2,param_3);
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1497e4ffa(&DAT_14cc26a68 + uVar2 * 0x10,&local_48);
  *param_1 = local_48;
  local_48 = 0;
  param_1[1] = local_40;
  local_40 = 0;
  FUN_1417c9c76(&local_48);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc26a40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1497e4ffa FUN_1497e4ffa body=161 status=ok
// SIG undefined FUN_1497e4ffa(void)

undefined8 * FUN_1497e4ffa(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x18 + lVar3 * 0x18);
  *(undefined8 *)(lVar1 + -0x18 + lVar3 * 0x18) = 0;
  param_2[1] = *(undefined8 *)(lVar1 + -0x10 + lVar3 * 0x18);
  *(undefined8 *)(lVar1 + -0x10 + lVar3 * 0x18) = 0;
  param_2[2] = *(undefined8 *)(lVar1 + -8 + lVar3 * 0x18);
  iVar4 = (int)param_1[1];
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)iVar4 * 0x18 + -0x18);
  FUN_1417c9c76(_Dst);
  iVar2 = (int)param_1[1] - iVar4;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)iVar4 * 0x18),(longlong)iVar2 * 0x18);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  FUN_1497e4b5a(param_1);
  return param_2;
}



// FUNCTION 1497e509b FUN_1497e509b body=1327 status=ok
// SIG undefined FUN_1497e509b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1497e509b(float *param_1,longlong param_2,short *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float local_174;
  float local_170;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar6 = FUN_1497e095c(&local_1c8,param_1 + 0x3c,(int)*param_3);
  auVar13 = _DAT_149e1ef10;
  local_148 = local_1a8._0_4_;
  fStack_144 = local_1a8._4_4_;
  fStack_13c = local_1a8._12_4_;
  auVar16 = *(undefined1 (*) [16])(param_1 + 8);
  fVar1 = auVar16._0_4_;
  fVar2 = auVar16._4_4_;
  fVar3 = auVar16._8_4_;
  fVar4 = auVar16._12_4_;
  fStack_140 = local_1a8._8_4_;
  auVar16 = minps(local_1a8,auVar16);
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar34._4_4_ = -(uint)(auVar16._4_4_ < 0.0);
  auVar34._0_4_ = -(uint)(auVar16._0_4_ < 0.0);
  auVar34._8_4_ = -(uint)(auVar16._8_4_ < 0.0);
  auVar34._12_4_ = -(uint)(auVar16._12_4_ < 0.0);
  iVar7 = movmskps(uVar6,auVar34);
  if (iVar7 == 0) {
    fVar18 = *param_1;
    fVar26 = param_1[1];
    fVar19 = param_1[2];
    fVar28 = param_1[3];
    fVar17 = local_1b8._0_4_ * fVar1;
    fVar29 = local_1b8._4_4_ * fVar2;
    fVar31 = local_1b8._8_4_ * fVar3;
    fVar32 = local_1b8._12_4_ * fVar4;
    fVar21 = fVar29 * fVar18 - fVar17 * fVar26;
    fVar23 = fVar31 * fVar26 - fVar29 * fVar19;
    fVar24 = fVar17 * fVar19 - fVar31 * fVar18;
    fVar25 = fVar32 * fVar28 - fVar32 * fVar28;
    fVar21 = fVar21 + fVar21;
    fVar23 = fVar23 + fVar23;
    fVar24 = fVar24 + fVar24;
    fVar25 = fVar25 + fVar25;
    local_168._0_4_ =
         fVar19 * fStack_1c4 * -1.0 +
         fVar26 * fStack_1c0 * 1.0 + fVar18 * fStack_1bc * 1.0 + local_1c8 * fVar28;
    local_168._4_4_ =
         fVar19 * local_1c8 * 1.0 +
         fVar26 * fStack_1bc * 1.0 + fVar18 * fStack_1c0 * -1.0 + fStack_1c4 * fVar28;
    fStack_160 = fVar19 * fStack_1bc * 1.0 +
                 fVar26 * local_1c8 * -1.0 + fVar18 * fStack_1c4 * 1.0 + fStack_1c0 * fVar28;
    fStack_15c = fVar19 * fStack_1c0 * -1.0 +
                 fVar26 * fStack_1c4 * -1.0 + fVar18 * local_1c8 * -1.0 + fStack_1bc * fVar28;
    local_158._0_4_ = (fVar21 * fVar26 - fVar24 * fVar19) + fVar28 * fVar23 + fVar17 + param_1[4];
    local_158._4_4_ = (fVar23 * fVar19 - fVar21 * fVar18) + fVar28 * fVar24 + fVar29 + param_1[5];
    local_158._8_4_ = (fVar24 * fVar18 - fVar23 * fVar26) + fVar28 * fVar21 + fVar31 + param_1[6];
    local_158._12_4_ = (fVar25 * fVar28 - fVar25 * fVar28) + fVar28 * fVar25 + fVar32 + param_1[7];
  }
  else {
    fVar18 = *param_1;
    fVar26 = param_1[1];
    fVar19 = param_1[2];
    fVar28 = param_1[3];
    fVar29 = fVar18 + fVar18;
    fVar31 = fVar26 + fVar26;
    fVar32 = fVar19 + fVar19;
    fVar17 = fVar28 * (fVar28 + fVar28);
    auVar27._0_4_ = ((float)DAT_149e1ef10 - (fVar19 * fVar32 + fVar26 * fVar31)) * fVar1;
    auVar27._4_4_ = (DAT_149e1ef10._4_4_ - (fVar19 * fVar32 + fVar18 * fVar29)) * fVar2;
    auVar27._8_4_ = (DAT_149e1ef10._8_4_ - (fVar26 * fVar31 + fVar18 * fVar29)) * fVar3;
    auVar27._12_4_ = (DAT_149e1ef10._12_4_ - (fVar17 + fVar17)) * fVar4;
    fVar19 = (fVar31 * fVar18 + fVar32 * fVar28) * fVar1;
    auVar33._4_4_ = (fVar32 * fVar26 + fVar29 * fVar28) * fVar2;
    auVar33._0_4_ = fVar19;
    local_c8 = (fVar32 * fVar18 + fVar31 * fVar28) * fVar3;
    fStack_c4 = (fVar32 * fVar26 - fVar29 * fVar28) * fVar3;
    auVar16 = blendps(auVar27,auVar22,8);
    auVar33._8_4_ = local_c8;
    auVar33._12_4_ = (fVar29 * fVar18 + fVar29 * fVar28) * fVar4;
    local_e8._4_4_ = fVar19;
    local_e8._0_4_ = auVar27._0_4_;
    local_e8._8_4_ = (fVar32 * fVar18 - fVar31 * fVar28) * fVar1;
    local_e8._12_4_ = 0;
    auVar34 = insertps(auVar33,auVar33,0x4c);
    uStack_d0 = auVar34._0_4_;
    uStack_cc = auVar34._8_4_;
    uStack_c0 = auVar16._8_4_;
    uStack_bc = auVar16._12_4_;
    local_d8 = (undefined1 *)CONCAT44(auVar27._4_4_,(fVar31 * fVar18 - fVar32 * fVar28) * fVar2);
    auVar14._0_12_ = ZEXT812(0x3f800000);
    auVar14._12_4_ = 0;
    local_b8 = insertps(*(undefined1 (*) [16])(param_1 + 4),auVar14,0x30);
    fVar26 = local_1c8 + local_1c8;
    fVar19 = fStack_1c4 + fStack_1c4;
    fVar28 = fStack_1c0 + fStack_1c0;
    fVar18 = fStack_1bc * (fStack_1bc + fStack_1bc);
    auVar20._0_4_ = ((float)DAT_149e1ef10 - (fStack_1c0 * fVar28 + fStack_1c4 * fVar19)) * local_148
    ;
    auVar20._4_4_ = (DAT_149e1ef10._4_4_ - (fStack_1c0 * fVar28 + local_1c8 * fVar26)) * fStack_144;
    auVar20._8_4_ = (DAT_149e1ef10._8_4_ - (fStack_1c4 * fVar19 + local_1c8 * fVar26)) * fStack_140;
    auVar20._12_4_ = (DAT_149e1ef10._12_4_ - (fVar18 + fVar18)) * fStack_13c;
    fVar18 = (fVar19 * local_1c8 + fVar28 * fStack_1bc) * local_148;
    auVar30._4_4_ = (fVar28 * fStack_1c4 + fVar26 * fStack_1bc) * fStack_144;
    auVar30._0_4_ = fVar18;
    local_108 = (fVar28 * local_1c8 + fVar19 * fStack_1bc) * fStack_140;
    local_118 = (fVar19 * local_1c8 - fVar28 * fStack_1bc) * fStack_144;
    fStack_104 = (fVar28 * fStack_1c4 - fVar26 * fStack_1bc) * fStack_140;
    auVar16 = blendps(auVar20,auVar22,8);
    auVar30._8_4_ = local_108;
    auVar30._12_4_ = (fVar26 * local_1c8 + fVar26 * fStack_1bc) * fStack_13c;
    local_128._4_4_ = fVar18;
    local_128._0_4_ = auVar20._0_4_;
    local_128._8_4_ = (fVar28 * local_1c8 - fVar19 * fStack_1bc) * local_148;
    local_128._12_4_ = 0;
    auVar34 = insertps(auVar30,auVar30,0x4c);
    uStack_110 = auVar34._0_4_;
    uStack_10c = auVar34._8_4_;
    uStack_100 = auVar16._8_4_;
    uStack_fc = auVar16._12_4_;
    local_f8 = insertps(local_1b8,auVar14,0x30);
    fStack_114 = auVar20._4_4_;
    FUN_144afeb32(&local_188);
    FUN_144afd82e(&local_188);
    auVar16 = _local_168;
    auVar12._4_4_ = -(uint)(0.0 <= fStack_144 * fVar2);
    auVar12._0_4_ = -(uint)(0.0 <= local_148 * fVar1);
    auVar12._8_4_ = -(uint)(0.0 <= fStack_140 * fVar3);
    auVar12._12_4_ = -(uint)(0.0 <= fStack_13c * fVar4);
    auVar13 = blendvps(_DAT_149f63320,auVar13,auVar12);
    fVar18 = auVar13._0_4_;
    fVar26 = auVar13._4_4_;
    local_188 = CONCAT44(local_188._4_4_ * fVar18,(float)local_188 * fVar18);
    uStack_180 = CONCAT44(uStack_180._4_4_,(float)uStack_180 * fVar18);
    local_170 = local_170 * fVar26;
    local_174 = local_174 * fVar26;
    local_178 = fVar26 * local_178;
    fVar18 = auVar13._8_4_;
    local_168._4_4_ = (float)local_168._4_4_ * fVar18;
    local_168._0_4_ = fVar18 * (float)local_168._0_4_;
    fStack_15c = auVar16._12_4_;
    fStack_160 = fStack_160 * fVar18;
    FUN_14066c2ac(&local_198,&local_188);
    fVar18 = local_198 * local_198 + fStack_194 * fStack_194;
    fVar26 = fStack_190 * fStack_190 + fStack_18c * fStack_18c;
    auVar13._0_4_ = fVar26 + fVar18;
    auVar13._4_4_ = fVar26 + fVar18;
    auVar13._8_4_ = fVar18 + fVar26;
    auVar13._12_4_ = fVar18 + fVar26;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar13._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar13._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar13._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar13._12_4_);
    auVar13 = sqrtps(auVar13,auVar13);
    auVar13 = divps(_DAT_1499314a0,auVar13);
    auVar15._0_4_ = auVar13._0_4_ * local_198;
    auVar15._4_4_ = auVar13._4_4_ * fStack_194;
    auVar15._8_4_ = auVar13._8_4_ * fStack_190;
    auVar15._12_4_ = auVar13._12_4_ * fStack_18c;
    _local_168 = blendvps(_DAT_149932320,auVar15,auVar16);
    local_158 = blendps(auVar22,local_158,7);
  }
  fStack_144 = fStack_144 * fVar2;
  local_148 = local_148 * fVar1;
  fStack_13c = fStack_13c * fVar4;
  fStack_140 = fStack_140 * fVar3;
  local_178 = *(float *)(param_3 + 8);
  local_188 = *(undefined8 *)param_3;
  uStack_180 = *(undefined8 *)(param_3 + 4);
  local_138 = DAT_14c846330;
  local_130 = DAT_14c846338;
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_128._1_15_;
  local_128 = auVar5 << 8;
  if ((longlong)(int)param_4[1] == 0) {
    uVar9 = 0;
  }
  else {
    lVar10 = *param_4;
    lVar11 = (longlong)(int)param_4[1] << 3;
    do {
      local_e8._8_8_ = param_1;
      local_e8._0_8_ = &local_188;
      local_d8 = local_128;
      uVar8 = FUN_1497e55cc(param_2 + 0xb8,lVar10,local_e8);
      lVar10 = lVar10 + 8;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
    uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),local_128[0]);
  }
  if ((local_a0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar9 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e55cc FUN_1497e55cc body=45 status=ok
// SIG undefined FUN_1497e55cc(void)

void FUN_1497e55cc(longlong param_1,char *param_2,undefined8 param_3)

{
  if (*param_2 == '\0') {
    FUN_1497e56aa(param_1,param_3,*(undefined4 *)(param_2 + 4));
    return;
  }
  if (*param_2 != '\x01') {
    return;
  }
  FUN_1497e55fa(param_1 + 0x70,param_3,*(undefined4 *)(param_2 + 4));
  return;
}



// FUNCTION 1497e55fa FUN_1497e55fa body=174 status=ok
// SIG undefined FUN_1497e55fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497e55fa(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pbVar3 = (byte *)param_2[2];
  lVar5 = (longlong)param_3;
  puVar1 = (undefined8 *)(*param_1 + lVar5 * 0x20);
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  puVar2 = (undefined4 *)(*param_1 + 0x10 + lVar5 * 0x20);
  local_68 = *puVar2;
  uStack_64 = puVar2[1];
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  local_58 = _DAT_14c846060;
  uStack_50 = uRam000000014c846068;
  local_48 = _DAT_14c846070;
  uStack_40 = uRam000000014c846078;
  local_38 = _DAT_14c846080;
  uStack_34 = uRam000000014c846084;
  uStack_30 = uRam000000014c846088;
  uStack_2c = uRam000000014c84608c;
  local_28 = *(undefined8 *)(param_1[7] + lVar5 * 0xc);
  local_20 = *(undefined4 *)(param_1[7] + 8 + lVar5 * 0xc);
  bVar4 = FUN_1497e5759(*param_2,&local_78,param_2[1]);
  *pbVar3 = *pbVar3 | bVar4;
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e56aa FUN_1497e56aa body=174 status=ok
// SIG undefined FUN_1497e56aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497e56aa(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pbVar2 = (byte *)param_2[2];
  lVar4 = (longlong)param_3;
  local_68 = *(undefined4 *)(*param_1 + 0x10 + lVar4 * 0x14);
  puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  local_58 = _DAT_14c846060;
  uStack_50 = uRam000000014c846068;
  local_48 = _DAT_14c846070;
  uStack_40 = uRam000000014c846078;
  local_38 = _DAT_14c846080;
  uStack_34 = uRam000000014c846084;
  uStack_30 = uRam000000014c846088;
  uStack_2c = uRam000000014c84608c;
  local_28 = *(undefined8 *)(param_1[7] + lVar4 * 0xc);
  local_20 = *(undefined4 *)(param_1[7] + 8 + lVar4 * 0xc);
  bVar3 = FUN_1497e599d(*param_2,&local_78,param_2[1]);
  *pbVar2 = *pbVar2 | bVar3;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e5759 FUN_1497e5759 body=579 status=ok
// SIG undefined FUN_1497e5759(void)

ulonglong FUN_1497e5759(short *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  char *local_88;
  float local_78;
  float local_74;
  float local_70;
  char local_69;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  auVar14 = blendps(ZEXT816(0),*(undefined1 (*) [16])(param_1 + 2),7);
  fVar12 = auVar14._0_4_ * *(float *)(param_1 + 0x20);
  fVar15 = auVar14._4_4_ * *(float *)(param_1 + 0x22);
  fVar16 = auVar14._8_4_ * *(float *)(param_1 + 0x24);
  fVar17 = auVar14._12_4_ * *(float *)(param_1 + 0x26);
  fVar13 = *(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x12);
  fVar9 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x16);
  fVar7 = fVar15 * fVar13 - fVar1 * fVar12;
  fVar8 = fVar16 * fVar1 - fVar9 * fVar15;
  fVar10 = fVar12 * fVar9 - fVar13 * fVar16;
  fVar11 = fVar17 * fVar5 - fVar5 * fVar17;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = (fVar7 * fVar1 - fVar10 * fVar9) + fVar5 * fVar8 + fVar12 + *(float *)(param_1 + 0x18);
  fVar9 = (fVar8 * fVar9 - fVar7 * fVar13) + fVar5 * fVar10 + fVar15 + *(float *)(param_1 + 0x1a);
  local_48 = CONCAT44(fVar9,fVar12);
  auVar14._4_4_ = fVar9;
  auVar14._0_4_ = fVar12;
  auVar14._8_4_ =
       (fVar10 * fVar13 - fVar8 * fVar1) + fVar5 * fVar7 + fVar16 + *(float *)(param_1 + 0x1c);
  auVar14._12_4_ =
       (fVar11 * fVar5 - fVar11 * fVar5) + fVar5 * fVar11 + fVar17 + *(float *)(param_1 + 0x1e);
  local_40 = extractps(auVar14,2);
  local_69 = '\0';
  local_50 = *(undefined4 *)(param_2 + 0x18);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_68 = *(undefined8 *)(param_2 + 4);
  local_60 = *(undefined4 *)(param_2 + 0xc);
  local_90 = (undefined8 *)CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 8));
  local_98 = &local_48;
  local_88 = &local_69;
  FUN_1497da37e(&local_78,&local_68,&local_58,*(undefined4 *)(param_2 + 0x1c));
  uVar6 = CONCAT71((int7)((ulonglong)&local_69 >> 8),local_69);
  if (local_69 == '\x01') {
    pfVar3 = *(float **)(param_3 + 0x68);
    if (*param_1 == 0) {
      fVar13 = pfVar3[6];
    }
    else {
      fVar13 = 1.0;
    }
    fVar1 = *pfVar3;
    fVar9 = pfVar3[1];
    local_48 = CONCAT44((*(float *)(param_2 + 0x54) * fVar9 +
                        (local_74 - (*(float *)(param_2 + 8) + *(float *)(param_2 + 0x14)) * 0.5) *
                        fVar1) * fVar13,
                        (fVar9 * *(float *)(param_2 + 0x50) +
                        (local_78 - (*(float *)(param_2 + 4) + *(float *)(param_2 + 0x10)) * 0.5) *
                        fVar1) * fVar13);
    local_40 = CONCAT44(local_40._4_4_,
                        (*(float *)(param_2 + 0x58) * fVar9 +
                        (local_70 - (*(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x18)) * 0.5)
                        * fVar1) * fVar13);
    local_50 = *(undefined4 *)(param_1 + 6);
    local_58 = *(undefined8 *)(param_1 + 2);
    local_98 = &local_58;
    local_90 = &local_48;
    FUN_1497e0eb8(&local_68,param_3 + 0xf0,param_3,param_1);
    sVar2 = *param_1;
    lVar4 = *(longlong *)(param_3 + 0xb0);
    *(undefined4 *)(lVar4 + 8 + (longlong)sVar2 * 0xc) = local_60;
    *(undefined8 *)(lVar4 + (longlong)sVar2 * 0xc) = local_68;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e599d FUN_1497e599d body=500 status=ok
// SIG undefined FUN_1497e599d(void)

ulonglong FUN_1497e599d(short *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  char *local_90;
  undefined8 local_7c;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  char local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  auVar14 = blendps(ZEXT816(0),*(undefined1 (*) [16])(param_1 + 2),7);
  fVar12 = auVar14._0_4_ * *(float *)(param_1 + 0x20);
  fVar15 = auVar14._4_4_ * *(float *)(param_1 + 0x22);
  fVar16 = auVar14._8_4_ * *(float *)(param_1 + 0x24);
  fVar17 = auVar14._12_4_ * *(float *)(param_1 + 0x26);
  fVar13 = *(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x12);
  fVar9 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 0x16);
  fVar7 = fVar15 * fVar13 - fVar1 * fVar12;
  fVar8 = fVar16 * fVar1 - fVar9 * fVar15;
  fVar10 = fVar12 * fVar9 - fVar13 * fVar16;
  fVar11 = fVar17 * fVar5 - fVar5 * fVar17;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  fVar12 = (fVar7 * fVar1 - fVar10 * fVar9) + fVar5 * fVar8 + fVar12 + *(float *)(param_1 + 0x18);
  fVar9 = (fVar8 * fVar9 - fVar7 * fVar13) + fVar5 * fVar10 + fVar15 + *(float *)(param_1 + 0x1a);
  local_90 = &local_61;
  local_61 = '\0';
  local_48 = *(float *)(param_2 + 0xc);
  local_50 = *(undefined8 *)(param_2 + 4);
  local_60 = CONCAT44(fVar9,fVar12);
  auVar14._4_4_ = fVar9;
  auVar14._0_4_ = fVar12;
  auVar14._8_4_ =
       (fVar10 * fVar13 - fVar8 * fVar1) + fVar5 * fVar7 + fVar16 + *(float *)(param_1 + 0x1c);
  auVar14._12_4_ =
       (fVar11 * fVar5 - fVar11 * fVar5) + fVar5 * fVar11 + fVar17 + *(float *)(param_1 + 0x1e);
  local_58 = extractps(auVar14,2);
  local_98 = (undefined8 *)CONCAT44(local_98._4_4_,*(undefined4 *)(param_2 + 0x10));
  FUN_1497da9fe(&local_70,&local_60,*(undefined4 *)(param_1 + 8),&local_50);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_61);
  if (local_61 == '\x01') {
    pfVar3 = *(float **)(param_3 + 0x68);
    if (*param_1 == 0) {
      fVar13 = pfVar3[6];
    }
    else {
      fVar13 = 1.0;
    }
    fVar1 = *pfVar3;
    fVar9 = pfVar3[1];
    local_48 = (*(float *)(param_2 + 0x58) * fVar9 + (local_68 - *(float *)(param_2 + 0xc)) * fVar1)
               * fVar13;
    local_50 = CONCAT44((*(float *)(param_2 + 0x54) * fVar9 +
                        (local_6c - *(float *)(param_2 + 8)) * fVar1) * fVar13,
                        (fVar9 * *(float *)(param_2 + 0x50) +
                        (local_70 - *(float *)(param_2 + 4)) * fVar1) * fVar13);
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 6));
    local_60 = *(undefined8 *)(param_1 + 2);
    local_98 = &local_60;
    local_90 = (char *)&local_50;
    FUN_1497e0eb8(&local_7c,param_3 + 0xf0,param_3,param_1);
    sVar2 = *param_1;
    lVar4 = *(longlong *)(param_3 + 0xb0);
    *(undefined4 *)(lVar4 + 8 + (longlong)sVar2 * 0xc) = local_74;
    *(undefined8 *)(lVar4 + (longlong)sVar2 * 0xc) = local_7c;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e5b92 FUN_1497e5b92 body=1329 status=ok
// SIG undefined FUN_1497e5b92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1497e5b92(float *param_1,longlong param_2,short *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_1e8 [32];
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar6 = FUN_1497e095c(&local_1c8,param_1 + 0x3c,(int)*param_3);
  auVar13 = _DAT_149e1ef10;
  local_148 = local_1a8._0_4_;
  fStack_144 = local_1a8._4_4_;
  fStack_13c = local_1a8._12_4_;
  auVar16 = *(undefined1 (*) [16])(param_1 + 8);
  fVar1 = auVar16._0_4_;
  fVar2 = auVar16._4_4_;
  fVar3 = auVar16._8_4_;
  fVar4 = auVar16._12_4_;
  fStack_140 = local_1a8._8_4_;
  auVar16 = minps(local_1a8,auVar16);
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar34._4_4_ = -(uint)(auVar16._4_4_ < 0.0);
  auVar34._0_4_ = -(uint)(auVar16._0_4_ < 0.0);
  auVar34._8_4_ = -(uint)(auVar16._8_4_ < 0.0);
  auVar34._12_4_ = -(uint)(auVar16._12_4_ < 0.0);
  iVar7 = movmskps(uVar6,auVar34);
  if (iVar7 == 0) {
    fVar18 = *param_1;
    fVar26 = param_1[1];
    fVar19 = param_1[2];
    fVar28 = param_1[3];
    fVar17 = local_1b8._0_4_ * fVar1;
    fVar29 = local_1b8._4_4_ * fVar2;
    fVar31 = local_1b8._8_4_ * fVar3;
    fVar32 = local_1b8._12_4_ * fVar4;
    fVar21 = fVar29 * fVar18 - fVar17 * fVar26;
    fVar23 = fVar31 * fVar26 - fVar29 * fVar19;
    fVar24 = fVar17 * fVar19 - fVar31 * fVar18;
    fVar25 = fVar32 * fVar28 - fVar32 * fVar28;
    fVar21 = fVar21 + fVar21;
    fVar23 = fVar23 + fVar23;
    fVar24 = fVar24 + fVar24;
    fVar25 = fVar25 + fVar25;
    local_168._0_4_ =
         fVar19 * fStack_1c4 * -1.0 +
         fVar26 * fStack_1c0 * 1.0 + fVar18 * fStack_1bc * 1.0 + local_1c8 * fVar28;
    local_168._4_4_ =
         fVar19 * local_1c8 * 1.0 +
         fVar26 * fStack_1bc * 1.0 + fVar18 * fStack_1c0 * -1.0 + fStack_1c4 * fVar28;
    fStack_160 = fVar19 * fStack_1bc * 1.0 +
                 fVar26 * local_1c8 * -1.0 + fVar18 * fStack_1c4 * 1.0 + fStack_1c0 * fVar28;
    fStack_15c = fVar19 * fStack_1c0 * -1.0 +
                 fVar26 * fStack_1c4 * -1.0 + fVar18 * local_1c8 * -1.0 + fStack_1bc * fVar28;
    local_158._0_4_ = (fVar21 * fVar26 - fVar24 * fVar19) + fVar28 * fVar23 + fVar17 + param_1[4];
    local_158._4_4_ = (fVar23 * fVar19 - fVar21 * fVar18) + fVar28 * fVar24 + fVar29 + param_1[5];
    local_158._8_4_ = (fVar24 * fVar18 - fVar23 * fVar26) + fVar28 * fVar21 + fVar31 + param_1[6];
    local_158._12_4_ = (fVar25 * fVar28 - fVar25 * fVar28) + fVar28 * fVar25 + fVar32 + param_1[7];
  }
  else {
    fVar18 = *param_1;
    fVar26 = param_1[1];
    fVar19 = param_1[2];
    fVar28 = param_1[3];
    fVar29 = fVar18 + fVar18;
    fVar31 = fVar26 + fVar26;
    fVar32 = fVar19 + fVar19;
    fVar17 = fVar28 * (fVar28 + fVar28);
    auVar27._0_4_ = ((float)DAT_149e1ef10 - (fVar19 * fVar32 + fVar26 * fVar31)) * fVar1;
    auVar27._4_4_ = (DAT_149e1ef10._4_4_ - (fVar19 * fVar32 + fVar18 * fVar29)) * fVar2;
    auVar27._8_4_ = (DAT_149e1ef10._8_4_ - (fVar26 * fVar31 + fVar18 * fVar29)) * fVar3;
    auVar27._12_4_ = (DAT_149e1ef10._12_4_ - (fVar17 + fVar17)) * fVar4;
    fVar19 = (fVar31 * fVar18 + fVar32 * fVar28) * fVar1;
    auVar33._4_4_ = (fVar32 * fVar26 + fVar29 * fVar28) * fVar2;
    auVar33._0_4_ = fVar19;
    local_c8 = (fVar32 * fVar18 + fVar31 * fVar28) * fVar3;
    fStack_c4 = (fVar32 * fVar26 - fVar29 * fVar28) * fVar3;
    auVar16 = blendps(auVar27,auVar22,8);
    auVar33._8_4_ = local_c8;
    auVar33._12_4_ = (fVar29 * fVar18 + fVar29 * fVar28) * fVar4;
    local_e8._4_4_ = fVar19;
    local_e8._0_4_ = auVar27._0_4_;
    local_e8._8_4_ = (fVar32 * fVar18 - fVar31 * fVar28) * fVar1;
    local_e8._12_4_ = 0;
    auVar34 = insertps(auVar33,auVar33,0x4c);
    uStack_d0 = auVar34._0_4_;
    uStack_cc = auVar34._8_4_;
    uStack_c0 = auVar16._8_4_;
    uStack_bc = auVar16._12_4_;
    local_d8 = (undefined1 *)CONCAT44(auVar27._4_4_,(fVar31 * fVar18 - fVar32 * fVar28) * fVar2);
    auVar14._0_12_ = ZEXT812(0x3f800000);
    auVar14._12_4_ = 0;
    local_b8 = insertps(*(undefined1 (*) [16])(param_1 + 4),auVar14,0x30);
    fVar26 = local_1c8 + local_1c8;
    fVar19 = fStack_1c4 + fStack_1c4;
    fVar28 = fStack_1c0 + fStack_1c0;
    fVar18 = fStack_1bc * (fStack_1bc + fStack_1bc);
    auVar20._0_4_ = ((float)DAT_149e1ef10 - (fStack_1c0 * fVar28 + fStack_1c4 * fVar19)) * local_148
    ;
    auVar20._4_4_ = (DAT_149e1ef10._4_4_ - (fStack_1c0 * fVar28 + local_1c8 * fVar26)) * fStack_144;
    auVar20._8_4_ = (DAT_149e1ef10._8_4_ - (fStack_1c4 * fVar19 + local_1c8 * fVar26)) * fStack_140;
    auVar20._12_4_ = (DAT_149e1ef10._12_4_ - (fVar18 + fVar18)) * fStack_13c;
    fVar18 = (fVar19 * local_1c8 + fVar28 * fStack_1bc) * local_148;
    auVar30._4_4_ = (fVar28 * fStack_1c4 + fVar26 * fStack_1bc) * fStack_144;
    auVar30._0_4_ = fVar18;
    local_108 = (fVar28 * local_1c8 + fVar19 * fStack_1bc) * fStack_140;
    local_118 = (fVar19 * local_1c8 - fVar28 * fStack_1bc) * fStack_144;
    fStack_104 = (fVar28 * fStack_1c4 - fVar26 * fStack_1bc) * fStack_140;
    auVar16 = blendps(auVar20,auVar22,8);
    auVar30._8_4_ = local_108;
    auVar30._12_4_ = (fVar26 * local_1c8 + fVar26 * fStack_1bc) * fStack_13c;
    local_128._4_4_ = fVar18;
    local_128._0_4_ = auVar20._0_4_;
    local_128._8_4_ = (fVar28 * local_1c8 - fVar19 * fStack_1bc) * local_148;
    local_128._12_4_ = 0;
    auVar34 = insertps(auVar30,auVar30,0x4c);
    uStack_110 = auVar34._0_4_;
    uStack_10c = auVar34._8_4_;
    uStack_100 = auVar16._8_4_;
    uStack_fc = auVar16._12_4_;
    local_f8 = insertps(local_1b8,auVar14,0x30);
    fStack_114 = auVar20._4_4_;
    FUN_144afeb32(&local_188);
    FUN_144afd82e(&local_188);
    auVar16 = _local_168;
    auVar12._4_4_ = -(uint)(0.0 <= fStack_144 * fVar2);
    auVar12._0_4_ = -(uint)(0.0 <= local_148 * fVar1);
    auVar12._8_4_ = -(uint)(0.0 <= fStack_140 * fVar3);
    auVar12._12_4_ = -(uint)(0.0 <= fStack_13c * fVar4);
    auVar13 = blendvps(_DAT_149f63320,auVar13,auVar12);
    fVar18 = auVar13._0_4_;
    fVar26 = auVar13._4_4_;
    local_188 = CONCAT44(local_188._4_4_ * fVar18,(float)local_188 * fVar18);
    uStack_180 = CONCAT44(uStack_180._4_4_,(float)uStack_180 * fVar18);
    local_178 = CONCAT44(local_178._4_4_ * fVar26,fVar26 * (float)local_178);
    uStack_170 = CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar26);
    fVar18 = auVar13._8_4_;
    local_168._4_4_ = (float)local_168._4_4_ * fVar18;
    local_168._0_4_ = fVar18 * (float)local_168._0_4_;
    fStack_15c = auVar16._12_4_;
    fStack_160 = fStack_160 * fVar18;
    FUN_14066c2ac(&local_198,&local_188);
    fVar18 = local_198 * local_198 + fStack_194 * fStack_194;
    fVar26 = fStack_190 * fStack_190 + fStack_18c * fStack_18c;
    auVar13._0_4_ = fVar26 + fVar18;
    auVar13._4_4_ = fVar26 + fVar18;
    auVar13._8_4_ = fVar18 + fVar26;
    auVar13._12_4_ = fVar18 + fVar26;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar13._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar13._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar13._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar13._12_4_);
    auVar13 = sqrtps(auVar13,auVar13);
    auVar13 = divps(_DAT_1499314a0,auVar13);
    auVar15._0_4_ = auVar13._0_4_ * local_198;
    auVar15._4_4_ = auVar13._4_4_ * fStack_194;
    auVar15._8_4_ = auVar13._8_4_ * fStack_190;
    auVar15._12_4_ = auVar13._12_4_ * fStack_18c;
    _local_168 = blendvps(_DAT_149932320,auVar15,auVar16);
    local_158 = blendps(auVar22,local_158,7);
  }
  fStack_144 = fStack_144 * fVar2;
  local_148 = local_148 * fVar1;
  fStack_13c = fStack_13c * fVar4;
  fStack_140 = fStack_140 * fVar3;
  local_188 = *(undefined8 *)param_3;
  uStack_180 = *(undefined8 *)(param_3 + 4);
  local_178 = *(undefined8 *)(param_3 + 8);
  uStack_170 = *(undefined8 *)(param_3 + 0xc);
  local_138 = DAT_14c846330;
  local_130 = DAT_14c846338;
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_128._1_15_;
  local_128 = auVar5 << 8;
  if ((longlong)(int)param_4[1] == 0) {
    uVar9 = 0;
  }
  else {
    lVar10 = *param_4;
    lVar11 = (longlong)(int)param_4[1] << 3;
    do {
      local_e8._8_8_ = param_1;
      local_e8._0_8_ = &local_188;
      local_d8 = local_128;
      uVar8 = FUN_1497e60c4(param_2 + 0xb8,lVar10,local_e8);
      lVar10 = lVar10 + 8;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
    uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),local_128[0]);
  }
  if ((local_a0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar9 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e60c4 FUN_1497e60c4 body=45 status=ok
// SIG undefined FUN_1497e60c4(void)

void FUN_1497e60c4(longlong param_1,char *param_2,undefined8 param_3)

{
  if (*param_2 == '\0') {
    FUN_1497e61a2(param_1,param_3,*(undefined4 *)(param_2 + 4));
    return;
  }
  if (*param_2 != '\x01') {
    return;
  }
  FUN_1497e60f2(param_1 + 0x70,param_3,*(undefined4 *)(param_2 + 4));
  return;
}



// FUNCTION 1497e60f2 FUN_1497e60f2 body=174 status=ok
// SIG undefined FUN_1497e60f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497e60f2(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pbVar3 = (byte *)param_2[2];
  lVar5 = (longlong)param_3;
  puVar1 = (undefined8 *)(*param_1 + lVar5 * 0x20);
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  puVar2 = (undefined4 *)(*param_1 + 0x10 + lVar5 * 0x20);
  local_68 = *puVar2;
  uStack_64 = puVar2[1];
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  local_58 = _DAT_14c846060;
  uStack_50 = uRam000000014c846068;
  local_48 = _DAT_14c846070;
  uStack_40 = uRam000000014c846078;
  local_38 = _DAT_14c846080;
  uStack_34 = uRam000000014c846084;
  uStack_30 = uRam000000014c846088;
  uStack_2c = uRam000000014c84608c;
  local_28 = *(undefined8 *)(param_1[7] + lVar5 * 0xc);
  local_20 = *(undefined4 *)(param_1[7] + 8 + lVar5 * 0xc);
  bVar4 = FUN_1497e6251(*param_2,&local_78,param_2[1]);
  *pbVar3 = *pbVar3 | bVar4;
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e61a2 FUN_1497e61a2 body=174 status=ok
// SIG undefined FUN_1497e61a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497e61a2(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pbVar2 = (byte *)param_2[2];
  lVar4 = (longlong)param_3;
  local_68 = *(undefined4 *)(*param_1 + 0x10 + lVar4 * 0x14);
  puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  local_58 = _DAT_14c846060;
  uStack_50 = uRam000000014c846068;
  local_48 = _DAT_14c846070;
  uStack_40 = uRam000000014c846078;
  local_38 = _DAT_14c846080;
  uStack_34 = uRam000000014c846084;
  uStack_30 = uRam000000014c846088;
  uStack_2c = uRam000000014c84608c;
  local_28 = *(undefined8 *)(param_1[7] + lVar4 * 0xc);
  local_20 = *(undefined4 *)(param_1[7] + 8 + lVar4 * 0xc);
  bVar3 = FUN_1497e655c(*param_2,&local_78,param_2[1]);
  *pbVar2 = *pbVar2 | bVar3;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e6251 FUN_1497e6251 body=778 status=ok
// SIG undefined FUN_1497e6251(void)

ulonglong FUN_1497e6251(short *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  char *local_d0;
  float local_c0;
  float local_bc;
  float local_b8;
  char local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  auVar18 = blendps(*(undefined1 (*) [16])(param_1 + 2),ZEXT816(0),8);
  fVar16 = auVar18._0_4_ * *(float *)(param_1 + 0x20);
  fVar19 = auVar18._4_4_ * *(float *)(param_1 + 0x22);
  fVar20 = auVar18._8_4_ * *(float *)(param_1 + 0x24);
  fVar21 = auVar18._12_4_ * *(float *)(param_1 + 0x26);
  fVar17 = *(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x12);
  fVar24 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x16);
  fVar8 = fVar19 * fVar17 - fVar1 * fVar16;
  fVar9 = fVar20 * fVar1 - fVar24 * fVar19;
  fVar10 = fVar16 * fVar24 - fVar17 * fVar20;
  fVar11 = fVar21 * fVar6 - fVar6 * fVar21;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  auVar18 = blendps(ZEXT816(0),*(undefined1 (*) [16])(param_1 + 8),7);
  fVar12 = auVar18._0_4_ * *(float *)(param_1 + 0x20);
  fVar13 = auVar18._4_4_ * *(float *)(param_1 + 0x22);
  fVar14 = auVar18._8_4_ * *(float *)(param_1 + 0x24);
  fVar15 = auVar18._12_4_ * *(float *)(param_1 + 0x26);
  fVar22 = fVar13 * fVar17 - fVar1 * fVar12;
  fVar23 = fVar14 * fVar1 - fVar24 * fVar13;
  fVar25 = fVar12 * fVar24 - fVar17 * fVar14;
  fVar26 = fVar15 * fVar6 - fVar6 * fVar15;
  fVar22 = fVar22 + fVar22;
  fVar23 = fVar23 + fVar23;
  fVar25 = fVar25 + fVar25;
  fVar26 = fVar26 + fVar26;
  fVar16 = (fVar8 * fVar1 - fVar10 * fVar24) + fVar6 * fVar9 + fVar16 + *(float *)(param_1 + 0x18);
  fVar19 = (fVar9 * fVar24 - fVar8 * fVar17) + fVar6 * fVar10 + fVar19 + *(float *)(param_1 + 0x1a);
  fVar12 = (fVar22 * fVar1 - fVar25 * fVar24) + fVar6 * fVar23 + fVar12 + *(float *)(param_1 + 0x18)
  ;
  fVar24 = (fVar23 * fVar24 - fVar22 * fVar17) + fVar6 * fVar25 + fVar13 +
           *(float *)(param_1 + 0x1a);
  local_d0 = &local_b1;
  local_b1 = '\0';
  local_d8 = *(undefined4 *)(param_2 + 0x1c);
  local_78 = *(float *)(param_2 + 0x18);
  local_80 = *(undefined8 *)(param_2 + 0x10);
  local_88 = *(float *)(param_2 + 0xc);
  local_90 = *(undefined8 *)(param_2 + 4);
  local_a0 = CONCAT44(fVar24,fVar12);
  auVar5._4_4_ = fVar24;
  auVar5._0_4_ = fVar12;
  auVar5._8_4_ = (fVar25 * fVar17 - fVar23 * fVar1) + fVar6 * fVar22 + fVar14 +
                 *(float *)(param_1 + 0x1c);
  auVar5._12_4_ =
       (fVar26 * fVar6 - fVar26 * fVar6) + fVar6 * fVar26 + fVar15 + *(float *)(param_1 + 0x1e);
  local_98 = extractps(auVar5,2);
  local_b0 = CONCAT44(fVar19,fVar16);
  auVar18._4_4_ = fVar19;
  auVar18._0_4_ = fVar16;
  auVar18._8_4_ =
       (fVar10 * fVar17 - fVar9 * fVar1) + fVar6 * fVar8 + fVar20 + *(float *)(param_1 + 0x1c);
  auVar18._12_4_ =
       (fVar11 * fVar6 - fVar11 * fVar6) + fVar6 * fVar11 + fVar21 + *(float *)(param_1 + 0x1e);
  local_a8 = extractps(auVar18,2);
  local_e8 = &local_90;
  local_e0 = &local_80;
  FUN_1497da52d(&local_c0,&local_b0,&local_a0,*(undefined4 *)(param_1 + 0xe));
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_b1);
  if (local_b1 == '\x01') {
    pfVar3 = *(float **)(param_3 + 0x68);
    if (*param_1 == 0) {
      fVar17 = pfVar3[6];
    }
    else {
      fVar17 = 1.0;
    }
    fVar1 = *pfVar3;
    fVar24 = pfVar3[1];
    local_78 = (*(float *)(param_2 + 0x58) * fVar24 +
               (local_b8 - (*(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x18)) * 0.5) * fVar1)
               * fVar17;
    local_80 = CONCAT44((*(float *)(param_2 + 0x54) * fVar24 +
                        (local_bc - (*(float *)(param_2 + 8) + *(float *)(param_2 + 0x14)) * 0.5) *
                        fVar1) * fVar17,
                        (fVar24 * *(float *)(param_2 + 0x50) +
                        (local_c0 - (*(float *)(param_2 + 4) + *(float *)(param_2 + 0x10)) * 0.5) *
                        fVar1) * fVar17);
    local_88 = (*(float *)(param_1 + 6) + *(float *)(param_1 + 0xc)) * 0.5;
    local_90 = CONCAT44((*(float *)(param_1 + 4) + *(float *)(param_1 + 10)) * 0.5,
                        (*(float *)(param_1 + 2) + *(float *)(param_1 + 8)) * 0.5);
    local_e8 = &local_90;
    local_e0 = &local_80;
    FUN_1497e0eb8(&local_a0,param_3 + 0xf0,param_3,param_1);
    sVar2 = *param_1;
    lVar4 = *(longlong *)(param_3 + 0xb0);
    *(undefined4 *)(lVar4 + 8 + (longlong)sVar2 * 0xc) = (undefined4)local_98;
    *(undefined8 *)(lVar4 + (longlong)sVar2 * 0xc) = local_a0;
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e655c FUN_1497e655c body=697 status=ok
// SIG undefined FUN_1497e655c(void)

ulonglong FUN_1497e655c(short *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  char *local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  char local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  auVar18 = blendps(*(undefined1 (*) [16])(param_1 + 2),ZEXT816(0),8);
  fVar17 = auVar18._0_4_ * *(float *)(param_1 + 0x20);
  fVar19 = auVar18._4_4_ * *(float *)(param_1 + 0x22);
  fVar20 = auVar18._8_4_ * *(float *)(param_1 + 0x24);
  fVar21 = auVar18._12_4_ * *(float *)(param_1 + 0x26);
  fVar13 = *(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x12);
  fVar24 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x16);
  fVar8 = fVar19 * fVar13 - fVar1 * fVar17;
  fVar9 = fVar20 * fVar1 - fVar24 * fVar19;
  fVar10 = fVar17 * fVar24 - fVar13 * fVar20;
  fVar11 = fVar21 * fVar6 - fVar6 * fVar21;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar11 = fVar11 + fVar11;
  auVar18 = blendps(ZEXT816(0),*(undefined1 (*) [16])(param_1 + 8),7);
  fVar12 = auVar18._0_4_ * *(float *)(param_1 + 0x20);
  fVar14 = auVar18._4_4_ * *(float *)(param_1 + 0x22);
  fVar15 = auVar18._8_4_ * *(float *)(param_1 + 0x24);
  fVar16 = auVar18._12_4_ * *(float *)(param_1 + 0x26);
  fVar22 = fVar14 * fVar13 - fVar1 * fVar12;
  fVar23 = fVar15 * fVar1 - fVar24 * fVar14;
  fVar25 = fVar12 * fVar24 - fVar13 * fVar15;
  fVar26 = fVar16 * fVar6 - fVar6 * fVar16;
  fVar22 = fVar22 + fVar22;
  fVar23 = fVar23 + fVar23;
  fVar25 = fVar25 + fVar25;
  fVar26 = fVar26 + fVar26;
  fVar17 = (fVar8 * fVar1 - fVar10 * fVar24) + fVar6 * fVar9 + fVar17 + *(float *)(param_1 + 0x18);
  fVar19 = (fVar9 * fVar24 - fVar8 * fVar13) + fVar6 * fVar10 + fVar19 + *(float *)(param_1 + 0x1a);
  fVar12 = (fVar22 * fVar1 - fVar25 * fVar24) + fVar6 * fVar23 + fVar12 + *(float *)(param_1 + 0x18)
  ;
  fVar24 = (fVar23 * fVar24 - fVar22 * fVar13) + fVar6 * fVar25 + fVar14 +
           *(float *)(param_1 + 0x1a);
  local_b8 = &local_a1;
  local_a1 = '\0';
  local_78 = *(float *)(param_2 + 0xc);
  local_80 = *(undefined8 *)(param_2 + 4);
  local_90 = CONCAT44(fVar24,fVar12);
  auVar5._4_4_ = fVar24;
  auVar5._0_4_ = fVar12;
  auVar5._8_4_ = (fVar25 * fVar13 - fVar23 * fVar1) + fVar6 * fVar22 + fVar15 +
                 *(float *)(param_1 + 0x1c);
  auVar5._12_4_ =
       (fVar26 * fVar6 - fVar26 * fVar6) + fVar6 * fVar26 + fVar16 + *(float *)(param_1 + 0x1e);
  local_88 = extractps(auVar5,2);
  local_a0 = CONCAT44(fVar19,fVar17);
  auVar18._4_4_ = fVar19;
  auVar18._0_4_ = fVar17;
  auVar18._8_4_ =
       (fVar10 * fVar13 - fVar9 * fVar1) + fVar6 * fVar8 + fVar20 + *(float *)(param_1 + 0x1c);
  auVar18._12_4_ =
       (fVar11 * fVar6 - fVar11 * fVar6) + fVar6 * fVar11 + fVar21 + *(float *)(param_1 + 0x1e);
  local_98 = extractps(auVar18,2);
  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_2 + 0x10));
  local_c8 = &local_80;
  FUN_1497da37e(&local_b0,&local_a0,&local_90,*(undefined4 *)(param_1 + 0xe));
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_a1);
  if (local_a1 == '\x01') {
    pfVar3 = *(float **)(param_3 + 0x68);
    if (*param_1 == 0) {
      fVar13 = pfVar3[6];
    }
    else {
      fVar13 = 1.0;
    }
    fVar1 = *pfVar3;
    fVar24 = pfVar3[1];
    local_78 = (*(float *)(param_2 + 0x58) * fVar24 + (local_a8 - *(float *)(param_2 + 0xc)) * fVar1
               ) * fVar13;
    local_80 = CONCAT44((*(float *)(param_2 + 0x54) * fVar24 +
                        (local_ac - *(float *)(param_2 + 8)) * fVar1) * fVar13,
                        (fVar24 * *(float *)(param_2 + 0x50) +
                        (local_b0 - *(float *)(param_2 + 4)) * fVar1) * fVar13);
    local_90 = CONCAT44((*(float *)(param_1 + 4) + *(float *)(param_1 + 10)) * 0.5,
                        (*(float *)(param_1 + 2) + *(float *)(param_1 + 8)) * 0.5);
    local_88 = CONCAT44(local_88._4_4_,(*(float *)(param_1 + 6) + *(float *)(param_1 + 0xc)) * 0.5);
    local_c8 = &local_90;
    local_c0 = &local_80;
    FUN_1497e0eb8(&local_a0,param_3 + 0xf0,param_3,param_1);
    sVar2 = *param_1;
    lVar4 = *(longlong *)(param_3 + 0xb0);
    *(undefined4 *)(lVar4 + 8 + (longlong)sVar2 * 0xc) = (undefined4)local_98;
    *(undefined8 *)(lVar4 + (longlong)sVar2 * 0xc) = local_a0;
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e6816 FUN_1497e6816 body=132 status=ok
// SIG undefined FUN_1497e6816(void)

void FUN_1497e6816(longlong *param_1,undefined4 *param_2,undefined2 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1406ce8b4(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar15 = (longlong)iVar2 * 0x30;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  uVar11 = param_2[7];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  uVar14 = param_2[0xb];
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar15);
  *puVar1 = param_2[8];
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar15);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar3 + lVar15);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  iVar2 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_1497e689a(param_1 + 2,iVar2);
  }
  *(undefined2 *)(param_1[2] + (longlong)iVar2 * 2) = *param_3;
  return;
}



// FUNCTION 1497e689a FUN_1497e689a body=130 status=ok
// SIG undefined FUN_1497e689a(void)

void FUN_1497e689a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e691e FUN_1497e691e body=89 status=ok
// SIG undefined FUN_1497e691e(void)

void FUN_1497e691e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1497e6978 FUN_1497e6978 body=240 status=ok
// SIG undefined FUN_1497e6978(void)

int * FUN_1497e6978(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14662d06a(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x180);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x180) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x180 + *param_1;
  return param_2;
}



// FUNCTION 1497e6a68 FUN_1497e6a68 body=528 status=ok
// SIG undefined FUN_1497e6a68(void)

undefined8 * FUN_1497e6a68(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_2;
  puVar3 = param_1;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1497e6c78(param_1 + 0xe,param_2 + 0xe);
  param_1[0x16] = 0;
  param_1[0x16] = param_2[0x16];
  param_2[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_2[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_2[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1a] = param_2[0x1a];
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_2[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1e] = param_2[0x1e];
  param_2[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  param_2[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x20] = param_2[0x20];
  param_2[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  param_2[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x22] = param_2[0x22];
  param_2[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_2[0x23] = 0;
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  param_1[0x24] = param_2[0x24];
  FUN_1497e6d0a(param_1 + 0x26,param_2 + 0x26);
  return param_1;
}



// FUNCTION 1497e6c78 FUN_1497e6c78 body=146 status=ok
// SIG undefined FUN_1497e6c78(void)

void FUN_1497e6c78(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  return;
}



// FUNCTION 1497e6d0a FUN_1497e6d0a body=123 status=ok
// SIG undefined FUN_1497e6d0a(void)

undefined8 * FUN_1497e6d0a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1497e6d86();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1497e6d86 FUN_1497e6d86 body=413 status=ok
// SIG undefined FUN_1497e6d86(void)

longlong * FUN_1497e6d86(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x20;
        FUN_1497e2b60(*(undefined8 *)(lVar2 + 8 + lVar8),*(undefined4 *)(lVar2 + 0x10 + lVar8));
        if (*(longlong *)(lVar2 + 8 + lVar8) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e6f24 FUN_1497e6f24 body=147 status=ok
// SIG undefined FUN_1497e6f24(void)

void FUN_1497e6f24(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e6fb8 FUN_1497e6fb8 body=122 status=ok
// SIG undefined FUN_1497e6fb8(void)

void FUN_1497e6fb8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x180) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x180) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x180 + 4) = uVar4;
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



// FUNCTION 1497e7032 FUN_1497e7032 body=62 status=ok
// SIG undefined FUN_1497e7032(void)

void FUN_1497e7032(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497e7070(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 1497e7070 FUN_1497e7070 body=112 status=ok
// SIG undefined FUN_1497e7070(void)

ulonglong FUN_1497e7070(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1497e70aa;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_1497e70aa:
  return param_2 & 0xffffffff;
}



// FUNCTION 1497e70e0 FUN_1497e70e0 body=62 status=ok
// SIG undefined FUN_1497e70e0(void)

void FUN_1497e70e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497e711e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1497e711e FUN_1497e711e body=93 status=ok
// SIG undefined FUN_1497e711e(void)

ulonglong FUN_1497e711e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1497e717c FUN_1497e717c body=132 status=ok
// SIG undefined FUN_1497e717c(void)

void FUN_1497e717c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497e7202 FUN_1497e7202 body=56 status=ok
// SIG undefined FUN_1497e7202(void)

void FUN_1497e7202(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001497e722f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1497e723a FUN_1497e723a body=29 status=ok
// SIG undefined FUN_1497e723a(void)

undefined8 FUN_1497e723a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e7258 FUN_1497e7258 body=94 status=ok
// SIG undefined FUN_1497e7258(void)

longlong * FUN_1497e7258(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xc0,0x10);
  FUN_1497e72b6(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 1497e72b6 FUN_1497e72b6 body=99 status=ok
// SIG undefined FUN_1497e72b6(void)

undefined8 * FUN_1497e72b6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14be806d0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1497e731a FUN_1497e731a body=47 status=ok
// SIG undefined FUN_1497e731a(void)

void FUN_1497e731a(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    FUN_14588b8d6(param_1 + 0x90);
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 1497e734a FUN_1497e734a body=29 status=ok
// SIG undefined FUN_1497e734a(void)

undefined8 FUN_1497e734a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e7368 FUN_1497e7368 body=238 status=ok
// SIG undefined FUN_1497e7368(void)

void FUN_1497e7368(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  local_68 = *(undefined8 *)(param_1 + 200);
  local_50 = &local_68;
  local_60 = *(uint *)(param_1 + 0xd0);
  local_38 = &local_58;
  local_78 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_1497e74d6;
  local_80 = 0;
  local_58 = param_2;
  local_48 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",(uint)(local_60 != (local_60 / 0x14) * 0x14) + local_60 / 0x14,1
               );
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e7458 FUN_1497e7458 body=54 status=ok
// SIG undefined FUN_1497e7458(void)

void FUN_1497e7458(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_14462137a(param_2,param_1[1]);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1497e1f1c(*param_1,*param_3);
  return;
}



// FUNCTION 1497e74ac FUN_1497e74ac body=12 status=ok
// SIG undefined FUN_1497e74ac(void)

void FUN_1497e74ac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001497e74b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1497e74b8 FUN_1497e74b8 body=29 status=ok
// SIG undefined FUN_1497e74b8(void)

undefined8 FUN_1497e74b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e74de FUN_1497e74de body=213 status=ok
// SIG undefined FUN_1497e74de(void)

void FUN_1497e74de(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[2];
  lVar8 = 0;
  do {
    uVar1 = (ulonglong)(uint)(param_2 * 0x14) + lVar8;
    iVar5 = (int)uVar1;
    if ((-1 < iVar5) && (iVar5 < (int)((longlong *)param_1[1])[1])) {
      iVar5 = *(int *)(*(longlong *)param_1[1] + (uVar1 & 0xffffffff) * 4);
      EnterCriticalSection(lpCriticalSection);
      lVar2 = *(longlong *)&lpCriticalSection[1].LockCount;
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      puVar3 = (undefined8 *)*param_1;
      pcVar4 = (code *)*puVar3;
      plVar7 = puVar3 + 4;
      if ((longlong *)puVar3[2] != (longlong *)0x0) {
        plVar7 = (longlong *)puVar3[2];
      }
      local_4c = iVar5;
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,lVar2 + (longlong)iVar5 * 0x180,&local_4c);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x14);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e75b4 FUN_1497e75b4 body=38 status=ok
// SIG undefined FUN_1497e75b4(void)

undefined8 FUN_1497e75b4(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e75da FUN_1497e75da body=31 status=ok
// SIG undefined FUN_1497e75da(void)

undefined8 FUN_1497e75da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e7616 FUN_1497e7616 body=93 status=ok
// SIG undefined FUN_1497e7616(void)

void FUN_1497e7616(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be807d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e7674 FUN_1497e7674 body=126 status=ok
// SIG undefined FUN_1497e7674(void)

void FUN_1497e7674(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be807d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497e76e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497e76f2 FUN_1497e76f2 body=21 status=ok
// SIG undefined FUN_1497e76f2(void)

undefined8 FUN_1497e76f2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1497e7708 FUN_1497e7708 body=31 status=ok
// SIG undefined FUN_1497e7708(void)

undefined8 FUN_1497e7708(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e7750 FUN_1497e7750 body=93 status=ok
// SIG undefined FUN_1497e7750(void)

void FUN_1497e7750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be808f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be80880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e77ae FUN_1497e77ae body=126 status=ok
// SIG undefined FUN_1497e77ae(void)

void FUN_1497e77ae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be808f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be80880;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497e781d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497e783c FUN_1497e783c body=189 status=ok
// SIG undefined FUN_1497e783c(void)

undefined8 FUN_1497e783c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3ec750;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be80960;
  puVar1[3] = param_3;
  puVar1[4] = FUN_1497e78fa;
  FUN_145ca1c8a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e78fa FUN_1497e78fa body=63 status=ok
// SIG undefined FUN_1497e78fa(void)

void FUN_1497e78fa(longlong param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) == 0) {
    return;
  }
  FUN_140d76916(param_2,1);
  FUN_145e31556(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 1497e793a FUN_1497e793a body=29 status=ok
// SIG undefined FUN_1497e793a(void)

undefined8 FUN_1497e793a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e7974 FUN_1497e7974 body=93 status=ok
// SIG undefined FUN_1497e7974(void)

void FUN_1497e7974(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be80960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e79d2 FUN_1497e79d2 body=93 status=ok
// SIG undefined FUN_1497e79d2(void)

void FUN_1497e79d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be80960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e7a30 FUN_1497e7a30 body=126 status=ok
// SIG undefined FUN_1497e7a30(void)

void FUN_1497e7a30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec750;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be80960;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497e7a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497e7abc FUN_1497e7abc body=21 status=ok
// SIG undefined FUN_1497e7abc(void)

undefined8 FUN_1497e7abc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1497e7ad2 FUN_1497e7ad2 body=132 status=ok
// SIG undefined FUN_1497e7ad2(void)

void FUN_1497e7ad2(longlong param_1,int param_2)

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



// FUNCTION 1497e7b58 FUN_1497e7b58 body=114 status=ok
// SIG undefined FUN_1497e7b58(void)

void FUN_1497e7b58(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1497e7bca FUN_1497e7bca body=31 status=ok
// SIG undefined FUN_1497e7bca(void)

undefined8 FUN_1497e7bca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e7c02 FUN_1497e7c02 body=93 status=ok
// SIG undefined FUN_1497e7c02(void)

void FUN_1497e7c02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be809e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e7c60 FUN_1497e7c60 body=93 status=ok
// SIG undefined FUN_1497e7c60(void)

void FUN_1497e7c60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be809e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e7cbe FUN_1497e7cbe body=126 status=ok
// SIG undefined FUN_1497e7cbe(void)

void FUN_1497e7cbe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be809e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497e7d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497e7d4a FUN_1497e7d4a body=87 status=ok
// SIG undefined FUN_1497e7d4a(void)

void FUN_1497e7d4a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1497e7da2();
  return;
}



// FUNCTION 1497e7da2 FUN_1497e7da2 body=90 status=ok
// SIG undefined FUN_1497e7da2(void)

void FUN_1497e7da2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  *(undefined ***)(lVar3 + 8 + (longlong)param_2 * 0x28) = &PTR_FUN_14a184350;
  plVar4 = *(longlong **)(lVar3 + 0x18 + (longlong)param_2 * 0x28);
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
  FUN_1497e7b58(param_1,param_2);
  return;
}



// FUNCTION 1497e7dfc FUN_1497e7dfc body=31 status=ok
// SIG undefined FUN_1497e7dfc(void)

undefined8 FUN_1497e7dfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497e7e38 FUN_1497e7e38 body=93 status=ok
// SIG undefined FUN_1497e7e38(void)

void FUN_1497e7e38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be80a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e7e96 FUN_1497e7e96 body=93 status=ok
// SIG undefined FUN_1497e7e96(void)

void FUN_1497e7e96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be80a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1497e7ef4 FUN_1497e7ef4 body=126 status=ok
// SIG undefined FUN_1497e7ef4(void)

void FUN_1497e7ef4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec750;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be80a60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001497e7f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1497e7ffc FUN_1497e7ffc body=181 status=ok
// SIG undefined FUN_1497e7ffc(void)

void FUN_1497e7ffc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14be82950);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbf8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc08);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e80c2 FUN_1497e80c2 body=124 status=ok
// SIG undefined FUN_1497e80c2(void)

void FUN_1497e80c2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14be87818);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497e8146 FUN_1497e8146 body=332 status=ok
// SIG undefined FUN_1497e8146(void)

void FUN_1497e8146(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x200);
  iVar3 = *(int *)(param_1 + 0x1dc);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1f8);
  plVar6 = (longlong *)FUN_14001cc68(200,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14be85d40;
  FUN_1497fd85c(plVar6 + 2,(longlong)iVar3 * 0x18 + lVar5,uVar4,param_3,param_2);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x198);
    if (plVar7 == (longlong *)0x0) goto LAB_1497e8242;
    *(undefined8 *)(param_1 + 0x198) = 0;
LAB_1497e8203:
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
    if (plVar6 == (longlong *)0x0) goto LAB_1497e8242;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 400) = plVar6 + 2;
    plVar7 = *(longlong **)(param_1 + 0x198);
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
      *(longlong **)(param_1 + 0x198) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_1497e8203;
    }
  }
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
LAB_1497e8242:
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
  return;
}



// FUNCTION 1497e8292 FUN_1497e8292 body=322 status=ok
// SIG undefined FUN_1497e8292(void)

void FUN_1497e8292(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1dc);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1f8);
  plVar5 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14be85d20;
  FUN_1497fd3c4(plVar5 + 2,(longlong)iVar3 * 0x18 + lVar4,param_4,param_2,param_3);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x188);
    if (plVar6 == (longlong *)0x0) goto LAB_1497e838a;
    *(undefined8 *)(param_1 + 0x188) = 0;
LAB_1497e834b:
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
    if (plVar5 == (longlong *)0x0) goto LAB_1497e838a;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x180) = plVar5 + 2;
    plVar6 = *(longlong **)(param_1 + 0x188);
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
      *(longlong **)(param_1 + 0x188) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_1497e834b;
    }
  }
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
LAB_1497e838a:
  *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  return;
}



// FUNCTION 1497e83d4 FUN_1497e83d4 body=329 status=ok
// SIG undefined FUN_1497e83d4(void)

void FUN_1497e83d4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x208);
  plVar4 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14be85d70;
  FUN_1497fdecc(plVar4 + 2,uVar3,param_2,param_3,*(undefined4 *)(param_1 + 0x210),
                *(undefined4 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x220),
                *(undefined4 *)(param_1 + 0x228));
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a0) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x1a8);
    if (plVar5 == (longlong *)0x0) goto LAB_1497e84cd;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
LAB_1497e848e:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1497e84cd;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x1a0) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x1a8);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x1a8) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1497e848e;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1497e84cd:
  *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
  *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + 1;
  return;
}



// FUNCTION 1497e851e FUN_1497e851e body=10044 status=ok
// SIG undefined FUN_1497e851e(void)

void FUN_1497e851e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_198 [32];
  undefined1 local_178 [24];
  longlong local_160;
  longlong local_150;
  longlong local_140;
  longlong local_130;
  longlong local_120;
  longlong local_110;
  longlong local_100;
  longlong local_f0;
  longlong local_e0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*param_2 != 0) {
    *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
  }
  FUN_1497eacce(local_178,param_1);
  lVar3 = *(longlong *)(param_1 + 400);
  if (lVar3 != 0) {
    lVar6 = (longlong)local_cc;
    local_cc = local_cc + 1;
    lVar6 = lVar6 * 0x40;
    local_a8 = *(longlong *)(local_160 + lVar6);
    uStack_60 = ((longlong *)(local_160 + lVar6))[1];
    puVar2 = (undefined8 *)(local_160 + 0x10 + lVar6);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_160 + 0x20 + lVar6);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_160 + 0x30 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar7 = uStack_60;
    puVar2 = (undefined8 *)(local_160 + 0x30 + lVar6);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_160 + 0x20 + lVar6);
    *puVar2 = &PTR_LAB_14be85db0;
    puVar2[1] = lVar3;
    puVar2 = (undefined8 *)(local_160 + 0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_160 + lVar6) = &LAB_1497fee16;
    ((undefined8 *)(local_160 + lVar6))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar7;
      uStack_50 = uVar4;
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar4 = *(undefined8 *)(param_1 + 400);
    lVar7 = (longlong)local_b4;
    local_b4 = local_b4 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_100 + lVar7);
    uStack_60 = ((longlong *)(local_100 + lVar7))[1];
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_100 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_100 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85dd0;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_100 + lVar7) = &LAB_1497fee66;
    ((undefined8 *)(local_100 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (lVar3 != 0) {
    lVar6 = (longlong)local_cc;
    local_cc = local_cc + 1;
    lVar6 = lVar6 * 0x40;
    local_a8 = *(longlong *)(local_160 + lVar6);
    uStack_60 = ((longlong *)(local_160 + lVar6))[1];
    puVar2 = (undefined8 *)(local_160 + 0x10 + lVar6);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_160 + 0x20 + lVar6);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_160 + 0x30 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar7 = uStack_60;
    puVar2 = (undefined8 *)(local_160 + 0x30 + lVar6);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_160 + 0x20 + lVar6);
    *puVar2 = &PTR_LAB_14be85df0;
    puVar2[1] = lVar3;
    puVar2 = (undefined8 *)(local_160 + 0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_160 + lVar6) = &LAB_1497ff338;
    ((undefined8 *)(local_160 + lVar6))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar7;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    lVar7 = (longlong)local_cc;
    local_cc = local_cc + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_160 + lVar7);
    uStack_60 = ((longlong *)(local_160 + lVar7))[1];
    puVar2 = (undefined8 *)(local_160 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_160 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_160 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_160 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_160 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85e10;
    puVar2[1] = param_1;
    puVar2 = (undefined8 *)(local_160 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_160 + lVar7) = FUN_14462f99a;
    ((undefined8 *)(local_160 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar3;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1497eb078(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x160);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85e50;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ff460;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    plVar9 = (longlong *)param_2[1];
    if (plVar9 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      local_78 = plVar9;
    }
    lVar6 = (longlong)local_ac;
    local_ac = local_ac + 1;
    lVar6 = lVar6 * 0x40;
    local_a8 = *(longlong *)(local_e0 + lVar6);
    uStack_60 = ((longlong *)(local_e0 + lVar6))[1];
    puVar2 = (undefined8 *)(local_e0 + 0x10 + lVar6);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar8 = (longlong *)(local_e0 + 0x20 + lVar6);
    local_48 = *plVar8;
    lStack_40 = plVar8[1];
    puVar2 = (undefined8 *)(local_e0 + 0x30 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar7 = uStack_60;
    plVar8 = (longlong *)(local_e0 + 0x30 + lVar6);
    *plVar8 = (longlong)local_78;
    plVar8[1] = param_1;
    puVar2 = (undefined8 *)(local_e0 + 0x20 + lVar6);
    *puVar2 = &PTR_LAB_14be85e70;
    puVar2[1] = lVar3;
    puVar2 = (undefined8 *)(local_e0 + 0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_e0 + lVar6) = &LAB_14463010c;
    ((undefined8 *)(local_e0 + lVar6))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar7;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar8 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar8 = local_98;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1497eb1a0(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85eb0;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ff5b0;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1497eb2c8(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85ef0;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ff6c2;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar3;
      uStack_50 = uVar5;
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar7 = (longlong)local_b4;
    local_b4 = local_b4 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_100 + lVar7);
    uStack_60 = ((longlong *)(local_100 + lVar7))[1];
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_100 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_100 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85f10;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_100 + lVar7) = &LAB_1497ff718;
    ((undefined8 *)(local_100 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1497eb3f0(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85f50;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ff7da;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1497eb518(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85f90;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ff8d4;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar3;
      uStack_50 = uVar5;
      (**(code **)(*plVar9 + 0x10))();
    }
    lVar7 = (longlong)local_b4;
    local_b4 = local_b4 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_100 + lVar7);
    uStack_60 = ((longlong *)(local_100 + lVar7))[1];
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_100 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_100 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85fb0;
    puVar2[1] = param_1;
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_100 + lVar7) = FUN_144630862;
    ((undefined8 *)(local_100 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_60 = lVar3;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1497eb640(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be85ff0;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ff972;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar3;
      uStack_50 = uVar5;
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    lVar7 = (longlong)local_b4;
    local_b4 = local_b4 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_100 + lVar7);
    uStack_60 = ((longlong *)(local_100 + lVar7))[1];
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_100 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_100 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86010;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_100 + lVar7) = &LAB_1497ff9c8;
    ((undefined8 *)(local_100 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1497eb768(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86050;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ffa8a;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1497eb890(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86090;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ffb28;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1497eb9b8(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be860d0;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ffbc6;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1497ebae0(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86110;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ffc64;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1497ebc08(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86150;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ffd02;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1497ebd30(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86190;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1497ffff6;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    lVar6 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar6 = lVar6 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar6);
    uStack_60 = ((longlong *)(local_130 + lVar6))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar6);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar6);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar7 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar6);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar6);
    *puVar2 = &PTR_LAB_14be861b0;
    puVar2[1] = lVar3 + 0x208;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar6) = &LAB_14980004c;
    ((undefined8 *)(local_130 + lVar6))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar7;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    lVar6 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar6 = lVar6 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar6);
    uStack_60 = ((longlong *)(local_130 + lVar6))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar6);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar6);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar7 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar6);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar6);
    *puVar2 = &PTR_LAB_14be861d0;
    puVar2[1] = lVar3;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar6) = &LAB_1498000a2;
    ((undefined8 *)(local_130 + lVar6))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar7;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if (lVar3 != 0) {
    lVar6 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar6 = lVar6 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar6);
    uStack_60 = ((longlong *)(local_130 + lVar6))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar6);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar6);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar7 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar6);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar6);
    *puVar2 = &PTR_LAB_14be861f0;
    puVar2[1] = lVar3;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar6) = &LAB_144631398;
    ((undefined8 *)(local_130 + lVar6))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar7;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1497ebe58(local_178);
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    lVar7 = (longlong)local_c0;
    local_c0 = local_c0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_130 + lVar7);
    uStack_60 = ((longlong *)(local_130 + lVar7))[1];
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_130 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_130 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_130 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86230;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_130 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_130 + lVar7) = &LAB_1498001e0;
    ((undefined8 *)(local_130 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    local_88 = local_48;
    lStack_80 = lStack_40;
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  if (lVar3 != 0) {
    lVar6 = (longlong)local_bc;
    local_bc = local_bc + 1;
    lVar6 = lVar6 * 0x40;
    local_a8 = *(longlong *)(local_120 + lVar6);
    uStack_60 = ((longlong *)(local_120 + lVar6))[1];
    puVar2 = (undefined8 *)(local_120 + 0x10 + lVar6);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_120 + 0x20 + lVar6);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_120 + 0x30 + lVar6);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar7 = uStack_60;
    puVar2 = (undefined8 *)(local_120 + 0x30 + lVar6);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_120 + 0x20 + lVar6);
    *puVar2 = &PTR_LAB_14be86250;
    puVar2[1] = lVar3;
    puVar2 = (undefined8 *)(local_120 + 0x10 + lVar6);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_120 + lVar6) = &LAB_149800558;
    ((undefined8 *)(local_120 + lVar6))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar7;
      uStack_50 = uVar4;
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1a0);
    lVar7 = (longlong)local_b0;
    local_b0 = local_b0 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_f0 + lVar7);
    uStack_60 = ((longlong *)(local_f0 + lVar7))[1];
    puVar2 = (undefined8 *)(local_f0 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_f0 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_f0 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_f0 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_f0 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86270;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_f0 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_f0 + lVar7) = &LAB_1498005ae;
    ((undefined8 *)(local_f0 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if ((*(longlong *)(param_1 + 0x100) != 0) && (*(longlong *)(param_1 + 0x110) != 0)) {
    lVar7 = (longlong)local_c8;
    local_c8 = local_c8 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_150 + lVar7);
    uStack_60 = ((longlong *)(local_150 + lVar7))[1];
    puVar2 = (undefined8 *)(local_150 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_150 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_150 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_150 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_150 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86290;
    puVar2[1] = param_1;
    puVar2 = (undefined8 *)(local_150 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_150 + lVar7) = FUN_1446316a4;
    ((undefined8 *)(local_150 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar3;
      uStack_50 = uVar4;
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x110);
    lVar7 = (longlong)local_b8;
    local_b8 = local_b8 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_110 + lVar7);
    uStack_60 = ((longlong *)(local_110 + lVar7))[1];
    puVar2 = (undefined8 *)(local_110 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_110 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_110 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_110 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_110 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be862b0;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_110 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_110 + lVar7) = &LAB_149800604;
    ((undefined8 *)(local_110 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar3;
      uStack_50 = uVar5;
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x110);
    lVar7 = (longlong)local_b4;
    local_b4 = local_b4 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_100 + lVar7);
    uStack_60 = ((longlong *)(local_100 + lVar7))[1];
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_100 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_100 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_100 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be862d0;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_100 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_100 + lVar7) = &LAB_14980065a;
    ((undefined8 *)(local_100 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    lVar7 = (longlong)local_c8;
    local_c8 = local_c8 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_150 + lVar7);
    uStack_60 = ((longlong *)(local_150 + lVar7))[1];
    puVar2 = (undefined8 *)(local_150 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_150 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_150 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_150 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_150 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be862f0;
    puVar2[1] = param_1;
    puVar2 = (undefined8 *)(local_150 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_150 + lVar7) = &LAB_1446317e4;
    ((undefined8 *)(local_150 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar3;
      uStack_50 = uVar4;
      (**(code **)(*plVar9 + 0x10))();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    lVar7 = (longlong)local_b8;
    local_b8 = local_b8 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_110 + lVar7);
    uStack_60 = ((longlong *)(local_110 + lVar7))[1];
    puVar2 = (undefined8 *)(local_110 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_110 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_110 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar5 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_110 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_110 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86310;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(local_110 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_110 + lVar7) = &LAB_1498006b0;
    ((undefined8 *)(local_110 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar3;
    uStack_50 = uVar5;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if ((*(longlong *)(param_1 + 0x100) != 0) && (*(longlong *)(param_1 + 0x120) != 0)) {
    lVar7 = (longlong)local_c4;
    local_c4 = local_c4 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_140 + lVar7);
    uStack_60 = ((longlong *)(local_140 + lVar7))[1];
    puVar2 = (undefined8 *)(local_140 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_140 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_140 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_140 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_140 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86330;
    puVar2[1] = param_1;
    puVar2 = (undefined8 *)(local_140 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_140 + lVar7) = &LAB_144631846;
    ((undefined8 *)(local_140 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      uStack_60 = lVar3;
      uStack_50 = uVar4;
      (**(code **)(*plVar9 + 0x10))();
    }
    lVar7 = (longlong)local_ac;
    local_ac = local_ac + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_e0 + lVar7);
    uStack_60 = ((longlong *)(local_e0 + lVar7))[1];
    puVar2 = (undefined8 *)(local_e0 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_e0 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_e0 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_e0 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_e0 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86350;
    puVar2[1] = param_1;
    puVar2 = (undefined8 *)(local_e0 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_e0 + lVar7) = FUN_1446318ba;
    ((undefined8 *)(local_e0 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar3;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = &local_88;
      if (local_98 != (longlong *)0x0) {
        plVar9 = local_98;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar7 = (longlong)local_c4;
    local_c4 = local_c4 + 1;
    lVar7 = lVar7 * 0x40;
    local_a8 = *(longlong *)(local_140 + lVar7);
    uStack_60 = ((longlong *)(local_140 + lVar7))[1];
    puVar2 = (undefined8 *)(local_140 + 0x10 + lVar7);
    local_98 = (longlong *)*puVar2;
    uStack_50 = puVar2[1];
    plVar9 = (longlong *)(local_140 + 0x20 + lVar7);
    local_48 = *plVar9;
    lStack_40 = plVar9[1];
    puVar2 = (undefined8 *)(local_140 + 0x30 + lVar7);
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    lVar3 = uStack_60;
    puVar2 = (undefined8 *)(local_140 + 0x30 + lVar7);
    *puVar2 = local_78;
    puVar2[1] = uStack_70;
    puVar2 = (undefined8 *)(local_140 + 0x20 + lVar7);
    *puVar2 = &PTR_LAB_14be86370;
    puVar2[1] = param_1;
    puVar2 = (undefined8 *)(local_140 + 0x10 + lVar7);
    *puVar2 = 0;
    puVar2[1] = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(local_140 + lVar7) = FUN_14463197a;
    ((undefined8 *)(local_140 + lVar7))[1] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_78 = (longlong *)local_38;
    uStack_70 = uStack_30;
    local_88 = local_48;
    lStack_80 = lStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = lVar3;
    uStack_50 = uVar4;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar9 = &local_88;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eac5c FUN_1497eac5c body=113 status=ok
// SIG undefined FUN_1497eac5c(void)

undefined8 * FUN_1497eac5c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 6) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_147df40b0(param_1 + 0xb);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  FUN_147df117e(param_1);
  param_1[2] = param_1[8];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 9);
  return param_1;
}



// FUNCTION 1497eacce FUN_1497eacce body=938 status=ok
// SIG undefined FUN_1497eacce(void)

longlong * FUN_1497eacce(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_1497f32aa((longlong)*(int *)(param_2 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(param_2 + 0x1b0) + 0x270),
                *(undefined4 *)(param_2 + 0x230));
  lVar3 = *param_1;
  FUN_1497f34b6((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x288),*(undefined4 *)(lVar3 + 0x234));
  lVar3 = *param_1;
  FUN_1497f32aa((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2a0),*(undefined4 *)(lVar3 + 0x1e4));
  lVar3 = *param_1;
  FUN_1497f36c2((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2b8),*(undefined4 *)(lVar3 + 0x238));
  lVar3 = *param_1;
  FUN_1497f34b6((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2d0),*(undefined4 *)(lVar3 + 0x1e8));
  lVar3 = *param_1;
  FUN_1497f38ce((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2e8),*(undefined4 *)(lVar3 + 0x23c));
  lVar3 = *param_1;
  FUN_1497f34b6((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x300),*(undefined4 *)(lVar3 + 0x1ec));
  lVar3 = *param_1;
  FUN_1497f3ada((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x318),*(undefined4 *)(lVar3 + 0x240));
  lVar3 = *param_1;
  FUN_1497f3ce6((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x330),*(undefined4 *)(lVar3 + 0x244));
  lVar3 = *param_1;
  FUN_1497f36c2((longlong)*(int *)(lVar3 + 0x1dc) * 0x10 +
                *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x348),*(undefined4 *)(lVar3 + 0x1f0));
  lVar3 = *param_1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x270);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[1] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 2) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x288);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[3] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2a0);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[5] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 6) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2b8);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[7] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2d0);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[9] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 10) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x2e8);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[0xb] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x300);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[0xd] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x318);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[0xf] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x330);
  lVar4 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar4);
  param_1[0x11] = *(longlong *)(lVar2 + lVar4);
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1b0) + 0x348);
  lVar3 = (longlong)*(int *)(lVar3 + 0x1dc) * 0x10;
  uVar1 = *(undefined4 *)(lVar2 + 8 + lVar3);
  param_1[0x13] = *(longlong *)(lVar2 + lVar3);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return param_1;
}



// FUNCTION 1497eb078 FUN_1497eb078 body=295 status=ok
// SIG undefined FUN_1497eb078(void)

void FUN_1497eb078(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be85e30;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = FUN_1497ff38e;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb1a0 FUN_1497eb1a0 body=295 status=ok
// SIG undefined FUN_1497eb1a0(void)

void FUN_1497eb1a0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be85e90;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = FUN_1497ff4b6;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb2c8 FUN_1497eb2c8 body=295 status=ok
// SIG undefined FUN_1497eb2c8(void)

void FUN_1497eb2c8(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be85ed0;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = FUN_1446304f4;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb3f0 FUN_1497eb3f0 body=295 status=ok
// SIG undefined FUN_1497eb3f0(void)

void FUN_1497eb3f0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be85f30;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = &LAB_1497ff76e;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb518 FUN_1497eb518 body=295 status=ok
// SIG undefined FUN_1497eb518(void)

void FUN_1497eb518(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be85f70;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = &LAB_1497ff830;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb640 FUN_1497eb640 body=295 status=ok
// SIG undefined FUN_1497eb640(void)

void FUN_1497eb640(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be85fd0;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = FUN_1446308f4;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb768 FUN_1497eb768 body=295 status=ok
// SIG undefined FUN_1497eb768(void)

void FUN_1497eb768(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be86030;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = &LAB_1497ffa1e;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb890 FUN_1497eb890 body=295 status=ok
// SIG undefined FUN_1497eb890(void)

void FUN_1497eb890(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be86070;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = FUN_144630922;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eb9b8 FUN_1497eb9b8 body=295 status=ok
// SIG undefined FUN_1497eb9b8(void)

void FUN_1497eb9b8(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be860b0;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = &LAB_144630cc6;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ebae0 FUN_1497ebae0 body=295 status=ok
// SIG undefined FUN_1497ebae0(void)

void FUN_1497ebae0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be860f0;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = &LAB_144630d54;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ebc08 FUN_1497ebc08 body=295 status=ok
// SIG undefined FUN_1497ebc08(void)

void FUN_1497ebc08(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be86130;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = &LAB_144630de2;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ebd30 FUN_1497ebd30 body=295 status=ok
// SIG undefined FUN_1497ebd30(void)

void FUN_1497ebd30(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be86170;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = &LAB_1497fff8a;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ebe58 FUN_1497ebe58 body=295 status=ok
// SIG undefined FUN_1497ebe58(void)

void FUN_1497ebe58(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(*param_1 + 0x1b0);
  lVar4 = param_1[0x16];
  *(int *)(param_1 + 0x16) = (int)lVar4 + 1;
  lVar3 = param_1[5];
  lVar7 = (longlong)(int)lVar4 * 0x40;
  local_88 = *(longlong *)(lVar3 + lVar7);
  uStack_40 = ((longlong *)(lVar3 + lVar7))[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  local_78 = (longlong *)*puVar1;
  uStack_30 = puVar1[1];
  plVar8 = (longlong *)(lVar3 + 0x20 + lVar7);
  local_28 = *plVar8;
  lStack_20 = plVar8[1];
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  uVar6 = uStack_10;
  local_38 = local_78;
  uVar5 = uStack_30;
  local_48 = local_88;
  lVar4 = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar7);
  *puVar1 = uVar2;
  puVar1[1] = CONCAT44(uStack_4c,uStack_50);
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar7);
  *puVar1 = &PTR_LAB_14be86210;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar7);
  *puVar1 = 0;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(lVar3 + lVar7) = FUN_149800140;
  ((undefined8 *)(lVar3 + lVar7))[1] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = local_18;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  lStack_60 = lStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = lVar4;
  uStack_30 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = &local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ebf80 FUN_1497ebf80 body=284 status=ok
// SIG undefined FUN_1497ebf80(void)

void FUN_1497ebf80(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  lVar2 = DAT_14cc26fe0;
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    *(undefined4 *)(lVar1 + 0x84) = *(undefined4 *)(lVar2 + uVar4 * 4);
    lVar1 = *(longlong *)(param_1 + 400);
    *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar1 + 0x88) = *param_2;
    *(undefined1 *)(lVar1 + 0x94) = param_3;
    lVar1 = *(longlong *)(param_1 + 400);
    *(undefined4 *)(lVar1 + 0xa0) = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)(lVar1 + 0x98) = *param_4;
    *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)(lVar1 + 0x54) = *param_5;
    lVar1 = *(longlong *)(param_1 + 400);
    *(undefined4 *)(lVar1 + 0x6c) = *(undefined4 *)(param_6 + 1);
    *(undefined8 *)(lVar1 + 100) = *param_6;
    *(undefined4 *)(lVar1 + 0x70) = param_7;
  }
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_6 + 1);
  *(undefined8 *)(param_1 + 0x170) = *param_6;
  return;
}



// FUNCTION 1497ec09c FUN_1497ec09c body=510 status=ok
// SIG undefined FUN_1497ec09c(void)

void FUN_1497ec09c(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined **local_80;
  longlong local_78;
  longlong local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = (longlong)*(int *)(param_1 + 0x98);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    local_34 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    local_38 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if ((bVar5 & 0x40) == 0) {
      fVar10 = local_34;
      if (1e+07 <= local_34) {
        fVar10 = 1e+07;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar11 = local_38;
      if (1e+07 <= local_38) {
        fVar11 = 1e+07;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      bVar5 = 1;
      if ((*(float *)(param_1 + 0x68) == fVar11) &&
         (!NAN(*(float *)(param_1 + 0x68)) && !NAN(fVar11))) {
        bVar5 = -(*(float *)(param_1 + 0x6c) != fVar10) & 1;
      }
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | bVar5;
      *(float *)(param_1 + 0x68) = fVar11;
      *(float *)(param_1 + 0x6c) = fVar10;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      local_90 = *(undefined8 *)(param_1 + 8);
      local_88 = *(undefined4 *)(param_1 + 0x10);
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_a8 = 0;
        uStack_a0 = 0;
      }
      else {
        local_a8 = *(undefined8 *)(lVar8 + 0x10);
        uStack_a0 = *(undefined4 *)(lVar8 + 0x18);
        uStack_9c = *(undefined4 *)(lVar8 + 0x1c);
      }
      local_b8 = 0x4b189680;
      local_c0 = 0x447a0000;
      local_c8 = 0x10;
      local_d8 = uVar1;
      local_d0 = uVar2;
      FUN_14172d54c(&local_80,&local_38,&local_a8,&local_90);
      FUN_14025ef54(param_1 + 0x40,&local_80);
      *(undefined4 *)(param_1 + 0x78) = local_48;
      *(undefined4 *)(param_1 + 0x7c) = uStack_44;
      *(undefined4 *)(param_1 + 0x80) = uStack_40;
      *(undefined4 *)(param_1 + 0x84) = uStack_3c;
      local_80 = &PTR_FUN_149f57480;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ec29c FUN_1497ec29c body=1517 status=ok
// SIG undefined FUN_1497ec29c(void)

void FUN_1497ec29c(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  int local_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = (longlong)*(int *)(param_1 + 0x188);
  if ((lVar7 != -1) &&
     (bVar1 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar7), (bVar1 & 0x92) == 0x82)) {
    fVar9 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar7 * 0xc);
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar9 = fVar9 - fVar10;
    if ((bVar1 & 0x40) == 0) {
      *(float *)(param_1 + 0x30) = fVar10;
      *(float *)(param_1 + 0x34) = fVar9;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar7 = lVar7 * 0x10;
      iVar6 = *(int *)(lVar3 + 8 + lVar7);
      if (iVar6 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(lVar3 + lVar7);
      }
      iVar2 = *(int *)(param_1 + 0x17c);
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar4,puVar8);
      iVar6 = FUN_140aad9fa(param_3,uVar5,lVar3 + lVar7);
      lVar7 = (longlong)iVar6 * 0x28 + *param_3;
      if (lVar7 == 0 || iVar6 == -1) {
        local_a8 = 0;
        uStack_a0 = 0;
      }
      else {
        local_a8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_a0 = *(undefined4 *)(lVar7 + 0x18);
        uStack_9c = *(undefined4 *)(lVar7 + 0x1c);
      }
      FUN_146ded362(&local_98,&local_a8,iVar2);
      uStack_80 = 0;
      if (iStack_90 == iVar2) {
        uStack_80 = local_98;
      }
      local_78 = 0;
      if (iStack_90 == iVar2) {
        local_78 = iVar2;
      }
      local_88 = iVar2;
      fStack_70 = fVar10;
      fStack_6c = fVar9;
      if ((longlong *)(param_1 + 8) == &local_98) {
        *(int *)(param_1 + 0x28) = local_78;
        *(ulonglong *)(param_1 + 0x2c) = CONCAT44(fVar10,uStack_74);
        *(float *)(param_1 + 0x34) = fVar9;
        *(int *)(param_1 + 0x18) = iVar2;
        *(undefined4 *)(param_1 + 0x1c) = uStack_84;
        *(longlong *)(param_1 + 0x20) = uStack_80;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 8));
        }
        *(longlong *)(param_1 + 8) = local_98;
        local_98 = 0;
        *(int *)(param_1 + 0x10) = iStack_90;
        *(undefined4 *)(param_1 + 0x14) = uStack_8c;
        *(int *)(param_1 + 0x18) = local_88;
        *(undefined4 *)(param_1 + 0x1c) = uStack_84;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_80;
        *(undefined4 *)(param_1 + 0x24) = uStack_80._4_4_;
        *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_74,local_78);
        *(ulonglong *)(param_1 + 0x30) = CONCAT44(fStack_6c,fStack_70);
      }
      fVar10 = *(float *)(param_1 + 0x30);
      fVar9 = *(float *)(param_1 + 0x34);
    }
    if (fVar10 <= fVar9 + fVar10) {
      fVar10 = fVar9 + fVar10;
    }
    *(float *)(param_1 + 0x84) = fVar10;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x18c);
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x38) = fVar10;
  }
  lVar7 = (longlong)*(int *)(param_1 + 400);
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x3c) = fVar10;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x194);
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x198);
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0xd2) == 0xc2)) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    lVar7 = lVar7 * 0x10;
    iVar6 = *(int *)(lVar3 + 8 + lVar7);
    if (iVar6 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = *(undefined2 **)(lVar3 + lVar7);
    }
    iVar2 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar2 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar2,puVar8);
    iVar6 = FUN_1497f423a(param_4,uVar5,lVar3 + lVar7);
    lVar7 = (longlong)iVar6 * 0x28 + *param_4;
    if (lVar7 == 0 || iVar6 == -1) {
      local_98 = 0;
      iStack_90 = 0;
    }
    else {
      local_98 = *(longlong *)(lVar7 + 0x10);
      iStack_90 = *(int *)(lVar7 + 0x18);
      uStack_8c = *(undefined4 *)(lVar7 + 0x1c);
    }
    FUN_146de815a(param_1,&local_98);
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x19c);
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    *(bool *)(param_1 + 0x40) = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc) != 0.0;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x1a0);
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x44) = fVar10;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x1a4);
  if ((lVar7 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar7) & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x48) = fVar10;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x1a8);
  if ((lVar7 != -1) &&
     (bVar1 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar7), (bVar1 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar7 * 0xc);
    fVar9 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if ((bVar1 & 0x40) == 0) {
      *(float *)(param_1 + 0x78) = fVar9;
      *(float *)(param_1 + 0x7c) = fVar10 - fVar9;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar7 = lVar7 * 0x10;
      iVar6 = *(int *)(lVar3 + 8 + lVar7);
      if (iVar6 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = *(undefined2 **)(lVar3 + lVar7);
      }
      iVar2 = *(int *)(param_1 + 0x17c);
      iVar4 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar4 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar4,puVar8);
      iVar6 = FUN_140aad9fa(param_3,uVar5,lVar3 + lVar7);
      lVar7 = (longlong)iVar6 * 0x28 + *param_3;
      if (lVar7 == 0 || iVar6 == -1) {
        local_a8 = 0;
        uStack_a0 = 0;
      }
      else {
        local_a8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_a0 = *(undefined4 *)(lVar7 + 0x18);
        uStack_9c = *(undefined4 *)(lVar7 + 0x1c);
      }
      FUN_146ded362(&local_98,&local_a8,iVar2);
      uStack_80 = 0;
      if (iStack_90 == iVar2) {
        uStack_80 = local_98;
      }
      local_78 = 0;
      if (iStack_90 == iVar2) {
        local_78 = iVar2;
      }
      fStack_6c = fVar10 - fVar9;
      local_88 = iVar2;
      fStack_70 = fVar9;
      if ((longlong *)(param_1 + 0x50) == &local_98) {
        *(int *)(param_1 + 0x70) = local_78;
        *(ulonglong *)(param_1 + 0x74) = CONCAT44(fVar9,uStack_74);
        *(float *)(param_1 + 0x7c) = fStack_6c;
        *(int *)(param_1 + 0x60) = iVar2;
        *(undefined4 *)(param_1 + 100) = uStack_84;
        *(longlong *)(param_1 + 0x68) = uStack_80;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x50));
        }
        *(longlong *)(param_1 + 0x50) = local_98;
        *(int *)(param_1 + 0x58) = iStack_90;
        *(undefined4 *)(param_1 + 0x5c) = uStack_8c;
        *(int *)(param_1 + 0x60) = local_88;
        *(undefined4 *)(param_1 + 100) = uStack_84;
        *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_80;
        *(undefined4 *)(param_1 + 0x6c) = uStack_80._4_4_;
        *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_74,local_78);
        *(ulonglong *)(param_1 + 0x78) = CONCAT44(fStack_6c,fStack_70);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ec88a FUN_1497ec88a body=1135 status=ok
// SIG undefined FUN_1497ec88a(void)

void FUN_1497ec88a(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = (longlong)*(int *)(param_1 + 0x528);
  if ((lVar5 == -1) || ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar5) & 0x92) != 0x82)) {
    if (*(char *)(param_1 + 0x2e8) != '\x01') goto LAB_1497eca52;
    lVar5 = (longlong)*(int *)(param_1 + 0x52c);
    if ((lVar5 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar5) & 0x92) == 0x82)) {
      *(bool *)(param_1 + 0x2e9) = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc) != 0.0;
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x530);
    if ((lVar5 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar5) & 0x92) == 0x82)) {
      *(bool *)(param_1 + 0x2ea) = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc) != 0.0;
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x534);
    if ((lVar5 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar5) & 0x92) == 0x82)) {
      *(int *)(param_1 + 0x2ec) = (int)*(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc);
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x538);
    if ((lVar5 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar5) & 0x92) == 0x82))
    goto LAB_1497ec960;
  }
  else {
    fVar1 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc);
    *(bool *)(param_1 + 0x2e8) = fVar1 != 0.0;
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      *(bool *)(param_1 + 0x2e9) =
           *(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0x52c) * 0xc) !=
           0.0;
      *(bool *)(param_1 + 0x2ea) =
           *(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0x530) * 0xc) !=
           0.0;
      *(int *)(param_1 + 0x2ec) =
           (int)*(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0x534) * 0xc
                          );
      lVar5 = (longlong)*(int *)(param_1 + 0x538);
LAB_1497ec960:
      *(bool *)(param_1 + 0x2f0) = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc) != 0.0;
    }
    else {
LAB_1497eca52:
      *(undefined2 *)(param_1 + 0x2e9) = 0;
      *(undefined4 *)(param_1 + 0x2ec) = 0;
    }
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x53c);
  if (((lVar5 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar5) & 0x92) == 0x82)) &&
     (bVar2 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc) != 0.0,
     (bool)*(char *)(param_1 + 0x2f1) != bVar2)) {
    *(bool *)(param_1 + 0x2f1) = bVar2;
    *(undefined1 *)(param_1 + 0x398) = 1;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x540);
  if (((lVar5 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar5) & 0x92) == 0x82)) &&
     (bVar2 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc) != 0.0,
     (bool)*(char *)(param_1 + 0x2f2) != bVar2)) {
    *(bool *)(param_1 + 0x2f2) = bVar2;
    *(undefined1 *)(param_1 + 0x398) = 1;
  }
  if (((longlong)*(int *)(param_1 + 0x544) != -1) &&
     ((*(byte *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 0x544)) & 0xd2) ==
      0xc2)) {
    FUN_1400021e4(&DAT_14c993590,local_50);
    FUN_1497f3ef2(&local_40,param_2,local_50);
    puVar7 = local_40;
    if (local_38 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)(local_38 - 1);
    if (local_38 == 0) {
      uVar6 = uVar8;
    }
    uVar3 = FUN_144a49b4a(uVar6,puVar7);
    iVar4 = FUN_1408ab52e(param_3,uVar3,&local_40);
    lVar5 = (longlong)iVar4 * 0x20 + *param_3;
    if (lVar5 != 0 && iVar4 != -1) {
      uVar8 = *(ulonglong *)(lVar5 + 0x10);
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (uVar8 == 0) {
      if (*(int *)(param_1 + 0x300) == *(int *)(param_1 + 0x32c)) goto LAB_1497ecb0f;
      FUN_1402226aa(param_1 + 0x2f8);
    }
    else {
      FUN_145c3f772(param_1 + 0x2f8,uVar8);
    }
    *(undefined1 *)(param_1 + 0x398) = 1;
  }
LAB_1497ecb0f:
  if (((longlong)*(int *)(param_1 + 0x548) != -1) &&
     ((*(byte *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 0x548)) & 0xd2) ==
      0xc2)) {
    FUN_1400021e4(&DAT_14c993598,local_50);
    FUN_1497f3f72(&local_40,param_2,local_50);
    puVar7 = local_40;
    if (local_38 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    uVar8 = 0;
    uVar6 = (ulonglong)(local_38 - 1);
    if (local_38 == 0) {
      uVar6 = uVar8;
    }
    uVar3 = FUN_144a49b4a(uVar6,puVar7);
    iVar4 = FUN_1408ab52e(param_3,uVar3,&local_40);
    lVar5 = (longlong)iVar4 * 0x20 + *param_3;
    if (lVar5 != 0 && iVar4 != -1) {
      uVar8 = *(ulonglong *)(lVar5 + 0x10);
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
    if (uVar8 == 0) {
      if (*(int *)(param_1 + 0x350) == *(int *)(param_1 + 0x37c)) goto LAB_1497ecb29;
      FUN_1402226aa(param_1 + 0x348);
    }
    else {
      FUN_145c3f772(param_1 + 0x348,uVar8);
    }
    *(undefined1 *)(param_1 + 0x398) = 1;
  }
LAB_1497ecb29:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497eccfa FUN_1497eccfa body=845 status=ok
// SIG undefined FUN_1497eccfa(void)

void FUN_1497eccfa(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  int local_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0xa4) == -1) {
    bVar5 = 0;
  }
  else {
    bVar5 = -(*(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0xa4) * 0xc)
             != 0.0) & 1;
  }
  lVar8 = (longlong)*(int *)(param_1 + 0xa8);
  if (lVar8 == -1) {
    fVar11 = 0.0;
    fVar10 = -980.665;
    fVar12 = 0.0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x18);
    fVar12 = *(float *)(lVar3 + lVar8 * 0xc);
    fVar11 = *(float *)(lVar3 + 4 + lVar8 * 0xc);
    fVar10 = *(float *)(lVar3 + 8 + lVar8 * 0xc);
  }
  bVar5 = bVar5 & *(byte *)(param_1 + 0x94);
  *(byte *)(param_1 + 0x14) = bVar5 ^ 1;
  fVar1 = *(float *)(param_1 + 0x84);
  if (bVar5 == 0) {
    fVar10 = *(float *)(param_1 + 0x90);
    fVar12 = *(float *)(param_1 + 0x88);
    fVar11 = *(float *)(param_1 + 0x8c);
  }
  *(float *)(param_1 + 8) = fVar12 * fVar1;
  *(float *)(param_1 + 0xc) = fVar11 * fVar1;
  *(float *)(param_1 + 0x10) = fVar10 * fVar1;
  lVar8 = (longlong)*(int *)(param_1 + 0xac);
  if ((lVar8 != -1) &&
     (bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar5 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if ((bVar5 & 0x40) == 0) {
      *(float *)(param_1 + 0x40) = fVar12;
      *(float *)(param_1 + 0x44) = fVar10 - fVar12;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      iVar7 = *(int *)(lVar3 + 8 + lVar8);
      if (iVar7 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar8);
      }
      iVar2 = *(int *)(param_1 + 0x80);
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar4,puVar9);
      iVar7 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar8);
      lVar8 = (longlong)iVar7 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar7 == -1) {
        local_98 = 0;
        uStack_90 = 0;
      }
      else {
        local_98 = *(undefined8 *)(lVar8 + 0x10);
        uStack_90 = *(undefined4 *)(lVar8 + 0x18);
        uStack_8c = *(undefined4 *)(lVar8 + 0x1c);
      }
      FUN_146ded362(&local_80,&local_98,iVar2);
      lStack_68 = 0;
      if (local_78 == iVar2) {
        lStack_68 = local_80;
      }
      local_60 = 0;
      if (local_78 == iVar2) {
        local_60 = iVar2;
      }
      fStack_54 = fVar10 - fVar12;
      local_70 = iVar2;
      fStack_58 = fVar12;
      if ((longlong *)(param_1 + 0x18) == &local_80) {
        *(int *)(param_1 + 0x38) = local_60;
        *(ulonglong *)(param_1 + 0x3c) = CONCAT44(fVar12,uStack_5c);
        *(float *)(param_1 + 0x44) = fStack_54;
        *(int *)(param_1 + 0x28) = iVar2;
        *(undefined4 *)(param_1 + 0x2c) = uStack_6c;
        *(longlong *)(param_1 + 0x30) = lStack_68;
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x18));
        }
        *(longlong *)(param_1 + 0x18) = local_80;
        local_80 = 0;
        *(int *)(param_1 + 0x20) = local_78;
        *(undefined4 *)(param_1 + 0x24) = local_74;
        *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_6c,local_70);
        *(longlong *)(param_1 + 0x30) = lStack_68;
        *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_5c,local_60);
        *(ulonglong *)(param_1 + 0x40) = CONCAT44(fStack_54,fStack_58);
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0xb0) == -1) {
    fVar10 = 1.0;
  }
  else {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0xb0) * 0xc);
  }
  fVar12 = 2.0;
  if (fVar10 <= 2.0) {
    fVar12 = fVar10;
  }
  *(float *)(param_1 + 0x48) = fVar12 * *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x9c) * fVar12;
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0xa0) * fVar12;
  if ((longlong)*(int *)(param_1 + 0xb4) == -1) {
    bVar5 = 0;
  }
  else {
    bVar5 = -(*(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0xb4) * 0xc)
             != 0.0) & 1;
  }
  *(byte *)(param_1 + 0x60) = bVar5;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ed048 FUN_1497ed048 body=1352 status=ok
// SIG undefined FUN_1497ed048(void)

void FUN_1497ed048(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_5c [4];
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar6 = FUN_1497ed592();
  if (0 < iVar6) {
    FUN_14462e0d8(param_1,&local_58,0);
    puVar4 = local_58;
    FUN_1497f2d26(param_1,&local_58);
    puVar5 = local_58;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    plVar1 = (longlong *)(param_2 + 0x78);
    local_c8 = 0;
    uStack_c0 = 0;
    if (*(int *)(param_2 + 0x84) < iVar6) {
      FUN_14481578e(plVar1,iVar6);
    }
    FUN_14482f6fa(&local_78,iVar6);
    if ((int)uStack_80._4_4_ < iVar6) {
      FUN_14482f6fa(&local_88,iVar6);
    }
    if ((int)uStack_90._4_4_ < iVar6) {
      FUN_14482f6fa(&local_98,iVar6);
    }
    if ((int)uStack_a0._4_4_ < iVar6) {
      FUN_14482f6fa(&local_a8,iVar6);
    }
    if ((int)uStack_b0._4_4_ < iVar6) {
      FUN_14482f6fa(&local_b8,iVar6);
    }
    if ((int)uStack_c0._4_4_ < iVar6) {
      FUN_14482f6fa(&local_c8,iVar6);
    }
    local_e0 = (longlong)*(int *)(param_1 + 0x80);
    if (0 < local_e0) {
      local_f0 = *(longlong *)(param_1 + 0x78);
      local_f8 = param_2 + 0xd8;
      lVar10 = 0;
      local_e8 = param_1;
      do {
        lVar9 = local_e8;
        lVar11 = *(longlong *)(local_f0 + lVar10 * 8);
        local_50 = (longlong *)(lVar11 + 0x50);
        local_d0 = CONCAT44(*(undefined4 *)(lVar11 + 0x20),DAT_14cc27388);
        local_58 = &local_d0;
        local_d8 = lVar10;
        FUN_14045f266(local_f8,local_5c,&local_58,0);
        iVar6 = FUN_1403d8766(lVar11,lVar9);
        iVar7 = FUN_1497ed5f8(lVar11,lVar9);
        if (*(longlong *)(lVar9 + 0x68) != 0) {
          iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x68) + 0x1f8) + 0x10 +
                          (longlong)iVar6 * 0x18);
        }
        if (0 < iVar7) {
          lVar11 = (longlong)iVar6;
          lVar10 = lVar11 * 0xc + 8;
          do {
            iVar2 = *(int *)(param_2 + 0x80);
            *(uint *)(param_2 + 0x80) = iVar2 + 1U;
            if (*(uint *)(param_2 + 0x84) < iVar2 + 1U) {
              FUN_1446f48e2(plVar1,iVar2);
            }
            uVar3 = uStack_70;
            *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)lVar11;
            lVar9 = (longlong)(int)uStack_70;
            uVar8 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
            if (uStack_70._4_4_ < uVar8) {
              FUN_14475e4ac(&local_78,uVar3 & 0xffffffff);
            }
            uVar3 = uStack_80;
            *(undefined4 *)(local_78 + lVar9 * 4) = *(undefined4 *)((longlong)puVar5 + lVar10 + -8);
            lVar9 = (longlong)(int)uStack_80;
            uVar8 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
            if (uStack_80._4_4_ < uVar8) {
              FUN_14475e4ac(&local_88,uVar3 & 0xffffffff);
            }
            uVar3 = uStack_90;
            *(undefined4 *)(local_88 + lVar9 * 4) = *(undefined4 *)((longlong)puVar5 + lVar10 + -4);
            lVar9 = (longlong)(int)uStack_90;
            uVar8 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
            if (uStack_90._4_4_ < uVar8) {
              FUN_14475e4ac(&local_98,uVar3 & 0xffffffff);
            }
            uVar3 = uStack_a0;
            *(undefined4 *)(local_98 + lVar9 * 4) = *(undefined4 *)((longlong)puVar5 + lVar10);
            lVar9 = (longlong)(int)uStack_a0;
            uVar8 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
            if (uStack_a0._4_4_ < uVar8) {
              FUN_14475e4ac(&local_a8,uVar3 & 0xffffffff);
            }
            uVar3 = uStack_b0;
            *(undefined4 *)(local_a8 + lVar9 * 4) = *(undefined4 *)((longlong)puVar4 + lVar10 + -8);
            lVar9 = (longlong)(int)uStack_b0;
            uVar8 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
            if (uStack_b0._4_4_ < uVar8) {
              FUN_14475e4ac(&local_b8,uVar3 & 0xffffffff);
            }
            uVar3 = uStack_c0;
            *(undefined4 *)(local_b8 + lVar9 * 4) = *(undefined4 *)((longlong)puVar4 + lVar10 + -4);
            lVar9 = (longlong)(int)uStack_c0;
            uVar8 = (int)uStack_c0 + 1;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar8);
            if (uStack_c0._4_4_ < uVar8) {
              FUN_14475e4ac(&local_c8,uVar3 & 0xffffffff);
            }
            *(undefined4 *)(local_c8 + lVar9 * 4) = *(undefined4 *)((longlong)puVar4 + lVar10);
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0xc;
          } while (lVar11 < iVar7 + iVar6);
        }
        lVar10 = local_d8 + 1;
      } while (lVar10 != local_e0);
    }
    param_2 = param_2 + 0x88;
    local_58 = &DAT_14cc27358;
    local_50 = &local_78;
    FUN_1494d8b8c(param_2,&local_d0,&local_58,0);
    local_58 = &DAT_14cc27360;
    local_50 = &local_88;
    FUN_1494d8b8c(param_2,&local_d0,&local_58,0);
    local_58 = &DAT_14cc27368;
    local_50 = &local_98;
    FUN_1494d8b8c(param_2,&local_d0,&local_58,0);
    local_58 = &DAT_14cc27370;
    local_50 = &local_a8;
    FUN_1494d8b8c(param_2,&local_d0,&local_58,0);
    local_58 = &DAT_14cc27378;
    local_50 = &local_b8;
    FUN_1494d8b8c(param_2,&local_d0,&local_58,0);
    local_58 = &DAT_14cc27380;
    local_50 = &local_c8;
    FUN_1494d8b8c(param_2,&local_d0,&local_58,0);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ed592 FUN_1497ed592 body=101 status=ok
// SIG undefined FUN_1497ed592(void)

ulonglong FUN_1497ed592(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0xe8);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = 0;
      uVar2 = 0;
      iVar5 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xe0) + lVar4);
        iVar6 = iVar5 + iVar1;
        iVar5 = -iVar1;
        if (-1 < -iVar1) {
          iVar5 = iVar1;
        }
        if (iVar1 < 1) {
          iVar6 = 0;
        }
        uVar2 = (ulonglong)(uint)((int)uVar2 + iVar6);
        lVar4 = lVar4 + 4;
      } while (lVar3 * 4 != lVar4);
    }
    return uVar2;
  }
  uVar2 = FUN_146e23064(*(longlong *)(param_1 + 0x68));
  return uVar2;
}



// FUNCTION 1497ed5f8 FUN_1497ed5f8 body=193 status=ok
// SIG undefined FUN_1497ed5f8(void)

undefined4 FUN_1497ed5f8(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong *puVar5;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x130);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar4 * 0x18);
        if (*puVar5 == param_2) goto LAB_1497ed60d;
        iVar4 = (int)puVar5[2];
      } while (iVar4 != -1);
    }
  }
  puVar5 = (ulonglong *)0x0;
LAB_1497ed60d:
  iVar4 = (int)puVar5[1];
  if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0xe8))) {
    uVar1 = **(undefined4 **)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 8);
  }
  return uVar1;
}



// FUNCTION 1497ed6ba FUN_1497ed6ba body=2983 status=ok
// SIG undefined FUN_1497ed6ba(void)

void FUN_1497ed6ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong *plVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong *plVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auStack_338 [44];
  int local_30c;
  longlong *local_308;
  longlong local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  double local_2c8;
  undefined1 *puStack_2c0;
  double local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  longlong *local_268;
  undefined8 local_260;
  undefined1 *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined2 local_238;
  undefined1 local_236;
  longlong local_230;
  undefined8 uStack_228;
  undefined2 local_220;
  undefined1 local_218 [8];
  longlong local_210;
  uint local_208;
  longlong local_190;
  int local_188;
  int local_15c;
  undefined1 local_158 [8];
  undefined1 *local_150;
  int local_148;
  longlong local_140 [2];
  undefined1 local_130 [24];
  int local_118;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_238 = 0;
  local_236 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0x101;
  plVar28 = (longlong *)0x0;
  local_240 = param_3;
  FUN_144588c92(0,local_218,&local_240,0);
  plVar32 = (longlong *)0x0;
  plVar29 = (longlong *)0x0;
  plVar27 = (longlong *)0x0;
  plVar26 = (longlong *)0x0;
  lVar19 = 0;
  if (local_188 != local_15c) {
    uVar23 = (uint)((ulonglong)DAT_14cc27358 >> 0x10);
    uVar24 = (uint)DAT_14cc27358 & 0xffff;
    if (local_150 == (undefined1 *)0x0) {
      local_150 = local_158;
    }
    uVar22 = local_148 - 1;
    iVar18 = *(int *)(local_150 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14cc27358 >> 0x20) +
                      ((uint)DAT_14cc27358 << 0x10 | uVar24) + (uVar23 << 0x13 | uVar23 & 0xffff) +
                      (uVar24 >> 4) & uVar22) * 4);
    if (iVar18 == -1) {
      plVar29 = (longlong *)0x0;
    }
    else {
      do {
        lVar19 = local_190 + (longlong)iVar18 * 0x20;
        if (*(longlong *)(local_190 + (longlong)iVar18 * 0x20) == DAT_14cc27358) goto LAB_1497ed82c;
        iVar18 = *(int *)(lVar19 + 0x18);
      } while (iVar18 != -1);
      lVar19 = 0;
LAB_1497ed82c:
      plVar29 = (longlong *)(lVar19 + 8);
      if (lVar19 == 0) {
        plVar29 = (longlong *)0x0;
      }
    }
    uVar23 = (uint)((ulonglong)DAT_14cc27360 >> 0x10);
    uVar24 = (uint)DAT_14cc27360 & 0xffff;
    iVar18 = *(int *)(local_150 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14cc27360 >> 0x20) +
                      ((uint)DAT_14cc27360 << 0x10 | uVar24) + (uVar23 << 0x13 | uVar23 & 0xffff) +
                      (uVar24 >> 4) & uVar22) * 4);
    if (iVar18 == -1) {
      plVar27 = (longlong *)0x0;
    }
    else {
      do {
        lVar19 = local_190 + (longlong)iVar18 * 0x20;
        if (*(longlong *)(local_190 + (longlong)iVar18 * 0x20) == DAT_14cc27360) goto LAB_1497ed8a8;
        iVar18 = *(int *)(lVar19 + 0x18);
      } while (iVar18 != -1);
      lVar19 = 0;
LAB_1497ed8a8:
      plVar27 = (longlong *)(lVar19 + 8);
      if (lVar19 == 0) {
        plVar27 = (longlong *)0x0;
      }
    }
    uVar23 = (uint)((ulonglong)DAT_14cc27368 >> 0x10);
    uVar24 = (uint)DAT_14cc27368 & 0xffff;
    iVar18 = *(int *)(local_150 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14cc27368 >> 0x20) +
                      ((uint)DAT_14cc27368 << 0x10 | uVar24) + (uVar23 << 0x13 | uVar23 & 0xffff) +
                      (uVar24 >> 4) & uVar22) * 4);
    if (iVar18 == -1) {
      plVar32 = (longlong *)0x0;
    }
    else {
      do {
        lVar19 = local_190 + (longlong)iVar18 * 0x20;
        if (*(longlong *)(local_190 + (longlong)iVar18 * 0x20) == DAT_14cc27368) goto LAB_1497ed925;
        iVar18 = *(int *)(lVar19 + 0x18);
      } while (iVar18 != -1);
      lVar19 = 0;
LAB_1497ed925:
      plVar32 = (longlong *)(lVar19 + 8);
      if (lVar19 == 0) {
        plVar32 = (longlong *)0x0;
      }
    }
    uVar23 = (uint)((ulonglong)DAT_14cc27370 >> 0x10);
    uVar24 = (uint)DAT_14cc27370 & 0xffff;
    iVar18 = *(int *)(local_150 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14cc27370 >> 0x20) +
                      ((uint)DAT_14cc27370 << 0x10 | uVar24) + (uVar23 << 0x13 | uVar23 & 0xffff) +
                      (uVar24 >> 4) & uVar22) * 4);
    if (iVar18 == -1) {
      plVar26 = (longlong *)0x0;
    }
    else {
      do {
        lVar19 = local_190 + (longlong)iVar18 * 0x20;
        if (*(longlong *)(local_190 + (longlong)iVar18 * 0x20) == DAT_14cc27370) goto LAB_1497ed9a1;
        iVar18 = *(int *)(lVar19 + 0x18);
      } while (iVar18 != -1);
      lVar19 = 0;
LAB_1497ed9a1:
      plVar26 = (longlong *)(lVar19 + 8);
      if (lVar19 == 0) {
        plVar26 = (longlong *)0x0;
      }
    }
    uVar23 = (uint)((ulonglong)DAT_14cc27378 >> 0x10);
    uVar24 = (uint)DAT_14cc27378 & 0xffff;
    iVar18 = *(int *)(local_150 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14cc27378 >> 0x20) +
                      ((uint)DAT_14cc27378 << 0x10 | uVar24) + (uVar23 << 0x13 | uVar23 & 0xffff) +
                      (uVar24 >> 4) & uVar22) * 4);
    if (iVar18 == -1) {
      plVar28 = (longlong *)0x0;
    }
    else {
      do {
        lVar19 = local_190 + (longlong)iVar18 * 0x20;
        if (*(longlong *)(local_190 + (longlong)iVar18 * 0x20) == DAT_14cc27378) goto LAB_1497eda1d;
        iVar18 = *(int *)(lVar19 + 0x18);
      } while (iVar18 != -1);
      lVar19 = 0;
LAB_1497eda1d:
      plVar28 = (longlong *)(lVar19 + 8);
      if (lVar19 == 0) {
        plVar28 = (longlong *)0x0;
      }
    }
    uVar23 = (uint)((ulonglong)DAT_14cc27380 >> 0x10);
    uVar24 = (uint)DAT_14cc27380 & 0xffff;
    iVar18 = *(int *)(local_150 +
                     (ulonglong)
                     ((int)((ulonglong)DAT_14cc27380 >> 0x20) +
                      ((uint)DAT_14cc27380 << 0x10 | uVar24) + (uVar23 << 0x13 | uVar23 & 0xffff) +
                      (uVar24 >> 4) & uVar22) * 4);
    while (iVar18 != -1) {
      lVar19 = local_190 + (longlong)iVar18 * 0x20;
      if (*(longlong *)(local_190 + (longlong)iVar18 * 0x20) == DAT_14cc27380) goto LAB_1497eda77;
      iVar18 = *(int *)(lVar19 + 0x18);
    }
    lVar19 = 0;
  }
LAB_1497eda77:
  plVar30 = (longlong *)(lVar19 + 8);
  if (lVar19 == 0) {
    plVar30 = (longlong *)0x0;
  }
  local_300 = param_4;
  dVar15 = local_250;
  if ((((((ulonglong)local_208 != 0) && (plVar28 != (longlong *)0x0)) &&
       (plVar26 != (longlong *)0x0)) &&
      ((plVar32 != (longlong *)0x0 && (plVar29 != (longlong *)0x0)))) &&
     ((plVar27 != (longlong *)0x0 && (plVar30 != (longlong *)0x0)))) {
    local_30c = 0;
    local_308 = plVar29;
    FUN_1402221ea(param_4,&local_2c8,0);
    dVar16 = local_2c8;
    FUN_1408ac1ca(param_4,&local_2c8,0);
    dVar17 = local_2c8;
    lVar19 = local_300;
    if (0 < (int)local_208) {
      uVar20 = 0;
      do {
        lVar25 = (longlong)*(int *)(local_210 + uVar20 * 4) * 0xc;
        *(undefined4 *)((longlong)local_2c8 + lVar25) = *(undefined4 *)(*local_308 + uVar20 * 4);
        *(undefined4 *)((longlong)local_2c8 + 4 + lVar25) = *(undefined4 *)(*plVar27 + uVar20 * 4);
        *(undefined4 *)((longlong)local_2c8 + 8 + lVar25) = *(undefined4 *)(*plVar32 + uVar20 * 4);
        *(undefined4 *)((longlong)dVar16 + lVar25) = *(undefined4 *)(*plVar26 + uVar20 * 4);
        *(undefined4 *)((longlong)dVar16 + 4 + lVar25) = *(undefined4 *)(*plVar28 + uVar20 * 4);
        *(undefined4 *)((longlong)dVar16 + 8 + lVar25) = *(undefined4 *)(*plVar30 + uVar20 * 4);
        uVar20 = uVar20 + 1;
      } while (local_208 != uVar20);
    }
    local_2d0 = *(longlong **)(local_300 + 0x78);
    local_308 = (longlong *)(longlong)*(int *)(local_300 + 0x80);
    local_2c8 = 2.12199579096527e-314;
    local_2b8 = 2.12199579047121e-314;
    uStack_2b0 = 0;
    puStack_2c0 = local_130;
    if (local_118 != 0) {
      FUN_1449c0562(&local_2c8);
      local_30c = local_118;
    }
    local_250 = local_2b8;
    dVar15 = local_250;
    local_248 = uStack_2b0;
    local_244 = uStack_2ac;
    local_260 = local_2c8;
    local_258 = puStack_2c0;
    local_250._4_4_ = (int)((ulonglong)local_2b8 >> 0x20);
    local_268 = local_140;
    if ((local_250._4_4_ != local_30c) || (puStack_2c0 != local_130)) {
      local_2d8 = (longlong)local_308 << 3;
      iVar18 = local_250._4_4_;
      local_250 = dVar15;
      do {
        if ((*(int *)(*local_268 + (longlong)iVar18 * 0x80) == DAT_14cc27388) &&
           ((int)local_308 != 0)) {
          lVar31 = *local_268 + (longlong)iVar18 * 0x80;
          plVar29 = local_2d0;
          lVar25 = local_2d8;
          do {
            lVar3 = *plVar29;
            if (*(int *)(lVar3 + 0x20) == *(int *)(lVar31 + 4)) {
              bVar21 = lVar3 == 0 || plVar29 == (longlong *)0x0;
              if (bVar21) break;
              auVar7._8_8_ = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS(*(double *)(lVar3 + 0x78) - *(double *)(lVar31 + 0x38)));
              auVar7._0_8_ = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS(*(double *)(lVar3 + 0x70) - *(double *)(lVar31 + 0x30)));
              iVar18 = movmskpd(CONCAT31((int3)((uint)*(int *)(lVar31 + 4) >> 8),
                                         plVar29 == (longlong *)0x0),auVar7);
              lVar25 = -(ulonglong)
                        (9.999999747378752e-05 <
                        ABS(*(double *)(lVar3 + 0x88) - *(double *)(lVar31 + 0x48)));
              auVar4._8_4_ = (int)lVar25;
              auVar4._0_8_ = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS(*(double *)(lVar3 + 0x80) - *(double *)(lVar31 + 0x40)));
              auVar4._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
              uVar23 = movmskpd((int)CONCAT71((int7)((ulonglong)plVar29 >> 8),bVar21),auVar4);
              if ((uVar23 & 0x3fffffff) == 0 && iVar18 == 0) {
                lVar25 = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(lVar3 + 0x58) - *(double *)(lVar31 + 0x18)));
                auVar10._8_4_ = (int)lVar25;
                auVar10._0_8_ =
                     -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(lVar3 + 0x50) - *(double *)(lVar31 + 0x10)));
                auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                uVar23 = movmskpd(iVar18,auVar10);
                auVar34._8_8_ =
                     -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(lVar3 + 0x68) - *(double *)(lVar31 + 0x28)));
                auVar34._0_8_ =
                     -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(lVar3 + 0x60) - *(double *)(lVar31 + 0x20)));
                iVar18 = movmskpd(0,auVar34);
                uVar24 = iVar18 << 2 | uVar23;
                if (uVar24 != 0) {
                  auVar8._8_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS(*(double *)(lVar3 + 0x58) + *(double *)(lVar31 + 0x18)));
                  auVar8._0_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS(*(double *)(lVar3 + 0x50) + *(double *)(lVar31 + 0x10)));
                  uVar23 = movmskpd(uVar23,auVar8);
                  auVar6._8_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS(*(double *)(lVar3 + 0x68) + *(double *)(lVar31 + 0x28)));
                  auVar6._0_8_ = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS(*(double *)(lVar3 + 0x60) + *(double *)(lVar31 + 0x20)));
                  uVar24 = movmskpd(uVar24,auVar6);
                  if ((uVar24 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_1497edefa;
                }
                auVar9._8_8_ = -(ulonglong)
                                (9.999999747378752e-05 <
                                ABS(*(double *)(lVar3 + 0x98) - *(double *)(lVar31 + 0x58)));
                auVar9._0_8_ = -(ulonglong)
                                (9.999999747378752e-05 <
                                ABS(*(double *)(lVar3 + 0x90) - *(double *)(lVar31 + 0x50)));
                iVar18 = movmskpd(uVar23,auVar9);
                lVar25 = -(ulonglong)
                          (9.999999747378752e-05 <
                          ABS(*(double *)(lVar3 + 0xa8) - *(double *)(lVar31 + 0x68)));
                auVar5._8_4_ = (int)lVar25;
                auVar5._0_8_ = -(ulonglong)
                                (9.999999747378752e-05 <
                                ABS(*(double *)(lVar3 + 0xa0) - *(double *)(lVar31 + 0x60)));
                auVar5._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                uVar23 = movmskpd(0,auVar5);
                if ((uVar23 & 0x3fffffff) == 0 && iVar18 == 0) break;
              }
LAB_1497edefa:
              iVar18 = FUN_1403d8766(lVar3,lVar19);
              if (*(longlong *)(lVar19 + 0x68) != 0) {
                iVar18 = *(int *)(*(longlong *)(*(longlong *)(lVar19 + 0x68) + 0x1f8) + 0x10 +
                                 (longlong)iVar18 * 0x18);
              }
              local_2f8 = (double)CONCAT44(local_2f8._4_4_,iVar18);
              FUN_1449437a2(lVar3 + 0x50,&local_2c8,lVar31 + 0x10);
              iVar18 = FUN_1497ed5f8(lVar3,lVar19);
              if (0 < iVar18) {
                iVar18 = iVar18 + local_2f8._0_4_;
                lVar31 = (longlong)local_2f8._0_4_;
                local_2f8 = local_2a8;
                dStack_2f0 = dStack_2a0;
                dVar15 = (double)CONCAT44(uStack_2ac,uStack_2b0);
                local_2e0 = local_298;
                lVar25 = lVar31 * 0xc + 8;
                do {
                  dVar1 = *(double *)(lVar19 + 0x2c8);
                  dVar2 = *(double *)(lVar19 + 0x2c0);
                  dVar35 = (double)((float)*(double *)(lVar19 + 0x2b8) +
                                   *(float *)((longlong)dVar16 + -8 + lVar25)) * local_288;
                  dVar13 = (double)((float)dVar2 + *(float *)((longlong)dVar16 + -4 + lVar25)) *
                           dStack_280;
                  dVar33 = (double)((float)dVar1 + *(float *)((longlong)dVar16 + lVar25)) *
                           local_278;
                  dVar11 = dVar13 * local_2c8 - (double)puStack_2c0 * dVar35;
                  dVar12 = dVar33 * (double)puStack_2c0 - local_2b8 * dVar13;
                  dVar14 = dVar35 * local_2b8 - local_2c8 * dVar33;
                  dVar12 = dVar12 + dVar12;
                  dVar14 = dVar14 + dVar14;
                  dVar11 = dVar11 + dVar11;
                  *(float *)((longlong)dVar16 + -8 + lVar25) =
                       (float)(((dVar11 * (double)puStack_2c0 - dVar14 * local_2b8) +
                                dVar15 * dVar12 + dVar35 + local_2a8) - *(double *)(lVar19 + 0x2b8))
                  ;
                  *(float *)((longlong)dVar16 + -4 + lVar25) =
                       (float)(((local_2b8 * dVar12 - local_2c8 * dVar11) +
                                (double)CONCAT44(uStack_2ac,uStack_2b0) * dVar14 + dVar13 +
                               dStack_2a0) - dVar2);
                  *(float *)((longlong)dVar16 + lVar25) =
                       (float)((dVar11 * dVar15 + dVar33 +
                                (dVar14 * local_2c8 - dVar12 * (double)puStack_2c0) + local_298) -
                              dVar1);
                  dVar2 = (double)*(float *)((longlong)dVar17 + -8 + lVar25) * local_288;
                  dVar11 = (double)*(float *)((longlong)dVar17 + -4 + lVar25) * dStack_280;
                  dVar35 = (double)*(float *)((longlong)dVar17 + lVar25) * local_278;
                  dVar12 = dVar11 * local_2c8 - (double)puStack_2c0 * dVar2;
                  dVar14 = dVar35 * (double)puStack_2c0 - local_2b8 * dVar11;
                  dVar1 = dVar2 * local_2b8 - local_2c8 * dVar35;
                  dVar14 = dVar14 + dVar14;
                  dVar1 = dVar1 + dVar1;
                  dVar12 = dVar12 + dVar12;
                  *(float *)((longlong)dVar17 + -8 + lVar25) =
                       (float)((dVar12 * (double)puStack_2c0 - dVar1 * local_2b8) +
                              dVar15 * dVar14 + dVar2);
                  *(float *)((longlong)dVar17 + -4 + lVar25) =
                       (float)((local_2b8 * dVar14 - local_2c8 * dVar12) +
                              (double)CONCAT44(uStack_2ac,uStack_2b0) * dVar1 + dVar11);
                  *(float *)((longlong)dVar17 + lVar25) =
                       (float)(dVar12 * dVar15 + dVar35 +
                              (dVar1 * local_2c8 - dVar14 * (double)puStack_2c0));
                  lVar31 = lVar31 + 1;
                  lVar25 = lVar25 + 0xc;
                } while (lVar31 < iVar18);
              }
              break;
            }
            plVar29 = plVar29 + 1;
            lVar25 = lVar25 + -8;
          } while (lVar25 != 0);
        }
        local_250 = (double)CONCAT44(local_250._4_4_,(uint)local_250 & ~local_260._4_4_);
        FUN_1449c0562(&local_260);
        iVar18 = local_250._4_4_;
        dVar15 = local_250;
      } while (local_268 != local_140 || (local_258 != local_130 || local_250._4_4_ != local_30c));
    }
  }
  local_250 = dVar15;
  FUN_1496e16e8(local_218);
  if (local_230 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ee262 FUN_1497ee262 body=1851 status=ok
// SIG undefined FUN_1497ee262(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1497ee262(undefined8 param_1,double param_2,longlong *param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_2e8 [32];
  ulonglong local_2c8;
  void *local_2c0;
  longlong *local_2b8;
  undefined4 local_2ac;
  longlong *local_2a8;
  undefined8 local_2a0;
  undefined1 *local_298;
  uint local_290;
  int iStack_28c;
  undefined4 local_288;
  undefined4 local_284;
  longlong *local_280;
  undefined2 local_278;
  undefined1 local_276;
  longlong local_270;
  undefined8 uStack_268;
  undefined2 local_260;
  undefined4 *local_258;
  undefined1 *local_250;
  uint local_248;
  int iStack_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 local_234 [4];
  undefined1 local_230 [8];
  void *local_228;
  int local_220;
  longlong local_1a8;
  int local_1a0;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  longlong local_158 [2];
  undefined1 local_148 [24];
  int local_130;
  longlong local_108 [5];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  plVar17 = (longlong *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  puVar11 = &DAT_14c846480;
  puVar12 = local_a8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  local_108[0] = (ulonglong)(uint)(float)param_2 << 0x20;
  local_280 = local_108;
  local_278 = 0;
  local_276 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0x101;
  FUN_144588c92(param_1,local_230,&local_280,0);
  plVar16 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  plVar15 = (longlong *)0x0;
  plVar10 = (longlong *)0x0;
  lVar6 = 0;
  if (local_1a0 != local_174) {
    uVar3 = (uint)((ulonglong)DAT_14cc27358 >> 0x10);
    uVar4 = (uint)DAT_14cc27358 & 0xffff;
    if (local_168 == (undefined1 *)0x0) {
      local_168 = local_170;
    }
    uVar5 = local_160 - 1;
    iVar9 = *(int *)(local_168 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14cc27358 >> 0x20) + ((uint)DAT_14cc27358 << 0x10 | uVar4)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
    if (iVar9 == -1) {
      plVar14 = (longlong *)0x0;
    }
    else {
      do {
        lVar6 = local_1a8 + (longlong)iVar9 * 0x20;
        if (*(longlong *)(local_1a8 + (longlong)iVar9 * 0x20) == DAT_14cc27358) goto LAB_1497ee6c1;
        iVar9 = *(int *)(lVar6 + 0x18);
      } while (iVar9 != -1);
      lVar6 = 0;
LAB_1497ee6c1:
      plVar14 = (longlong *)(lVar6 + 8);
      if (lVar6 == 0) {
        plVar14 = (longlong *)0x0;
      }
    }
    uVar3 = (uint)((ulonglong)DAT_14cc27360 >> 0x10);
    uVar4 = (uint)DAT_14cc27360 & 0xffff;
    iVar9 = *(int *)(local_168 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14cc27360 >> 0x20) + ((uint)DAT_14cc27360 << 0x10 | uVar4)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
    if (iVar9 == -1) {
      plVar15 = (longlong *)0x0;
    }
    else {
      do {
        lVar6 = local_1a8 + (longlong)iVar9 * 0x20;
        if (*(longlong *)(local_1a8 + (longlong)iVar9 * 0x20) == DAT_14cc27360) goto LAB_1497ee73e;
        iVar9 = *(int *)(lVar6 + 0x18);
      } while (iVar9 != -1);
      lVar6 = 0;
LAB_1497ee73e:
      plVar15 = (longlong *)(lVar6 + 8);
      if (lVar6 == 0) {
        plVar15 = (longlong *)0x0;
      }
    }
    uVar3 = (uint)((ulonglong)DAT_14cc27368 >> 0x10);
    uVar4 = (uint)DAT_14cc27368 & 0xffff;
    iVar9 = *(int *)(local_168 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14cc27368 >> 0x20) + ((uint)DAT_14cc27368 << 0x10 | uVar4)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
    if (iVar9 == -1) {
      plVar16 = (longlong *)0x0;
    }
    else {
      do {
        lVar6 = local_1a8 + (longlong)iVar9 * 0x20;
        if (*(longlong *)(local_1a8 + (longlong)iVar9 * 0x20) == DAT_14cc27368) goto LAB_1497ee7bb;
        iVar9 = *(int *)(lVar6 + 0x18);
      } while (iVar9 != -1);
      lVar6 = 0;
LAB_1497ee7bb:
      plVar16 = (longlong *)(lVar6 + 8);
      if (lVar6 == 0) {
        plVar16 = (longlong *)0x0;
      }
    }
    uVar3 = (uint)((ulonglong)DAT_14cc27370 >> 0x10);
    uVar4 = (uint)DAT_14cc27370 & 0xffff;
    iVar9 = *(int *)(local_168 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14cc27370 >> 0x20) + ((uint)DAT_14cc27370 << 0x10 | uVar4)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
    if (iVar9 == -1) {
      plVar10 = (longlong *)0x0;
    }
    else {
      do {
        lVar6 = local_1a8 + (longlong)iVar9 * 0x20;
        if (*(longlong *)(local_1a8 + (longlong)iVar9 * 0x20) == DAT_14cc27370) goto LAB_1497ee837;
        iVar9 = *(int *)(lVar6 + 0x18);
      } while (iVar9 != -1);
      lVar6 = 0;
LAB_1497ee837:
      plVar10 = (longlong *)(lVar6 + 8);
      if (lVar6 == 0) {
        plVar10 = (longlong *)0x0;
      }
    }
    uVar3 = (uint)((ulonglong)DAT_14cc27378 >> 0x10);
    uVar4 = (uint)DAT_14cc27378 & 0xffff;
    iVar9 = *(int *)(local_168 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14cc27378 >> 0x20) + ((uint)DAT_14cc27378 << 0x10 | uVar4)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
    if (iVar9 == -1) {
      plVar17 = (longlong *)0x0;
    }
    else {
      do {
        lVar6 = local_1a8 + (longlong)iVar9 * 0x20;
        if (*(longlong *)(local_1a8 + (longlong)iVar9 * 0x20) == DAT_14cc27378) goto LAB_1497ee8b4;
        iVar9 = *(int *)(lVar6 + 0x18);
      } while (iVar9 != -1);
      lVar6 = 0;
LAB_1497ee8b4:
      plVar17 = (longlong *)(lVar6 + 8);
      if (lVar6 == 0) {
        plVar17 = (longlong *)0x0;
      }
    }
    uVar3 = (uint)((ulonglong)DAT_14cc27380 >> 0x10);
    uVar4 = (uint)DAT_14cc27380 & 0xffff;
    iVar9 = *(int *)(local_168 +
                    (ulonglong)
                    ((int)((ulonglong)DAT_14cc27380 >> 0x20) + ((uint)DAT_14cc27380 << 0x10 | uVar4)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4) & uVar5) * 4);
    if (iVar9 == -1) {
      lVar6 = 0;
    }
    else {
      do {
        lVar6 = local_1a8 + (longlong)iVar9 * 0x20;
        if (*(longlong *)(local_1a8 + (longlong)iVar9 * 0x20) == DAT_14cc27380) goto LAB_1497ee34c;
        iVar9 = *(int *)(lVar6 + 0x18);
      } while (iVar9 != -1);
      lVar6 = 0;
    }
  }
LAB_1497ee34c:
  plVar13 = (longlong *)(lVar6 + 8);
  if (lVar6 == 0) {
    plVar13 = (longlong *)0x0;
  }
  if (((plVar17 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) && (plVar13 != (longlong *)0x0)
     ) {
    ppvVar1 = (void **)(param_3 + 4);
    local_2b8 = plVar14;
    if (ppvVar1 != &local_228) {
      local_2c8 = (ulonglong)local_220;
      *(int *)(param_3 + 5) = local_220;
      if (local_220 == 0 && *(int *)((longlong)param_3 + 0x2c) == 0) {
        *(undefined4 *)((longlong)param_3 + 0x2c) = 0;
      }
      else {
        local_2c0 = local_228;
        FUN_144a06ca8(ppvVar1);
        if ((int)local_2c8 != 0) {
          memcpy(*ppvVar1,local_2c0,local_2c8 << 2);
        }
      }
    }
    local_2c8 = (ulonglong)local_220;
    FUN_14051b394(param_3,local_2c8,1);
    plVar2 = param_3 + 2;
    uVar7 = 0;
    if ((plVar14 != (longlong *)0x0 && plVar15 != (longlong *)0x0) && plVar16 != (longlong *)0x0) {
      uVar7 = local_2c8 & 0xffffffff;
    }
    FUN_14051b394(plVar2,uVar7,1);
    if (0 < (longlong)local_2c8) {
      lVar6 = 0;
      lVar8 = 0;
      do {
        *(double *)(*param_3 + lVar8) = (double)*(float *)(*plVar10 + lVar6);
        *(double *)(*param_3 + 8 + lVar8) = (double)*(float *)(*plVar17 + lVar6);
        *(double *)(*param_3 + 0x10 + lVar8) = (double)*(float *)(*plVar13 + lVar6);
        if ((plVar14 != (longlong *)0x0 && plVar15 != (longlong *)0x0) && plVar16 != (longlong *)0x0
           ) {
          *(double *)(*plVar2 + lVar8) = (double)*(float *)(*local_2b8 + lVar6);
          *(double *)(*plVar2 + 8 + lVar8) = (double)*(float *)(*plVar15 + lVar6);
          *(double *)(*plVar2 + 0x10 + lVar8) = (double)*(float *)(*plVar16 + lVar6);
        }
        lVar8 = lVar8 + 0x18;
        lVar6 = lVar6 + 4;
      } while (local_2c8 * 0x18 != lVar8);
    }
  }
  FUN_149800cfa(param_3 + 6);
  local_258 = (undefined4 *)&DAT_100000000;
  local_248 = 0xffffffff;
  iStack_244 = 0;
  local_240 = 0;
  iVar9 = 0;
  local_250 = local_148;
  if (local_130 != 0) {
    FUN_1449c0562(&local_258);
    iVar9 = local_130;
  }
  local_290 = local_248;
  iStack_28c = iStack_244;
  local_288 = local_240;
  local_284 = local_23c;
  local_2a0 = local_258;
  local_298 = local_250;
  local_2a8 = local_158;
  if ((iStack_244 != iVar9) || (local_250 != local_148)) {
    do {
      if (*(int *)(*local_2a8 + (longlong)iStack_28c * 0x80) == DAT_14cc27388) {
        lVar6 = *local_2a8 + (longlong)iStack_28c * 0x80;
        local_2ac = *(undefined4 *)(lVar6 + 4);
        local_250 = (undefined1 *)(lVar6 + 0x10);
        local_258 = &local_2ac;
        FUN_149800e82(param_3 + 6,local_234);
      }
      local_290 = local_290 & ~local_2a0._4_4_;
      FUN_1449c0562(&local_2a0);
    } while (local_2a8 != local_158 || (local_298 != local_148 || iStack_28c != iVar9));
  }
  FUN_1496e16e8(local_230);
  if (local_270 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(local_108 + 1);
  if ((local_48 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497ee99e FUN_1497ee99e body=18 status=ok
// SIG undefined FUN_1497ee99e(void)

bool FUN_1497ee99e(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x40) < 1) {
    bVar1 = 0 < *(int *)(param_1 + 0x60);
  }
  return bVar1;
}



// FUNCTION 1497ee9b0 FUN_1497ee9b0 body=418 status=ok
// SIG undefined FUN_1497ee9b0(void)

void FUN_1497ee9b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_2 != (longlong *)0x0) &&
      (((lVar1 = param_2[0x16], lVar1 != 0 || (lVar1 = FUN_1448abda6(param_2), lVar1 != 0)) &&
       (*(longlong *)(lVar1 + 0x288) != 0)))) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(*param_2 + 0x528))(param_2,&local_d0,param_2 + 0x48);
    local_70 = local_c0 + local_a8;
    local_78 = local_c8 + local_b0;
    local_80 = local_d0 + local_b8;
    local_88 = local_c0 - local_a8;
    local_90 = local_c8 - local_b0;
    local_98 = local_d0 - local_b8;
    local_68 = 1;
    local_d8 = *(longlong *)(param_1 + 0x18) + 0x460;
    FUN_147c90d02(*(undefined8 *)(lVar1 + 0x288),0,&local_98,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2f8));
    local_d8 = *(longlong *)(param_1 + 0x18) + 0x470;
    FUN_147c90f68(*(undefined8 *)(lVar1 + 0x288),0,&local_98,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2f8));
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497eeb54 FUN_1497eeb54 body=233 status=ok
// SIG undefined FUN_1497eeb54(void)

void FUN_1497eeb54(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = *(char **)(*(longlong *)(param_1 + 0x18) + 0x90);
  if (*pcVar1 == '\x01') {
    plVar4 = *(longlong **)(pcVar1 + 0x18);
  }
  else {
    plVar4 = (longlong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x88) * 8 +
             *(longlong *)(pcVar1 + 0x18));
  }
  lVar2 = *plVar4;
  FUN_140056680(local_50,L"NumIterations");
  iVar3 = FUN_144a41c6c(lVar2,local_50);
  if (iVar3 != -1) {
    fVar5 = (float)param_2;
    local_3c = fVar5;
    local_38 = fVar5;
    local_34 = fVar5;
    FUN_14980241a(lVar2,iVar3,lVar2 + 0x18,&local_3c);
    local_3c = fVar5;
    local_38 = fVar5;
    local_34 = fVar5;
    FUN_14980241a(lVar2,iVar3,lVar2 + 0x28,&local_3c);
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eec3e FUN_1497eec3e body=233 status=ok
// SIG undefined FUN_1497eec3e(void)

void FUN_1497eec3e(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = *(char **)(*(longlong *)(param_1 + 0x18) + 0x90);
  if (*pcVar1 == '\x01') {
    plVar4 = *(longlong **)(pcVar1 + 0x18);
  }
  else {
    plVar4 = (longlong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x88) * 8 +
             *(longlong *)(pcVar1 + 0x18));
  }
  lVar2 = *plVar4;
  FUN_140056680(local_50,L"MaxNumIterations");
  iVar3 = FUN_144a41c6c(lVar2,local_50);
  if (iVar3 != -1) {
    fVar5 = (float)param_2;
    local_3c = fVar5;
    local_38 = fVar5;
    local_34 = fVar5;
    FUN_14980241a(lVar2,iVar3,lVar2 + 0x18,&local_3c);
    local_3c = fVar5;
    local_38 = fVar5;
    local_34 = fVar5;
    FUN_14980241a(lVar2,iVar3,lVar2 + 0x28,&local_3c);
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eed28 FUN_1497eed28 body=233 status=ok
// SIG undefined FUN_1497eed28(void)

void FUN_1497eed28(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pcVar1 = *(char **)(*(longlong *)(param_1 + 0x18) + 0x90);
  if (*pcVar1 == '\x01') {
    plVar4 = *(longlong **)(pcVar1 + 0x18);
  }
  else {
    plVar4 = (longlong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x88) * 8 +
             *(longlong *)(pcVar1 + 0x18));
  }
  lVar2 = *plVar4;
  FUN_140056680(local_50,L"NumSubsteps");
  iVar3 = FUN_144a41c6c(lVar2,local_50);
  if (iVar3 != -1) {
    fVar5 = (float)param_2;
    local_3c = fVar5;
    local_38 = fVar5;
    local_34 = fVar5;
    FUN_14980241a(lVar2,iVar3,lVar2 + 0x18,&local_3c);
    local_3c = fVar5;
    local_38 = fVar5;
    local_34 = fVar5;
    FUN_14980241a(lVar2,iVar3,lVar2 + 0x28,&local_3c);
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eee12 FUN_1497eee12 body=336 status=ok
// SIG undefined FUN_1497eee12(void)

void FUN_1497eee12(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x70) + 0x20;
    piVar12 = (int *)(*(longlong *)(param_1 + 0x70) + 0x38);
  }
  else {
    lVar9 = lVar5 + 0x30;
    piVar12 = (int *)(lVar5 + 0x48);
  }
  lVar5 = param_2[5];
  if (0 < (longlong)(int)lVar5) {
    iVar3 = *piVar12;
    lVar8 = param_2[3];
    lVar13 = 4;
    lVar10 = 0;
    do {
      iVar4 = *(int *)(param_2[4] + lVar10 * 4);
      lVar11 = (longlong)iVar4;
      if (iVar4 < iVar3) {
        lVar6 = *param_2;
        dVar1 = *(double *)(lVar6 + lVar13 * 4);
        dVar2 = *(double *)(lVar6 + -8 + lVar13 * 4);
        lVar7 = *(longlong *)(lVar9 + 0x28);
        *(float *)(lVar7 + lVar11 * 0xc) = (float)*(double *)(lVar6 + -0x10 + lVar13 * 4);
        *(float *)(lVar7 + 4 + lVar11 * 0xc) = (float)dVar2;
        *(float *)(lVar7 + 8 + lVar11 * 0xc) = (float)dVar1;
        fVar14 = DAT_14c846338;
        fVar15 = DAT_14c846330._4_4_;
        fVar16 = (float)DAT_14c846330;
        if (0 < (int)lVar8) {
          lVar6 = param_2[2];
          fVar14 = (float)*(double *)(lVar6 + lVar13 * 4);
          fVar15 = (float)*(double *)(lVar6 + -8 + lVar13 * 4);
          fVar16 = (float)*(double *)(lVar6 + -0x10 + lVar13 * 4);
        }
        lVar6 = *(longlong *)(lVar9 + 0x48);
        *(float *)(lVar6 + lVar11 * 0xc) = fVar16;
        *(float *)(lVar6 + 4 + lVar11 * 0xc) = fVar15;
        *(float *)(lVar6 + 8 + lVar11 * 0xc) = fVar14;
      }
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 6;
    } while ((int)lVar5 != lVar10);
  }
  local_28 = &local_40;
  local_30 = FUN_144639d9e;
  local_40 = param_1;
  local_38 = param_2;
  FUN_1400bd65e(*(undefined4 *)(param_1 + 0x80),&local_30,0);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497eef64 FUN_1497eef64 body=299 status=ok
// SIG undefined FUN_1497eef64(void)

undefined8 * FUN_1497eef64(longlong param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140cc024c(param_2,**(undefined8 **)(param_1 + 0x20));
  FUN_140cc024c(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8));
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    uVar1 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    lVar5 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x78) - 1U &
                             (uVar2 * 0x40 + (uVar1 >> 0x10 ^ uVar1) + (uVar2 >> 2) + 0x9e3779b9 ^
                             uVar2)) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      do {
        lVar6 = (longlong)iVar3 * 0x20;
        lVar4 = lVar5 + lVar6;
        if ((*(ulonglong *)(lVar5 + lVar6) == param_3) &&
           (*(ulonglong *)(lVar5 + 8 + lVar6) == param_4)) goto LAB_1497eefb4;
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_1497eefb4:
  if (1 < (longlong)*(int *)(lVar4 + 0x10)) {
    FUN_140cc024c(param_2,*(undefined8 *)
                           (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar4 + 0x10) * 8));
  }
  return param_2;
}



// FUNCTION 1497ef090 FUN_1497ef090 body=101 status=ok
// SIG undefined FUN_1497ef090(void)

void FUN_1497ef090(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar3 = 0;
    do {
      FUN_1497efa7c(*(undefined8 *)(lVar2 + lVar3),param_1);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_149802f42(param_1 + 0x78);
  }
  FUN_1497f2c6a(param_1);
  return;
}



// FUNCTION 1497ef0f6 FUN_1497ef0f6 body=220 status=ok
// SIG undefined FUN_1497ef0f6(void)

longlong FUN_1497ef0f6(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  lVar3 = FUN_1414ccbe2();
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar3 = *(longlong *)(lVar3 + 0x18);
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar7 * 0x18),
            *plVar1 != lVar3) {
        iVar7 = (int)plVar1[2];
        if (iVar7 == -1) {
          return 0;
        }
      }
      if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
         (lVar3 = plVar1[1], lVar3 != 0)) {
        lVar4 = *(longlong *)(lVar3 + 0x10);
        lVar5 = FUN_1414ccbe2();
        if (lVar4 != lVar5) {
          return 0;
        }
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1497ef1d2 FUN_1497ef1d2 body=1056 status=ok
// SIG undefined FUN_1497ef1d2(void)

void FUN_1497ef1d2(longlong param_1,uint param_2,float *param_3,longlong *param_4,float param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [44];
  int local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar13 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xe8);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xe0);
    if ((int)uVar13 < 1) {
      uVar11 = 0;
    }
    else {
      uVar10 = -param_2;
      if ((int)-param_2 < 0) {
        uVar10 = param_2;
      }
      uVar11 = 0;
      do {
        uVar1 = (uVar13 >> 1) + uVar11;
        uVar3 = *(uint *)(lVar14 + (ulonglong)uVar1 * 4);
        uVar12 = -uVar3;
        if ((int)uVar12 < 0) {
          uVar12 = uVar3;
        }
        if (uVar12 <= uVar10) {
          uVar11 = uVar1 + (uVar13 & 1);
        }
        bVar5 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar5);
    }
    iVar16 = *(int *)(lVar14 + (ulonglong)uVar11 * 4);
    iVar7 = -iVar16;
    if (iVar7 < 0) {
      iVar7 = iVar16;
    }
    uVar11 = iVar7 - param_2;
    uVar13 = *(uint *)(param_4 + 1);
    lVar14 = 0;
    if (uVar13 == uVar11) {
      lVar14 = *param_4;
    }
    fVar18 = *param_3;
    fVar2 = param_3[1];
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    FUN_1400baa38(param_6);
    if (0 < (int)uVar11) {
      lVar15 = *(longlong *)(param_1 + 0x70);
      uVar9 = 0;
      do {
        fVar17 = 0.0;
        if ((int)uStack_d0 != local_a4) {
          puVar8 = local_98;
          if (local_98 == (undefined1 *)0x0) {
            puVar8 = local_a0;
          }
          uVar10 = (uint)(uVar9 + (longlong)(int)param_2);
          for (iVar16 = *(int *)(puVar8 + (ulonglong)(local_90 - 1U & uVar10) * 4); iVar16 != -1;
              iVar16 = *(int *)(local_d8 + (longlong)iVar16 * 0xc + 4)) {
            if (*(uint *)(local_d8 + (longlong)iVar16 * 0xc) == uVar10) {
              fVar17 = fVar18;
              if (0.0001 < ABS(fVar2 - fVar18) && uVar13 == uVar11) {
                fVar17 = *(float *)(lVar14 + uVar9 * 4) * (fVar2 - fVar18) + fVar18;
              }
              break;
            }
          }
        }
        *(float *)(*(longlong *)(lVar15 + 0x98) + (uVar9 + (longlong)(int)param_2) * 4) = fVar17;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar11);
    }
    if ((int)param_2 < iVar7) {
      lVar14 = *(longlong *)(param_1 + 0x70);
      lVar15 = (longlong)(int)param_2;
      iVar16 = 0;
      do {
        fVar18 = *(float *)(*(longlong *)(lVar14 + 0x98) + lVar15 * 4);
        if (fVar18 <= param_5) {
          fVar18 = param_5;
        }
        *(float *)(*(longlong *)(lVar14 + 0x98) + lVar15 * 4) = fVar18;
        local_dc = iVar16;
        cVar6 = (*(code *)*param_7)(param_7[1],&local_dc);
        fVar18 = 0.0;
        if (cVar6 == '\0') {
          fVar18 = 1.0 / *(float *)(*(longlong *)(lVar14 + 0x98) + lVar15 * 4);
        }
        *(float *)(*(longlong *)(lVar14 + 0xb0) + lVar15 * 4) = fVar18;
        lVar15 = lVar15 + 1;
        iVar16 = iVar16 + 1;
      } while (iVar7 - param_2 != iVar16);
    }
  }
  else {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1f8);
    iVar16 = *(int *)(lVar14 + 0x14 + (longlong)(int)param_2 * 0x18);
    iVar7 = (int)param_4[1];
    lVar15 = 0;
    if (iVar7 == iVar16) {
      lVar15 = *param_4;
    }
    fVar18 = *param_3;
    fVar2 = param_3[1];
    lVar14 = lVar14 + (longlong)(int)param_2 * 0x18;
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    FUN_1400baa38(param_6);
    if (0 < *(int *)(lVar14 + 0x14)) {
      uVar9 = 0;
      do {
        if ((int)uStack_d0 == local_a4) {
          fVar17 = 0.0;
        }
        else {
          puVar8 = local_98;
          if (local_98 == (undefined1 *)0x0) {
            puVar8 = local_a0;
          }
          for (iVar4 = *(int *)(puVar8 + (ulonglong)(local_90 + 0x7fffffffU & (uint)uVar9) * 4);
              fVar17 = 0.0, iVar4 != -1; iVar4 = *(int *)(local_d8 + (longlong)iVar4 * 0xc + 4)) {
            if (uVar9 == *(uint *)(local_d8 + (longlong)iVar4 * 0xc)) {
              fVar17 = fVar18;
              if (0.0001 < ABS(fVar2 - fVar18) && (0 < iVar7 && iVar7 == iVar16)) {
                fVar17 = *(float *)(lVar15 + uVar9 * 4) * (fVar2 - fVar18) + fVar18;
              }
              break;
            }
          }
        }
        *(float *)(*(longlong *)(*(longlong *)(lVar14 + 8) + 0x78) +
                  ((longlong)(int)(uint)uVar9 + (longlong)*(int *)(lVar14 + 0x10)) * 4) = fVar17;
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)*(int *)(lVar14 + 0x14));
    }
    FUN_1497f2db6(lVar14,param_5,param_7);
  }
  local_90 = 0;
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_d8);
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ef5f4 FUN_1497ef5f4 body=142 status=ok
// SIG undefined FUN_1497ef5f4(void)

undefined4 FUN_1497ef5f4(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14cc27040,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x3eb33333;
  }
  else {
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



// FUNCTION 1497ef684 FUN_1497ef684 body=550 status=ok
// SIG undefined FUN_1497ef684(void)

void FUN_1497ef684(longlong param_1,uint param_2,float param_3,float param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  uint *local_88;
  undefined8 *local_80;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar7 = (longlong)(int)param_2 * 0x18 + *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1f8);
    fVar14 = (float)FUN_14462e238(lVar7,param_5);
    local_78 = ~-(uint)(0.0 < fVar14) & 0x3f800000 |
               (uint)(param_3 / fVar14) & -(uint)(0.0 < fVar14);
    local_70 = 0;
    local_68 = 0;
    local_74 = local_78;
    FUN_14462e414(lVar7,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xe8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xe0);
  uVar4 = 0;
  if (0 < (int)uVar5) {
    uVar10 = -param_2;
    if ((int)-param_2 < 0) {
      uVar10 = param_2;
    }
    uVar11 = (ulonglong)uVar5;
    do {
      uVar11 = uVar11 >> 1;
      uVar12 = (uint)uVar11 + (int)uVar4;
      uVar1 = *(uint *)(lVar7 + (ulonglong)uVar12 * 4);
      uVar8 = -uVar1;
      if ((int)uVar8 < 0) {
        uVar8 = uVar1;
      }
      if (uVar8 <= uVar10) {
        uVar4 = (ulonglong)(uVar12 + (uVar5 & 1));
      }
      bVar2 = 1 < uVar5;
      uVar5 = (uint)uVar11;
    } while (bVar2);
  }
  iVar9 = *(int *)(lVar7 + uVar4 * 4);
  iVar13 = -iVar9;
  if (iVar13 < 0) {
    iVar13 = iVar9;
  }
  fVar14 = (float)FUN_1408ababe(param_1,param_2,iVar13 - param_2,param_5);
  local_78 = ~-(uint)(0.0 < fVar14) & 0x3f800000 | (uint)(param_3 / fVar14) & -(uint)(0.0 < fVar14);
  local_80 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_88 = &local_78;
  local_74 = local_78;
  FUN_1408ac284(param_1,param_5,param_2,iVar13 - param_2);
  if ((int)param_2 < iVar13) {
    lVar7 = *(longlong *)(param_1 + 0x70);
    lVar6 = (longlong)(int)param_2;
    iVar9 = 0;
    do {
      fVar14 = *(float *)(*(longlong *)(lVar7 + 0x98) + lVar6 * 4);
      if (fVar14 <= param_4) {
        fVar14 = param_4;
      }
      *(float *)(*(longlong *)(lVar7 + 0x98) + lVar6 * 4) = fVar14;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      cVar3 = (*(code *)*param_6)(param_6[1],&local_70);
      fVar14 = 0.0;
      if (cVar3 == '\0') {
        fVar14 = 1.0 / *(float *)(*(longlong *)(lVar7 + 0x98) + lVar6 * 4);
      }
      *(float *)(*(longlong *)(lVar7 + 0xb0) + lVar6 * 4) = fVar14;
      lVar6 = lVar6 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar13 - param_2 != iVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497ef8d0 FUN_1497ef8d0 body=128 status=ok
// SIG undefined FUN_1497ef8d0(void)

int FUN_1497ef8d0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14cc27048,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497ef952 FUN_1497ef952 body=140 status=ok
// SIG undefined FUN_1497ef952(void)

ulonglong FUN_1497ef952(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc27050,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


