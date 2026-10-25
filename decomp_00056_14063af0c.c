// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14063af0c FUN_14063af0c body=55 status=ok
// SIG undefined FUN_14063af0c(void)

void FUN_14063af0c(longlong *param_1)

{
  FUN_14063af44(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14063af44 FUN_14063af44 body=545 status=ok
// SIG undefined FUN_14063af44(void)

void FUN_14063af44(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar16 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_14063af79;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar15 = (longlong)iVar9;
      uVar6 = puVar10[lVar15] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar15 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) goto LAB_14063af79;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_14063af79:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar6 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14063b166 FUN_14063b166 body=481 status=ok
// SIG undefined FUN_14063b166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14063b166(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b023890;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2f] = &PTR_FUN_14b023b20;
  param_1[0x32] = &PTR_FUN_14b023b40;
  if ((longlong *)param_1[0x44] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x44] + 0x10))();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2f] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x31) != '\0') &&
     (plVar1 = (longlong *)param_1[0x30], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  FUN_1447cd778(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00014063b2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14063b348 FUN_14063b348 body=325 status=ok
// SIG undefined FUN_14063b348(void)

void FUN_14063b348(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
             0xffffffff;
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



// FUNCTION 14063b48e FUN_14063b48e body=541 status=ok
// SIG undefined FUN_14063b48e(void)

void FUN_14063b48e(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar11 = 0;
    uVar16 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar11) goto LAB_14063b671;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *param_1 + (longlong)iVar4 * 0x48;
      lVar10 = *param_1 + (longlong)iVar4 * 0x48;
      puVar15 = (undefined8 *)(lVar10 + 0x10);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar10 + 0x30) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar9 = puVar15;
        if (0x18 < *(ushort *)(lVar13 + 0x28)) {
          puVar9 = (undefined8 *)*puVar15;
        }
        (*pcVar3)(puVar9);
      }
      if (0x18 < *(ushort *)(lVar13 + 0x28)) {
        FUN_1400020a8(*puVar15);
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar4 = (int)uVar11;
      lVar13 = (longlong)iVar4;
      uVar5 = puVar8[lVar13] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar8[lVar13 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar13 == lVar10) goto LAB_14063b671;
        }
        uVar11 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar2);
  }
LAB_14063b671:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 14063b6ae FUN_14063b6ae body=4637 status=ok
// SIG undefined FUN_14063b6ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14063b6ae(longlong param_1,double *param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  bool bVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  int iVar26;
  longlong *plVar27;
  longlong *plVar28;
  undefined4 uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong lVar35;
  undefined8 *puVar36;
  double *pdVar37;
  double *pdVar38;
  double *pdVar39;
  longlong lVar40;
  longlong **pplVar41;
  ulonglong uVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar51 [16];
  double dVar54;
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368 [4];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  longlong *local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined8 local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong *local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_2a0 = param_3;
  lVar32 = *(longlong *)(param_1 + 0x660);
  pdVar39 = param_2;
  if (lVar32 == 0) {
LAB_14063b846:
    if (param_4 - 2U < 2) {
      pplVar41 = (longlong **)&DAT_14c846480;
      goto LAB_14063baa2;
    }
    if (param_4 == 1) {
      pplVar41 = (longlong **)(param_1 + 0x240);
      lVar32 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
      pdVar39 = (double *)&DAT_14c846480;
      if (lVar32 != 0) {
        pdVar39 = (double *)(lVar32 + 0x240);
      }
LAB_14063bad9:
      FUN_1449437a2(pplVar41,param_2,pdVar39);
      goto LAB_14063b873;
    }
    lVar32 = 0xc;
    pplVar41 = (longlong **)(param_1 + 0x240);
  }
  else {
    puVar36 = &DAT_14c846480;
    pplVar41 = &local_308;
    for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
      *pplVar41 = (longlong *)*puVar36;
      puVar36 = puVar36 + 1;
      pplVar41 = pplVar41 + 1;
    }
    pdVar37 = (double *)&DAT_14c846480;
    pdVar38 = local_368;
    for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
      *pdVar38 = *pdVar37;
      pdVar37 = pdVar37 + 1;
      pdVar38 = pdVar38 + 1;
    }
    lVar31 = *(longlong *)(lVar32 + 0x218);
    plVar34 = *(longlong **)(lVar32 + 0x220);
    plVar33 = (longlong *)0x0;
    if (plVar34 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
      UNLOCK();
      LOCK();
      plVar28 = plVar34 + 1;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)*plVar28 == 0) {
        plVar33 = plVar34;
        (**(code **)*plVar34)();
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))();
          plVar33 = plVar34;
        }
      }
    }
    uVar29 = SUB84(plVar33,0);
    if (lVar31 == 0) {
      bVar23 = false;
LAB_14063b826:
      uVar24 = local_2a0;
      plVar28 = *(longlong **)(param_1 + 0x660);
      lVar32 = plVar28[0x19];
      if ((longlong)(int)lVar32 != 0) {
        lVar31 = plVar28[0x18];
        lVar40 = 0;
        do {
          lVar35 = *(longlong *)(lVar31 + lVar40);
          if ((lVar35 != 0) &&
             (plVar28 = (longlong *)FUN_144b2ab1c(lVar35,uVar24), plVar28 != (longlong *)0x0)) {
            plVar33 = plVar28 + 9;
            uVar25 = FUN_144a7484c(plVar33,&local_178);
            uVar29 = SUB84(plVar33,0);
            local_308 = local_178;
            dStack_300 = dStack_170;
            local_2f8 = local_168;
            dStack_2f0 = dStack_160;
            local_2e8 = *(undefined1 (*) [16])(plVar28 + 6);
            local_2d8 = (double)plVar28[8];
            dStack_2d0 = 0.0;
            local_2c8 = (double)plVar28[0xc];
            dStack_2c0 = (double)plVar28[0xd];
            local_2b8 = (double)plVar28[0xe];
            dStack_2b0 = 0.0;
            goto LAB_14063bb5a;
          }
          uVar29 = (undefined4)lVar35;
          lVar40 = lVar40 + 8;
        } while ((longlong)(int)lVar32 * 8 != lVar40);
      }
    }
    else {
      plVar28 = *(longlong **)(param_1 + 0x660);
      lVar32 = plVar28[0x43];
      plVar34 = (longlong *)plVar28[0x44];
      if (plVar34 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
        UNLOCK();
      }
      if (lVar32 == 0) {
LAB_14063b810:
        bVar23 = false;
      }
      else {
        FUN_1400021e4(&local_2a0,&local_178);
        plVar27 = (longlong *)FUN_144a075de(lVar32 + 0xe0,&local_178);
        plVar28 = plVar27;
        plVar33 = local_178;
        if (local_178 != (longlong *)0x0) {
          plVar28 = (longlong *)FUN_1400020a8();
        }
        iVar26 = (int)plVar27;
        if (iVar26 == -1) goto LAB_14063b810;
        plVar33 = (longlong *)(param_1 + 0x9a0);
        plVar28 = (longlong *)FUN_1406cf856();
        bVar23 = false;
        if (-1 < iVar26) {
          uVar30 = *(uint *)(plVar28 + 1);
          plVar33 = (longlong *)(ulonglong)uVar30;
          if (iVar26 < (int)uVar30) {
            plVar28 = (longlong *)*plVar28;
            uVar42 = (ulonglong)plVar27 & 0xffffffff;
            dVar11 = (double)(float)((ulonglong)plVar28[uVar42 * 6 + 2] >> 0x20);
            local_308 = (longlong *)(double)(float)plVar28[uVar42 * 6];
            dStack_300 = (double)(float)((ulonglong)plVar28[uVar42 * 6] >> 0x20);
            local_2f8 = (double)(float)plVar28[uVar42 * 6 + 1];
            dStack_2f0 = (double)(float)((ulonglong)plVar28[uVar42 * 6 + 1] >> 0x20);
            local_2e8._8_4_ = SUB84(dVar11,0);
            local_2e8._0_8_ = (double)(float)plVar28[uVar42 * 6 + 2];
            local_2e8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            local_2d8 = (double)(float)plVar28[uVar42 * 6 + 3];
            dStack_2d0 = (double)(float)((ulonglong)plVar28[uVar42 * 6 + 3] >> 0x20);
            local_2c8 = (double)(float)plVar28[uVar42 * 6 + 4];
            dStack_2c0 = (double)(float)((ulonglong)plVar28[uVar42 * 6 + 4] >> 0x20);
            local_2b8 = (double)(float)plVar28[uVar42 * 6 + 5];
            dStack_2b0 = (double)(float)((ulonglong)plVar28[uVar42 * 6 + 5] >> 0x20);
            uVar5 = *(uint *)(*(longlong *)(lVar32 + 0x120) + uVar42 * 4);
            plVar33 = (longlong *)
                      (ulonglong)
                      CONCAT31((int3)(uVar30 >> 8),(int)uVar5 < (int)uVar30 && -1 < (int)uVar5);
            bVar23 = true;
            if ((int)uVar5 < (int)uVar30 && -1 < (int)uVar5) {
              plVar33 = (longlong *)((ulonglong)uVar5 * 0x30);
              local_328 = (double)(float)*(undefined8 *)
                                          ((longlong)(plVar28 + 4) + (longlong)plVar33);
              dStack_320 = (double)(float)((ulonglong)
                                           *(undefined8 *)
                                            ((longlong)(plVar28 + 4) + (longlong)plVar33) >> 0x20);
              local_318 = (double)(float)*(undefined8 *)
                                          ((longlong)(plVar28 + 5) + (longlong)plVar33);
              dStack_310 = (double)(float)((ulonglong)
                                           *(undefined8 *)
                                            ((longlong)(plVar28 + 5) + (longlong)plVar33) >> 0x20);
              dVar11 = (double)(float)((ulonglong)
                                       *(undefined8 *)((longlong)(plVar28 + 2) + (longlong)plVar33)
                                      >> 0x20);
              local_338 = (double)(float)*(undefined8 *)
                                          ((longlong)(plVar28 + 3) + (longlong)plVar33);
              dStack_330 = (double)(float)((ulonglong)
                                           *(undefined8 *)
                                            ((longlong)(plVar28 + 3) + (longlong)plVar33) >> 0x20);
              local_368[0] = (double)(float)plVar28[(ulonglong)uVar5 * 6];
              local_368[1] = (double)(float)((ulonglong)plVar28[(ulonglong)uVar5 * 6] >> 0x20);
              local_368[2] = (double)(float)*(undefined8 *)
                                             ((longlong)(plVar28 + 1) + (longlong)plVar33);
              local_368[3] = (double)(float)((ulonglong)
                                             *(undefined8 *)
                                              ((longlong)(plVar28 + 1) + (longlong)plVar33) >> 0x20)
              ;
              local_348._8_4_ = SUB84(dVar11,0);
              local_348._0_8_ =
                   (double)(float)*(undefined8 *)((longlong)(plVar28 + 2) + (longlong)plVar33);
              local_348._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            }
          }
        }
      }
      uVar29 = SUB84(plVar33,0);
      if (plVar34 != (longlong *)0x0) {
        LOCK();
        plVar33 = plVar34 + 1;
        *(int *)plVar33 = (int)*plVar33 + -1;
        UNLOCK();
        if ((int)*plVar33 == 0) {
          plVar33 = plVar34;
          plVar28 = (longlong *)(**(code **)*plVar34)();
          uVar29 = SUB84(plVar33,0);
          LOCK();
          piVar1 = (int *)((longlong)plVar34 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            plVar28 = (longlong *)(**(code **)(*plVar34 + 0x10))();
            uVar29 = SUB84(plVar34,0);
          }
        }
      }
      if (!bVar23) goto LAB_14063b826;
    }
    uVar25 = SUB84(plVar28,0);
    if (!bVar23) goto LAB_14063b846;
LAB_14063bb5a:
    dVar11 = dStack_2b0;
    dVar9 = local_2b8;
    dVar12 = dStack_2c0;
    dVar43 = local_2c8;
    auVar49 = _DAT_149934d80;
    if (param_4 == 0) {
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      auVar8 = _DAT_149934d80;
      auVar49 = *(undefined1 (*) [16])(param_1 + 0x280);
      dVar11 = auVar49._0_8_;
      dVar12 = auVar49._8_8_;
      auVar68 = *(undefined1 (*) [16])(param_1 + 0x290);
      dVar43 = auVar68._0_8_;
      dVar9 = auVar68._8_8_;
      auVar55._8_8_ = dStack_2c0;
      auVar55._0_8_ = local_2c8;
      auVar56._8_8_ = dStack_2b0;
      auVar56._0_8_ = local_2b8;
      auVar49 = minpd(auVar55,auVar49);
      auVar55 = minpd(auVar56,auVar68);
      auVar68._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar68._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      iVar26 = movmskpd(uVar25,auVar68);
      auVar49._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
      auVar49._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
      uVar30 = movmskpd(uVar29,auVar49);
      if ((uVar30 & 0x3fffffff) == 0 && iVar26 == 0) {
        dVar17 = *(double *)(param_1 + 0x240);
        dVar18 = *(double *)(param_1 + 0x248);
        dVar19 = *(double *)(param_1 + 0x250);
        dVar20 = *(double *)(param_1 + 600);
        dVar2 = *(double *)(param_1 + 600);
        dVar48 = *(double *)(param_1 + 600);
        dVar63 = *(double *)(param_1 + 0x240);
        dVar66 = *(double *)(param_1 + 0x240);
        dVar53 = *(double *)(param_1 + 0x248);
        dVar3 = *(double *)(param_1 + 0x248);
        dVar4 = *(double *)(param_1 + 0x250);
        dVar58 = *(double *)(param_1 + 0x250);
        dVar13 = (double)local_2e8._0_8_ * dVar11;
        dVar61 = (double)local_2e8._8_8_ * dVar12;
        dVar14 = local_2d8 * dVar43;
        dVar15 = dStack_2d0 * dVar9;
        dVar65 = dVar61 * dVar17 - dVar18 * dVar13;
        dVar59 = dVar14 * dVar18 - dVar19 * dVar61;
        dVar60 = dVar13 * dVar19 - dVar17 * dVar14;
        dVar16 = dVar15 * dVar20 - dVar20 * dVar15;
        dVar59 = dVar59 + dVar59;
        dVar60 = dVar60 + dVar60;
        dVar65 = dVar65 + dVar65;
        dVar16 = dVar16 + dVar16;
        dVar54 = *(double *)(param_1 + 0x260);
        dVar64 = (dVar59 * dVar19 - dVar65 * dVar17) + dVar48 * dVar60 + dVar61 +
                 *(double *)(param_1 + 0x268);
        dVar61 = *(double *)(param_1 + 0x270);
        dVar62 = *(double *)(param_1 + 0x278);
        *param_2 = dStack_300 * dVar4 * -1.0 +
                   local_2f8 * dVar53 + dStack_2f0 * dVar63 * 1.0 + (double)local_308 * dVar2;
        param_2[1] = (double)local_308 * dVar58 * 1.0 +
                     dStack_2f0 * dVar3 + local_2f8 * dVar66 * -1.0 + dStack_300 * dVar48;
        param_2[2] = dStack_2f0 * dVar4 * 1.0 +
                     ((dVar63 * dStack_300 * 1.0 + local_2f8 * dVar2) - (double)local_308 * dVar53);
        param_2[3] = local_2f8 * dVar58 * -1.0 +
                     ((dVar66 * (double)local_308 * -1.0 + dStack_2f0 * dVar48) - dStack_300 * dVar3
                     );
        auVar7._8_4_ = SUB84(dVar64,0);
        auVar7._0_8_ = (dVar65 * dVar18 - dVar19 * dVar60) + dVar2 * dVar59 + dVar13 + dVar54;
        auVar7._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 4) = auVar7;
        param_2[6] = (dVar60 * dVar17 - dVar18 * dVar59) + dVar2 * dVar65 + dVar14 + dVar61;
        param_2[7] = (dVar16 * dVar20 - dVar16 * dVar20) + dVar48 * dVar16 + dVar15 + dVar62;
        param_2[8] = local_2c8 * dVar11;
        param_2[9] = dStack_2c0 * dVar12;
        auVar6._8_4_ = SUB84(dStack_2b0 * dVar9,0);
        auVar6._0_8_ = local_2b8 * dVar43;
        auVar6._12_4_ = (int)((ulonglong)(dStack_2b0 * dVar9) >> 0x20);
        *(undefined1 (*) [16])(param_2 + 10) = auVar6;
      }
      else {
        dVar3 = *(double *)(param_1 + 0x240);
        dVar4 = *(double *)(param_1 + 0x248);
        dVar58 = *(double *)(param_1 + 0x250);
        dVar54 = dVar4 + dVar4;
        dVar61 = dVar58 + dVar58;
        dVar63 = dVar3 * (dVar3 + dVar3);
        local_1a8 = (1.0 - (dVar63 + dVar4 * dVar54)) * dVar43;
        dVar53 = *(double *)(param_1 + 0x240) * dVar61;
        dVar48 = *(double *)(param_1 + 600);
        dVar62 = dVar61 * dVar48;
        dVar65 = (dVar3 + dVar3) * *(double *)(param_1 + 600);
        dVar48 = dVar54 * dVar48;
        local_1b8 = (dVar48 + dVar53) * dVar43;
        dVar2 = dVar43 * local_2b8;
        dVar9 = dVar9 * dStack_2b0;
        dVar63 = (DAT_149934d80._8_8_ - (dVar58 * dVar61 + dVar63)) * dVar12;
        dVar66 = (dVar54 * dVar3 + dVar62) * dVar11;
        local_1c8 = (dVar61 * dVar4 + dVar65) * dVar12;
        dStack_1b0 = (dVar61 * dVar4 - dVar65) * dVar43;
        local_1e8 = (dVar53 - dVar48) * dVar11;
        local_1f8._8_4_ = SUB84(dVar66,0);
        local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar58 * dVar61 + dVar4 * dVar54)) * dVar11;
        local_1f8._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar63,0);
        local_1d8._0_8_ = (dVar54 * dVar3 - dVar62) * dVar12;
        local_1d8._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = *(undefined8 *)(param_1 + 0x260);
        uStack_190 = *(undefined8 *)(param_1 + 0x268);
        local_188 = *(undefined8 *)(param_1 + 0x270);
        uStack_180 = 0x3ff0000000000000;
        dVar48 = dStack_300 + dStack_300;
        dVar63 = local_2f8 + local_2f8;
        dVar43 = (double)local_308 * ((double)local_308 + (double)local_308);
        local_228 = (1.0 - (dVar43 + dStack_300 * dVar48)) * local_2b8;
        dVar66 = ((double)local_308 + (double)local_308) * dStack_2f0;
        local_238 = (dVar48 * dStack_2f0 + (double)local_308 * dVar63) * local_2b8;
        dStack_230 = (dVar63 * dStack_300 - dVar66) * local_2b8;
        dVar11 = dVar11 * local_2c8;
        dVar12 = dVar12 * dStack_2c0;
        local_278 = ((double)DAT_149934d80 - (local_2f8 * dVar63 + dStack_300 * dVar48)) * local_2c8
        ;
        dVar43 = (DAT_149934d80._8_8_ - (local_2f8 * dVar63 + dVar43)) * dStack_2c0;
        dStack_270 = (dVar48 * (double)local_308 + dVar63 * dStack_2f0) * local_2c8;
        local_248 = (dVar63 * dStack_300 + dVar66) * dStack_2c0;
        local_268 = ((double)local_308 * dVar63 - dVar48 * dStack_2f0) * local_2c8;
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar43,0);
        local_258._0_8_ = (dVar48 * (double)local_308 - dVar63 * dStack_2f0) * dStack_2c0;
        local_258._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = (double)local_2e8._0_8_;
        dStack_210 = (double)local_2e8._8_8_;
        local_208 = local_2d8;
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar46._8_8_ = -(ulonglong)(0.0 <= dVar12);
        auVar46._0_8_ = -(ulonglong)(0.0 <= dVar11);
        auVar49 = blendvpd(_DAT_149936790,auVar8,auVar46);
        uVar42 = -(ulonglong)(0.0 <= dVar2);
        dVar43 = (double)(~uVar42 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar42 >> 0x20) & 0x3ff00000) << 0x20);
        dVar48 = auVar49._0_8_;
        local_168 = local_168 * dVar48;
        dStack_170 = dStack_170 * dVar48;
        local_178 = (longlong *)((double)local_178 * dVar48);
        dVar48 = auVar49._8_8_;
        local_148 = local_148 * dVar48;
        local_150 = local_150 * dVar48;
        local_158 = dVar48 * local_158;
        local_128 = local_128 * dVar43;
        local_130 = local_130 * dVar43;
        local_138 = dVar43 * local_138;
        FUN_14481fd10(&local_3c8,&local_178);
        dVar43 = (double)local_3b8._0_8_ * (double)local_3b8._0_8_ +
                 (double)local_3c8 * (double)local_3c8;
        dVar48 = (double)local_3b8._8_8_ * (double)local_3b8._8_8_ + dStack_3c0 * dStack_3c0;
        auVar52._0_8_ = dVar43 + dVar48;
        auVar52._8_8_ = dVar43 + dVar48;
        auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
        auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
        auVar49 = sqrtpd(auVar52,auVar52);
        auVar68 = divpd(auVar8,auVar49);
        auVar69._0_8_ = auVar68._0_8_ * (double)local_3b8._0_8_;
        auVar69._8_8_ = auVar68._8_8_ * (double)local_3b8._8_8_;
        auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar47);
        auVar10._8_4_ = SUB84(dVar12,0);
        auVar10._0_8_ = dVar11;
        auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 8) = auVar10;
        auVar8._8_4_ = SUB84(dVar9,0);
        auVar8._0_8_ = dVar2;
        auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 10) = auVar8;
        *param_2 = (double)((ulonglong)((double)local_3c8 * auVar68._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
        param_2[1] = (double)((ulonglong)(dStack_3c0 * auVar68._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
        *(undefined1 (*) [16])(param_2 + 2) = auVar49;
        param_2[4] = local_118;
        param_2[5] = dStack_110;
        param_2[6] = local_108;
        param_2[7] = 0.0;
      }
      goto LAB_14063b873;
    }
    if (param_4 == 1) {
      lVar32 = *(longlong *)(param_1 + 0xa8);
      if (lVar32 == 0) goto LAB_14063b846;
      local_398 = 0.0;
      dStack_390 = 0.0;
      local_3a8 = ZEXT816(0);
      auVar68 = *(undefined1 (*) [16])(param_1 + 0x280);
      dVar48 = auVar68._0_8_;
      dVar63 = auVar68._8_8_;
      auVar55 = *(undefined1 (*) [16])(param_1 + 0x290);
      dVar2 = auVar55._0_8_;
      auVar21._8_8_ = dStack_2c0;
      auVar21._0_8_ = local_2c8;
      auVar22._8_8_ = dStack_2b0;
      auVar22._0_8_ = local_2b8;
      auVar68 = minpd(auVar21,auVar68);
      auVar56 = minpd(auVar22,auVar55);
      auVar50._8_8_ = -(ulonglong)(auVar68._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar68._0_8_ < 0.0);
      iVar26 = movmskpd(uVar25,auVar50);
      auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
      auVar57._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
      uVar30 = movmskpd(uVar29,auVar57);
      if ((uVar30 & 0x3fffffff) == 0 && iVar26 == 0) {
        dVar17 = *(double *)(param_1 + 0x240);
        dVar18 = *(double *)(param_1 + 0x248);
        dVar19 = *(double *)(param_1 + 0x250);
        dVar20 = *(double *)(param_1 + 600);
        dVar66 = *(double *)(param_1 + 600);
        dVar53 = *(double *)(param_1 + 600);
        dVar4 = *(double *)(param_1 + 0x240);
        dVar3 = *(double *)(param_1 + 0x240);
        dVar54 = *(double *)(param_1 + 0x248);
        dVar58 = *(double *)(param_1 + 0x248);
        dVar62 = *(double *)(param_1 + 0x250);
        dVar61 = *(double *)(param_1 + 0x250);
        local_3c8 = (longlong *)
                    (dStack_300 * dVar62 * -1.0 +
                    local_2f8 * dVar54 + dStack_2f0 * dVar4 * 1.0 + (double)local_308 * dVar66);
        dStack_3c0 = (double)local_308 * dVar61 * 1.0 +
                     dStack_2f0 * dVar58 + local_2f8 * dVar3 * -1.0 + dStack_300 * dVar53;
        dVar13 = (double)local_2e8._0_8_ * dVar48;
        dVar64 = (double)local_2e8._8_8_ * dVar63;
        dVar14 = local_2d8 * dVar2;
        dVar15 = dStack_2d0 * auVar55._8_8_;
        dVar65 = dVar64 * dVar17 - dVar18 * dVar13;
        dVar59 = dVar14 * dVar18 - dVar19 * dVar64;
        dVar60 = dVar13 * dVar19 - dVar17 * dVar14;
        dVar16 = dVar15 * dVar20 - dVar20 * dVar15;
        dVar59 = dVar59 + dVar59;
        dVar60 = dVar60 + dVar60;
        dVar65 = dVar65 + dVar65;
        dVar16 = dVar16 + dVar16;
        dVar64 = (dVar59 * dVar19 - dVar65 * dVar17) + dVar53 * dVar60 + dVar64 +
                 *(double *)(param_1 + 0x268);
        local_398 = (dVar60 * dVar17 - dVar18 * dVar59) + dVar66 * dVar65 + dVar14 +
                    *(double *)(param_1 + 0x270);
        dStack_390 = (dVar16 * dVar20 - dVar16 * dVar20) + dVar53 * dVar16 + dVar15 +
                     *(double *)(param_1 + 0x278);
        local_3b8._8_8_ =
             local_2f8 * dVar61 * -1.0 +
             ((dVar3 * (double)local_308 * -1.0 + dStack_2f0 * dVar53) - dStack_300 * dVar58);
        local_3b8._0_8_ =
             dStack_2f0 * dVar62 * 1.0 +
             ((dVar4 * dStack_300 * 1.0 + local_2f8 * dVar66) - (double)local_308 * dVar54);
        local_3a8._8_4_ = SUB84(dVar64,0);
        local_3a8._0_8_ =
             (dVar65 * dVar18 - dVar19 * dVar60) + dVar66 * dVar59 + dVar13 +
             *(double *)(param_1 + 0x260);
        local_3a8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
      }
      else {
        dVar54 = *(double *)(param_1 + 0x240);
        dVar61 = *(double *)(param_1 + 0x248);
        dVar62 = *(double *)(param_1 + 0x250);
        dVar65 = dVar61 + dVar61;
        dVar59 = dVar62 + dVar62;
        dVar3 = dVar54 * (dVar54 + dVar54);
        local_1a8 = (1.0 - (dVar3 + dVar61 * dVar65)) * dVar2;
        dVar58 = *(double *)(param_1 + 0x240) * dVar59;
        dVar66 = *(double *)(param_1 + 600);
        dVar60 = dVar59 * dVar66;
        dVar64 = (dVar54 + dVar54) * *(double *)(param_1 + 600);
        dVar66 = dVar65 * dVar66;
        local_1b8 = (dVar66 + dVar58) * dVar2;
        dVar53 = dVar2 * local_2b8;
        dVar3 = (DAT_149934d80._8_8_ - (dVar62 * dVar59 + dVar3)) * dVar63;
        dVar4 = (dVar65 * dVar54 + dVar60) * dVar48;
        local_1c8 = (dVar59 * dVar61 + dVar64) * dVar63;
        dStack_1b0 = (dVar59 * dVar61 - dVar64) * dVar2;
        local_1e8 = (dVar58 - dVar66) * dVar48;
        local_1f8._8_4_ = SUB84(dVar4,0);
        local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar62 * dVar59 + dVar61 * dVar65)) * dVar48;
        local_1f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar3,0);
        local_1d8._0_8_ = (dVar65 * dVar54 - dVar60) * dVar63;
        local_1d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = *(undefined8 *)(param_1 + 0x260);
        uStack_190 = *(undefined8 *)(param_1 + 0x268);
        local_188 = *(undefined8 *)(param_1 + 0x270);
        uStack_180 = 0x3ff0000000000000;
        dVar58 = dStack_300 + dStack_300;
        dVar54 = local_2f8 + local_2f8;
        dVar4 = (double)local_308 * ((double)local_308 + (double)local_308);
        local_228 = (1.0 - (dVar4 + dStack_300 * dVar58)) * local_2b8;
        dVar61 = ((double)local_308 + (double)local_308) * dStack_2f0;
        local_238 = (dVar58 * dStack_2f0 + (double)local_308 * dVar54) * local_2b8;
        dStack_230 = (dVar54 * dStack_300 - dVar61) * local_2b8;
        dVar66 = dVar48 * local_2c8;
        dVar3 = dVar63 * dStack_2c0;
        local_278 = ((double)DAT_149934d80 - (local_2f8 * dVar54 + dStack_300 * dVar58)) * local_2c8
        ;
        dVar4 = (DAT_149934d80._8_8_ - (local_2f8 * dVar54 + dVar4)) * dStack_2c0;
        dStack_270 = (dVar58 * (double)local_308 + dVar54 * dStack_2f0) * local_2c8;
        local_248 = (dVar54 * dStack_300 + dVar61) * dStack_2c0;
        local_268 = ((double)local_308 * dVar54 - dVar58 * dStack_2f0) * local_2c8;
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar4,0);
        local_258._0_8_ = (dVar58 * (double)local_308 - dVar54 * dStack_2f0) * dStack_2c0;
        local_258._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = (double)local_2e8._0_8_;
        dStack_210 = (double)local_2e8._8_8_;
        local_208 = local_2d8;
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar44._8_8_ = -(ulonglong)(0.0 <= dVar3);
        auVar44._0_8_ = -(ulonglong)(0.0 <= dVar66);
        auVar68 = blendvpd(_DAT_149936790,auVar49,auVar44);
        uVar42 = -(ulonglong)(0.0 <= dVar53);
        dVar66 = (double)(~uVar42 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar42 >> 0x20) & 0x3ff00000) << 0x20);
        dVar53 = auVar68._0_8_;
        local_168 = local_168 * dVar53;
        dStack_170 = dStack_170 * dVar53;
        local_178 = (longlong *)((double)local_178 * dVar53);
        dVar53 = auVar68._8_8_;
        local_148 = local_148 * dVar53;
        local_150 = local_150 * dVar53;
        local_158 = dVar53 * local_158;
        local_128 = local_128 * dVar66;
        local_130 = local_130 * dVar66;
        local_138 = dVar66 * local_138;
        FUN_14481fd10(&local_298,&local_178);
        dVar66 = local_288 * local_288 + local_298 * local_298;
        dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar51._0_8_ = dVar66 + dVar53;
        auVar51._8_8_ = dVar66 + dVar53;
        auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar51._8_8_);
        auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar51._0_8_);
        auVar68 = sqrtpd(auVar51,auVar51);
        auVar49 = divpd(auVar49,auVar68);
        auVar67._0_8_ = auVar49._0_8_ * local_288;
        auVar67._8_8_ = auVar49._8_8_ * dStack_280;
        local_3c8 = (longlong *)
                    ((ulonglong)(local_298 * auVar49._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar51._0_8_));
        dStack_3c0 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar51._8_8_));
        local_3b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar67,auVar45);
        local_3a8._8_8_ = dStack_110;
        local_3a8._0_8_ = local_118;
        local_398 = local_108;
        dStack_390 = 0.0;
      }
      dVar11 = auVar55._8_8_ * dVar11;
      pplVar41 = &local_3c8;
      local_388._8_4_ = SUB84(dVar63 * dVar12,0);
      local_388._0_8_ = dVar48 * dVar43;
      local_388._12_4_ = (int)((ulonglong)(dVar63 * dVar12) >> 0x20);
      local_378._8_4_ = SUB84(dVar11,0);
      local_378._0_8_ = dVar2 * dVar9;
      local_378._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      lVar32 = *(longlong *)(lVar32 + 0x1c8);
      pdVar39 = (double *)(lVar32 + 0x240);
      if (lVar32 == 0) {
        pdVar39 = (double *)&DAT_14c846480;
      }
      goto LAB_14063bad9;
    }
    if (param_4 != 2) {
      if (param_4 != 3) goto LAB_14063b846;
      pplVar41 = &local_308;
      pdVar39 = local_368;
      goto LAB_14063bad9;
    }
    pplVar41 = &local_308;
LAB_14063baa2:
    lVar32 = 0xc;
  }
  for (; lVar32 != 0; lVar32 = lVar32 + -1) {
    *pdVar39 = (double)*pplVar41;
    pplVar41 = pplVar41 + 1;
    pdVar39 = pdVar39 + 1;
  }
LAB_14063b873:
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14063c8cc FUN_14063c8cc body=556 status=ok
// SIG undefined FUN_14063c8cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14063c8cc(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar15 = 0;
  if (iVar13 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar15 + 1];
      lVar15 = lVar15 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar13 = *(int *)(param_1 + 0x44);
  if (0 < iVar13) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      local_d8 = *pfVar1;
      fStack_d4 = pfVar1[1];
      fStack_d0 = pfVar1[2];
      fStack_cc = pfVar1[3];
      bVar8 = 1e-08 < local_d8;
      bVar9 = 1e-08 < fStack_d4;
      bVar10 = 1e-08 < fStack_d0;
      bVar11 = 1e-08 < fStack_cc;
      uVar16 = FUN_14063caf8(&local_d8);
      auVar17._0_4_ = (float)uVar16 * fVar3;
      auVar17._4_4_ = (float)((ulonglong)uVar16 >> 0x20) * fVar3;
      auVar17._8_4_ = (float)extraout_XMM0_Qb * fVar3;
      auVar17._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * fVar3;
      auVar17 = minps(auVar17,_DAT_149e1f030);
      auVar17 = maxps(auVar17,_DAT_149e1f040);
      fVar22 = auVar17._0_4_ * 1.442695 + 0.5;
      fVar23 = auVar17._4_4_ * 1.442695 + 0.5;
      fVar24 = auVar17._8_4_ * 1.442695 + 0.5;
      fVar25 = auVar17._12_4_ * 1.442695 + 0.5;
      fVar18 = (float)(int)fVar22;
      fVar19 = (float)(int)fVar23;
      fVar20 = (float)(int)fVar24;
      fVar21 = (float)(int)fVar25;
      fVar18 = fVar18 - (float)(-(uint)(fVar22 < fVar18) & 0x3f800000);
      fVar19 = fVar19 - (float)(-(uint)(fVar23 < fVar19) & 0x3f800000);
      fVar20 = fVar20 - (float)(-(uint)(fVar24 < fVar20) & 0x3f800000);
      fVar21 = fVar21 - (float)(-(uint)(fVar25 < fVar21) & 0x3f800000);
      fVar22 = fVar18 * -0.6933594 + auVar17._0_4_ + fVar18 * 0.00021219444;
      fVar23 = fVar19 * -0.6933594 + auVar17._4_4_ + fVar19 * 0.00021219444;
      fVar24 = fVar20 * -0.6933594 + auVar17._8_4_ + fVar20 * 0.00021219444;
      fVar25 = fVar21 * -0.6933594 + auVar17._12_4_ + fVar21 * 0.00021219444;
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *puVar2 = (uint)((float)((int)fVar18 * 0x800000 + 0x3f800000) *
                      ((((((fVar22 * 0.00019875691 + 0.0013981999) * fVar22 + 0.008333452) * fVar22
                         + 0.041665796) * fVar22 + 0.16666666) * fVar22 + 0.5) * fVar22 * fVar22 +
                       fVar22 + 1.0)) & -(uint)bVar8;
      puVar2[1] = (uint)((float)((int)fVar19 * 0x800000 + 0x3f800000) *
                        ((((((fVar23 * 0.00019875691 + 0.0013981999) * fVar23 + 0.008333452) *
                            fVar23 + 0.041665796) * fVar23 + 0.16666666) * fVar23 + 0.5) *
                         fVar23 * fVar23 + fVar23 + 1.0)) & -(uint)bVar9;
      puVar2[2] = (uint)((float)((int)fVar20 * 0x800000 + 0x3f800000) *
                        ((((((fVar24 * 0.00019875691 + 0.0013981999) * fVar24 + 0.008333452) *
                            fVar24 + 0.041665796) * fVar24 + 0.16666666) * fVar24 + 0.5) *
                         fVar24 * fVar24 + fVar24 + 1.0)) & -(uint)bVar10;
      puVar2[3] = (uint)((float)((int)fVar21 * 0x800000 + 0x3f800000) *
                        ((((((fVar25 * 0.00019875691 + 0.0013981999) * fVar25 + 0.008333452) *
                            fVar25 + 0.041665796) * fVar25 + 0.16666666) * fVar25 + 0.5) *
                         fVar25 * fVar25 + fVar25 + 1.0)) & -(uint)bVar11;
      lVar12 = lVar12 + 0x10;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  return;
}



// FUNCTION 14063caf8 FUN_14063caf8 body=229 status=ok
// SIG undefined FUN_14063caf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14063caf8(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  
  auVar1 = *param_1;
  auVar3 = maxps(auVar1,_DAT_1499319c0);
  fVar5 = (float)(auVar3._0_4_ & 0x807fffff | 0x3f000000);
  fVar6 = (float)(auVar3._4_4_ & 0x807fffff | 0x3f000000);
  fVar2 = fVar5 + -1.0 + (float)(-(uint)(fVar5 < 0.70710677) & (uint)fVar5);
  fVar4 = fVar6 + -1.0 + (float)(-(uint)(fVar6 < 0.70710677) & (uint)fVar6);
  fVar5 = (float)(int)((auVar3._0_4_ >> 0x17) - 0x7e) -
          (float)(-(uint)(fVar5 < 0.70710677) & 0x3f800000);
  fVar6 = (float)(int)((auVar3._4_4_ >> 0x17) - 0x7e) -
          (float)(-(uint)(fVar6 < 0.70710677) & 0x3f800000);
  return CONCAT44(fVar4 * fVar4 * -0.5 +
                  fVar6 * -0.00021219444 +
                  ((((((((fVar4 * 0.070376836 + -0.1151461) * fVar4 + 0.116769984) * fVar4 +
                       -0.12420141) * fVar4 + 0.14249323) * fVar4 + -0.16668057) * fVar4 +
                    0.20000714) * fVar4 + -0.24999994) * fVar4 + 0.3333333) * fVar4 * fVar4 * fVar4
                  + fVar4 + fVar6 * 0.6933594,
                  fVar2 * fVar2 * -0.5 +
                  fVar5 * -0.00021219444 +
                  ((((((((fVar2 * 0.070376836 + -0.1151461) * fVar2 + 0.116769984) * fVar2 +
                       -0.12420141) * fVar2 + 0.14249323) * fVar2 + -0.16668057) * fVar2 +
                    0.20000714) * fVar2 + -0.24999994) * fVar2 + 0.3333333) * fVar2 * fVar2 * fVar2
                  + fVar2 + fVar5 * 0.6933594) |
         CONCAT44(-(uint)(auVar1._4_4_ <= 0.0),-(uint)(auVar1._0_4_ <= 0.0));
}



// FUNCTION 14063cbde FUN_14063cbde body=96 status=ok
// SIG undefined FUN_14063cbde(void)

ulonglong FUN_14063cbde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14063cc21:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14063cc21;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14063cc94 FUN_14063cc94 body=521 status=ok
// SIG undefined FUN_14063cc94(void)

longlong FUN_14063cc94(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x28);
  local_50 = param_2;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar5 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x68);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar2 = (longlong *)(*plVar1 + (longlong)iVar7 * 0x18);
        if (*plVar2 == param_2) {
          if ((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0)) {
            lVar5 = plVar2[1];
            goto LAB_14063cd35;
          }
          break;
        }
        iVar7 = (int)plVar2[2];
      } while (iVar7 != -1);
    }
  }
  FUN_1400b22c2(&local_60,"ForwardShadingQuality_");
  FUN_140180cec(&local_50,&local_60);
  puVar8 = local_60;
  if (local_58 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  uVar4 = FUN_14594a138();
  lVar5 = FUN_140277b32(uVar4,param_1,puVar8,0);
  if (lVar5 == 0) {
    puVar8 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar8 = local_60;
    }
    FUN_1446f470e(&local_48,puVar8,1);
    puVar8 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar8 = local_60;
    }
    FUN_1446f470e(&local_68,puVar8,1);
    uVar4 = FUN_14594a138();
    lVar5 = FUN_145730059(param_1,uVar4,local_68);
    local_88 = 0;
    uStack_80 = 0;
    FUN_1400033ba(lVar5,0,0,0);
  }
  local_70 = lVar5;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  local_40 = &local_70;
  local_48 = &local_50;
  FUN_145730126(plVar1,&local_34);
  lVar5 = *(longlong *)(*plVar1 + 8 + (longlong)local_34 * 0x18);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14063cd35:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14063ce9e FUN_14063ce9e body=819 status=ok
// SIG undefined FUN_14063ce9e(void)

void FUN_14063ce9e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  code *local_68;
  longlong **local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(longlong *)(param_2 + 0x20) != 0) && (lVar4 = *(longlong *)(param_2 + 0x10), lVar4 != 0))
      && (*(longlong *)(lVar4 + 0x50) == 0)) &&
     (cVar2 = (**(code **)(*param_1 + 0x348))(param_1,lVar4), cVar2 == '\0')) {
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      if (*(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x20) != 0) {
        FUN_14063d1f6();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
    if (*(longlong *)(lVar4 + 0x3c) != 0) {
      FUN_14063d2dc(lVar4,&local_40,*(undefined8 *)(param_2 + 0x18));
      local_48 = local_40;
      local_58 = param_1;
      local_50 = lVar4;
      if ((int)param_1[0x62] != *(int *)((longlong)param_1 + 0x33c)) {
        uVar1 = (uint)((ulonglong)local_40 >> 0x10);
        uVar6 = (uint)local_40 & 0xffff;
        plVar5 = param_1 + 0x68;
        if ((longlong *)param_1[0x69] != (longlong *)0x0) {
          plVar5 = (longlong *)param_1[0x69];
        }
        iVar7 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_1[0x6a] - 1U &
                        (int)((ulonglong)local_40 >> 0x20) + ((uint)local_40 << 0x10 | uVar6) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar5 = (longlong *)(param_1[0x61] + (longlong)iVar7 * 0x28);
            if (*plVar5 == local_40) {
              if (plVar5 != (longlong *)&DAT_fffffffffffffff8 && plVar5 != (longlong *)0x0) {
                FUN_1447f69b6();
              }
              break;
            }
            iVar7 = (int)plVar5[4];
          } while (iVar7 != -1);
        }
      }
      if ((*(byte *)((longlong)param_1 + 0x31) & 0x20) == 0) {
        lVar3 = FUN_1400796d0(param_1[2],local_40,1);
        if (lVar3 != 0) {
          if (*(char *)(lVar3 + 0xb4) == '\x01') {
            if (*(longlong *)(lVar3 + 0x70) == 0) goto LAB_14063cff6;
            puVar9 = *(undefined **)(*(longlong *)(lVar3 + 0x70) + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1))
            {
              FUN_1446f4b16();
              local_70 = FUN_1403a5f94;
              local_78 = &DAT_14c951c78;
              local_80 = 0;
              local_88 = 0x4018001;
              FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
              atexit(FUN_1428170e8);
              _Init_thread_footer(&DAT_14c952478);
            }
            if (DAT_14c952430 == 0) {
              bVar10 = puVar9 != (undefined *)0x0;
              if (puVar9 != &DAT_14c952428 && bVar10) {
                do {
                  puVar9 = *(undefined **)(puVar9 + 0x30);
                  bVar10 = puVar9 != (undefined *)0x0;
                  if (puVar9 == &DAT_14c952428) break;
                } while (puVar9 != (undefined *)0x0);
              }
              if (!bVar10) goto LAB_14063cff6;
            }
            else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952430) == 0) goto LAB_14063cff6;
            local_38 = *(undefined8 *)(lVar4 + 0x48);
            puVar8 = &local_38;
            lVar4 = *param_1;
          }
          else {
            if (*(char *)(lVar3 + 0xb4) != '\0') goto LAB_14063cff6;
            lVar4 = *param_1;
            puVar8 = (undefined8 *)0x0;
          }
          (**(code **)(lVar4 + 0x248))(param_1,lVar3,puVar8);
        }
      }
      else {
        local_60 = &local_58;
        local_68 = FUN_1433d71ba;
        FUN_140788b96(param_1[4]);
      }
    }
  }
LAB_14063cff6:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063d1f6 FUN_14063d1f6 body=228 status=ok
// SIG undefined FUN_14063d1f6(void)

longlong FUN_14063d1f6(void)

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
  if (DAT_14cabedd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636d4ec;
    local_38 = &LAB_147856fcd;
    local_40 = &LAB_145c78dde;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/Engine",L"AnimSequenceBase",&DAT_14cabedd8,&DAT_147856fcc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabedd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063d2dc FUN_14063d2dc body=401 status=ok
// SIG undefined FUN_14063d2dc(void)

undefined8 * FUN_14063d2dc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3c);
    if (lVar2 == 0) {
      *param_2 = 0;
LAB_14063d3bd:
      if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (*(int *)(param_3 + 0x158) != *(int *)(param_3 + 0x184)) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar7 = (uint)lVar2 & 0xffff;
      lVar5 = param_3 + 0x188;
      if (*(longlong *)(param_3 + 400) != 0) {
        lVar5 = *(longlong *)(param_3 + 400);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_3 + 0x198) - 1U &
                               (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_3 + 0x150) + (longlong)iVar4 * 0x18);
          if (*plVar1 == lVar2) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              FUN_1400021e4(plVar1 + 1,&local_38);
              puVar6 = local_38;
              if (local_30 == 0) {
                puVar6 = &DAT_149dfb77a;
              }
              FUN_140002266(&local_28,L"AnimNotify_%s",puVar6);
              if (local_38 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              puVar6 = local_28;
              if (local_20 == 0) {
                puVar6 = &DAT_149dfb77a;
              }
              FUN_1446f470e(param_2,puVar6,1);
              if (local_28 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_14063d3bd;
            }
            break;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
      }
    }
  }
  FUN_14063d46e(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14063d46e FUN_14063d46e body=254 status=ok
// SIG undefined FUN_14063d46e(void)

undefined8 * FUN_14063d46e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x3c) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x3c) != *(longlong *)(param_1 + 0xb0)) {
      FUN_1400021e4(param_1 + 0x3c,&local_40);
      puVar2 = local_40;
      if (local_38 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_30,L"AnimNotify_%s",puVar2);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x3c);
      puVar2 = local_30;
      if (local_28 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar2,1);
      *(undefined2 **)(param_1 + 0xa8) = local_40;
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
  }
  *param_2 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14063d56e FUN_14063d56e body=1389 status=ok
// SIG undefined FUN_14063d56e(void)

void FUN_14063d56e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  DWORD DVar6;
  DWORD DVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar8 = *(int *)(param_1 + 600);
  if ((longlong)iVar8 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x250);
    lVar18 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar3 + lVar18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)iVar8 * 8 != lVar18);
  }
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0x25c) != 0) {
    FUN_14063db1c(param_1 + 0x250,0);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x238);
  if (puVar4 == (undefined8 *)0x0) goto LAB_14063d6fc;
  *(undefined8 *)(param_1 + 0x238) = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar3 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_14063d61e;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14063d623;
      goto LAB_14063d65a;
    }
LAB_14063d623:
    LOCK();
    piVar1 = (int *)(puVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      puVar9 = (undefined8 *)*puVar4;
      puVar17 = puVar4;
LAB_14063d633:
      (*(code *)*puVar9)(puVar17,1);
    }
  }
  else {
LAB_14063d61e:
    if (iVar8 == 0x10) goto LAB_14063d623;
LAB_14063d65a:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar3 + 0xc60), iVar8 == 2))
      goto LAB_14063d623;
      if (iVar8 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14063d623;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar9 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar9;
      if (puVar11 != (uint *)0x0) goto LAB_14063d806;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14356c471);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar3 + 0x310);
        *(undefined8 *)(lVar3 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar9 = puVar10;
        FUN_140217a48(puVar9);
        puVar11 = (uint *)*puVar9;
LAB_14063d806:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar2 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar9;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar9 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_14063d886;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_14063d886:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar8 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a9ce870;
      puVar17[0x15] = puVar4;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
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
      lVar3 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar3 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar3 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar8;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_14063d6d5;
      }
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_14063d6d5;
      puVar9 = (undefined8 *)*puVar17;
      goto LAB_14063d633;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a9ce850;
    local_68[0] = &DAT_14356cbea;
    local_40 = puVar4;
    FUN_14005a792(&DAT_14ca9a440,L"FDestroyMaterialInstanceResourceCommand",&DAT_14caea54c);
    if (local_68[0] != (undefined *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14063d6d5:
  puVar4 = *(undefined8 **)(param_1 + 0x238);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
LAB_14063d6fc:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_14063dadc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063dadc FUN_14063dadc body=64 status=ok
// SIG undefined FUN_14063dadc(void)

void FUN_14063dadc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    FUN_14063db7c(lVar1);
    FUN_1400020a8(lVar1);
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 14063db1c FUN_14063db1c body=96 status=ok
// SIG undefined FUN_14063db1c(void)

void FUN_14063db1c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14063db7c FUN_14063db7c body=587 status=ok
// SIG undefined FUN_14063db7c(void)

void FUN_14063db7c(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc47e(param_1 + 0x3f8);
  if (*(longlong *)(param_1 + 1000) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_1400020a8();
  }
  FUN_14063dedc(*(undefined8 *)(param_1 + 0x390),*(undefined4 *)(param_1 + 0x398));
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1400020a8();
  }
  FUN_14063df0f(*(undefined8 *)(param_1 + 0x380),*(undefined4 *)(param_1 + 0x388));
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FUN_1400020a8();
  }
  FUN_14063df42(*(undefined8 *)(param_1 + 0x360),*(undefined4 *)(param_1 + 0x368));
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_1400020a8();
  }
  FUN_14063de7a(*(undefined8 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x358));
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FUN_1400020a8();
  }
  FUN_14063deab(*(undefined8 *)(param_1 + 0x340),*(undefined4 *)(param_1 + 0x348));
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_1400020a8();
  }
  param_1 = param_1 + 0x280;
  lVar1 = -0x2d0;
  do {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14063ddc8(param_1);
    param_1 = param_1 + -0x50;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14063ddc8 FUN_14063ddc8 body=55 status=ok
// SIG undefined FUN_14063ddc8(void)

void FUN_14063ddc8(longlong *param_1)

{
  FUN_14063de00(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14063de00 FUN_14063de00 body=121 status=ok
// SIG undefined FUN_14063de00(void)

void FUN_14063de00(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14063de7a FUN_14063de7a body=49 status=ok
// SIG undefined FUN_14063de7a(void)

void FUN_14063de7a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14063deab FUN_14063deab body=49 status=ok
// SIG undefined FUN_14063deab(void)

void FUN_14063deab(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14063dedc FUN_14063dedc body=51 status=ok
// SIG undefined FUN_14063dedc(void)

void FUN_14063dedc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14063df0f FUN_14063df0f body=51 status=ok
// SIG undefined FUN_14063df0f(void)

void FUN_14063df0f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14063df42 FUN_14063df42 body=51 status=ok
// SIG undefined FUN_14063df42(void)

void FUN_14063df42(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14063df82 FUN_14063df82 body=149 status=ok
// SIG undefined FUN_14063df82(void)

ulonglong FUN_14063df82(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar1 = (uint *)(param_1 + 4);
  DVar3 = GetCurrentThreadId();
  uVar4 = *(uint *)(param_1 + 4);
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar6 = uVar4 == uVar2;
    if (bVar6) {
      *puVar1 = uVar4 | 1;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
    if (bVar6) {
      *(DWORD *)(param_1 + 8) = DVar3;
      goto LAB_14063dfb2;
    }
  }
  if (*(DWORD *)(param_1 + 8) == DVar3) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar4);
  }
LAB_14063dfb2:
  FUN_144a076e0(param_1 + 0xa0,param_1,param_2);
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar4;
  if (3 < uVar4) {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
    return uVar5;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (uVar4 < 2) {
    LOCK();
    uVar2 = *puVar1;
    if (uVar4 == uVar2) {
      *puVar1 = 0;
    }
    else {
      uVar5 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (uVar4 == uVar2) {
      return uVar5;
    }
  }
  uVar5 = FUN_140d366d2(puVar1);
  return uVar5;
}



// FUNCTION 14063e017 FUN_14063e017 body=34 status=ok
// SIG undefined FUN_14063e017(void)

void FUN_14063e017(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + lVar3 * 8);
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 0x24c);
        *piVar1 = *piVar1 + -1;
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 14063e03a FUN_14063e03a body=944 status=ok
// SIG undefined FUN_14063e03a(void)

void FUN_14063e03a(undefined4 *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [40];
  undefined4 *local_100;
  uint *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [16];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = 0;
  uStack_e0 = 0;
  local_58 = (uint *)0x0;
  local_50 = 0x2000000000;
  uVar1 = (*param_2 >> 0x10 ^ *param_2) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xc0) +
                   (ulonglong)((uVar1 >> 0x10 ^ uVar1) & param_1[0xbd]) * 4);
  if (uVar1 != 0xffffffff) {
    do {
      uVar5 = local_50;
      if ((*(uint *)(*(longlong *)(param_1 + 0xc4) + (longlong)(int)uVar1 * 8) == *param_2) &&
         (*(short *)(*(longlong *)(param_1 + 200) + (longlong)(int)uVar1 * 2) != 0)) {
        lVar9 = (longlong)(int)local_50;
        uVar2 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar2);
        if (local_50._4_4_ < uVar2) {
          FUN_1456cba76(local_d8,uVar5 & 0xffffffff);
        }
        puVar4 = local_58;
        if (local_58 == (uint *)0x0) {
          puVar4 = (uint *)local_d8;
        }
        puVar4[lVar9] = uVar1;
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xc2) + (ulonglong)uVar1 * 4);
    } while (uVar1 != 0xffffffff);
    puVar4 = (uint *)local_d8;
    if (local_58 != (uint *)0x0) {
      puVar4 = local_58;
    }
    if ((longlong)(int)local_50 != 0) {
      local_f8 = puVar4 + (int)local_50;
      local_100 = param_1 + 0xcc;
      local_f0 = param_3;
      do {
        uVar5 = uStack_e0;
        uVar1 = *puVar4;
        lVar9 = *(longlong *)(param_1 + 0xc4);
        lVar8 = (longlong)(int)uStack_e0;
        uVar2 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar2);
        if (uStack_e0._4_4_ < uVar2) {
          FUN_14063e3ec(&local_e8,uVar5 & 0xffffffff);
        }
        lVar7 = (longlong)(int)uVar1;
        *(undefined8 *)(local_e8 + lVar8 * 8) = *(undefined8 *)(lVar9 + lVar7 * 8);
        iVar3 = param_1[0xce];
        param_1[0xce] = iVar3 + 1U;
        if ((uint)param_1[0xcf] < iVar3 + 1U) {
          FUN_1447808da(local_100,iVar3);
        }
        *(uint *)(*(longlong *)(param_1 + 0xcc) + (longlong)iVar3 * 4) = uVar1;
        if (uVar1 < (uint)param_1[0xb6]) {
          uVar5 = *(ulonglong *)(lVar9 + lVar7 * 8);
          uVar5 = (uVar5 >> 0x21 ^ uVar5) * -0xae502812aa7333;
          lVar8 = (uVar5 >> 0x21 ^ uVar5) * -0x3b314601e57a13ad;
          uVar5 = (ulonglong)
                  (((uint)((ulonglong)lVar8 >> 0x21) ^ (uint)lVar8) & param_1[0xb5] & 0xffff);
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0xb8) + uVar5 * 4);
          if (uVar2 == uVar1) {
            puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xb8) + uVar5 * 4);
            lVar8 = *(longlong *)(param_1 + 0xba);
          }
          else {
            do {
              if (uVar2 == 0xffffffff) goto LAB_14063e25a;
              lVar8 = *(longlong *)(param_1 + 0xba);
              uVar5 = (ulonglong)uVar2;
              uVar2 = *(uint *)(lVar8 + uVar5 * 4);
            } while (uVar2 != uVar1);
            puVar6 = (undefined4 *)(lVar8 + uVar5 * 4);
          }
          *puVar6 = *(undefined4 *)(lVar8 + (ulonglong)uVar1 * 4);
        }
LAB_14063e25a:
        if (uVar1 < (uint)param_1[0xbe]) {
          uVar2 = *(uint *)(lVar9 + lVar7 * 8);
          uVar2 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
          uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
          uVar5 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & param_1[0xbd]);
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0xc0) + uVar5 * 4);
          if (uVar2 == uVar1) {
            puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar5 * 4);
            lVar9 = *(longlong *)(param_1 + 0xc2);
          }
          else {
            do {
              if (uVar2 == 0xffffffff) goto LAB_14063e2bd;
              lVar9 = *(longlong *)(param_1 + 0xc2);
              uVar5 = (ulonglong)uVar2;
              uVar2 = *(uint *)(lVar9 + uVar5 * 4);
            } while (uVar2 != uVar1);
            puVar6 = (undefined4 *)(lVar9 + uVar5 * 4);
          }
          *puVar6 = *(undefined4 *)(lVar9 + (ulonglong)uVar1 * 4);
        }
LAB_14063e2bd:
        *(undefined2 *)(*(longlong *)(param_1 + 200) + lVar7 * 2) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0xc4) + lVar7 * 8) = 0;
        puVar4 = puVar4 + 1;
        param_3 = local_f0;
      } while (puVar4 != local_f8);
    }
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)(int)uStack_e0 != 0) {
    lVar8 = (longlong)(int)uStack_e0 << 3;
    lVar9 = local_e8;
    do {
      local_d8[0] = lVar9;
      iVar3 = FUN_144a082fe(param_1 + 0xac,local_d8);
      if (iVar3 == 0) {
        FUN_14063e54e(param_2,param_3,lVar9,*param_1);
      }
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8(local_e8);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14063e3ec FUN_14063e3ec body=353 status=ok
// SIG undefined FUN_14063e3ec(void)

void FUN_14063e3ec(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14063e471;
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
LAB_14063e471:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14063e54e FUN_14063e54e body=470 status=ok
// SIG undefined FUN_14063e54e(void)

void FUN_14063e54e(undefined4 *param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  bVar4 = *(byte *)(param_2 + 0xbc);
  if (bVar4 != 0) {
    uVar10 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 200) + uVar10 * 8);
      uVar6 = (int)uVar10 << 0x1c | *(uint *)(param_3 + 4) & 0xfffffff;
      uVar9 = CONCAT44(uVar6,*param_1);
      uVar7 = (uVar6 >> 1 ^ uVar9) * -0xae502812aa7333;
      lVar8 = (uVar7 >> 0x21 ^ uVar7) * -0x3b314601e57a13ad;
      uVar6 = *(uint *)(*(longlong *)(lVar2 + 0xa8) +
                       (ulonglong)
                       (((uint)((ulonglong)lVar8 >> 0x21) ^ (uint)lVar8) & *(uint *)(lVar2 + 0x9c) &
                       0xffff) * 4);
      if (uVar6 != 0xffffffff) {
LAB_14063e607:
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0xd8) + (longlong)(int)uVar6 * 8) != uVar9)
        goto code_r0x00014063e610;
        uVar7 = (ulonglong)(uVar6 & 0xffff);
        lVar8 = lVar2 + 0x70;
        uVar1 = *(uint *)(*(longlong *)(lVar2 + 0xd8) + 4 + uVar7 * 8);
        if (*(int *)(lVar2 + 0x70) == *(int *)(lVar2 + 0x74)) {
          uVar5 = *(int *)(lVar2 + 0x70) * 2;
          if (uVar5 < 0x21) {
            uVar5 = 0x20;
          }
          FUN_145740042(lVar8,uVar5);
        }
        if (*(uint *)(lVar2 + 0x78) <= (uVar6 & 0xffff)) {
          uVar9 = uVar7 * 2 + 1;
          lVar3 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uVar5 = 1 << ((byte)lVar3 & 0x1f);
          if (uVar5 < 0x21) {
            uVar5 = 0x20;
          }
          FUN_1457400ca(lVar8,uVar5);
        }
        uVar5 = *(uint *)(lVar2 + 0x70);
        *(uint *)(lVar2 + 0x70) = uVar5 + 1;
        *(short *)(*(longlong *)(lVar2 + 0x80) + ((ulonglong)uVar5 & 0xffff) * 2) = (short)uVar6;
        *(uint *)(*(longlong *)(lVar2 + 0x88) + uVar7 * 4) = uVar1 >> 0x18 & 0xf | param_4 << 4;
        *(short *)(*(longlong *)(lVar2 + 0x90) + uVar7 * 2) = (short)uVar5;
        FUN_1456e6cf4(lVar8);
        bVar4 = *(byte *)(param_2 + 0xbc);
      }
LAB_14063e6bc:
      uVar10 = uVar10 + 1;
    } while (uVar10 < bVar4);
  }
  return;
code_r0x00014063e610:
  uVar6 = *(uint *)(*(longlong *)(lVar2 + 0xb0) + (ulonglong)uVar6 * 4);
  if (uVar6 == 0xffffffff) goto LAB_14063e6bc;
  goto LAB_14063e607;
}



// FUNCTION 14063e724 FUN_14063e724 body=356 status=ok
// SIG undefined FUN_14063e724(void)

void FUN_14063e724(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x408);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x101) {
    uVar6 = 0x100;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x100 < *(uint *)(param_1 + 0x40c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14063e7bc;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14063e7bc:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x40c) = (int)uVar6;
  FUN_14063e888(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 14063e888 FUN_14063e888 body=144 status=ok
// SIG undefined FUN_14063e888(void)

void FUN_14063e888(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,param_4);
  return;
}



// FUNCTION 14063e918 FUN_14063e918 body=130 status=ok
// SIG undefined FUN_14063e918(void)

undefined4
FUN_14063e918(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_145a609fa(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063e99c FUN_14063e99c body=1072 status=ok
// SIG undefined FUN_14063e99c(void)

void FUN_14063e99c(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  code **local_68;
  int local_5c;
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar11 = *(undefined4 *)(param_5 + 1);
  uVar4 = *param_5;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar7 = DAT_14c762760 + 1;
    *(int *)(puVar9 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar7;
    *puVar9 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
    uVar3 = *(uint *)(lVar8 + 0xc);
    *(uint *)(puVar9 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar14) {
        local_5c = iVar13;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
        iVar13 = local_5c;
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar7 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar13;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar7 = iVar13;
      }
    }
    *(int *)((longlong)puVar9 + 0x14) = iVar7;
    *(undefined1 *)(puVar9 + 3) = 1;
    *puVar9 = &PTR_FUN_14b47b0e0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined1 *)(puVar9 + 6) = 0;
    plVar10 = (longlong *)FUN_14063ee94(puVar9 + 4);
    if ((int)plVar10[1] != 4) {
      FUN_1446efa72(plVar10,0,4,0x10);
      *(undefined4 *)(plVar10 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar10;
    plVar10 = *(longlong **)(param_4 + 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_14063ecae:
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b479020;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = uVar4;
      *(undefined4 *)(puVar5 + 6) = uVar11;
    }
    else {
      iVar7 = (int)plVar10[1];
      do {
        if (iVar7 == 0) goto LAB_14063ecae;
        LOCK();
        iVar13 = (int)plVar10[1];
        bVar14 = iVar7 == iVar13;
        if (bVar14) {
          *(int *)(plVar10 + 1) = iVar7 + 1;
          iVar13 = iVar7;
        }
        iVar7 = iVar13;
        UNLOCK();
      } while (!bVar14);
      uVar6 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar12;
      *puVar5 = &PTR_FUN_14b479020;
      puVar5[3] = uVar6;
      puVar5[4] = plVar10;
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar11;
      puVar5[5] = uVar4;
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
    iVar7 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar7 + 1U) {
      FUN_141053524((longlong *)(param_2 + 0x198),iVar7);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar7 * 8) = puVar9;
    uVar11 = *(undefined4 *)(puVar9 + 1);
  }
  plVar10 = (longlong *)(param_1 + 0x138);
  iVar7 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
    FUN_1447808da(plVar10,iVar7);
  }
  *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  local_58 = (code *)*param_3;
  lVar8 = FUN_14063edce(&DAT_14cb91658,&local_58);
  if (lVar8 != 0) {
    local_58 = FUN_140ed4b7e;
    local_50 = 0;
    local_68 = &local_58;
    lVar8 = FUN_14063efbe(param_2,lVar8,1,param_1);
    uVar11 = *(undefined4 *)(lVar8 + 8);
    iVar7 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar7 + 1U) {
      FUN_1447808da(plVar10,iVar7);
    }
    *(undefined4 *)(*plVar10 + (longlong)iVar7 * 4) = uVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14063edce FUN_14063edce body=76 status=ok
// SIG undefined FUN_14063edce(void)

longlong FUN_14063edce(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  puVar1 = (undefined8 *)FUN_14063ee1a(*param_1);
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)FUN_14063ee1a(*puVar1)) {
    lVar2 = puVar1[2];
    if (*(longlong *)(lVar2 + 0x78) == *param_2) goto LAB_14063ee08;
  }
  lVar2 = 0;
LAB_14063ee08:
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  UNLOCK();
  return lVar2;
}



// FUNCTION 14063ee1a FUN_14063ee1a body=122 status=ok
// SIG undefined FUN_14063ee1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14063ee1a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_14063ee68:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_14063ee68;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 14063ee94 FUN_14063ee94 body=230 status=ok
// SIG undefined FUN_14063ee94(void)

longlong FUN_14063ee94(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_14063ef7a();
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a55ecf0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14063eefc;
    param_1[1] = 0;
LAB_14063ef1b:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14063eefc;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
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
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14063ef1b;
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
LAB_14063eefc:
  return *param_1;
}



// FUNCTION 14063ef7a FUN_14063ef7a body=68 status=ok
// SIG undefined FUN_14063ef7a(void)

void FUN_14063ef7a(longlong *param_1)

{
  undefined8 *puVar1;
  
  param_1 = (longlong *)*param_1;
  if (((param_1 != (longlong *)0x0) && ((int)param_1[1] != 0)) &&
     (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14063efbe FUN_14063efbe body=425 status=ok
// SIG undefined FUN_14063efbe(void)

undefined8 *
FUN_14063efbe(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_5;
  uVar1 = *(undefined4 *)(param_5 + 1);
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar4 = DAT_14c762760 + 1;
  *(int *)(puVar5 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar4;
  *puVar5 = &PTR_LAB_14acd0ae0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(puVar5 + 2) = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar5 + 2) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x14) = iVar4;
  *(undefined1 *)(puVar5 + 3) = param_3;
  *puVar5 = &PTR_FUN_14b47b110;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined1 *)(puVar5 + 6) = 0;
  uVar6 = FUN_14063f168(puVar5 + 4);
  local_58 = uVar3;
  local_50 = uVar1;
  FUN_14063f292(uVar6,param_4);
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar5;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 14063f168 FUN_14063f168 body=230 status=ok
// SIG undefined FUN_14063f168(void)

longlong FUN_14063f168(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  FUN_14063f24e();
  plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b47b140;
  plVar3[2] = 0;
  plVar3[3] = 0;
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14063f1d0;
    param_1[1] = 0;
LAB_14063f1ef:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14063f1d0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar3 + 2);
    plVar4 = (longlong *)param_1[1];
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
      param_1[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14063f1ef;
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
LAB_14063f1d0:
  return *param_1;
}



// FUNCTION 14063f24e FUN_14063f24e body=68 status=ok
// SIG undefined FUN_14063f24e(void)

void FUN_14063f24e(longlong *param_1)

{
  undefined8 *puVar1;
  
  param_1 = (longlong *)*param_1;
  if (((param_1 != (longlong *)0x0) && ((int)param_1[1] != 0)) &&
     (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14063f292 FUN_14063f292 body=423 status=ok
// SIG undefined FUN_14063f292(void)

void FUN_14063f292(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14063f368:
    *puVar5 = &PTR_LAB_14b47b160;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b47b050;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14063f368;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b47b160;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b47b050;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014063f421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14063f43a FUN_14063f43a body=837 status=ok
// SIG undefined FUN_14063f43a(void)

undefined4
FUN_14063f43a(longlong param_1,undefined8 *param_2,undefined1 param_3,longlong param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = param_5[1];
  lVar4 = *param_5;
  local_50 = *param_2;
  lVar9 = FUN_14063edce(&DAT_14cb91658);
  if (lVar9 == 0) {
    uVar14 = 0;
  }
  else {
    lVar12 = 0;
    uVar14 = (int)lVar7;
    if (lVar4 == 0) {
      uVar14 = 0;
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar8 = DAT_14c762760 + 1;
    *(int *)(puVar10 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar8;
    *puVar10 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(puVar10 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar8 = iVar13;
      }
    }
    *(int *)((longlong)puVar10 + 0x14) = iVar8;
    *(undefined1 *)(puVar10 + 3) = param_3;
    *puVar10 = &PTR_FUN_14b47b110;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 6) = 0;
    plVar11 = (longlong *)FUN_14063f168(puVar10 + 4);
    if ((int)plVar11[1] != 4) {
      FUN_1446efa72(plVar11,0,4,0x10);
      *(undefined4 *)(plVar11 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar11;
    plVar11 = *(longlong **)(param_4 + 0x10);
    if (plVar11 == (longlong *)0x0) {
LAB_14063f67d:
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b479090;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = lVar4;
      *(undefined4 *)(puVar5 + 6) = uVar14;
    }
    else {
      iVar8 = (int)plVar11[1];
      do {
        if (iVar8 == 0) goto LAB_14063f67d;
        LOCK();
        iVar13 = (int)plVar11[1];
        bVar15 = iVar8 == iVar13;
        if (bVar15) {
          *(int *)(plVar11 + 1) = iVar8 + 1;
          iVar13 = iVar8;
        }
        iVar8 = iVar13;
        UNLOCK();
      } while (!bVar15);
      uVar6 = *(undefined8 *)(param_4 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b479090;
      puVar5[3] = uVar6;
      puVar5[4] = plVar11;
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar14;
      puVar5[5] = lVar4;
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
    iVar8 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
      FUN_141053524((longlong *)(param_1 + 0x198),iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar10;
    uVar14 = *(undefined4 *)(puVar10 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 14063f780 FUN_14063f780 body=198 status=ok
// SIG undefined FUN_14063f780(void)

undefined8 FUN_14063f780(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x30);
  if (lVar9 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28);
    lVar8 = 0;
    do {
      if ((*(char *)(lVar2 + 8 + lVar8) == '\x02') &&
         (lVar5 = *(longlong *)(lVar2 + lVar8), lVar5 != 0)) {
        iVar1 = *(int *)(lVar5 + 0x18);
        if ((-1 < (longlong)iVar1) &&
           ((iVar1 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78) &&
            (plVar3 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar1 * 8),
            plVar3 != (longlong *)0x0)))) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_14063f846();
          if ((lVar6 != 0) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)))) {
            cVar4 = FUN_14063f880(plVar3,param_1);
            if (cVar4 == '\0') {
              return 0;
            }
          }
        }
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar9 * 0x20 != lVar8);
  }
  uVar7 = FUN_14117dbd8(param_1);
  return uVar7;
}



// FUNCTION 14063f846 FUN_14063f846 body=57 status=ok
// SIG undefined FUN_14063f846(void)

void FUN_14063f846(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60700 = FUN_140002ddd(FUN_141854b04,uVar1,L"GbxMomentNodeState");
  }
  return;
}



// FUNCTION 14063f880 FUN_14063f880 body=302 status=ok
// SIG undefined FUN_14063f880(void)

ulonglong FUN_14063f880(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 == 0) {
    param_2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x58);
    lVar6 = 0;
    do {
      FUN_14063f9b0(*(undefined8 *)(param_1 + 0x48),&local_50,*(undefined4 *)(lVar3 + lVar6));
      uVar4 = uStack_60;
      lVar8 = (longlong)(int)uStack_60;
      uVar5 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
      if (uStack_60._4_4_ < uVar5) {
        FUN_1446f84a2(&local_68,uVar4 & 0xffffffff);
      }
      local_68[lVar8] = local_50;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar2 * 4 != lVar6);
    if ((longlong)(int)uStack_60 != 0) {
      plVar1 = (longlong *)(param_2 + 0x48);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x30);
      plVar7 = local_68;
      do {
        if (iVar2 != 0) {
          lVar6 = 0;
          do {
            if (((*(char *)(lVar3 + 8 + lVar6) == '\x03') &&
                (*(longlong *)(lVar3 + lVar6) == *plVar1)) &&
               (param_2 = CONCAT71((int7)(param_2 >> 8),1),
               *(longlong *)(lVar3 + 0xc + lVar6) == *plVar7)) goto LAB_14063f977;
            lVar6 = lVar6 + 0x20;
          } while ((longlong)iVar2 << 5 != lVar6);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != local_68 + (int)uStack_60);
    }
    param_2 = 0;
LAB_14063f977:
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063f9b0 FUN_14063f9b0 body=118 status=ok
// SIG undefined FUN_14063f9b0(void)

undefined8 * FUN_14063f9b0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 200))(0,&local_38);
  uVar1 = 0;
  if ((-1 < (int)param_3) && ((int)param_3 < (int)uStack_30)) {
    uVar1 = *(undefined8 *)(local_38 + (ulonglong)param_3 * 8);
  }
  *param_2 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14063fa28 FUN_14063fa28 body=47 status=ok
// SIG undefined FUN_14063fa28(void)

void FUN_14063fa28(longlong param_1,undefined8 param_2)

{
  FUN_14063fa58();
  FUN_14063fac6(param_2,param_1 + 0x1c8,1);
  return;
}



// FUNCTION 14063fa58 FUN_14063fa58 body=109 status=ok
// SIG undefined FUN_14063fa58(void)

void FUN_14063fa58(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0xb0))();
  if (cVar2 != '\0') {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb809d0;
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb809c8;
  return;
}



// FUNCTION 14063fac6 FUN_14063fac6 body=140 status=ok
// SIG undefined FUN_14063fac6(void)

int FUN_14063fac6(longlong *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)(param_2 + 1);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1446f84a2(param_1,iVar2);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 8);
  memmove((void *)((longlong)_Src + (longlong)(int)uVar1 * 8),_Src,
          (ulonglong)(uint)(iVar2 - param_3) << 3);
  if (uVar1 != 0) {
    memcpy((void *)((longlong)param_3 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 3);
  }
  return param_3;
}



// FUNCTION 14063fb56 FUN_14063fb56 body=102 status=ok
// SIG undefined FUN_14063fb56(void)

void FUN_14063fb56(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_14063fa58();
  FUN_14063fac6(param_2,param_1 + 0x1c8,1);
  iVar1 = (int)param_2[1];
  lVar2 = (longlong)iVar1;
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + lVar2 * 8) = *(undefined8 *)(*param_2 + -8 + lVar2 * 8);
  *(undefined8 *)(*param_2 + -8 + lVar2 * 8) = DAT_14cb80ad0;
  return;
}



// FUNCTION 14063fbbc FUN_14063fbbc body=388 status=ok
// SIG undefined FUN_14063fbbc(void)

void FUN_14063fbbc(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined1 local_70 [40];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_5;
  FUN_14063fd42();
  if (((((*param_2 == DAT_14cbc55d8) && (*(char *)(param_1 + -0x2a0) == '\x03')) &&
       (cVar2 = FUN_1407eda54(*param_3), cVar2 != '\0')) &&
      (((*(longlong *)(param_1 + 0x2240) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x2240) + 0x468) == '\x01')) &&
       (cVar2 = FUN_144729dda(param_1 + 0x2308), cVar2 == '\0')))) &&
     ((lVar3 = *(longlong *)(param_1 + 0x2398), lVar3 == 0 ||
      (((*(longlong *)(lVar3 + 0x330) == 0 || (cVar2 = FUN_14641b224(), cVar2 != '\0')) &&
       (*(char *)(lVar3 + 0x340) == '\0')))))) {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2240) + 0x460);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2240) + 0x458);
      lVar7 = 0;
      do {
        local_78 = *(undefined8 *)(lVar1 + lVar7);
        FUN_1446dcdd4(local_70,&local_78);
        plVar4 = (longlong *)FUN_1400d6974(local_70);
        if (plVar4 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar6 = FUN_140fe7bec();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            FUN_148cf61bc(param_1 + -0x418,plVar4);
            break;
          }
        }
        lVar7 = lVar7 + 0x18;
      } while (lVar3 * 0x18 != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14063fd42 FUN_14063fd42 body=111 status=ok
// SIG undefined FUN_14063fd42(void)

void FUN_14063fd42(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14063fe71(param_1 + 0xc0);
  FUN_14063fdb1(param_1 + 0x12c8,param_2,param_3);
  FUN_140640638(param_1 + 0x30,param_2,param_3);
  FUN_14064035a(param_1 + 0x15e0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14063fdb1 FUN_14063fdb1 body=191 status=ok
// SIG undefined FUN_14063fdb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14063fdb1(undefined8 param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined2 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined2 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = _DAT_14cb246b4;
  if ((_DAT_14cb246b4 == DAT_14c948034) && (uVar1 = DAT_14c948034, DAT_14cb246b0 != DAT_14c948030))
  {
    FUN_14011791e(&local_40,DAT_14cb246b0,_DAT_14cb246b4 >> 0x20);
    _DAT_14cb246b4 = local_40;
    uVar1 = local_40;
  }
  if (*param_2 == uVar1) {
    FUN_1406407c2(&local_58,param_3);
    local_40 = local_58;
    local_38 = local_50;
    local_30 = local_48;
    FUN_140365c30(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14063fe71 FUN_14063fe71 body=322 status=ok
// SIG undefined FUN_14063fe71(void)

void FUN_14063fe71(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + 0x68 + lVar2) == *param_2) {
        uVar5 = (lVar2 >> 3) * -0xf0f0f0f0f0f0f0f;
        uVar4 = (uint)uVar5;
        if ((uVar4 != 0xffffffff) &&
           (iVar1 = FUN_140640158(*param_1 + (longlong)(int)uVar4 * 0x88,param_3), iVar1 != -1)) {
          lVar2 = *param_4;
          if (lVar2 != 0) {
            plVar3 = (longlong *)(*param_1 + 0x78 + (ulonglong)(uVar4 & 0x7fffffff) * 0x88);
            if ((int)param_1[1] <= (int)uVar4) {
              plVar3 = &DAT_14c9a6324;
            }
            if ((int)uVar4 < 0) {
              plVar3 = &DAT_14c9a6324;
            }
            if (lVar2 != *plVar3) {
              local_48 = 0xbf800000;
              local_44 = 1;
              local_58 = 0xffffffff;
              local_60 = lVar2;
              FUN_140640e4a(param_1,uVar5 & 0xffffffff);
            }
          }
          local_50 = param_5;
          local_4c = 1;
          FUN_14063ffb4(param_1,uVar5 & 0xffffffff,iVar1);
        }
        break;
      }
      lVar2 = lVar2 + 0x88;
    } while ((longlong)(int)param_1[1] * 0x88 != lVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14063ffb4 FUN_14063ffb4 body=265 status=ok
// SIG undefined FUN_14063ffb4(void)

undefined4 FUN_14063ffb4(longlong *param_1,uint param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)param_2)) {
    uVar4 = 0;
  }
  else {
    lVar2 = *param_1;
    lVar3 = (ulonglong)param_2 * 0x88;
    uVar6 = FUN_1406400be(param_1);
    fVar1 = *(float *)(lVar2 + 0x84 + lVar3);
    local_68 = *(undefined4 *)(lVar2 + 0x80 + lVar3);
    local_70 = *(undefined8 *)(lVar2 + 0x78 + lVar3);
    fVar7 = (float)uVar6;
    if (*(char *)(param_4 + 1) == '\x01') {
      fVar7 = *param_4;
    }
    uVar4 = FUN_140640470(lVar2 + lVar3,param_3,fVar7);
    if ((char)uVar4 != '\0') {
      uVar5 = -(uint)(fVar1 < 0.0);
      FUN_140640a12(param_1,lVar2 + lVar3,&local_70,
                    (ulonglong)(uVar5 & 0x7f7fffff) |
                    CONCAT44((int)((ulonglong)uVar6 >> 0x20),~uVar5 & (uint)((float)uVar6 - fVar1)))
      ;
    }
  }
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1406400be FUN_1406400be body=153 status=ok
// SIG undefined FUN_1406400be(void)

float FUN_1406400be(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = -1.0;
  if (((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x14))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar3 + 0x180))();
      if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x178) == (longlong *)0x0) {
          dVar4 = *(double *)(lVar2 + 0x6d0);
        }
        else {
          dVar4 = (double)(**(code **)(**(longlong **)(lVar2 + 0x178) + 0x640))();
        }
        fVar5 = (float)dVar4;
      }
    }
  }
  return fVar5;
}



// FUNCTION 140640158 FUN_140640158 body=352 status=ok
// SIG undefined FUN_140640158(void)

undefined8 FUN_140640158(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448ec792(param_1 + 0x18,&local_30);
  if (local_30 != 0) {
    iVar7 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar7 < 0) {
      lVar6 = *(longlong *)(local_30 + 0x78);
      uVar9 = *(uint *)(local_30 + 0x80);
LAB_140640272:
      if (uVar9 != 0) {
        lVar8 = (longlong)(int)uVar9 * 0x90 + lVar6;
        lVar5 = *(longlong *)(param_1 + 0x68);
        goto LAB_140640227;
      }
    }
    else {
      uVar9 = *(uint *)(local_30 + 0x80);
      lVar6 = *(longlong *)(local_30 + 0x78);
      if ((int)uVar9 <= iVar7) goto LAB_140640272;
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(lVar6 + (longlong)iVar7 * 0x90) == lVar5) {
LAB_1406401c4:
        lVar6 = (longlong)iVar7 * 0x90 + lVar6;
        goto LAB_1406401d2;
      }
      lVar8 = (ulonglong)uVar9 * 0x90 + lVar6;
LAB_140640227:
      uVar10 = 0;
      do {
        if (*(longlong *)(lVar6 + uVar10) == lVar5) {
          iVar7 = (int)(uVar10 >> 4) * 0x38e38e39;
          *(int *)(param_1 + 0x70) = iVar7;
          if (iVar7 == -1) goto LAB_1406402b2;
          lVar6 = *(longlong *)(local_30 + 0x78);
          goto LAB_1406401c4;
        }
        lVar3 = lVar6 + uVar10;
        uVar10 = uVar10 + 0x90;
      } while (lVar3 + 0x90 != lVar8);
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
LAB_1406402b2:
  lVar6 = 0;
LAB_1406401d2:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (lVar6 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_1406402ba(lVar6,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1406402ba FUN_1406402ba body=160 status=ok
// SIG undefined FUN_1406402ba(void)

ulonglong FUN_1406402ba(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if ((longlong)DAT_14c9a5fd8 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(DAT_14c9a5fd0 + lVar2) == *param_2) {
          return 0;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)DAT_14c9a5fd8 * 8 != lVar2);
    }
    if ((longlong)DAT_14c9a5fe8 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(DAT_14c9a5fe0 + lVar2) == *param_2) {
          return 1;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)DAT_14c9a5fe8 * 8 != lVar2);
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x10) << 3;
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + uVar1 * 8) == *param_2) {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 14064035a FUN_14064035a body=260 status=ok
// SIG undefined FUN_14064035a(void)

void FUN_14064035a(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = DAT_14cb56084;
  if ((DAT_14cb56084 == DAT_14c948034) && (uVar4 = DAT_14c948034, DAT_14cb56080 != DAT_14c948030)) {
    FUN_14011791e(&local_30,DAT_14cb56080,DAT_14cb56084 >> 0x20);
    DAT_14cb56084 = local_30;
    uVar4 = local_30;
  }
  uVar3 = *param_2;
  if (uVar3 == uVar4) {
    uVar1 = FUN_1407eda54(*param_3);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  else {
    uVar4 = DAT_14cb5609c;
    if ((DAT_14cb5609c == DAT_14c948034) && (uVar4 = DAT_14c948034, DAT_14cb56098 != DAT_14c948030))
    {
      FUN_14011791e(&local_30,DAT_14cb56098,DAT_14cb5609c >> 0x20);
      DAT_14cb5609c = local_30;
      uVar3 = *param_2;
      uVar4 = local_30;
    }
    if ((uVar3 == uVar4) && (cVar2 = FUN_1407eda54(*param_3), cVar2 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140640470 FUN_140640470 body=455 status=ok
// SIG undefined FUN_140640470(void)

undefined8 FUN_140640470(longlong param_1,uint param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(uint *)(param_1 + 0x80) != param_2) {
    FUN_1448ec792(param_1 + 0x18,&local_50);
    if (local_50 == 0) {
LAB_140640630:
      lVar10 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x70);
      if ((longlong)iVar6 < 0) {
        lVar10 = *(longlong *)(local_50 + 0x78);
        uVar8 = *(uint *)(local_50 + 0x80);
LAB_1406405f0:
        if (uVar8 != 0) {
          lVar7 = (longlong)(int)uVar8 * 0x90 + lVar10;
          lVar5 = *(longlong *)(param_1 + 0x68);
LAB_1406405a5:
          uVar9 = 0;
          do {
            if (*(longlong *)(lVar10 + uVar9) == lVar5) {
              iVar6 = (int)(uVar9 >> 4) * 0x38e38e39;
              *(int *)(param_1 + 0x70) = iVar6;
              if (iVar6 == -1) goto LAB_140640630;
              lVar10 = *(longlong *)(local_50 + 0x78);
              goto LAB_140640519;
            }
            lVar3 = lVar10 + uVar9;
            uVar9 = uVar9 + 0x90;
          } while (lVar3 + 0x90 != lVar7);
        }
        *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
        goto LAB_140640630;
      }
      uVar8 = *(uint *)(local_50 + 0x80);
      lVar10 = *(longlong *)(local_50 + 0x78);
      if ((int)uVar8 <= iVar6) goto LAB_1406405f0;
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(lVar10 + (longlong)iVar6 * 0x90) != lVar5) {
        lVar7 = (ulonglong)uVar8 * 0x90 + lVar10;
        goto LAB_1406405a5;
      }
LAB_140640519:
      lVar10 = (longlong)iVar6 * 0x90 + lVar10;
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
    uVar4 = 0;
    if (((int)param_2 < 0) || (lVar10 == 0)) goto LAB_140640497;
    if ((int)param_2 < *(int *)(lVar10 + 0x10)) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 8) + (ulonglong)param_2 * 8);
      if (*(longlong *)(param_1 + 0x78) != lVar10) {
        *(longlong *)(param_1 + 0x78) = lVar10;
        *(uint *)(param_1 + 0x80) = param_2;
      }
      *(uint *)(param_1 + 0x84) =
           ~-(uint)(0.0 <= param_3) & 0xff7fffff | (uint)param_3 & -(uint)(0.0 <= param_3);
      uVar4 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
      goto LAB_140640497;
    }
  }
  uVar4 = 0;
LAB_140640497:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140640638 FUN_140640638 body=352 status=ok
// SIG undefined FUN_140640638(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140640638(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = ram0x00014cb767cc;
  if ((ram0x00014cb767cc == DAT_14c948034) &&
     (uVar4 = DAT_14c948034, (int)DAT_14cb767c8 != DAT_14c948030)) {
    FUN_14011791e(&local_30,(int)DAT_14cb767c8,ram0x00014cb767cc >> 0x20);
    unique0x00023e00 = local_30;
    uVar4 = local_30;
  }
  uVar2 = *param_2;
  if (uVar2 != uVar4) {
    uVar4 = ram0x00014cb767e4;
    if ((ram0x00014cb767e4 == DAT_14c948034) &&
       (uVar4 = DAT_14c948034, (int)DAT_14cb767e0 != DAT_14c948030)) {
      FUN_14011791e(&local_30,(int)DAT_14cb767e0,ram0x00014cb767e4 >> 0x20);
      unique0x00023e00 = local_30;
      uVar2 = *param_2;
      uVar4 = local_30;
    }
    if (uVar2 != uVar4) goto LAB_14064069a;
  }
  lVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar3 != 0) {
    cVar1 = FUN_1412de0d5(param_3);
    FUN_144a8232a(&DAT_14cb767c8);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
LAB_14064069a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406407c2 FUN_1406407c2 body=96 status=ok
// SIG undefined FUN_1406407c2(void)

undefined8 FUN_1406407c2(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40);
  FUN_140640824(param_1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140640824 FUN_140640824 body=212 status=ok
// SIG undefined FUN_140640824(void)

undefined8 * FUN_140640824(undefined8 *param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406408fa(local_48);
  if (DAT_14cb24608 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144837462(DAT_14cb24608,local_48);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar3;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0;
  if (1 < *(int *)(param_2 + 4)) {
    iVar2 = FUN_14686d334(param_2);
    if (-1 < iVar2) {
      sVar1 = FUN_14686d334(param_2);
      for (lVar4 = DAT_14cb245e8; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x10)) {
        if ((*(short *)(lVar4 + 8) <= sVar1) && (sVar1 <= *(short *)(lVar4 + 10))) {
          sVar1 = FUN_14686d334(param_2);
          *(short *)(param_1 + 1) = sVar1 - *(short *)(lVar4 + 8);
          param_1[2] = lVar4;
          break;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406408fa FUN_1406408fa body=115 status=ok
// SIG undefined FUN_1406408fa(void)

undefined8 FUN_1406408fa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  uint local_28 [2];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14064096e(param_2,local_28,1);
  local_20 = (ulonglong)local_28[0];
  FUN_1401533ba(local_34,&local_20,1);
  FUN_1448075d0(param_1,local_34);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064096e FUN_14064096e body=163 status=ok
// SIG undefined FUN_14064096e(void)

ulonglong * FUN_14064096e(int *param_1,ulonglong *param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar2 = (int *)&DAT_14c948618;
  if (((*param_1 != 0) && (iVar1 = param_1[1], iVar1 != 0)) && (*param_1 != DAT_14c948000)) {
    if ((iVar1 < 2) && (param_1[9] < 1)) {
      param_1 = param_1 + 2;
    }
    else {
      param_1 = *(int **)(param_1 + 6);
    }
    if (0 < iVar1) {
      piVar2 = param_1;
    }
  }
  uVar3 = *(ulonglong *)(piVar2 + 1);
  if ((uVar3 == DAT_14c948034) && (*piVar2 != DAT_14c948030)) {
    FUN_14011791e(&local_20,*piVar2,uVar3 >> 0x20);
    uVar3 = local_20;
  }
  *param_2 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140640a12 FUN_140640a12 body=1078 status=ok
// SIG undefined FUN_140640a12(void)

void FUN_140640a12(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar6 = *(int *)(param_2 + 0x10);
  if ((longlong)iVar6 != 0) {
    lVar12 = *(longlong *)(param_2 + 8);
    lVar14 = 0;
    do {
      plVar9 = *(longlong **)(lVar12 + lVar14);
      if (plVar9 != (longlong *)0x0) {
        local_88 = param_4;
        (**(code **)(*plVar9 + 0x30))(plVar9,&local_70,param_2,param_3);
        if (local_70._4_1_ == '\x01') {
          *(float *)(param_2 + 0x84) = (float)local_70 + *(float *)(param_2 + 0x84);
        }
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar6 * 0x10 != lVar14);
  }
  plVar9 = *(longlong **)(param_1 + 0x18);
  if ((((plVar9 != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar12 != 0)) &&
      ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x14) &&
       ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))))) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3);
    if (((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (((((plVar9 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x14))) &&
           ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) &&
          ((lVar12 = *plVar9, lVar12 != 0 && (*(longlong *)(lVar12 + 0x10) != 0)))) &&
         ((*(byte *)(*(longlong *)(lVar12 + 0x10) + 0xd6) & 4) != 0)))))) {
      local_68 = *(undefined4 *)(param_2 + 0x80);
      local_70 = *(undefined8 *)(param_2 + 0x78);
      local_78 = *(undefined4 *)(param_2 + 0x70);
      local_80 = *(undefined8 *)(param_2 + 0x68);
      FUN_1470b7154(lVar12,&local_80,&local_70,param_3);
    }
  }
  iVar6 = *(int *)(param_1 + 0x6c);
  *(int *)(param_1 + 0x6c) = iVar6 + 1;
  uVar7 = (ulonglong)*(int *)(param_1 + 0x60);
  if ((longlong)uVar7 < 1) {
    *(int *)(param_1 + 0x6c) = iVar6;
  }
  else {
    plVar9 = (longlong *)(param_1 + 0x58);
    bVar10 = false;
    do {
      lVar12 = uVar7 * 0x10 + -8;
      uVar13 = uVar7;
      while (((*(int *)(*plVar9 + lVar12) != 0 &&
              (plVar3 = *(longlong **)(*plVar9 + -8 + lVar12), plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3), cVar5 != '\0'))) {
        lVar12 = lVar12 + -0x10;
        bVar4 = uVar13 < 2;
        uVar13 = uVar13 - 1;
        if (bVar4) {
          iVar6 = *(int *)(param_1 + 0x6c) + -1;
          *(int *)(param_1 + 0x6c) = iVar6;
          if (bVar10) goto LAB_140640b67;
          goto LAB_140640bd3;
        }
      }
      uVar7 = uVar13 - 1;
      bVar10 = true;
    } while (1 < uVar13);
    iVar6 = *(int *)(param_1 + 0x6c) + -1;
    *(int *)(param_1 + 0x6c) = iVar6;
LAB_140640b67:
    if (iVar6 < 1) {
      iVar6 = *(int *)(param_1 + 0x60);
      iVar8 = iVar6;
      if (0 < iVar6) {
        iVar11 = 0;
        do {
          if (((*(int *)(*plVar9 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar11 * 0x10), plVar3 == (longlong *)0x0
              )) || (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar9,iVar11);
            FUN_14005b248(plVar9);
          }
          else {
            iVar11 = iVar11 + 1;
          }
          iVar8 = *(int *)(param_1 + 0x60);
        } while (iVar11 < iVar8);
      }
      iVar11 = 2;
      if (2 < iVar8 * 2) {
        iVar11 = iVar8 * 2;
      }
      *(int *)(param_1 + 0x68) = iVar11;
      if ((iVar11 < iVar6) && (*(int *)(param_1 + 100) != iVar8)) {
        FUN_14045812c(plVar9);
      }
    }
  }
LAB_140640bd3:
  uVar2 = *(undefined4 *)(param_3 + 8);
  iVar6 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = iVar6 + 1;
  uVar7 = (ulonglong)*(int *)(param_1 + 0x48);
  if ((longlong)uVar7 < 1) {
    *(int *)(param_1 + 0x54) = iVar6;
  }
  else {
    plVar9 = (longlong *)(param_1 + 0x40);
    bVar10 = false;
    do {
      lVar12 = uVar7 * 0x10 + -8;
      uVar13 = uVar7;
      while (((*(int *)(*plVar9 + lVar12) != 0 &&
              (plVar3 = *(longlong **)(*plVar9 + -8 + lVar12), plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,uVar2), cVar5 != '\0'))) {
        lVar12 = lVar12 + -0x10;
        bVar4 = uVar13 < 2;
        uVar13 = uVar13 - 1;
        if (bVar4) {
          iVar6 = *(int *)(param_1 + 0x54) + -1;
          *(int *)(param_1 + 0x54) = iVar6;
          if (bVar10) goto LAB_140640daa;
          goto LAB_140640bef;
        }
      }
      uVar7 = uVar13 - 1;
      bVar10 = true;
    } while (1 < uVar13);
    iVar6 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar6;
LAB_140640daa:
    if (iVar6 < 1) {
      iVar6 = *(int *)(param_1 + 0x48);
      iVar8 = iVar6;
      if (0 < iVar6) {
        iVar11 = 0;
        do {
          if (((*(int *)(*plVar9 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar11 * 0x10), plVar3 == (longlong *)0x0
              )) || (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar9,iVar11);
            FUN_14005b248(plVar9);
          }
          else {
            iVar11 = iVar11 + 1;
          }
          iVar8 = *(int *)(param_1 + 0x48);
        } while (iVar11 < iVar8);
      }
      iVar11 = 2;
      if (2 < iVar8 * 2) {
        iVar11 = iVar8 * 2;
      }
      *(int *)(param_1 + 0x50) = iVar11;
      if ((iVar11 < iVar6) && (*(int *)(param_1 + 0x4c) != iVar8)) {
        FUN_14045812c(plVar9);
      }
    }
  }
LAB_140640bef:
  local_68 = *(undefined4 *)(param_2 + 0x80);
  local_70 = *(undefined8 *)(param_2 + 0x78);
  local_78 = *(undefined4 *)(param_2 + 0x70);
  local_80 = *(undefined8 *)(param_2 + 0x68);
  FUN_141739c56(param_1 + 0x30,&local_80,&local_70,param_3);
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140640e4a FUN_140640e4a body=264 status=ok
// SIG undefined FUN_140640e4a(void)

undefined4 FUN_140640e4a(longlong *param_1,uint param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    lVar4 = (ulonglong)param_2 * 0x88 + *param_1;
    cVar2 = FUN_1448ec59e(lVar4,param_3);
    if (cVar2 != '\0') {
      uVar6 = FUN_1406400be(param_1);
      fVar1 = *(float *)(lVar4 + 0x84);
      local_58 = *(undefined4 *)(lVar4 + 0x80);
      local_60 = *(undefined8 *)(lVar4 + 0x78);
      fVar7 = (float)uVar6;
      if (*(char *)(param_4 + 1) == '\x01') {
        fVar7 = *param_4;
      }
      uVar3 = FUN_14173e3a4(lVar4,param_3,fVar7);
      if ((char)uVar3 != '\0') {
        uVar5 = -(uint)(fVar1 < 0.0);
        FUN_140640a12(param_1,lVar4,&local_60,
                      (ulonglong)(uVar5 & 0x7f7fffff) |
                      CONCAT44((int)((ulonglong)uVar6 >> 0x20),~uVar5 & (uint)((float)uVar6 - fVar1)
                              ));
      }
      goto LAB_140640f1b;
    }
  }
  uVar3 = 0;
LAB_140640f1b:
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140640f54 FUN_140640f54 body=1146 status=ok
// SIG undefined FUN_140640f54(void)

void FUN_140640f54(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
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
            goto LAB_14064103f;
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
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
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
LAB_14064103f:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
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
            goto LAB_14064110c;
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
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
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
LAB_14064110c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406413d0(param_1,0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406413d0 FUN_1406413d0 body=74 status=ok
// SIG undefined FUN_1406413d0(void)

void FUN_1406413d0(longlong param_1,byte param_2)

{
  if (((*(char *)(param_1 + 0x178) == '\x03') && ((*(byte *)(param_1 + 99) & 8) != 0)) &&
     ((*(char *)(param_1 + 0x179) == '\x02') != (bool)param_2)) {
    FUN_14103d96c(param_1);
    FUN_14081ae08(param_1,param_2 + 1);
    return;
  }
  return;
}



// FUNCTION 14064141a FUN_14064141a body=553 status=ok
// SIG undefined FUN_14064141a(void)

void FUN_14064141a(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  short local_50;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14082167c();
  bVar1 = *(byte *)(param_1 + 8);
  FUN_140822484();
  local_58 = param_1 + 0x10;
  local_50 = (ushort)bVar1 * 2;
  FUN_1408236ae();
  FUN_140642270(param_1,param_2);
  if (*(int *)(param_1 + 0x8c) != 0) {
    lVar2 = FUN_1406b3bde(param_2 + 0x2c0);
    lVar2 = FUN_140641d66(lVar2 + 0x140);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x8c);
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_1 + 0x94);
  }
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(int *)(param_1 + 0x8c) != 0)) {
    lVar3 = FUN_140823a6a();
    lVar2 = *(longlong *)(lVar3 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar3);
      lVar2 = *(longlong *)(lVar3 + 0x110);
    }
    if ((longlong)*(int *)(lVar2 + 0x40) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x38);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar4) == *(longlong *)(param_1 + 0x78)) {
          if (lVar3 + lVar4 != 0) {
            lVar2 = FUN_1406b2efc(param_2 + 0x2c0);
            FUN_140641644(param_1,lVar3 + lVar4 + 0x10,lVar2 + 8,0);
            FUN_140641644(param_1,lVar3 + lVar4 + 0x20,lVar2 + 0x58,0);
            FUN_140641644(param_1,lVar3 + lVar4 + 0x30,lVar2 + 0xb0,0);
            FUN_140641644(param_1,lVar3 + lVar4 + 0x40,lVar2 + 0x110,0);
            FUN_140641644(param_1,lVar3 + lVar4 + 0x50,lVar2 + 0xe0,0);
            FUN_140641644(param_1,lVar3 + lVar4 + 0x60,lVar2 + 0x140,1);
            FUN_140641ec6(param_1,&local_48,1);
            FUN_140822770(param_2 + 0x2c0,&local_48,1);
            FUN_1447cd778(local_48,local_40);
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        lVar4 = lVar4 + 0x88;
      } while ((longlong)*(int *)(lVar2 + 0x40) * 0x88 != lVar4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140641644 FUN_140641644 body=213 status=ok
// SIG undefined FUN_140641644(void)

void FUN_140641644(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar2 = (int *)*param_2;
    lVar1 = (longlong)*(int *)(param_2 + 1) * 0x14;
    do {
      if (*piVar2 != 0) {
        local_58[0] = 0;
        local_54 = 0;
        local_4c = 0;
        FUN_144976b9c(local_58,*(undefined8 *)(piVar2 + 3));
        local_60 = *(undefined4 *)(param_1 + 0x94);
        local_68 = *(undefined8 *)(param_1 + 0x8c);
        local_70 = 0;
        local_78 = param_4;
        FUN_14064171a(param_3,&local_68,piVar2,local_58);
      }
      piVar2 = piVar2 + 5;
      lVar1 = lVar1 + -0x14;
    } while (lVar1 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064171a FUN_14064171a body=247 status=ok
// SIG undefined FUN_14064171a(void)

undefined8
FUN_14064171a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70 [2];
  undefined8 local_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70[0] = 0xb;
  local_6c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_80 = *param_2;
  local_78 = *(undefined4 *)(param_2 + 1);
  FUN_144928d62(&local_60,0);
  local_88 = *(undefined4 *)(param_3 + 1);
  local_90 = *param_3;
  FUN_144928d62(&local_60,1);
  local_98 = param_6;
  uVar1 = FUN_140641812(param_1,local_70,param_4,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140641812 FUN_140641812 body=162 status=ok
// SIG undefined FUN_140641812(void)

longlong FUN_140641812(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                      undefined1 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar3 = FUN_1406418b4();
  *(undefined8 *)(lVar3 + 0x20) = *param_2;
  *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 1);
  FUN_1447715ec(lVar3 + 0x30,param_2 + 2);
  FUN_140641b42(lVar3 + 0x60,param_3);
  *(undefined1 *)(lVar3 + 0x58) = param_5;
  *(undefined1 *)(lVar3 + 0x90) = param_4;
  return lVar3;
}



// FUNCTION 1406418b4 FUN_1406418b4 body=137 status=ok
// SIG undefined FUN_1406418b4(void)

undefined8 FUN_1406418b4(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_14064193e();
  FUN_140005f6c(param_1,uVar3,0,0);
  FUN_140641978(param_1,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064193e FUN_14064193e body=57 status=ok
// SIG undefined FUN_14064193e(void)

void FUN_14064193e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba98 = FUN_140002ddd(FUN_14652dc22,uVar1,L"MissionActionType_FactChange");
  }
  return;
}



// FUNCTION 140641978 FUN_140641978 body=83 status=ok
// SIG undefined FUN_140641978(void)

longlong * FUN_140641978(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14064193e();
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



// FUNCTION 1406419cc FUN_1406419cc body=373 status=ok
// SIG undefined FUN_1406419cc(void)

void FUN_1406419cc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140641a55;
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
LAB_140641a55:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140641b42 FUN_140641b42 body=449 status=ok
// SIG undefined FUN_140641b42(void)

void FUN_140641b42(undefined1 *param_1,char *param_2)

{
  char *_Str;
  char cVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_158 [32];
  char *local_138;
  int local_130;
  undefined1 local_12c;
  char acStack_12a [258];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0;
  cVar1 = *param_2;
  if (cVar1 == '\x03') {
    uVar9 = *(ulonglong *)(param_2 + 4);
  }
  else if (cVar1 == '\x02') {
    iVar3 = *(int *)(param_2 + 0xc);
    uVar9 = DAT_14cb7c570;
    if ((iVar3 != 1) && (uVar9 = DAT_14cb7c578, iVar3 != 0)) {
      _Str = acStack_12a + 2;
      memset(_Str,0,0x100);
      FUN_1407bf796(_Str,0x100,&DAT_149dfc0ac,iVar3);
      sVar4 = strlen(_Str);
      iVar3 = (int)sVar4;
      if (iVar3 == 0) {
LAB_140641d00:
        uVar12 = 0;
        uVar9 = 0;
      }
      else {
        lVar7 = (longlong)iVar3;
        if (_Str <= acStack_12a + lVar7 + 1) {
          lVar11 = 0;
          lVar8 = 0;
LAB_140641c4c:
          if ((byte)(acStack_12a[lVar8 + lVar7 + 1] - 0x30U) < 10) goto code_r0x000140641c5b;
          iVar5 = (int)lVar8;
          if (iVar5 == 0 || iVar3 <= -iVar5) goto LAB_140641c84;
          lVar11 = 0;
          if (((uint)-iVar5 < 0xb) && (acStack_12a[lVar8 + lVar7 + 1] == '_')) {
            if ((iVar5 != -1) && (acStack_12a[lVar8 + lVar7 + 2] == '0')) goto LAB_140641c84;
            lVar10 = 0;
            do {
              lVar11 = (longlong)acStack_12a[lVar8 + lVar7 + 2] + lVar10 * 10;
              lVar10 = lVar11 + -0x30;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0);
            if (lVar10 < 0x7fffffff) {
              iVar3 = iVar3 + iVar5 + -1;
              lVar11 = lVar11 + -0x2f;
            }
            else {
LAB_140641c84:
              lVar11 = 0;
            }
          }
          goto LAB_140641c86;
        }
        lVar11 = 0;
LAB_140641c8a:
        local_12c = 0;
        local_138 = _Str;
        local_130 = iVar3;
        uVar2 = FUN_14001a6c0(&local_138,1);
        uVar9 = lVar11 << 0x20;
        uVar12 = (ulonglong)uVar2;
      }
      uVar9 = uVar12 | uVar9;
    }
  }
  else if (cVar1 == '\x01') {
    puVar6 = &DAT_14cb7c580;
    if (*(int *)(param_2 + 0xc) != 0) {
      puVar6 = &DAT_14cb7c588;
    }
    uVar9 = *puVar6;
  }
  else {
    uVar9 = 0;
  }
  *(ulonglong *)(param_1 + 4) = uVar9;
  FUN_140641d04(param_1);
  if ((local_28 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140641c5b:
  lVar10 = lVar8 + -1;
  lVar8 = lVar8 + -1;
  if (acStack_12a + lVar7 + 1 + lVar10 < _Str) {
LAB_140641c86:
    if (iVar3 == 0) goto LAB_140641d00;
    goto LAB_140641c8a;
  }
  goto LAB_140641c4c;
}



// FUNCTION 140641d04 FUN_140641d04 body=97 status=ok
// SIG undefined FUN_140641d04(void)

void FUN_140641d04(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *param_1;
  if (((bVar1 < 2) || (bVar1 == 4)) ||
     (param_1[4] = 0, param_1[5] = 0, param_1[6] = 0, param_1[7] = 0, param_1[8] = 0, param_1[9] = 0
     , param_1[10] = 0, param_1[0xb] = 0, bVar1 != 2)) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    if (bVar1 == 3) {
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_144a2da94(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 140641d66 FUN_140641d66 body=71 status=ok
// SIG undefined FUN_140641d66(void)

void FUN_140641d66(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1406419cc((longlong *)(param_1 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_140641dae();
  return;
}



// FUNCTION 140641dae FUN_140641dae body=137 status=ok
// SIG undefined FUN_140641dae(void)

undefined8 FUN_140641dae(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140641e38();
  FUN_140005f6c(param_1,uVar3,0,0);
  FUN_140641e72(param_1,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140641e38 FUN_140641e38 body=57 status=ok
// SIG undefined FUN_140641e38(void)

void FUN_140641e38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba68 = FUN_140002ddd(FUN_14652db2c,uVar1,L"MissionActionType_DialogHint");
  }
  return;
}



// FUNCTION 140641e72 FUN_140641e72 body=83 status=ok
// SIG undefined FUN_140641e72(void)

longlong * FUN_140641e72(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140641e38();
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



// FUNCTION 140641ec6 FUN_140641ec6 body=739 status=ok
// SIG undefined FUN_140641ec6(void)

undefined8 * FUN_140641ec6(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  wchar_t wVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *_Str;
  int iVar9;
  undefined1 auStack_298 [40];
  wchar_t *local_270;
  int local_268;
  undefined1 *local_260;
  undefined4 *local_258;
  ulonglong *local_250;
  char local_248;
  undefined1 local_240 [512];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_260 = local_240;
  local_248 = '\0';
  local_250 = &local_40;
  local_258 = (undefined4 *)local_260;
  if (*(int *)(param_1 + 0x8c) != 0) {
    local_258 = (undefined4 *)local_260;
    lVar5 = FUN_140823a6a();
    lVar7 = *(longlong *)(lVar5 + 0x110);
    if (lVar7 == 0) {
      FUN_140aa6c08(lVar5);
      lVar7 = *(longlong *)(lVar5 + 0x110);
    }
    if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
      lVar5 = 0;
      lVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar5) == *(longlong *)(param_1 + 0x78)) {
          lVar7 = *(longlong *)(lVar7 + 0x38) - lVar8;
          if (lVar7 != 0) {
            FUN_1408226d0(param_1 + 0x8c,&local_270,CONCAT71((int7)((ulonglong)lVar8 >> 8),1));
            _Str = local_270;
            if (local_268 == 0) {
              _Str = L"";
            }
            if (_Str == (wchar_t *)0x0) {
              iVar9 = 0;
            }
            else {
              sVar6 = wcslen(_Str);
              iVar9 = (int)sVar6;
            }
            lVar5 = (longlong)iVar9;
            if (local_250 <= (ulonglong *)((longlong)local_258 + lVar5)) {
              FUN_145753a78(&local_260,lVar5);
            }
            puVar3 = local_258;
            if (iVar9 != 0) {
              if (0 < iVar9) {
                lVar8 = 0;
                bVar4 = 0;
                do {
                  bVar2 = bVar4;
                  wVar1 = _Str[lVar8];
                  *(char *)((longlong)local_258 + lVar8) = (char)wVar1;
                  lVar8 = lVar8 + 1;
                  bVar4 = bVar2 | 0x7f < (ushort)wVar1;
                } while (lVar5 != lVar8);
                if ((bool)(bVar2 | 0x7f < (ushort)wVar1)) {
                  lVar8 = 0;
                  do {
                    if (0x7f < (ushort)_Str[lVar8]) {
                      *(undefined1 *)((longlong)local_258 + lVar8) = 0x3f;
                    }
                    lVar8 = lVar8 + 1;
                  } while (lVar5 != lVar8);
                  thunk_FUN_140e0237d(_Str,iVar9);
                }
              }
              local_258 = (undefined4 *)((longlong)puVar3 + lVar5);
            }
            if (local_270 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_250 <= (ulonglong *)((longlong)local_258 + 1)) {
              FUN_145753a78(&local_260,1);
            }
            *(undefined1 *)local_258 = 0x2e;
            local_258 = (undefined4 *)((longlong)local_258 + 1);
            FUN_1406421aa(lVar7 + 0x70,&local_260,1);
            if (local_250 <= local_258 + 1) {
              FUN_145753a78(&local_260,4);
            }
            *local_258 = 0x203d3d20;
            local_258 = local_258 + 1;
            FUN_14014edce(lVar7 + 0x7c,&local_260);
            if (local_250 <= (ulonglong *)((longlong)local_258 + 1)) {
              FUN_145753a78(&local_260,1);
            }
            *(undefined1 *)local_258 = 0;
            local_258 = (undefined4 *)((longlong)local_258 + 1);
          }
          break;
        }
        lVar8 = lVar8 + -0x88;
        lVar5 = lVar5 + 0x88;
      } while ((longlong)*(int *)(lVar7 + 0x40) * -0x88 - lVar8 != 0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140822ef4(param_2,local_260,param_3);
  if (local_248 == '\x01') {
    FUN_1400020a8(local_260);
  }
  if ((local_40 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1406421aa FUN_1406421aa body=197 status=ok
// SIG undefined FUN_1406421aa(void)

void FUN_1406421aa(int *param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  size_t sVar3;
  undefined1 auStack_458 [40];
  ulonglong local_430;
  ulonglong local_428 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_458;
  uVar1 = *(ulonglong *)(param_1 + 1);
  uVar2 = uVar1;
  if ((uVar1 == DAT_14c948034) && (uVar2 = DAT_14c948034, *param_1 != DAT_14c948030)) {
    FUN_14011791e(local_428,*param_1,uVar1 >> 0x20);
    *(ulonglong *)(param_1 + 1) = local_428[0];
    uVar2 = local_428[0];
  }
  local_430 = uVar2 & 0xffffffff;
  if (param_3 == '\0') {
    FUN_140024b62(&local_430,local_428);
    sVar3 = strlen((char *)local_428);
    FUN_1414db1c4(param_2,local_428,sVar3 & 0xffffffff);
  }
  else {
    local_430 = uVar2;
    FUN_14014edce(&local_430,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140642270 FUN_140642270 body=868 status=ok
// SIG undefined FUN_140642270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140642270(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 uStack_cf;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98 [2];
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = *(undefined4 *)(param_1 + 0x88);
  local_100 = *(undefined8 *)(param_1 + 0x80);
  if ((int)local_100 != 0) {
    lVar4 = FUN_140823ef2(param_1,param_2,&local_100);
    plVar5 = (longlong *)FUN_14001cc68(0x458);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b41dc70;
    memset(plVar5 + 3,0,0x420);
    plVar5[2] = (longlong)&PTR_FUN_14b1787d0;
    plVar5[6] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    *(undefined4 *)(plVar5 + 10) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x5a) = 0;
    *(undefined1 *)(plVar5 + 0x86) = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0x87] = 0;
    plVar5[0x88] = 0;
    plVar5[0x89] = 0;
    plVar5[0x8a] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x61) = 0;
    *(undefined2 *)(plVar5 + 0xb) = 0x101;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(lVar4 + 0x50);
    *(uint *)(lVar4 + 0x50) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x54) < iVar3 + 1U) {
      FUN_140822376((longlong *)(lVar4 + 0x48),iVar3);
    }
    lVar4 = *(longlong *)(lVar4 + 0x48);
    *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    local_98[0] = 0xb;
    local_94 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_d0 = (undefined1)local_100;
    uStack_cf = (undefined1)((ulonglong)local_100 >> 8);
    uStack_ce = (undefined2)((ulonglong)local_100 >> 0x10);
    uStack_cc = (undefined4)((ulonglong)local_100 >> 0x20);
    local_c8 = local_f8;
    FUN_144928d62(&local_88,0,&local_d0);
    local_108 = DAT_14cb7bde8;
    local_110 = (undefined4)DAT_14cb7bde0;
    uStack_10c = (undefined4)((ulonglong)DAT_14cb7bde0 >> 0x20);
    FUN_144928d62(&local_88,1,&local_110);
    lVar4 = FUN_1406b2efc(param_2 + 0x2c0);
    local_d0 = 1;
    local_c4 = 1;
    uStack_cc = (undefined4)DAT_14cb7c588;
    local_c8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_118 = 0;
    FUN_140641812(lVar4 + 0x140,local_98,&local_d0,1);
    local_d0 = 1;
    local_c4 = 0;
    uStack_cc = (undefined4)DAT_14cb7c580;
    local_c8 = (undefined4)((ulonglong)DAT_14cb7c580 >> 0x20);
    local_118 = 0;
    FUN_140641812(lVar4 + 0x58,local_98,&local_d0,0);
    local_110 = CONCAT31(local_110._1_3_,1);
    local_104 = 1;
    uStack_10c = (undefined4)DAT_14cb7c588;
    local_108 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_d0 = 0xb;
    uStack_cf = 0;
    uStack_cc = 0;
    local_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_e0 = local_100;
    local_d8 = local_f8;
    FUN_144928d62(&local_c0,0);
    local_e8 = DAT_14cb7bdd0;
    local_f0 = _DAT_14cb7bdc8;
    FUN_144928d62(&local_c0,1);
    local_118 = 0;
    FUN_140641812(lVar4 + 0x58,&local_d0,&local_110,0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406425d6 FUN_1406425d6 body=9 status=ok
// SIG undefined FUN_1406425d6(void)

void FUN_1406425d6(longlong param_1)

{
  FUN_1406425e0(param_1 + 0x10);
  return;
}



// FUNCTION 1406425e0 FUN_1406425e0 body=715 status=ok
// SIG undefined FUN_1406425e0(void)

void FUN_1406425e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14ae24478;
  FUN_140389866();
  if (param_1[0x114] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x110] != 0) {
    FUN_1400020a8();
  }
  lVar5 = param_1[0x10f];
  if (lVar5 != 0) {
    FUN_141839f38(lVar5);
    FUN_1400020a8(lVar5);
  }
  puVar3 = (undefined8 *)param_1[0xf5];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[0xf4];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(undefined4 *)(param_1 + 0xf1) = 0;
  if (param_1[0xf0] != 0) {
    FUN_1400020a8();
  }
  FUN_14038a932(param_1 + 0xe8);
  if (param_1[0xec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c2ae(param_1 + 0x3d);
  lVar5 = 0;
  do {
    FUN_14183a82e(*(undefined8 *)((longlong)param_1 + lVar5 + 0x1d8),
                  *(undefined4 *)((longlong)param_1 + lVar5 + 0x1e0));
    if (*(longlong *)((longlong)param_1 + lVar5 + 0x1d8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  plVar4 = param_1 + 0x25;
  if (*(int *)(param_1 + 0x26) == 0) {
LAB_1406427c7:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x26) = 0;
      goto LAB_1406427c7;
    }
  }
  plVar4 = param_1 + 0x23;
  if (*(int *)(param_1 + 0x24) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14064281b;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_14064281b:
  FUN_14038994e(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  plVar4 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x000140642877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406428ac FUN_1406428ac body=34 status=ok
// SIG undefined FUN_1406428ac(void)

void FUN_1406428ac(undefined8 param_1)

{
  FUN_140642c08();
  FUN_1406429e2(param_1);
  FUN_1406428ce(param_1);
  return;
}



// FUNCTION 1406428ce FUN_1406428ce body=275 status=ok
// SIG undefined FUN_1406428ce(void)

void FUN_1406428ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    lVar4 = *(longlong *)(local_40 + 0x480);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0xc0));
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
    if (*(int *)(param_1 + 700) != *(int *)(lVar4 + 0xb8)) {
      *(int *)(param_1 + 700) = *(int *)(lVar4 + 0xb8);
      if (*(int *)(lVar3 + 0x1b4) != *(int *)(lVar4 + 0xc)) {
        *(undefined1 *)(lVar3 + 0x1b0) = *(undefined1 *)(lVar4 + 8);
        *(undefined4 *)(lVar3 + 0x1b4) = *(undefined4 *)(lVar4 + 0xc);
        *(undefined1 *)(param_1 + 0x2c0) = 1;
      }
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0xc0));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406429e2 FUN_1406429e2 body=549 status=ok
// SIG undefined FUN_1406429e2(void)

void FUN_1406429e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x3e0);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0xc0));
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
  if (*(int *)(param_1 + 0x2b8) != *(int *)(lVar3 + 0xb8)) {
    *(int *)(param_1 + 0x2b8) = *(int *)(lVar3 + 0xb8);
    lVar4 = *(longlong *)(param_1 + 0x288);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x1e0) != *(int *)(lVar3 + 0x80)) {
        *(undefined8 *)(lVar4 + 0x1d8) = *(undefined8 *)(lVar3 + 0x78);
        *(undefined4 *)(lVar4 + 0x1e0) = *(undefined4 *)(lVar3 + 0x80);
      }
      if (*(int *)(lVar4 + 0x1ec) != *(int *)(lVar3 + 0xa8)) {
        *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar3 + 0xa0);
        *(undefined4 *)(lVar4 + 0x1ec) = *(undefined4 *)(lVar3 + 0xa8);
      }
      if (*(int *)(lVar4 + 0x1f8) != *(int *)(lVar3 + 0xb4)) {
        *(undefined8 *)(lVar4 + 0x1f0) = *(undefined8 *)(lVar3 + 0xac);
        *(undefined4 *)(lVar4 + 0x1f8) = *(undefined4 *)(lVar3 + 0xb4);
      }
      if (*(int *)(lVar4 + 0x1cc) != *(int *)(lVar3 + 0xc)) {
        *(undefined4 *)(lVar4 + 0x1c8) = *(undefined4 *)(lVar3 + 8);
        *(undefined4 *)(lVar4 + 0x1cc) = *(undefined4 *)(lVar3 + 0xc);
      }
      if (*(int *)(lVar4 + 0x1d4) != *(int *)(lVar3 + 0x14)) {
        *(undefined4 *)(lVar4 + 0x1d0) = *(undefined4 *)(lVar3 + 0x10);
        *(undefined4 *)(lVar4 + 0x1d4) = *(undefined4 *)(lVar3 + 0x14);
      }
      if (*(int *)(lVar4 + 0x1c4) != *(int *)(lVar3 + 0x34)) {
        *(undefined1 *)(lVar4 + 0x1c0) = *(undefined1 *)(lVar3 + 0x30);
        *(undefined4 *)(lVar4 + 0x1c4) = *(undefined4 *)(lVar3 + 0x34);
      }
      if (*(int *)(lVar4 + 0x204) != *(int *)(lVar3 + 0x58)) {
        *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar3 + 0x50);
        *(undefined4 *)(lVar4 + 0x204) = *(undefined4 *)(lVar3 + 0x58);
      }
      FUN_14064312e(param_1);
      puVar5 = *(ushort **)(lVar4 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0xc0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140642c08 FUN_140642c08 body=1316 status=ok
// SIG undefined FUN_140642c08(void)

void FUN_140642c08(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ushort *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bVar17;
  int iVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_88 [47];
  char local_59;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1448d5e3c(&local_58,param_1 + 0x41);
  puVar11 = *(undefined1 **)(local_58 + 0x380);
  AcquireSRWLockShared((PSRWLOCK)(puVar11 + 0x6e0));
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((int)param_1[0x56] == *(int *)(puVar11 + 0x6d8)) goto LAB_140642c7a;
  *(int *)(param_1 + 0x56) = *(int *)(puVar11 + 0x6d8);
  lVar12 = param_1[0x51];
  if (lVar12 == 0) goto LAB_140642c7a;
  bVar20 = *(int *)(lVar12 + 0x14c) != *(int *)(puVar11 + 4);
  if (bVar20) {
    *(undefined1 *)(lVar12 + 0x148) = *puVar11;
    *(undefined4 *)(lVar12 + 0x14c) = *(undefined4 *)(puVar11 + 4);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(int *)(lVar12 + 0x164) != *(int *)(puVar11 + 0x1c)) {
    *(undefined1 *)(lVar12 + 0x160) = puVar11[0x18];
    *(undefined4 *)(lVar12 + 0x164) = *(undefined4 *)(puVar11 + 0x1c);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  bVar21 = *(int *)(lVar12 + 0x154) != *(int *)(puVar11 + 0xc);
  if (bVar21) {
    *(undefined1 *)(lVar12 + 0x150) = puVar11[8];
    *(undefined4 *)(lVar12 + 0x154) = *(undefined4 *)(puVar11 + 0xc);
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  }
  cVar19 = bVar21 || bVar20;
  if (*(int *)(lVar12 + 0x16c) != *(int *)(puVar11 + 0x24)) {
    *(undefined1 *)(lVar12 + 0x168) = puVar11[0x20];
    *(undefined4 *)(lVar12 + 0x16c) = *(undefined4 *)(puVar11 + 0x24);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(int *)(lVar12 + 0x174) != *(int *)(puVar11 + 0x2c)) {
    *(undefined1 *)(lVar12 + 0x170) = puVar11[0x28];
    *(undefined4 *)(lVar12 + 0x174) = *(undefined4 *)(puVar11 + 0x2c);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(int *)(lVar12 + 0x17c) != *(int *)(puVar11 + 0x34)) {
    *(undefined1 *)(lVar12 + 0x178) = puVar11[0x30];
    *(undefined4 *)(lVar12 + 0x17c) = *(undefined4 *)(puVar11 + 0x34);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(int *)(lVar12 + 0x184) != *(int *)(puVar11 + 0x3c)) {
    *(undefined1 *)(lVar12 + 0x180) = puVar11[0x38];
    *(undefined4 *)(lVar12 + 0x184) = *(undefined4 *)(puVar11 + 0x3c);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (*(int *)((longlong)param_1 + 0x2d4) != *(int *)(puVar11 + 0xf8)) {
    uVar14 = *(undefined4 *)(puVar11 + 0xec);
    uVar15 = *(undefined4 *)(puVar11 + 0xf0);
    uVar16 = *(undefined4 *)(puVar11 + 0xf4);
    *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)(puVar11 + 0xe8);
    *(undefined4 *)(param_1 + 0x59) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar15;
    *(undefined4 *)(param_1 + 0x5a) = uVar16;
    *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)(puVar11 + 0xf8);
    *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  }
  if ((int)param_1[0x5d] != *(int *)(puVar11 + 0x408)) {
    uVar14 = *(undefined4 *)(puVar11 + 0x3fc);
    uVar15 = *(undefined4 *)(puVar11 + 0x400);
    uVar16 = *(undefined4 *)(puVar11 + 0x404);
    *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(puVar11 + 0x3f8);
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar14;
    *(undefined4 *)(param_1 + 0x5c) = uVar15;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar16;
    *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(puVar11 + 0x408);
    *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  }
  if (*(int *)(lVar12 + 0x194) != *(int *)(puVar11 + 0x4c)) {
    *(undefined1 *)(lVar12 + 400) = puVar11[0x48];
    *(undefined4 *)(lVar12 + 0x194) = *(undefined4 *)(puVar11 + 0x4c);
  }
  if (*(int *)(lVar12 + 0x18c) != *(int *)(puVar11 + 0x54)) {
    *(undefined1 *)(lVar12 + 0x188) = puVar11[0x50];
    *(undefined4 *)(lVar12 + 0x18c) = *(undefined4 *)(puVar11 + 0x54);
  }
  if (*(int *)(lVar12 + 0x19c) != *(int *)(puVar11 + 0x6c)) {
    *(undefined1 *)(lVar12 + 0x198) = puVar11[0x68];
    *(undefined4 *)(lVar12 + 0x19c) = *(undefined4 *)(puVar11 + 0x6c);
  }
  if (*(int *)(lVar12 + 0x1bc) != *(int *)(puVar11 + 0x7c)) {
    *(undefined1 *)(lVar12 + 0x1b8) = puVar11[0x78];
    *(undefined4 *)(lVar12 + 0x1bc) = *(undefined4 *)(puVar11 + 0x7c);
  }
  iVar3 = *(int *)(lVar12 + 0x1ac);
  iVar4 = *(int *)(puVar11 + 0x74);
  if (iVar3 != iVar4) {
    *(undefined1 *)(lVar12 + 0x1a8) = puVar11[0x70];
    *(undefined4 *)(lVar12 + 0x1ac) = *(undefined4 *)(puVar11 + 0x74);
  }
  iVar5 = *(int *)(lVar12 + 600);
  iVar6 = *(int *)(puVar11 + 0x90);
  if (iVar5 != iVar6) {
    local_59 = cVar19;
    FUN_144a787a6(lVar12 + 0x248,puVar11 + 0x80);
    *(undefined4 *)(lVar12 + 600) = *(undefined4 *)(puVar11 + 0x90);
    cVar19 = local_59;
  }
  iVar7 = *(int *)(lVar12 + 0x264);
  iVar8 = *(int *)(puVar11 + 0x9c);
  if (iVar7 != iVar8) {
    *(undefined4 *)(lVar12 + 0x260) = *(undefined4 *)(puVar11 + 0x98);
    *(undefined4 *)(lVar12 + 0x264) = *(undefined4 *)(puVar11 + 0x9c);
  }
  iVar9 = *(int *)(lVar12 + 0x278);
  iVar10 = *(int *)(puVar11 + 0xb0);
  if (iVar9 != iVar10) {
    local_59 = cVar19;
    FUN_144a787a6(lVar12 + 0x268,puVar11 + 0xa0);
    *(undefined4 *)(lVar12 + 0x278) = *(undefined4 *)(puVar11 + 0xb0);
    cVar19 = local_59;
  }
  if (*(int *)(lVar12 + 0x1a4) != *(int *)(puVar11 + 100)) {
    *(undefined1 *)(lVar12 + 0x1a0) = puVar11[0x60];
    *(undefined4 *)(lVar12 + 0x1a4) = *(undefined4 *)(puVar11 + 100);
    cVar19 = '\x01';
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  }
  bVar17 = 1;
  if (*(char *)(lVar12 + 0x150) == '\0') {
    bVar17 = *(byte *)(lVar12 + 0x1a0) ^ 1;
  }
  if (bVar17 == *(byte *)(lVar12 + 0x158)) {
    if (*(int *)(lVar12 + 0x15c) == 0) {
      iVar18 = 1;
      goto LAB_14064309c;
    }
  }
  else {
    iVar18 = *(int *)(lVar12 + 0x15c) + 1;
LAB_14064309c:
    *(byte *)(lVar12 + 0x158) = bVar17;
    *(int *)(lVar12 + 0x15c) = iVar18;
  }
  if (cVar19 != '\0') {
    FUN_14064312e(param_1);
  }
  if (((iVar3 != iVar4 || iVar5 != iVar6) || iVar7 != iVar8) || iVar9 != iVar10) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  puVar13 = *(ushort **)(lVar12 + 0x80);
  if (puVar13 != (ushort *)0x0) {
    *puVar13 = *puVar13 | (ushort)(1L << (*(byte *)(lVar12 + 0x78) & 0x3f));
  }
LAB_140642c7a:
  ReleaseSRWLockShared((PSRWLOCK)(puVar11 + 0x6e0));
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064312e FUN_14064312e body=1130 status=ok
// SIG undefined FUN_14064312e(void)

void FUN_14064312e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  PSRWLOCK SRWLock;
  undefined1 auStack_98 [32];
  longlong local_78;
  PSRWLOCK local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  lVar8 = *(longlong *)(local_58 + 0x3e0);
  SRWLock = (PSRWLOCK)(lVar8 + 0xc0);
  AcquireSRWLockShared(SRWLock);
  plVar7 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    plVar7 = (longlong *)(lVar3 + 0x1f0);
    if (*(byte *)(lVar3 + 0x158) != 0) {
      plVar7 = (longlong *)(lVar3 + 0x1e4);
    }
    local_68 = *plVar7;
    *(bool *)(lVar3 + 0x208) =
         *(int *)(lVar3 + 0x1c8 + (ulonglong)(*(byte *)(lVar3 + 0x158) ^ 1) * 8) != 0;
    local_78 = lVar3 + 0x228;
    iVar2 = *(int *)(lVar3 + 0x234);
    local_70 = SRWLock;
    FUN_1406435d7(*(undefined8 *)(lVar3 + 0x228),*(undefined4 *)(lVar3 + 0x230));
    *(undefined4 *)(lVar3 + 0x230) = 0;
    if ((iVar2 < 0) && (*(int *)(lVar3 + 0x234) != 0)) {
      FUN_148eda3fa(local_78);
    }
    if (*(char *)(lVar3 + 0x208) == '\0') {
      plVar6 = (longlong *)FUN_14064359a(local_78);
      plVar7 = (longlong *)(lVar8 + 0x78);
      FUN_1400021e4(plVar7,&local_58);
      if (plVar6 == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar6 != 0) {
          FUN_1400020a8();
        }
        *plVar6 = local_58;
        local_58 = 0;
        *(undefined4 *)(plVar6 + 1) = local_50;
        *(undefined4 *)((longlong)plVar6 + 0xc) = uStack_4c;
      }
      iVar2 = *(int *)(lVar8 + 0x68);
      if ((longlong)iVar2 != 0) {
        lVar9 = *(longlong *)(lVar8 + 0x60);
        lVar12 = 0;
        local_60 = lVar8;
        do {
          if (*plVar7 == *(longlong *)(lVar9 + lVar12)) {
            plVar5 = *(longlong **)(lVar9 + 0x40 + lVar12);
            plVar4 = (longlong *)plVar6[2];
            if (plVar4 != plVar5) {
              plVar6[2] = (longlong)plVar5;
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 8))();
              }
              if (plVar4 != (longlong *)0x0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
            *(undefined4 *)(plVar6 + 3) = *(undefined4 *)(lVar9 + 0x48 + lVar12);
            lVar8 = local_60;
          }
          lVar12 = lVar12 + 0x90;
        } while ((longlong)iVar2 * 0x90 != lVar12);
      }
    }
    if (*(char *)(lVar3 + 0x208) == '\x01') {
      lVar9 = FUN_14064359a(local_78);
      FUN_14020fad6(lVar9,&DAT_14b9cf398);
      iVar2 = *(int *)(lVar8 + 0x90);
      if ((longlong)iVar2 != 0) {
        lVar12 = *(longlong *)(lVar8 + 0x88);
        lVar13 = 0;
        do {
          if (local_68 == *(longlong *)(lVar12 + lVar13)) {
            plVar7 = *(longlong **)(lVar12 + 0x40 + lVar13);
            plVar6 = *(longlong **)(lVar9 + 0x10);
            if (plVar6 != plVar7) {
              *(longlong **)(lVar9 + 0x10) = plVar7;
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 8))();
              }
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar12 + 0x48 + lVar13);
          }
          lVar13 = lVar13 + 0x90;
        } while ((longlong)iVar2 * 0x90 != lVar13);
      }
    }
    if (*(char *)(lVar3 + 0x1c0) == '\x01') {
      lVar9 = FUN_14064359a(local_78);
      FUN_14020fad6(lVar9,L"truemode");
      FUN_140ac6c96(&DAT_14cbe25c0,lVar9 + 0x10);
    }
    plVar7 = (longlong *)FUN_14064359a(local_78);
    FUN_1400021e4((longlong *)(lVar8 + 0x50),&local_58);
    if (plVar7 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar7 != 0) {
        FUN_1400020a8();
      }
      *plVar7 = local_58;
      local_58 = 0;
      *(undefined4 *)(plVar7 + 1) = local_50;
      *(undefined4 *)((longlong)plVar7 + 0xc) = uStack_4c;
    }
    iVar2 = *(int *)(lVar8 + 0x40);
    if ((longlong)iVar2 != 0) {
      lVar9 = *(longlong *)(lVar8 + 0x38);
      lVar12 = 0;
      do {
        if (*(longlong *)(lVar8 + 0x50) == *(longlong *)(lVar9 + lVar12)) {
          plVar6 = *(longlong **)(lVar9 + 0x10 + lVar12);
          plVar5 = (longlong *)plVar7[2];
          if (plVar5 != plVar6) {
            plVar7[2] = (longlong)plVar6;
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 8))();
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          *(undefined4 *)(plVar7 + 3) = *(undefined4 *)(lVar9 + 0x18 + lVar12);
        }
        lVar12 = lVar12 + 0x40;
      } while ((longlong)iVar2 * 0x40 != lVar12);
    }
    if (*(char *)(lVar8 + 0x18) == '\0') {
      *(undefined1 *)(lVar3 + 0x209) = 0;
      SRWLock = local_70;
    }
    else {
      *(undefined1 *)(lVar3 + 0x209) = *(undefined1 *)(lVar8 + 0x20);
      lVar8 = FUN_14064359a(local_78);
      puVar11 = &DAT_14cbe2588;
      if (*(char *)(lVar3 + 0x209) != '\0') {
        puVar11 = &DAT_14cbe2578;
      }
      FUN_144a787a6(lVar8,puVar11);
      puVar10 = &DAT_14cbe2550;
      if (*(char *)(lVar3 + 0x209) != '\0') {
        puVar10 = &DAT_14cbe2528;
      }
      FUN_140ac6c96(puVar10,lVar8 + 0x10);
      SRWLock = local_70;
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14064359a FUN_14064359a body=61 status=ok
// SIG undefined FUN_14064359a(void)

longlong FUN_14064359a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145730b8c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_140643615(lVar2);
  return lVar2;
}



// FUNCTION 1406435d7 FUN_1406435d7 body=62 status=ok
// SIG undefined FUN_1406435d7(void)

void FUN_1406435d7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140643615 FUN_140643615 body=216 status=ok
// SIG undefined FUN_140643615(void)

void FUN_140643615(longlong param_1)

{
  longlong *plVar1;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x10) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x18) = DAT_14c844848;
  return;
}



// FUNCTION 1406436ee FUN_1406436ee body=964 status=ok
// SIG undefined FUN_1406436ee(void)

void FUN_1406436ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  char cVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined1 auStack_198 [32];
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *plStack_140;
  longlong *local_138 [2];
  longlong *local_128 [2];
  longlong *local_118 [2];
  longlong local_108;
  ulonglong uStack_100;
  undefined4 local_f8;
  undefined2 local_f0 [2];
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 auStack_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) goto LAB_14064371f;
  local_f0[0] = 0;
  local_ec = 0x100000000;
  uStack_e4 = 0x144;
  local_dc = 3;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  puVar7 = &DAT_14cbe0178;
  if (*(char *)(lVar4 + 0x1a8) != '\0') {
    puVar7 = &DAT_14cbe01a0;
  }
  FUN_1410d1eba(&local_a8,puVar7);
  FUN_14615b4b0(&local_108,&local_a8);
  if ((longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8) + 0x10))();
  }
  if (DAT_14c872bf2 == '\x01') {
    FUN_140056680(&local_a8,L" DEMO");
    FUN_145aa9142(&local_108,&local_a8);
    if (CONCAT44(local_a8._4_4_,(undefined4)local_a8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140009b9a(local_128,lVar4 + 0x268);
  local_148 = 0;
  plStack_140 = (longlong *)0x0;
  FUN_145c561ae(local_138,*(undefined4 *)(lVar4 + 0x260),local_f0);
  FUN_140009b9a(local_158,lVar4 + 0x248);
  FUN_14598dd3c(&local_108,local_178);
  FUN_14023409e(&local_168,local_178,1);
  local_a8._0_4_ = 4;
  FUN_14023423e(local_98,local_158);
  local_88 = 4;
  FUN_14023423e(local_78,local_138);
  local_68 = 4;
  FUN_14023423e(local_58,local_128);
  local_c0 = &local_48;
  local_c8 = &local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_168;
  local_d0 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_160 + 1) = (int)local_160[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_118,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar8 = 0x50;
  do {
    if (*(longlong **)((longlong)&local_a8 + lVar8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_a8 + lVar8) + 0x10))();
      *(undefined8 *)((longlong)&local_a8 + lVar8) = 0;
      *(undefined4 *)((longlong)auStack_a0 + lVar8) = 0;
    }
    lVar8 = lVar8 + -0x20;
  } while (lVar8 != -0x10);
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_160 + 0x10))(local_160);
      }
    }
  }
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (*(int *)(lVar4 + 0x220) == 0) {
LAB_140643a97:
    FUN_140008f88(lVar4 + 0x210,local_118);
    *(int *)(lVar4 + 0x220) = *(int *)(lVar4 + 0x220) + 1;
  }
  else {
    cVar6 = FUN_144722c14(lVar4 + 0x210,local_118,0);
    if (cVar6 == '\0') goto LAB_140643a97;
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_178[0] != (longlong *)0x0) {
    (**(code **)(*local_178[0] + 0x10))();
  }
  plVar1 = plStack_140;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_140 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  puVar5 = *(ushort **)(lVar4 + 0x80);
  if (puVar5 != (ushort *)0x0) {
    *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
  FUN_1401b9920(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
LAB_14064371f:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140643abc FUN_140643abc body=942 status=ok
// SIG undefined FUN_140643abc(void)

undefined8 FUN_140643abc(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *_Str;
  undefined8 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_54;
  char *local_50;
  int local_48;
  undefined1 local_44;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_140643e6c();
  FUN_1402057ac(param_2,param_1,uVar2,0);
  local_68 = DAT_14cb79388;
  local_70 = DAT_14cb79380;
  FUN_1448075d0(&local_50);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar7 = &DAT_14c9a1288;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar10 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar7[9];
      }
      iVar6 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_50) * 4);
      if (iVar6 != -1) {
        do {
          lVar8 = *plVar7 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar6 * 0x40) == (uint)local_50) {
            if ((((lVar8 != 0) &&
                 (puVar9 = (undefined8 *)(lVar8 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
            goto LAB_140643b86;
            break;
          }
          iVar6 = *(int *)(lVar8 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar9 = &DAT_14c9a1308;
LAB_140643b86:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  pbVar1 = (byte *)*puVar9;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 1)) &&
     (_Str = *(char **)(pbVar1 + 8), _Str != (char *)0x0)) {
    sVar4 = strlen(_Str);
    iVar6 = (int)sVar4;
    if (iVar6 != 0) {
      lVar8 = (longlong)iVar6;
      pcVar11 = _Str + lVar8 + -1;
      uVar5 = 0;
      if (pcVar11 < _Str) {
        lVar15 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar11 - 0x30U)) break;
          uVar5 = uVar5 + 1;
          pcVar11 = pcVar11 + -1;
        } while (_Str <= pcVar11);
        lVar15 = 0;
        if (((uVar5 != 0) && ((int)uVar5 < iVar6)) &&
           ((lVar15 = 0, uVar5 < 0xb &&
            (lVar12 = -(ulonglong)uVar5, _Str[lVar12 + lVar8 + -1] == '_')))) {
          if ((uVar5 == 1) || (_Str[lVar12 + lVar8] != '0')) {
            lVar14 = 0;
            do {
              lVar15 = (longlong)_Str[lVar12 + lVar8] + lVar14 * 10;
              lVar14 = lVar15 + -0x30;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0);
            if (lVar14 < 0x7fffffff) {
              iVar6 = ~uVar5 + iVar6;
              lVar15 = lVar15 + -0x2f;
              goto LAB_140643d3c;
            }
          }
          lVar15 = 0;
        }
LAB_140643d3c:
        if (iVar6 == 0) goto LAB_140643ba0;
      }
      local_44 = 0;
      local_50 = _Str;
      local_48 = iVar6;
      uVar5 = FUN_14001a6c0(&local_50,1);
      uVar13 = lVar15 << 0x20;
      uVar3 = (ulonglong)uVar5;
      goto LAB_140643ba5;
    }
  }
LAB_140643ba0:
  uVar3 = 0;
  uVar13 = 0;
LAB_140643ba5:
  if ((uVar3 | uVar13) == 0) {
    local_68 = DAT_14cb793a0;
    local_70 = DAT_14cb79398;
    FUN_1448075d0(&local_50);
    pbVar1 = (byte *)*param_2;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
      }
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar10 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar7[9];
        }
        iVar6 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_50) * 4)
        ;
        if (iVar6 != -1) {
          do {
            lVar8 = *plVar7 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar6 * 0x40) == (uint)local_50) {
              if ((((lVar8 != 0) &&
                   (puVar9 = (undefined8 *)(lVar8 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_140643c40;
              break;
            }
            iVar6 = *(int *)(lVar8 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_140643c40:
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (((byte *)*puVar9 != (byte *)0x0) && ((*(byte *)*puVar9 & 3) == 1)) {
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_54 = 0;
      FUN_140008118(&local_50,puVar9);
      if ((local_50 != (char *)0x0) && (local_48 - 1U < 0xfffffffe)) {
        FUN_14883afb8(param_1 + 0x10,&local_50);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(ulonglong *)(param_1 + 0x14) = uVar3 | uVar13;
    FUN_140641d04(param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140643e6c FUN_140643e6c body=57 status=ok
// SIG undefined FUN_140643e6c(void)

void FUN_140643e6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55e50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55e50 = FUN_140002ddd(FUN_1464b5b42,uVar1,L"ContingentFactChange");
  }
  return;
}



// FUNCTION 140643ea6 FUN_140643ea6 body=1282 status=ok
// SIG undefined FUN_140643ea6(void)

void FUN_140643ea6(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  uVar11 = *param_2;
  iVar17 = (int)param_1[1];
  iVar18 = *(int *)((longlong)param_1 + 0x34);
  if (iVar17 != iVar18) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar14 != -1) {
      do {
        lVar9 = *param_1 + (longlong)iVar14 * 0x10;
        puVar8 = *(uint **)(*param_1 + (longlong)iVar14 * 0x10);
        if (*puVar8 == uVar11) {
          if (lVar9 != 0) {
            *(undefined8 *)(puVar8 + 6) = *param_3;
            if (((uint *)param_1[10] == puVar8) &&
               (lVar9 = *(longlong *)((uint *)param_1[10] + 4), lVar9 != 0)) {
              param_1[10] = lVar9;
            }
            if ((uint *)param_1[0xb] == puVar8) {
              return;
            }
            lVar9 = *(longlong *)(puVar8 + 4);
            if (*(longlong *)(puVar8 + 2) != 0) {
              *(longlong *)(*(longlong *)(puVar8 + 2) + 0x10) = lVar9;
            }
            puVar2 = puVar8 + 2;
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 8) = *(undefined8 *)puVar2;
            }
            puVar2[0] = 0;
            puVar2[1] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            lVar9 = param_1[0xb];
            *(longlong *)puVar2 = lVar9;
            if (lVar9 != 0) {
              *(uint **)(lVar9 + 0x10) = puVar8;
            }
            param_1[0xb] = (longlong)puVar8;
            return;
          }
          break;
        }
        iVar14 = *(int *)(lVar9 + 8);
      } while (iVar14 != -1);
    }
  }
  if ((iVar17 - iVar18 == (int)param_1[0xc]) && (piVar4 = (int *)param_1[10], piVar4 != (int *)0x0))
  {
    if (iVar17 != iVar18) {
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar17 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)*piVar4) * 4)
      ;
      if (iVar17 != -1) {
        lVar9 = *param_1;
LAB_140643f58:
        lVar1 = lVar9 + (longlong)iVar17 * 0x10;
        if (**(int **)(lVar9 + (longlong)iVar17 * 0x10) != *piVar4) goto code_r0x000140643f6c;
        iVar18 = *(int *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        if (iVar18 == iVar17) {
          piVar7 = (int *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        }
        else {
          do {
            piVar7 = (int *)((longlong)iVar18 * 0x10 + lVar9 + 8);
            iVar18 = *piVar7;
          } while (iVar18 != iVar17);
        }
        *piVar7 = *(int *)(lVar1 + 8);
        FUN_1406443a8(param_1);
        if ((int *)param_1[10] == piVar4) goto LAB_140643fb2;
        goto LAB_140643fba;
      }
    }
LAB_140643fb2:
    param_1[10] = *(longlong *)(piVar4 + 4);
LAB_140643fba:
    lVar9 = *(longlong *)(piVar4 + 2);
    if ((int *)param_1[0xb] == piVar4) {
      param_1[0xb] = lVar9;
    }
    lVar1 = *(longlong *)(piVar4 + 4);
    if (lVar9 != 0) {
      *(longlong *)(lVar9 + 0x10) = lVar1;
    }
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(piVar4 + 2);
    }
    FUN_1400020a8(piVar4);
    uVar11 = *param_2;
  }
  puVar8 = (uint *)FUN_14001cc68(0x20,0x10);
  *puVar8 = uVar11;
  puVar8[4] = 0;
  puVar8[5] = 0;
  *(undefined8 *)(puVar8 + 6) = *param_3;
  lVar9 = param_1[0xb];
  *(longlong *)(puVar8 + 2) = lVar9;
  if (lVar9 != 0) {
    *(uint **)(lVar9 + 0x10) = puVar8;
  }
  param_1[0xb] = (longlong)puVar8;
  if (param_1[10] == 0) {
    param_1[10] = (longlong)puVar8;
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1446efaca(param_1,iVar17);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar14 = -1;
    }
    else {
      iVar14 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar14 = iVar18 + -1;
      }
      iVar14 = iVar14 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar12 = iVar18 + 1;
    iVar16 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar16 = iVar18;
    }
    if (iVar16 >> 5 == iVar14) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar14 = iVar18;
        }
        else {
          uVar11 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar11) {
              uVar19 = uVar11;
            }
          }
          else {
            uVar19 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar19 << 2,0);
          iVar14 = (int)(uVar13 >> 2);
          iVar12 = -0x20;
          if ((int)uVar11 <= iVar14) {
            iVar12 = iVar14 << 5;
          }
          iVar14 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar6,iVar14);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar14 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar14 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar6;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar14 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar18 & 0x1f;
    puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar9 = (longlong)iVar17;
    iVar18 = *(int *)(*param_1 + 4 + lVar9 * 0x10);
    *(int *)(param_1 + 6) = iVar18;
    iVar14 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x10) = 0xffffffff;
    }
  }
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar18 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar18 = iVar17;
  }
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar18 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar17 & 0x1f);
  iVar18 = 1;
  lVar1 = *param_1;
  lVar9 = lVar9 * 0x10;
  *(uint **)(lVar1 + lVar9) = puVar8;
  *(undefined4 *)(lVar1 + 8 + lVar9) = 0xffffffff;
  uVar11 = *puVar8;
  uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar19 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar14 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
      if (iVar14 != -1) {
        do {
          puVar3 = (undefined8 *)(*param_1 + (longlong)iVar14 * 0x10);
          if (**(uint **)(*param_1 + (longlong)iVar14 * 0x10) == uVar11) {
            *puVar3 = puVar8;
            FUN_1406443a8(param_1,iVar17);
            return;
          }
          iVar14 = *(int *)(puVar3 + 1);
        } while (iVar14 != -1);
      }
    }
    if (3 < uVar19) {
      uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar5 & 0x1f);
    }
  }
  if ((0 < (int)uVar19) && ((int)param_1[9] < iVar18)) {
    *(int *)(param_1 + 9) = iVar18;
    FUN_140028bde(param_1);
    return;
  }
  uVar11 = (int)param_1[9] - 1U & uVar11;
  *(uint *)(lVar1 + lVar9 + 0xc) = uVar11;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  *(undefined4 *)(lVar1 + lVar9 + 8) =
       *(undefined4 *)
        ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) = iVar17
  ;
  return;
code_r0x000140643f6c:
  iVar17 = *(int *)(lVar1 + 8);
  if (iVar17 == -1) goto LAB_140643fb2;
  goto LAB_140643f58;
}



// FUNCTION 1406443a8 FUN_1406443a8 body=116 status=ok
// SIG undefined FUN_1406443a8(void)

void FUN_1406443a8(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14064441c FUN_14064441c body=67 status=ok
// SIG undefined FUN_14064441c(void)

undefined8 FUN_14064441c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14016398c();
  if (cVar1 != '\0') {
    cVar1 = FUN_1402bfec4(param_1,0);
    if (cVar1 == '\0') {
      FUN_140644460(param_1);
      uVar2 = FUN_1447fa3ae(param_1 + 0x300);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140644460 FUN_140644460 body=64 status=ok
// SIG undefined FUN_140644460(void)

void FUN_140644460(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x388))();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x24) == '\x01')) {
    FUN_140da176c(lVar1);
    FUN_1400fb146(param_1 + 0x60,0);
    return;
  }
  return;
}



// FUNCTION 1406444ae FUN_1406444ae body=31 status=ok
// SIG undefined FUN_1406444ae(void)

undefined8 FUN_1406444ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1406444ce FUN_1406444ce body=7009 status=ok
// SIG undefined FUN_1406444ce(void)

uint * FUN_1406444ce(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  ulonglong *puVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  longlong *plVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  uint *local_238;
  longlong *local_230;
  uint *local_228;
  uint local_21c;
  ulonglong local_218;
  longlong *local_210;
  uint *local_208;
  uint *local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  uint local_1dc;
  longlong local_1d8;
  int local_1cc;
  longlong *local_1c8;
  uint *local_1c0;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  uint *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  uint local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  uint *local_128;
  undefined8 local_120;
  uint *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  uint local_f8 [8];
  uint *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  plVar16 = param_3 + 0x23;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140644ffd:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_268);
  }
  if (DAT_14cbb40c0 == 0) {
    uVar6 = FUN_14064613c();
    DAT_14cbb40c0 = FUN_140002ddd(FUN_1465faca5,uVar6,L"OakPassiveHUDIconItem");
  }
  lVar25 = DAT_14cbb40c0;
  local_1b0 = DAT_14cbb40c0;
  local_1a8 = plVar16;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_14064616e();
  local_230 = param_2;
  local_210 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar25;
    if ((undefined8 *)param_2[0xf] != (undefined8 *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar8 = (uint *)(param_3 + 0xd);
      iVar20 = (int)param_3[0x10];
      if (iVar20 == 0) {
        uVar28 = 1;
        uVar31 = 0;
        iVar23 = 0;
        iVar27 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar8;
        }
        uVar22 = *puVar7;
        if (uVar22 == 0) {
          iVar27 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar27 = iVar20 + -1;
          }
          uVar31 = 0;
          uVar28 = (ulonglong)(uint)(iVar27 >> 5);
          if (iVar27 >> 5 < 1) {
            uVar28 = uVar31;
          }
          iVar27 = 0;
          do {
            if (uVar28 == uVar31) goto LAB_1406447d9;
            iVar27 = iVar27 + 0x20;
            uVar22 = puVar7[uVar31 + 1];
            uVar31 = uVar31 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar31 = 0;
          iVar27 = 0;
        }
        uVar28 = (ulonglong)(-uVar22 & uVar22);
        uVar1 = uVar28 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar23 = (iVar27 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar20 <= iVar23) {
          iVar23 = iVar20;
        }
      }
      if (iVar23 == iVar20) {
LAB_1406447d9:
        local_238 = (uint *)0x0;
        puVar7 = local_238;
      }
      else {
        uVar22 = 0xffffffff;
        local_238 = (uint *)0x0;
        iVar18 = iVar20;
        do {
          lVar25 = param_3[0xb];
          lVar21 = (longlong)iVar23 * 200;
          if (*(int *)(lVar25 + 0x60 + lVar21) != *(int *)(lVar25 + 0x8c + lVar21)) {
            lVar32 = lVar25 + lVar21;
            lVar26 = lVar32 + 0x90;
            if (*(longlong *)(lVar32 + 0x98) != 0) {
              lVar26 = *(longlong *)(lVar32 + 0x98);
            }
            iVar23 = *(int *)(lVar26 + (ulonglong)
                                       (*(int *)(lVar32 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar23 != -1) {
              local_230 = (longlong *)CONCAT44(local_230._4_4_,iVar27);
              plVar16 = (longlong *)(lVar21 + lVar25 + 0x58);
              lVar25 = *plVar16;
              do {
                if (*(undefined ***)(lVar25 + (longlong)iVar23 * 0x10) == local_108) {
                  lVar32 = lVar32 + 8;
                  FUN_140326250(plVar16,&local_108);
                  FUN_140325a06(lVar32,&local_148,&local_108,0);
                  iVar18 = (int)param_3[0x10];
                  local_238 = (uint *)CONCAT71((int7)((ulonglong)lVar32 >> 8),1);
                  break;
                }
                iVar23 = *(int *)((longlong)iVar23 * 0x10 + lVar25 + 8);
              } while (iVar23 != -1);
              iVar27 = (int)local_230;
            }
          }
          uVar22 = uVar22 & ~(uint)uVar28;
          puVar7 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar7 = puVar8;
          }
          iVar23 = (int)uVar31;
          lVar25 = (longlong)iVar23;
          uVar17 = puVar7[lVar25] & uVar22;
          if (uVar17 == 0) {
            iVar13 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar13 = iVar18 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar27 = iVar27 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar23) {
              iVar14 = iVar23;
            }
            if (iVar23 < iVar13) {
              lVar21 = 0;
              do {
                uVar17 = puVar7[lVar25 + lVar21 + 1];
                if (uVar17 != 0) {
                  uVar31 = (ulonglong)(iVar23 + (int)lVar21 + 1);
                  uVar22 = 0xffffffff;
                  goto LAB_140644f96;
                }
                iVar27 = iVar27 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar14 - lVar25 != lVar21);
              uVar22 = 0xffffffff;
              iVar23 = iVar14;
            }
            uVar31 = (ulonglong)(iVar23 + 1);
            param_3 = local_210;
            iVar23 = iVar18;
          }
          else {
LAB_140644f96:
            uVar28 = (ulonglong)(-uVar17 & uVar17);
            uVar1 = uVar28 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar23 = (iVar27 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if (iVar18 <= iVar23) {
              iVar23 = iVar18;
            }
          }
          puVar7 = local_238;
        } while (iVar23 != iVar20);
      }
      goto LAB_140644705;
    }
    local_1f8 = plVar16;
    if ((char)param_2[9] == '\x01') {
      local_128 = (uint *)0x0;
      local_120 = 0x800000000;
      puVar8 = (uint *)(param_3 + 0xd);
      iVar20 = (int)param_3[0x10];
      if (iVar20 == 0) {
        uVar31 = 1;
        uVar28 = 0;
        iVar27 = 0;
        uVar22 = 0;
      }
      else {
        puVar7 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar7 = puVar8;
        }
        uVar17 = *puVar7;
        if (uVar17 == 0) {
          iVar27 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar27 = iVar20 + -1;
          }
          uVar28 = 0;
          uVar31 = (ulonglong)(uint)(iVar27 >> 5);
          if (iVar27 >> 5 < 1) {
            uVar31 = uVar28;
          }
          uVar22 = 0;
          do {
            if (uVar31 == uVar28) goto LAB_140645ff3;
            uVar22 = uVar22 + 0x20;
            uVar17 = puVar7[uVar28 + 1];
            uVar28 = uVar28 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar28 = 0;
          uVar22 = 0;
        }
        uVar31 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar31 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar27 = (uVar22 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar20 <= iVar27) {
          iVar27 = iVar20;
        }
      }
      if (iVar27 < iVar20) {
        local_200 = (uint *)(param_3 + 0xb);
        local_1c8 = param_3 + 7;
        uVar17 = 0xffffffff;
        local_1c0 = puVar8;
LAB_1406448d9:
        local_1cc = iVar27;
        local_228 = (uint *)CONCAT44(local_228._4_4_,uVar17);
        puVar7 = (uint *)(*(longlong *)local_200 + (longlong)local_1cc * 200);
        puVar24 = puVar7 + 2;
        uVar17 = *puVar7;
        if (((puVar7[4] != puVar7[0xf]) || (puVar7[0x18] != puVar7[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar16 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar16 = local_1c8;
          }
          iVar20 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_3[9] - 1U & uVar17) * 4);
          if (iVar20 != -1) {
            do {
              lVar25 = *param_3 + (longlong)iVar20 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar20 * 0x10) == uVar17) {
                if ((lVar25 != 0) && (lVar25 != -4)) {
                  uVar15 = puVar7[0xc];
                  local_1f0 = uVar28;
                  local_21c = uVar22;
                  local_218 = uVar31;
                  if (uVar15 == 0) {
                    uVar28 = 1;
                    uVar31 = 0;
                    uVar22 = 0;
                    iVar20 = 0;
                    goto LAB_140644a0f;
                  }
                  puVar8 = *(uint **)(puVar7 + 10);
                  if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
                    puVar8 = puVar7 + 6;
                  }
                  uVar22 = *puVar8;
                  if (uVar22 != 0) {
                    uVar31 = 0;
                    iVar20 = 0;
                    goto LAB_1406449e7;
                  }
                  iVar20 = uVar15 + 0x1e;
                  if (-1 < (int)(uVar15 - 1)) {
                    iVar20 = uVar15 - 1;
                  }
                  uVar31 = 0;
                  uVar28 = (ulonglong)(uint)(iVar20 >> 5);
                  if (iVar20 >> 5 < 1) {
                    uVar28 = uVar31;
                  }
                  iVar20 = 0;
                  goto LAB_1406449ce;
                }
                break;
              }
              iVar20 = *(int *)(lVar25 + 8);
            } while (iVar20 != -1);
          }
        }
        goto LAB_14064495e;
      }
LAB_140645ff3:
      puVar8 = local_128;
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)param_2 + 0x4b) = 1;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140644ffd;
      }
      plVar16 = (longlong *)*param_2;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)param_2[1];
        local_d8 = (uint *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_1406473ce(&local_1b0);
        if (cVar5 == '\0') {
LAB_140645e4c:
          if (local_d8 != (uint *)0x0) {
            FUN_1400020a8();
          }
LAB_140645e5e:
          puVar7 = (uint *)0x0;
          goto LAB_140644705;
        }
        iVar20 = 0;
        local_128 = (uint *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        plVar11 = local_230;
        if (0 < local_100) {
          plVar30 = param_3 + 7;
          local_1e8 = param_3 + 0xb;
          do {
            local_1b4 = 0;
            puVar29 = (ulonglong *)plVar16[1];
            puVar8 = (uint *)*puVar29 + 1;
            if ((uint *)puVar29[1] < puVar8) {
              if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar16 + 0x170))(plVar16,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar16,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar29;
              *puVar29 = (ulonglong)puVar8;
            }
            uVar28 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar11 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar11 = plVar30;
              }
              iVar27 = *(int *)((longlong)plVar11 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar27 != -1) {
                do {
                  lVar25 = *param_3 + (longlong)iVar27 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar27 * 0x10) == local_1b4) {
                    if ((lVar25 != 0) && ((uint *)(lVar25 + 4) != (uint *)0x0)) {
                      local_1b8 = *(uint *)(lVar25 + 4);
                      puVar8 = (uint *)((longlong)(int)local_1b8 * 0x78 + *local_1f8);
                      lVar25 = (longlong)(int)local_120;
                      uVar22 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar22);
                      if (local_120._4_4_ < uVar22) {
                        FUN_1400cc390(&local_148,uVar28 & 0xffffffff);
                      }
                      puVar7 = local_128;
                      if (local_128 == (uint *)0x0) {
                        puVar7 = &local_148;
                      }
                      puVar7[lVar25] = local_1b8;
                      goto LAB_1406452e2;
                    }
                    break;
                  }
                  iVar27 = *(int *)(lVar25 + 8);
                } while (iVar27 != -1);
              }
            }
            local_1b8 = 0;
            puVar8 = (uint *)FUN_145730c10(local_1f8);
            *puVar8 = local_1b4;
            local_1b8 = (int)param_3[0x24] - 1;
            local_188 = &local_1b8;
            local_190 = &local_1b4;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar28 = local_150;
            lVar25 = (longlong)(int)local_150;
            uVar22 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar22);
            if (local_150._4_4_ < uVar22) {
              FUN_1400cc390(local_178,uVar28 & 0xffffffff);
            }
            puVar9 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar9 = local_178;
            }
            puVar9[lVar25] = local_1b8;
LAB_1406452e2:
            puVar8[2] = (uint)local_108;
            puVar8[1] = puVar8[1] + 1;
            lVar25 = local_230[4];
            FUN_144958770(lVar25 + 0x30,0);
            FUN_144958770(lVar25 + 0x80,0);
            plVar11 = local_230;
            *(undefined1 *)(lVar25 + 0x28) = 1;
            puVar7 = (uint *)plVar16[0x15];
            local_230[7] = local_1d8;
            local_230[6] = (longlong)puVar8;
            local_190 = puVar7;
            (**(code **)(*(longlong *)local_230[8] + 8))((longlong *)local_230[8],local_230);
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) == 0) {
              lVar25 = plVar11[4];
              if ((*(int *)(lVar25 + 0x38) == *(int *)(lVar25 + 100)) &&
                 (*(int *)(lVar25 + 0x88) == *(int *)(lVar25 + 0xb4))) {
                FUN_1456fd588(local_1e8,local_1b4);
              }
              else {
                local_208 = (uint *)(lVar25 + 0x30);
                puVar8 = (uint *)FUN_1456fd5f6(local_1e8,local_1b4);
                local_238 = puVar8;
                if (puVar8[2] - puVar8[0xd] == *(int *)(lVar25 + 0x38) - *(int *)(lVar25 + 100)) {
                  local_228 = puVar8 + 4;
                  uVar22 = puVar8[10];
                  if (uVar22 == 0) {
                    uVar31 = 1;
                    uVar28 = 0;
                    uVar17 = 0;
                    iVar27 = 0;
                  }
                  else {
                    puVar24 = *(uint **)(puVar8 + 8);
                    if (*(uint **)(puVar8 + 8) == (uint *)0x0) {
                      puVar24 = local_228;
                    }
                    uVar17 = *puVar24;
                    if (uVar17 == 0) {
                      iVar27 = uVar22 + 0x1e;
                      if (-1 < (int)(uVar22 - 1)) {
                        iVar27 = uVar22 - 1;
                      }
                      uVar28 = 0;
                      uVar31 = (ulonglong)(uint)(iVar27 >> 5);
                      if (iVar27 >> 5 < 1) {
                        uVar31 = uVar28;
                      }
                      iVar27 = 0;
                      do {
                        if (uVar31 == uVar28) goto LAB_1406454f3;
                        iVar27 = iVar27 + 0x20;
                        uVar17 = puVar24[uVar28 + 1];
                        uVar28 = uVar28 + 1;
                      } while (uVar17 == 0);
                    }
                    else {
                      uVar28 = 0;
                      iVar27 = 0;
                    }
                    uVar31 = (ulonglong)(-uVar17 & uVar17);
                    uVar1 = uVar31 * 2 + 1;
                    lVar21 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                      }
                    }
                    uVar17 = (iVar27 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    if ((int)uVar22 <= (int)uVar17) {
                      uVar17 = uVar22;
                    }
                  }
                  if (uVar17 != uVar22) {
                    if (*(uint **)(puVar8 + 8) != (uint *)0x0) {
                      local_228 = *(uint **)(puVar8 + 8);
                    }
                    iVar23 = uVar22 + 0x1e;
                    if (-1 < (int)(uVar22 - 1)) {
                      iVar23 = uVar22 - 1;
                    }
                    if (*(int *)(lVar25 + 0x38) == *(int *)(lVar25 + 100)) goto LAB_1406454db;
                    iVar23 = iVar23 >> 5;
                    local_1f0 = lVar25 + 0x68;
                    if (*(ulonglong *)(lVar25 + 0x70) != 0) {
                      local_1f0 = *(ulonglong *)(lVar25 + 0x70);
                    }
                    local_21c = *(int *)(lVar25 + 0x78) - 1;
                    local_200 = local_228 + 1;
                    local_218 = CONCAT44(local_218._4_4_,0xffffffff);
                    do {
                      lVar21 = *(longlong *)(*(longlong *)puVar8 + (longlong)(int)uVar17 * 0x10);
                      iVar18 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17 &
                                       local_21c) * 4);
                      if (iVar18 == -1) goto LAB_1406454db;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar18 * 0x10) !=
                             lVar21) {
                        iVar18 = *(int *)((longlong)iVar18 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar18 == -1) goto LAB_1406454db;
                      }
                      uVar15 = (uint)local_218 & ~(uint)uVar31;
                      iVar18 = (int)uVar28;
                      lVar21 = (longlong)iVar18;
                      uVar17 = local_228[lVar21] & uVar15;
                      if (uVar17 == 0) {
                        iVar13 = iVar23;
                        if (iVar23 < iVar18) {
                          iVar13 = iVar18;
                        }
                        if (iVar23 <= iVar18) break;
                        lVar32 = 0;
                        while( true ) {
                          iVar27 = iVar27 + 0x20;
                          uVar17 = local_200[lVar21 + lVar32];
                          if (uVar17 != 0) break;
                          lVar32 = lVar32 + 1;
                          if (iVar13 - lVar21 == lVar32) goto LAB_1406454f3;
                        }
                        uVar28 = (ulonglong)(iVar18 + (int)lVar32 + 1);
                        local_218 = CONCAT44(local_218._4_4_,0xffffffff);
                      }
                      else {
                        local_218 = CONCAT44(local_218._4_4_,uVar15);
                      }
                      uVar31 = (ulonglong)(-uVar17 & uVar17);
                      uVar1 = uVar31 * 2 + 1;
                      lVar21 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                        }
                      }
                      uVar17 = (iVar27 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar17 < (int)uVar22);
                  }
                }
                else {
LAB_1406454db:
                  FUN_140492002(puVar8,local_208);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_1406454f3:
                local_208 = (uint *)(lVar25 + 0x80);
                if (local_238[0x16] - local_238[0x21] ==
                    *(int *)(lVar25 + 0x88) - *(int *)(lVar25 + 0xb4)) {
                  local_228 = puVar8 + 0x18;
                  uVar22 = local_238[0x1e];
                  if (uVar22 == 0) {
                    uVar31 = 1;
                    uVar28 = 0;
                    uVar17 = 0;
                    iVar27 = 0;
                  }
                  else {
                    puVar24 = *(uint **)(local_238 + 0x1c);
                    if (*(uint **)(local_238 + 0x1c) == (uint *)0x0) {
                      puVar24 = local_228;
                    }
                    uVar17 = *puVar24;
                    if (uVar17 == 0) {
                      iVar27 = uVar22 + 0x1e;
                      if (-1 < (int)(uVar22 - 1)) {
                        iVar27 = uVar22 - 1;
                      }
                      uVar28 = 0;
                      uVar31 = (ulonglong)(uint)(iVar27 >> 5);
                      if (iVar27 >> 5 < 1) {
                        uVar31 = uVar28;
                      }
                      iVar27 = 0;
                      do {
                        if (uVar31 == uVar28) goto LAB_140645602;
                        iVar27 = iVar27 + 0x20;
                        uVar17 = puVar24[uVar28 + 1];
                        uVar28 = uVar28 + 1;
                      } while (uVar17 == 0);
                    }
                    else {
                      uVar28 = 0;
                      iVar27 = 0;
                    }
                    uVar31 = (ulonglong)(-uVar17 & uVar17);
                    uVar1 = uVar31 * 2 + 1;
                    lVar21 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                      }
                    }
                    uVar17 = (iVar27 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    if ((int)uVar22 <= (int)uVar17) {
                      uVar17 = uVar22;
                    }
                  }
                  if (uVar17 != uVar22) {
                    if (*(uint **)(local_238 + 0x1c) != (uint *)0x0) {
                      local_228 = *(uint **)(local_238 + 0x1c);
                    }
                    iVar23 = uVar22 + 0x1e;
                    if (-1 < (int)(uVar22 - 1)) {
                      iVar23 = uVar22 - 1;
                    }
                    if (*(int *)(lVar25 + 0x88) == *(int *)(lVar25 + 0xb4)) goto LAB_1406455eb;
                    iVar23 = iVar23 >> 5;
                    local_1f0 = lVar25 + 0xb8;
                    if (*(ulonglong *)(lVar25 + 0xc0) != 0) {
                      local_1f0 = *(ulonglong *)(lVar25 + 0xc0);
                    }
                    local_21c = *(int *)(lVar25 + 200) - 1;
                    local_200 = local_228 + 1;
                    local_218 = CONCAT44(local_218._4_4_,0xffffffff);
                    do {
                      lVar21 = *(longlong *)
                                (*(longlong *)(local_238 + 0x14) + (longlong)(int)uVar17 * 0x10);
                      iVar18 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17 &
                                       local_21c) * 4);
                      if (iVar18 == -1) goto LAB_1406455eb;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar18 * 0x10) !=
                             lVar21) {
                        iVar18 = *(int *)((longlong)iVar18 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar18 == -1) goto LAB_1406455eb;
                      }
                      uVar15 = (uint)local_218 & ~(uint)uVar31;
                      iVar18 = (int)uVar28;
                      lVar21 = (longlong)iVar18;
                      uVar17 = local_228[lVar21] & uVar15;
                      if (uVar17 == 0) {
                        iVar13 = iVar23;
                        if (iVar23 < iVar18) {
                          iVar13 = iVar18;
                        }
                        if (iVar23 <= iVar18) break;
                        lVar32 = 0;
                        while( true ) {
                          iVar27 = iVar27 + 0x20;
                          uVar17 = local_200[lVar21 + lVar32];
                          if (uVar17 != 0) break;
                          lVar32 = lVar32 + 1;
                          if (iVar13 - lVar21 == lVar32) goto LAB_140645602;
                        }
                        uVar28 = (ulonglong)(iVar18 + (int)lVar32 + 1);
                        local_218 = CONCAT44(local_218._4_4_,0xffffffff);
                      }
                      else {
                        local_218 = CONCAT44(local_218._4_4_,uVar15);
                      }
                      uVar31 = (ulonglong)(-uVar17 & uVar17);
                      uVar1 = uVar31 * 2 + 1;
                      lVar21 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                        }
                      }
                      uVar17 = (iVar27 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar17 < (int)uVar22);
                  }
                }
                else {
LAB_1406455eb:
                  FUN_140492002(puVar8 + 0x14,local_208);
                  *(undefined1 *)((longlong)local_230 + 0x4c) = 1;
                }
LAB_140645602:
                puVar24 = local_238;
                local_238[0x2a] = 0;
                if (local_238[0x2b] != 0) {
                  FUN_144893a1c(puVar8 + 0x28,0);
                }
                puVar24[0x2c] = (int)plVar16[0x15] - (int)puVar7;
                FUN_14049209c(&local_190,plVar16,puVar8 + 0x28);
                plVar11 = local_230;
                if (*(int *)(lVar25 + 0x38) != *(int *)(lVar25 + 100)) {
                  *(undefined1 *)((longlong)local_230 + 0x4b) = 1;
                }
              }
            }
            lVar25 = plVar11[4];
            FUN_144958770(lVar25 + 0x30,0);
            FUN_144958770(lVar25 + 0x80,0);
            *(undefined1 *)(lVar25 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar16 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (uint *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140645e4c;
            }
            iVar20 = iVar20 + 1;
            plVar11 = local_198;
            param_3 = local_210;
          } while (iVar20 < local_100);
        }
        plVar16 = local_1a8;
        if (((char)plVar11[10] == '\0') && (iVar20 = (int)local_1a8[1], 0 < iVar20)) {
          uVar28 = 0;
          do {
            uVar31 = local_d0;
            iVar27 = *(int *)(*plVar16 + 8 + uVar28 * 0x78);
            if ((iVar27 < (int)(uint)local_108) && (local_108._4_4_ < iVar27)) {
              puVar8 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar8 = local_f8;
              }
              lVar25 = (longlong)(int)local_d0;
              if (lVar25 != 0) {
                lVar21 = 0;
                do {
                  if (uVar28 == *(uint *)((longlong)puVar8 + lVar21)) goto LAB_140645c38;
                  lVar21 = lVar21 + 4;
                } while (lVar25 * 4 - lVar21 != 0);
              }
              uVar22 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar22);
              if (local_d0._4_4_ < uVar22) {
                FUN_1400cc390(local_f8,uVar31 & 0xffffffff);
              }
              puVar8 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar8 = local_f8;
              }
              puVar8[lVar25] = (uint)uVar28;
              iVar20 = (int)plVar16[1];
            }
LAB_140645c38:
            uVar28 = uVar28 + 1;
          } while ((longlong)uVar28 < (longlong)iVar20);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar16 = local_1a8;
        puVar8 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar8 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_210 = local_210 + 0xb;
          lVar25 = (longlong)(int)local_d0;
          lVar21 = 0;
          do {
            iVar20 = *(int *)((longlong)puVar8 + lVar21);
            if (((-1 < (longlong)iVar20) && (iVar20 < (int)plVar16[1])) &&
               (iVar20 = FUN_1456fd588(local_210,*(undefined4 *)(*plVar16 + (longlong)iVar20 * 0x78)
                                      ), 0 < iVar20)) {
              *(undefined1 *)((longlong)plVar11 + 0x4c) = 1;
            }
            lVar21 = lVar21 + 4;
          } while (lVar25 * 4 != lVar21);
        }
        plVar11 = local_1a0;
        plVar16 = local_1a8;
        puVar9 = local_158;
        if (local_158 == (undefined4 *)0x0) {
          puVar9 = local_178;
        }
        lVar25 = (longlong)(int)local_150;
        if (lVar25 != 0) {
          lVar21 = 0;
          do {
            FUN_145730c52((longlong)*(int *)((longlong)puVar9 + lVar21) * 0x78 + *plVar16,plVar11);
            lVar21 = lVar21 + 4;
          } while (lVar25 * 4 != lVar21);
        }
        plVar11 = local_1a0;
        plVar16 = local_1a8;
        puVar8 = local_128;
        if (local_128 == (uint *)0x0) {
          puVar8 = &local_148;
        }
        lVar25 = (longlong)(int)local_120;
        if (lVar25 != 0) {
          lVar21 = 0;
          do {
            FUN_140646250((longlong)*(int *)((longlong)puVar8 + lVar21) * 0x78 + *plVar16,plVar11);
            lVar21 = lVar21 + 4;
          } while (lVar25 * 4 != lVar21);
        }
        if (0 < (int)local_d0) {
          puVar8 = local_d8;
          if (local_d8 == (uint *)0x0) {
            puVar8 = local_f8;
          }
          FUN_144958a06(puVar8);
          plVar16 = local_1a8;
          if (0 < (longlong)(int)local_d0) {
            uVar28 = (longlong)(int)local_d0 + 1;
            do {
              puVar8 = local_d8;
              if (local_d8 == (uint *)0x0) {
                puVar8 = local_f8;
              }
              if ((-1 < (int)puVar8[uVar28 - 2]) && ((int)puVar8[uVar28 - 2] < (int)plVar16[1])) {
                FUN_145730c7e(plVar16);
              }
              uVar28 = uVar28 - 1;
            } while (1 < uVar28);
          }
          FUN_14010afec(local_1a0,0);
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = local_d8;
        if (local_128 != (uint *)0x0) {
          FUN_1400020a8();
          puVar8 = local_d8;
        }
        goto LAB_14064600a;
      }
      lVar25 = param_2[3];
      if (lVar25 == 0) {
        local_238 = (uint *)CONCAT44(local_238._4_4_,0xffffffff);
        lVar25 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar25 + 0x70);
        cVar5 = FUN_1406470e4(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140645e5e;
        local_238 = (uint *)CONCAT44(local_238._4_4_,uVar3);
        lVar25 = lVar25 + 0x20;
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &PTR_FUN_14ab190a0;
      puVar10[8] = 0;
      *(undefined4 *)(puVar10 + 9) = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar10 + 0x54) = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0xffffffff;
      puVar12 = (undefined8 *)local_230[2];
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14ab190c0;
      plVar11[2] = (longlong)puVar10;
      if (puVar10 == (undefined8 *)0x0) {
LAB_14064595c:
        *puVar12 = puVar10;
        plVar30 = (longlong *)puVar12[1];
        if (plVar11 == plVar30) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar30 = plVar11 + 1;
            *(int *)plVar30 = (int)*plVar30 + -1;
            UNLOCK();
            if ((int)*plVar30 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar4 = (int *)((longlong)plVar11 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar20 = *piVar4;
              UNLOCK();
              plVar30 = plVar11;
              goto joined_r0x000140645998;
            }
          }
        }
        else {
          puVar12[1] = plVar11;
          if (plVar30 != (longlong *)0x0) goto LAB_1406459b4;
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          puVar10[1] = puVar10;
          if ((longlong *)puVar10[2] != plVar11) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar30 = (longlong *)puVar10[2];
            if (plVar30 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar30 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar30 + 0x10))();
              }
            }
            puVar10[2] = plVar11;
          }
          LOCK();
          plVar30 = plVar11 + 1;
          *(int *)plVar30 = (int)*plVar30 + -1;
          UNLOCK();
          if ((int)*plVar30 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar4 = (int *)((longlong)plVar11 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_14064595c;
        }
        puVar10[1] = puVar10;
        *puVar12 = puVar10;
        plVar30 = (longlong *)puVar12[1];
        if (plVar30 != (longlong *)0x0) {
          puVar12[1] = 0;
LAB_1406459b4:
          LOCK();
          plVar11 = plVar30 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar30)(plVar30);
            LOCK();
            piVar4 = (int *)((longlong)plVar30 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar20 = *piVar4;
            UNLOCK();
joined_r0x000140645998:
            if (iVar20 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
            }
          }
        }
      }
      local_148 = *(uint *)((longlong)param_3 + 0x54);
      *(uint *)(puVar10 + 0xe) = local_148;
      local_144 = local_238._0_4_;
      local_140 = 0;
      local_118 = (uint *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_230 + 0x4e) == '\x01') {
        FUN_140646e0a(&local_1b0,puVar10 + 4,&local_108);
      }
      else {
        local_248 = local_138;
        FUN_1406476a2(&local_1b0,puVar10 + 4,lVar25,&local_108);
        *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      plVar11 = local_1f8;
      local_140 = (int)local_c0;
      FUN_140646ef2(&local_1b0);
      if (0 < (int)local_c0) {
        lVar25 = 0;
        do {
          puVar12 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar12 = &local_108;
          }
          iVar20 = *(int *)(puVar12 + lVar25);
          lVar21 = *plVar11;
          local_178[0] = *(undefined4 *)((longlong)puVar12 + lVar25 * 8 + 4);
          puVar29 = (ulonglong *)plVar16[1];
          puVar9 = (undefined4 *)*puVar29 + 1;
          if ((undefined4 *)puVar29[1] < puVar9) {
            if ((*(byte *)((longlong)plVar16 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar16 + 0x170))(plVar16,local_178,4);
            }
            else {
              FUN_14572512c(plVar16,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar29;
            *puVar29 = (ulonglong)puVar9;
          }
          local_230[7] = local_1d8;
          local_230[6] = (longlong)iVar20 * 0x78 + lVar21;
          (**(code **)(*(longlong *)local_230[8] + 8))();
          lVar25 = lVar25 + 1;
        } while ((int)lVar25 < (int)local_c0);
      }
      puVar8 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar8 = local_118;
      }
    }
LAB_14064600a:
    if (puVar8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar20 = (int)param_3[0x10];
    if (iVar20 == 0) {
      uVar28 = 1;
      iVar23 = 0;
      iVar27 = 0;
      uVar31 = 0;
    }
    else {
      puVar8 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar8 = (uint *)(param_3 + 0xd);
      }
      uVar22 = *puVar8;
      if (uVar22 == 0) {
        iVar27 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar27 = iVar20 + -1;
        }
        uVar31 = 0;
        uVar28 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar28 = uVar31;
        }
        iVar23 = 0;
        do {
          if (uVar28 == uVar31) goto LAB_140644703;
          iVar23 = iVar23 + 0x20;
          uVar22 = puVar8[uVar31 + 1];
          uVar31 = uVar31 + 1;
        } while (uVar22 == 0);
      }
      else {
        iVar23 = 0;
        uVar31 = 0;
      }
      uVar28 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar28 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar27 = (iVar23 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar20 <= iVar27) {
        iVar27 = iVar20;
      }
    }
    puVar7 = (uint *)0x1;
    if (iVar27 == iVar20) goto LAB_140644705;
    uVar22 = 0xffffffff;
    local_238 = (uint *)(param_3 + 0xd);
    do {
      lVar25 = local_210[0xb];
      lVar21 = (longlong)iVar27 * 200;
      FUN_1403257c8(param_2[0xd],lVar21 + lVar25 + 8);
      FUN_1403257c8(param_2[0xd],lVar21 + lVar25 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar25 + lVar21 + 0xb0);
      }
      uVar22 = uVar22 & ~(uint)uVar28;
      puVar8 = (uint *)local_210[0xf];
      if ((uint *)local_210[0xf] == (uint *)0x0) {
        puVar8 = local_238;
      }
      iVar18 = (int)local_210[0x10];
      iVar27 = (int)uVar31;
      lVar25 = (longlong)iVar27;
      uVar17 = puVar8[lVar25] & uVar22;
      if (uVar17 == 0) {
        iVar13 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar13 = iVar18 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar27) {
          iVar14 = iVar27;
        }
        if (iVar27 < iVar13) {
          lVar21 = 0;
          do {
            uVar17 = puVar8[lVar25 + lVar21 + 1];
            if (uVar17 != 0) {
              uVar31 = (ulonglong)(iVar27 + (int)lVar21 + 1);
              uVar22 = 0xffffffff;
              goto LAB_1406446ce;
            }
            iVar23 = iVar23 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar14 - lVar25 != lVar21);
          uVar22 = 0xffffffff;
          iVar27 = iVar14;
        }
        uVar31 = (ulonglong)(iVar27 + 1);
        iVar27 = iVar18;
      }
      else {
LAB_1406446ce:
        uVar28 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar28 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar27 = (iVar23 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar18 <= iVar27) {
          iVar27 = iVar18;
        }
      }
    } while (iVar27 != iVar20);
  }
LAB_140644703:
  puVar7 = (uint *)0x1;
LAB_140644705:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
  while( true ) {
    iVar20 = iVar20 + 0x20;
    uVar22 = puVar8[uVar31 + 1];
    uVar31 = uVar31 + 1;
    if (uVar22 != 0) break;
LAB_1406449ce:
    if (uVar28 == uVar31) goto LAB_140644cec;
  }
LAB_1406449e7:
  uVar28 = (ulonglong)(-uVar22 & uVar22);
  uVar1 = uVar28 * 2 + 1;
  lVar25 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
    }
  }
  uVar22 = (iVar20 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
  if ((int)uVar15 <= (int)uVar22) {
    uVar22 = uVar15;
  }
LAB_140644a0f:
  if ((int)uVar22 < (int)uVar15) {
    local_208 = puVar7 + 0x16;
    uVar15 = 0xffffffff;
    local_1e8 = (longlong *)((ulonglong)local_1e8 & 0xffffffff00000000);
    local_238 = puVar24;
    local_1dc = uVar17;
    do {
      plVar16 = local_230;
      puVar29 = (ulonglong *)((longlong)(int)uVar22 * 0x10 + *(longlong *)puVar24);
      cVar5 = (**(code **)(*(longlong *)local_230[4] + 0x330))((longlong *)local_230[4],puVar29,0);
      if (cVar5 == '\0') {
        puVar19 = puVar29;
        lVar25 = (**(code **)(*(longlong *)plVar16[4] + 800))((longlong *)plVar16[4],puVar29);
        puVar24 = local_238;
        if (lVar25 != 0) {
          local_1e8 = (longlong *)
                      CONCAT44(local_1e8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar19 >> 8),1));
          if ((*puVar29 & 1) == 0 && *puVar29 != 0) {
            FUN_140325a06(local_208,&local_108,puVar29,0);
          }
          goto LAB_140644a6e;
        }
      }
      else {
LAB_140644a6e:
        puVar24 = local_238;
        FUN_140646052(local_238,uVar22);
      }
      plVar16 = local_230;
      uVar15 = uVar15 & ~(uint)uVar28;
      puVar8 = *(uint **)(puVar24 + 8);
      if (*(uint **)(puVar24 + 8) == (uint *)0x0) {
        puVar8 = puVar7 + 6;
      }
      uVar17 = puVar24[10];
      iVar27 = (int)uVar31;
      lVar25 = (longlong)iVar27;
      uVar22 = puVar8[lVar25] & uVar15;
      if (uVar22 == 0) {
        iVar23 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar23 = uVar17 - 1;
        }
        iVar23 = iVar23 >> 5;
        iVar18 = iVar23;
        if (iVar23 < iVar27) {
          iVar18 = iVar27;
        }
        if (iVar23 <= iVar27) break;
        lVar21 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar22 = puVar8[lVar25 + lVar21 + 1];
          if (uVar22 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar18 - lVar25 == lVar21) goto LAB_140644b70;
        }
        uVar31 = (ulonglong)(iVar27 + (int)lVar21 + 1);
        uVar15 = 0xffffffff;
      }
      uVar28 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar28 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uVar22 = (iVar20 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    } while ((int)uVar22 < (int)uVar17);
LAB_140644b70:
    param_2 = local_230;
    if (((ulonglong)local_1e8 & 1) != 0) {
      *(undefined1 *)((longlong)local_230 + 0x49) = 1;
      if (*(char *)((longlong)local_230 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_230[0xb] + 0x210))();
        *(undefined1 *)((longlong)plVar16 + 0x4a) = 1;
        puVar24 = local_238;
      }
      uVar28 = local_120;
      plVar16 = local_210;
      if ((int)local_210[1] != *(int *)((longlong)local_210 + 0x34)) {
        plVar11 = (longlong *)local_210[8];
        if ((longlong *)local_210[8] == (longlong *)0x0) {
          plVar11 = local_1c8;
        }
        iVar20 = *(int *)((longlong)plVar11 + (ulonglong)((int)local_210[9] - 1U & local_1dc) * 4);
        if (iVar20 != -1) {
          do {
            lVar25 = *local_210 + (longlong)iVar20 * 0x10;
            if (*(uint *)(*local_210 + (longlong)iVar20 * 0x10) == local_1dc) goto LAB_140644bcb;
            iVar20 = *(int *)(lVar25 + 8);
          } while (iVar20 != -1);
        }
      }
      lVar25 = 0;
LAB_140644bcb:
      uVar22 = *(uint *)(lVar25 + 4);
      lVar25 = (longlong)(int)uVar22 * 0x78 + *local_1f8;
      lVar21 = (longlong)(int)local_120;
      uVar17 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar17);
      if (local_120._4_4_ < uVar17) {
        FUN_1400cc390(&local_148,uVar28 & 0xffffffff);
        puVar24 = local_238;
      }
      param_2 = local_230;
      puVar8 = local_128;
      if (local_128 == (uint *)0x0) {
        puVar8 = &local_148;
      }
      puVar8[lVar21] = uVar22;
      FUN_1448fcc30(&local_108,local_230[4],*(undefined8 *)(puVar24 + 0x28),
                    (longlong)(int)puVar24[0x2c]);
      param_2[7] = local_1d8;
      param_2[6] = lVar25;
      param_2[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)param_2[8] + 8))((longlong *)param_2[8],param_2);
      FUN_140646250(lVar25,plVar16);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar16 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar16);
      }
      lVar25 = local_90;
      puVar24 = local_238;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar25);
        puVar24 = local_238;
      }
    }
  }
LAB_140644cec:
  uVar17 = (uint)local_218;
  param_3 = local_210;
  puVar8 = local_1c0;
  uVar28 = local_1f0;
  uVar22 = local_21c;
  if ((puVar24[2] == puVar24[0xd]) && (uVar31 = local_218, puVar24[0x16] == puVar24[0x21])) {
LAB_14064495e:
    uVar17 = (uint)uVar31;
    FUN_1456fd4bc(local_200,local_1cc);
  }
  uVar17 = (uint)local_228 & ~uVar17;
  puVar7 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar7 = puVar8;
  }
  iVar20 = (int)param_3[0x10];
  iVar27 = (int)uVar28;
  lVar25 = (longlong)iVar27;
  uVar15 = puVar7[lVar25] & uVar17;
  if (uVar15 == 0) {
    iVar23 = iVar20 + 0x1e;
    if (-1 < iVar20 + -1) {
      iVar23 = iVar20 + -1;
    }
    iVar23 = iVar23 >> 5;
    iVar18 = iVar23;
    if (iVar23 < iVar27) {
      iVar18 = iVar27;
    }
    if (iVar23 <= iVar27) goto LAB_140645ff3;
    lVar21 = 0;
    while( true ) {
      uVar22 = uVar22 + 0x20;
      uVar15 = puVar7[lVar25 + lVar21 + 1];
      if (uVar15 != 0) break;
      lVar21 = lVar21 + 1;
      if (iVar18 - lVar25 == lVar21) goto LAB_140645ff3;
    }
    uVar28 = (ulonglong)(iVar27 + (int)lVar21 + 1);
    uVar17 = 0xffffffff;
  }
  uVar31 = (ulonglong)(-uVar15 & uVar15);
  uVar1 = uVar31 * 2 + 1;
  lVar25 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
    }
  }
  iVar27 = (uVar22 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
  if (iVar20 <= iVar27) goto LAB_140645ff3;
  goto LAB_1406448d9;
}



// FUNCTION 140646052 FUN_140646052 body=95 status=ok
// SIG undefined FUN_140646052(void)

void FUN_140646052(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1406460b2(param_1,param_2,1);
  return;
}



// FUNCTION 1406460b2 FUN_1406460b2 body=138 status=ok
// SIG undefined FUN_1406460b2(void)

void FUN_1406460b2(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14064613c FUN_14064613c body=49 status=ok
// SIG undefined FUN_14064613c(void)

longlong FUN_14064613c(void)

{
  if (DAT_14cbaa990 == 0) {
    FUN_140f50038(&DAT_14cbaa990,&PTR_s__Script_OakGame_14b759688);
  }
  return DAT_14cbaa990;
}



// FUNCTION 14064616e FUN_14064616e body=225 status=ok
// SIG undefined FUN_14064616e(void)

void FUN_14064616e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x78) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x78;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140646250 FUN_140646250 body=138 status=ok
// SIG undefined FUN_140646250(void)

void FUN_140646250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(char *)(param_1 + 100) == '\x01') &&
      (uVar3 = *(uint *)(param_1 + 0x60), uVar3 != 0 && uVar3 != *(uint *)(param_1 + 0x48))) &&
     (lVar1 = *(longlong *)(param_2 + 0x148), lVar1 != 0)) {
    uVar2 = *(uint *)(lVar1 + 0x30);
    uVar3 = uVar2 | 1 << (uVar3 & 0x1f);
    *(uint *)(lVar1 + 0x30) = uVar3;
    if (uVar3 != uVar2) {
      FUN_1406462da();
    }
  }
  if ((*(uint *)(param_1 + 0x48) != 0) && (lVar1 = *(longlong *)(param_2 + 0x148), lVar1 != 0)) {
    uVar3 = *(uint *)(lVar1 + 0x30);
    uVar2 = uVar3 | 1 << (*(uint *)(param_1 + 0x48) & 0x1f);
    *(uint *)(lVar1 + 0x30) = uVar2;
    if (uVar2 != uVar3) {
      FUN_1406462da();
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 100) = 1;
  return;
}



// FUNCTION 1406462da FUN_1406462da body=377 status=ok
// SIG undefined FUN_1406462da(void)

void FUN_1406462da(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((*(char *)(param_1 + 0x34) != '\0') || (*(int *)(param_1 + 0x24) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x20), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_1406463f2;
  plVar3 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar3 == (longlong *)0x0) || ((int)plVar3[2] != *(int *)(param_1 + 0x24))) ||
     (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 || (*plVar3 == 0)))) goto LAB_1406463f2;
  lVar2 = FUN_1401b4c98();
  if (lVar2 == 0) goto LAB_1406463f2;
  FUN_140646454(&local_a0,param_1,FUN_140a993f0);
  local_88 = 0;
  local_80 = 0;
  FUN_14487d8d8(&local_88,&local_a0);
  local_48 = 1;
  FUN_14016fdb0(lVar2,&local_90,&local_88);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  *(undefined8 *)(param_1 + 0x28) = local_90;
  if (local_98 == 0) {
LAB_1406463e4:
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a0 != (undefined8 *)0x0) {
    (**(code **)*local_a0)(local_a0,0);
    FUN_1446efa72(&local_a0,0,0,0x10);
    local_98 = 0;
    goto LAB_1406463e4;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
LAB_1406463f2:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140646454 FUN_140646454 body=415 status=ok
// SIG undefined FUN_140646454(void)

longlong * FUN_140646454(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14064652a:
    *puVar3 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9daed0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14064652a;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9daed0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 140646e0a FUN_140646e0a body=231 status=ok
// SIG undefined FUN_140646e0a(void)

void FUN_140646e0a(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x78;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140646ef2 FUN_140646ef2 body=496 status=ok
// SIG undefined FUN_140646ef2(void)

void FUN_140646ef2(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1406470e4 FUN_1406470e4 body=745 status=ok
// SIG undefined FUN_1406470e4(void)

bool FUN_1406470e4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_1406473b9;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x78;
      } while (lVar11 * 0x78 - lVar12 != 0);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_1406472d3:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_1406472d3;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000140647322;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x000140647322:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_1406473b9;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_1406472ac:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000140647371;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_140647390;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_1406472ac;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_140647390:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x000140647371:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_1406473b9:
  return iVar3 != param_2;
}



// FUNCTION 1406473ce FUN_1406473ce body=723 status=ok
// SIG undefined FUN_1406473ce(void)

undefined8 FUN_1406473ce(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_14064762f;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_14064762f:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1406476a2 FUN_1406476a2 body=1060 status=ok
// SIG undefined FUN_1406476a2(void)

void FUN_1406476a2(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0x78;
    } while ((longlong)iVar3 * 0x78 - lVar13 != 0);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0x78);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0x78);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_140647812;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_140647812:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_140647a95;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_140647a00;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_140647a00:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_140647a95;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_140647a95:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140647ac8 FUN_140647ac8 body=270 status=ok
// SIG undefined FUN_140647ac8(void)

undefined8 FUN_140647ac8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140647bd0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140647bd0;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140647bd0:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140647b7e;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140647b7e;
    }
  }
  uVar6 = 0;
LAB_140647b7e:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140647bd8 FUN_140647bd8 body=585 status=ok
// SIG undefined FUN_140647bd8(void)

void FUN_140647bd8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = *(longlong *)(param_1 + 0x378);
  if (lVar9 != 0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    puVar3 = *(undefined4 **)(lVar9 + 8);
    puVar10 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar10 = puVar3;
    }
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_80,puVar10,1);
    *puVar8 = &PTR_FUN_14b4776f8;
    puVar8[1] = local_80;
    lVar9 = FUN_140391a3c(param_1);
    if (lVar9 == 0) {
      if (puVar8 != (undefined8 *)0x0) {
        FUN_1400020a8(puVar8);
      }
    }
    else {
      FUN_14039144e(lVar9,puVar8);
    }
    lVar9 = *(longlong *)(param_1 + 0x378) + 0x90;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar5 == (longlong *)0x0) {
      FUN_140647e22(uVar4,lVar9);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_140647e22(uVar4,lVar9);
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
    lVar6 = *(longlong *)(param_1 + 0x378);
    plVar5 = (longlong *)(lVar6 + 0xb0);
    lVar9 = lVar6 + 0xc0;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar11 = 0;
    local_50 = lVar9;
    if (*(int *)(lVar6 + 0xd8) != 0) {
      FUN_1449c0562(&local_58);
      iVar11 = *(int *)(lVar6 + 0xd8);
    }
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar7 = local_68._4_4_;
    local_80 = plVar5;
    if ((local_68._4_4_ != iVar11) || (local_68 = uVar4, local_50 != lVar9)) {
      do {
        do {
          local_68 = uVar4;
          lVar6 = *local_80 + (longlong)iVar7 * 0x14;
          FUN_14573e1ce(param_1,lVar6,*(undefined4 *)(lVar6 + 8));
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar7 = local_68._4_4_;
          uVar4 = local_68;
        } while (local_68._4_4_ != iVar11);
      } while ((local_70 != lVar9) || (local_80 != plVar5));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140647e22 FUN_140647e22 body=309 status=ok
// SIG undefined FUN_140647e22(void)

void FUN_140647e22(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  if ((*(longlong *)(param_1 + 0x1e0) == *param_2) && (*(longlong *)(param_1 + 0x1e8) == param_2[1])
     ) {
    iVar2 = *(int *)(param_1 + 0x1f8);
    if (iVar2 == (int)param_2[3]) {
      if (1 < iVar2) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x1f0) + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(param_2[2] + lVar5);
          if (uVar6 != uVar8) break;
          if (uVar6 == 0) {
            return;
          }
LAB_140647f1b:
          lVar5 = lVar5 + 2;
        }
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_140647f1b;
        }
        if (uVar6 != uVar8) goto LAB_140647e40;
      }
    }
    else if ((int)param_2[3] + iVar2 != 1) goto LAB_140647e40;
    return;
  }
LAB_140647e40:
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  lVar5 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1e0) = (int)*param_2;
  *(undefined4 *)(param_1 + 0x1e4) = uVar3;
  *(int *)(param_1 + 0x1e8) = (int)lVar5;
  *(undefined4 *)(param_1 + 0x1ec) = uVar4;
  plVar1 = (longlong *)(param_1 + 0x1f0);
  if (plVar1 != param_2 + 2) {
    iVar2 = (int)param_2[3];
    _Src = (void *)param_2[2];
    *(int *)(param_1 + 0x1f8) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x1fc) == 0) {
      *(undefined4 *)(param_1 + 0x1fc) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  FUN_140647f58(*(undefined8 *)(param_1 + 0x228),(undefined4 *)(param_1 + 0x1e0));
  return;
}



// FUNCTION 140647f58 FUN_140647f58 body=482 status=ok
// SIG undefined FUN_140647f58(void)

void FUN_140647f58(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_118 [32];
  code **local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = FUN_14064813b(param_2);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_c0 = &local_98;
    local_98 = FUN_1449e2820;
    local_b0 = FUN_14081d0ea;
    local_b8 = FUN_14081d0ea;
    local_c8 = &LAB_1489c8acb;
    local_d0 = &LAB_146027b0e;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10000006;
    local_f0 = 8;
    local_f8 = (code **)CONCAT44(local_f8._4_4_,0x128);
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar1 = DAT_14cb907b8;
  plVar3 = (longlong *)DAT_14cb907b8[0x22];
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    plVar3 = (longlong *)plVar1[0x22];
  }
  uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,0);
  FUN_1446f470e(&local_a0,L"GammaCorrectionExponent",1);
  local_40 = local_a0;
  local_38 = 2;
  local_34 = 0xffffffff;
  local_f8 = &local_98;
  local_98 = (code *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_140042bb4(lVar2,&local_40,uVar4,0);
  FUN_14064820e(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  FUN_1406483f2(param_1,*(undefined8 *)(param_1 + 0x30));
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064813b FUN_14064813b body=209 status=ok
// SIG undefined FUN_14064813b(void)

void FUN_14064813b(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    FUN_1418b5738(&local_38);
    *(undefined4 *)param_1 = local_38;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_34;
    *(undefined4 *)(param_1 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
    if ((longlong *)&local_38 == param_1) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[2] != 0) {
        FUN_1400020a8();
      }
      param_1[2] = local_28;
      local_28 = 0;
      *(undefined4 *)(param_1 + 3) = local_20;
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_1c;
    }
  }
  lVar1 = FUN_140007850(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1406481e2;
  }
  lVar1 = 0;
LAB_1406481e2:
  FUN_14090ceee(lVar1,0,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064820e FUN_14064820e body=358 status=ok
// SIG undefined FUN_14064820e(void)

void FUN_14064820e(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_278 [32];
  undefined2 *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_140648376();
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    local_258 = (undefined2 *)0x0;
    uStack_250 = 0;
    FUN_14005eb28(&local_258,0x80);
    local_240 = local_220;
    local_228 = '\0';
    local_230 = &local_20;
    local_248 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
    local_238 = local_240;
    FUN_14005eb5c(&local_248,&local_240);
    if (local_230 <= local_238 + 1) {
      FUN_140213274(&local_240,1);
    }
    *local_238 = 0x20;
    local_238 = local_238 + 1;
    FUN_144750bde(param_2,0,&local_240);
    FUN_1400020e8(&local_258,local_240,(ulonglong)((longlong)local_238 - (longlong)local_240) >> 1);
    if (local_228 == '\x01') {
      FUN_1400020a8(local_240);
    }
    puVar1 = local_258;
    if ((int)uStack_250 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_240,puVar1,1);
    *(undefined2 **)(param_1 + 0xa8) = local_240;
    if (local_258 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140648376 FUN_140648376 body=123 status=ok
// SIG undefined FUN_140648376(void)

void FUN_140648376(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x38) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x98) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001406483e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1406483f2 FUN_1406483f2 body=628 status=ok
// SIG undefined FUN_1406483f2(void)

void FUN_1406483f2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  code *local_a8;
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
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x30) = param_2;
    if (param_2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      FUN_1446f470e(&local_a8,L"UITexture",1);
      local_a0 = CONCAT71(local_a0._1_7_,2);
      local_a0 = CONCAT44(0xffffffff,(undefined4)local_a0);
      FUN_147bbdda6(uVar1,&local_a8);
      uVar6 = 0x3f800000;
      uVar5 = 0x3f800000;
      goto LAB_140648520;
    }
  }
  else {
    FUN_14689c22e(param_2);
    *(longlong *)(param_1 + 0x30) = param_2;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1446f470e(&local_b0,L"UITexture",1);
  FUN_14016d8b0(uVar1,local_b0,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_d0 = &local_a8;
    local_a8 = FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_1489c8acb;
    local_e0 = &LAB_146027b0e;
    local_e8 = L"Engine";
    local_f0 = 0;
    local_f8 = 0x10000006;
    local_100 = 8;
    local_108 = (code **)CONCAT44(local_108._4_4_,0x128);
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar3 = DAT_14cb907b8;
  plVar4 = (longlong *)DAT_14cb907b8[0x22];
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    plVar4 = (longlong *)plVar3[0x22];
  }
  uVar5 = (**(code **)(*plVar4 + 0x2a8))(plVar4,0);
  FUN_1446f470e(&local_b8,L"GammaCorrectionExponent",1);
  local_50 = local_b8;
  local_48 = 2;
  local_44 = 0xffffffff;
  local_108 = &local_a8;
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_140042bb4(uVar1,&local_50,uVar5,0);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x358))();
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x350))();
LAB_140648520:
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = uVar6;
  *(undefined4 *)(lVar2 + 0x24) = uVar5;
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140648668 FUN_140648668 body=62 status=ok
// SIG undefined FUN_140648668(void)

undefined4 FUN_140648668(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (param_2 == '\0') {
    if (cVar1 == '\0') {
      return 0x400ccccd;
    }
  }
  else if (cVar1 != '\0') {
    return 0x3ee8ba2e;
  }
  return 0x3f800000;
}



// FUNCTION 1406486a6 FUN_1406486a6 body=244 status=ok
// SIG undefined FUN_1406486a6(void)

undefined8 FUN_1406486a6(char param_1,char param_2,longlong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_1 == '\0') {
    FUN_1406488b6();
    puVar2 = &DAT_14caac158;
  }
  else {
    uVar3 = 0;
    switch(param_1) {
    case '\x01':
      FUN_140648c0a();
      puVar2 = &DAT_14caac280;
      break;
    case '\x02':
      FUN_140648d26();
      puVar2 = &DAT_14caac3a8;
      break;
    case '\x03':
      FUN_1460cf884();
      puVar2 = &DAT_14caac4d0;
      break;
    default:
      goto switchD_140648716_caseD_4;
    case '\x05':
      FUN_1406489d2();
      puVar2 = &DAT_14caac030;
      break;
    case '\a':
      FUN_140648e42();
      puVar2 = &DAT_14caac5f8;
      break;
    case '\b':
      FUN_1460cfaf8();
      puVar2 = &DAT_14caac720;
      break;
    case '\t':
      FUN_1460cfd6c();
      puVar2 = &DAT_14caac848;
    }
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  if (param_2 == '\0') {
    FUN_14064879a();
    puVar2 = &DAT_14caabf08;
  }
  else {
    FUN_140648aee();
    puVar2 = &DAT_14caabde0;
  }
  bVar1 = puVar2[0x48];
  *(undefined **)(param_3 + 8 + (ulonglong)bVar1 * 8) = puVar2;
  *(undefined4 *)(param_3 + 0x68 + (ulonglong)bVar1 * 4) = 0;
  uVar3 = CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
switchD_140648716_caseD_4:
  return uVar3;
}



// FUNCTION 14064879a FUN_14064879a body=284 status=ok
// SIG undefined FUN_14064879a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14064879a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caabfb0) {
    FUN_144b3d300(&DAT_14caabfb0);
    if (DAT_14caabfb0 == -1) {
      FUN_14573102e();
      FUN_140db5666(&DAT_14caabf08,1,&DAT_14caabea0,L"TSlateMaterialShaderVSfalse",
                    L"/Engine/Private/SlateVertexShader.usf",L"Main",0,1,FUN_14750c526,FUN_14750c4fe
                    ,&LAB_1432b9510,&LAB_14750c4fa,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0);
      _DAT_14caabf08 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b9518);
      _Init_thread_footer(&DAT_14caabfb0);
    }
  }
  return &DAT_14caabf08;
}



// FUNCTION 1406488b6 FUN_1406488b6 body=284 status=ok
// SIG undefined FUN_1406488b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1406488b6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac200) {
    FUN_144b3d300(&DAT_14caac200);
    if (DAT_14caac200 == -1) {
      FUN_145731608();
      FUN_140db5666(&DAT_14caac158,1,&DAT_14caac0f0,L"TSlateMaterialShaderPSDefault",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750c64c,
                    FUN_14750c624,&LAB_1432b9538,&LAB_14750c620,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac158 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b9540);
      _Init_thread_footer(&DAT_14caac200);
    }
  }
  return &DAT_14caac158;
}



// FUNCTION 1406489d2 FUN_1406489d2 body=284 status=ok
// SIG undefined FUN_1406489d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1406489d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac0d8) {
    FUN_144b3d300(&DAT_14caac0d8);
    if (DAT_14caac0d8 == -1) {
      FUN_145731182();
      FUN_140db5666(&DAT_14caac030,1,&DAT_14caabfc8,L"TSlateMaterialShaderPSCustom",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750c5ac,
                    FUN_14750c584,&LAB_1432b9524,&LAB_14750c580,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac030 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b952c);
      _Init_thread_footer(&DAT_14caac0d8);
    }
  }
  return &DAT_14caac030;
}



// FUNCTION 140648aee FUN_140648aee body=284 status=ok
// SIG undefined FUN_140648aee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140648aee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caabe88) {
    FUN_144b3d300(&DAT_14caabe88);
    if (DAT_14caabe88 == -1) {
      FUN_145730d96();
      FUN_140db5666(&DAT_14caabde0,1,&DAT_14caabd78,L"TSlateMaterialShaderVStrue",
                    L"/Engine/Private/SlateVertexShader.usf",L"Main",0,1,FUN_14750c4a0,FUN_14750c478
                    ,&LAB_1432b94fc,&LAB_14750c474,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0);
      _DAT_14caabde0 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b9504);
      _Init_thread_footer(&DAT_14caabe88);
    }
  }
  return &DAT_14caabde0;
}



// FUNCTION 140648c0a FUN_140648c0a body=284 status=ok
// SIG undefined FUN_140648c0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140648c0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac328) {
    FUN_144b3d300(&DAT_14caac328);
    if (DAT_14caac328 == -1) {
      FUN_14573175c();
      FUN_140db5666(&DAT_14caac280,1,&DAT_14caac218,L"TSlateMaterialShaderPSBorder",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750c6ec,
                    FUN_14750c6c4,&LAB_1432b954c,&LAB_14750c6c0,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac280 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b9554);
      _Init_thread_footer(&DAT_14caac328);
    }
  }
  return &DAT_14caac280;
}



// FUNCTION 140648d26 FUN_140648d26 body=284 status=ok
// SIG undefined FUN_140648d26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140648d26(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac450) {
    FUN_144b3d300(&DAT_14caac450);
    if (DAT_14caac450 == -1) {
      FUN_1457318b0();
      FUN_140db5666(&DAT_14caac3a8,1,&DAT_14caac340,L"TSlateMaterialShaderPSGrayscaleFont",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750c78c,
                    FUN_14750c764,&LAB_1432b9560,&LAB_14750c760,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac3a8 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b9568);
      _Init_thread_footer(&DAT_14caac450);
    }
  }
  return &DAT_14caac3a8;
}



// FUNCTION 140648e42 FUN_140648e42 body=284 status=ok
// SIG undefined FUN_140648e42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140648e42(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac6a0) {
    FUN_144b3d300(&DAT_14caac6a0);
    if (DAT_14caac6a0 == -1) {
      FUN_145731a04();
      FUN_140db5666(&DAT_14caac5f8,1,&DAT_14caac590,L"TSlateMaterialShaderPSRoundedBox",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750c8cc,
                    FUN_14750c8a4,&LAB_1432b9588,&LAB_14750c8a0,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac5f8 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b9590);
      _Init_thread_footer(&DAT_14caac6a0);
    }
  }
  return &DAT_14caac5f8;
}



// FUNCTION 140648f5e FUN_140648f5e body=2286 status=ok
// SIG undefined FUN_140648f5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140648f5e(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  undefined1 *local_188;
  code *local_180;
  int local_174;
  ulonglong local_170;
  longlong *local_168;
  longlong *local_160;
  ulonglong local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 *local_128;
  ulonglong local_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  longlong *local_100;
  code *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_140722e22();
  uVar21 = *(uint *)(param_2 + 0xc0);
  uVar17 = (ulonglong)uVar21;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar17);
  }
  local_140 = param_1 + 0x120;
  lVar12 = *(longlong *)(param_1 + 0x1a0);
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    lVar12 = local_140;
  }
  FUN_1401864f9(lVar12,*(undefined4 *)(param_1 + 0x1b0));
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(uint *)(param_1 + 0x1b4) != uVar21) {
    FUN_140649a9e(local_140,uVar21);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  auVar9 = _DAT_1499387d0;
  if (uVar17 != 0) {
    uVar22 = 0;
    dVar6 = (double)DAT_1499387d0;
    dVar7 = DAT_1499387d0._8_8_;
    local_158 = uVar17;
    local_150 = param_2;
    local_148 = param_3;
    do {
      lVar12 = (longlong)(int)uVar22 * 0x80 + *(longlong *)(param_2 + 0xb8);
      FUN_1406498c0(lVar12,&local_108,param_3);
      if (local_108 != (longlong *)0x0) {
        *(int *)(param_1 + 0x1c0) = (int)uVar22 + 1;
        if (*(char *)(lVar12 + 0x14) == '\0') {
          local_168 = (longlong *)(ulonglong)*(uint *)(lVar12 + 0x18);
          local_170 = (ulonglong)(*(uint *)(lVar12 + 0x18) + 1);
        }
        else if (*(char *)(lVar12 + 0x14) == '\x03') {
          (**(code **)(*local_108 + 0x40))(local_108,&local_118);
          local_168 = local_118;
          local_170 = (ulonglong)local_118 >> 0x20;
          if (*(char *)(lVar12 + 0x24) == '\x01') {
            local_168 = (longlong *)(ulonglong)*(uint *)(lVar12 + 0x28);
            if ((int)*(uint *)(lVar12 + 0x28) < (int)local_118) {
              local_168 = (longlong *)((ulonglong)local_118 & 0xffffffff);
            }
            local_170 = (ulonglong)*(uint *)(lVar12 + 0x2c);
            if ((int)*(uint *)(lVar12 + 0x2c) < (int)((ulonglong)local_118 >> 0x20)) {
              local_170 = (ulonglong)local_118 >> 0x20;
            }
          }
          *(uint *)(param_1 + 0x1c8) =
               *(uint *)(param_1 + 0x1c8) & 0xffffff7f |
               (uint)((char)*(uint *)(param_1 + 0x1c8) < '\0' || 1 < (int)local_170 - (int)local_168
                     ) << 7;
          param_3 = local_148;
          uVar17 = local_158;
          param_2 = local_150;
          if ((int)local_170 <= (int)local_168) goto LAB_14064947c;
        }
        else {
          local_168 = (longlong *)0x0;
          local_170 = 1;
        }
        local_174 = (int)local_168;
        local_120 = uVar22;
        do {
          uVar22 = local_120;
          iVar4 = *(int *)(param_1 + 0x1b0);
          *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
            FUN_1481da25a(local_140,iVar4);
          }
          lVar10 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar10 = local_140;
          }
          puVar19 = (undefined8 *)((longlong)iVar4 * 0x80 + lVar10);
          FUN_14064984d(puVar19);
          if (local_100 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_100 + 1) = (int)local_100[1] + 1;
            UNLOCK();
          }
          plVar14 = (longlong *)puVar19[1];
          *puVar19 = local_108;
          puVar19[1] = local_100;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar14 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
          *(int *)(puVar19 + 2) = (int)uVar22;
          *(undefined1 *)((longlong)puVar19 + 0x14) = *(undefined1 *)(lVar12 + 0x14);
          *(int *)(puVar19 + 3) = local_174;
          dVar30 = *(double *)(lVar12 + 0x70);
          dVar2 = *(double *)(lVar12 + 0x68);
          *(float *)((longlong)puVar19 + 0x2c) = (float)*(double *)(lVar12 + 0x60);
          *(float *)(puVar19 + 6) = (float)dVar2;
          *(float *)((longlong)puVar19 + 0x34) = (float)dVar30;
          *(undefined1 *)(puVar19 + 7) = *(undefined1 *)(lVar12 + 0x78);
          dVar30 = *(double *)(lVar12 + 0x40);
          dVar2 = *(double *)(lVar12 + 0x38);
          *(float *)((longlong)puVar19 + 0x3c) = (float)*(double *)(lVar12 + 0x30);
          *(float *)(puVar19 + 8) = (float)dVar2;
          *(float *)((longlong)puVar19 + 0x44) = (float)dVar30;
          auVar3 = *(undefined1 (*) [16])(lVar12 + 0x48);
          auVar31 = divpd(auVar3,auVar9);
          auVar32._8_8_ = 0;
          auVar32._0_8_ = *(double *)(lVar12 + 0x58);
          auVar32 = divpd(auVar32,auVar9);
          auVar31 = roundpd(auVar31,auVar31,3);
          auVar32 = roundpd(auVar32,auVar32,3);
          dVar28 = (auVar3._0_8_ - auVar31._0_8_ * dVar6) * 0.008726646259971648;
          dVar29 = (auVar3._8_8_ - auVar31._8_8_ * dVar7) * 0.008726646259971648;
          dVar30 = (*(double *)(lVar12 + 0x58) - auVar32._0_8_ * dVar6) * 0.008726646259971648;
          dVar2 = (0.0 - auVar32._8_8_ * dVar7) * 0.008726646259971648;
          dVar25 = sin(dVar28);
          dVar26 = sin(dVar29);
          dVar27 = sin(dVar30);
          sin(dVar2);
          dVar28 = cos(dVar28);
          dVar29 = cos(dVar29);
          dVar30 = cos(dVar30);
          cos(dVar2);
          iVar4 = local_174;
          *(float *)(puVar19 + 10) = (float)(dVar25 * dVar26 * dVar30 - dVar28 * dVar29 * dVar27);
          *(float *)((longlong)puVar19 + 0x54) =
               (float)(-(dVar25 * dVar29 * dVar30) - dVar28 * dVar26 * dVar27);
          *(float *)(puVar19 + 0xb) =
               (float)(-(dVar29 * dVar25 * dVar27) + dVar26 * dVar28 * dVar30);
          *(float *)((longlong)puVar19 + 0x5c) =
               (float)(dVar26 * dVar25 * dVar27 + dVar29 * dVar28 * dVar30);
          if (*(byte *)(lVar12 + 0x14) - 2 < 2) {
            *(undefined4 *)((longlong)puVar19 + 0x1c) = *(undefined4 *)(lVar12 + 0x20);
            if (*(char *)(lVar12 + 0x14) == '\x03') {
              iVar8 = (int)local_170;
              (**(code **)(*local_108 + 0x48))(local_108,&local_118,local_174);
              *(int *)(puVar19 + 5) = (int)uStack_110;
              puVar19[4] = local_118;
              if (iVar4 < iVar8 + -1) {
                uVar13 = *(undefined4 *)(puVar19 + 4);
              }
              else {
                uVar13 = 0;
              }
              uVar24 = *(undefined4 *)((longlong)puVar19 + 0x24);
              *(undefined4 *)(puVar19 + 4) = uVar13;
              if (local_174 <= (int)local_168) {
                uVar24 = 0xbf800000;
              }
              *(undefined4 *)((longlong)puVar19 + 0x24) = uVar24;
              param_3 = local_148;
              uVar17 = local_158;
              param_2 = local_150;
            }
          }
          else if (*(byte *)(lVar12 + 0x14) == 1) {
            (**(code **)(*local_108 + 8))(local_108,*(undefined4 *)(lVar12 + 0x1c));
          }
          local_118 = (longlong *)0x0;
          uStack_110 = 0;
          (**(code **)(*local_108 + 0x38))(local_108,&local_118);
          FUN_14017a7ae(param_2,param_3,&local_118);
          if ((longlong)(int)uStack_110 != 0) {
            plVar14 = local_118 + (int)uStack_110;
            puVar15 = puVar19 + 0xc;
            plVar23 = local_118;
            do {
              uVar13 = 0xffffffff;
              if ((longlong)*(int *)(param_1 + 0x108) != 0) {
                lVar10 = *plVar23;
                lVar16 = *(longlong *)(param_1 + 0x100);
                lVar20 = (longlong)*(int *)(param_1 + 0x108) << 3;
                lVar18 = 0;
                do {
                  lVar5 = *(longlong *)(lVar16 + lVar18 * 8);
                  if (lVar10 == lVar5) {
LAB_1406493fe:
                    uVar13 = (undefined4)lVar18;
                    break;
                  }
                  if (lVar5 != 0) {
                    if (DAT_14caec470 == 0) {
                      local_190 = &local_f8;
                      local_f8 = FUN_1417df956;
                      local_180 = FUN_14081d0ea;
                      local_188 = &LAB_1463eaa20;
                      local_198 = &LAB_147bbd9ea;
                      local_1a0 = FUN_1401cf6d7;
                      local_1a8 = L"Engine";
                      local_1b0 = 0;
                      local_1b8 = 0x10000000;
                      local_1c0 = 8;
                      local_1c8 = 0x330;
                      local_160 = plVar14;
                      local_138 = lVar16;
                      local_130 = lVar10;
                      local_128 = puVar15;
                      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                                    FUN_1463eb22e);
                      plVar14 = local_160;
                      puVar15 = local_128;
                      lVar10 = local_130;
                      lVar16 = local_138;
                    }
                    if (((*(int *)(DAT_14caec470 + 0x38) <=
                          *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                          (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) &&
                       (*(longlong *)(lVar5 + 0x110) == lVar10)) goto LAB_1406493fe;
                  }
                  lVar18 = lVar18 + 1;
                  lVar20 = lVar20 + -8;
                } while (lVar20 != 0);
              }
              uVar17 = local_158;
              iVar4 = *(int *)(puVar19 + 0xf);
              *(uint *)(puVar19 + 0xf) = iVar4 + 1U;
              if (*(uint *)((longlong)puVar19 + 0x7c) < iVar4 + 1U) {
                local_160 = plVar14;
                FUN_1447de67e(puVar15,iVar4);
                plVar14 = local_160;
              }
              puVar11 = (undefined8 *)puVar19[0xe];
              if ((undefined8 *)puVar19[0xe] == (undefined8 *)0x0) {
                puVar11 = puVar15;
              }
              *(undefined4 *)((longlong)puVar11 + (longlong)iVar4 * 4) = uVar13;
              plVar23 = plVar23 + 1;
              param_3 = local_148;
              param_2 = local_150;
            } while (plVar23 != plVar14);
          }
          if (local_118 != (longlong *)0x0) {
            FUN_1400020a8(local_118);
          }
          local_174 = local_174 + 1;
          uVar22 = local_120;
        } while (local_174 != (int)local_170);
      }
LAB_14064947c:
      plVar14 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_100 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar21;
    } while (uVar21 != (uint)uVar17);
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14064984d FUN_14064984d body=114 status=ok
// SIG undefined FUN_14064984d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14064984d(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x3f80000040000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x34) = DAT_14c846338;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 **)((longlong)param_1 + 0x3c) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  uVar1 = _DAT_14c846348;
  param_1[10] = ram0x00014c846340;
  param_1[0xb] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0x400000000;
  return;
}



// FUNCTION 1406498c0 FUN_1406498c0 body=314 status=ok
// SIG undefined FUN_1406498c0(void)

longlong * FUN_1406498c0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  FUN_14017a903(param_1,param_3,&local_30);
  lVar3 = local_38;
  if ((local_30 == (longlong *)0x0) || (*(longlong *)(param_3 + 8) == 0)) {
    if (local_38 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14adff890;
    plVar1 = plVar4 + 2;
    FUN_14017ac5a(plVar1,lVar3);
    local_48 = plVar1;
    local_40 = plVar4;
    FUN_1406499fc(&local_48,plVar1);
    plVar1 = local_40;
    *param_2 = (longlong)local_48;
    param_2[1] = (longlong)local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_40)(local_40);
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
  }
  else {
    (**(code **)(*local_30 + 0x10))
              (local_30,param_2,*(undefined8 *)(*(longlong *)(param_3 + 8) + 0x100));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1406499fc FUN_1406499fc body=162 status=ok
// SIG undefined FUN_1406499fc(void)

void FUN_1406499fc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_140649a3b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_140649a3b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140649a3b:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140649a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140649a9e FUN_140649a9e body=201 status=ok
// SIG undefined FUN_140649a9e(void)

void FUN_140649a9e(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (1 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x100) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 8]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    uVar1 = (uint)(uVar2 >> 7);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar4 = uVar1;
    }
  }
  if (uVar4 != *(uint *)(param_1 + 0x94)) {
    *(uint *)(param_1 + 0x94) = uVar4;
    FUN_140649b68(param_1,*(undefined4 *)(param_1 + 0x90),uVar4);
    return;
  }
  return;
}



// FUNCTION 140649b68 FUN_140649b68 body=141 status=ok
// SIG undefined FUN_140649b68(void)

void FUN_140649b68(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 7);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x80);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 7);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x80);
  return;
}



// FUNCTION 140649bf6 FUN_140649bf6 body=369 status=ok
// SIG undefined FUN_140649bf6(void)

void FUN_140649bf6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
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
  if (param_1 + -0x438 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + -0x418);
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146395584;
        local_48 = &LAB_147a0ba80;
        local_50 = &LAB_14575ccce;
        local_58 = L"Engine";
        local_60 = 0x40000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(*(undefined8 *)(param_1 + -0x418),CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1
                     );
      }
    }
    plVar3 = *(longlong **)(param_1 + -0x58);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(param_1 + -0x438);
      *(longlong **)(param_1 + -0x58) = plVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140649c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 200))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 140649d68 FUN_140649d68 body=63 status=ok
// SIG undefined FUN_140649d68(void)

void FUN_140649d68(longlong param_1)

{
  memset(*(void **)(param_1 + 0x9a0),0,(longlong)*(int *)(param_1 + 0x9ac) << 2);
  memset(*(void **)(param_1 + 0x9f8),0,(longlong)*(int *)(param_1 + 0xa04) << 2);
  return;
}



// FUNCTION 140649da8 FUN_140649da8 body=139 status=ok
// SIG undefined FUN_140649da8(void)

void FUN_140649da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140649e34(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140649e34 FUN_140649e34 body=264 status=ok
// SIG undefined FUN_140649e34(void)

undefined8 * FUN_140649e34(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_140649e58;
  FUN_140649f3e(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x203,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_140649e58;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x000140649f1a:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x000140649f1a;
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_140649e58:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140649f3e FUN_140649f3e body=120 status=ok
// SIG undefined FUN_140649f3e(void)

undefined8 * FUN_140649f3e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1fc8) {
    FUN_144b3d300(&DAT_14cad1fc8);
    if (DAT_14cad1fc8 == -1) {
      FUN_1446ddc76(&DAT_14cad1fc0,"OnActorBeginOverlap",1);
      _Init_thread_footer(&DAT_14cad1fc8);
    }
  }
  *param_2 = DAT_14cad1fc0;
  return param_2;
}



// FUNCTION 140649fb6 FUN_140649fb6 body=663 status=ok
// SIG undefined FUN_140649fb6(void)

double * FUN_140649fb6(longlong *param_1,double *param_2,undefined8 param_3,double *param_4,
                      float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  FUN_14064a24e(param_1,param_2,param_3,param_4,param_5);
  if ((*(char *)((longlong)param_1 + 0x422c) == '\x01') && (param_1[0x842] != 0)) {
    fVar9 = *(float *)(param_1 + 0x846);
    if (fVar9 < 0.0) {
      lVar8 = (**(code **)(*param_1 + 0x4a0))(param_1);
      fVar9 = ABS(*(float *)(lVar8 + 0x3c8));
    }
    fVar11 = ABS(*(float *)((longlong)param_1 + 0x4244));
    if ((0.0 < *(float *)(param_1 + 0x849)) && (fVar10 = fVar11 - fVar9, 1e-08 <= fVar10 * fVar10))
    {
      param_5 = *(float *)(param_1 + 0x849) * param_5;
      if (1.0 <= param_5) {
        param_5 = 1.0;
      }
      if (param_5 <= 0.0) {
        param_5 = 0.0;
      }
      fVar11 = fVar9 + fVar10 * param_5;
    }
    *(float *)(param_1 + 0x846) = fVar11;
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    if ((double)(fVar11 * fVar11) < dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2) {
      dVar12 = *param_4;
      dVar4 = param_4[1];
      dVar5 = param_4[2];
      dVar6 = dVar5 * dVar5 + dVar12 * dVar12 + dVar4 * dVar4;
      if (((dVar6 != 1.0) || (dVar13 = dVar12, dVar14 = dVar4, dVar7 = dVar5, NAN(dVar6))) &&
         (dVar13 = DAT_14c8464e0, dVar14 = DAT_14c8464e8, dVar7 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar13 = dVar12 * dVar6;
        dVar14 = dVar4 * dVar6;
        dVar7 = dVar5 * dVar6;
      }
      dVar12 = (double)fVar11;
      if (dVar12 < dVar3 * dVar7 + dVar1 * dVar13 + dVar2 * dVar14) {
        dVar4 = (dVar3 - DAT_14c8464f0) * dVar7 +
                (dVar1 - DAT_14c8464e0) * dVar13 + (dVar2 - DAT_14c8464e8) * dVar14;
        *param_2 = dVar13 * dVar12 + (dVar1 - dVar4 * dVar13);
        param_2[1] = dVar14 * dVar12 + (dVar2 - dVar14 * dVar4);
        param_2[2] = dVar7 * dVar12 + (dVar3 - dVar7 * dVar4);
      }
    }
  }
  return param_2;
}



// FUNCTION 14064a24e FUN_14064a24e body=840 status=ok
// SIG undefined FUN_14064a24e(void)

double * FUN_14064a24e(longlong *param_1,double *param_2,double *param_3,double *param_4,
                      float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] == '\x01') {
      plVar11 = param_1 + 0x642;
      goto LAB_14064a41d;
    }
LAB_14064a2b7:
    bVar9 = false;
  }
  else {
    plVar11 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_14064a41d:
    lVar10 = FUN_140153468(plVar11);
    if (((lVar10 == 0) || ((*(byte *)(plVar11 + 0x53) & 2) != 0)) || (param_1[0x22] == 0))
    goto LAB_14064a2b7;
    if (param_1[0x62e] == 0) {
      bVar9 = true;
      if ((char)param_1[0x696] == '\x01') {
        plVar11 = param_1 + 0x642;
        goto LAB_14064a460;
      }
    }
    else {
      plVar11 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_14064a460:
      bVar9 = true;
      if ((*(byte *)((longlong)plVar11 + 0x299) & 1) != 0) {
        param_2[2] = (double)plVar11[0x45];
        dVar1 = (double)plVar11[0x44];
        *param_2 = (double)plVar11[0x43];
        param_2[1] = dVar1;
        return param_2;
      }
    }
  }
  dVar4 = *param_4;
  dVar14 = param_4[1];
  dVar5 = param_4[2];
  if ((((dVar4 == 0.0) && (!NAN(dVar4))) && ((dVar14 == 0.0 && ((!NAN(dVar14) && (dVar5 == 0.0))))))
     && (!NAN(dVar5))) goto LAB_14064a3d4;
  dVar13 = (double)param_5;
  dVar15 = dVar5 * dVar5 + dVar4 * dVar4 + dVar14 * dVar14;
  if (((dVar15 != 1.0) || (dVar6 = dVar5, dVar7 = dVar14, dVar8 = dVar4, NAN(dVar15))) &&
     (dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar15)) {
    dVar15 = 1.0 / SQRT(dVar15);
    dVar6 = dVar5 * dVar15;
    dVar7 = dVar14 * dVar15;
    dVar8 = dVar4 * dVar15;
  }
  dVar1 = dVar1 + dVar13 * dVar4;
  dVar2 = dVar2 + dVar14 * dVar13;
  dVar3 = dVar3 + dVar5 * dVar13;
  lVar10 = (**(code **)(*param_1 + 0x4a0))(param_1);
  fVar12 = ABS(*(float *)(lVar10 + 0x3c8));
  if (bVar9) {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') goto LAB_14064a3a2;
      param_1 = param_1 + 0x642;
    }
    else {
      param_1 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    fVar12 = (float)FUN_14064a65a(param_1,fVar12);
  }
LAB_14064a3a2:
  dVar4 = (double)fVar12;
  if (dVar4 < dVar3 * dVar6 + dVar1 * dVar8 + dVar2 * dVar7) {
    dVar14 = (dVar3 - DAT_14c8464f0) * dVar6 +
             (dVar1 - DAT_14c8464e0) * dVar8 + (dVar2 - DAT_14c8464e8) * dVar7;
    dVar3 = (dVar3 - dVar6 * dVar14) + dVar6 * dVar4;
    dVar2 = (dVar2 - dVar7 * dVar14) + dVar7 * dVar4;
    dVar1 = (dVar1 - dVar14 * dVar8) + dVar8 * dVar4;
  }
LAB_14064a3d4:
  *param_2 = dVar1;
  param_2[1] = dVar2;
  param_2[2] = dVar3;
  return param_2;
}



// FUNCTION 14064a596 FUN_14064a596 body=195 status=ok
// SIG undefined FUN_14064a596(void)

longlong FUN_14064a596(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    lVar2 = *(longlong *)(lVar3 + 0x118);
  }
  else {
    if (((((*(int *)(lVar3 + 0x11c) != 0) && (uVar1 = *(uint *)(lVar3 + 0x118), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(lVar3 + 0x11c))))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      return *plVar4;
    }
    lVar3 = *(longlong *)(lVar3 + 0xb0);
    if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(), lVar3 == 0)) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar3 + 0x118);
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar3 = FUN_14572cb46(lVar3);
  return lVar3;
}



// FUNCTION 14064a65a FUN_14064a65a body=82 status=ok
// SIG undefined FUN_14064a65a(void)

undefined8 FUN_14064a65a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar2 = (float)param_2;
  lVar1 = FUN_140153468();
  if (lVar1 != 0) {
    lVar1 = FUN_140153468(param_1);
    if (*(char *)(lVar1 + 0x6e8) == '\x01') {
      fVar2 = fVar2 * *(float *)(param_1 + 0x1ec);
    }
    else if (*(char *)(lVar1 + 0x6e8) == '\0') {
      fVar2 = *(float *)(param_1 + 0x1ec);
      uVar3 = 0;
    }
  }
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 14064a6b2 FUN_14064a6b2 body=57 status=ok
// SIG undefined FUN_14064a6b2(void)

void FUN_14064a6b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7350 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7350 = FUN_140002ddd(FUN_1465cb6ca,uVar1,L"OakBodyNodeSettings_ElementSwitch");
  }
  return;
}



// FUNCTION 14064a6f8 FUN_14064a6f8 body=136 status=ok
// SIG undefined FUN_14064a6f8(void)

longlong FUN_14064a6f8(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb24608 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb24608,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064a78e FUN_14064a78e body=606 status=ok
// SIG undefined FUN_14064a78e(void)

undefined8 * FUN_14064a78e(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064a7de;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064a7de:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064a85c;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064a85c:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = (&DAT_14ca11f6c)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar13 + 2) = 0x1313;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 6;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064a9f9 FUN_14064a9f9 body=606 status=ok
// SIG undefined FUN_14064a9f9(void)

undefined8 * FUN_14064a9f9(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064aa49;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064aa49:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064aac7;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064aac7:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11f68 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x1212;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 5;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064ac64 FUN_14064ac64 body=606 status=ok
// SIG undefined FUN_14064ac64(void)

undefined8 * FUN_14064ac64(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064acb4;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064acb4:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064ad32;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064ad32:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11f58 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0xe0e;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 1;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064aec2 FUN_14064aec2 body=53 status=ok
// SIG undefined FUN_14064aec2(void)

void FUN_14064aec2(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x248) - *(int *)(param_2 + 0x274) <
      *(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x274)) {
    FUN_14064aef8(param_2,param_1);
    return;
  }
  FUN_14064aef8(param_1);
  return;
}



// FUNCTION 14064aef8 FUN_14064aef8 body=740 status=ok
// SIG undefined FUN_14064aef8(void)

undefined8 FUN_14064aef8(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
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
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x268);
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x250);
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_14064b0bb;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar5 * 0x10);
      if (lVar13 != 0) {
        if (DAT_14cac6e60 == 0) {
          local_70 = &local_50;
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_142b47bc4;
          local_78 = &LAB_1478989f1;
          local_80 = &LAB_146391124;
          local_88 = L"Engine";
          local_90 = 0x10000000000;
          local_98 = 0x10000005;
          local_a0 = 0x10;
          local_a8 = 0x620;
          local_58 = param_2;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          param_2 = local_58;
        }
        if ((((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
            (0 < *(int *)(lVar13 + 0x408))) &&
           (cVar4 = FUN_14064b1de(lVar13,param_2), cVar4 != '\0')) {
          uVar7 = 1;
          goto LAB_14064b0bd;
        }
      }
      uVar12 = uVar12 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x250);
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar5 = (int)uVar15;
      lVar13 = (longlong)iVar5;
      uVar10 = puVar6[lVar13] & uVar12;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar14 = 0;
          do {
            uVar10 = puVar6[lVar13 + lVar14 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar14 + 1);
              uVar12 = 0xffffffff;
              goto LAB_14064b08c;
            }
            iVar11 = iVar11 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar13 != lVar14);
          uVar12 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_14064b08c:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_14064b0bb:
  uVar7 = 0;
LAB_14064b0bd:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14064b1de FUN_14064b1de body=166 status=ok
// SIG undefined FUN_14064b1de(void)

undefined8 FUN_14064b1de(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (0 < (longlong)*(int *)(param_1 + 0x408))) {
    lVar3 = *(longlong *)(param_1 + 0x400);
    lVar5 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0xe4 + lVar5);
      if (((((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + 0xe0 + lVar5), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) &&
          ((plVar4 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar4 != (longlong *)0x0 && ((int)plVar4[2] == iVar1)))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
          ((*plVar4 != 0 && (*(longlong *)(*plVar4 + 0xa8) == param_2)))))) {
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
      lVar5 = lVar5 + 0x108;
    } while ((longlong)*(int *)(param_1 + 0x408) * 0x108 != lVar5);
  }
  return 0;
}



// FUNCTION 14064b284 FUN_14064b284 body=224 status=ok
// SIG undefined FUN_14064b284(void)

void FUN_14064b284(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined1 local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    plVar3 = (longlong *)(param_1 + 0x30);
    uVar6 = 0;
    bVar4 = false;
    iVar2 = iVar1;
    do {
      uVar6 = (ulonglong)(int)uVar6;
      plVar5 = (longlong *)(*plVar3 + uVar6 * 0x50 + 0x20);
      while (*plVar5 != param_2) {
        uVar6 = uVar6 + 1;
        plVar5 = plVar5 + 10;
        if ((longlong)iVar2 <= (longlong)uVar6) {
          if (!bVar4) goto LAB_14064b2f3;
          goto LAB_14064b2e8;
        }
      }
      FUN_14064b366(plVar3,uVar6 & 0xffffffff);
      iVar2 = *(int *)(param_1 + 0x38);
      bVar4 = true;
    } while ((int)uVar6 < iVar2);
LAB_14064b2e8:
    FUN_14064b420(plVar3);
    iVar2 = *(int *)(param_1 + 0x38);
LAB_14064b2f3:
    if (iVar2 < iVar1) {
      plVar3 = (longlong *)FUN_14064b53c();
      (**(code **)(*plVar3 + 0x40))(plVar3);
      local_38 = &local_50;
      local_48 = 0;
      local_40 = FUN_1438bada8;
      local_50 = param_1;
      FUN_14032f414();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14064b366 FUN_14064b366 body=185 status=ok
// SIG undefined FUN_14064b366(void)

void FUN_14064b366(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *_Dst;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  _Dst = (longlong *)(lVar3 + (longlong)(int)param_2 * 0x50);
  plVar4 = *(longlong **)(lVar3 + 0x38 + (longlong)(int)param_2 * 0x50);
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
  if (_Dst[2] != 0) {
    FUN_1400020a8();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove(_Dst,(void *)(lVar3 + (longlong)(iVar5 - iVar6) * 0x50),(longlong)iVar6 * 0x50);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14064b420 FUN_14064b420 body=64 status=ok
// SIG undefined FUN_14064b420(void)

void FUN_14064b420(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14064b460(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14064b460 FUN_14064b460 body=219 status=ok
// SIG undefined FUN_14064b460(void)

ulonglong FUN_14064b460(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x50)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x50;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x19a) {
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
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 14064b53c FUN_14064b53c body=296 status=ok
// SIG undefined FUN_14064b53c(void)

undefined8 FUN_14064b53c(void)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb27848) {
    FUN_144b3d300(&DAT_14cb27848);
    if (DAT_14cb27848 == -1) {
      local_20 = "EnhancedInput";
      local_18 = 0xd;
      local_14 = 0;
      uVar1 = FUN_14001a6c0(&local_20,1);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c874a20) {
        FUN_144b3d300(&DAT_14c874a20);
        if (DAT_14c874a20 == -1) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
      }
      DAT_14cb27840 = FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,1);
      _Init_thread_footer(&DAT_14cb27848);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14cb27840;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064b666 FUN_14064b666 body=22 status=ok
// SIG undefined FUN_14064b666(void)

undefined8 FUN_14064b666(undefined8 param_1)

{
  FUN_14064b67c();
  return param_1;
}



// FUNCTION 14064b67c FUN_14064b67c body=127 status=ok
// SIG undefined FUN_14064b67c(void)

undefined8 * FUN_14064b67c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  lVar3 = (longlong)iVar1;
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _Src = (void *)*param_2;
    lVar2 = lVar3 * 2;
    lVar4 = 0;
    do {
      if (*(short *)((longlong)_Src + lVar4 * 2) == 0x2e) {
        if ((int)lVar4 != -1) {
          FUN_144a63a7c(param_2,param_1,0);
          return param_1;
        }
        break;
      }
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + -2;
    } while (lVar2 != 0);
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar1;
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar3 * 2);
  }
  return param_1;
}



// FUNCTION 14064b708 FUN_14064b708 body=609 status=ok
// SIG undefined FUN_14064b708(void)

undefined8 * FUN_14064b708(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064b758;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064b758:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064b7d6;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064b7d6:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11fec + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x3333;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 0xd;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064b976 FUN_14064b976 body=609 status=ok
// SIG undefined FUN_14064b976(void)

undefined8 * FUN_14064b976(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064b9c6;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064b9c6:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064ba44;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064ba44:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11fe0 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x3030;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 10;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064bbe0 FUN_14064bbe0 body=3254 status=ok
// SIG undefined FUN_14064bbe0(void)

void FUN_14064bbe0(char *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1b8 [44];
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  float *local_180;
  uint local_178;
  float local_174;
  float *local_170;
  uint local_168;
  float local_164;
  float *local_160;
  uint local_158;
  float local_154;
  float *local_150;
  uint local_148;
  float local_144;
  float *local_140;
  uint local_138;
  float local_134;
  float *local_130;
  uint local_128;
  float local_124;
  float *local_120;
  uint local_118;
  float local_114;
  float *local_110;
  uint local_108;
  float local_104;
  float *local_100;
  uint local_f8;
  float local_f4;
  undefined4 *local_f0;
  uint local_e8;
  undefined4 local_e4;
  undefined4 *local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  uint local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  undefined4 *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14064c898(local_c0,param_1);
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_c8 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_d0 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_d0 = &local_c4;
      local_c8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_c8 = 1;
      local_d0 = (undefined4 *)
                 ((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                 (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_d8 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_e0 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_e0 = &local_d4;
      local_d8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_d8 = 1;
      local_e0 = (undefined4 *)
                 ((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                 (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_e8 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_f0 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_f0 = &local_e4;
      local_e8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_e8 = 1;
      local_f0 = (undefined4 *)
                 ((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) + *(longlong *)(lVar8 + 0x70) +
                 (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_f8 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_100 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_100 = &local_f4;
      local_f8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_f8 = 1;
      local_100 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_108 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_110 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_110 = &local_104;
      local_108 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_108 = 1;
      local_110 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_118 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_120 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_120 = &local_114;
      local_118 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_118 = 1;
      local_120 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_128 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_130 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_130 = &local_124;
      local_128 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_128 = 1;
      local_130 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_138 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_140 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_140 = &local_134;
      local_138 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_138 = 1;
      local_140 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_148 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_150 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_150 = &local_144;
      local_148 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_148 = 1;
      local_150 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_158 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_160 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_160 = &local_154;
      local_158 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_158 = 1;
      local_160 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_168 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_170 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_170 = &local_164;
      local_168 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_168 = 1;
      local_170 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar10 = *(int *)(param_1 + 0x30);
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar10);
    local_178 = (uint)bVar5;
    *(int *)(param_1 + 0x30) = iVar10 + 1;
    local_180 = (float *)((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar5 * 4 +
                         *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 8));
  }
  else {
    puVar7 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar6 = *puVar7;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar7 + 1;
    uVar9 = uVar6 & 0x7fff;
    if (uVar9 == 0x7fff) {
      local_180 = &local_174;
      local_178 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x80);
      local_178 = 1;
      local_180 = (float *)((ulonglong)(uVar9 * *(int *)(lVar8 + 0x80)) +
                            *(longlong *)(lVar8 + 0x70) + (longlong)*(int *)(lVar8 + 0x4c) * 4);
    }
  }
  uVar2 = *local_b8;
  uVar3 = local_b8[1];
  uVar4 = local_b8[2];
  dVar15 = *(double *)(local_b8 + 4);
  dVar16 = *(double *)(local_b8 + 6);
  dVar17 = *(double *)(local_b8 + 8);
  dVar12 = sin(dVar15 * 0.01745329238474369);
  dVar13 = sin(dVar16 * 0.01745329238474369);
  dVar14 = sin(dVar17 * 0.01745329238474369);
  sin(0.0);
  dVar15 = cos(dVar15 * 0.01745329238474369);
  dVar16 = cos(dVar16 * 0.01745329238474369);
  dVar17 = cos(dVar17 * 0.01745329238474369);
  cos(0.0);
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    iVar10 = 0;
    do {
      *local_d0 = uVar2;
      local_d0 = local_d0 + (int)local_c8;
      *local_e0 = uVar3;
      local_e0 = local_e0 + (int)local_d8;
      *local_f0 = uVar4;
      local_f0 = local_f0 + (int)local_e8;
      *local_100 = (float)(dVar15 * dVar16);
      local_100 = local_100 + (int)local_f8;
      *local_110 = (float)(dVar13 * dVar15);
      local_110 = local_110 + (int)local_108;
      *local_120 = (float)dVar12;
      local_120 = local_120 + (int)local_118;
      *local_130 = -(float)(dVar12 * dVar17 * dVar16 + dVar13 * dVar14);
      local_130 = local_130 + (int)local_128;
      *local_140 = (float)(dVar16 * dVar14 - dVar13 * dVar12 * dVar17);
      local_140 = local_140 + (int)local_138;
      *local_150 = (float)(dVar15 * dVar17);
      local_150 = local_150 + (int)local_148;
      *local_160 = (float)(dVar12 * dVar14 * dVar16 - dVar13 * dVar17);
      local_160 = local_160 + (int)local_158;
      *local_170 = (float)(dVar12 * dVar14 * dVar13 + dVar16 * dVar17);
      pfVar1 = local_180 + (int)local_178;
      local_170 = local_170 + (int)local_168;
      *local_180 = (float)(-dVar14 * dVar15);
      iVar10 = iVar10 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_18c = uVar4;
      local_188 = uVar3;
      local_184 = uVar2;
      local_180 = pfVar1;
    } while (iVar10 < *piVar11);
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064c898 FUN_14064c898 body=148 status=ok
// SIG undefined FUN_14064c898(void)

void FUN_14064c898(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 14064c939 FUN_14064c939 body=609 status=ok
// SIG undefined FUN_14064c939(void)

undefined8 * FUN_14064c939(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064c989;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064c989:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064ca07;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064ca07:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11fd8 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x2e2e;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 8;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064cba7 FUN_14064cba7 body=609 status=ok
// SIG undefined FUN_14064cba7(void)

undefined8 * FUN_14064cba7(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064cbf7;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064cbf7:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064cc75;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064cc75:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11fe4 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x3131;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 0xb;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064ce08 FUN_14064ce08 body=120 status=ok
// SIG undefined FUN_14064ce08(void)

void FUN_14064ce08(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_1403c7716();
  if (lVar1 != 0) {
    uVar3 = FUN_14064d13e(param_1);
    lVar2 = FUN_14008e0ae(lVar1);
    *(undefined4 *)(lVar2 + 0x58) = uVar3;
    FUN_14020a6cc(lVar2 + 0x50,1);
    uVar3 = FUN_14064d002(param_1);
    lVar1 = FUN_14008e0ae(lVar1);
    *(undefined4 *)(lVar1 + 100) = uVar3;
    FUN_14020a6cc(lVar1 + 0x5c,1);
    return;
  }
  return;
}



// FUNCTION 14064ce80 FUN_14064ce80 body=155 status=ok
// SIG undefined FUN_14064ce80(void)

undefined8 FUN_14064ce80(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x14) == param_2) {
          FUN_14064cf1c(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14064cf1c FUN_14064cf1c body=91 status=ok
// SIG undefined FUN_14064cf1c(void)

void FUN_14064cf1c(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_14064cf78(param_1,param_2,1);
  return;
}



// FUNCTION 14064cf78 FUN_14064cf78 body=138 status=ok
// SIG undefined FUN_14064cf78(void)

void FUN_14064cf78(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14064d002 FUN_14064d002 body=314 status=ok
// SIG undefined FUN_14064d002(void)

float FUN_14064d002(longlong param_1)

{
  float fVar1;
  float fVar2;
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
  local_58 = param_1 + 0xd0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  fVar2 = 0.0;
  local_88 = (longlong *)(param_1 + 0xc0);
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      fVar2 = fVar2 + *(float *)(*local_88 + 8 + (longlong)iStack_6c * 0x14);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  fVar1 = 0.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar1 * *(float *)(param_1 + 0x140);
}



// FUNCTION 14064d13e FUN_14064d13e body=397 status=ok
// SIG undefined FUN_14064d13e(void)

float FUN_14064d13e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 == 0) {
    uVar11 = 1;
    uVar7 = 0;
    iVar8 = 0;
    iVar4 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x80);
    }
    uVar9 = *puVar3;
    if (uVar9 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar7 = 0;
      uVar11 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar11 = uVar7;
      }
      iVar8 = 0;
      do {
        if (uVar11 == uVar7) {
          fVar15 = 0.0;
          goto LAB_14064d2a3;
        }
        iVar8 = iVar8 + 0x20;
        uVar9 = puVar3[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar7 = 0;
      iVar8 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  fVar15 = 0.0;
  if (iVar4 < iVar2) {
    puVar3 = (uint *)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x90) != (uint *)0x0) {
      puVar3 = *(uint **)(param_1 + 0x90);
    }
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar6 = iVar6 >> 5;
    uVar9 = 0xffffffff;
    do {
      fVar15 = fVar15 + *(float *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)iVar4 * 0x14);
      uVar9 = ~(uint)uVar11 & uVar9;
      iVar4 = (int)uVar7;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar3[lVar12] & uVar9;
      if (uVar5 == 0) {
        iVar10 = iVar6;
        if (iVar6 < iVar4) {
          iVar10 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar13 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = puVar3[lVar12 + lVar13 + 1];
          if (uVar5 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar12 == lVar13) goto LAB_14064d2a3;
        }
        uVar7 = (ulonglong)(iVar4 + (int)lVar13 + 1);
        uVar9 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar11 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar2);
  }
LAB_14064d2a3:
  fVar14 = 0.0;
  if (0.0 <= fVar15) {
    fVar14 = fVar15;
  }
  return fVar14 * *(float *)(param_1 + 0x134);
}



// FUNCTION 14064d2d8 FUN_14064d2d8 body=609 status=ok
// SIG undefined FUN_14064d2d8(void)

undefined8 * FUN_14064d2d8(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c0d38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_14064d328;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_14064d328:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_14064d3a6;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_14064d3a6:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11fdc + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x2f2f;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 0x11;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 9;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar12 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 14064d53a FUN_14064d53a body=33 status=ok
// SIG undefined FUN_14064d53a(void)

void FUN_14064d53a(longlong param_1)

{
  FUN_14064d852();
  FUN_14064d55c(param_1 + 0x120);
  return;
}



// FUNCTION 14064d55c FUN_14064d55c body=74 status=ok
// SIG undefined FUN_14064d55c(void)

void FUN_14064d55c(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  
  *(undefined1 *)(param_1 + 0x120) = 1;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar8 = 0;
    if ((byte)*(int *)(param_1 + 0x78) < 4) {
      uVar8 = (undefined1)(0x1000001 >> ((byte)(*(int *)(param_1 + 0x78) << 3) & 0x1f));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0xc70) = uVar8;
    lVar3 = *(longlong *)(param_1 + 0xe8);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x4f0);
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x880))) &&
         (lVar4 = *(longlong *)(lVar3 + 0x40), lVar4 != 0)) {
        *(undefined1 *)(lVar3 + 0xc30) = 1;
        lVar6 = lVar3 + 0x4f8;
        if (*(longlong *)(lVar3 + 0x878) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x878);
        }
        FUN_14064d746(lVar3 + 0xc38,(longlong)iVar1 * 0x38 + lVar6);
        iVar1 = *(int *)(lVar4 + 0x388);
        if (0 < (longlong)iVar1) {
          uVar9 = 0;
          do {
            if (((*(ulonglong *)(lVar3 + 0xc60) >> (uVar9 & 0x3f) & 1) != 0) &&
               (lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x380) + uVar9 * 8), lVar6 != 0)) {
              iVar2 = *(int *)(lVar6 + 0x18);
              if ((-1 < (longlong)iVar2) &&
                 ((iVar2 < *(int *)(lVar3 + 0x78) &&
                  (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar2 * 8),
                  plVar5 != (longlong *)0x0)))) {
                lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
                lVar7 = FUN_14064d6a4();
                if ((lVar7 != 0) &&
                   ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
                    (*(longlong *)
                      (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                     lVar7 + 0x30)))) {
                  (**(code **)(*plVar5 + 0xb0))(plVar5);
                }
              }
            }
            uVar9 = uVar9 + 1;
          } while ((longlong)iVar1 != uVar9);
        }
      }
      return;
    }
  }
  return;
}



// FUNCTION 14064d5a6 FUN_14064d5a6 body=254 status=ok
// SIG undefined FUN_14064d5a6(void)

void FUN_14064d5a6(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(param_1 + 0x4f0);
  if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x880))) &&
     (lVar3 = *(longlong *)(param_1 + 0x40), lVar3 != 0)) {
    *(undefined1 *)(param_1 + 0xc30) = 1;
    lVar5 = param_1 + 0x4f8;
    if (*(longlong *)(param_1 + 0x878) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x878);
    }
    FUN_14064d746(param_1 + 0xc38,(longlong)iVar1 * 0x38 + lVar5);
    iVar1 = *(int *)(lVar3 + 0x388);
    if (0 < (longlong)iVar1) {
      uVar7 = 0;
      do {
        if (((*(ulonglong *)(param_1 + 0xc60) >> (uVar7 & 0x3f) & 1) != 0) &&
           (lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x380) + uVar7 * 8), lVar5 != 0)) {
          iVar2 = *(int *)(lVar5 + 0x18);
          if ((-1 < (longlong)iVar2) &&
             ((iVar2 < *(int *)(param_1 + 0x78) &&
              (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8),
              plVar4 != (longlong *)0x0)))) {
            lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar6 = FUN_14064d6a4();
            if ((lVar6 != 0) &&
               ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30)))) {
              (**(code **)(*plVar4 + 0xb0))(plVar4);
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)iVar1 != uVar7);
    }
  }
  return;
}



// FUNCTION 14064d6a4 FUN_14064d6a4 body=57 status=ok
// SIG undefined FUN_14064d6a4(void)

void FUN_14064d6a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22e30 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22e30 = FUN_140002ddd(FUN_14643ba8b,uVar1,L"GpsResultsNode");
  }
  return;
}



// FUNCTION 14064d6de FUN_14064d6de body=102 status=ok
// SIG undefined FUN_14064d6de(void)

void FUN_14064d6de(void)

{
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_31;
  local_20 = &local_30;
  local_30 = &LAB_14388842c;
  local_10 = &local_20;
  local_18 = FUN_1400ef576;
  FUN_14480914e();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064d746 FUN_14064d746 body=268 status=ok
// SIG undefined FUN_14064d746(void)

undefined8 * FUN_14064d746(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == *(byte *)(param_2 + 4)) {
    puVar7 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar7 = (undefined8 *)*param_2;
    }
    puVar6 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      puVar6 = (undefined8 *)*param_1;
    }
    uVar5 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar5);
    if (pcVar3 == (code *)0x0) {
      memcpy(puVar6,puVar7,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
    }
    else {
      (*pcVar3)();
    }
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar7 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar7 = (undefined8 *)*param_1;
      }
      (*pcVar3)(puVar7);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    bVar1 = *(byte *)(param_2 + 4);
    uVar2 = *(ushort *)(param_2 + 3);
    *(ushort *)(param_1 + 3) = uVar2;
    puVar6 = param_1;
    puVar7 = param_2;
    if (0x18 < uVar2) {
      puVar6 = (undefined8 *)FUN_14001cc68(uVar2,0);
      *param_1 = puVar6;
      puVar7 = (undefined8 *)*param_2;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar3 == (code *)0x0) {
      memcpy(puVar6,puVar7,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar3)();
    }
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  return param_1;
}



// FUNCTION 14064d852 FUN_14064d852 body=236 status=ok
// SIG undefined FUN_14064d852(void)

void FUN_14064d852(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_140cad146();
  lVar3 = *(longlong *)(param_1 + 0x48);
  if ((((((*(uint *)(lVar3 + 0x19c) & 0xfffffffe) != 2) && (*(int *)(param_1 + 0x100) != 0)) &&
       (uVar2 = *(uint *)(param_1 + 0xfc), -1 < (int)uVar2)) &&
      (((int)uVar2 < DAT_14c9647dc &&
       (plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0)))) &&
     (((int)plVar7[2] == *(int *)(param_1 + 0x100) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
       (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0)))))) {
    (**(code **)(*plVar4 + 0xc38))(plVar4,CONCAT71((int7)((ulonglong)plVar7 >> 8),1));
  }
  plVar7 = *(longlong **)(param_1 + 0xf0);
  if (plVar7 != (longlong *)0x0) {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if ((*(longlong *)(param_1 + 0xe8) != 0) && ((*(uint *)(lVar3 + 0x19c) & 0xfffffffe) != 2)) {
      FUN_140c50aa0(*(longlong *)(param_1 + 0xe8),param_1 + 0xd8);
    }
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014064d93a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14064d948 FUN_14064d948 body=781 status=ok
// SIG undefined FUN_14064d948(void)

ulonglong FUN_14064d948(longlong param_1,int *param_2,int param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  int iVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  uint local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_14064dc56(param_1 + 0x40);
    if (0 < *(int *)(param_1 + 0x30)) {
      unaff_RBP = 0;
      local_60 = param_1 + 0x78;
      lVar10 = 0;
      local_68 = param_1 + 0x40;
      do {
        lVar9 = *(longlong *)(param_1 + 0x28);
        FUN_140133a0c(local_68,local_58);
        puVar6 = local_50;
        uVar5 = local_58[0];
        puVar1 = (undefined4 *)(lVar9 + unaff_RBP);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *local_50 = *puVar1;
        local_50[1] = uVar2;
        local_50[2] = uVar3;
        local_50[3] = uVar4;
        local_50[4] = (int)lVar10;
        local_50[5] = 0xffffffff;
        unaff_R12 = (ulonglong)local_58[0];
        uVar8 = FUN_1447addd0(local_50,0x10);
        uVar12 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74);
        iVar7 = 1;
        if (3 < uVar12) {
          uVar11 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar12 < 1) || (iVar7 <= *(int *)(param_1 + 0x88))) {
          uVar8 = *(int *)(param_1 + 0x88) - 1U & uVar8;
          puVar6[6] = uVar8;
          lVar9 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar9 = local_60;
          }
          puVar6[5] = *(undefined4 *)
                       (lVar9 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar8) * 4
                       );
          lVar9 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(param_1 + 0x80) == 0) {
            lVar9 = local_60;
          }
          *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar8) * 4) =
               uVar5;
        }
        else {
          *(int *)(param_1 + 0x88) = iVar7;
          FUN_140b87d48(local_68);
        }
        lVar10 = lVar10 + 1;
        unaff_RBP = unaff_RBP + 0x48;
      } while (lVar10 < *(int *)(param_1 + 0x30));
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar7 = FUN_1447addd0(param_2,0x10);
    lVar10 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x80);
    }
    iVar7 = *(int *)(lVar10 + ((longlong)iVar7 & (longlong)*(int *)(param_1 + 0x88) - 1U) * 4);
    while (iVar13 = iVar7, iVar13 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x40);
      lVar9 = (longlong)iVar13 * 0x1c;
      iVar7 = *(int *)(lVar10 + 0x14 + lVar9);
      if ((((*(int *)(lVar10 + lVar9) == *param_2) && (*(int *)(lVar10 + 4 + lVar9) == param_2[1]))
          && (*(int *)(lVar10 + 8 + lVar9) == param_2[2])) &&
         (*(int *)(lVar10 + 0xc + lVar9) == param_2[3])) {
        uVar11 = CONCAT71((int7)(unaff_R12 >> 8),1);
        do {
          lVar10 = (longlong)*(int *)(lVar10 + 0x10 + (longlong)iVar13 * 0x1c);
          if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar10 * 0x48) == param_3) {
            lVar10 = *(longlong *)(param_1 + 0x28) + lVar10 * 0x48;
            lVar9 = FUN_1401fe4bc(lVar10 + 0x18);
            uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),
                              (*(byte *)(lVar10 + 0x40) ^ 1) & (byte)uVar11);
            if (lVar9 != 0) {
              iVar13 = *(int *)(param_4 + 0x10);
              *(uint *)(param_4 + 0x10) = iVar13 + 1U;
              if (*(uint *)(param_4 + 0x14) < iVar13 + 1U) {
                FUN_14571f162(param_4,iVar13);
              }
              lVar10 = *(longlong *)(param_4 + 8);
              if (*(longlong *)(param_4 + 8) == 0) {
                lVar10 = param_4;
              }
              *(longlong *)(lVar10 + (longlong)iVar13 * 8) = lVar9;
            }
          }
          else {
            uVar11 = uVar11 & 0xffffffff;
          }
          do {
            iVar13 = iVar7;
            if (iVar13 == -1) goto LAB_14064da82;
            lVar10 = *(longlong *)(param_1 + 0x40);
            lVar9 = (longlong)iVar13 * 0x1c;
            iVar7 = *(int *)(lVar10 + 0x14 + lVar9);
          } while (((*(int *)(lVar10 + lVar9) != *param_2) ||
                   (*(int *)(lVar10 + 4 + lVar9) != param_2[1])) ||
                  ((*(int *)(lVar10 + 8 + lVar9) != param_2[2] ||
                   (*(int *)(lVar10 + 0xc + lVar9) != param_2[3]))));
          uVar11 = uVar11 & 0xffffffff;
        } while( true );
      }
    }
  }
LAB_14064da82:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14064dc56 FUN_14064dc56 body=68 status=ok
// SIG undefined FUN_14064dc56(void)

void FUN_14064dc56(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14064dc9a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140411364(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14064dc9a FUN_14064dc9a body=332 status=ok
// SIG undefined FUN_14064dc9a(void)

void FUN_14064dc9a(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
             0xffffffff;
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



// FUNCTION 14064dde8 FUN_14064dde8 body=211 status=ok
// SIG undefined FUN_14064dde8(void)

undefined4 * FUN_14064dde8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
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
  undefined8 uVar14;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  param_1[7] = param_2[7];
  param_1[8] = uVar11;
  param_1[9] = uVar12;
  param_1[10] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar2 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_14064debc(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 * 0x58);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar14;
  uVar3 = param_2[0x17];
  uVar4 = param_2[0x18];
  uVar5 = param_2[0x19];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar3;
  param_1[0x18] = uVar4;
  param_1[0x19] = uVar5;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar1 = param_2[0x1c];
  pvVar2 = *(void **)(param_2 + 0x1a);
  param_1[0x1c] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_14880c328(param_1 + 0x1a,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1a),pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14064debc FUN_14064debc body=330 status=ok
// SIG undefined FUN_14064debc(void)

void FUN_14064debc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14064df2a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14064df2a:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14064e006 FUN_14064e006 body=96 status=ok
// SIG undefined FUN_14064e006(void)

undefined8 * FUN_14064e006(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b696b50;
  param_1[0x88] = &PTR_FUN_14b6a0c50;
  FUN_140280878(param_1 + 0x19d);
  FUN_14064e066(param_1 + 0x88);
  FUN_14064ee12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14064e066 FUN_14064e066 body=1907 status=ok
// SIG undefined FUN_14064e066(void)

void FUN_14064e066(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14a7b0ba0;
  if (param_1[0x113] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x111] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10b] != 0) {
    FUN_1400020a8();
  }
  FUN_144922684(param_1[0x109],*(undefined4 *)(param_1 + 0x10a));
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e926(param_1 + 0xff,0);
  if (param_1[0x103] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xff] != 0) {
    FUN_1400020a8();
  }
  FUN_144959a9a(param_1[0xfd],*(undefined4 *)(param_1 + 0xfe));
  if (param_1[0xfd] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e8e6(param_1[0xfa],*(undefined4 *)(param_1 + 0xfb));
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e88e(param_1[0xf8],*(undefined4 *)(param_1 + 0xf9));
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e88e(param_1[0xf6],*(undefined4 *)(param_1 + 0xf7));
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e8ba(param_1[0xf4],*(undefined4 *)(param_1 + 0xf5));
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xee] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xed) = 0;
  if (param_1[0xec] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f41a(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xe3) = 0;
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f452(param_1 + 0xda);
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xd5];
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
  if (*(char *)((longlong)param_1 + 0x621) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x621) = 0;
  }
  FUN_1448262fc(param_1[0xb6],*(undefined4 *)(param_1 + 0xb7));
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb5) = 0;
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xad) = 0;
  if (*(int *)((longlong)param_1 + 0x56c) != 0) {
    FUN_14472eb64(param_1 + 0xac,0);
  }
  param_1[0xb2] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x58c)) {
    *(undefined4 *)((longlong)param_1 + 0x58c) = 0x80;
    FUN_1446efbd8(param_1 + 0xae,0);
  }
  if (param_1[0xb0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  puVar5 = param_1 + 0xa2;
  lVar4 = -0xf0;
  do {
    *(undefined4 *)(puVar5 + 9) = 0;
    if (puVar5[8] != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(puVar5);
    puVar5 = puVar5 + -10;
    lVar4 = lVar4 + 0x50;
  } while (lVar4 != 0);
  lVar4 = 0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar4 + 0x460) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc3f6(param_1 + 0x75);
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc42e(param_1 + 0x6b);
  FUN_1448262fc(param_1[0x69],*(undefined4 *)(param_1 + 0x6a));
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (*(int *)((longlong)param_1 + 0x2ec) != 0) {
    FUN_14472eb64(param_1 + 0x5c,0);
  }
  param_1[0x62] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x61) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x30c)) {
    *(undefined4 *)((longlong)param_1 + 0x30c) = 0x80;
    FUN_1446efbd8(param_1 + 0x5e,0);
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar4 + 0x2d0) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  lVar4 = 0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar4 + 0x2b0) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  lVar4 = 0;
  do {
    *(undefined4 *)((longlong)param_1 + lVar4 + 0x288) = 0;
    if (*(longlong *)((longlong)param_1 + lVar4 + 0x280) != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)((longlong)param_1 + lVar4 + 0x240);
    FUN_14064e9a0(plVar3,0);
    if (*(longlong *)((longlong)param_1 + lVar4 + 0x260) != 0) {
      FUN_1400020a8();
    }
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x50;
  } while (lVar4 != -0xa0);
  lVar4 = 0;
  do {
    FUN_144803279(*(undefined8 *)((longlong)param_1 + lVar4 + 0x1e0),
                  *(undefined4 *)((longlong)param_1 + lVar4 + 0x1e8));
    if (*(longlong *)((longlong)param_1 + lVar4 + 0x1e0) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_14064ec02(param_1 + 0x30,0);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14064e7da FUN_14064e7da body=55 status=ok
// SIG undefined FUN_14064e7da(void)

void FUN_14064e7da(longlong *param_1)

{
  FUN_14064e812(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14064e812 FUN_14064e812 body=123 status=ok
// SIG undefined FUN_14064e812(void)

void FUN_14064e812(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14064e88e FUN_14064e88e body=44 status=ok
// SIG undefined FUN_14064e88e(void)

void FUN_14064e88e(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14064e8ba FUN_14064e8ba body=44 status=ok
// SIG undefined FUN_14064e8ba(void)

void FUN_14064e8ba(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14064e8e6 FUN_14064e8e6 body=63 status=ok
// SIG undefined FUN_14064e8e6(void)

void FUN_14064e8e6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14064e926 FUN_14064e926 body=121 status=ok
// SIG undefined FUN_14064e926(void)

void FUN_14064e926(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14064e9a0 FUN_14064e9a0 body=609 status=ok
// SIG undefined FUN_14064e9a0(void)

void FUN_14064e9a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_14064e9d5;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *param_1;
      if (*(longlong *)(lVar12 + 0x38 + (longlong)iVar6 * 0x88) != 0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + (longlong)iVar6 * 0x88;
      if (*(longlong *)(lVar12 + 0x20) != 0) {
        FUN_1400020a8();
      }
      FUN_144803279(*(longlong *)(lVar12 + 8),*(undefined4 *)(lVar12 + 0x10));
      if (*(longlong *)(lVar12 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_14064e9d5;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14064e9d5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144a544ac(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14064ec02 FUN_14064ec02 body=527 status=ok
// SIG undefined FUN_14064ec02(void)

void FUN_14064ec02(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_14064ec35;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_14064ec35;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14064ec35:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14064ee12 FUN_14064ee12 body=1543 status=ok
// SIG undefined FUN_14064ee12(void)

void FUN_14064ee12(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14a7ae030;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x61;
  puVar2 = param_1 + 99;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = puVar2;
  if (*(int *)(param_1 + 0x66) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = plVar1;
  if (iStack_44 < *(int *)(local_50 + 3)) {
    do {
      lVar3 = *local_80;
      lVar4 = (longlong)iStack_64;
      FUN_144760e21(*(undefined8 *)(lVar3 + 8 + lVar4 * 0x28),
                    *(undefined4 *)(lVar3 + 0x10 + lVar4 * 0x28));
      if (*(longlong *)(lVar3 + 8 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 3));
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (*(int *)((longlong)param_1 + 0x314) != 0) {
    FUN_140549ad6(plVar1,0);
  }
  param_1[0x67] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x334)) {
    *(undefined4 *)((longlong)param_1 + 0x334) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)((longlong)param_1 + 0x2c4) != 0) {
    FUN_140411364(param_1 + 0x57,0);
  }
  param_1[0x5d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2e4)) {
    *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x80;
    FUN_1446efbd8(param_1 + 0x59,0);
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_1448262fc(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14499183d(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc3f6(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc42e(param_1 + 0x3c);
  FUN_1448262fc(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f489(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f4b5(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f4e1(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f41a(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f452(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14064f58a(param_1 + 0x13);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14064f41a FUN_14064f41a body=55 status=ok
// SIG undefined FUN_14064f41a(void)

void FUN_14064f41a(longlong *param_1)

{
  FUN_14064f5e4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14064f452 FUN_14064f452 body=55 status=ok
// SIG undefined FUN_14064f452(void)

void FUN_14064f452(longlong *param_1)

{
  FUN_14064f50e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14064f489 FUN_14064f489 body=44 status=ok
// SIG undefined FUN_14064f489(void)

void FUN_14064f489(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14064f4b5 FUN_14064f4b5 body=44 status=ok
// SIG undefined FUN_14064f4b5(void)

void FUN_14064f4b5(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14064f4e1 FUN_14064f4e1 body=44 status=ok
// SIG undefined FUN_14064f4e1(void)

void FUN_14064f4e1(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14064f50e FUN_14064f50e body=123 status=ok
// SIG undefined FUN_14064f50e(void)

void FUN_14064f50e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14064f58a FUN_14064f58a body=90 status=ok
// SIG undefined FUN_14064f58a(void)

void FUN_14064f58a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14064f5e4 FUN_14064f5e4 body=414 status=ok
// SIG undefined FUN_14064f5e4(void)

void FUN_14064f5e4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x38 + lVar5 * 0x60) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(lVar2 + lVar5 * 0x60 + 0x28);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar4 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14064f784 FUN_14064f784 body=1751 status=ok
// SIG undefined FUN_14064f784(void)

void FUN_14064f784(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  bool bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  longlong lVar19;
  float *pfVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float local_f0;
  float local_ec [43];
  
  lVar16 = DAT_14ca973d0;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar15 = 0;
  }
  else if (iVar4 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar15 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar15 = 1;
  }
  if (0 < *(int *)(param_1 + 0x3f0)) {
    iVar4 = *(int *)(lVar16 + uVar15 * 4);
    lVar16 = 0;
    do {
      lVar17 = *(longlong *)(param_1 + 1000);
      lVar19 = lVar16 * 0x13c10;
      fVar22 = *(float *)(lVar17 + 0x2b9c + lVar19);
      cVar9 = FUN_140047f5c(*(undefined8 *)(lVar17 + 8 + lVar19));
      if ((cVar9 != '\0') && (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x4d18))) {
        lVar17 = lVar17 + lVar19;
        fVar23 = 65536.0;
        if (1.0 < *(double *)(lVar17 + 0x8a8) || *(double *)(lVar17 + 0x8a8) == 1.0) {
          if (*(char *)(DAT_14c9ca9f0 + 1) == '\x01') {
            dVar6 = ABS(*(double *)(lVar17 + 0xa00)) *
                    SQRT(*(double *)(lVar17 + 0x1070) * *(double *)(lVar17 + 0x1070) +
                         *(double *)(lVar17 + 0x1060) * *(double *)(lVar17 + 0x1060) +
                         *(double *)(lVar17 + 0x1068) * *(double *)(lVar17 + 0x1068));
            dVar7 = *(double *)(lVar17 + 0x1058);
            if (*(double *)(lVar17 + 0x1058) <= dVar6) {
              dVar7 = dVar6;
            }
            bVar8 = true;
            fVar23 = (float)dVar7;
          }
          else {
            bVar8 = false;
          }
        }
        else {
          bVar8 = false;
        }
        lVar19 = 0;
        fVar25 = 3.4028235e+38;
        bVar18 = true;
        do {
          bVar14 = bVar18;
          if ((0.0 < *(float *)(lVar17 + 0x1202c + lVar19 * 0xc) * fVar22) &&
             (fVar24 = *(float *)(lVar17 + 0x12028 + lVar19 * 0xc) + fVar23, fVar24 <= fVar25)) {
            fVar25 = fVar24;
          }
          lVar19 = 1;
          bVar18 = false;
        } while (bVar14);
        fVar23 = fVar25;
        if ((!bVar8) &&
           (fVar23 = (float)*(double *)(lVar17 + 0x1058),
           fVar25 <= (float)*(double *)(lVar17 + 0x1058))) {
          fVar23 = fVar25;
        }
        lVar19 = 0;
        pfVar20 = local_ec;
        bVar8 = true;
        do {
          bVar18 = bVar8;
          fVar24 = (fVar23 - *(float *)(lVar17 + 0x12028 + lVar19 * 0xc)) *
                   -*(float *)(lVar17 + 0x12030 + lVar19 * 0xc);
          if (126.0 <= fVar24) {
            fVar24 = 126.0;
          }
          if (fVar24 <= -125.0) {
            fVar24 = -125.0;
          }
          fVar1 = *(float *)(lVar17 + 0x1202c + lVar19 * 0xc);
          fVar24 = (float)exp2f(fVar24);
          *pfVar20 = fVar24 * fVar1 * fVar22;
          lVar19 = 1;
          pfVar20 = &local_f0;
          bVar8 = false;
        } while (bVar18);
        *(float *)(lVar17 + 0x11fa0) = local_ec[0];
        *(undefined4 *)(lVar17 + 0x11fa4) = *(undefined4 *)(lVar17 + 0x12030);
        *(float *)(lVar17 + 0x11fa8) = fVar25;
        *(undefined4 *)(lVar17 + 0x11fac) = *(undefined4 *)(lVar17 + 0x12044);
        *(float *)(lVar17 + 0x11fb0) = local_f0;
        *(undefined4 *)(lVar17 + 0x11fb4) = *(undefined4 *)(lVar17 + 0x1203c);
        *(float *)(lVar17 + 0x11fb8) = *(float *)(lVar17 + 0x12038) * fVar22;
        *(undefined4 *)(lVar17 + 0x11fbc) = *(undefined4 *)(lVar17 + 0x12034);
        *(undefined8 *)(lVar17 + 0x11fc0) = *(undefined8 *)(lVar17 + 0x12050);
        *(undefined4 *)(lVar17 + 0x11fc8) = *(undefined4 *)(lVar17 + 0x12058);
        *(undefined4 *)(lVar17 + 0x11fcc) = *(undefined4 *)(lVar17 + 0x12040);
        uVar26 = 0;
        if (*(longlong *)(lVar17 + 0x12078) != 0) {
          uVar26 = 0x3f800000;
        }
        *(float *)(lVar17 + 0x11fd0) = fVar22 * *(float *)(lVar17 + 0x1202c);
        *(undefined4 *)(lVar17 + 0x11fd4) = *(undefined4 *)(lVar17 + 0x12028);
        *(undefined4 *)(lVar17 + 0x11fd8) = uVar26;
        *(undefined4 *)(lVar17 + 0x11fdc) = *(undefined4 *)(lVar17 + 0x1204c);
        fVar22 = cosf(*(float *)(lVar17 + 0x12080));
        fVar23 = sinf(*(float *)(lVar17 + 0x12080));
        *(float *)(lVar17 + 0x12010) = fVar23;
        *(float *)(lVar17 + 0x12014) = fVar22;
        *(longlong *)(lVar17 + 0x124d0) = *(longlong *)(lVar17 + 0x12078);
        *(undefined1 *)(lVar17 + 0x12018) = *(undefined1 *)(lVar17 + 0x120dc);
        *(undefined4 *)(lVar17 + 0x1201c) = *(undefined4 *)(lVar17 + 0x120e0);
        fVar22 = *(float *)(lVar17 + 0x12088);
        fVar23 = *(float *)(lVar17 + 0x12084) - fVar22;
        if (fVar23 <= 1e-05) {
          fVar23 = 1e-05;
        }
        *(undefined4 *)(lVar17 + 0x11ff0) = *(undefined4 *)(lVar17 + 0x12048);
        *(undefined8 *)(lVar17 + 0x11fe0) = *(undefined8 *)(lVar17 + 0x120cc);
        *(undefined8 *)(lVar17 + 0x11fe8) = *(undefined8 *)(lVar17 + 0x120d4);
        fVar25 = 1.0;
        if (*(longlong *)(lVar17 + 0x12078) != 0) {
          iVar11 = FUN_147d6f1b2();
          fVar25 = (float)iVar11;
          fVar22 = *(float *)(lVar17 + 0x12088);
        }
        *(double *)(lVar17 + 0x124d8) = (double)(1.0 / fVar23);
        *(double *)(lVar17 + 0x124e0) = (double)(-fVar22 * (1.0 / fVar23));
        *(double *)(lVar17 + 0x124e8) = (double)fVar25;
        *(undefined8 *)(lVar17 + 0x124f4) = *(undefined8 *)(lVar17 + 0x12060);
        *(undefined8 *)(lVar17 + 0x12500) = 0;
        *(undefined8 *)(lVar17 + 0x12508) = 0;
        *(undefined8 *)(lVar17 + 0x12510) = 0;
        lVar19 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x36b8);
        if ((lVar19 == 0) &&
           (lVar19 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3698), lVar19 == 0)) {
          uVar10 = 0;
        }
        else {
          lVar5 = *(longlong *)(lVar19 + 0x28);
          uVar2 = *(undefined8 *)(lVar5 + 0x50);
          uVar15 = *(ulonglong *)(lVar5 + 0x90);
          uVar3 = *(undefined8 *)(lVar5 + 0x70);
          *(int *)(lVar17 + 0x12500) = (int)uVar2;
          *(uint *)(lVar17 + 0x12504) = (uint)((ulonglong)uVar2 >> 0x20) ^ 0x80000000;
          *(int *)(lVar17 + 0x12508) = (int)uVar3;
          *(uint *)(lVar17 + 0x1250c) = (uint)((ulonglong)uVar3 >> 0x20) ^ 0x80000000;
          *(ulonglong *)(lVar17 + 0x12510) = uVar15 ^ 0x8000000000000000;
          fVar22 = (float)FUN_14064fe5c(*(longlong *)(lVar19 + 0x28) + 0x40);
          *(float *)(lVar17 + 0x12518) = fVar22 * *(float *)(lVar17 + 0x12068);
          *(float *)(lVar17 + 0x1251c) = *(float *)(lVar17 + 0x1206c) * fVar22;
          *(float *)(lVar17 + 0x12520) = *(float *)(lVar17 + 0x12070) * fVar22;
          *(float *)(lVar17 + 0x12524) = *(float *)(lVar17 + 0x12074) * fVar22;
          uVar10 = 1;
        }
        *(undefined1 *)(lVar17 + 0x124f0) = uVar10;
        *(undefined1 *)(lVar17 + 0x11ff4) = *(undefined1 *)(lVar17 + 0x1208c);
        *(undefined4 *)(lVar17 + 0x11ff8) = *(undefined4 *)(lVar17 + 0x120c4);
        uVar21 = -(uint)(0.0 < *(float *)(lVar17 + 0x120c8));
        *(uint *)(lVar17 + 0x11ffc) =
             ~uVar21 & 0x4cbebc20 | (uint)(1.0 / *(float *)(lVar17 + 0x120c8)) & uVar21;
        *(undefined4 *)(lVar17 + 0x1200c) = *(undefined4 *)(lVar17 + 0x12090);
        uVar26 = DAT_14c846338;
        *(undefined8 *)(lVar17 + 0x12000) = DAT_14c846330;
        *(undefined4 *)(lVar17 + 0x12008) = uVar26;
        if (0 < iVar4) {
          *(undefined8 *)(lVar17 + 0x124f4) = 0x3f800000;
          *(undefined8 *)(lVar17 + 0x11fc0) = *(undefined8 *)(lVar17 + 0x120a4);
          *(undefined4 *)(lVar17 + 0x11fc8) = *(undefined4 *)(lVar17 + 0x120ac);
          *(undefined8 *)(lVar17 + 0x12000) = *(undefined8 *)(lVar17 + 0x12094);
          *(undefined4 *)(lVar17 + 0x12008) = *(undefined4 *)(lVar17 + 0x1209c);
          *(undefined4 *)(lVar17 + 0x12518) = 0;
          *(undefined4 *)(lVar17 + 0x1251c) = 0;
          *(undefined4 *)(lVar17 + 0x12520) = 0;
          *(undefined4 *)(lVar17 + 0x12524) = 0x3f800000;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x3f0));
  }
  return;
}



// FUNCTION 14064fe5c FUN_14064fe5c body=321 status=ok
// SIG undefined FUN_14064fe5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14064fe5c(float *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845098) {
    FUN_144b3d300(&DAT_14c845098);
    if (DAT_14c845098 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14c845090 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.LegacyLuminanceFactors",1);
      _Init_thread_footer(&DAT_14c845098);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8450ac) {
    FUN_144b3d300(&DAT_14c8450ac);
    if (DAT_14c8450ac == -1) {
      iVar1 = (**(code **)(*DAT_14c845090 + 0xb0))();
      if (iVar1 == 0) {
        uVar2 = FUN_14029dc1a();
        FUN_145731c30(uVar2,&DAT_14c84509c);
      }
      else {
        _DAT_14c84509c = 0.3;
        _DAT_14c8450a0 = 0.59;
        _DAT_14c8450a4 = 0.11;
        uRam000000014c8450a8 = 0x3f800000;
      }
      _Init_thread_footer(&DAT_14c8450ac);
    }
  }
  return param_1[2] * _DAT_14c8450a4 + *param_1 * _DAT_14c84509c + param_1[1] * _DAT_14c8450a0;
}



// FUNCTION 14064ffa8 FUN_14064ffa8 body=1419 status=ok
// SIG undefined FUN_14064ffa8(void)

undefined8 * FUN_14064ffa8(undefined8 *param_1)

{
  FUN_140651a3e();
  param_1[0x34c] = 0;
  param_1[0x34d] = 0;
  *(undefined4 *)(param_1 + 0x34e) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1a74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a84) = 0;
  param_1[0x351] = 2;
  param_1[0x357] = 0;
  *(undefined1 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x35d) = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x360] = 0;
  *param_1 = &PTR_FUN_14b95d190;
  param_1[0x72] = &PTR_FUN_14b95d800;
  param_1[0x73] = &PTR_FUN_14b95d820;
  param_1[0x74] = &PTR_FUN_14b95d850;
  param_1[0x75] = &PTR_FUN_14b95d860;
  param_1[0x76] = &PTR_FUN_14b95d8d0;
  param_1[0x77] = &PTR_FUN_14b95d900;
  param_1[0x78] = &PTR_FUN_14b95d930;
  param_1[0x7f] = &PTR_FUN_14b95d9e0;
  param_1[0x80] = &PTR_FUN_14b95da50;
  param_1[0x81] = &PTR_FUN_14b95dac0;
  param_1[0x82] = &PTR_FUN_14b95daf0;
  param_1[0x83] = &PTR_FUN_14b95db30;
  param_1[0x84] = &PTR_FUN_14b95dbd0;
  param_1[0x85] = &PTR_FUN_14b95dbf0;
  param_1[0x89] = &PTR_FUN_14b95dc10;
  param_1[0x8a] = &PTR_FUN_14b95dcd0;
  param_1[0x8b] = &PTR_FUN_14b95dd50;
  param_1[0x8c] = &PTR_FUN_14b95dda0;
  param_1[0x8d] = &PTR_FUN_14b95dde0;
  param_1[0x8e] = &PTR_FUN_14b95de00;
  param_1[0x8f] = &PTR_FUN_14b95de20;
  param_1[0x90] = &PTR_FUN_14b95de40;
  param_1[0x91] = &PTR_FUN_14b95de60;
  param_1[0x92] = &PTR_FUN_14b95de80;
  param_1[0x93] = &PTR_FUN_14b95dea0;
  param_1[0x94] = &PTR_FUN_14b95dec0;
  param_1[0x95] = &PTR_FUN_14b95dee0;
  param_1[0x96] = &PTR_FUN_14b95df00;
  param_1[0x34b] = &PTR_FUN_14b95df20;
  param_1[0x352] = &PTR_FUN_14b95df30;
  param_1[0x353] = &PTR_FUN_14b95df70;
  param_1[0x354] = &PTR_FUN_14b95dfb0;
  param_1[0x355] = &PTR_FUN_14b95e000;
  param_1[0x356] = &PTR_FUN_14b95e030;
  param_1[0x359] = &PTR_FUN_14b95e070;
  param_1[0x35a] = &PTR_FUN_14b95e080;
  param_1[0x35b] = &PTR_FUN_14b95e0b0;
  param_1[0x35c] = &PTR_FUN_14b95e150;
  param_1[0x367] = 0;
  param_1[0x368] = 0;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  *(undefined4 *)(param_1 + 0x369) = 2;
  param_1[0x37a] = 0;
  *(undefined4 *)(param_1 + 0x37b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b64) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ba4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1be4) = 0;
  param_1[0x37e] = 0;
  *(undefined4 *)(param_1 + 0x37f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c15) = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x388] = 0;
  param_1[0x389] = 0;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  param_1[900] = 0;
  param_1[0x385] = 0;
  *(undefined4 *)(param_1 + 0x38a) = 2;
  *(undefined1 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c57) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c54) = 0;
  param_1[0x392] = 0;
  param_1[0x390] = 0;
  param_1[0x391] = 0;
  param_1[0x38e] = 0;
  param_1[0x38f] = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a3] = 0;
  param_1[0x362] = &PTR_FUN_14b5d0e90;
  *(undefined1 *)(param_1 + 0x3a7) = 0;
  param_1[0x3a6] = 0;
  *(byte *)((longlong)param_1 + 0x1d39) = *(byte *)((longlong)param_1 + 0x1d39) & 0xf8;
  *(undefined2 *)((longlong)param_1 + 0x1d3a) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1d3c) = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 2;
  *(undefined1 *)(param_1 + 0x3b2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d82) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d64) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d6c) = 0;
  *(undefined1 *)(param_1 + 0x3b3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d94) = 0;
  param_1[0x3b6] = 0;
  param_1[0x3b7] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3b5] = 0;
  FUN_140650534(param_1 + 0x3b8);
  param_1[0x3d7] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3dd] = 0;
  FUN_1406516ce(param_1 + 0x3de);
  param_1[0x3de] = &PTR_FUN_14b739090;
  *(undefined8 *)((longlong)param_1 + 0x2334) = 0;
  param_1[0x468] = 0;
  param_1[0x469] = 0;
  *(undefined4 *)(param_1 + 0x46a) = 0;
  param_1[0x46e] = 0;
  param_1[0x46f] = 0;
  param_1[0x470] = 0;
  param_1[0x45d] = 0;
  param_1[0x45e] = 0;
  param_1[0x45f] = 0;
  param_1[0x460] = 0;
  param_1[0x461] = 0;
  param_1[0x462] = 0;
  param_1[0x463] = 0;
  param_1[0x464] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2322) = 0;
  *(undefined8 *)((longlong)param_1 + 0x232a) = 0;
  param_1[0x46b] = 0;
  param_1[0x46c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2365) = 0;
  FUN_1406505c6(param_1 + 0x471);
  param_1[0x48b] = 0;
  param_1[0x48c] = 0;
  param_1[0x48d] = 0;
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  param_1[0x490] = 0;
  param_1[0x491] = 0;
  param_1[0x492] = 0;
  param_1[0x493] = 0;
  param_1[0x494] = 0;
  param_1[0x495] = 0;
  param_1[0x496] = 0;
  *(undefined4 *)(param_1 + 0x497) = 2;
  *(undefined8 *)((longlong)param_1 + 0x24bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24cc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x24d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24e4) = 0x200000000;
  param_1[0x4a7] = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2504) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2514) = 0;
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2544) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254c) = 0;
  param_1[0x4ab] = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  param_1[0x4b7] = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2587) = 0;
  param_1[0x4af] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4ad] = 0;
  param_1[0x4ae] = 0;
  param_1[0x4b4] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4b3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25cc) = 0;
  param_1[0x4bb] = 0;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  param_1[0x4bd] = 0;
  param_1[0x4be] = 0;
  return param_1;
}



// FUNCTION 140650534 FUN_140650534 body=146 status=ok
// SIG undefined FUN_140650534(void)

void FUN_140650534(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f6e00;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x400000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x400000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 2;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  param_1[0xb] = 0xffffffffffffffff;
  return;
}



// FUNCTION 1406505c6 FUN_1406505c6 body=424 status=ok
// SIG undefined FUN_1406505c6(void)

undefined8 * FUN_1406505c6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0x42c8000000000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 5) = 0x40a00000;
  puVar1 = param_1 + 6;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0x404;
  param_1[6] = &DAT_14a176f00;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb9) = 1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x1000100000000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xca) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x42c80000;
  LOCK();
  UNLOCK();
  local_40 = DAT_14c761474 + 1;
  local_48 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_34,0,0);
  FUN_140650770(puVar1,local_34,0,1);
  FUN_14045d156(puVar1,local_34,2,1);
  LOCK();
  UNLOCK();
  local_40 = DAT_14c761474 + 1;
  local_48 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1406507bc(puVar1,&local_38,0x3f800000,0x3f800000);
  FUN_140650770(puVar1,local_38,0,1);
  FUN_14045d156(puVar1,local_38,2,1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140650770 FUN_140650770 body=75 status=ok
// SIG undefined FUN_140650770(void)

void FUN_140650770(undefined8 param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_14045d218();
  if (cVar2 != '\0') {
    lVar1 = FUN_14045d1a0(param_1,param_2);
    *(undefined1 *)(lVar1 + 1) = param_3;
    if (param_4 != '\0') {
      FUN_14045d2f8(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1406507bc FUN_1406507bc body=488 status=ok
// SIG undefined FUN_1406507bc(void)

undefined4 *
FUN_1406507bc(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5,
             undefined4 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar4 = *(uint *)(param_1 + 0x78);
  uVar11 = (ulonglong)uVar4;
  uVar10 = 0;
  if (((uVar11 != 0) &&
      (pfVar7 = (float *)(*plVar1 + 4 + (longlong)(int)(uVar4 - 1) * 0x1c), uVar10 = uVar11,
      param_3 < *pfVar7 || param_3 == *pfVar7)) && (uVar10 = 0, 0 < (int)uVar4)) {
    pfVar7 = (float *)(*plVar1 + 4);
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      if (param_3 < *pfVar7 || param_3 == *pfVar7) break;
      uVar9 = uVar9 + 1;
      pfVar7 = pfVar7 + 7;
      uVar10 = uVar11;
    } while (uVar11 != uVar9);
  }
  *(uint *)(param_1 + 0x78) = uVar4 + 1;
  if (*(uint *)(param_1 + 0x7c) < uVar4 + 1) {
    FUN_14065126e(plVar1,uVar11);
  }
  iVar8 = (int)uVar10;
  lVar6 = (longlong)iVar8 * 0x1c;
  memmove((void *)(*plVar1 + lVar6 + 0x1c),(void *)(*plVar1 + lVar6),
          (ulonglong)(uVar4 - iVar8) * 0x1c);
  lVar5 = *plVar1;
  *(undefined2 *)(lVar5 + lVar6) = 0;
  *(undefined1 *)(lVar5 + 2 + lVar6) = 0;
  *(float *)(lVar5 + 4 + lVar6) = param_3;
  *(undefined4 *)(lVar5 + 8 + lVar6) = param_4;
  puVar2 = (undefined8 *)(lVar5 + 0xc + lVar6);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (param_5 == '\x01' && 0 < iVar8) {
    lVar5 = *plVar1;
    fVar3 = *(float *)(lVar5 + -0x14 + (uVar10 & 0xffffffff) * 0x1c);
    for (fVar12 = *(float *)(lVar5 + 8 + lVar6); fVar13 = fVar12 - fVar3, 180.0 < fVar13;
        fVar12 = fVar12 + -360.0) {
    }
    while (fVar13 < -180.0) {
      fVar12 = fVar12 + 360.0;
      fVar13 = fVar12 - fVar3;
    }
    *(float *)(lVar5 + lVar6 + 8) = fVar12;
  }
  FUN_1406509a6(param_1 + 8,&param_6,uVar10 & 0xffffffff);
  *param_2 = param_6;
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406509a6 FUN_1406509a6 body=767 status=ok
// SIG undefined FUN_1406509a6(void)

void FUN_1406509a6(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  undefined4 *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 10;
  iVar4 = (int)param_1[0xb];
  local_64 = param_3;
  if (iVar4 < param_3) {
    if (param_3 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_3 + 1);
    }
    if (*(int *)((longlong)param_1 + 0x5c) <= param_3) {
      FUN_1406525c2(plVar1);
      iVar4 = (int)param_1[0xb];
    }
    local_68 = iVar4;
    if (iVar4 < param_3) {
      do {
        FUN_14065166a(plVar1);
        local_60 = (undefined4 *)((longlong)((int)param_1[0xb] + -1) * 4 + param_1[10]);
        local_58 = &local_68;
        FUN_140650ca6(param_1,local_4c,&local_60);
        local_68 = local_68 + 1;
      } while (local_68 < param_3);
      iVar4 = (int)param_1[0xb];
    }
    *(uint *)(param_1 + 0xb) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x5c) < iVar4 + 1U) {
      FUN_14065110c(plVar1,iVar4);
    }
    lVar14 = (longlong)iVar4;
  }
  else {
    if (param_3 < iVar4) {
      iVar3 = (int)param_1[5];
      if (iVar3 == 0) {
        uVar9 = 1;
        uVar5 = 0;
        iVar12 = 0;
        iVar6 = 0;
      }
      else {
        puVar7 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 2);
        }
        uVar10 = *puVar7;
        if (uVar10 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          uVar5 = 0;
          uVar9 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar9 = uVar5;
          }
          iVar6 = 0;
          do {
            if (uVar9 == uVar5) goto LAB_140650b3d;
            iVar6 = iVar6 + 0x20;
            uVar10 = puVar7[uVar5 + 1];
            uVar5 = uVar5 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar5 = 0;
          iVar6 = 0;
        }
        uVar9 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar12 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar12) {
          iVar12 = iVar3;
        }
      }
      if (iVar12 < iVar3) {
        uVar10 = 0xffffffff;
        do {
          iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x10);
          if (param_3 <= iVar4) {
            *(int *)(*param_1 + (longlong)iVar12 * 0x10 + 4) = iVar4 + 1;
            iVar3 = (int)param_1[5];
          }
          uVar10 = uVar10 & ~(uint)uVar9;
          puVar7 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar7 = (uint *)(param_1 + 2);
          }
          iVar4 = (int)uVar5;
          lVar14 = (longlong)iVar4;
          uVar13 = puVar7[lVar14] & uVar10;
          if (uVar13 == 0) {
            iVar12 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar12 = iVar3 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar11 = iVar12;
            if (iVar12 < iVar4) {
              iVar11 = iVar4;
            }
            if (iVar12 <= iVar4) break;
            lVar8 = 0;
            while( true ) {
              iVar6 = iVar6 + 0x20;
              uVar13 = puVar7[lVar14 + lVar8 + 1];
              if (uVar13 != 0) break;
              lVar8 = lVar8 + 1;
              if (iVar11 - lVar14 == lVar8) goto LAB_140650b39;
            }
            uVar5 = (ulonglong)(iVar4 + (int)lVar8 + 1);
            uVar10 = 0xffffffff;
          }
          uVar9 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar9 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar12 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar12 < iVar3);
LAB_140650b39:
        iVar4 = (int)param_1[0xb];
      }
    }
LAB_140650b3d:
    *(uint *)(param_1 + 0xb) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0x5c) < iVar4 + 1U) {
      FUN_14065110c(plVar1,iVar4);
    }
    lVar14 = (longlong)param_3;
    memmove((void *)(*plVar1 + lVar14 * 4 + 4),(void *)(*plVar1 + lVar14 * 4),
            (ulonglong)(uint)(iVar4 - param_3) << 2);
  }
  *(undefined4 *)(lVar14 * 4 + *plVar1) = *param_2;
  local_58 = &local_64;
  local_60 = param_2;
  FUN_140650ca6(param_1,local_4c);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140650ca6 FUN_140650ca6 body=284 status=ok
// SIG undefined FUN_140650ca6(void)

undefined4 * FUN_140650ca6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140650e40(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_140650dc4(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[3] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1406513ec(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140650dc4 FUN_140650dc4 body=124 status=ok
// SIG undefined FUN_140650dc4(void)

undefined8 FUN_140650dc4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_147a4d8b2(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 140650e40 FUN_140650e40 body=715 status=ok
// SIG undefined FUN_140650e40(void)

int * FUN_140650e40(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_144869a3c(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140650ffe;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_140650ffe:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14065110c FUN_14065110c body=353 status=ok
// SIG undefined FUN_14065110c(void)

void FUN_14065110c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140651191;
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
LAB_140651191:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14065126e FUN_14065126e body=381 status=ok
// SIG undefined FUN_14065126e(void)

void FUN_14065126e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1406512fb;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_1406512fb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 1406513ec FUN_1406513ec body=637 status=ok
// SIG undefined FUN_1406513ec(void)

void FUN_1406513ec(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14065144f;
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
LAB_14065144f:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
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



// FUNCTION 14065166a FUN_14065166a body=62 status=ok
// SIG undefined FUN_14065166a(void)

void FUN_14065166a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14065110c(param_1,iVar1);
  }
  FUN_1406516a8((longlong)iVar1 * 4 + *param_1,1);
  return;
}



// FUNCTION 1406516a8 FUN_1406516a8 body=38 status=ok
// SIG undefined FUN_1406516a8(void)

void FUN_1406516a8(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      LOCK();
      UNLOCK();
      iVar2 = DAT_14c761474 + 1;
      DAT_14c761474 = DAT_14c761474 + 1;
      *(int *)(param_1 + lVar1 * 4) = iVar2;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 1406516ce FUN_1406516ce body=755 status=ok
// SIG undefined FUN_1406516ce(void)

undefined8 * FUN_1406516ce(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [4];
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  longlong alStack_b8 [2];
  undefined4 local_a4;
  undefined4 local_84;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_e8;
  *param_1 = &PTR_FUN_14b127600;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  lVar7 = 0x141;
  do {
    *(undefined8 *)((longlong)param_1 + lVar7 + -0x119) = 0x44bb800043fa0000;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0x111);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0x101);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0xf1);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0xe1);
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_1446f470e(local_c8,L"FGbxTerritoryAreaDataCache::AABBTree",1);
    *(undefined8 *)((longlong)param_1 + lVar7 + -0xc9) = 0;
    *(undefined ***)((longlong)param_1 + lVar7 + -0xd1) = &PTR_LAB_14a1e3c98;
    *(undefined4 *)((longlong)param_1 + lVar7 + -0xc1) = 0xffffffff;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0xb9);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0xa9);
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_1446f470e(local_c8,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
    *(undefined8 *)((longlong)param_1 + lVar7 + -0x91) = 0;
    *(undefined ***)((longlong)param_1 + lVar7 + -0x99) = &PTR_LAB_14a1e3c98;
    *(undefined4 *)((longlong)param_1 + lVar7 + -0x89) = 0xffffffff;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0x81);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = (undefined8 *)((longlong)param_1 + lVar7 + -0x71);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)((longlong)param_1 + lVar7 + -0x31) = 0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    puVar1 = (undefined4 *)((longlong)param_1 + lVar7 + -0x29);
    *puVar1 = (undefined4)DAT_14c8464e0;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(undefined8 *)((longlong)param_1 + lVar7 + -0x19) = DAT_14c8464f0;
    *(undefined8 *)((longlong)param_1 + lVar7 + -0x11) = 0x7f7fffff00000000;
    *(undefined4 *)((longlong)param_1 + lVar7 + -9) = 0;
    *(undefined2 *)((longlong)param_1 + lVar7 + -1) = 0;
    lVar7 = lVar7 + 0x120;
  } while (lVar7 != 0x4a1);
  lVar7 = 0x394;
  do {
    *(undefined1 *)((longlong)param_1 + lVar7 + -0xc) = 2;
    *(undefined4 *)((longlong)param_1 + lVar7 + -8) = 0;
    *(undefined1 *)((longlong)param_1 + lVar7 + -4) = 2;
    *(undefined4 *)((longlong)param_1 + lVar7) = 0;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x3e4);
  param_1[0x7d] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x7b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x7c] = uVar2;
  param_1[0x7e] = 0;
  lVar7 = 0x10;
  do {
    auStack_d8[lVar7] = 0;
    *(undefined8 *)(auStack_d8 + lVar7 + 4) = 0x44bb800043fa0000;
    auStack_cc[lVar7] = 0;
    *(undefined8 *)(local_c8 + lVar7) = 0;
    *(undefined8 *)((longlong)alStack_b8 + lVar7 + -8) = 0;
    lVar7 = lVar7 + 0x20;
  } while (lVar7 != 0x70);
  puVar6 = param_1 + 5;
  local_c8[0] = 1;
  local_a4 = 0x469c4000;
  local_84 = 0x461c4000;
  lVar7 = 0;
  do {
    FUN_1406519c2(local_c8 + lVar7,puVar6);
    lVar7 = lVar7 + 0x20;
    puVar6 = puVar6 + 0x24;
  } while (lVar7 != 0x60);
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0x55000000;
  *(undefined1 *)(param_1 + 0x73) = 1;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x55000000;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x46c35000;
  *(undefined1 *)(param_1 + 0x77) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x46c35000;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x46c35000;
  lVar7 = 0x60;
  do {
    if (*(longlong *)(auStack_d8 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar7 = lVar7 + -0x20;
  } while (lVar7 != 0);
  if ((local_60 ^ (ulonglong)local_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1406519c2 FUN_1406519c2 body=123 status=ok
// SIG undefined FUN_1406519c2(void)

void FUN_1406519c2(undefined1 *param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_2 + 0x46) = *param_1;
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)((longlong)param_2 + 0x119) = param_1[0xc];
  if ((int)param_2[9] < 0) {
    param_2[8] = 0;
    FUN_140c6998c(param_2 + 6,0);
  }
  else {
    param_2[8] = 0;
  }
  if ((int)param_2[5] < 0) {
    param_2[4] = 0;
    FUN_147e2bf3a(param_2 + 2,0);
  }
  else {
    param_2[4] = 0;
  }
  FUN_1404d2816(param_2);
  return;
}



// FUNCTION 140651a3e FUN_140651a3e body=2712 status=ok
// SIG undefined FUN_140651a3e(void)

undefined8 * FUN_140651a3e(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140312256();
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *param_1 = &PTR_FUN_14b2f92c0;
  param_1[0x72] = &PTR_FUN_14b2f9910;
  param_1[0x73] = &PTR_FUN_14b2f9930;
  param_1[0x74] = &PTR_FUN_14b2f9960;
  param_1[0x75] = &PTR_FUN_14b2f9970;
  param_1[0x76] = &PTR_FUN_14b2f99e0;
  param_1[0x77] = &PTR_FUN_14b2f9a10;
  param_1[0x78] = &PTR_FUN_14b2f9a40;
  param_1[0x7f] = &PTR_FUN_14b2f9af0;
  param_1[0x80] = &PTR_FUN_14b2f9b60;
  param_1[0x81] = &PTR_FUN_14b2f9bd0;
  param_1[0x82] = &PTR_FUN_14b2f9c00;
  param_1[0x83] = &PTR_FUN_14b2f9c40;
  param_1[0x84] = &PTR_FUN_14b2f9ce0;
  param_1[0x85] = &PTR_FUN_14b2f9d00;
  param_1[0x89] = &PTR_FUN_14b2f9d20;
  param_1[0x8a] = &PTR_FUN_14b2f9de0;
  param_1[0x8b] = &PTR_FUN_14b2f9e60;
  param_1[0x8c] = &PTR_FUN_14b2f9eb0;
  param_1[0x8d] = &PTR_FUN_14b2f9ef0;
  param_1[0x8e] = &PTR_FUN_14b2f9f10;
  param_1[0x8f] = &PTR_FUN_14b2f9f30;
  param_1[0x90] = &PTR_FUN_14b2f9f50;
  param_1[0x91] = &PTR_FUN_14b2f9f70;
  param_1[0x92] = &PTR_FUN_14b2f9f90;
  param_1[0x93] = &PTR_FUN_14b2f9fb0;
  param_1[0x94] = &PTR_FUN_14b2f9fd0;
  param_1[0x95] = &PTR_FUN_14b2f9ff0;
  param_1[0x96] = &PTR_FUN_14b2fa010;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x534) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  param_1[0xa8] = 2;
  param_1[0xa9] = 0;
  param_1[0xaa] = &DAT_14a171d50;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xab] = &DAT_14cb70058;
  *(undefined2 *)(param_1 + 0xb4) = 0x200;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x69b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0xb38ec559;
  *(undefined4 *)(param_1 + 0xda) = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0x43480000;
  param_1[0xdc] = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  param_1[0xdb] = &PTR_FUN_14b023840;
  *(undefined2 *)(param_1 + 0xde) = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  param_1[0xdf] = &PTR_FUN_14b023870;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x732) = 0;
  *(undefined8 *)((longlong)param_1 + 0x73a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x724) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  param_1[0xe9] = &PTR_FUN_14b023870;
  *(undefined1 *)(param_1 + 0xee) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined8 *)((longlong)param_1 + 0x782) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
  param_1[0xf4] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  param_1[0xf3] = &PTR_FUN_14b0238b0;
  *(undefined1 *)(param_1 + 0xf6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0x43b4000000000000;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 2;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined4 *)(param_1 + 0x103) = 2;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x829) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0;
  *(undefined4 *)((longlong)param_1 + 0x854) = 2;
  *(undefined2 *)(param_1 + 0x10b) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x112) = 1;
  *(undefined1 *)((longlong)param_1 + 0x894) = 0;
  param_1[0x119] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x129) = 2;
  *(undefined4 *)((longlong)param_1 + 0x95c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x954) = 0;
  *(undefined4 *)(param_1 + 300) = 2;
  *(undefined4 *)((longlong)param_1 + 0x994) = 0;
  *(undefined8 *)((longlong)param_1 + 0x984) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x974) = 0;
  *(undefined8 *)((longlong)param_1 + 0x97c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x964) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0;
  *(undefined4 *)(param_1 + 0x133) = 2;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a4) = 0;
  *(undefined4 *)(param_1 + 0x138) = 2;
  *(undefined4 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9cc) = 0;
  *(undefined4 *)(param_1 + 0x13b) = 2;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined4 *)(param_1 + 0x14a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xa54) = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x151) = 1;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 2;
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xafc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xae4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xad4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xadc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb6c) = 0;
  param_1[0x16f] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb95) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9d) = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x153] = &PTR_FUN_14b0db3b0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xc0a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc12) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbe4) = 0;
  *(undefined4 *)(param_1 + 0x186) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc34) = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc27) = 0;
  param_1[0x184] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc51) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc59) = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 399) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc84) = 0;
  *(undefined4 *)(param_1 + 0x192) = 2;
  *(undefined8 *)((longlong)param_1 + 0xca1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9c) = 0;
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4c) = 0;
  param_1[0x1ab] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  param_1[0x2d2] = 0;
  *(undefined4 *)(param_1 + 0x2d3) = 0;
  *(undefined4 *)(param_1 + 0x1af) = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x169c) = 0x20;
  *(undefined1 *)((longlong)param_1 + 0x16a4) = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0;
  *(undefined4 *)(param_1 + 0x2d9) = 2;
  *(undefined4 *)((longlong)param_1 + 0x16ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16d4) = 0;
  *(undefined4 *)(param_1 + 0x2de) = 2;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16fc) = 0;
  *(undefined2 *)(param_1 + 0x2e1) = 0xffff;
  param_1[0x2e4] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  *(undefined2 *)(param_1 + 0x2e4) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x172f) = 0;
  param_1[0x2e5] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1733) = 1;
  param_1[0x2e7] = 0;
  param_1[0x2e9] = 0;
  FUN_1406524d8(param_1 + 0x2ea);
  param_1[0x323] = 0;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 2;
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined8 *)((longlong)param_1 + 0x193c) = 0;
  param_1[0x332] = 0;
  *(undefined4 *)(param_1 + 0x333) = 0;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x199c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19a4) = 0;
  param_1[0x336] = 0;
  *(undefined4 *)(param_1 + 0x337) = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  param_1[0x33c] = 0;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a01) = 0;
  *(undefined1 *)(param_1 + 0x346) = 0;
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  param_1[0x349] = 0;
  param_1[0x34a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a3c) = 0;
  if (((*(uint *)(param_1 + 1) & 0x10) == 0) && (param_1[0x99] == 0)) {
    plVar4 = param_1 + 0x97;
    param_1[0x9a] = &DAT_14cb716b8;
    param_1[0x99] = param_1;
    lVar5 = DAT_14cb716b8;
    while( true ) {
      param_1[0x97] = lVar5;
      LOCK();
      lVar3 = *(longlong *)param_1[0x9a];
      bVar6 = lVar5 == lVar3;
      if (bVar6) {
        *(longlong *)param_1[0x9a] = (longlong)plVar4;
        lVar3 = lVar5;
      }
      UNLOCK();
      if (bVar6) break;
      param_1[0x97] = lVar3;
      lVar5 = *(longlong *)param_1[0x9a];
    }
    if (*plVar4 != 0) {
      *(longlong **)(*plVar4 + 8) = plVar4;
    }
  }
  if ((((*(uint *)(param_1 + 1) & 0x80010) == 0) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) &&
     ((bVar1 = *(byte *)(lVar5 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  }
  uVar2 = DAT_14cb717f0;
  if (DAT_14cac7648 == 0) {
    local_60 = &local_48;
    local_48 = FUN_144a7958c;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_143242436;
    local_68 = &LAB_14789ef1f;
    local_70 = &LAB_1417b008f;
    local_78 = L"Engine";
    local_80 = 0x8000000000;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_90 = CONCAT31(local_90._1_3_,1);
  local_98 = local_98 & 0xffffff00;
  plVar4 = (longlong *)FUN_14048696c(param_1,uVar2,DAT_14cac7648,DAT_14cac7648);
  if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_140652384;
  }
  else {
    FUN_1456cec3c(plVar4);
    param_1[0x39] = plVar4;
  }
  (**(code **)(*plVar4 + 0x588))(plVar4,0);
LAB_140652384:
  for (lVar5 = *param_2; (lVar5 != 0 && ((*(uint *)(lVar5 + 8) & 0x30) == 0));
      lVar5 = *(longlong *)(lVar5 + 0x20)) {
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1406524d8 FUN_1406524d8 body=234 status=ok
// SIG undefined FUN_1406524d8(void)

undefined8 * FUN_1406524d8(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0x200000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x200000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x200000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0x400000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 **)((longlong)param_1 + 0x184) = &DAT_100000004;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0x301;
  *(undefined1 *)((longlong)param_1 + 0x18e) = 0;
  *(char *)((longlong)param_1 + 399) = *(char *)((longlong)param_1 + 399) + -1;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  FUN_1400bc96c(param_1 + 3,&DAT_14cb24428);
  FUN_1400bc96c(param_1 + 8,&DAT_14cb24428);
  return param_1;
}



// FUNCTION 1406525c2 FUN_1406525c2 body=315 status=ok
// SIG undefined FUN_1406525c2(void)

void FUN_1406525c2(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14065262c;
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
LAB_14065262c:
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



// FUNCTION 1406526fe FUN_1406526fe body=67 status=ok
// SIG undefined FUN_1406526fe(void)

void FUN_1406526fe(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00014065273a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  return;
}



// FUNCTION 140652742 FUN_140652742 body=814 status=ok
// SIG undefined FUN_140652742(void)

void FUN_140652742(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BOOLEAN BVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = param_2;
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar9 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    FUN_146e9f400(param_1 + 0x160,&local_70);
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x000140652985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  local_88 = 0;
  uStack_80 = 0;
  lVar16 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar13 = 0;
  local_60 = lVar16;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x80);
  }
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_a8 = local_68;
  local_a0 = local_60;
  local_b0 = plVar1;
  if ((iStack_54 != iVar13) || (local_60 != lVar16)) {
    do {
      local_b8 = *local_b0;
      lVar11 = (longlong)iStack_94;
      plVar5 = *(longlong **)(local_b8 + 8 + lVar11 * 0x18);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar12 = (**(code **)(*plVar5 + 0x18))(), uVar12 == param_2)) {
        local_c0 = (longlong)(int)uStack_80;
        uVar10 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        if (uStack_80._4_4_ < uVar10) {
          FUN_146e9f2b0(&local_88,local_c0);
        }
        puVar2 = (undefined4 *)(local_b8 + lVar11 * 0x18);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)(local_88 + local_c0 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
      lVar11 = local_88;
    } while (((iStack_94 != iVar13) || (local_a0 != lVar16)) || (local_b0 != plVar1));
    lVar16 = (longlong)(int)uStack_80;
    if (lVar16 != 0) {
      lVar14 = 0;
      do {
        FUN_146e9f1f0(plVar1,*(undefined8 *)(lVar11 + lVar14),*(undefined8 *)(lVar11 + 8 + lVar14));
        lVar14 = lVar14 + 0x10;
      } while (lVar16 * 0x10 != lVar14);
    }
  }
  FUN_140652a86(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    uVar10 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar16 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x138);
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x140) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar13 != -1) {
      do {
        puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar13 * 0x18);
        if (*puVar15 == param_2) {
          if ((puVar15 != (ulonglong *)0x0) && (puVar15 = puVar15 + 1, puVar15 != (ulonglong *)0x0))
          {
            puVar4 = (undefined8 *)*puVar15;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            *puVar15 = 0;
            FUN_140652a86((longlong *)(param_1 + 0xf8),param_2);
          }
          break;
        }
        iVar13 = (int)puVar15[2];
      } while (iVar13 != -1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (local_88 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 140652a86 FUN_140652a86 body=179 status=ok
// SIG undefined FUN_140652a86(void)

void FUN_140652a86(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*puVar1 == param_2) {
          iVar4 = *(int *)((longlong)plVar5 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          if (iVar4 == iVar3) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
          }
          else {
            do {
              piVar6 = (int *)(*param_1 + (longlong)iVar4 * 0x18 + 0x10);
              iVar4 = *piVar6;
            } while (iVar4 != iVar3);
          }
          *piVar6 = (int)puVar1[2];
          FUN_140652b3a(param_1,iVar3);
          return;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 140652b3a FUN_140652b3a body=114 status=ok
// SIG undefined FUN_140652b3a(void)

void FUN_140652b3a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 140652bac FUN_140652bac body=814 status=ok
// SIG undefined FUN_140652bac(void)

void FUN_140652bac(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BOOLEAN BVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = param_2;
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar9 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    FUN_146e9f400(param_1 + 0x160,&local_70);
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x000140652def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  local_88 = 0;
  uStack_80 = 0;
  lVar16 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar13 = 0;
  local_60 = lVar16;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x80);
  }
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_a8 = local_68;
  local_a0 = local_60;
  local_b0 = plVar1;
  if ((iStack_54 != iVar13) || (local_60 != lVar16)) {
    do {
      local_b8 = *local_b0;
      lVar11 = (longlong)iStack_94;
      plVar5 = *(longlong **)(local_b8 + 8 + lVar11 * 0x18);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar12 = (**(code **)(*plVar5 + 0x18))(), uVar12 == param_2)) {
        local_c0 = (longlong)(int)uStack_80;
        uVar10 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        if (uStack_80._4_4_ < uVar10) {
          FUN_146e9f2b0(&local_88,local_c0);
        }
        puVar2 = (undefined4 *)(local_b8 + lVar11 * 0x18);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)(local_88 + local_c0 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
      lVar11 = local_88;
    } while (((iStack_94 != iVar13) || (local_a0 != lVar16)) || (local_b0 != plVar1));
    lVar16 = (longlong)(int)uStack_80;
    if (lVar16 != 0) {
      lVar14 = 0;
      do {
        FUN_146e9f1f0(plVar1,*(undefined8 *)(lVar11 + lVar14),*(undefined8 *)(lVar11 + 8 + lVar14));
        lVar14 = lVar14 + 0x10;
      } while (lVar16 * 0x10 != lVar14);
    }
  }
  FUN_140652a86(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    uVar10 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar16 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x138);
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x140) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar13 != -1) {
      do {
        puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar13 * 0x18);
        if (*puVar15 == param_2) {
          if ((puVar15 != (ulonglong *)0x0) && (puVar15 = puVar15 + 1, puVar15 != (ulonglong *)0x0))
          {
            puVar4 = (undefined8 *)*puVar15;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            *puVar15 = 0;
            FUN_140652a86((longlong *)(param_1 + 0xf8),param_2);
          }
          break;
        }
        iVar13 = (int)puVar15[2];
      } while (iVar13 != -1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (local_88 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 140652ef0 FUN_140652ef0 body=814 status=ok
// SIG undefined FUN_140652ef0(void)

void FUN_140652ef0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BOOLEAN BVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = param_2;
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar9 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    FUN_146e9f400(param_1 + 0x160,&local_70);
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x000140653133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  local_88 = 0;
  uStack_80 = 0;
  lVar16 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar13 = 0;
  local_60 = lVar16;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x80);
  }
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_a8 = local_68;
  local_a0 = local_60;
  local_b0 = plVar1;
  if ((iStack_54 != iVar13) || (local_60 != lVar16)) {
    do {
      local_b8 = *local_b0;
      lVar11 = (longlong)iStack_94;
      plVar5 = *(longlong **)(local_b8 + 8 + lVar11 * 0x18);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar12 = (**(code **)(*plVar5 + 0x18))(), uVar12 == param_2)) {
        local_c0 = (longlong)(int)uStack_80;
        uVar10 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        if (uStack_80._4_4_ < uVar10) {
          FUN_146e9f2b0(&local_88,local_c0);
        }
        puVar2 = (undefined4 *)(local_b8 + lVar11 * 0x18);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)(local_88 + local_c0 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
      lVar11 = local_88;
    } while (((iStack_94 != iVar13) || (local_a0 != lVar16)) || (local_b0 != plVar1));
    lVar16 = (longlong)(int)uStack_80;
    if (lVar16 != 0) {
      lVar14 = 0;
      do {
        FUN_146e9f1f0(plVar1,*(undefined8 *)(lVar11 + lVar14),*(undefined8 *)(lVar11 + 8 + lVar14));
        lVar14 = lVar14 + 0x10;
      } while (lVar16 * 0x10 != lVar14);
    }
  }
  FUN_140652a86(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    uVar10 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar16 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x138);
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x140) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar13 != -1) {
      do {
        puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar13 * 0x18);
        if (*puVar15 == param_2) {
          if ((puVar15 != (ulonglong *)0x0) && (puVar15 = puVar15 + 1, puVar15 != (ulonglong *)0x0))
          {
            puVar4 = (undefined8 *)*puVar15;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            *puVar15 = 0;
            FUN_140652a86((longlong *)(param_1 + 0xf8),param_2);
          }
          break;
        }
        iVar13 = (int)puVar15[2];
      } while (iVar13 != -1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (local_88 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 140653234 FUN_140653234 body=191 status=ok
// SIG undefined FUN_140653234(void)

undefined8 * FUN_140653234(undefined8 *param_1,longlong *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  *param_1 = param_2;
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (param_2 == (longlong *)0x0) {
      iVar2 = 0;
      goto LAB_1406532cb;
    }
  }
  else {
    FUN_1456cec3c(param_2);
  }
  (**(code **)(*param_2 + 0x310))(param_2);
  (**(code **)(*param_2 + 0x2b0))(param_2);
  iVar1 = (**(code **)(*param_2 + 0x310))(param_2);
  iVar2 = 2;
  if (2 < iVar1) {
    iVar2 = iVar1;
  }
  fVar3 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
  param_3 = param_3 / (fVar3 / ((float)iVar2 + -1.0));
  iVar2 = (int)ROUND(param_3 + param_3 + 0.5) >> 1;
LAB_1406532cb:
  *(int *)(param_1 + 1) = iVar2;
  return param_1;
}



// FUNCTION 1406532f4 FUN_1406532f4 body=269 status=ok
// SIG undefined FUN_1406532f4(void)

void FUN_1406532f4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined2 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  uint local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14cbc28b8;
  local_50 = DAT_14cbc28b0;
  FUN_1448075d0(local_40);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_40[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_40[0]) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_1406533a1;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_1406533a1:
  uVar3 = FUN_140653402(puVar5);
  *(undefined2 *)(param_1 + 0x34c) = uVar3;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140653402 FUN_140653402 body=367 status=ok
// SIG undefined FUN_140653402(void)

undefined4 FUN_140653402(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((byte *)*param_1 == (byte *)0x0) || ((*(byte *)*param_1 & 3) == 0)) {
    uVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cb77c40);
    local_48 = 0;
    uStack_40 = 0;
    pbVar3 = (byte *)*param_1;
    puVar5 = &DAT_14c9a1270;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
      puVar5 = *(undefined8 **)(pbVar3 + 8);
    }
    iVar1 = *(int *)(puVar5 + 2);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 != 0) {
      FUN_1406538b6(&local_48);
      pbVar3 = (byte *)*param_1;
    }
    puVar5 = &DAT_14c9a1270;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
      puVar5 = *(undefined8 **)(pbVar3 + 8);
    }
    FUN_1406535e2(&local_48,*(undefined4 *)(puVar5 + 2));
    if ((longlong)(int)uStack_40 != 0) {
      lVar7 = (longlong)(int)uStack_40 * 0xf0;
      lVar9 = 0;
      lVar8 = local_48;
      do {
        uVar4 = FUN_1406535a8();
        pbVar3 = (byte *)*param_1;
        plVar6 = &DAT_14c9a1270;
        if ((pbVar3 != (byte *)0x0) && (plVar6 = &DAT_14c9a1270, (*pbVar3 & 2) != 0)) {
          plVar6 = *(longlong **)(pbVar3 + 8);
        }
        FUN_1446e7478(*plVar6 + lVar9,lVar8,uVar4,0);
        lVar8 = lVar8 + 0xf0;
        lVar9 = lVar9 + 0x10;
        lVar7 = lVar7 + -0xf0;
      } while (lVar7 != 0);
    }
    uVar2 = FUN_140653628(&DAT_14cb77c48,&local_48);
    FUN_140653573(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cb77c40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140653573 FUN_140653573 body=52 status=ok
// SIG undefined FUN_140653573(void)

void FUN_140653573(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1406535a8 FUN_1406535a8 body=57 status=ok
// SIG undefined FUN_1406535a8(void)

void FUN_1406535a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5f660 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5f660 = FUN_140002ddd(FUN_1464e6a31,uVar1,L"InitHealthTypeData");
  }
  return;
}



// FUNCTION 1406535e2 FUN_1406535e2 body=70 status=ok
// SIG undefined FUN_1406535e2(void)

int FUN_1406535e2(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_148823aca(param_1,iVar1);
  }
  FUN_14065380d((longlong)iVar1 * 0xf0 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140653628 FUN_140653628 body=114 status=ok
// SIG undefined FUN_140653628(void)

int FUN_140653628(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14065369a();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_145731c94(param_1,iVar2);
    }
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar1 + lVar3) = 0;
    *(undefined8 *)(lVar1 + lVar3) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(lVar1 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(lVar1 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return iVar2;
}



// FUNCTION 14065369a FUN_14065369a body=98 status=ok
// SIG undefined FUN_14065369a(void)

int FUN_14065369a(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    iVar4 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar5) == *(int *)(param_2 + 1)) &&
         (cVar3 = FUN_1406536fc(*(undefined8 *)(lVar1 + lVar5),*param_2), cVar3 != '\0')) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar5);
  }
  return -1;
}



// FUNCTION 1406536fc FUN_1406536fc body=205 status=ok
// SIG undefined FUN_1406536fc(void)

undefined8 FUN_1406536fc(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
    do {
      if ((((*(char *)(param_1 + 0x50) != *(char *)(param_2 + 0x50)) ||
           (cVar1 = FUN_1401b48d6(param_1,param_2), cVar1 == '\0')) ||
          (cVar1 = FUN_1401b48d6(param_1 + -0x50,param_2 + -0x50), cVar1 == '\0')) ||
         ((*(int *)(param_1 + -0x58) != *(int *)(param_2 + -0x58) ||
          (cVar1 = FUN_1406537c9(*(undefined8 *)(param_1 + -0x60),*(undefined8 *)(param_2 + -0x60)),
          cVar1 == '\0')))) {
        return 0;
      }
      if (*(longlong *)(param_1 + -0x78) != *(longlong *)(param_2 + -0x78)) {
        return 0;
      }
      if (*(int *)(param_1 + -0x70) != *(int *)(param_2 + -0x70)) {
        return 0;
      }
      if (*(char *)(param_1 + -0x80) != *(char *)(param_2 + -0x80)) {
        return 0;
      }
      if (*(longlong *)(param_1 + -0x98) != *(longlong *)(param_2 + -0x98)) {
        return 0;
      }
      if (*(int *)(param_1 + -0x90) != *(int *)(param_2 + -0x90)) {
        return 0;
      }
      param_1 = param_1 + 0xf0;
      param_2 = param_2 + 0xf0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1406537c9 FUN_1406537c9 body=68 status=ok
// SIG undefined FUN_1406537c9(void)

char FUN_1406537c9(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  cVar1 = '\x01';
  while( true ) {
    if (param_3 == 0) {
      return cVar1;
    }
    param_3 = param_3 + -1;
    cVar1 = FUN_1401b48d6(param_1,param_2);
    if (cVar1 == '\0') break;
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return '\0';
}



// FUNCTION 14065380d FUN_14065380d body=168 status=ok
// SIG undefined FUN_14065380d(void)

void FUN_14065380d(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0x3001;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 10;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xf00000d0;
    param_1[0x11] = 0;
    *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x13) = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0xf00000d0;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    param_1 = param_1 + 0x1e;
  }
  return;
}



// FUNCTION 1406538b6 FUN_1406538b6 body=230 status=ok
// SIG undefined FUN_1406538b6(void)

void FUN_1406538b6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xf0;
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
    if (param_2 <= (int)(uVar1 / 0xf0)) {
      uVar2 = uVar1 / 0xf0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf0,8);
  }
  return;
}



// FUNCTION 14065399c FUN_14065399c body=22 status=ok
// SIG undefined FUN_14065399c(void)

undefined1 FUN_14065399c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1406539b2(param_2,param_3);
  return 1;
}



// FUNCTION 1406539b2 FUN_1406539b2 body=199 status=ok
// SIG undefined FUN_1406539b2(void)

longlong * FUN_1406539b2(longlong *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (ulonglong *)param_1[1];
  if (puVar1[1] < *puVar1 + 4) {
    local_24 = 0;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


