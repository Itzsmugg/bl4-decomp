// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e8b9b2 FUN_147e8b9b2 body=311 status=ok
// SIG undefined FUN_147e8b9b2(void)

undefined1 (*) [16] FUN_147e8b9b2(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
  pdVar8 = (double *)&DAT_14c846480;
  if (lVar2 != 0) {
    pdVar8 = (double *)(lVar2 + 0x240);
  }
  dVar10 = *(double *)(param_1 + 0x1b0) * pdVar8[8];
  dVar11 = *(double *)(param_1 + 0x1b8) * pdVar8[9];
  dVar9 = *(double *)(param_1 + 0x1c0) * pdVar8[10];
  dVar5 = *pdVar8;
  dVar6 = pdVar8[1];
  dVar7 = pdVar8[2];
  dVar1 = pdVar8[3];
  dVar12 = dVar11 * dVar5 - dVar10 * dVar6;
  dVar13 = dVar9 * dVar6 - dVar11 * dVar7;
  dVar14 = dVar10 * dVar7 - dVar5 * dVar9;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  dVar4 = (dVar7 * dVar13 - dVar5 * dVar12) + pdVar8[3] * dVar14 + dVar11 + pdVar8[5];
  dVar11 = pdVar8[6];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (dVar12 * dVar6 - dVar14 * dVar7) + dVar1 * dVar13 + dVar10 + pdVar8[4];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_2 = auVar3;
  *(double *)param_2[1] = dVar12 * dVar1 + dVar9 + (dVar14 * dVar5 - dVar13 * dVar6) + dVar11;
  return param_2;
}



// FUNCTION 147e8baea FUN_147e8baea body=33 status=ok
// SIG undefined FUN_147e8baea(void)

void FUN_147e8baea(longlong param_1)

{
  FUN_147e91828();
  FUN_1438380ca(param_1 + 0x160,param_1);
  return;
}



// FUNCTION 147e8bb0c FUN_147e8bb0c body=32 status=ok
// SIG undefined FUN_147e8bb0c(void)

undefined8 FUN_147e8bb0c(longlong param_1,undefined8 param_2)

{
  FUN_147e89adc(param_2,param_1 + 0x160);
  return param_2;
}



// FUNCTION 147e8bb2c FUN_147e8bb2c body=287 status=ok
// SIG undefined FUN_147e8bb2c(void)

void FUN_147e8bb2c(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((byte)*(uint *)(param_1 + 0x1cc) & 1) == param_2) {
    return;
  }
  *(uint *)(param_1 + 0x1cc) = *(uint *)(param_1 + 0x1cc) & 0xfffffffe | (uint)param_2;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
    if (lVar3 != 0) goto LAB_147e8bb5f;
  }
  else {
LAB_147e8bb5f:
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (lVar3 != 0) {
      lVar1 = FUN_1409035a4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        FUN_147e7b31c(lVar3,param_1 + 0x160);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
    if (lVar3 == 0) goto LAB_147e8bc09;
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
  }
  uVar2 = FUN_144a88394(lVar3);
  lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x248));
  if (lVar3 != 0) {
    FUN_1405a424c(uVar2,*(undefined8 *)(param_1 + 0x248));
  }
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (((~*(uint *)(param_1 + 0x1cc) & 3) == 0) || ((*(uint *)(param_1 + 0x1cc) & 5) == 4)) {
    FUN_147e8bc4c(param_1);
  }
LAB_147e8bc09:
  FUN_147e93d94(param_1);
  return;
}



// FUNCTION 147e8bc4c FUN_147e8bc4c body=469 status=ok
// SIG undefined FUN_147e8bc4c(void)

void FUN_147e8bc4c(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_143842004();
  if ((*(int *)(param_1 + 0x220) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x218), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_1,local_b8);
  }
  if (0.0 < *(float *)(param_1 + 0x20c)) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
    uVar5 = FUN_144a88394(lVar4);
    uVar1 = *(undefined4 *)(param_1 + 0x20c);
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar3 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_a8[2] = lVar6;
    *local_a8 = &PTR_FUN_14abc0140;
    local_a8[3] = 0;
    FUN_14485c47a(local_a8 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_147e8bc4c;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    local_c0 = 0xbf800000;
    local_c8 = 0;
    FUN_1406f3fee(uVar5,param_1 + 0x248,&local_98,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_a8);
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e8be22 FUN_147e8be22 body=73 status=ok
// SIG undefined FUN_147e8be22(void)

undefined8 FUN_147e8be22(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x230) < 1) {
    uVar1 = 0;
  }
  else {
    lVar3 = 0;
    lVar2 = 0;
    do {
      uVar1 = FUN_144729dda(*(longlong *)(param_1 + 0x228) + lVar3);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar2 < *(int *)(param_1 + 0x230));
  }
  return uVar1;
}



// FUNCTION 147e8be70 FUN_147e8be70 body=5018 status=ok
// SIG undefined FUN_147e8be70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147e8be70(longlong param_1,undefined8 *param_2,double *param_3)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  double dVar3;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 auVar11 [12];
  undefined8 uVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  double *pdVar19;
  int iVar20;
  undefined8 uVar21;
  double *pdVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
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
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  double dVar61;
  double dVar62;
  undefined1 auVar60 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
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
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
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
  double dVar4;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  if (lVar5 == 0) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[6] = 0;
    if ((local_f0 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar14 = FUN_1459eac26();
  plVar16 = (longlong *)FUN_144718840(lVar5);
  if (plVar16 == (longlong *)0x0) {
    uVar72 = 0;
    uVar73 = 0;
    dVar44 = 0.0;
    dVar40 = 0.0;
    uVar65 = 0;
    uVar66 = 0;
    dVar68 = 0.0;
    dVar39 = 0.0;
    goto LAB_147e8c252;
  }
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_278 = 0.0;
  dStack_270 = 0.0;
  cVar13 = (**(code **)(*plVar16 + 0x10))(plVar16);
  auVar69 = ZEXT816(0);
  bVar10 = true;
  if (cVar13 == '\0') {
    dVar44 = 0.0;
    dVar40 = 0.0;
    uVar65 = 0;
    uVar66 = 0;
    dVar68 = 0.0;
    dVar39 = 0.0;
  }
  else {
    dVar44 = 0.0;
    dVar40 = 0.0;
    uVar65 = 0;
    uVar66 = 0;
    dVar68 = 0.0;
    dVar39 = 0.0;
    if (0 < dStack_170._0_4_) {
      local_3a8._0_8_ = param_2;
      lVar24 = 0;
      bVar10 = false;
      dVar68 = 0.0;
      dVar39 = 0.0;
      dVar44 = 0.0;
      dVar40 = 0.0;
      do {
        dVar34 = local_178;
        lVar6 = *(longlong *)((longlong)local_178 + lVar24 * 8);
        if ((((lVar6 != 0) && (lVar17 = FUN_145a5252c(), dVar50 = local_178, lVar17 != 0)) &&
            (*(int *)(lVar17 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
             lVar17 + 0x30 && (*(longlong *)((longlong)dVar34 + lVar24 * 8) != 0)))) {
          lVar6 = *(longlong *)((longlong)local_178 + lVar24 * 8);
          if (((lVar6 == 0) ||
              ((lVar17 = FUN_145a5252c(), lVar17 == 0 ||
               (*(int *)(lVar6 + 0x38) < *(int *)(lVar17 + 0x38))))) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) !=
              lVar17 + 0x30)) {
            uVar21 = 0;
          }
          else {
            uVar21 = *(undefined8 *)((longlong)dVar50 + lVar24 * 8);
          }
          plVar18 = (longlong *)FUN_1478cb3d0(uVar21);
          if ((longlong)(int)plVar18[1] != 0) {
            lVar6 = *plVar18;
            lVar17 = 0;
            dVar34 = auVar69._0_8_;
            uVar21 = auVar69._8_8_;
            do {
              dVar50 = *(double *)(lVar6 + 0x40 + lVar17);
              auVar69._8_8_ = 0;
              auVar69._0_8_ = dVar50;
              uVar14 = (undefined4)((ulonglong)dVar50 >> 0x20);
              if (bVar10) {
                if (dVar50 <= (double)CONCAT44(uVar66,uVar65)) {
                  uVar65 = SUB84(dVar50,0);
                  uVar66 = uVar14;
                }
                dVar2 = *(double *)(lVar6 + 0x48 + lVar17);
                dVar8 = *(double *)(lVar6 + 0x50 + lVar17);
                if (dVar2 <= dVar68) {
                  dVar68 = dVar2;
                }
                if (dVar8 <= dVar39) {
                  dVar39 = dVar8;
                }
                if (dVar34 <= dVar50) {
                  dVar34 = dVar50;
                }
                if (dVar44 <= dVar2) {
                  dVar44 = dVar2;
                }
                if (dVar40 <= dVar8) {
                  dVar40 = dVar8;
                }
                auVar69._8_8_ = uVar21;
                auVar69._0_8_ = dVar34;
              }
              else {
                dVar68 = *(double *)(lVar6 + 0x48 + lVar17);
                dVar39 = *(double *)(lVar6 + 0x50 + lVar17);
                uVar65 = SUB84(dVar50,0);
                uVar66 = uVar14;
                dVar44 = dVar68;
                dVar40 = dVar39;
              }
              dVar34 = *(double *)(lVar6 + 0x58 + lVar17);
              dVar50 = *(double *)(lVar6 + 0x60 + lVar17);
              if (dVar34 <= (double)CONCAT44(uVar66,uVar65)) {
                uVar65 = SUB84(dVar34,0);
                uVar66 = (undefined4)((ulonglong)dVar34 >> 0x20);
              }
              if (dVar50 <= dVar68) {
                dVar68 = dVar50;
              }
              dVar2 = *(double *)(lVar6 + 0x68 + lVar17);
              if (dVar2 <= dVar39) {
                dVar39 = dVar2;
              }
              if (auVar69._0_8_ <= dVar34) {
                auVar69._0_8_ = dVar34;
              }
              if (dVar44 <= dVar50) {
                dVar44 = dVar50;
              }
              if (dVar40 <= dVar2) {
                dVar40 = dVar2;
              }
              lVar17 = lVar17 + 0x70;
              bVar10 = true;
              dVar34 = auVar69._0_8_;
              uVar21 = auVar69._8_8_;
            } while ((longlong)(int)plVar18[1] * 0x70 - lVar17 != 0);
          }
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < dStack_170._0_4_);
      bVar10 = !bVar10;
      param_2 = (undefined8 *)local_3a8._0_8_;
    }
  }
  pdVar22 = &local_1f8;
  cVar13 = (**(code **)(*plVar16 + 0x18))(plVar16,pdVar22,&local_278);
  if (cVar13 == '\0') {
LAB_147e8c217:
    uVar72 = auVar69._0_4_;
    uVar73 = auVar69._4_4_;
  }
  else {
    if ((longlong)dStack_1f0._0_4_ == 0) goto LAB_147e8c217;
    pdVar22 = (double *)0x0;
    do {
      dVar34 = *(double *)((longlong)local_1f8 + 0x40 + (longlong)pdVar22);
      uVar72 = SUB84(dVar34,0);
      uVar73 = (undefined4)((ulonglong)dVar34 >> 0x20);
      uVar14 = 0;
      uVar74 = 0;
      if (bVar10) {
        dVar68 = *(double *)((longlong)local_1f8 + 0x48 + (longlong)pdVar22);
        dVar39 = *(double *)((longlong)local_1f8 + 0x50 + (longlong)pdVar22);
        uVar65 = uVar72;
        uVar66 = uVar73;
        dVar44 = dVar68;
        dVar40 = dVar39;
      }
      else {
        if (dVar34 <= (double)CONCAT44(uVar66,uVar65)) {
          uVar65 = uVar72;
          uVar66 = uVar73;
        }
        dVar50 = *(double *)((longlong)local_1f8 + 0x48 + (longlong)pdVar22);
        dVar2 = *(double *)((longlong)local_1f8 + 0x50 + (longlong)pdVar22);
        if (dVar50 <= dVar68) {
          dVar68 = dVar50;
        }
        if (dVar2 <= dVar39) {
          dVar39 = dVar2;
        }
        if (auVar69._0_8_ <= dVar34) {
          auVar69._0_8_ = dVar34;
        }
        if (dVar44 <= dVar50) {
          dVar44 = dVar50;
        }
        if (dVar40 <= dVar2) {
          dVar40 = dVar2;
        }
        uVar72 = auVar69._0_4_;
        uVar73 = auVar69._4_4_;
        uVar14 = auVar69._8_4_;
        uVar74 = auVar69._12_4_;
      }
      dVar34 = *(double *)((longlong)local_1f8 + 0x58 + (longlong)pdVar22);
      dVar50 = *(double *)((longlong)local_1f8 + 0x60 + (longlong)pdVar22);
      uVar67 = (undefined4)((ulonglong)dVar34 >> 0x20);
      if (dVar34 <= (double)CONCAT44(uVar66,uVar65)) {
        uVar65 = SUB84(dVar34,0);
        uVar66 = uVar67;
      }
      if (dVar50 <= dVar68) {
        dVar68 = dVar50;
      }
      dVar2 = *(double *)((longlong)local_1f8 + 0x68 + (longlong)pdVar22);
      if (dVar2 <= dVar39) {
        dVar39 = dVar2;
      }
      if ((double)CONCAT44(uVar73,uVar72) <= dVar34) {
        uVar72 = SUB84(dVar34,0);
        uVar73 = uVar67;
      }
      if (dVar44 <= dVar50) {
        dVar44 = dVar50;
      }
      if (dVar40 <= dVar2) {
        dVar40 = dVar2;
      }
      pdVar22 = pdVar22 + 0xe;
      bVar10 = false;
      auVar69._4_4_ = uVar73;
      auVar69._0_4_ = uVar72;
      auVar69._12_4_ = uVar74;
      auVar69._8_4_ = uVar14;
    } while ((longlong)dStack_1f0._0_4_ * 0x70 - (longlong)pdVar22 != 0);
  }
  uVar14 = SUB84(pdVar22,0);
  if (local_278 != 0.0) {
    FUN_1400020a8();
  }
  if (local_1f8 != 0.0) {
    FUN_1400020a8();
  }
  if (local_178 != 0.0) {
    FUN_1400020a8();
  }
LAB_147e8c252:
  auVar69 = _DAT_149934d80;
  pdVar22 = (double *)(*(longlong *)(lVar5 + 0x1c8) + 0x240);
  pdVar19 = &DAT_14c846480;
  if (*(longlong *)(lVar5 + 0x1c8) != 0) {
    pdVar19 = pdVar22;
  }
  pauVar1 = (undefined1 (*) [16])(pdVar19 + 8);
  local_378._0_4_ = *(undefined4 *)*pauVar1;
  local_378._4_4_ = *(undefined4 *)((longlong)pdVar19 + 0x44);
  local_378._8_4_ = *(undefined4 *)(pdVar19 + 9);
  auVar11 = *(undefined1 (*) [12])*pauVar1;
  local_388 = *(undefined1 (*) [16])(pdVar19 + 10);
  auVar31 = *(undefined1 (*) [16])(param_1 + 0x280);
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x290);
  auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar31._8_8_));
  auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar31._0_8_));
  iVar20 = movmskpd((int)pdVar22,auVar46);
  auVar59._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar27._8_8_));
  auVar59._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar27._0_8_));
  uVar23 = movmskpd(uVar14,auVar59);
  if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) {
    local_358 = DAT_14c846480;
    dStack_350 = DAT_14c846488;
    local_3a8._8_8_ = DAT_14c8464b8;
    local_3a8._0_8_ = DAT_14c8464b0;
    auVar31 = _DAT_14c8464d0;
    dVar48 = DAT_14c8464c0;
    dVar49 = DAT_14c8464c8;
    dVar2 = DAT_14c846490;
    dVar8 = DAT_14c846498;
    dVar34 = DAT_14c8464a0;
    dVar50 = DAT_14c8464a8;
  }
  else {
    auVar59 = divpd(_DAT_149934d80,auVar31);
    auVar46 = divpd(ZEXT816(0x3ff0000000000000),auVar27);
    dVar48 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._0_8_)) & auVar59._0_8_);
    dVar49 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar31._8_8_)) & auVar59._8_8_);
    local_398._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar27._0_8_)) & auVar46._0_8_;
    local_398._8_8_ = 0;
    dVar2 = *(double *)(param_1 + 0x250) * -1.0;
    dVar8 = *(double *)(param_1 + 600) * 1.0;
    local_358 = -*(double *)(param_1 + 0x240);
    dStack_350 = -*(double *)(param_1 + 0x248);
    dVar55 = *(double *)(param_1 + 0x260) * dVar48;
    dVar61 = *(double *)(param_1 + 0x268) * dVar49;
    dVar34 = *(double *)(param_1 + 0x270) * (double)local_398._0_8_;
    dVar50 = dVar61 * local_358 - dStack_350 * dVar55;
    dVar52 = dVar34 * dStack_350 - dVar2 * dVar61;
    dVar53 = dVar55 * dVar2 - local_358 * dVar34;
    local_378._0_4_ = auVar11._0_4_;
    local_378._4_4_ = auVar11._4_4_;
    local_378._8_4_ = auVar11._8_4_;
    dVar52 = dVar52 + dVar52;
    dVar53 = dVar53 + dVar53;
    dVar50 = dVar50 + dVar50;
    local_3a8._8_8_ = 0;
    local_3a8._0_8_ = 0.0 - (dVar8 * dVar50 + dVar34 + (dVar53 * local_358 - dVar52 * dStack_350));
    auVar31 = local_398;
    dVar34 = 0.0 - ((dVar50 * dStack_350 - dVar53 * dVar2) + dVar8 * dVar52 + dVar55);
    dVar50 = 0.0 - (dVar50 * *(double *)(param_1 + 0x240) + dVar2 * dVar52 + dVar8 * dVar53 + dVar61
                   );
  }
  local_348 = *pdVar19;
  dStack_340 = pdVar19[1];
  dVar53 = pdVar19[2];
  dVar52 = pdVar19[3];
  local_368 = pdVar19[4];
  dStack_360 = pdVar19[5];
  local_398 = *(undefined1 (*) [16])(pdVar19 + 6);
  local_2a8 = (dVar40 - dVar39) * 0.5;
  local_2b0 = (dVar44 - dVar68) * 0.5;
  local_2b8 = ((double)CONCAT44(uVar73,uVar72) - (double)CONCAT44(uVar66,uVar65)) * 0.5;
  local_2c0 = dVar39 + local_2a8;
  local_2c8 = dVar68 + local_2b0;
  local_2d0 = (double)CONCAT44(uVar66,uVar65) + local_2b8;
  local_2a0 = SQRT(local_2a8 * local_2a8 + local_2b8 * local_2b8 + local_2b0 * local_2b0);
  auVar26._4_4_ = local_378._4_4_;
  auVar26._0_4_ = local_378._0_4_;
  auVar26._12_4_ = *(undefined4 *)((longlong)pdVar19 + 0x4c);
  auVar26._8_4_ = local_378._8_4_;
  auVar27._8_8_ = dVar49;
  auVar27._0_8_ = dVar48;
  auVar27 = minpd(auVar26,auVar27);
  auVar46 = minpd(local_388,auVar31);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar15 = movmskpd((int)pdVar19,auVar28);
  auVar35._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
  uVar23 = movmskpd(iVar20,auVar35);
  dVar68 = auVar31._0_8_;
  uVar21 = local_388._0_8_;
  uVar12 = local_388._8_8_;
  if ((uVar23 & 0x3fffffff) == 0 && iVar15 == 0) {
    dVar61 = dStack_340 * dVar2 * -1.0 +
             dVar53 * dStack_350 + dVar52 * local_358 * 1.0 + local_348 * dVar8;
    dVar38 = local_348 * dVar2 * 1.0 +
             dVar52 * dStack_350 + dVar53 * local_358 * -1.0 + dStack_340 * dVar8;
    auVar64._0_8_ =
         dVar52 * dVar2 * 1.0 +
         ((local_358 * dStack_340 * 1.0 + dVar53 * dVar8) - dStack_350 * local_348);
    auVar64._8_8_ =
         dVar53 * dVar2 * -1.0 +
         ((local_358 * local_348 * -1.0 + dVar52 * dVar8) - dStack_350 * dStack_340);
    dVar39 = local_368 * dVar48;
    dVar44 = dStack_360 * dVar49;
    local_398._0_8_ = (double)local_398._0_8_ * dVar68;
    dVar56 = pdVar19[7] * auVar31._8_8_;
    dVar40 = dVar44 * local_358 - dVar39 * dStack_350;
    dVar55 = (double)local_398._0_8_ * dStack_350 - dVar44 * dVar2;
    dVar52 = dVar39 * dVar2 - (double)local_398._0_8_ * local_358;
    dVar53 = dVar56 * dVar8 - dVar56 * dVar8;
    dVar55 = dVar55 + dVar55;
    dVar52 = dVar52 + dVar52;
    dVar40 = dVar40 + dVar40;
    dVar53 = dVar53 + dVar53;
    dVar34 = dVar34 + (dVar40 * dStack_350 - dVar2 * dVar52) + dVar8 * dVar55 + dVar39;
    dVar50 = dVar50 + (dVar55 * dVar2 - dVar40 * local_358) + dVar8 * dVar52 + dVar44;
    dVar39 = (double)local_3a8._0_8_ +
             (dVar52 * local_358 - dStack_350 * dVar55) + dVar8 * dVar40 + (double)local_398._0_8_;
    dVar44 = (double)local_3a8._8_8_ + (dVar53 * dVar8 - dVar53 * dVar8) + dVar8 * dVar53 + dVar56;
    auVar60._8_8_ =
         (double)CONCAT44(*(undefined4 *)((longlong)pdVar19 + 0x4c),local_378._8_4_) * dVar49;
    auVar60._0_8_ = (double)CONCAT44(local_378._4_4_,local_378._0_4_) * dVar48;
    uVar14 = 0;
    local_398 = auVar31;
  }
  else {
    dVar44 = dStack_350 + dStack_350;
    dVar56 = dVar2 + dVar2;
    dVar61 = local_358 * (local_358 + local_358);
    dVar62 = (local_358 + local_358) * dVar8;
    dVar38 = (double)local_388._0_8_ * dVar68;
    local_1a8 = (1.0 - (dVar61 + dStack_350 * dVar44)) * dVar68;
    local_1d8 = (dVar44 * local_358 - dVar56 * dVar8) * dVar49;
    dVar39 = (dVar56 * dStack_350 - dVar62) * dVar68;
    local_378._0_8_ = auVar11._0_8_;
    local_378._8_8_ = SUB168(*pauVar1,8);
    dVar40 = (double)local_378._0_8_ * dVar48;
    dVar55 = (double)local_378._8_8_ * dVar49;
    local_1f8 = ((double)DAT_149934d80 - (dVar2 * dVar56 + dStack_350 * dVar44)) * dVar48;
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar2 * dVar56 + dVar61)) * dVar49;
    dStack_1f0 = (dVar44 * local_358 + dVar56 * dVar8) * dVar48;
    local_1c8 = (dVar56 * dStack_350 + dVar62) * dVar49;
    local_1e8 = (local_358 * dVar56 - dVar44 * dVar8) * dVar48;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar39,0);
    local_1b8._0_8_ = (local_358 * dVar56 + dVar44 * dVar8) * dVar68;
    local_1b8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    uStack_1a0 = 0;
    local_198._8_4_ = SUB84(dVar50,0);
    local_198._0_8_ = dVar34;
    local_198._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    local_188 = (double)local_3a8._0_8_;
    uStack_180 = 0x3ff0000000000000;
    dVar34 = dStack_340 + dStack_340;
    dVar39 = dVar53 + dVar53;
    dVar50 = local_348 * (local_348 + local_348);
    local_228 = (1.0 - (dVar50 + dStack_340 * dVar34)) * (double)local_388._0_8_;
    dVar44 = (local_348 + local_348) * dVar52;
    local_238 = (dVar34 * dVar52 + local_348 * dVar39) * (double)local_388._0_8_;
    local_258 = (dVar34 * local_348 - dVar39 * dVar52) * (double)local_378._8_8_;
    dStack_230 = (dVar39 * dStack_340 - dVar44) * (double)local_388._0_8_;
    local_278 = ((double)DAT_149934d80 - (dVar53 * dVar39 + dStack_340 * dVar34)) *
                (double)local_378._0_8_;
    dStack_250 = (DAT_149934d80._8_8_ - (dVar53 * dVar39 + dVar50)) * (double)local_378._8_8_;
    dStack_270 = (dVar34 * local_348 + dVar39 * dVar52) * (double)local_378._0_8_;
    local_248 = (dVar39 * dStack_340 + dVar44) * (double)local_378._8_8_;
    local_268 = (local_348 * dVar39 - dVar34 * dVar52) * (double)local_378._0_8_;
    auVar60._8_8_ = dVar55;
    auVar60._0_8_ = dVar40;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_208 = (double)local_398._0_8_;
    uStack_200 = 0x3ff0000000000000;
    local_378 = *pauVar1;
    local_218 = local_368;
    dStack_210 = dStack_360;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar29._8_8_ = -(ulonglong)(0.0 <= dVar55);
    auVar29._0_8_ = -(ulonglong)(0.0 <= dVar40);
    auVar27 = blendvpd(_DAT_149936790,auVar69,auVar29);
    uVar25 = -(ulonglong)(0.0 <= dVar38);
    dVar39 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
    dVar44 = auVar27._0_8_;
    local_168 = local_168 * dVar44;
    dStack_170 = dStack_170 * dVar44;
    local_178 = local_178 * dVar44;
    dVar44 = auVar27._8_8_;
    local_148 = local_148 * dVar44;
    local_150 = local_150 * dVar44;
    local_158 = dVar44 * local_158;
    local_128 = local_128 * dVar39;
    local_130 = local_130 * dVar39;
    local_138 = dVar39 * local_138;
    pdVar22 = &local_338;
    iVar15 = FUN_14481fd10(pdVar22,&local_178);
    uVar14 = SUB84(pdVar22,0);
    dVar39 = (double)local_328._0_8_ * (double)local_328._0_8_ + local_338 * local_338;
    dVar44 = (double)local_328._8_8_ * (double)local_328._8_8_ + dStack_330 * dStack_330;
    auVar42._0_8_ = dVar39 + dVar44;
    auVar42._8_8_ = dVar39 + dVar44;
    auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    auVar27 = sqrtpd(auVar42,auVar42);
    auVar69 = divpd(auVar69,auVar27);
    auVar70._0_8_ = auVar69._0_8_ * (double)local_328._0_8_;
    auVar70._8_8_ = auVar69._8_8_ * (double)local_328._8_8_;
    dVar61 = (double)((ulonglong)(local_338 * auVar69._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
    dVar38 = (double)((ulonglong)(dStack_330 * auVar69._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
    auVar64 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar70,auVar30);
    dVar44 = 0.0;
    dVar34 = local_118;
    dVar50 = dStack_110;
    dVar39 = local_108;
  }
  auVar27 = _DAT_149934d80;
  dVar68 = (double)uVar21 * dVar68;
  dVar48 = (double)uVar12 * auVar31._8_8_;
  local_378._8_4_ = SUB84(dVar50,0);
  local_378._0_8_ = dVar34;
  local_378._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
  local_308 = 0.0;
  dStack_300 = 0.0;
  local_318 = 0.0;
  dStack_310 = 0.0;
  auVar69 = *(undefined1 (*) [16])(param_3 + 8);
  dVar40 = auVar69._0_8_;
  dVar2 = auVar69._8_8_;
  auVar31 = *(undefined1 (*) [16])(param_3 + 10);
  dVar50 = auVar31._0_8_;
  dVar8 = auVar31._8_8_;
  auVar69 = minpd(auVar60,auVar69);
  auVar36._8_8_ = dVar48;
  auVar36._0_8_ = dVar68;
  auVar46 = minpd(auVar36,auVar31);
  auVar31._8_8_ = -(ulonglong)(auVar69._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar69._0_8_ < 0.0);
  iVar20 = movmskpd(iVar15,auVar31);
  auVar37._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
  auVar37._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
  uVar23 = movmskpd(uVar14,auVar37);
  dVar49 = auVar64._0_8_;
  dVar53 = auVar64._8_8_;
  local_388._0_8_ = auVar60._0_8_;
  uVar21 = local_388._0_8_;
  local_388._8_8_ = auVar60._8_8_;
  uVar12 = local_388._8_8_;
  local_388 = auVar60;
  if ((uVar23 & 0x3fffffff) == 0 && iVar20 == 0) {
    dVar57 = *param_3;
    dVar58 = param_3[1];
    dVar55 = param_3[3];
    dVar52 = param_3[3];
    dVar62 = param_3[1];
    dVar56 = param_3[1];
    dVar63 = param_3[2];
    dVar9 = param_3[3];
    dVar3 = param_3[2];
    dVar4 = param_3[2];
    local_338 = dVar38 * dVar3 * -1.0 + dVar49 * dVar62 + dVar53 * *param_3 * 1.0 + dVar61 * dVar55;
    dStack_330 = dVar61 * dVar4 * 1.0 + dVar53 * dVar56 + dVar49 * *param_3 * -1.0 + dVar38 * dVar52
    ;
    dVar34 = dVar34 * dVar40;
    dVar7 = (double)local_378._8_8_ * dVar2;
    dVar39 = dVar39 * dVar50;
    dVar44 = dVar44 * dVar8;
    dVar51 = dVar7 * dVar57 - dVar34 * dVar58;
    dVar54 = dVar39 * dVar58 - dVar7 * dVar63;
    dVar41 = dVar34 * dVar63 - dVar39 * dVar57;
    dVar45 = dVar44 * dVar9 - dVar44 * dVar9;
    dVar54 = dVar54 + dVar54;
    dVar41 = dVar41 + dVar41;
    dVar51 = dVar51 + dVar51;
    dVar45 = dVar45 + dVar45;
    local_318 = (dVar51 * dVar58 - dVar63 * dVar41) + dVar55 * dVar54 + dVar34 + param_3[4];
    dStack_310 = (dVar54 * dVar63 - dVar51 * dVar57) + dVar52 * dVar41 + dVar7 + param_3[5];
    local_308 = (dVar41 * dVar57 - dVar58 * dVar54) + dVar55 * dVar51 + dVar39 + param_3[6];
    dStack_300 = (dVar45 * dVar9 - dVar45 * dVar9) + dVar52 * dVar45 + dVar44 + param_3[7];
    local_328._8_8_ =
         dVar49 * dVar4 * -1.0 + ((*param_3 * dVar61 * -1.0 + dVar53 * dVar52) - dVar38 * dVar56);
    local_328._0_8_ =
         dVar53 * dVar3 * 1.0 + ((*param_3 * dVar38 * 1.0 + dVar49 * dVar55) - dVar61 * dVar62);
  }
  else {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar7 = param_3[2];
    local_3a8._8_4_ = SUB84(dVar44,0);
    local_3a8._0_8_ = dVar39;
    local_3a8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    dVar52 = dVar4 + dVar4;
    dVar55 = dVar7 + dVar7;
    dVar57 = dVar3 * (dVar3 + dVar3);
    dVar44 = param_3[3];
    dVar56 = dVar55 * dVar44;
    dVar62 = (dVar3 + dVar3) * param_3[3];
    dVar44 = dVar52 * dVar44;
    local_398._8_8_ = dVar48 * dVar8;
    local_398._0_8_ = dVar68 * dVar50;
    local_1a8 = (1.0 - (dVar57 + dVar4 * dVar52)) * dVar50;
    local_1d8 = (dVar52 * dVar3 - dVar56) * dVar2;
    dVar58 = (double)local_388._0_8_ * dVar40;
    dVar63 = (double)local_388._8_8_ * dVar2;
    local_1f8 = ((double)DAT_149934d80 - (dVar7 * dVar55 + dVar4 * dVar52)) * dVar40;
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar7 * dVar55 + dVar57)) * dVar2;
    dStack_1f0 = (dVar52 * dVar3 + dVar56) * dVar40;
    local_1c8 = (dVar55 * dVar4 + dVar62) * dVar2;
    local_1e8 = (*param_3 * dVar55 - dVar44) * dVar40;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_8_ = (dVar55 * dVar4 - dVar62) * dVar50;
    local_1b8._0_8_ = (dVar44 + *param_3 * dVar55) * dVar50;
    uStack_1a0 = 0;
    local_198 = *(undefined1 (*) [16])(param_3 + 4);
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar56 = dVar38 + dVar38;
    dVar44 = dVar49 + dVar49;
    dVar55 = dVar61 * (dVar61 + dVar61);
    local_228 = (1.0 - (dVar55 + dVar38 * dVar56)) * dVar68;
    dVar52 = (dVar61 + dVar61) * dVar53;
    local_238 = (dVar61 * dVar44 + dVar56 * dVar53) * dVar68;
    local_258 = (dVar56 * dVar61 - dVar44 * dVar53) * (double)local_388._8_8_;
    dStack_230 = (dVar44 * dVar38 - dVar52) * dVar68;
    local_278 = ((double)DAT_149934d80 - (dVar49 * dVar44 + dVar38 * dVar56)) *
                (double)local_388._0_8_;
    dStack_250 = (DAT_149934d80._8_8_ - (dVar49 * dVar44 + dVar55)) * (double)local_388._8_8_;
    dStack_270 = (dVar56 * dVar61 + dVar44 * dVar53) * (double)local_388._0_8_;
    local_248 = (dVar44 * dVar38 + dVar52) * (double)local_388._8_8_;
    local_268 = (dVar61 * dVar44 - dVar56 * dVar53) * (double)local_388._0_8_;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    dStack_210 = (double)local_378._8_8_;
    uStack_200 = 0x3ff0000000000000;
    local_218 = dVar34;
    local_208 = dVar39;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar32._8_8_ = -(ulonglong)(0.0 <= dVar63);
    auVar32._0_8_ = -(ulonglong)(0.0 <= dVar58);
    auVar69 = blendvpd(_DAT_149936790,auVar27,auVar32);
    uVar25 = -(ulonglong)(0.0 <= dVar68 * dVar50);
    dVar39 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
    dVar44 = auVar69._0_8_;
    local_168 = local_168 * dVar44;
    dStack_170 = dStack_170 * dVar44;
    local_178 = local_178 * dVar44;
    dVar44 = auVar69._8_8_;
    local_148 = local_148 * dVar44;
    local_150 = local_150 * dVar44;
    local_158 = dVar44 * local_158;
    local_128 = local_128 * dVar39;
    local_130 = local_130 * dVar39;
    local_138 = dVar39 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    auVar43._0_8_ = local_298 * local_298;
    auVar43._8_8_ = dStack_290 * dStack_290;
    dVar39 = local_288 * local_288 + auVar43._0_8_;
    dVar44 = dStack_280 * dStack_280 + auVar43._8_8_;
    auVar47._0_8_ = dVar39 + dVar44;
    auVar47._8_8_ = dVar39 + dVar44;
    auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
    auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
    auVar69 = sqrtpd(auVar43,auVar47);
    auVar69 = divpd(auVar27,auVar69);
    auVar71._0_8_ = auVar69._0_8_ * local_288;
    auVar71._8_8_ = auVar69._8_8_ * dStack_280;
    local_338 = (double)((ulonglong)(local_298 * auVar69._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_));
    dStack_330 = (double)((ulonglong)(dStack_290 * auVar69._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
    local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar33);
    local_318 = local_118;
    dStack_310 = dStack_110;
    local_308 = local_108;
    dStack_300 = 0.0;
  }
  dStack_2e0 = dVar48 * dVar8;
  local_2e8 = dVar68 * dVar50;
  dStack_2f0 = (double)uVar12 * dVar2;
  local_2f8 = (double)uVar21 * dVar40;
  FUN_144a80a4c(&local_2d0,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3c8);
}



// FUNCTION 147e8d20c FUN_147e8d20c body=39 status=ok
// SIG undefined FUN_147e8d20c(void)

void FUN_147e8d20c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2d0,0x10);
  FUN_147e8ac5a(uVar1,param_1);
  return;
}



// FUNCTION 147e8d234 FUN_147e8d234 body=171 status=ok
// SIG undefined FUN_147e8d234(void)

void FUN_147e8d234(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_3[1];
  iVar3 = *(int *)(param_1 + 0x2b0) + iVar2;
  if (-1 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x2a8);
    if (*(int *)(param_1 + 0x2b4) < iVar3) {
      FUN_147e909c6(plVar1);
      iVar2 = (int)param_3[1];
    }
    if (iVar2 != 0) {
      lVar5 = *param_3;
      lVar4 = (longlong)iVar2 * 0x70;
      do {
        iVar2 = *(int *)(param_1 + 0x2b0);
        *(uint *)(param_1 + 0x2b0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x2b4) < iVar2 + 1U) {
          FUN_147e90c7a(plVar1,iVar2);
        }
        FUN_147e90a36((longlong)iVar2 * 0x48 + *plVar1,param_2,lVar5);
        lVar5 = lVar5 + 0x70;
        lVar4 = lVar4 + -0x70;
      } while (lVar4 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 147e8d2e0 FUN_147e8d2e0 body=177 status=ok
// SIG undefined FUN_147e8d2e0(void)

void FUN_147e8d2e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = (int)param_3[1];
  iVar3 = *(int *)(param_1 + 0x2c0) + iVar2;
  if (-1 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x2b8);
    if (*(int *)(param_1 + 0x2c4) < iVar3) {
      FUN_147e90d0e(plVar1);
      iVar2 = (int)param_3[1];
    }
    if (iVar2 != 0) {
      lVar5 = *param_3;
      lVar4 = (longlong)iVar2 * 0xa0;
      do {
        iVar2 = *(int *)(param_1 + 0x2c0);
        *(uint *)(param_1 + 0x2c0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x2c4) < iVar2 + 1U) {
          FUN_147e91180(plVar1,iVar2);
        }
        FUN_147e90d7a((longlong)iVar2 * 0x78 + *plVar1,param_2,lVar5);
        lVar5 = lVar5 + 0xa0;
        lVar4 = lVar4 + -0xa0;
      } while (lVar4 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 147e8d39a FUN_147e8d39a body=544 status=ok
// SIG undefined FUN_147e8d39a(void)

void FUN_147e8d39a(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  uint local_88;
  longlong local_80;
  uint local_78;
  uint local_64;
  undefined8 local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x298) == 0) || (lVar4 = FUN_1447210f0(), lVar4 == 0))
  goto LAB_147e8d3d8;
  lVar4 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x298));
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x168), lVar4 == 0)) {
LAB_147e8d505:
    local_58[0] = 0;
    local_58[1] = 0;
    local_64 = 0;
  }
  else {
    lVar5 = FUN_1409035a4();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_147e8d505;
    local_58[0] = 0;
    local_58[1] = 0;
    iVar3 = *(int *)(lVar4 + 0xe8);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    local_64 = 0;
    if ((iVar3 != 0) && (FUN_14482f6fa(local_58), 0 < *(int *)(lVar4 + 0xe8))) {
      lVar5 = 0;
      lVar8 = 0;
      local_64 = 0;
      do {
        lVar1 = *(longlong *)(lVar4 + 0xe0);
        if (*(longlong *)(lVar1 + lVar8 * 8) != 0) {
          uVar6 = FUN_1459938ca();
          cVar2 = FUN_144a7ca96(lVar1 + lVar5,uVar6);
          if ((cVar2 != '\0') && (lVar1 = *(longlong *)(lVar1 + lVar8 * 8), lVar1 != 0)) {
            local_64 = local_64 | 1 << ((byte)lVar8 & 0x1f) & -(*(uint *)(lVar1 + 0x428) & 1);
          }
        }
        lVar8 = lVar8 + 1;
        lVar5 = lVar5 + 8;
      } while (lVar8 < *(int *)(lVar4 + 0xe8));
    }
  }
  local_60 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x498) + 0x2f0))();
  uVar6 = FUN_147e91210(*(undefined8 *)(param_5 + 0xe8));
  iVar3 = *(int *)(param_2 + 8);
  if (0 < iVar3) {
    uVar7 = 0;
    do {
      if ((param_4 >> (uVar7 & 0x1f) & 1) != 0) {
        local_78 = local_64;
        local_80 = param_5;
        local_88 = uVar7;
        FUN_147e8d5bc(param_1 + 0x2a8,param_1 + 0x2b8,local_58,uVar6);
        iVar3 = *(int *)(param_2 + 8);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar3);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_147e8d3d8:
  if ((local_58[2] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e8d5bc FUN_147e8d5bc body=5988 status=ok
// SIG undefined FUN_147e8d5bc(void)

void FUN_147e8d5bc(double *param_1,longlong *param_2,longlong *param_3,ulonglong param_4,int param_5
                  ,longlong param_6,uint param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  uint local_1a8;
  ulonglong local_1a0;
  undefined1 local_198;
  int local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  double *local_170;
  double *local_168;
  double *local_160;
  ulonglong local_158;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_148 = param_2;
  if ((int)param_3[1] == 0) {
    *(undefined4 *)(param_3 + 1) = 1;
    if (*(int *)((longlong)param_3 + 0xc) == 0) {
      FUN_14475e4ac(param_3);
    }
    *(undefined4 *)*param_3 = 0x42900000;
  }
  lVar7 = param_6 + 0x50;
  if (*(longlong *)(param_6 + 0x60) != 0) {
    lVar7 = *(longlong *)(param_6 + 0x60);
  }
  local_178 = *(undefined8 *)(lVar7 + (longlong)param_5 * 8);
  local_158 = param_4;
  local_150 = param_3;
  if (0 < *(int *)(param_1 + 1)) {
    pdVar4 = (double *)0x0;
    local_160 = param_1;
    do {
      local_168 = pdVar4;
      if ((*(uint *)((longlong)*local_160 + 0x40 + (longlong)pdVar4 * 0x48) & param_7) != 0) {
        pdVar6 = (double *)((longlong)*local_160 + (longlong)pdVar4 * 0x48);
        pdVar4 = pdVar6 + 3;
        dVar9 = (SQRT((pdVar6[5] - pdVar6[2]) * (pdVar6[5] - pdVar6[2]) +
                      (pdVar6[3] - *pdVar6) * (pdVar6[3] - *pdVar6) +
                      (pdVar6[4] - pdVar6[1]) * (pdVar6[4] - pdVar6[1])) * 0.4000000059604645) /
                10.0;
        if (dVar9 <= 8.0) {
          dVar9 = 8.0;
        }
        local_108 = (double)CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x35)],
                                     (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x36)]);
        uStack_100 = (double)CONCAT44((float)*(byte *)((longlong)pdVar6 + 0x37) * 0.003921569,
                                      (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x34)]);
        local_198 = 0;
        local_1a8 = local_1a8 & 0xffffff00;
        local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,(int)(longlong)dVar9);
        local_1a0 = CONCAT44(local_1a0._4_4_,0x40600000);
        local_1b0 = &local_108;
        FUN_147cbbe88(local_178,pdVar6,pdVar4,0x3ecccccd);
        uVar2 = local_178;
        dVar9 = SQRT((pdVar6[5] - pdVar6[2]) * (pdVar6[5] - pdVar6[2]) +
                     (pdVar6[4] - pdVar6[1]) * (pdVar6[4] - pdVar6[1]) +
                     (pdVar6[3] - *pdVar6) * (pdVar6[3] - *pdVar6)) * 1.3329999446868896;
        pdVar5 = pdVar6;
        local_170 = pdVar4;
        if (*(int *)(pdVar6 + 6) == 2) {
          local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x35)],
                               (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x36)]);
          local_118 = CONCAT44((float)*(byte *)((longlong)pdVar6 + 0x37) * 0.003921569,
                               (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x34)]);
          local_f8 = pdVar6[5];
          uStack_100 = pdVar6[4];
          local_108 = pdVar6[3];
          uVar8 = (ulonglong)local_1a0._1_7_;
          uVar1 = (ulonglong)local_1b0._1_7_;
        }
        else {
          local_1b8 = &local_120;
          if (*(int *)(pdVar6 + 6) == 1) {
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x35)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x36)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar6 + 0x37) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x34)]);
            local_f8 = pdVar6[2];
            uStack_100 = pdVar6[1];
            local_108 = *pdVar6;
            uVar8 = local_1a0 >> 8;
            uVar1 = (ulonglong)local_1b0 >> 8;
            pdVar5 = pdVar4;
          }
          else {
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x35)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x36)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar6 + 0x37) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x34)]);
            local_f8 = pdVar6[2] + dVar9;
            uStack_100 = pdVar6[1] + 0.0;
            local_108 = *pdVar6 + 0.0;
            local_1a0 = (ulonglong)local_1a0._1_7_ << 8;
            local_1a8 = 0x40600000;
            local_1b0 = (undefined8 *)((ulonglong)local_1b0._1_7_ << 8);
            FUN_147cbc162(local_178,pdVar4,&local_108,0x41f00000);
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x35)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x36)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar6 + 0x37) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar6 + 0x34)]);
            local_f8 = pdVar6[5];
            uStack_100 = pdVar6[4];
            local_108 = pdVar6[3];
            uVar8 = local_1a0 >> 8;
            uVar1 = (ulonglong)local_1b0 >> 8;
          }
        }
        local_f8 = dVar9 + local_f8;
        uStack_100 = uStack_100 + 0.0;
        local_108 = local_108 + 0.0;
        local_1a0 = uVar8 << 8;
        local_1a8 = 0x40600000;
        local_1b0 = (undefined8 *)(uVar1 << 8);
        local_1b8 = &local_120;
        FUN_147cbc162(uVar2,pdVar5,&local_108,0x41f00000);
        uVar8 = local_158;
        if (0.0 <= *(float *)((longlong)pdVar6 + 0x3c)) {
          local_1b8 = (undefined8 *)(double)*(float *)(pdVar6 + 7);
          local_1b0 = (undefined8 *)(double)*(float *)((longlong)pdVar6 + 0x3c);
          local_108 = 0.0;
          uStack_100 = 0.0;
          local_f8 = 1.0;
          local_120 = 0;
          local_118 = 0x3ff0000000000000;
          local_110 = 0;
          local_138 = 0x3ff0000000000000;
          local_130 = 0;
          uStack_128 = 0;
          local_180 = 0;
          local_188 = param_6;
          local_190 = param_5;
          local_198 = 0;
          local_1a0 = local_158;
          local_1a8 = 10;
          FUN_147cb5f7c(local_170,&local_138,&local_120,&local_108);
          local_1b0 = (undefined8 *)(double)*(float *)((longlong)pdVar6 + 0x3c);
          local_1b8 = (undefined8 *)(double)*(float *)(pdVar6 + 7);
          local_108 = 0.0;
          uStack_100 = 0.0;
          local_f8 = 1.0;
          local_120 = 0;
          local_118 = 0x3ff0000000000000;
          local_110 = 0;
          local_138 = 0x3ff0000000000000;
          local_130 = 0;
          uStack_128 = 0;
          local_180 = 0;
          local_188 = param_6;
          local_190 = param_5;
          local_198 = 0;
          local_1a0 = uVar8;
          local_1a8 = 10;
          FUN_147cb5f7c(pdVar6,&local_138,&local_120);
        }
        else if (0 < (int)local_150[1]) {
          lVar7 = 0;
          do {
            local_1b0 = (undefined8 *)(double)*(float *)(*local_150 + lVar7 * 4);
            local_1b8 = (undefined8 *)(double)*(float *)(pdVar6 + 7);
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_f8 = 1.0;
            local_120 = 0;
            local_118 = 0x3ff0000000000000;
            local_110 = 0;
            local_138 = 0x3ff0000000000000;
            local_130 = 0;
            uStack_128 = 0;
            local_180 = 0;
            local_188 = param_6;
            local_190 = param_5;
            local_198 = 0;
            local_1a8 = 10;
            local_1a0 = uVar8;
            FUN_147cb5f7c(local_170,local_1b8,&local_120);
            uVar8 = local_158;
            local_1b0 = (undefined8 *)(double)*(float *)(*local_150 + lVar7 * 4);
            local_1b8 = (undefined8 *)(double)*(float *)(pdVar6 + 7);
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_f8 = 1.0;
            local_120 = 0;
            local_118 = 0x3ff0000000000000;
            local_110 = 0;
            local_138 = 0x3ff0000000000000;
            local_130 = 0;
            uStack_128 = 0;
            local_180 = 0;
            local_188 = param_6;
            local_190 = param_5;
            local_198 = 0;
            local_1a0 = local_158;
            local_1a8 = 10;
            FUN_147cb5f7c(pdVar6,&local_138,&local_120,&local_108);
            lVar7 = lVar7 + 1;
          } while (lVar7 < (int)local_150[1]);
        }
      }
      pdVar4 = (double *)((longlong)local_168 + 1);
    } while ((longlong)pdVar4 < (longlong)*(int *)(local_160 + 1));
  }
  if (0 < (int)local_148[1]) {
    lVar7 = 0;
    do {
      uVar2 = local_178;
      local_140 = lVar7;
      if ((*(uint *)(*local_148 + 0x70 + lVar7 * 0x78) & param_7) != 0) {
        pdVar4 = (double *)(*local_148 + lVar7 * 0x78);
        local_168 = pdVar4 + 6;
        dVar9 = (SQRT((pdVar4[8] - pdVar4[2]) * (pdVar4[8] - pdVar4[2]) +
                      (pdVar4[6] - *pdVar4) * (pdVar4[6] - *pdVar4) +
                      (pdVar4[7] - pdVar4[1]) * (pdVar4[7] - pdVar4[1])) * 0.25) / 10.0;
        if (dVar9 <= 8.0) {
          dVar9 = 8.0;
        }
        local_170 = pdVar4 + 3;
        dVar10 = (SQRT((pdVar4[0xb] - pdVar4[5]) * (pdVar4[0xb] - pdVar4[5]) +
                       (pdVar4[9] - pdVar4[3]) * (pdVar4[9] - pdVar4[3]) +
                       (pdVar4[10] - pdVar4[4]) * (pdVar4[10] - pdVar4[4])) * 0.25) / 10.0;
        if (dVar10 <= 8.0) {
          dVar10 = 8.0;
        }
        local_108 = (double)CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                     (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
        uStack_100 = (double)CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                      (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
        local_198 = 0;
        local_1a0._0_4_ = 0x40600000;
        local_1a8 = local_1a8 & 0xffffff00;
        local_1b0 = &local_108;
        local_1b8._0_4_ = (int)(longlong)dVar9;
        FUN_147cbbe88(local_178,pdVar4,local_168,0x3e800000);
        pdVar6 = local_170;
        local_108 = (double)CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                     (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
        uStack_100 = (double)CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                      (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
        local_198 = 0;
        local_1a0 = CONCAT44(local_1a0._4_4_,0x40600000);
        local_1a8 = local_1a8 & 0xffffff00;
        local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,(int)(longlong)dVar10);
        local_1b0 = &local_108;
        local_160 = pdVar4 + 9;
        FUN_147cbbe88(uVar2,local_170,pdVar4 + 9,0x3e800000);
        uVar2 = local_178;
        dVar9 = SQRT((pdVar4[8] - pdVar4[2]) * (pdVar4[8] - pdVar4[2]) +
                     (pdVar4[7] - pdVar4[1]) * (pdVar4[7] - pdVar4[1]) +
                     (pdVar4[6] - *pdVar4) * (pdVar4[6] - *pdVar4)) * 1.3329999446868896;
        if (*(int *)(pdVar4 + 0xc) == 2) {
          local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                               (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
          local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                               (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
          local_f8 = pdVar4[8] + dVar9;
          uStack_100 = pdVar4[7] + 0.0;
          local_108 = pdVar4[6] + 0.0;
          local_1a0 = (ulonglong)local_1a0._1_7_ << 8;
          local_1a8 = 0x40600000;
          local_1b0 = (undefined8 *)((ulonglong)local_1b0._1_7_ << 8);
          local_1b8 = &local_120;
          FUN_147cbc162(local_178,pdVar4,&local_108,0x41f00000);
          local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                               (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
          local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                               (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
          local_f8 = dVar9 + pdVar4[0xb];
          uStack_100 = pdVar4[10] + 0.0;
          local_108 = pdVar4[9] + 0.0;
          local_1a0 = local_1a0 & 0xffffffffffffff00;
          local_1a8 = 0x40600000;
          local_1b0 = (undefined8 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
          local_1b8 = &local_120;
          FUN_147cbc162(uVar2,pdVar6,&local_108,0x41f00000);
        }
        else {
          local_1b8 = &local_120;
          if (*(int *)(pdVar4 + 0xc) == 1) {
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
            local_f8 = pdVar4[2] + dVar9;
            uStack_100 = pdVar4[1] + 0.0;
            local_108 = *pdVar4 + 0.0;
            local_1a0 = local_1a0 & 0xffffffffffffff00;
            local_1a8 = 0x40600000;
            local_1b0 = (undefined8 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
            FUN_147cbc162(local_178,local_168,&local_108,0x41f00000);
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
            local_f8 = pdVar4[5];
            uStack_100 = pdVar4[4];
            local_108 = pdVar4[3];
            pdVar6 = local_160;
          }
          else {
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
            local_f8 = pdVar4[2] + dVar9;
            uStack_100 = pdVar4[1] + 0.0;
            local_108 = *pdVar4 + 0.0;
            local_1a0 = (ulonglong)local_1a0._1_7_ << 8;
            local_1a8 = 0x40600000;
            local_1b0 = (undefined8 *)((ulonglong)local_1b0._1_7_ << 8);
            FUN_147cbc162(local_178,local_168,&local_108,0x41f00000);
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
            local_f8 = pdVar4[5] + dVar9;
            uStack_100 = pdVar4[4] + 0.0;
            local_108 = pdVar4[3] + 0.0;
            local_1a0 = local_1a0 & 0xffffffffffffff00;
            local_1a8 = 0x40600000;
            local_1b0 = (undefined8 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
            local_1b8 = &local_120;
            FUN_147cbc162(uVar2,local_160,&local_108,0x41f00000);
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
            local_f8 = pdVar4[8] + dVar9;
            uStack_100 = pdVar4[7] + 0.0;
            local_108 = pdVar4[6] + 0.0;
            local_1a0 = local_1a0 & 0xffffffffffffff00;
            local_1a8 = 0x40600000;
            local_1b0 = (undefined8 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
            local_1b8 = &local_120;
            FUN_147cbc162(uVar2,pdVar4,&local_108,0x41f00000);
            local_120 = CONCAT44((&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x65)],
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 0x66)]);
            local_118 = CONCAT44((float)*(byte *)((longlong)pdVar4 + 0x67) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)((longlong)pdVar4 + 100)]);
            local_f8 = pdVar4[0xb];
            uStack_100 = pdVar4[10];
            local_108 = pdVar4[9];
            pdVar6 = local_170;
          }
          local_f8 = dVar9 + local_f8;
          uStack_100 = uStack_100 + 0.0;
          local_108 = local_108 + 0.0;
          local_1a0 = local_1a0 & 0xffffffffffffff00;
          local_1a8 = 0x40600000;
          local_1b0 = (undefined8 *)((ulonglong)local_1b0 & 0xffffffffffffff00);
          local_1b8 = &local_120;
          FUN_147cbc162(uVar2,pdVar6,&local_108,0x41f00000);
        }
        plVar3 = local_150;
        uVar8 = local_158;
        if (0.0 <= *(float *)((longlong)pdVar4 + 0x6c)) {
          local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
          local_1b0 = (undefined8 *)(double)*(float *)((longlong)pdVar4 + 0x6c);
          local_108 = 0.0;
          uStack_100 = 0.0;
          local_f8 = 1.0;
          local_120 = 0;
          local_118 = 0x3ff0000000000000;
          local_110 = 0;
          local_138 = 0x3ff0000000000000;
          local_130 = 0;
          uStack_128 = 0;
          local_180 = 0;
          local_188 = param_6;
          local_190 = param_5;
          local_198 = 0;
          local_1a0 = local_158;
          local_1a8 = 10;
          FUN_147cb5f7c(local_168,&local_138,&local_120,&local_108);
          local_1b0 = (undefined8 *)(double)*(float *)((longlong)pdVar4 + 0x6c);
          local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
          local_108 = 0.0;
          uStack_100 = 0.0;
          local_f8 = 1.0;
          local_120 = 0;
          local_118 = 0x3ff0000000000000;
          local_110 = 0;
          local_138 = 0x3ff0000000000000;
          local_130 = 0;
          uStack_128 = 0;
          local_180 = 0;
          local_188 = param_6;
          local_190 = param_5;
          local_198 = 0;
          local_1a0 = uVar8;
          local_1a8 = 10;
          FUN_147cb5f7c(local_160,&local_138,&local_120,&local_108);
          local_1b0 = (undefined8 *)(double)*(float *)((longlong)pdVar4 + 0x6c);
          local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
          local_108 = 0.0;
          uStack_100 = 0.0;
          local_f8 = 1.0;
          local_120 = 0;
          local_118 = 0x3ff0000000000000;
          local_110 = 0;
          local_138 = 0x3ff0000000000000;
          local_130 = 0;
          uStack_128 = 0;
          local_180 = 0;
          local_188 = param_6;
          local_190 = param_5;
          local_198 = 0;
          local_1a0 = uVar8;
          local_1a8 = 10;
          FUN_147cb5f7c(pdVar4,&local_138,&local_120,&local_108);
          local_1b0 = (undefined8 *)(double)*(float *)((longlong)pdVar4 + 0x6c);
          local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
          local_108 = 0.0;
          uStack_100 = 0.0;
          local_f8 = 1.0;
          local_120 = 0;
          local_118 = 0x3ff0000000000000;
          local_110 = 0;
          local_138 = 0x3ff0000000000000;
          local_130 = 0;
          uStack_128 = 0;
          local_180 = 0;
          local_188 = param_6;
          local_190 = param_5;
          local_198 = 0;
          local_1a0 = uVar8;
          local_1a8 = 10;
          FUN_147cb5f7c(local_170,&local_138,&local_120);
        }
        else if (0 < (int)local_150[1]) {
          lVar7 = 0;
          do {
            local_1b0 = (undefined8 *)(double)*(float *)(*plVar3 + lVar7 * 4);
            local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_f8 = 1.0;
            local_120 = 0;
            local_118 = 0x3ff0000000000000;
            local_110 = 0;
            local_138 = 0x3ff0000000000000;
            local_130 = 0;
            uStack_128 = 0;
            local_180 = 0;
            local_188 = param_6;
            local_190 = param_5;
            local_198 = 0;
            local_1a0 = uVar8;
            local_1a8 = 10;
            FUN_147cb5f7c(local_168,&local_138,&local_120,&local_108);
            local_1b0 = (undefined8 *)(double)*(float *)(*plVar3 + lVar7 * 4);
            local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_f8 = 1.0;
            local_120 = 0;
            local_118 = 0x3ff0000000000000;
            local_110 = 0;
            local_138 = 0x3ff0000000000000;
            local_130 = 0;
            uStack_128 = 0;
            local_180 = 0;
            local_188 = param_6;
            local_190 = param_5;
            local_198 = 0;
            local_1a0 = uVar8;
            local_1a8 = 10;
            FUN_147cb5f7c(local_160,&local_138,&local_120,&local_108);
            local_1b0 = (undefined8 *)(double)*(float *)(*plVar3 + lVar7 * 4);
            local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_f8 = 1.0;
            local_120 = 0;
            local_118 = 0x3ff0000000000000;
            local_110 = 0;
            local_138 = 0x3ff0000000000000;
            local_130 = 0;
            uStack_128 = 0;
            local_180 = 0;
            local_188 = param_6;
            local_190 = param_5;
            local_198 = 0;
            local_1a0 = uVar8;
            local_1a8 = 10;
            FUN_147cb5f7c(pdVar4,&local_138,&local_120,&local_108);
            local_1b0 = (undefined8 *)(double)*(float *)(*plVar3 + lVar7 * 4);
            local_1b8 = (undefined8 *)(double)*(float *)(pdVar4 + 0xd);
            local_108 = 0.0;
            uStack_100 = 0.0;
            local_f8 = 1.0;
            local_120 = 0;
            local_118 = 0x3ff0000000000000;
            local_110 = 0;
            local_138 = 0x3ff0000000000000;
            local_130 = 0;
            uStack_128 = 0;
            local_180 = 0;
            local_188 = param_6;
            local_190 = param_5;
            local_198 = 0;
            local_1a0 = uVar8;
            local_1a8 = 10;
            FUN_147cb5f7c(local_170,&local_138,&local_120);
            lVar7 = lVar7 + 1;
          } while (lVar7 < (int)plVar3[1]);
        }
      }
      lVar7 = local_140 + 1;
    } while (lVar7 < (int)local_148[1]);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e8ed4a FUN_147e8ed4a body=112 status=ok
// SIG undefined FUN_147e8ed4a(void)

void FUN_147e8ed4a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_140206818();
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       ((*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30 && (*(char *)(param_1 + 0x178) == '\x03')))) {
                    /* WARNING: Could not recover jumptable at 0x000147e8edb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x410))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e8edba FUN_147e8edba body=112 status=ok
// SIG undefined FUN_147e8edba(void)

void FUN_147e8edba(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1401bf1e0();
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x168), plVar1 != (longlong *)0x0)) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       ((*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30 && (*(char *)(param_1 + 0x178) == '\x03')))) {
                    /* WARNING: Could not recover jumptable at 0x000147e8ee27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x418))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e8eecc FUN_147e8eecc body=458 status=ok
// SIG undefined FUN_147e8eecc(void)

void FUN_147e8eecc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_88 [36];
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [48];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_60 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  if ((local_58 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c();
  }
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e8f1c2 FUN_147e8f1c2 body=75 status=ok
// SIG undefined FUN_147e8f1c2(void)

void FUN_147e8f1c2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147e8f20e(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e8f20e FUN_147e8f20e body=293 status=ok
// SIG undefined FUN_147e8f20e(void)

void FUN_147e8f20e(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  uint local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402d084a();
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  local_28 = 0;
  lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  puVar3 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_28);
    }
  }
  else {
    local_28 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    (**(code **)(*param_2 + 0x1a0))(param_2,lVar4 + (ulonglong)local_28);
    (**(code **)(*param_1 + 0x640))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e8f356 FUN_147e8f356 body=45 status=ok
// SIG undefined FUN_147e8f356(void)

longlong FUN_147e8f356(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145dadf76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f38a FUN_147e8f38a body=48 status=ok
// SIG undefined FUN_147e8f38a(void)

longlong FUN_147e8f38a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145dadf76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f3c2 FUN_147e8f3c2 body=48 status=ok
// SIG undefined FUN_147e8f3c2(void)

longlong FUN_147e8f3c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145dadf76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f3fa FUN_147e8f3fa body=48 status=ok
// SIG undefined FUN_147e8f3fa(void)

longlong FUN_147e8f3fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145dadf76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f436 FUN_147e8f436 body=45 status=ok
// SIG undefined FUN_147e8f436(void)

longlong FUN_147e8f436(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459b7a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f46a FUN_147e8f46a body=48 status=ok
// SIG undefined FUN_147e8f46a(void)

longlong FUN_147e8f46a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_1459b7a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f4a6 FUN_147e8f4a6 body=26 status=ok
// SIG undefined FUN_147e8f4a6(void)

undefined8 * FUN_147e8f4a6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 147e8f4d4 FUN_147e8f4d4 body=48 status=ok
// SIG undefined FUN_147e8f4d4(void)

longlong FUN_147e8f4d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x160;
  FUN_1459b7a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f514 FUN_147e8f514 body=45 status=ok
// SIG undefined FUN_147e8f514(void)

longlong FUN_147e8f514(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f542 FUN_147e8f542 body=48 status=ok
// SIG undefined FUN_147e8f542(void)

longlong FUN_147e8f542(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f572 FUN_147e8f572 body=48 status=ok
// SIG undefined FUN_147e8f572(void)

longlong FUN_147e8f572(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f5a2 FUN_147e8f5a2 body=48 status=ok
// SIG undefined FUN_147e8f5a2(void)

longlong FUN_147e8f5a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f5d2 FUN_147e8f5d2 body=38 status=ok
// SIG undefined FUN_147e8f5d2(void)

undefined8 FUN_147e8f5d2(undefined8 param_1,int param_2)

{
  FUN_147e9129e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f5f8 FUN_147e8f5f8 body=45 status=ok
// SIG undefined FUN_147e8f5f8(void)

longlong FUN_147e8f5f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f626 FUN_147e8f626 body=48 status=ok
// SIG undefined FUN_147e8f626(void)

longlong FUN_147e8f626(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f656 FUN_147e8f656 body=48 status=ok
// SIG undefined FUN_147e8f656(void)

longlong FUN_147e8f656(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f686 FUN_147e8f686 body=48 status=ok
// SIG undefined FUN_147e8f686(void)

longlong FUN_147e8f686(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14585ef5e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8f6be FUN_147e8f6be body=56 status=ok
// SIG undefined FUN_147e8f6be(void)

void FUN_147e8f6be(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e8f6eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e8f6f6 FUN_147e8f6f6 body=56 status=ok
// SIG undefined FUN_147e8f6f6(void)

undefined8 FUN_147e8f6f6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e8f72e FUN_147e8f72e body=56 status=ok
// SIG undefined FUN_147e8f72e(void)

undefined8 FUN_147e8f72e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000040;
  
  plVar3 = *(longlong **)(in_stack_00000040 + 8);
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
  return 0;
}



// FUNCTION 147e8f766 FUN_147e8f766 body=86 status=ok
// SIG undefined FUN_147e8f766(void)

undefined4 * FUN_147e8f766(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  *(undefined8 *)(param_2 + 6) = 0;
  plVar3 = *(longlong **)(param_3 + 8);
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
  return param_2;
}



// FUNCTION 147e8f7bc FUN_147e8f7bc body=56 status=ok
// SIG undefined FUN_147e8f7bc(void)

undefined8 FUN_147e8f7bc(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e8f7f4 FUN_147e8f7f4 body=56 status=ok
// SIG undefined FUN_147e8f7f4(void)

undefined8 FUN_147e8f7f4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e8f82c FUN_147e8f82c body=56 status=ok
// SIG undefined FUN_147e8f82c(void)

void FUN_147e8f82c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e8f859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e8f864 FUN_147e8f864 body=56 status=ok
// SIG undefined FUN_147e8f864(void)

void FUN_147e8f864(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147e8f891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e8f89c FUN_147e8f89c body=56 status=ok
// SIG undefined FUN_147e8f89c(void)

undefined8 FUN_147e8f89c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e8f8d4 FUN_147e8f8d4 body=56 status=ok
// SIG undefined FUN_147e8f8d4(void)

undefined8 FUN_147e8f8d4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e8f90c FUN_147e8f90c body=56 status=ok
// SIG undefined FUN_147e8f90c(void)

undefined8 FUN_147e8f90c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000030;
  
  plVar3 = *(longlong **)(in_stack_00000030 + 8);
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
  return 0;
}



// FUNCTION 147e8f948 FUN_147e8f948 body=56 status=ok
// SIG undefined FUN_147e8f948(void)

undefined8 FUN_147e8f948(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e8f980 FUN_147e8f980 body=56 status=ok
// SIG undefined FUN_147e8f980(void)

undefined8 FUN_147e8f980(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_stack_00000028;
  
  plVar3 = *(longlong **)(in_stack_00000028 + 8);
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
  return 0;
}



// FUNCTION 147e8f9bc FUN_147e8f9bc body=58 status=ok
// SIG undefined FUN_147e8f9bc(void)

void FUN_147e8f9bc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x120);
  FUN_14133a832(param_2);
  *param_2 = &PTR_FUN_14abbf970;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 147e8f9f6 FUN_147e8f9f6 body=42 status=ok
// SIG undefined FUN_147e8f9f6(void)

void FUN_147e8f9f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_14133a832(param_2);
  *param_2 = &PTR_FUN_14abbf970;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 147e8fa5a FUN_147e8fa5a body=76 status=ok
// SIG undefined FUN_147e8fa5a(void)

undefined1 FUN_147e8fa5a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147764d36(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x114);
    uVar2 = *(undefined4 *)(param_3 + 0x118);
    uVar3 = *(undefined4 *)(param_3 + 0x11c);
    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_3 + 0x110);
    *(undefined4 *)(param_2 + 0x114) = uVar1;
    *(undefined4 *)(param_2 + 0x118) = uVar2;
    *(undefined4 *)(param_2 + 0x11c) = uVar3;
    param_2 = param_2 + 0x120;
    param_3 = param_3 + 0x120;
  }
  return 1;
}



// FUNCTION 147e8face FUN_147e8face body=59 status=ok
// SIG undefined FUN_147e8face(void)

undefined8 FUN_147e8face(longlong *param_1)

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



// FUNCTION 147e8fb1a FUN_147e8fb1a body=65 status=ok
// SIG undefined FUN_147e8fb1a(void)

void FUN_147e8fb1a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14a544ad0;
    if (param_2[0x20] != 0) {
      FUN_1400020a8();
    }
    FUN_140595d6e(param_2);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 147e8fbaa FUN_147e8fbaa body=68 status=ok
// SIG undefined FUN_147e8fbaa(void)

undefined8 * FUN_147e8fbaa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a544ad0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140595d6e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8fbf2 FUN_147e8fbf2 body=52 status=ok
// SIG undefined FUN_147e8fbf2(void)

void FUN_147e8fbf2(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_14072b932();
  if (param_3 != 1) {
    return;
  }
  FUN_147e8b124(param_2,param_1);
  return;
}



// FUNCTION 147e8fc28 FUN_147e8fc28 body=108 status=ok
// SIG undefined FUN_147e8fc28(void)

undefined8 FUN_147e8fc28(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  iVar4 = (int)(uVar2 / 0x30);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (param_3 < iVar5) {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x30,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return uVar3;
}



// FUNCTION 147e8fd94 FUN_147e8fd94 body=59 status=ok
// SIG undefined FUN_147e8fd94(void)

undefined8 FUN_147e8fd94(longlong *param_1)

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



// FUNCTION 147e8fec6 FUN_147e8fec6 body=59 status=ok
// SIG undefined FUN_147e8fec6(void)

undefined8 FUN_147e8fec6(longlong *param_1)

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



// FUNCTION 147e8ff68 FUN_147e8ff68 body=31 status=ok
// SIG undefined FUN_147e8ff68(void)

undefined8 FUN_147e8ff68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e8ffa4 FUN_147e8ffa4 body=93 status=ok
// SIG undefined FUN_147e8ffa4(void)

void FUN_147e8ffa4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abbfe60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e90002 FUN_147e90002 body=126 status=ok
// SIG undefined FUN_147e90002(void)

void FUN_147e90002(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14abbfe60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e90071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e90080 FUN_147e90080 body=21 status=ok
// SIG undefined FUN_147e90080(void)

undefined8 FUN_147e90080(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e90096 FUN_147e90096 body=31 status=ok
// SIG undefined FUN_147e90096(void)

undefined8 FUN_147e90096(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e900d8 FUN_147e900d8 body=93 status=ok
// SIG undefined FUN_147e900d8(void)

void FUN_147e900d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abbff80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abbff10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e90136 FUN_147e90136 body=93 status=ok
// SIG undefined FUN_147e90136(void)

void FUN_147e90136(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abbff80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abbff10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e90194 FUN_147e90194 body=126 status=ok
// SIG undefined FUN_147e90194(void)

void FUN_147e90194(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14abbff80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abbff10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e90203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e90222 FUN_147e90222 body=26 status=ok
// SIG undefined FUN_147e90222(void)

undefined8 FUN_147e90222(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 147e9023e FUN_147e9023e body=31 status=ok
// SIG undefined FUN_147e9023e(void)

undefined8 FUN_147e9023e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e90280 FUN_147e90280 body=93 status=ok
// SIG undefined FUN_147e90280(void)

void FUN_147e90280(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abc0060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abbfff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e902de FUN_147e902de body=93 status=ok
// SIG undefined FUN_147e902de(void)

void FUN_147e902de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abc0060;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abbfff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147e9033c FUN_147e9033c body=126 status=ok
// SIG undefined FUN_147e9033c(void)

void FUN_147e9033c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14abc0060;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abbfff0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e903ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e903ca FUN_147e903ca body=26 status=ok
// SIG undefined FUN_147e903ca(void)

undefined8 FUN_147e903ca(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 147e903e6 FUN_147e903e6 body=31 status=ok
// SIG undefined FUN_147e903e6(void)

undefined8 FUN_147e903e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e90420 FUN_147e90420 body=29 status=ok
// SIG undefined FUN_147e90420(void)

bool FUN_147e90420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e9043e FUN_147e9043e body=26 status=ok
// SIG undefined FUN_147e9043e(void)

bool FUN_147e9043e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147e90458 FUN_147e90458 body=24 status=ok
// SIG undefined FUN_147e90458(void)

bool FUN_147e90458(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147e90470 FUN_147e90470 body=101 status=ok
// SIG undefined FUN_147e90470(void)

void FUN_147e90470(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb6f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc00d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e904d6 FUN_147e904d6 body=101 status=ok
// SIG undefined FUN_147e904d6(void)

void FUN_147e904d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14abb6f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc00d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e9053c FUN_147e9053c body=134 status=ok
// SIG undefined FUN_147e9053c(void)

void FUN_147e9053c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14abb6f40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abc00d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e905b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e905c2 FUN_147e905c2 body=52 status=ok
// SIG undefined FUN_147e905c2(void)

void FUN_147e905c2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e905f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147e905f6 FUN_147e905f6 body=155 status=ok
// SIG undefined FUN_147e905f6(void)

bool FUN_147e905f6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e90692 FUN_147e90692 body=170 status=ok
// SIG undefined FUN_147e90692(void)

void FUN_147e90692(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_144aa17a4();
  if (DAT_14cb1db80 == 0) {
    uVar4 = FUN_1410766fc();
    DAT_14cb1db80 = FUN_140002ddd(FUN_14642493f,uVar4,L"NavLinkCustomInstanceData");
    if (DAT_14cb1db80 == 0) {
      return;
    }
  }
  lVar2 = DAT_14cb1db80;
  FUN_14485c47a(param_1 + 8,DAT_14cb1db80);
  iVar1 = *(int *)(lVar2 + 0x5c);
  uVar5 = -iVar1 & (*(int *)(lVar2 + 0x58) + iVar1) - 1U;
  puVar3 = (undefined8 *)FUN_14001cc68((longlong)(int)(uVar5 + (uVar5 == 0)),0);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  FUN_1479b5da0(puVar3,*param_2);
  *puVar3 = &PTR_FUN_14abbf970;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 147e9073c FUN_147e9073c body=29 status=ok
// SIG undefined FUN_147e9073c(void)

undefined8 FUN_147e9073c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e90774 FUN_147e90774 body=29 status=ok
// SIG undefined FUN_147e90774(void)

bool FUN_147e90774(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e90792 FUN_147e90792 body=26 status=ok
// SIG undefined FUN_147e90792(void)

bool FUN_147e90792(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147e907ac FUN_147e907ac body=24 status=ok
// SIG undefined FUN_147e907ac(void)

bool FUN_147e907ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147e907c4 FUN_147e907c4 body=101 status=ok
// SIG undefined FUN_147e907c4(void)

void FUN_147e907c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc0140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e9082a FUN_147e9082a body=101 status=ok
// SIG undefined FUN_147e9082a(void)

void FUN_147e9082a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc0140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e90890 FUN_147e90890 body=134 status=ok
// SIG undefined FUN_147e90890(void)

void FUN_147e90890(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abc0140;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e90907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e90916 FUN_147e90916 body=39 status=ok
// SIG undefined FUN_147e90916(void)

void FUN_147e90916(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e90939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147e9093e FUN_147e9093e body=134 status=ok
// SIG undefined FUN_147e9093e(void)

bool FUN_147e9093e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e909c6 FUN_147e909c6 body=112 status=ok
// SIG undefined FUN_147e909c6(void)

void FUN_147e909c6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 147e90a36 FUN_147e90a36 body=580 status=ok
// SIG undefined FUN_147e90a36(void)

double * FUN_147e90a36(double *param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar2;
  
  dVar11 = *(double *)(param_3 + 0x40) * param_2[8];
  dVar12 = *(double *)(param_3 + 0x48) * param_2[9];
  dVar10 = *(double *)(param_3 + 0x50) * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar10 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  *param_1 = (dVar13 * dVar6 - dVar15 * dVar7) + dVar1 * dVar14 + dVar11 + param_2[4];
  param_1[1] = (dVar7 * dVar14 - dVar5 * dVar13) + dVar2 * dVar15 + dVar12 + dVar4;
  param_1[2] = dVar13 * dVar1 + dVar10 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar3;
  dVar11 = *(double *)(param_3 + 0x58) * param_2[8];
  dVar12 = *(double *)(param_3 + 0x60) * param_2[9];
  dVar10 = *(double *)(param_3 + 0x68) * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  dVar2 = param_2[3];
  dVar1 = param_2[3];
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar10 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  param_1[3] = (dVar13 * dVar6 - dVar15 * dVar7) + dVar2 * dVar14 + dVar11 + param_2[4];
  param_1[4] = (dVar7 * dVar14 - dVar5 * dVar13) + dVar1 * dVar15 + dVar12 + dVar4;
  param_1[5] = dVar13 * dVar2 + dVar10 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar3;
  *(uint *)(param_1 + 6) = (uint)*(byte *)(param_3 + 0x28);
  uVar8 = FUN_1478cb278(param_3);
  FUN_147e6d8c8((longlong)param_1 + 0x34,uVar8);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x18);
  if ((*(byte *)(param_3 + 0x29) & 1) == 0) {
    uVar9 = 0xbf800000;
  }
  else {
    uVar9 = *(undefined4 *)(param_3 + 0x1c);
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



// FUNCTION 147e90c7a FUN_147e90c7a body=147 status=ok
// SIG undefined FUN_147e90c7a(void)

void FUN_147e90c7a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e90d0e FUN_147e90d0e body=108 status=ok
// SIG undefined FUN_147e90d0e(void)

void FUN_147e90d0e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x78,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x78)) {
      uVar2 = uVar1 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x78,8);
  }
  return;
}



// FUNCTION 147e90d7a FUN_147e90d7a body=1029 status=ok
// SIG undefined FUN_147e90d7a(void)

double * FUN_147e90d7a(double *param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar2;
  
  dVar11 = *(double *)(param_3 + 0x40) * param_2[8];
  dVar12 = *(double *)(param_3 + 0x48) * param_2[9];
  dVar10 = *(double *)(param_3 + 0x50) * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar10 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  *param_1 = (dVar13 * dVar6 - dVar15 * dVar7) + dVar1 * dVar14 + dVar11 + param_2[4];
  param_1[1] = (dVar7 * dVar14 - dVar5 * dVar13) + dVar2 * dVar15 + dVar12 + dVar4;
  param_1[2] = dVar13 * dVar1 + dVar10 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar3;
  dVar11 = *(double *)(param_3 + 0x58) * param_2[8];
  dVar12 = *(double *)(param_3 + 0x60) * param_2[9];
  dVar10 = *(double *)(param_3 + 0x68) * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  dVar2 = param_2[3];
  dVar1 = param_2[3];
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar10 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  param_1[3] = (dVar13 * dVar6 - dVar15 * dVar7) + dVar2 * dVar14 + dVar11 + param_2[4];
  param_1[4] = (dVar7 * dVar14 - dVar5 * dVar13) + dVar1 * dVar15 + dVar12 + dVar4;
  param_1[5] = dVar13 * dVar2 + dVar10 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar3;
  dVar11 = *(double *)(param_3 + 0x70) * param_2[8];
  dVar12 = *(double *)(param_3 + 0x78) * param_2[9];
  dVar10 = *(double *)(param_3 + 0x80) * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  dVar2 = param_2[3];
  dVar1 = param_2[3];
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar10 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  param_1[6] = (dVar13 * dVar6 - dVar15 * dVar7) + dVar2 * dVar14 + dVar11 + param_2[4];
  param_1[7] = (dVar7 * dVar14 - dVar5 * dVar13) + dVar1 * dVar15 + dVar12 + dVar4;
  param_1[8] = dVar13 * dVar2 + dVar10 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar3;
  dVar11 = *(double *)(param_3 + 0x88) * param_2[8];
  dVar12 = *(double *)(param_3 + 0x90) * param_2[9];
  dVar10 = *(double *)(param_3 + 0x98) * param_2[10];
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  dVar2 = param_2[3];
  dVar1 = param_2[3];
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar10 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  param_1[9] = (dVar13 * dVar6 - dVar15 * dVar7) + dVar2 * dVar14 + dVar11 + param_2[4];
  param_1[10] = (dVar7 * dVar14 - dVar5 * dVar13) + dVar1 * dVar15 + dVar12 + dVar4;
  param_1[0xb] = dVar13 * dVar2 + dVar10 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar3;
  *(uint *)(param_1 + 0xc) = (uint)*(byte *)(param_3 + 0x28);
  uVar8 = FUN_1478cb278(param_3);
  FUN_147e6d8c8((longlong)param_1 + 100,uVar8);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 0x18);
  if ((*(byte *)(param_3 + 0x29) & 1) == 0) {
    uVar9 = 0xbf800000;
  }
  else {
    uVar9 = *(undefined4 *)(param_3 + 0x1c);
  }
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar9;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



// FUNCTION 147e91180 FUN_147e91180 body=143 status=ok
// SIG undefined FUN_147e91180(void)

void FUN_147e91180(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e91210 FUN_147e91210 body=140 status=ok
// SIG undefined FUN_147e91210(void)

undefined8 FUN_147e91210(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_142dda456();
  FUN_1401a700c(&local_30,0x3e);
  uVar1 = local_30;
  local_30 = DAT_14c758eb8;
  local_2c = DAT_14c758ee0;
  local_28 = DAT_14c758eb8;
  local_24 = 0x3e40c0c2;
  FUN_14089e406(uVar2,*param_2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9129e FUN_147e9129e body=65 status=ok
// SIG undefined FUN_147e9129e(void)

void FUN_147e9129e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abbadc0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 147e912f0 FUN_147e912f0 body=185 status=ok
// SIG undefined FUN_147e912f0(void)

void FUN_147e912f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  FUN_147e913aa(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e913aa FUN_147e913aa body=200 status=ok
// SIG undefined FUN_147e913aa(void)

void FUN_147e913aa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x160);
  if (lVar3 == 0) {
LAB_147e913e6:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_1410e186c();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_147e913e6;
    lVar3 = *(longlong *)(param_1 + 0x160);
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1410e186c();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = *param_2;
      goto LAB_147e91414;
    }
  }
  lVar1 = 0;
LAB_147e91414:
  if (lVar3 != lVar1) {
    lVar3 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *param_2;
      }
    }
    *(longlong *)(param_1 + 0x160) = lVar3;
    if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
      FUN_1413f0292(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e91472 FUN_147e91472 body=185 status=ok
// SIG undefined FUN_147e91472(void)

void FUN_147e91472(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  FUN_147e9152c(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9152c FUN_147e9152c body=200 status=ok
// SIG undefined FUN_147e9152c(void)

void FUN_147e9152c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x168);
  if (lVar3 == 0) {
LAB_147e91568:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_1410e186c();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_147e91568;
    lVar3 = *(longlong *)(param_1 + 0x168);
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_1410e186c();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = *param_2;
      goto LAB_147e91596;
    }
  }
  lVar1 = 0;
LAB_147e91596:
  if (lVar3 != lVar1) {
    lVar3 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *param_2;
      }
    }
    *(longlong *)(param_1 + 0x168) = lVar3;
    if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
      FUN_1413f0292(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e91600 FUN_147e91600 body=309 status=ok
// SIG undefined FUN_147e91600(void)

longlong FUN_147e91600(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4,
                      longlong *param_5,char param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = *param_4;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = *(undefined4 *)(param_3 + 2);
  uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_80 = *(undefined4 *)(param_3 + 3);
  uStack_7c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1478cbd10(param_1,param_2,&local_98,&local_38);
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfd | param_6 * '\x02';
  lVar1 = *param_5;
  if (lVar1 != 0) {
    lVar3 = FUN_1410e186c();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar2 = *param_5;
      if (lVar2 != 0 &&
          *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        local_a0 = lVar2;
        if (DAT_14c950c29 == 1) {
          FUN_14689c22e();
        }
        FUN_1478cce8a(param_1,&local_a0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9173c FUN_147e9173c body=209 status=ok
// SIG undefined FUN_147e9173c(void)

void FUN_147e9173c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  
  FUN_144a3ee64();
  if (((*(byte *)(param_1 + 0x150) & 1) != 0) && (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 != 0)
     ) {
    lVar2 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar2 != 0) {
      uVar3 = FUN_144a81dfc();
      plVar5 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar5 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
        if (cVar4 != '\0') {
          if (DAT_14c950c29 == '\x01') {
            FUN_14689c22e(lVar2);
          }
          *(longlong *)(param_1 + 0x158) = lVar2;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x158) == 0) {
      uVar3 = FUN_144a81dfc();
      plVar5 = (longlong *)FUN_144718840(lVar1,uVar3);
      if (plVar5 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
        if (cVar4 != '\0') {
          if (DAT_14c950c29 == '\x01') {
            FUN_14689c22e(lVar1);
          }
          *(longlong *)(param_1 + 0x158) = lVar1;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 4;
  FUN_1433c29fb(param_1);
  return;
}



// FUNCTION 147e9180e FUN_147e9180e body=26 status=ok
// SIG undefined FUN_147e9180e(void)

void FUN_147e9180e(undefined8 param_1)

{
  FUN_1448b6576();
  FUN_1433c2a1c(param_1);
  return;
}



// FUNCTION 147e91828 FUN_147e91828 body=26 status=ok
// SIG undefined FUN_147e91828(void)

void FUN_147e91828(undefined8 param_1)

{
  FUN_1448b6576();
  FUN_1433c2a1c(param_1);
  return;
}



// FUNCTION 147e91842 FUN_147e91842 body=6612 status=ok
// SIG undefined FUN_147e91842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e91842(longlong param_1,double *param_2,longlong param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar50 [16];
  double dVar53;
  undefined4 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auStack_338 [32];
  double local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
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
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
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
  
  auVar29 = _DAT_149934d80;
  uVar12 = DAT_14c707940 ^ (ulonglong)auStack_338;
  dVar28 = *param_2;
  dVar34 = param_2[1];
  dVar57 = param_2[2];
  dVar18 = param_2[3];
  dVar25 = param_2[8];
  dVar26 = param_2[9];
  local_318 = param_2[10];
  dStack_300 = param_2[0xb];
  *(undefined1 (*) [16])(param_2 + 8) = _DAT_149934d80;
  param_2[10] = 1.0;
  param_2[0xb] = 0.0;
  dVar35 = dVar57 * dVar57 + dVar28 * dVar28;
  dVar44 = dVar18 * dVar18 + dVar34 * dVar34;
  auVar48._0_8_ = dVar35 + dVar44;
  auVar48._8_8_ = dVar35 + dVar44;
  auVar39._8_8_ = -(ulonglong)(1e-08 <= auVar48._8_8_);
  auVar39._0_8_ = -(ulonglong)(1e-08 <= auVar48._0_8_);
  auVar38 = sqrtpd(auVar48,auVar48);
  auVar38 = divpd(auVar29,auVar38);
  auVar29._0_8_ = auVar38._0_8_ * dVar57;
  auVar29._8_8_ = auVar38._8_8_ * dVar18;
  auVar29 = blendvpd(_DAT_149935300,auVar29,auVar39);
  *param_2 = (double)((ulonglong)(dVar28 * auVar38._0_8_) & -(ulonglong)(1e-08 <= auVar48._0_8_));
  param_2[1] = (double)((ulonglong)(dVar34 * auVar38._8_8_) & -(ulonglong)(1e-08 <= auVar48._8_8_));
  *(undefined1 (*) [16])(param_2 + 2) = auVar29;
  uStack_310 = 0;
  local_308 = local_318;
  local_2f8 = dVar26;
  dStack_2f0 = dVar26;
  local_2e8 = dVar25;
  dStack_2e0 = dVar26;
  local_f0 = uVar12;
  if (0 < *(int *)(param_3 + 0x40)) {
    lVar16 = 0x48;
    lVar17 = 0;
    lVar14 = param_1;
    do {
      lVar15 = *(longlong *)(param_3 + 0x38);
      pdVar1 = (double *)(lVar15 + -0x18 + lVar16);
      dVar35 = *pdVar1 * dVar25;
      dVar44 = pdVar1[1] * dVar26;
      dVar18 = *(double *)(lVar15 + -8 + lVar16) * local_318;
      auVar29 = *(undefined1 (*) [16])(param_2 + 8);
      dVar28 = auVar29._0_8_;
      dVar57 = auVar29._8_8_;
      dVar34 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
      auVar29 = minpd(_DAT_149934d80,auVar29);
      auVar39 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      auVar38._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar38._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar9 = movmskpd((int)uVar12,auVar38);
      auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
      auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
      uVar13 = movmskpd((int)lVar14,auVar40);
      if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar5 = *param_2;
        dVar51 = param_2[1];
        dVar53 = param_2[2];
        dVar25 = param_2[3];
        dVar26 = param_2[3];
        dVar28 = dVar28 * dVar35;
        dVar57 = dVar57 * dVar44;
        dVar18 = dVar18 * dVar34;
        dVar44 = dVar57 * dVar5 - dVar28 * dVar51;
        dVar27 = dVar18 * dVar51 - dVar57 * dVar53;
        dVar52 = dVar28 * dVar53 - dVar18 * dVar5;
        dVar27 = dVar27 + dVar27;
        dVar52 = dVar52 + dVar52;
        dVar44 = dVar44 + dVar44;
        dVar34 = param_2[1];
        dVar35 = param_2[1];
        dVar33 = dVar53 * 0.0 * -1.0 + dVar34 * 0.0 + *param_2 * 1.0 * 1.0 + dVar25 * 0.0;
        dVar36 = dVar53 * 0.0 * 1.0 + dVar35 * 1.0 + *param_2 * 0.0 * -1.0 + dVar26 * 0.0;
        auVar55._0_8_ = param_2[2] * 1.0 * 1.0 + ((dVar5 * 0.0 * 1.0 + dVar25 * 0.0) - dVar34 * 0.0)
        ;
        auVar55._8_8_ =
             param_2[2] * 0.0 * -1.0 + ((dVar5 * 0.0 * -1.0 + dVar26 * 1.0) - dVar35 * 0.0);
        dVar34 = (dVar44 * dVar51 - dVar53 * dVar52) + dVar25 * dVar27 + dVar28 + param_2[4];
        dVar57 = (dVar27 * dVar53 - dVar44 * dVar5) + dVar26 * dVar52 + dVar57 + param_2[5];
        dVar28 = (dVar52 * dVar5 - dVar51 * dVar27) + dVar25 * dVar44 + dVar18 + param_2[6];
        dVar25 = local_2e8;
        dVar26 = dStack_2e0;
      }
      else {
        dVar5 = *param_2;
        dVar51 = param_2[1];
        dVar53 = param_2[2];
        dVar33 = dVar51 + dVar51;
        dVar36 = dVar53 + dVar53;
        dVar52 = dVar5 * (dVar5 + dVar5);
        local_1f8 = ((double)DAT_149934d80 - (dVar53 * dVar36 + dVar51 * dVar33)) * dVar28;
        local_1a8 = (1.0 - (dVar52 + dVar51 * dVar33)) * dVar34;
        dVar27 = param_2[3];
        dVar37 = dVar36 * dVar27;
        dVar45 = (dVar5 + dVar5) * param_2[3];
        dVar27 = dVar33 * dVar27;
        dStack_1f0 = (dVar33 * dVar5 + dVar37) * dVar28;
        local_1c8 = (dVar36 * dVar51 + dVar45) * dVar57;
        local_1b8 = (dVar27 + *param_2 * dVar36) * dVar34;
        dStack_1b0 = (dVar36 * dVar51 - dVar45) * dVar34;
        local_1e8 = (*param_2 * dVar36 - dVar27) * dVar28;
        uStack_1e0 = 0;
        local_1d8._8_8_ = (DAT_149934d80._8_8_ - (dVar53 * dVar36 + dVar52)) * dVar57;
        local_1d8._0_8_ = (dVar33 * dVar5 - dVar37) * dVar57;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = param_2[4];
        dStack_190 = param_2[5];
        local_188 = param_2[6];
        uStack_180 = 0x3ff0000000000000;
        local_278 = 1.0;
        dStack_270 = 0.0;
        local_268 = 0.0;
        uStack_260 = 0;
        local_238 = ZEXT816(0);
        local_248 = 0.0;
        uStack_240 = 0;
        local_228 = 1.0;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_218 = dVar35;
        dStack_210 = dVar44;
        local_208 = dVar18;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar29 = _DAT_149934d80;
        auVar19._8_8_ = -(ulonglong)(0.0 <= dVar57);
        auVar19._0_8_ = -(ulonglong)(0.0 <= dVar28);
        auVar39 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar19);
        dVar28 = (double)(~-(ulonglong)(0.0 <= dVar34) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar34) & 0x3ff0000000000000);
        dVar34 = auVar39._0_8_;
        local_168 = local_168 * dVar34;
        dStack_170 = dStack_170 * dVar34;
        local_178 = local_178 * dVar34;
        dVar34 = auVar39._8_8_;
        local_148 = local_148 * dVar34;
        local_150 = local_150 * dVar34;
        local_158 = dVar34 * local_158;
        local_128 = local_128 * dVar28;
        local_130 = local_130 * dVar28;
        local_138 = dVar28 * local_138;
        FUN_14481fd10(&local_298,&local_178);
        dVar28 = local_288 * local_288 + local_298 * local_298;
        dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar30._0_8_ = dVar28 + dVar34;
        auVar30._8_8_ = dVar28 + dVar34;
        auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
        auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
        auVar39 = sqrtpd(auVar30,auVar30);
        auVar29 = divpd(auVar29,auVar39);
        auVar41._0_8_ = auVar29._0_8_ * local_288;
        auVar41._8_8_ = auVar29._8_8_ * dStack_280;
        dVar33 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
        dVar36 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
        auVar55 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar20);
        dVar34 = local_118;
        dVar57 = dStack_110;
        dVar28 = local_108;
      }
      dVar35 = local_308;
      dVar18 = (double)*(float *)(lVar15 + lVar16);
      iVar9 = *(int *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x198) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x19c) < iVar9 + 1U) {
        FUN_147e951ea((longlong *)(param_1 + 400),iVar9);
      }
      lVar15 = *(longlong *)(param_1 + 400);
      lVar14 = (longlong)iVar9 * 0x60;
      *(double *)(lVar15 + lVar14) = dVar34 - dVar18 * dVar25;
      *(double *)(lVar15 + 8 + lVar14) = dVar57 - local_2f8 * dVar18;
      *(double *)(lVar15 + 0x10 + lVar14) = dVar28 - dVar35 * dVar18;
      *(double *)(lVar15 + 0x18 + lVar14) = dVar34 + dVar18 * dVar25;
      *(double *)(lVar15 + 0x20 + lVar14) = dVar57 + local_2f8 * dVar18;
      *(double *)(lVar15 + 0x28 + lVar14) = dVar28 + dVar35 * dVar18;
      *(undefined1 *)(lVar15 + 0x30 + lVar14) = 1;
      pdVar1 = (double *)(lVar15 + 0x40 + lVar14);
      *pdVar1 = dVar33;
      pdVar1[1] = dVar36;
      *(undefined1 (*) [16])(lVar15 + 0x50 + lVar14) = auVar55;
      lVar17 = lVar17 + 1;
      uVar12 = (ulonglong)*(int *)(param_3 + 0x40);
      lVar16 = lVar16 + 0x50;
    } while (lVar17 < (longlong)uVar12);
  }
  if (0 < *(int *)(param_3 + 0x50)) {
    lVar16 = 0x48;
    lVar14 = 0;
    do {
      lVar15 = *(longlong *)(param_3 + 0x48);
      lVar17 = lVar15 + lVar16;
      uVar10 = FUN_144a7484c(lVar17,&local_178);
      auVar39 = _DAT_149934d80;
      pdVar1 = (double *)(lVar15 + -0x18 + lVar16);
      dVar25 = *pdVar1 * dVar25;
      dVar26 = pdVar1[1] * dVar26;
      dVar18 = *(double *)(lVar15 + -8 + lVar16) * local_318;
      auVar29 = *(undefined1 (*) [16])(param_2 + 8);
      dVar28 = auVar29._0_8_;
      dVar57 = auVar29._8_8_;
      dVar34 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
      auVar29 = minpd(_DAT_149934d80,auVar29);
      auVar48 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      auVar46._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar46._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar9 = movmskpd(uVar10,auVar46);
      auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
      auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
      uVar13 = movmskpd((int)lVar17,auVar49);
      if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar44 = param_2[3];
        dVar35 = param_2[3];
        dVar52 = param_2[1];
        dVar27 = param_2[1];
        dVar36 = *param_2;
        dVar37 = param_2[1];
        dVar45 = param_2[2];
        dVar51 = param_2[2];
        dVar5 = param_2[2];
        dVar53 = dStack_170 * dVar51 * -1.0 +
                 local_168 * dVar52 + dStack_160 * *param_2 * 1.0 + local_178 * dVar44;
        dVar33 = local_178 * dVar5 * 1.0 +
                 dStack_160 * dVar27 + local_168 * *param_2 * -1.0 + dStack_170 * dVar35;
        auVar58._0_8_ =
             dStack_160 * dVar51 * 1.0 +
             ((*param_2 * dStack_170 * 1.0 + local_168 * dVar44) - local_178 * dVar52);
        auVar58._8_8_ =
             local_168 * dVar5 * -1.0 +
             ((*param_2 * local_178 * -1.0 + dStack_160 * dVar35) - dStack_170 * dVar27);
        dVar28 = dVar28 * dVar25;
        dVar57 = dVar57 * dVar26;
        dVar18 = dVar18 * dVar34;
        dVar26 = dVar57 * dVar36 - dVar28 * dVar37;
        dVar27 = dVar18 * dVar37 - dVar57 * dVar45;
        dVar34 = dVar28 * dVar45 - dVar18 * dVar36;
        dVar27 = dVar27 + dVar27;
        dVar34 = dVar34 + dVar34;
        dVar26 = dVar26 + dVar26;
        dVar25 = (dVar26 * dVar37 - dVar45 * dVar34) + dVar44 * dVar27 + dVar28 + param_2[4];
        dVar57 = (dVar27 * dVar45 - dVar26 * dVar36) + dVar35 * dVar34 + dVar57 + param_2[5];
        dVar28 = (dVar34 * dVar36 - dVar37 * dVar27) + dVar44 * dVar26 + dVar18 + param_2[6];
      }
      else {
        dVar52 = *param_2;
        dVar5 = param_2[1];
        dVar35 = param_2[2];
        dVar51 = dVar5 + dVar5;
        dVar53 = dVar35 + dVar35;
        dVar27 = dVar52 * (dVar52 + dVar52);
        local_1f8 = ((double)DAT_149934d80 - (dVar35 * dVar53 + dVar5 * dVar51)) * dVar28;
        dVar44 = (DAT_149934d80._8_8_ - (dVar35 * dVar53 + dVar27)) * dVar57;
        dVar35 = param_2[3];
        dVar33 = dVar53 * dVar35;
        dVar36 = (dVar52 + dVar52) * param_2[3];
        dVar35 = dVar51 * dVar35;
        dStack_1b0 = (dVar53 * dVar5 - dVar36) * dVar34;
        local_1b8 = (dVar35 + *param_2 * dVar53) * dVar34;
        dStack_1f0 = (dVar51 * dVar52 + dVar33) * dVar28;
        local_1c8 = (dVar53 * dVar5 + dVar36) * dVar57;
        local_1a8 = (1.0 - (dVar27 + dVar5 * dVar51)) * dVar34;
        local_1e8 = (*param_2 * dVar53 - dVar35) * dVar28;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar44,0);
        local_1d8._0_8_ = (dVar51 * dVar52 - dVar33) * dVar57;
        local_1d8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = param_2[4];
        dStack_190 = param_2[5];
        local_188 = param_2[6];
        uStack_180 = 0x3ff0000000000000;
        dVar52 = dStack_170 + dStack_170;
        dVar27 = local_168 + local_168;
        dVar35 = local_178 * (local_178 + local_178);
        local_278 = (double)DAT_149934d80 - (local_168 * dVar27 + dStack_170 * dVar52);
        local_228 = 1.0 - (dVar35 + dStack_170 * dVar52);
        dVar44 = (local_178 + local_178) * dStack_160;
        dStack_270 = dVar52 * local_178 + dVar27 * dStack_160;
        local_248 = dVar27 * dStack_170 + dVar44;
        dVar44 = dVar27 * dStack_170 - dVar44;
        local_268 = local_178 * dVar27 - dVar52 * dStack_160;
        uStack_260 = 0;
        local_258._8_8_ = DAT_149934d80._8_8_ - (local_168 * dVar27 + dVar35);
        local_258._0_8_ = dVar52 * local_178 - dVar27 * dStack_160;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar44,0);
        local_238._0_8_ = dVar52 * dStack_160 + local_178 * dVar27;
        local_238._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_218 = dVar25;
        dStack_210 = dVar26;
        local_208 = dVar18;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar21._8_8_ = -(ulonglong)(0.0 <= dVar57);
        auVar21._0_8_ = -(ulonglong)(0.0 <= dVar28);
        auVar29 = blendvpd(_DAT_149936790,auVar39,auVar21);
        dVar28 = (double)(~-(ulonglong)(0.0 <= dVar34) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar34) & 0x3ff0000000000000);
        dVar34 = auVar29._0_8_;
        local_168 = local_168 * dVar34;
        dStack_170 = dStack_170 * dVar34;
        local_178 = local_178 * dVar34;
        dVar34 = auVar29._8_8_;
        local_148 = local_148 * dVar34;
        local_150 = local_150 * dVar34;
        local_158 = dVar34 * local_158;
        local_128 = local_128 * dVar28;
        local_130 = local_130 * dVar28;
        local_138 = dVar28 * local_138;
        FUN_14481fd10(&local_298,&local_178);
        dVar28 = local_288 * local_288 + local_298 * local_298;
        dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar31._0_8_ = dVar28 + dVar34;
        auVar31._8_8_ = dVar28 + dVar34;
        auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
        auVar29 = sqrtpd(auVar31,auVar31);
        auVar29 = divpd(auVar39,auVar29);
        auVar42._0_8_ = auVar29._0_8_ * local_288;
        auVar42._8_8_ = auVar29._8_8_ * dStack_280;
        dVar53 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_));
        dVar33 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_));
        auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar22);
        dVar25 = local_118;
        dVar57 = dStack_110;
        dVar28 = local_108;
      }
      fVar2 = *(float *)(lVar15 + 0x20 + lVar16);
      fVar3 = *(float *)(lVar15 + 0x1c + lVar16);
      fVar4 = *(float *)(lVar15 + 0x18 + lVar16);
      iVar9 = *(int *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x198) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x19c) < iVar9 + 1U) {
        FUN_147e951ea((longlong *)(param_1 + 400),iVar9);
      }
      dVar26 = (double)fVar2 * local_308 * 0.5;
      dVar18 = (double)fVar3 * local_2f8 * 0.5;
      dVar34 = (double)fVar4 * local_2e8 * 0.5;
      lVar17 = *(longlong *)(param_1 + 400);
      lVar15 = (longlong)iVar9 * 0x60;
      *(double *)(lVar17 + lVar15) = dVar25 - dVar34;
      *(double *)(lVar17 + 8 + lVar15) = dVar57 - dVar18;
      *(double *)(lVar17 + 0x10 + lVar15) = dVar28 - dVar26;
      *(double *)(lVar17 + 0x18 + lVar15) = dVar25 + dVar34;
      *(double *)(lVar17 + 0x20 + lVar15) = dVar57 + dVar18;
      *(double *)(lVar17 + 0x28 + lVar15) = dVar28 + dVar26;
      *(undefined1 *)(lVar17 + 0x30 + lVar15) = 1;
      auVar7._8_4_ = SUB84(dVar33,0);
      auVar7._0_8_ = dVar53;
      auVar7._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      *(undefined1 (*) [16])(lVar17 + 0x40 + lVar15) = auVar7;
      *(undefined1 (*) [16])(lVar17 + 0x50 + lVar15) = auVar58;
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 0x70;
      dVar25 = local_2e8;
      dVar26 = dStack_2e0;
    } while (lVar14 < *(int *)(param_3 + 0x50));
  }
  uVar10 = (undefined4)local_308;
  uVar54 = local_308._4_4_;
  if (0 < *(int *)(param_3 + 0x60)) {
    lVar16 = 0x48;
    lVar14 = 0;
    do {
      lVar15 = *(longlong *)(param_3 + 0x58);
      lVar17 = lVar15 + lVar16;
      uVar11 = FUN_144a7484c(lVar17,&local_178);
      auVar39 = _DAT_149934d80;
      pdVar1 = (double *)(lVar15 + -0x18 + lVar16);
      dVar25 = *pdVar1 * dVar25;
      dVar26 = pdVar1[1] * dVar26;
      dVar18 = *(double *)(lVar15 + -8 + lVar16) * local_318;
      auVar29 = *(undefined1 (*) [16])(param_2 + 8);
      dVar28 = auVar29._0_8_;
      dVar57 = auVar29._8_8_;
      dVar34 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
      auVar29 = minpd(_DAT_149934d80,auVar29);
      auVar48 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      auVar47._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar9 = movmskpd(uVar11,auVar47);
      auVar50._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
      uVar13 = movmskpd((int)lVar17,auVar50);
      if ((uVar13 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar35 = param_2[3];
        dVar44 = param_2[3];
        dVar27 = param_2[1];
        dVar52 = param_2[1];
        dVar36 = *param_2;
        dVar37 = param_2[1];
        dVar45 = param_2[2];
        dVar5 = param_2[2];
        dVar51 = param_2[2];
        dVar53 = dStack_170 * dVar5 * -1.0 +
                 local_168 * dVar27 + dStack_160 * *param_2 * 1.0 + local_178 * dVar35;
        dVar33 = local_178 * dVar51 * 1.0 +
                 dStack_160 * dVar52 + local_168 * *param_2 * -1.0 + dStack_170 * dVar44;
        auVar56._0_8_ =
             dStack_160 * dVar5 * 1.0 +
             ((*param_2 * dStack_170 * 1.0 + local_168 * dVar35) - local_178 * dVar27);
        auVar56._8_8_ =
             local_168 * dVar51 * -1.0 +
             ((*param_2 * local_178 * -1.0 + dStack_160 * dVar44) - dStack_170 * dVar52);
        dVar28 = dVar28 * dVar25;
        dVar57 = dVar57 * dVar26;
        dVar18 = dVar18 * dVar34;
        dVar34 = dVar57 * dVar36 - dVar28 * dVar37;
        dVar25 = dVar18 * dVar37 - dVar57 * dVar45;
        dVar26 = dVar28 * dVar45 - dVar18 * dVar36;
        dVar25 = dVar25 + dVar25;
        dVar26 = dVar26 + dVar26;
        dVar34 = dVar34 + dVar34;
        dVar28 = (dVar34 * dVar37 - dVar45 * dVar26) + dVar35 * dVar25 + dVar28 + param_2[4];
        dVar57 = (dVar25 * dVar45 - dVar34 * dVar36) + dVar44 * dVar26 + dVar57 + param_2[5];
        dVar34 = (dVar26 * dVar36 - dVar37 * dVar25) + dVar35 * dVar34 + dVar18 + param_2[6];
      }
      else {
        dVar52 = *param_2;
        dVar5 = param_2[1];
        dVar35 = param_2[2];
        dVar51 = dVar5 + dVar5;
        dVar53 = dVar35 + dVar35;
        dVar27 = dVar52 * (dVar52 + dVar52);
        local_1f8 = ((double)DAT_149934d80 - (dVar35 * dVar53 + dVar5 * dVar51)) * dVar28;
        dVar44 = (DAT_149934d80._8_8_ - (dVar35 * dVar53 + dVar27)) * dVar57;
        dVar35 = param_2[3];
        dVar33 = dVar53 * dVar35;
        dVar36 = (dVar52 + dVar52) * param_2[3];
        dVar35 = dVar51 * dVar35;
        dStack_1b0 = (dVar53 * dVar5 - dVar36) * dVar34;
        local_1b8 = (dVar35 + *param_2 * dVar53) * dVar34;
        dStack_1f0 = (dVar51 * dVar52 + dVar33) * dVar28;
        local_1c8 = (dVar53 * dVar5 + dVar36) * dVar57;
        local_1a8 = (1.0 - (dVar27 + dVar5 * dVar51)) * dVar34;
        local_1e8 = (*param_2 * dVar53 - dVar35) * dVar28;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar44,0);
        local_1d8._0_8_ = (dVar51 * dVar52 - dVar33) * dVar57;
        local_1d8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = param_2[4];
        dStack_190 = param_2[5];
        local_188 = param_2[6];
        uStack_180 = 0x3ff0000000000000;
        dVar52 = dStack_170 + dStack_170;
        dVar27 = local_168 + local_168;
        dVar35 = local_178 * (local_178 + local_178);
        local_278 = (double)DAT_149934d80 - (local_168 * dVar27 + dStack_170 * dVar52);
        uVar10 = (undefined4)local_308;
        uVar54 = local_308._4_4_;
        local_228 = 1.0 - (dVar35 + dStack_170 * dVar52);
        dVar44 = (local_178 + local_178) * dStack_160;
        dStack_270 = dVar52 * local_178 + dVar27 * dStack_160;
        local_248 = dVar27 * dStack_170 + dVar44;
        dVar44 = dVar27 * dStack_170 - dVar44;
        local_268 = local_178 * dVar27 - dVar52 * dStack_160;
        uStack_260 = 0;
        local_258._8_8_ = DAT_149934d80._8_8_ - (local_168 * dVar27 + dVar35);
        local_258._0_8_ = dVar52 * local_178 - dVar27 * dStack_160;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar44,0);
        local_238._0_8_ = dVar52 * dStack_160 + local_178 * dVar27;
        local_238._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_218 = dVar25;
        dStack_210 = dVar26;
        local_208 = dVar18;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar23._8_8_ = -(ulonglong)(0.0 <= dVar57);
        auVar23._0_8_ = -(ulonglong)(0.0 <= dVar28);
        auVar29 = blendvpd(_DAT_149936790,auVar39,auVar23);
        dVar28 = (double)(~-(ulonglong)(0.0 <= dVar34) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar34) & 0x3ff0000000000000);
        dVar34 = auVar29._0_8_;
        local_168 = local_168 * dVar34;
        dStack_170 = dStack_170 * dVar34;
        local_178 = local_178 * dVar34;
        dVar34 = auVar29._8_8_;
        local_148 = local_148 * dVar34;
        local_150 = local_150 * dVar34;
        local_158 = dVar34 * local_158;
        local_128 = local_128 * dVar28;
        local_130 = local_130 * dVar28;
        local_138 = dVar28 * local_138;
        FUN_14481fd10(&local_298,&local_178);
        dVar28 = local_288 * local_288 + local_298 * local_298;
        dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar32._0_8_ = dVar28 + dVar34;
        auVar32._8_8_ = dVar28 + dVar34;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
        auVar29 = sqrtpd(auVar32,auVar32);
        auVar29 = divpd(auVar39,auVar29);
        auVar43._0_8_ = auVar29._0_8_ * local_288;
        auVar43._8_8_ = auVar29._8_8_ * dStack_280;
        dVar53 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
        dVar33 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
        auVar56 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar24);
        dVar34 = local_108;
        dVar28 = local_118;
        dVar57 = dStack_110;
      }
      dVar26 = dStack_2e0;
      dVar25 = local_2e8;
      fVar2 = *(float *)(lVar15 + 0x1c + lVar16);
      dVar18 = (double)*(float *)(lVar15 + 0x18 + lVar16);
      iVar9 = *(int *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x198) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x19c) < iVar9 + 1U) {
        FUN_147e951ea((longlong *)(param_1 + 400),iVar9);
      }
      dVar35 = (double)fVar2 * (double)CONCAT44(uVar54,uVar10);
      dVar44 = local_2f8 * dVar18;
      dVar18 = dVar18 * dVar25;
      lVar17 = *(longlong *)(param_1 + 400);
      lVar15 = (longlong)iVar9 * 0x60;
      *(double *)(lVar17 + lVar15) = dVar28 - dVar18;
      *(double *)(lVar17 + 8 + lVar15) = dVar57 - dVar44;
      *(double *)(lVar17 + 0x10 + lVar15) = dVar34 - dVar35;
      *(double *)(lVar17 + 0x18 + lVar15) = dVar28 + dVar18;
      *(double *)(lVar17 + 0x20 + lVar15) = dVar57 + dVar44;
      *(double *)(lVar17 + 0x28 + lVar15) = dVar34 + dVar35;
      *(undefined1 *)(lVar17 + 0x30 + lVar15) = 1;
      auVar8._8_4_ = SUB84(dVar33,0);
      auVar8._0_8_ = dVar53;
      auVar8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      *(undefined1 (*) [16])(lVar17 + 0x40 + lVar15) = auVar8;
      *(undefined1 (*) [16])(lVar17 + 0x50 + lVar15) = auVar56;
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 0x68;
    } while (lVar14 < *(int *)(param_3 + 0x60));
  }
  if (0 < *(int *)(param_3 + 0x70)) {
    lVar14 = 0x50;
    lVar16 = 0;
    do {
      lVar17 = *(longlong *)(param_3 + 0x68);
      dVar28 = *(double *)(lVar17 + 0x28 + lVar14);
      local_2d0 = *(double *)(lVar17 + 0x10 + lVar14);
      dVar34 = *(double *)(lVar17 + 0x20 + lVar14);
      local_318 = *(double *)(lVar17 + lVar14);
      local_2d8 = *(double *)(lVar17 + 8 + lVar14);
      dVar57 = *(double *)(lVar17 + 0x18 + lVar14);
      dVar26 = (dVar57 + local_318) * 0.5 * dVar25 * param_2[8];
      dVar35 = (dVar34 + local_2d8) * 0.5 * local_2f8 * param_2[9];
      dVar44 = (dVar28 + local_2d0) * 0.5 * (double)CONCAT44(uVar54,uVar10) * param_2[10];
      dVar53 = *param_2;
      dVar33 = param_2[1];
      dVar36 = param_2[2];
      dVar37 = param_2[3];
      dVar18 = param_2[3];
      dVar25 = dVar35 * dVar53 - dVar33 * dVar26;
      dVar27 = dVar44 * dVar33 - dVar36 * dVar35;
      dVar51 = dVar26 * dVar36 - dVar53 * dVar44;
      dVar27 = dVar27 + dVar27;
      dVar51 = dVar51 + dVar51;
      dVar25 = dVar25 + dVar25;
      dVar52 = (dVar25 * dVar33 - dVar51 * dVar36) + dVar18 * dVar27 + dVar26 + param_2[4];
      dVar5 = (dVar36 * dVar27 - dVar53 * dVar25) + param_2[3] * dVar51 + dVar35 + param_2[5];
      dVar51 = dVar25 * dVar18 + dVar44 + (dVar51 * dVar53 - dVar27 * dVar33) + param_2[6];
      pdVar1 = (double *)(lVar17 + 0x58 + lVar14);
      dVar25 = *pdVar1;
      dVar18 = *pdVar1;
      pdVar1 = (double *)(lVar17 + 0x40 + lVar14);
      local_2a8 = *pdVar1;
      dStack_2a0 = *pdVar1;
      pdVar1 = (double *)(lVar17 + 0x48 + lVar14);
      dVar35 = *pdVar1;
      dVar26 = *pdVar1;
      pdVar1 = (double *)(lVar17 + 0x50 + lVar14);
      dVar44 = *pdVar1;
      dVar27 = *pdVar1;
      iVar9 = *(int *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x198) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x19c) < iVar9 + 1U) {
        local_2c8 = dVar25;
        dStack_2c0 = dVar18;
        local_2b8 = dVar35;
        dStack_2b0 = dVar26;
        FUN_147e951ea((longlong *)(param_1 + 400),iVar9);
        dVar25 = local_2c8;
        dVar18 = dStack_2c0;
        dVar35 = local_2b8;
        dVar26 = dStack_2b0;
      }
      dVar45 = (dVar28 - local_2d0) * 0.5 * local_308;
      dVar34 = (dVar34 - local_2d8) * 0.5 * local_2f8;
      dVar57 = (dVar57 - local_318) * 0.5 * local_2e8;
      local_318 = dVar45 + dVar51;
      dVar28 = dVar27 * dVar36 * -1.0 +
               ((dVar53 * dStack_2a0 * -1.0 + dVar18 * dVar37) - dVar26 * dVar33);
      lVar17 = *(longlong *)(param_1 + 400);
      lVar15 = (longlong)iVar9 * 0x60;
      *(double *)(lVar17 + lVar15) = dVar52 - dVar57;
      *(double *)(lVar17 + 8 + lVar15) = dVar5 - dVar34;
      *(double *)(lVar17 + 0x10 + lVar15) = dVar51 - dVar45;
      *(double *)(lVar17 + 0x18 + lVar15) = dVar57 + dVar52;
      *(double *)(lVar17 + 0x20 + lVar15) = dVar34 + dVar5;
      *(double *)(lVar17 + 0x28 + lVar15) = local_318;
      *(undefined1 *)(lVar17 + 0x30 + lVar15) = 1;
      pdVar1 = (double *)(lVar17 + 0x40 + lVar15);
      *pdVar1 = dVar44 * dVar33 * -1.0 +
                local_2a8 * dVar37 * 1.0 + dVar25 * dVar53 + dVar35 * dVar36;
      pdVar1[1] = dVar27 * dVar53 * 1.0 +
                  dStack_2a0 * dVar36 * -1.0 + dVar18 * dVar33 + dVar26 * dVar37;
      auVar6._8_4_ = SUB84(dVar28,0);
      auVar6._0_8_ = dVar44 * dVar37 * 1.0 +
                     ((dVar33 * local_2a8 * 1.0 + dVar25 * dVar36) - dVar35 * dVar53);
      auVar6._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      *(undefined1 (*) [16])(lVar17 + 0x50 + lVar15) = auVar6;
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 0x100;
      uVar10 = (undefined4)local_308;
      uVar54 = local_308._4_4_;
      dVar25 = local_2e8;
    } while (lVar16 < *(int *)(param_3 + 0x70));
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e93218 FUN_147e93218 body=2479 status=ok
// SIG undefined FUN_147e93218(void)

void FUN_147e93218(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_258 [40];
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218 [12];
  longlong local_1b8 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar12 = *(longlong *)(param_1 + 0xa8);
  if (lVar12 != 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(int *)(param_1 + 0x19c) < 0) {
      FUN_147e9527e(param_1 + 400);
    }
    plVar1 = (longlong *)(lVar12 + 0x240);
    lVar13 = lVar12 + 0x250;
    local_158 = 0x100000000;
    local_148 = 0xffffffff;
    uStack_140 = 0;
    uStack_150 = lVar13;
    if (*(int *)(lVar12 + 0x268) == 0) {
      iVar19 = 0;
    }
    else {
      FUN_1449c0562(&local_158);
      iVar19 = *(int *)(lVar12 + 0x268);
    }
    uStack_118 = CONCAT44(uStack_13c,uStack_140);
    uStack_120 = local_148;
    uVar10 = uStack_120;
    uStack_130 = (undefined4)local_158;
    uStack_12c = local_158._4_4_;
    uStack_128 = (undefined4)uStack_150;
    uStack_124 = uStack_150._4_4_;
    uStack_120._4_4_ = (int)((ulonglong)local_148 >> 0x20);
    iVar11 = uStack_120._4_4_;
    local_220 = lVar12;
    local_138 = plVar1;
    if ((uStack_120._4_4_ != iVar19) || (uStack_120 = uVar10, uStack_150 != lVar13)) {
      do {
        uStack_120 = uVar10;
        plVar17 = *(longlong **)(*local_138 + (longlong)iVar11 * 0x10);
        if (plVar17 != (longlong *)0x0) {
          lVar12 = FUN_144a3a302();
          if ((((*(int *)(lVar12 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                lVar12 + 0x30)) && ((*(byte *)((longlong)plVar17 + 0x9c) & 1) != 0)) &&
             ((iVar11 = (**(code **)(*plVar17 + 0x570))(plVar17), iVar11 != 0 &&
              (*(char *)((longlong)plVar17 + 0x9e) < '\0')))) {
            lVar12 = (**(code **)(*plVar17 + 0x7a0))(plVar17);
            if (lVar12 == 0) {
              lVar12 = FUN_140f5398e();
              if ((*(int *)(lVar12 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                  lVar12 + 0x30)) {
                lVar12 = plVar17[0xcc];
                if ((DAT_14c950c29 == '\x01') && (lVar12 != 0)) {
                  FUN_14689c22e(lVar12);
                }
                else if (lVar12 == 0) goto LAB_147e937fa;
                dVar2 = (double)plVar17[0x2e] + (double)plVar17[0x31];
                dVar35 = (double)plVar17[0x2d] + (double)plVar17[0x30];
                dVar34 = (double)plVar17[0x2c] + (double)plVar17[0x2f];
                dVar3 = (double)plVar17[0x2e] - (double)plVar17[0x31];
                dVar25 = (double)plVar17[0x2d] - (double)plVar17[0x30];
                dVar27 = (double)plVar17[0x2c] - (double)plVar17[0x2f];
                if (*(char *)(param_1 + 0x148) == '\0') {
                  *(undefined1 *)(param_1 + 0x148) = 1;
                  dVar5 = dVar2;
                }
                else {
                  dVar5 = *(double *)(param_1 + 0x118);
                  if (dVar27 <= *(double *)(param_1 + 0x118)) {
                    dVar5 = dVar27;
                  }
                  dVar27 = dVar5;
                  dVar5 = *(double *)(param_1 + 0x120);
                  if (dVar25 <= *(double *)(param_1 + 0x120)) {
                    dVar5 = dVar25;
                  }
                  dVar25 = dVar5;
                  dVar5 = *(double *)(param_1 + 0x128);
                  uVar21 = SUB84(dVar5,0);
                  uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
                  if (dVar3 <= dVar5) {
                    uVar21 = SUB84(dVar3,0);
                    uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
                  }
                  dVar3 = (double)CONCAT44(uVar22,uVar21);
                  dVar5 = *(double *)(param_1 + 0x130);
                  if (*(double *)(param_1 + 0x130) <= dVar34) {
                    dVar5 = dVar34;
                  }
                  dVar34 = dVar5;
                  dVar5 = *(double *)(param_1 + 0x138);
                  uVar21 = SUB84(dVar5,0);
                  uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
                  if (dVar5 <= dVar35) {
                    uVar21 = SUB84(dVar35,0);
                    uVar22 = (undefined4)((ulonglong)dVar35 >> 0x20);
                  }
                  dVar35 = (double)CONCAT44(uVar22,uVar21);
                  dVar5 = *(double *)(param_1 + 0x140);
                  if (*(double *)(param_1 + 0x140) <= dVar2) {
                    dVar5 = dVar2;
                  }
                }
                *(double *)(param_1 + 0x118) = dVar27;
                *(double *)(param_1 + 0x120) = dVar25;
                *(double *)(param_1 + 0x128) = dVar3;
                *(double *)(param_1 + 0x130) = dVar34;
                *(double *)(param_1 + 0x138) = dVar35;
                *(double *)(param_1 + 0x140) = dVar5;
                if ((longlong)*(int *)(lVar12 + 200) != 0) {
                  lVar15 = *(longlong *)(lVar12 + 0xc0);
                  lVar12 = (longlong)*(int *)(lVar12 + 200) << 3;
                  lVar20 = 0;
                  local_230 = lVar15;
                  local_228 = lVar12;
                  do {
                    if ((*(longlong *)(lVar15 + lVar20) != 0) &&
                       (*(longlong *)(*(longlong *)(lVar15 + lVar20) + 0x188) != 0)) {
                      plVar16 = plVar17 + 0x48;
                      plVar18 = local_218;
                      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                        *plVar18 = *plVar16;
                        plVar16 = plVar16 + 1;
                        plVar18 = plVar18 + 1;
                      }
                      FUN_147e91842(param_1);
                      lVar12 = local_228;
                      lVar15 = local_230;
                    }
                    lVar20 = lVar20 + 8;
                  } while (lVar12 != lVar20);
                }
              }
            }
            else {
              dVar2 = (double)plVar17[0x2e] + (double)plVar17[0x31];
              dVar35 = (double)plVar17[0x2d] + (double)plVar17[0x30];
              dVar34 = (double)plVar17[0x2c] + (double)plVar17[0x2f];
              dVar3 = (double)plVar17[0x2e] - (double)plVar17[0x31];
              dVar25 = (double)plVar17[0x2d] - (double)plVar17[0x30];
              dVar27 = (double)plVar17[0x2c] - (double)plVar17[0x2f];
              if (*(char *)(param_1 + 0x148) == '\0') {
                *(undefined1 *)(param_1 + 0x148) = 1;
                dVar5 = dVar2;
              }
              else {
                dVar5 = *(double *)(param_1 + 0x118);
                if (dVar27 <= *(double *)(param_1 + 0x118)) {
                  dVar5 = dVar27;
                }
                dVar27 = dVar5;
                dVar5 = *(double *)(param_1 + 0x120);
                if (dVar25 <= *(double *)(param_1 + 0x120)) {
                  dVar5 = dVar25;
                }
                dVar25 = dVar5;
                dVar5 = *(double *)(param_1 + 0x128);
                uVar21 = SUB84(dVar5,0);
                uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
                if (dVar3 <= dVar5) {
                  uVar21 = SUB84(dVar3,0);
                  uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
                }
                dVar3 = (double)CONCAT44(uVar22,uVar21);
                dVar5 = *(double *)(param_1 + 0x130);
                if (*(double *)(param_1 + 0x130) <= dVar34) {
                  dVar5 = dVar34;
                }
                dVar34 = dVar5;
                dVar5 = *(double *)(param_1 + 0x138);
                uVar21 = SUB84(dVar5,0);
                uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
                if (dVar5 <= dVar35) {
                  uVar21 = SUB84(dVar35,0);
                  uVar22 = (undefined4)((ulonglong)dVar35 >> 0x20);
                }
                dVar35 = (double)CONCAT44(uVar22,uVar21);
                dVar5 = *(double *)(param_1 + 0x140);
                if (*(double *)(param_1 + 0x140) <= dVar2) {
                  dVar5 = dVar2;
                }
              }
              *(double *)(param_1 + 0x118) = dVar27;
              *(double *)(param_1 + 0x120) = dVar25;
              *(double *)(param_1 + 0x128) = dVar3;
              *(double *)(param_1 + 0x130) = dVar34;
              *(double *)(param_1 + 0x138) = dVar35;
              *(double *)(param_1 + 0x140) = dVar5;
              plVar17 = plVar17 + 0x48;
              plVar16 = local_1b8;
              for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                *plVar16 = *plVar17;
                plVar17 = plVar17 + 1;
                plVar16 = plVar16 + 1;
              }
              FUN_147e91842(param_1,local_1b8,lVar12);
            }
          }
        }
LAB_147e937fa:
        uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_12c);
        FUN_1449c0562(&uStack_130);
        iVar11 = uStack_120._4_4_;
        uVar10 = uStack_120;
      } while (local_138 != plVar1 ||
               (CONCAT44(uStack_124,uStack_128) != lVar13 || uStack_120._4_4_ != iVar19));
    }
    iVar19 = *(int *)(param_1 + 0x198);
    if (iVar19 == 0) {
      lVar12 = *(longlong *)(local_220 + 0x1c8);
      if (lVar12 == 0) {
        pdVar14 = (double *)&DAT_14c8464e0;
        uVar21 = (undefined4)DAT_14c8464f0;
        uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar21 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
        uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
        pdVar14 = (double *)(lVar12 + 0x260);
      }
      dVar2 = *pdVar14;
      dVar3 = pdVar14[1];
      *(double *)(param_1 + 0x118) = dVar2 - *(double *)(param_1 + 0x170);
      *(double *)(param_1 + 0x120) = dVar3 - *(double *)(param_1 + 0x178);
      *(double *)(param_1 + 0x128) = (double)CONCAT44(uVar22,uVar21) - *(double *)(param_1 + 0x180);
      *(double *)(param_1 + 0x130) = dVar2 + *(double *)(param_1 + 0x170);
      *(double *)(param_1 + 0x138) = dVar3 + *(double *)(param_1 + 0x178);
      *(double *)(param_1 + 0x140) = (double)CONCAT44(uVar22,uVar21) + *(double *)(param_1 + 0x180);
      *(undefined1 *)(param_1 + 0x148) = 1;
      lVar12 = *(longlong *)(local_220 + 0x1c8);
      if (lVar12 == 0) {
        uVar21 = 0;
        uVar22 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        uVar33 = 0x3ff00000;
      }
      else {
        uVar21 = *(undefined4 *)(lVar12 + 0x240);
        uVar22 = *(undefined4 *)(lVar12 + 0x244);
        uVar28 = *(undefined4 *)(lVar12 + 0x248);
        uVar29 = *(undefined4 *)(lVar12 + 0x24c);
        uVar30 = *(undefined4 *)(lVar12 + 0x250);
        uVar31 = *(undefined4 *)(lVar12 + 0x254);
        uVar32 = *(undefined4 *)(lVar12 + 600);
        uVar33 = *(undefined4 *)(lVar12 + 0x25c);
      }
      local_108 = *(undefined8 *)(param_1 + 0x148);
      local_138 = *(longlong **)(param_1 + 0x118);
      uStack_130 = *(undefined4 *)(param_1 + 0x120);
      uStack_12c = *(uint *)(param_1 + 0x124);
      uStack_128 = *(undefined4 *)(param_1 + 0x128);
      uStack_124 = *(undefined4 *)(param_1 + 300);
      uStack_120 = *(undefined8 *)(param_1 + 0x130);
      uStack_118 = *(undefined8 *)(param_1 + 0x138);
      uStack_110 = *(undefined4 *)(param_1 + 0x140);
      uStack_10c = *(undefined4 *)(param_1 + 0x144);
      *(undefined4 *)(param_1 + 0x198) = 1;
      if (*(int *)(param_1 + 0x19c) == 0) {
        FUN_147e951ea(param_1 + 400,0);
      }
      puVar4 = *(undefined4 **)(param_1 + 400);
      *(undefined8 *)(puVar4 + 0xc) = local_108;
      *(undefined8 *)(puVar4 + 0xe) = uStack_100;
      *(undefined8 *)(puVar4 + 8) = uStack_118;
      *(ulonglong *)(puVar4 + 10) = CONCAT44(uStack_10c,uStack_110);
      *(ulonglong *)(puVar4 + 4) = CONCAT44(uStack_124,uStack_128);
      *(undefined8 *)(puVar4 + 6) = uStack_120;
      *puVar4 = (undefined4)local_138;
      puVar4[1] = local_138._4_4_;
      puVar4[2] = uStack_130;
      puVar4[3] = uStack_12c;
      puVar4[0x10] = uVar21;
      puVar4[0x11] = uVar22;
      puVar4[0x12] = uVar28;
      puVar4[0x13] = uVar29;
      puVar4[0x14] = uVar30;
      puVar4[0x15] = uVar31;
      puVar4[0x16] = uVar32;
      puVar4[0x17] = uVar33;
      iVar19 = *(int *)(param_1 + 0x198);
    }
    if (0 < iVar19) {
      lVar12 = 0;
      lVar13 = 0;
      do {
        lVar15 = *(longlong *)(param_1 + 400);
        dVar2 = *(double *)(lVar15 + 0x10 + lVar12);
        dVar3 = *(double *)(lVar15 + 0x28 + lVar12);
        dVar35 = *(double *)(lVar15 + 8 + lVar12);
        dVar27 = *(double *)(lVar15 + 0x20 + lVar12);
        dVar25 = *(double *)(lVar15 + 0x18 + lVar12);
        dVar34 = (dVar2 + dVar3) * 0.5;
        dVar5 = (dVar35 + dVar27) * 0.5;
        dVar6 = (*(double *)(lVar15 + lVar12) + dVar25) * 0.5;
        dVar23 = (dVar3 - dVar2) * 0.5;
        dVar24 = (dVar27 - dVar35) * 0.5;
        dVar26 = (dVar25 - *(double *)(lVar15 + lVar12)) * 0.5;
        pdVar14 = (double *)(lVar15 + 0x40 + lVar12);
        dVar9 = *pdVar14;
        dVar27 = -dVar9;
        dVar8 = -pdVar14[1];
        pdVar14 = (double *)(lVar15 + 0x50 + lVar12);
        dVar25 = *pdVar14 * -1.0;
        dVar7 = pdVar14[1] * 1.0;
        dVar35 = dVar6 * dVar25 - dVar27 * dVar34;
        dVar2 = dVar5 * dVar27 - dVar8 * dVar6;
        dVar3 = dVar34 * dVar8 - dVar25 * dVar5;
        dVar3 = dVar3 + dVar3;
        dVar35 = dVar35 + dVar35;
        dVar2 = dVar2 + dVar2;
        dVar34 = dVar7 * dVar2 + dVar34 + (dVar35 * dVar27 - dVar3 * dVar8);
        dVar27 = (dVar2 * dVar8 - dVar35 * dVar25) + dVar7 * dVar3 + dVar6;
        dVar2 = dVar9 * dVar2 + dVar25 * dVar3 + dVar7 * dVar35 + dVar5;
        *(double *)(lVar15 + lVar12) = dVar27 - dVar26;
        *(double *)(lVar15 + 8 + lVar12) = dVar2 - dVar24;
        *(double *)(lVar15 + 0x10 + lVar12) = dVar34 - dVar23;
        *(double *)(lVar15 + 0x18 + lVar12) = dVar26 + dVar27;
        *(double *)(lVar15 + 0x20 + lVar12) = dVar24 + dVar2;
        *(double *)(lVar15 + 0x28 + lVar12) = dVar23 + dVar34;
        *(undefined1 *)(lVar15 + 0x30 + lVar12) = 1;
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 0x60;
      } while (lVar13 < *(int *)(param_1 + 0x198));
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e93bc8 FUN_147e93bc8 body=199 status=ok
// SIG undefined FUN_147e93bc8(void)

undefined8
FUN_147e93bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_14a7feda0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14abc35f0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1408278de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e93cb4 FUN_147e93cb4 body=222 status=ok
// SIG undefined FUN_147e93cb4(void)

void FUN_147e93cb4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  byte local_c0;
  undefined1 local_b8 [88];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      local_c0 = *(byte *)(param_1 + 0x79) & 1;
      local_c8 = param_1 + 0x58;
      FUN_147e91600(local_b8,*(longlong *)(param_1 + 0x80) + lVar2,
                    *(longlong *)(param_1 + 0x80) + lVar2 + 0x40,param_1 + 0x50);
      FUN_1478cd62a(param_2 + 0x88,local_b8);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x60;
    } while (lVar1 < *(int *)(param_1 + 0x88));
  }
  *(undefined1 *)(param_2 + 0xd4) = *(undefined1 *)(param_1 + 0x78);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e93d94 FUN_147e93d94 body=14 status=ok
// SIG undefined FUN_147e93d94(void)

void FUN_147e93d94(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    plVar1 = DAT_14caca218;
    if (DAT_14caca220 == 0) {
      plVar1 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001413f02b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 147e93da2 FUN_147e93da2 body=185 status=ok
// SIG undefined FUN_147e93da2(void)

void FUN_147e93da2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  FUN_147e93e5c(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e93e5c FUN_147e93e5c body=189 status=ok
// SIG undefined FUN_147e93e5c(void)

void FUN_147e93e5c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
LAB_147e93e94:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_1410e186c();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_147e93e94;
    lVar3 = *param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    lVar2 = FUN_1410e186c();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x3d0);
      goto LAB_147e93ec6;
    }
  }
  lVar1 = 0;
LAB_147e93ec6:
  if (lVar3 != lVar1) {
    lVar3 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *param_2;
      }
    }
    *(longlong *)(param_1 + 0x3d0) = lVar3;
    FUN_1478c9841(param_1);
    return;
  }
  return;
}



// FUNCTION 147e93f1a FUN_147e93f1a body=185 status=ok
// SIG undefined FUN_147e93f1a(void)

void FUN_147e93f1a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  FUN_147e93fd4(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e93fd4 FUN_147e93fd4 body=189 status=ok
// SIG undefined FUN_147e93fd4(void)

void FUN_147e93fd4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
LAB_147e9400c:
    lVar3 = 0;
  }
  else {
    lVar1 = FUN_1410e186c();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_147e9400c;
    lVar3 = *param_2;
  }
  lVar1 = *(longlong *)(param_1 + 0x3d8);
  if (lVar1 != 0) {
    lVar2 = FUN_1410e186c();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x3d8);
      goto LAB_147e9403e;
    }
  }
  lVar1 = 0;
LAB_147e9403e:
  if (lVar3 != lVar1) {
    lVar3 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *param_2;
      }
    }
    *(longlong *)(param_1 + 0x3d8) = lVar3;
    FUN_1478c9841(param_1);
    return;
  }
  return;
}



// FUNCTION 147e9409c FUN_147e9409c body=896 status=ok
// SIG undefined FUN_147e9409c(void)

void FUN_147e9409c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118 [11];
  longlong local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*(longlong *)(param_1 + -0x28) != 0) && (lVar3 = *(longlong *)(param_1 + 8), lVar3 != 0))
      && (lVar1 = FUN_1410e186c(), lVar1 != 0)) &&
     (((*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) && (lVar3 = *(longlong *)(param_1 + 8), lVar3 != 0)))) {
    lVar1 = FUN_1410e186c();
    if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 8);
    }
    FUN_1478c98a7(local_118);
    lVar1 = local_118[0];
    if ((((local_118[0] == 0) || (lVar2 = FUN_145909544(), lVar2 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      local_118[0] = 0;
    }
    if (lVar3 == local_118[0]) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (((lVar3 == 0) || (lVar1 = FUN_1410e186c(), lVar1 == 0)) ||
         ((*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38) ||
          ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
            lVar1 + 0x30 || (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 == 0))))))
      goto LAB_147e9410d;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x10);
    }
    local_68 = lVar3;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    local_70 = *(longlong *)(param_1 + 8);
    if ((local_70 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    FUN_1433c458e(param_2 + 0x88,*(undefined8 *)(param_1 + -0x20),&local_70,&local_68);
  }
LAB_147e9410d:
  lVar3 = *(longlong *)(param_1 + -0x20);
  lVar1 = *(longlong *)(lVar3 + 0x620);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      local_80 = *(double *)(lVar1 + 0x240) + *(double *)(lVar1 + 600);
      local_88 = *(double *)(lVar1 + 0x238) + *(double *)(lVar1 + 0x250);
      local_90 = *(double *)(lVar1 + 0x230) + *(double *)(lVar1 + 0x248);
      local_98 = *(double *)(lVar1 + 0x240) - *(double *)(lVar1 + 600);
      local_a0 = *(double *)(lVar1 + 0x238) - *(double *)(lVar1 + 0x250);
      local_a8 = *(double *)(lVar1 + 0x230) - *(double *)(lVar1 + 0x248);
      local_78 = 1;
      local_120 = *(longlong *)(param_1 + 8);
      if ((local_120 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e();
        lVar3 = *(longlong *)(param_1 + -0x20);
      }
      FUN_1478cbd10(local_118,&local_a8,lVar3 + 0x240,&local_120);
      lVar3 = *(longlong *)(param_1 + 0x10);
      if ((((lVar3 != 0) && (lVar1 = FUN_1410e186c(), lVar1 != 0)) &&
          (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
           lVar1 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)))) {
        local_128 = lVar3;
        if (DAT_14c950c29 == 1) {
          FUN_14689c22e();
        }
        FUN_1478cce8a(local_118,&local_128);
      }
      *(byte *)(param_2 + 0xd0) = *(byte *)(param_2 + 0xd0) | 0x20;
      FUN_1478cd62a(param_2 + 0x88,local_118);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)(param_1 + 0x19) != '\x03') {
      *(char *)(param_2 + 0xd4) = *(char *)(param_1 + 0x19);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e9441e FUN_147e9441e body=43 status=ok
// SIG undefined FUN_147e9441e(void)

undefined8 FUN_147e9441e(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x3c8) + 0x520))(param_1 + -0x3c8,param_2,1,0);
  return param_2;
}



// FUNCTION 147e94454 FUN_147e94454 body=208 status=ok
// SIG undefined FUN_147e94454(void)

void FUN_147e94454(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((((*(byte *)(param_1 + 0x9e) & 0x40) == 0) == (local_1c != 0)) &&
     (*(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0xbf | (local_1c != 0) << 6,
     (*(byte *)(param_1 + 0x9c) & 1) != 0)) {
    FUN_1413f0292(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e94530 FUN_147e94530 body=98 status=ok
// SIG undefined FUN_147e94530(void)

undefined8 * FUN_147e94530(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 2) == 0) {
    (**(code **)(*(longlong *)(param_1 + -0x110) + 0x478))(param_1 + -0x110);
    if ((*(longlong *)(param_1 + -0x68) != 0) &&
       (*(char *)(*(longlong *)(param_1 + -0x68) + 100) < '\0')) {
      *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 2;
    }
  }
  param_2[6] = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  param_2[4] = *(undefined8 *)(param_1 + 0x28);
  param_2[5] = uVar5;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 147e9459e FUN_147e9459e body=38 status=ok
// SIG undefined FUN_147e9459e(void)

void FUN_147e9459e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + -0x110) + 0x478))(param_1 + -0x110);
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 2;
  return;
}



// FUNCTION 147e945c4 FUN_147e945c4 body=184 status=ok
// SIG undefined FUN_147e945c4(void)

void FUN_147e945c4(longlong param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  
  if ((*(longlong *)(param_1 + 0xa8) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8), lVar3 == 0)) {
    pdVar4 = (double *)&DAT_14c8464e0;
    dVar5 = DAT_14c8464f0;
  }
  else {
    pdVar4 = (double *)(lVar3 + 0x260);
    dVar5 = *(double *)(lVar3 + 0x270);
  }
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  *(double *)(param_1 + 0x118) = dVar1 + -100.0;
  *(double *)(param_1 + 0x120) = dVar2 + -100.0;
  *(double *)(param_1 + 0x128) = dVar5 + -100.0;
  *(double *)(param_1 + 0x130) = dVar1 + 100.0;
  *(double *)(param_1 + 0x138) = dVar2 + 100.0;
  *(double *)(param_1 + 0x140) = dVar5 + 100.0;
  *(undefined1 *)(param_1 + 0x148) = 1;
  return;
}



// FUNCTION 147e94688 FUN_147e94688 body=26 status=ok
// SIG undefined FUN_147e94688(void)

void FUN_147e94688(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_147e946a2(param_1);
  return;
}



// FUNCTION 147e946a2 FUN_147e946a2 body=92 status=ok
// SIG undefined FUN_147e946a2(void)

void FUN_147e946a2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x168) != 0) {
    if ((char)param_1[0x73] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000147e946fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x640))(param_1);
      return;
    }
    if ((char)param_1[0x73] != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e946db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1);
  return;
}



// FUNCTION 147e9471e FUN_147e9471e body=145 status=ok
// SIG undefined FUN_147e9471e(void)

void FUN_147e9471e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar3 = FUN_14494016c(lVar2,0,1);
    if (lVar3 != 0) {
      FUN_147dd2634(lVar3,*(undefined8 *)(param_1 + 0x390));
    }
    if (((*(byte *)(lVar2 + 0x153) & 0x40) != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
      cVar4 = '\x02';
      if (*(char *)(lVar2 + 0x152) != '\x02') {
        cVar4 = (*(char *)(lVar2 + 0x152) == '\x03') * '\x03' + '\x01';
      }
      uVar1 = FUN_1478c973e(cVar4);
      FUN_1478c9748(lVar2,cVar4,*(undefined8 *)(param_1 + 0x390),uVar1 ^ 1,1);
    }
  }
  return;
}



// FUNCTION 147e947cc FUN_147e947cc body=436 status=ok
// SIG undefined FUN_147e947cc(void)

void FUN_147e947cc(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  plVar2 = (longlong *)FUN_147a90604(param_1 + 0x218,*(undefined8 *)(param_1 + 0xa8));
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14092ee58();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      dVar4 = *(double *)(param_1 + 0x248) * 0.5;
      dVar1 = *(double *)(param_1 + 0x240) * 0.5;
      if (dVar1 <= dVar4) {
        dVar1 = dVar4;
      }
      (**(code **)(*plVar2 + 0x528))(plVar2,&local_98,param_1 + 0x260);
      *(double *)(param_1 + 0x118) = (local_98 - local_80) - dVar1;
      *(double *)(param_1 + 0x120) = (local_90 - local_78) - dVar1;
      *(double *)(param_1 + 0x128) = (local_88 - local_70) - dVar1;
      *(double *)(param_1 + 0x130) = local_98 + local_80 + dVar1;
      *(double *)(param_1 + 0x138) = local_90 + local_78 + dVar1;
      *(double *)(param_1 + 0x140) = local_88 + local_70 + dVar1;
      *(undefined1 *)(param_1 + 0x148) = 1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e94982 FUN_147e94982 body=1812 status=ok
// SIG undefined FUN_147e94982(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147e94982(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  undefined1 auStack_388 [32];
  double *local_368;
  undefined4 local_360;
  undefined4 local_358;
  longlong local_350;
  longlong local_348;
  double *local_340;
  undefined4 local_338;
  double local_330;
  double local_328 [12];
  longlong local_2c8;
  undefined8 uStack_2c0;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  longlong local_240;
  double adStack_220 [9];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double adStack_1c0 [12];
  double adStack_160 [7];
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar12 = FUN_147a90604(param_1 + 0x108,*(undefined8 *)(param_1 + -0x68));
  if (lVar12 != 0) {
    lVar13 = FUN_14092ee58();
    if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8
         ) == lVar13 + 0x30)) {
      adStack_160[6] = *(double *)(param_1 + 0x130) * 0.5;
      local_110 = *(double *)(param_1 + 0x138) * 0.5;
      adStack_160[4] = -local_110;
      adStack_160[3] = -adStack_160[6];
      adStack_160[2] = 0.0;
      adStack_160[5] = 0.0;
      local_120 = 0;
      local_108 = 0;
      local_2c8 = 0;
      uStack_2c0 = 0;
      uVar10 = *(int *)(param_1 + 0x140) - 1;
      if (uVar10 < 3) {
        uVar24 = *(undefined4 *)(&DAT_14abc3658 + (ulonglong)uVar10 * 4);
      }
      else {
        uVar24 = 0x43fa0000;
      }
      local_350 = param_2;
      local_348 = param_1;
      local_128 = adStack_160[4];
      local_118 = adStack_160[6];
      local_100 = adStack_160[3];
      local_f8 = local_110;
      iVar11 = FUN_14349c812(lVar12);
      iVar16 = 2;
      if (2 < iVar11) {
        iVar16 = iVar11;
      }
      cVar9 = FUN_147a244ec(lVar12);
      iVar11 = -1;
      if (cVar9 != '\0') {
        iVar11 = iVar16 + -1;
      }
      iVar17 = 0;
      do {
        if (-1 < iVar11) {
          FUN_147a21460(lVar12,adStack_220 + 2,iVar11,1);
          FUN_147a21460(lVar12,&local_298,iVar17,1);
          uVar19 = uStack_2c0;
          lVar13 = (longlong)(int)uStack_2c0;
          uVar10 = (int)uStack_2c0 + 1;
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar10);
          if (uStack_2c0._4_4_ < uVar10) {
            FUN_1403e3958(&local_2c8,uVar19 & 0xffffffff);
          }
          *(double *)(local_2c8 + 0x10 + lVar13 * 0x18) = adStack_220[5];
          pdVar14 = (double *)(local_2c8 + lVar13 * 0x18);
          *pdVar14 = adStack_220[3];
          pdVar14[1] = adStack_220[4];
          local_328[2] = local_280 - local_268 * 0.3333333333333333;
          local_328[0] = local_290 - local_278 * 0.3333333333333333;
          local_328[1] = local_288 - local_270 * 0.3333333333333333;
          local_2a0 = local_1c8 * 0.3333333333333333 + adStack_220[5];
          local_2a8 = local_1d0 * 0.3333333333333333 + adStack_220[4];
          local_2b0 = local_1d8 * 0.3333333333333333 + adStack_220[3];
          local_368 = &local_290;
          local_358 = 6;
          local_360 = uVar24;
          FUN_147a3d79c(&local_2c8,adStack_220 + 3,&local_2b0,local_328);
        }
        iVar18 = iVar17 + 1;
        iVar11 = iVar17;
        iVar17 = iVar18;
      } while (iVar16 != iVar18);
      iVar16 = (int)uStack_2c0;
      pdVar14 = (double *)(lVar12 + 0x240);
      pdVar15 = local_328;
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar15 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        pdVar15 = pdVar15 + 1;
      }
      if (1 < iVar16) {
        local_350 = local_350 + 0x88;
        lVar12 = 1;
        uVar19 = 0;
        do {
          lVar13 = lVar12 * 0x18;
          lVar8 = uVar19 * 0x18;
          local_288 = *(double *)(local_2c8 + 0x10 + lVar13) - *(double *)(local_2c8 + 0x10 + lVar8)
          ;
          local_290 = *(double *)(local_2c8 + 8 + lVar13) - *(double *)(local_2c8 + 8 + lVar8);
          local_298 = *(double *)(local_2c8 + lVar13) - *(double *)(local_2c8 + lVar8);
          dVar4 = (double)FUN_1467fc648(&local_298);
          dVar5 = DAT_14c8463c8;
          dVar7 = DAT_14c8463c0;
          dVar6 = DAT_14c8463b8;
          dVar3 = sin(dVar4 * 0.5);
          dVar4 = cos(dVar4 * 0.5);
          dVar6 = dVar6 * dVar3;
          dVar7 = dVar7 * dVar3;
          dVar5 = dVar5 * dVar3;
          pdVar15 = (double *)(lVar8 + local_2c8);
          pdVar14 = (double *)(local_2c8 + lVar13);
          lVar13 = 0x10;
          do {
            dVar3 = *(double *)((longlong)adStack_160 + lVar13);
            dVar1 = *(double *)((longlong)adStack_160 + lVar13 + 8);
            dVar2 = *(double *)((longlong)adStack_160 + lVar13 + 0x10);
            dVar21 = dVar7 * dVar2 + dVar1 * -dVar5;
            dVar21 = dVar21 + dVar21;
            dVar22 = dVar6 * dVar1 + dVar3 * -dVar7;
            dVar22 = dVar22 + dVar22;
            dVar20 = dVar5 * dVar3 + dVar2 * -dVar6;
            dVar20 = dVar20 + dVar20;
            dVar2 = dVar6 * dVar20 + dVar21 * -dVar7 + dVar4 * dVar22 + dVar2;
            dVar23 = dVar22 * -dVar6 + dVar5 * dVar21 + dVar4 * dVar20 + dVar1;
            dVar21 = dVar20 * -dVar5 + dVar7 * dVar22 + dVar4 * dVar21 + dVar3;
            dVar3 = pdVar15[2];
            dVar1 = pdVar15[1];
            *(double *)((longlong)adStack_220 + lVar13) = *pdVar15 + dVar21;
            *(double *)((longlong)adStack_220 + lVar13 + 8) = dVar1 + dVar23;
            *(double *)((longlong)adStack_220 + lVar13 + 0x10) = dVar3 + dVar2;
            dVar3 = pdVar14[2];
            dVar1 = pdVar14[1];
            *(double *)((longlong)adStack_1c0 + lVar13) = dVar21 + *pdVar14;
            *(double *)((longlong)adStack_1c0 + lVar13 + 8) = dVar23 + dVar1;
            *(double *)((longlong)adStack_1c0 + lVar13 + 0x10) = dVar2 + dVar3;
            lVar13 = lVar13 + 0x18;
          } while (lVar13 != 0x70);
          local_330 = *(double *)(local_348 + 0x50);
          if ((local_330 != 0.0 & DAT_14c950c29) == 1) {
            FUN_14689c22e();
          }
          local_340 = adStack_220 + 2;
          local_338 = 8;
          local_368 = &local_330;
          FUN_1478cc5cc(&local_298,&local_340,0,local_328);
          FUN_1478cd62a(local_350,&local_298);
          if (local_240 != 0) {
            FUN_1400020a8();
          }
          lVar12 = lVar12 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar19 != iVar16 - 1);
      }
      if (local_2c8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e950c8 FUN_147e950c8 body=45 status=ok
// SIG undefined FUN_147e950c8(void)

longlong FUN_147e950c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e950f6 FUN_147e950f6 body=48 status=ok
// SIG undefined FUN_147e950f6(void)

longlong FUN_147e950f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e95128 FUN_147e95128 body=45 status=ok
// SIG undefined FUN_147e95128(void)

longlong FUN_147e95128(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e27524(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e95156 FUN_147e95156 body=48 status=ok
// SIG undefined FUN_147e95156(void)

longlong FUN_147e95156(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145e27524(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e95186 FUN_147e95186 body=100 status=ok
// SIG undefined FUN_147e95186(void)

void FUN_147e95186(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000147e951de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e951ea FUN_147e951ea body=147 status=ok
// SIG undefined FUN_147e951ea(void)

void FUN_147e951ea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e9527e FUN_147e9527e body=48 status=ok
// SIG undefined FUN_147e9527e(void)

void FUN_147e9527e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,0x10);
  }
  return;
}



// FUNCTION 147e952ae FUN_147e952ae body=34 status=ok
// SIG undefined FUN_147e952ae(void)

undefined8 FUN_147e952ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147e952ea FUN_147e952ea body=29 status=ok
// SIG undefined FUN_147e952ea(void)

bool FUN_147e952ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e95308 FUN_147e95308 body=26 status=ok
// SIG undefined FUN_147e95308(void)

bool FUN_147e95308(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147e95322 FUN_147e95322 body=24 status=ok
// SIG undefined FUN_147e95322(void)

bool FUN_147e95322(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147e9533a FUN_147e9533a body=68 status=ok
// SIG undefined FUN_147e9533a(void)

void FUN_147e9533a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a7feda0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14abc35f0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147e9537e FUN_147e9537e body=68 status=ok
// SIG undefined FUN_147e9537e(void)

void FUN_147e9537e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a7feda0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14abc35f0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147e953c2 FUN_147e953c2 body=105 status=ok
// SIG undefined FUN_147e953c2(void)

void FUN_147e953c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar2 = &PTR_LAB_14a7feda0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14abc35f0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e9542c FUN_147e9542c body=62 status=ok
// SIG undefined FUN_147e9542c(void)

void FUN_147e9542c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e95467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e9546a FUN_147e9546a body=165 status=ok
// SIG undefined FUN_147e9546a(void)

bool FUN_147e9546a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e95552 FUN_147e95552 body=42 status=ok
// SIG undefined FUN_147e95552(void)

void FUN_147e95552(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e95573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2e0))(param_1,0);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 147e95592 FUN_147e95592 body=126 status=ok
// SIG undefined FUN_147e95592(void)

void FUN_147e95592(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0xb);
  if (lVar1 == 0) {
    if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
      if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e955d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2e0))(param_1,0);
        return;
      }
      *(undefined1 *)((longlong)param_1 + 0x39) = 4;
    }
    return;
  }
  if ((((*(byte *)((longlong)param_1 + 0x3c) & 0x10) == 0) && ((short)param_1[8] == 0)) &&
     (*(short *)((longlong)param_1 + 0x42) == 0)) {
    FUN_147e9567c(param_1);
    return;
  }
  FUN_147e956ca(lVar1,param_1);
  return;
}



// FUNCTION 147e95614 FUN_147e95614 body=102 status=ok
// SIG undefined FUN_147e95614(void)

void FUN_147e95614(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459939b6();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9567c FUN_147e9567c body=77 status=ok
// SIG undefined FUN_147e9567c(void)

void FUN_147e9567c(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x39) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x39) = 3;
    (**(code **)(*param_1 + 0x2a0))();
    if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
      lVar1 = FUN_14479d2ce(param_1 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x000147e956c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x110) + 0x38))(lVar1 + 0x110,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e956ca FUN_147e956ca body=123 status=ok
// SIG undefined FUN_147e956ca(void)

void FUN_147e956ca(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_147e99c32(param_1 + 0x138,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x138);
  *(undefined1 *)(lVar2 + (longlong)iVar1 * 0x10) = 0;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_2;
  if (((*(int *)(param_1 + 0x140) == 1) && ((*(byte *)(param_1 + 0x124) & 1) == 0)) &&
     (*(int *)(param_1 + 0x120) == 0)) {
    FUN_147e96d66(param_1);
    return;
  }
  return;
}



// FUNCTION 147e95746 FUN_147e95746 body=213 status=ok
// SIG undefined FUN_147e95746(void)

void FUN_147e95746(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x38) = param_3;
  FUN_147e99920(&local_38);
  *(undefined4 *)(param_1 + 0x48) = local_38;
  *(undefined4 *)(param_1 + 0x4c) = uStack_34;
  *(undefined4 *)(param_1 + 0x50) = uStack_30;
  *(undefined4 *)(param_1 + 0x54) = uStack_2c;
  *(undefined1 *)(param_1 + 0x39) = 1;
  if ((*(byte *)(param_1 + 0x3c) & 0x40) != 0) {
    *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | *(ushort *)(param_1 + 0x40);
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_1);
  FUN_14485c47a(param_1 + 0x58,lVar1);
  lVar2 = FUN_14479d2ce(param_1 + 0x48);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffdf | (uint)(lVar2 == lVar1) << 5;
  if (lVar2 != lVar1 && lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x110) + 0x30))(lVar1 + 0x110,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9581c FUN_147e9581c body=27 status=ok
// SIG undefined FUN_147e9581c(void)

void FUN_147e9581c(longlong param_1)

{
  FUN_14485c47a(param_1 + 0x58);
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 4;
  return;
}



// FUNCTION 147e95838 FUN_147e95838 body=54 status=ok
// SIG undefined FUN_147e95838(void)

longlong FUN_147e95838(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0xb0);
    if (lVar2 == 0) {
      lVar1 = FUN_1448abda6(lVar1);
      return lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 147e9586e FUN_147e9586e body=91 status=ok
// SIG undefined FUN_147e9586e(void)

undefined8 FUN_147e9586e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if (cVar1 != '\0') {
      plVar4 = *(longlong **)(param_1 + 0x50);
      lVar2 = *plVar4;
      goto LAB_147e958b2;
    }
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = (longlong *)(lVar2 + 0x110);
  lVar2 = *(longlong *)(lVar2 + 0x110);
LAB_147e958b2:
                    /* WARNING: Could not recover jumptable at 0x000147e958be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(lVar2 + 0x18))(plVar4,param_1);
  return uVar3;
}



// FUNCTION 147e958ca FUN_147e958ca body=91 status=ok
// SIG undefined FUN_147e958ca(void)

undefined8 FUN_147e958ca(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if (cVar1 != '\0') {
      plVar4 = *(longlong **)(param_1 + 0x50);
      lVar2 = *plVar4;
      goto LAB_147e9590e;
    }
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = (longlong *)(lVar2 + 0x110);
  lVar2 = *(longlong *)(lVar2 + 0x110);
LAB_147e9590e:
                    /* WARNING: Could not recover jumptable at 0x000147e9591a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(lVar2 + 0x20))(plVar4,param_1);
  return uVar3;
}



// FUNCTION 147e9597e FUN_147e9597e body=271 status=ok
// SIG undefined FUN_147e9597e(void)

uint FUN_147e9597e(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 == 0) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) goto LAB_147e959fb;
  if (*(longlong *)(param_1 + 0x50) == 0) {
LAB_147e959db:
    FUN_140056680(local_30,L"Invalid GameplayTask Owner");
  }
  else {
    cVar2 = FUN_144729dda(param_1 + 0x48);
    if (cVar2 == '\0') goto LAB_147e959db;
    lVar4 = FUN_14479d2ce(param_1 + 0x48);
    local_20 = *(undefined8 *)(lVar4 + 0x18);
    FUN_1400021e4(&local_20,local_30);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_147e959fb:
  *(undefined1 *)(param_1 + 0x39) = 4;
  lVar4 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x110) + 0x40))(lVar4 + 0x110,param_1);
  }
  FUN_144757f48(param_1,0x40000000);
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar3 = *(uint *)(lVar4 + 8);
    if ((uVar3 >> 0x15 & 1) != 0) break;
    LOCK();
    uVar1 = *(uint *)(lVar4 + 8);
    bVar5 = uVar3 == uVar1;
    if (bVar5) {
      *(uint *)(lVar4 + 8) = uVar3 | 0x200000;
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    UNLOCK();
  } while (!bVar5);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147e95a8e FUN_147e95a8e body=191 status=ok
// SIG undefined FUN_147e95a8e(void)

undefined8 FUN_147e95a8e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_1 + 0x30,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  local_30 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_30,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s (%s)",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e95b4e FUN_147e95b4e body=215 status=ok
// SIG undefined FUN_147e95b4e(void)

void FUN_147e95b4e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      local_40 = *(longlong *)(lVar1 + lVar6);
      if ((local_40 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_40);
      }
      lVar3 = local_40;
      if ((((local_40 != 0) && (lVar5 = FUN_14588585a(), lVar5 != 0)) &&
          (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && (local_40 != 0)))) {
        bVar4 = FUN_145cc80f6(&local_40);
        *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) | (ushort)(1 << (bVar4 & 0x1f));
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e95c26 FUN_147e95c26 body=215 status=ok
// SIG undefined FUN_147e95c26(void)

void FUN_147e95c26(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      local_40 = *(longlong *)(lVar1 + lVar6);
      if ((local_40 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_40);
      }
      lVar3 = local_40;
      if ((((local_40 != 0) && (lVar5 = FUN_14588585a(), lVar5 != 0)) &&
          (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30 && (local_40 != 0)))) {
        bVar4 = FUN_145cc80f6(&local_40);
        *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | (ushort)(1 << (bVar4 & 0x1f));
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e95cfe FUN_147e95cfe body=1 status=ok
// SIG undefined FUN_147e95cfe(void)

void FUN_147e95cfe(void)

{
  return;
}



// FUNCTION 147e95d00 FUN_147e95d00 body=50 status=ok
// SIG undefined FUN_147e95d00(void)

void FUN_147e95d00(longlong param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x39) = 2;
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000147e95d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x110) + 0x40))(lVar1 + 0x110,param_1);
  return;
}



// FUNCTION 147e95d32 FUN_147e95d32 body=39 status=ok
// SIG undefined FUN_147e95d32(void)

void FUN_147e95d32(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x39);
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000147e95d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f0))();
    return;
  }
  if (cVar1 != '\x04') {
    if (cVar1 != '\x01') {
      return;
    }
    FUN_147e9567c();
    return;
  }
  if (*(char *)((longlong)param_1 + 0x39) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x39) = 3;
    (**(code **)(*param_1 + 0x2a0))();
    if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
      lVar2 = FUN_14479d2ce(param_1 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x000147e956c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar2 + 0x110) + 0x38))(lVar2 + 0x110,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e95dd6 FUN_147e95dd6 body=90 status=ok
// SIG undefined FUN_147e95dd6(void)

void FUN_147e95dd6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x39) != '\x04')) {
    if ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar1 + 0x2e0))(plVar1,0);
    }
    else {
      *(undefined1 *)((longlong)plVar1 + 0x39) = 4;
    }
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 147e95e46 FUN_147e95e46 body=719 status=ok
// SIG undefined FUN_147e95e46(void)

void FUN_147e95e46(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar4 = uStack_60;
  lVar1 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = 0;
  local_70 = (int)uStack_60;
  if ((int)uStack_60 == 0) {
    local_6c = 0;
  }
  else {
    FUN_147e9996e(&local_78,uStack_60 & 0xffffffff);
    FUN_147e999c7(local_78,lVar1,uVar4 & 0xffffffff);
  }
  uVar4 = uStack_50;
  lVar1 = local_58;
  local_88 = 0;
  local_80 = (int)uStack_50;
  if ((int)uStack_50 == 0) {
    local_7c = 0;
  }
  else {
    FUN_147e9996e(&local_88,uStack_50 & 0xffffffff);
    FUN_147e999c7(local_88,lVar1,uVar4 & 0xffffffff);
  }
  uVar2 = local_40;
  uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_41);
  local_98 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_90 = uStack_30;
  local_a8 = &local_78;
  uVar3 = FUN_147e96116(&local_98,uVar2,uVar4 & 0xffffffff,&local_88);
  *param_3 = uVar3;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e96116 FUN_147e96116 body=2216 status=ok
// SIG undefined FUN_147e96116(void)

ulonglong FUN_147e96116(longlong *param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                       longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong *local_1a0;
  longlong *local_198 [2];
  undefined1 local_188 [8];
  longlong *local_180;
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong local_e8 [6];
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong *local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_140056680(local_e8,&DAT_149e01fe8);
  FUN_140233b1a(local_a8,local_e8);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((*param_1 == 0) || (plVar2 = (longlong *)param_1[1], plVar2 == (longlong *)0x0)) {
    FUN_1446ddc76(local_178,&DAT_14a492018,1);
    FUN_14276766e(local_e8,local_178);
    if (param_2 == 0) {
      local_108[0] = local_a8[0];
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 8))();
      }
    }
    else {
      local_110 = *(undefined8 *)(param_2 + 0x18);
      FUN_145715fae(local_108);
    }
    local_68 = L"RunGameplayTaskNullOwner";
    local_60 = 0x18;
    FUN_1446e940c(local_134,&local_68);
    local_68 = L"GameplayTasksComponent";
    local_60 = 0x16;
    FUN_1446e940c(local_138,&local_68);
    FUN_140208bae(local_130,local_138,local_134,
                  L"Tried running a gameplay task {0} while owner is None!");
    FUN_14023409e(&local_120,local_130,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_108);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_120;
    local_90 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_118 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_118 + 0x10))(local_118);
        }
      }
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    FUN_142767974(local_e8,local_b8,local_f8);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    if (local_130[0] != (longlong *)0x0) {
      (**(code **)(*local_130[0] + 0x10))();
    }
LAB_147e96669:
    FUN_1427678c0(local_e8);
  }
  else {
    if (param_2 == 0) {
      FUN_1446ddc76(&local_110,&DAT_14a492018,1);
      FUN_14276766e(local_e8,&local_110);
      lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
      local_68 = *(wchar_t **)(lVar4 + 0x18);
      FUN_1400021e4(&local_68,local_130);
      FUN_140233b1a(local_158,local_130);
      local_68 = L"RunNullGameplayTask";
      local_60 = 0x13;
      FUN_1446e940c(local_134,&local_68);
      local_68 = L"GameplayTasksComponent";
      local_60 = 0x16;
      FUN_1446e940c(local_138,&local_68);
      FUN_140208bae(local_178,local_138,local_134,L"Tried running a None task for {0}");
      FUN_14023409e(&local_168,local_178,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_158);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_168;
      local_90 = local_160;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_160 + 1) = (int)local_160[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_f8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_160 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_160 + 0x10))(local_160);
          }
        }
      }
      if (local_158[0] != (longlong *)0x0) {
        (**(code **)(*local_158[0] + 0x10))();
      }
      FUN_142767974(local_e8,local_148,local_f8);
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_140 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)local_140 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
          }
        }
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      if (local_130[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147e96669;
    }
    if (*(byte *)(param_2 + 0x39) - 2 < 2) {
      FUN_1446ddc76(&local_110,&DAT_14a492018,1);
      FUN_14276766e(local_e8,&local_110);
      lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
      local_68 = *(wchar_t **)(lVar4 + 0x18);
      FUN_1400021e4(&local_68,local_130);
      FUN_140233b1a(local_198,local_130);
      local_68 = L"RunNullGameplayTask";
      local_60 = 0x13;
      FUN_1446e940c(local_134,&local_68);
      local_68 = L"GameplayTasksComponent";
      local_60 = 0x16;
      FUN_1446e940c(local_138,&local_68);
      FUN_140208bae(local_178,local_138,local_134,L"Tried running a None task for {0}");
      FUN_14023409e(&local_1a8,local_178,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_198);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_1a8;
      local_90 = local_1a0;
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_f8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_1a0 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)local_1a0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1a0 + 0x10))(local_1a0);
          }
        }
      }
      if (local_198[0] != (longlong *)0x0) {
        (**(code **)(*local_198[0] + 0x10))();
      }
      FUN_1427679d4(local_e8,local_188,local_f8);
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_180 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_180 + 0x10))(local_180);
          }
        }
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      if (local_130[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_1427678c0(local_e8);
      if ((*(longlong *)(param_2 + 0x50) == 0) ||
         (cVar3 = FUN_144729dda(param_2 + 0x48), cVar3 == '\0')) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_2 + 0x50);
      }
      if (plVar5 == plVar2) {
        uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(char *)(param_2 + 0x39) == '\x02') ^ 3;
        goto LAB_147e96678;
      }
    }
    else {
      if (*(byte *)(param_2 + 0x39) == 0) {
        FUN_147e95746(param_2,plVar2,param_3);
      }
      FUN_147e95b4e(param_2,param_4);
      FUN_147e95c26(param_2,param_5);
      FUN_147e95592(param_2);
      if (*(byte *)(param_2 + 0x39) < 5) {
        uVar6 = 0x303020200 >> ((*(byte *)(param_2 + 0x39) & 7) << 3);
        goto LAB_147e96678;
      }
    }
  }
  uVar6 = 0;
LAB_147e96678:
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147e969c0 FUN_147e969c0 body=180 status=ok
// SIG undefined FUN_147e969c0(void)

void FUN_147e969c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147e96a76(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e96a76 FUN_147e96a76 body=595 status=ok
// SIG undefined FUN_147e96a76(void)

void FUN_147e96a76(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  if (((*(byte *)((longlong)param_1 + 0x9c) & 0x40) != 0) && ((longlong)(int)param_2[1] != 0)) {
    plVar10 = (longlong *)*param_2;
    plVar1 = plVar10 + (int)param_2[1];
    do {
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar8);
        }
        lVar4 = param_1[0x30];
        if ((longlong)(int)lVar4 != 0) {
          lVar3 = param_1[0x2f];
          uVar9 = 0;
          bVar5 = DAT_14c950c29;
          do {
            if ((bVar5 & 1) != 0) {
              FUN_1456cec3c(lVar8);
              bVar5 = DAT_14c950c29;
            }
            if (*(longlong *)(lVar3 + uVar9) == lVar8) {
              if ((~uVar9 & 0x7fffffff8) != 0) goto LAB_147e96cb1;
              break;
            }
            uVar9 = uVar9 + 8;
          } while ((longlong)(int)lVar4 * 8 != uVar9);
        }
        FUN_140d4ff0a(param_1);
      }
LAB_147e96cb1:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  if ((longlong)(int)param_1[0x30] != 0) {
    plVar10 = (longlong *)param_1[0x2f];
    plVar1 = plVar10 + (int)param_1[0x30];
    do {
      plVar2 = (longlong *)*plVar10;
      if (plVar2 != (longlong *)0x0) {
        if ((*(byte *)((longlong)plVar2 + 0x3c) & 1) != 0) {
          if ((longlong)(int)param_1[0x2a] != 0) {
            lVar8 = 0;
            do {
              if (*(longlong **)(param_1[0x29] + lVar8) == plVar2) goto LAB_147e96ad5;
              lVar8 = lVar8 + 8;
            } while ((longlong)(int)param_1[0x2a] * 8 != lVar8);
          }
          (**(code **)(*plVar2 + 0x2a8))(plVar2);
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(plVar2);
          }
          lVar8 = param_1[0x2a];
          uVar6 = (int)lVar8 + 1;
          *(uint *)(param_1 + 0x2a) = uVar6;
          if (*(uint *)((longlong)param_1 + 0x154) < uVar6) {
            FUN_147e99a14(param_1 + 0x29);
          }
          *(longlong **)(param_1[0x29] + (longlong)(int)lVar8 * 8) = plVar2;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(plVar2);
          }
          if (((int)param_1[0x2a] == 1) &&
             (uVar7 = (**(code **)(*param_1 + 0x478))(param_1),
             (byte)uVar7 != (*(byte *)((longlong)param_1 + 0x9e) & 0x10) >> 4)) {
            (**(code **)(*param_1 + 0x2b8))(param_1,uVar7,0);
          }
        }
LAB_147e96ad5:
        if ((*(byte *)((longlong)param_1 + 0x9c) & 0x40) != 0) {
          if ((longlong)(int)param_2[1] != 0) {
            uVar9 = 0;
            do {
              if (*(longlong **)(*param_2 + uVar9) == plVar2) {
                if ((~uVar9 & 0x7fffffff8) != 0) goto LAB_147e96ae2;
                break;
              }
              uVar9 = uVar9 + 8;
            } while ((longlong)(int)param_2[1] * 8 != uVar9);
          }
          FUN_140fb79a0(param_1);
        }
      }
LAB_147e96ae2:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  return;
}



// FUNCTION 147e96ccc FUN_147e96ccc body=104 status=ok
// SIG undefined FUN_147e96ccc(void)

void FUN_147e96ccc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1ded0) {
    FUN_144b3d300(&DAT_14cb1ded0);
    if (DAT_14cb1ded0 == -1) {
      FUN_1446f470e(&DAT_14cb1dec8,L"SimulatedTasks",1);
      _Init_thread_footer(&DAT_14cb1ded0);
      return;
    }
  }
  return;
}



// FUNCTION 147e96d34 FUN_147e96d34 body=49 status=ok
// SIG undefined FUN_147e96d34(void)

void FUN_147e96d34(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x120);
    *piVar1 = *piVar1 + -1;
    lVar4 = *param_1;
    if (((*(int *)(lVar4 + 0x140) != 0) && ((*(byte *)(lVar4 + 0x124) & 1) == 0)) &&
       (*(int *)(lVar4 + 0x120) == 0)) {
      *(byte *)(lVar4 + 0x124) = *(byte *)(lVar4 + 0x124) | 1;
      if (0 < *(int *)(lVar4 + 0x140)) {
        plVar2 = (longlong *)(lVar4 + 0x138);
        iVar6 = 0;
        do {
          if (iVar6 == 0x10) {
            *(undefined4 *)(lVar4 + 0x140) = 0;
            if (*(int *)(lVar4 + 0x144) < 0) {
              FUN_147e99cb8(plVar2);
            }
            break;
          }
          iVar6 = iVar6 + 1;
          lVar7 = 8;
          lVar8 = 0;
          do {
            lVar5 = *(longlong *)(*plVar2 + lVar7);
            if ((lVar5 == 0) || ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)) {
LAB_147e96dc9:
              FUN_147e97964(lVar4);
            }
            else {
              cVar3 = *(char *)(*plVar2 + -8 + lVar7);
              if (cVar3 == '\0') {
                if (*(char *)(lVar5 + 0x39) != '\x04') {
                  FUN_147e97a52(lVar4);
                }
              }
              else if (cVar3 == '\x01') goto LAB_147e96dc9;
            }
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0x10;
          } while (lVar8 < *(int *)(lVar4 + 0x140));
          *(undefined4 *)(lVar4 + 0x140) = 0;
          if (*(int *)(lVar4 + 0x144) < 0) {
            FUN_147e99cb8(plVar2);
          }
          FUN_147e97c60(lVar4);
        } while (0 < *(int *)(lVar4 + 0x140));
      }
      *(byte *)(lVar4 + 0x124) = *(byte *)(lVar4 + 0x124) & 0xfe;
      return;
    }
  }
  return;
}



// FUNCTION 147e96d66 FUN_147e96d66 body=244 status=ok
// SIG undefined FUN_147e96d66(void)

void FUN_147e96d66(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 1;
  if (0 < *(int *)(param_1 + 0x140)) {
    plVar1 = (longlong *)(param_1 + 0x138);
    iVar4 = 0;
    do {
      if (iVar4 == 0x10) {
        *(undefined4 *)(param_1 + 0x140) = 0;
        if (*(int *)(param_1 + 0x144) < 0) {
          FUN_147e99cb8(plVar1);
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar5 = 8;
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(*plVar1 + lVar5);
        if ((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) {
LAB_147e96dc9:
          FUN_147e97964(param_1);
        }
        else {
          cVar2 = *(char *)(*plVar1 + -8 + lVar5);
          if (cVar2 == '\0') {
            if (*(char *)(lVar3 + 0x39) != '\x04') {
              FUN_147e97a52(param_1);
            }
          }
          else if (cVar2 == '\x01') goto LAB_147e96dc9;
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar6 < *(int *)(param_1 + 0x140));
      *(undefined4 *)(param_1 + 0x140) = 0;
      if (*(int *)(param_1 + 0x144) < 0) {
        FUN_147e99cb8(plVar1);
      }
      FUN_147e97c60(param_1);
    } while (0 < *(int *)(param_1 + 0x140));
  }
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xfe;
  return;
}



// FUNCTION 147e96e5a FUN_147e96e5a body=94 status=ok
// SIG undefined FUN_147e96e5a(void)

void FUN_147e96e5a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14342d0a4();
  if (((*(byte *)(param_1 + 0x9c) & 0x40) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x180), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x178);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_140fb79a0(param_1,lVar3,3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147e96eb8 FUN_147e96eb8 body=420 status=ok
// SIG undefined FUN_147e96eb8(void)

void FUN_147e96eb8(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)(param_1 + -0x110);
  if (plVar4 != (longlong *)0x0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  local_38 = plVar4;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_147e99a14((longlong *)(param_1 + 0x48),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
      FUN_147e99a14((longlong *)(param_1 + 0x38),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    if (*(int *)(param_1 + 0x40) == 1) {
      uVar3 = (**(code **)(*(longlong *)(param_1 + -0x110) + 0x478))(plVar4);
      if ((byte)uVar3 != (*(byte *)(param_1 + -0x72) & 0x10) >> 4) {
        (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar3,0);
      }
    }
  }
  if ((*(byte *)(param_2 + 0x3c) & 2) != 0) {
    FUN_147e9705e(plVar4,param_2);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    cVar2 = FUN_144729dda();
    if (cVar2 == '\0') {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_2 + 0x50);
    }
    if ((plVar4 != (longlong *)0x0) && ((*(uint *)(param_2 + 0x3c) & 0x20) == 0)) {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    }
  }
  FUN_147e96d34(&local_38);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9705e FUN_147e9705e body=308 status=ok
// SIG undefined FUN_147e9705e(void)

void FUN_147e9705e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x180);
    bVar3 = DAT_14c950c29;
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x178);
      uVar4 = 0;
      do {
        if ((bVar3 & 1) != 0) {
          FUN_1456cec3c(param_2);
          bVar3 = DAT_14c950c29;
        }
        if (*(longlong *)(lVar2 + uVar4) == param_2) {
          if ((int)(~uVar4 >> 3) != 0) {
            return;
          }
          break;
        }
        uVar4 = uVar4 + 8;
      } while ((longlong)iVar1 * 8 != uVar4);
    }
    if ((bVar3 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar1 + 1U) {
      FUN_147e99a14((longlong *)(param_1 + 0x178),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),2);
    if (((*(byte *)(param_1 + 0x9c) & 0x40) != 0) && ((*(byte *)(param_1 + 0x9f) & 0x10) != 0)) {
      FUN_140fb79a0(param_1,param_2,3);
      return;
    }
  }
  return;
}



// FUNCTION 147e97192 FUN_147e97192 body=473 status=ok
// SIG undefined FUN_147e97192(void)

void FUN_147e97192(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)(param_1 + -0x110);
  if (plVar7 != (longlong *)0x0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  cVar2 = *(char *)(param_2 + 0x39);
  plVar5 = *(longlong **)(param_2 + 0x60);
  local_38 = plVar7;
  if (plVar5 != (longlong *)0x0 && cVar2 == '\x04') {
    if ((*(byte *)(param_2 + 0x3c) & 0x80) == 0) {
      if (*(char *)((longlong)plVar5 + 0x39) != '\x04') {
        if ((*(uint *)(plVar5 + 1) >> 0x1e & 1) == 0) {
          lVar4 = *plVar5;
          uVar6 = 0;
          goto LAB_147e97358;
        }
LAB_147e97363:
        *(undefined1 *)((longlong)plVar5 + 0x39) = 4;
      }
    }
    else if (*(char *)((longlong)plVar5 + 0x39) != '\x04') {
      *(byte *)((longlong)plVar5 + 0x3c) = *(byte *)((longlong)plVar5 + 0x3c) | 0x80;
      if ((*(uint *)(plVar5 + 1) >> 0x1e & 1) != 0) goto LAB_147e97363;
      lVar4 = *plVar5;
      uVar6 = 1;
LAB_147e97358:
      (**(code **)(lVar4 + 0x2e0))(plVar5,uVar6);
    }
  }
  if ((*(byte *)(param_2 + 0x3c) & 1) != 0) {
    local_40 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_147e9736c(param_1 + 0x38,&local_40);
  }
  if (cVar2 == '\x04') {
    local_40 = param_2;
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    FUN_147e9745e(param_1 + 0x48,&local_40);
  }
  uVar1 = *(uint *)(param_2 + 0x3c);
  if ((uVar1 & 2) != 0) {
    FUN_147e97536(plVar7,param_2);
    uVar1 = *(uint *)(param_2 + 0x3c);
  }
  bVar8 = false;
  if (((uVar1 & 0x10) == 0) && (bVar8 = false, *(short *)(param_2 + 0x40) == 0)) {
    bVar8 = *(short *)(param_2 + 0x42) == 0;
  }
  if ((cVar2 == '\x04') && (!bVar8)) {
    FUN_147e975de(plVar7,param_2);
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    cVar2 = FUN_144729dda();
    if (cVar2 != '\0') {
      plVar5 = *(longlong **)(param_2 + 0x50);
      goto LAB_147e972a3;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_147e972a3:
  if (((*(uint *)(param_2 + 0x3c) & 0x20) == 0) &&
     (plVar5 != (longlong *)0x0 && -1 < (char)*(uint *)(param_2 + 0x3c))) {
    (**(code **)(*plVar5 + 0x40))(plVar5,param_2);
  }
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x110) + 0x478))(plVar7);
  if ((byte)uVar3 != (*(byte *)(param_1 + -0x72) & 0x10) >> 4) {
    (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar3,0);
  }
  FUN_147e96d34(&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9736c FUN_147e9736c body=241 status=ok
// SIG undefined FUN_147e9736c(void)

void FUN_147e9736c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar6 = 1;
    lVar8 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar8) == lVar2) {
        if (iVar6 == 0) {
          return;
        }
        iVar5 = (int)param_1[1];
        iVar6 = iVar5 - iVar6;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        FUN_147e99a9a(param_1);
        return;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  return;
}



// FUNCTION 147e9745e FUN_147e9745e body=215 status=ok
// SIG undefined FUN_147e9745e(void)

void FUN_147e9745e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_147e9751d;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_147e9751d:
      FUN_147e99a9a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147e97536 FUN_147e97536 body=149 status=ok
// SIG undefined FUN_147e97536(void)

void FUN_147e97536(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = FUN_147e97f46(param_1 + 0x178,&local_28);
  if (iVar1 != 0) {
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),2);
    if ((*(byte *)(param_1 + 0x9c) & 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e975de FUN_147e975de body=123 status=ok
// SIG undefined FUN_147e975de(void)

void FUN_147e975de(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_147e99c32(param_1 + 0x138,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x138);
  *(undefined1 *)(lVar2 + (longlong)iVar1 * 0x10) = 1;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = param_2;
  if (((*(int *)(param_1 + 0x140) == 1) && ((*(byte *)(param_1 + 0x124) & 1) == 0)) &&
     (*(int *)(param_1 + 0x120) == 0)) {
    FUN_147e96d66(param_1);
    return;
  }
  return;
}



// FUNCTION 147e9765a FUN_147e9765a body=165 status=ok
// SIG undefined FUN_147e9765a(void)

void FUN_147e9765a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  undefined1 *local_38;
  wchar_t *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = L"Super";
  local_28 = 0x100000000;
  FUN_147d8a04f(&local_30,1,param_2);
  local_30 = (wchar_t *)&DAT_100000003;
  local_28 = CONCAT71(local_28._1_7_,1);
  local_20 = 0;
  local_40 = L"SimulatedTasks";
  local_38 = &DAT_100000002;
  FUN_140c2c993(&local_40,param_2,&local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e97700 FUN_147e97700 body=129 status=ok
// SIG undefined FUN_147e97700(void)

ulonglong FUN_147e97700(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = FUN_144b20ed0();
  uVar6 = (ulonglong)uVar5;
  if (((*param_4 & 1) == 0) && (iVar1 = *(int *)(param_1 + 0x180), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x178);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
        bVar4 = FUN_144a5e2b6(param_2,lVar3,param_3,*(undefined4 *)param_4);
        uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | bVar4);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 147e97782 FUN_147e97782 body=99 status=ok
// SIG undefined FUN_147e97782(void)

void FUN_147e97782(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar2 = DAT_14cb1dee0;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    return;
  }
  lVar5 = (longlong)DAT_14cb1dee0;
  iVar3 = DAT_14cb1dee0 + uVar1;
  uVar4 = DAT_14cb1dee4 - DAT_14cb1dee0;
  DAT_14cb1dee0 = iVar3;
  if (uVar4 < uVar1) {
    FUN_147e99bac(&DAT_14cb1ded8,iVar2);
  }
  FUN_147e99b95(lVar5 * 8 + DAT_14cb1ded8,*param_1,uVar1);
  return;
}



// FUNCTION 147e977e6 FUN_147e977e6 body=101 status=ok
// SIG undefined FUN_147e977e6(void)

void FUN_147e977e6(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (-1 < (longlong)iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
    FUN_147e99a14(param_1);
  }
  memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)(uint)-iVar1 << 3);
  return;
}



// FUNCTION 147e97858 FUN_147e97858 body=219 status=ok
// SIG undefined FUN_147e97858(void)

void FUN_147e97858(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  }
  local_30 = param_1;
  if (0 < *(int *)(param_1 + 0x130)) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x128) + lVar4 * 8);
      if (lVar3 != 0) {
        if ((*(longlong *)(lVar3 + 0x50) == 0) ||
           (cVar2 = FUN_144729dda(lVar3 + 0x48), cVar2 == '\0')) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(lVar3 + 0x50);
        }
        if ((lVar3 == param_2) &&
           (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x128) + lVar4 * 8),
           *(char *)((longlong)plVar1 + 0x39) != '\x04')) {
          *(byte *)((longlong)plVar1 + 0x3c) = *(byte *)((longlong)plVar1 + 0x3c) | 0x80;
          if ((plVar1 == (longlong *)0x0) || ((*(uint *)(plVar1 + 1) >> 0x1e & 1) != 0)) {
            *(undefined1 *)((longlong)plVar1 + 0x39) = 4;
          }
          else {
            (**(code **)(*plVar1 + 0x2e0))(plVar1,1);
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x130));
  }
  FUN_147e96d34(&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e97934 FUN_147e97934 body=48 status=ok
// SIG undefined FUN_147e97934(void)

longlong FUN_147e97934(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x130)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + lVar2 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x130) != lVar2);
  }
  return 0;
}



// FUNCTION 147e97964 FUN_147e97964 body=237 status=ok
// SIG undefined FUN_147e97964(void)

void FUN_147e97964(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  iVar3 = *(int *)(param_1 + 0x130);
  if ((longlong)iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x128);
    iVar5 = 1;
    lVar6 = 0;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      if ((param_2 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar2 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == param_2) {
        if (iVar5 == 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x130);
        if (iVar3 - iVar5 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x128) + (lVar4 >> 0x20) * 8),
                  (void *)(*(longlong *)(param_1 + 0x128) + (lVar4 >> 0x20) * 8 + 8),
                  (longlong)(iVar3 - iVar5) << 3);
          iVar3 = *(int *)(param_1 + 0x130);
        }
        *(int *)(param_1 + 0x130) = iVar3 + -1;
        return;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  return;
}



// FUNCTION 147e97a52 FUN_147e97a52 body=524 status=ok
// SIG undefined FUN_147e97a52(void)

void FUN_147e97a52(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68 [2];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar3 = *(byte *)(param_2 + 0x3a);
  if ((bVar3 & 0xfe) == 2) {
    uVar1 = *(ushort *)(param_2 + 0x42);
    local_58 = (longlong *)0x0;
    local_50 = 0x200000000;
    iVar9 = *(int *)(param_1 + 0x130);
    if ((longlong)iVar9 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x128);
      lVar8 = 0;
      local_70 = param_1;
      do {
        uVar11 = local_50;
        lVar2 = *(longlong *)(lVar6 + lVar8);
        if (((lVar2 != 0) && (*(byte *)(lVar2 + 0x38) <= *(byte *)(param_2 + 0x38))) &&
           ((*(ushort *)(lVar2 + 0x42) & uVar1) != 0)) {
          lVar10 = (longlong)(int)local_50;
          uVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar4);
          if (local_50._4_4_ < uVar4) {
            FUN_147e99ce8(local_68,uVar11 & 0xffffffff);
          }
          plVar5 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar5 = local_68;
          }
          plVar5[lVar10] = lVar2;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar9 * 8 != lVar8);
      lVar6 = (longlong)(int)local_50;
      plVar5 = local_68;
      if (local_58 != (longlong *)0x0) {
        plVar5 = local_58;
      }
      if (lVar6 != 0) {
        lVar8 = 0;
        do {
          (**(code **)(**(longlong **)((longlong)plVar5 + lVar8) + 0x2c0))();
          lVar8 = lVar8 + 8;
        } while (lVar6 * 8 != lVar8);
      }
      param_1 = local_70;
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    bVar3 = *(byte *)(param_2 + 0x3a);
  }
  plVar5 = (longlong *)(param_1 + 0x128);
  iVar9 = *(int *)(param_1 + 0x130);
  if (0 < (longlong)iVar9) {
    uVar11 = 0;
    do {
      lVar6 = *(longlong *)(*plVar5 + uVar11 * 8);
      if (lVar6 != 0) {
        if ((bVar3 & 0xfd) == 0) {
          bVar7 = *(byte *)(lVar6 + 0x38);
          if (*(byte *)(param_2 + 0x38) < bVar7) {
            if ((bVar3 & 0xfd) == 0) goto LAB_147e97bb1;
            goto LAB_147e97ba8;
          }
        }
        else {
          bVar7 = *(byte *)(lVar6 + 0x38);
LAB_147e97ba8:
          if (*(byte *)(param_2 + 0x38) <= bVar7) goto LAB_147e97bb1;
        }
        local_68[0] = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        FUN_147e97ec4(plVar5,local_68,uVar11 & 0xffffffff);
        goto LAB_147e97be7;
      }
LAB_147e97bb1:
      uVar11 = uVar11 + 1;
    } while ((longlong)iVar9 != uVar11);
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
    iVar9 = *(int *)(param_1 + 0x130);
  }
  *(uint *)(param_1 + 0x130) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0x134) < iVar9 + 1U) {
    FUN_147e99a14(plVar5,iVar9);
  }
  *(longlong *)(*plVar5 + (longlong)iVar9 * 8) = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
LAB_147e97be7:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e97c60 FUN_147e97c60 body=610 status=ok
// SIG undefined FUN_147e97c60(void)

void FUN_147e97c60(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x130) < 1) {
    sVar1 = *(short *)(param_1 + 0x126);
    if (sVar1 != 0) {
      *(undefined2 *)(param_1 + 0x126) = 0;
      local_58 = (ulonglong)CONCAT42((int)((ulonglong)local_58 >> 0x20),sVar1) << 0x10;
      FUN_1447cd2ec(param_1 + 0x168);
    }
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    FUN_147e99b36();
    iVar6 = *(int *)(param_1 + 0x130);
    if (iVar6 < 1) {
      uVar14 = 0;
      bVar13 = false;
    }
    else {
      lVar12 = 0;
      bVar13 = false;
      uVar14 = 0;
      uVar10 = 0;
      do {
        uVar5 = uStack_50;
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x128) + lVar12 * 8);
        if (plVar3 == (longlong *)0x0) {
          bVar13 = true;
        }
        else {
          uVar2 = *(ushort *)((longlong)plVar3 + 0x42);
          if ((*(ushort *)(plVar3 + 8) & uVar10) == 0) {
            lVar11 = (longlong)(int)uStack_50;
            uVar7 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
            if (uStack_50._4_4_ < uVar7) {
              FUN_147e99bac(&local_58,uVar5 & 0xffffffff);
            }
            *(longlong **)(local_58 + lVar11 * 8) = plVar3;
            uVar14 = uVar14 | uVar2;
          }
          else if (*(char *)((longlong)plVar3 + 0x39) == '\x03') {
            (**(code **)(*plVar3 + 0x2e8))(plVar3);
          }
          uVar10 = uVar2 | uVar10;
          iVar6 = *(int *)(param_1 + 0x130);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar6);
    }
    if (0 < (int)uStack_50) {
      lVar12 = 0;
      iVar6 = (int)uStack_50;
      do {
        lVar11 = *(longlong *)(local_58 + lVar12 * 8);
        if (((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) &&
           (*(char *)(lVar11 + 0x39) != '\x04')) {
          FUN_147e95d32();
          iVar6 = (int)uStack_50;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar6);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uVar10 = *(ushort *)(param_1 + 0x126);
    if (uVar10 != uVar14) {
      *(ushort *)(param_1 + 0x126) = uVar14;
      local_58._0_4_ = CONCAT22(~uVar14 & uVar10,~uVar10 & uVar14);
      FUN_1447cd2ec(param_1 + 0x168);
    }
    if (bVar13) {
      iVar6 = *(int *)(param_1 + 0x130);
      lVar12 = (longlong)iVar6;
      if (lVar12 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x128);
        iVar9 = 0;
        bVar13 = *plVar3 == 0;
        iVar15 = 0;
        do {
          lVar8 = (longlong)iVar15;
          iVar16 = iVar15;
          lVar11 = lVar8;
          iVar4 = iVar15 + 1;
          if (iVar15 + 1 < iVar6) {
            iVar4 = iVar6;
          }
          do {
            lVar11 = lVar11 + 1;
            iVar17 = iVar4;
            if (lVar12 <= lVar11) break;
            iVar17 = iVar16 + 1;
            iVar16 = iVar17;
          } while (bVar13 == (plVar3[lVar11] == 0));
          if (bVar13 == false) {
            if (iVar9 != iVar15) {
              memmove(plVar3 + iVar9,plVar3 + lVar8,(longlong)(iVar17 - iVar15) << 3);
            }
            iVar9 = iVar9 + (iVar17 - iVar15);
          }
          bVar13 = (bool)(bVar13 ^ 1);
          iVar15 = iVar17;
        } while (lVar11 < lVar12);
        *(int *)(param_1 + 0x130) = iVar9;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e97ec4 FUN_147e97ec4 body=129 status=ok
// SIG undefined FUN_147e97ec4(void)

int FUN_147e97ec4(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147e99a14(param_1,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*param_1 + lVar3 * 8 + 8),(void *)(*param_1 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + lVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 147e97f46 FUN_147e97f46 body=201 status=ok
// SIG undefined FUN_147e97f46(void)

undefined8 FUN_147e97f46(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar5 = 1;
    lVar6 = 0;
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == lVar2) {
        if (iVar5 == 0) {
          return 0;
        }
        memmove((void *)(*param_1 + (lVar7 >> 0x20) * 8),
                (void *)(*param_1 + (lVar7 >> 0x20) * 8 + 8),
                (longlong)((int)param_1[1] - iVar5) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      lVar7 = lVar7 + 0x100000000;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 147e98010 FUN_147e98010 body=467 status=ok
// SIG undefined FUN_147e98010(void)

void FUN_147e98010(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_41;
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  uVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_41);
  local_58 = local_40;
  if (local_40 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  local_68 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_60 = uStack_30;
  uVar1 = FUN_147e981e4(&local_68,&local_58,uVar2 & 0xffffffff,uVar1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e981e4 FUN_147e981e4 body=143 status=ok
// SIG undefined FUN_147e981e4(void)

undefined8 FUN_147e981e4(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    local_28 = *param_2;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(local_28);
      if (*param_1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = param_1[1];
      }
    }
    uVar1 = FUN_147e984ba(lVar2,&local_28,param_3,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e98274 FUN_147e98274 body=515 status=ok
// SIG undefined FUN_147e98274(void)

void FUN_147e98274(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_59;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar2 = uStack_50;
  lVar1 = local_58;
  uVar3 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_59);
  local_78 = 0;
  local_70 = (int)uStack_50;
  if ((int)uStack_50 == 0) {
    local_6c = 0;
  }
  else {
    FUN_147e9996e(&local_78,uStack_50 & 0xffffffff);
    FUN_147e999c7(local_78,lVar1,uVar2 & 0xffffffff);
  }
  local_88 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_80 = uStack_40;
  uVar3 = FUN_147e98478(&local_88,&local_78,uVar4 & 0xffffffff,uVar3);
  *param_3 = uVar3;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e98478 FUN_147e98478 body=62 status=ok
// SIG undefined FUN_147e98478(void)

undefined8 FUN_147e98478(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147e98596(param_1[1],param_2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 147e984ba FUN_147e984ba body=218 status=ok
// SIG undefined FUN_147e984ba(void)

longlong FUN_147e984ba(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar2 = FUN_14588585a();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (*param_2 != 0)) {
      uVar3 = FUN_1409ffe1d();
      lVar4 = FUN_147e99f69(uVar3);
      if (lVar4 != 0) {
        FUN_147e95746(lVar4,param_1,param_3);
        *(undefined8 *)(lVar4 + 0x30) = param_4;
        local_38 = *param_2;
        if ((local_38 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        bVar1 = FUN_145cc80f6(&local_38);
        *(ushort *)(lVar4 + 0x42) = *(ushort *)(lVar4 + 0x42) | (ushort)(1 << (bVar1 & 0x1f));
        goto LAB_147e984dd;
      }
    }
  }
  lVar4 = 0;
LAB_147e984dd:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e98596 FUN_147e98596 body=213 status=ok
// SIG undefined FUN_147e98596(void)

longlong FUN_147e98596(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2[1] != 0) {
    uVar4 = FUN_1409ffe1d();
    lVar5 = FUN_147e99f69(uVar4);
    if (lVar5 != 0) {
      FUN_147e95746(lVar5,param_1,param_3);
      *(undefined8 *)(lVar5 + 0x30) = param_4;
      lVar2 = param_2[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = *param_2;
        lVar6 = 0;
        do {
          local_40 = *(longlong *)(lVar1 + lVar6);
          if ((local_40 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          bVar3 = FUN_145cc80f6(&local_40);
          *(ushort *)(lVar5 + 0x42) = *(ushort *)(lVar5 + 0x42) | (ushort)(1 << (bVar3 & 0x1f));
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar2 * 8 != lVar6);
      }
      goto LAB_147e985b9;
    }
  }
  lVar5 = 0;
LAB_147e985b9:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147e98672 FUN_147e98672 body=301 status=ok
// SIG undefined FUN_147e98672(void)

void FUN_147e98672(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f8))(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e987a0 FUN_147e987a0 body=242 status=ok
// SIG undefined FUN_147e987a0(void)

void FUN_147e987a0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x300))(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9889a FUN_147e9889a body=644 status=ok
// SIG undefined FUN_147e9889a(void)

void FUN_147e9889a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar1 = local_74;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_70;
  if (local_70 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  local_88 = local_58;
  local_98 = local_68;
  uStack_90 = uStack_60;
  local_b8 = local_50;
  uStack_b4 = uStack_4c;
  uStack_b0 = uStack_48;
  uStack_ac = uStack_44;
  local_a8 = local_40;
  local_c8 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_c0 = uStack_30;
  local_d8 = iVar1 != 0;
  uVar2 = FUN_147e98b20(&local_c8,&local_b8,&local_98,&local_80);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e98b20 FUN_147e98b20 body=278 status=ok
// SIG undefined FUN_147e98b20(void)

longlong FUN_147e98b20(longlong *param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4,
                      char param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (((*param_1 != 0) && (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) &&
     ((param_5 == '\0' ||
      ((lVar5 = (**(code **)(*plVar1 + 0x18))(plVar1,0), lVar5 == 0 ||
       (*(char *)(lVar5 + 0x178) == '\x03')))))) {
    lVar5 = *param_1;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0 && lVar5 != 0) {
      uVar6 = FUN_1409ffe1d();
      lVar5 = FUN_147e99ffe(uVar6);
      *(undefined8 *)(lVar5 + 0x30) = 0;
      uVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
      FUN_147e95746(lVar5,plVar1,uVar4);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x98) = param_2[2];
        uVar6 = param_2[1];
        *(undefined8 *)(lVar5 + 0x88) = *param_2;
        *(undefined8 *)(lVar5 + 0x90) = uVar6;
        *(undefined8 *)(lVar5 + 0xb0) = *(undefined8 *)(param_3 + 4);
        uVar4 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        *(undefined4 *)(lVar5 + 0xa0) = *param_3;
        *(undefined4 *)(lVar5 + 0xa4) = uVar4;
        *(undefined4 *)(lVar5 + 0xa8) = uVar2;
        *(undefined4 *)(lVar5 + 0xac) = uVar3;
        lVar7 = *param_4;
        if (DAT_14c950c29 == 1) {
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar7 = *param_4;
          }
        }
        *(longlong *)(lVar5 + 0xb8) = lVar7;
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 147e98c3a FUN_147e98c3a body=329 status=ok
// SIG undefined FUN_147e98c3a(void)

bool FUN_147e98c3a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar2 == 0) {
    lVar2 = *param_3;
    goto LAB_147e98c78;
  }
  FUN_144a7484c(param_1 + 0xa0,local_88);
  local_68 = *(undefined8 *)(param_1 + 0x88);
  uStack_60 = *(undefined8 *)(param_1 + 0x90);
  local_58 = *(undefined8 *)(param_1 + 0x98);
  uStack_50 = 0;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  lVar1 = *(longlong *)(param_1 + 0xb8);
  if (lVar1 == 0) {
LAB_147e98d54:
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_144a6c4d8();
    if (((lVar3 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_147e98d54;
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
  }
  local_98 = 1;
  local_a0 = 1;
  local_a8 = 0;
  lVar2 = FUN_147ac6e0e(lVar2,uVar4,local_88,0);
  *param_3 = lVar2;
LAB_147e98c78:
  if (lVar2 == 0) {
    local_88[0] = 0;
    FUN_1447cd2ec(param_1 + 0x78);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e98d84 FUN_147e98d84 body=241 status=ok
// SIG undefined FUN_147e98d84(void)

void FUN_147e98d84(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_88 [32];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0) {
    FUN_144a7484c(param_1 + 0x14,local_88);
    local_68 = param_1[0x11];
    lStack_60 = param_1[0x12];
    local_58 = param_1[0x13];
    uStack_50 = 0;
    local_48 = 0x3ff0000000000000;
    uStack_40 = 0x3ff0000000000000;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0;
    local_98 = 0;
    FUN_14113775c(param_3,local_88,0,0);
    local_28 = param_3;
    FUN_1447cd2ec(param_1 + 0xd);
  }
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    if ((param_1 == (longlong *)0x0) || ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0)) {
      *(undefined1 *)((longlong)param_1 + 0x39) = 4;
    }
    else {
      (**(code **)(*param_1 + 0x2e0))(param_1,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e98e7a FUN_147e98e7a body=434 status=ok
// SIG undefined FUN_147e98e7a(void)

void FUN_147e98e7a(longlong *param_1)

{
  double dVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0xc] == 0) {
    if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
      if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_f8);
      }
      *(undefined1 *)((longlong)param_1 + 0x39) = 4;
    }
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    param_1[0x12] = *(longlong *)(lVar3 + 0x6d0);
    local_c0 = 0;
    uVar4 = FUN_144a88394(lVar3);
    dVar1 = (double)param_1[0x11];
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    puVar2 = local_b8;
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14a1c8830;
    uVar5 = FUN_144a3f946();
    puVar2[2] = uVar5;
    *puVar2 = &PTR_FUN_14abc7cc0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = FUN_147e99050;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_b8);
    local_68 = 1;
    local_d0 = 0xbf800000;
    local_d8 = 0;
    FUN_1406f3fee(uVar4,&local_c0,&local_a8,(float)dVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_b8);
    if (*(char *)(param_1[0xc] + 0x39) != '\x03') {
      FUN_147e95592();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e99050 FUN_147e99050 body=99 status=ok
// SIG undefined FUN_147e99050(void)

void FUN_147e99050(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x13);
  if ((uVar1 & 3) == 0) {
    FUN_1447cd2ec(param_1 + 0xf,0);
    uVar1 = *(uint *)(param_1 + 0x13);
  }
  *(uint *)(param_1 + 0x13) = uVar1 | 1;
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e990aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2e0))(param_1,0);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 147e990c4 FUN_147e990c4 body=131 status=ok
// SIG undefined FUN_147e990c4(void)

void FUN_147e990c4(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)(param_2 + 0x39);
  if (cVar1 == '\x04' && *(longlong *)(param_1 + 0x38) == param_2) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    cVar1 = *(char *)(param_2 + 0x39);
  }
  if (cVar1 == '\x04') {
    uVar2 = *(uint *)(param_1 + 0x70);
    if ((uVar2 & 3) == 0) {
      FUN_1447cd2ec(param_1 + 0x40,0);
      uVar2 = *(uint *)(param_1 + 0x70);
    }
    *(uint *)(param_1 + 0x70) = uVar2 | 2;
    if (*(char *)(param_1 + 0x11) != '\x04') {
      plVar3 = (longlong *)(param_1 + -0x28);
      if ((plVar3 != (longlong *)0x0) && ((*(uint *)(param_1 + -0x20) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e9913e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x2e0))(plVar3,0);
        return;
      }
      *(undefined1 *)(param_1 + 0x11) = 4;
    }
  }
  return;
}



// FUNCTION 147e99148 FUN_147e99148 body=268 status=ok
// SIG undefined FUN_147e99148(void)

undefined8 FUN_147e99148(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  double local_78;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = (double)param_1[0x11];
  lVar4 = (**(code **)(*param_1 + 0x180))();
  dVar2 = *(double *)(lVar4 + 0x6d0);
  dVar3 = (double)param_1[0x12];
  lVar4 = param_1[0x11];
  if (param_1[0xc] == 0) {
    FUN_140056680(&local_68,&DAT_149e01fe8);
  }
  else {
    local_58 = *(undefined8 *)(param_1[0xc] + 0x18);
    FUN_1400021e4(&local_58,&local_68);
  }
  local_78 = dVar1 - (dVar2 - dVar3);
  puVar5 = local_68;
  if (local_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"TimeLimit for %s. Time: %.2f. TimeLeft: %.2f",puVar5,lVar4);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147e99256 FUN_147e99256 body=360 status=ok
// SIG undefined FUN_147e99256(void)

void FUN_147e99256(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined1 local_4d;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  uVar1 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_4d);
  local_60 = local_48;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_58 = uStack_40;
  uVar2 = FUN_147e993c0(&local_60,uVar1,uVar3 & 0xffffffff);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e993c0 FUN_147e993c0 body=95 status=ok
// SIG undefined FUN_147e993c0(void)

longlong FUN_147e993c0(longlong *param_1,float param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1409ffe1d();
  lVar2 = FUN_147e9a31f(uVar1);
  if (((lVar2 != 0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    FUN_147e95746(lVar2,param_1[1],param_3);
    *(double *)(lVar2 + 0x78) = (double)param_2;
  }
  return lVar2;
}



// FUNCTION 147e99422 FUN_147e99422 body=524 status=ok
// SIG undefined FUN_147e99422(void)

void FUN_147e99422(longlong *param_1)

{
  double dVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  param_1[0x10] = *(longlong *)(lVar3 + 0x6d0);
  if ((double)param_1[0xf] <= 0.0) {
    uVar4 = FUN_144a88394(lVar3);
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    puVar2 = local_b8;
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14a1c8830;
    uVar5 = FUN_144a3f946();
    puVar2[2] = uVar5;
    *puVar2 = &PTR_FUN_14abc7d30;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = FUN_147e99630;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_b8);
    local_68 = 1;
    FUN_14016fdb0(uVar4,&local_c0,&local_a8);
  }
  else {
    local_c0 = 0;
    uVar4 = FUN_144a88394(lVar3);
    dVar1 = (double)param_1[0xf];
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    puVar2 = local_b8;
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14a1c8830;
    uVar5 = FUN_144a3f946();
    puVar2[2] = uVar5;
    *puVar2 = &PTR_FUN_14abc7d30;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = FUN_147e99630;
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_b8);
    local_68 = 1;
    local_d0 = 0xbf800000;
    local_d8 = 0;
    FUN_1406f3fee(uVar4,&local_c0,&local_a8,(float)dVar1);
  }
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  FUN_1449db362(&local_b8);
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e99630 FUN_147e99630 body=74 status=ok
// SIG undefined FUN_147e99630(void)

void FUN_147e99630(longlong *param_1)

{
  FUN_1447cd2ec(param_1 + 0xd,0);
  if (*(char *)((longlong)param_1 + 0x39) != '\x04') {
    if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147e99671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2e0))(param_1,0);
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 4;
  }
  return;
}



// FUNCTION 147e9967a FUN_147e9967a body=100 status=ok
// SIG undefined FUN_147e9967a(void)

undefined8 FUN_147e9967a(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = (double)param_1[0xf];
  lVar2 = (**(code **)(*param_1 + 0x180))();
  FUN_140002266(param_2,L"WaitDelay. Time: %.2f. TimeLeft: %.2f",param_1[0xf],
                dVar1 - (*(double *)(lVar2 + 0x6d0) - (double)param_1[0x10]));
  return param_2;
}



// FUNCTION 147e996f8 FUN_147e996f8 body=45 status=ok
// SIG undefined FUN_147e996f8(void)

longlong FUN_147e996f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145fdb15a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e9972c FUN_147e9972c body=48 status=ok
// SIG undefined FUN_147e9972c(void)

longlong FUN_147e9972c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145fdb15a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e9977e FUN_147e9977e body=48 status=ok
// SIG undefined FUN_147e9977e(void)

longlong FUN_147e9977e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145fdb15a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e997b8 FUN_147e997b8 body=45 status=ok
// SIG undefined FUN_147e997b8(void)

longlong FUN_147e997b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14150ff7a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e997e6 FUN_147e997e6 body=45 status=ok
// SIG undefined FUN_147e997e6(void)

longlong FUN_147e997e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14150ffc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e9987e FUN_147e9987e body=59 status=ok
// SIG undefined FUN_147e9987e(void)

undefined8 FUN_147e9987e(longlong *param_1)

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



// FUNCTION 147e99920 FUN_147e99920 body=78 status=ok
// SIG undefined FUN_147e99920(void)

undefined8 * FUN_147e99920(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) goto LAB_147e9994a;
  }
  lVar2 = 0;
LAB_147e9994a:
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 147e9996e FUN_147e9996e body=89 status=ok
// SIG undefined FUN_147e9996e(void)

void FUN_147e9996e(longlong param_1,int param_2)

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



// FUNCTION 147e999c7 FUN_147e999c7 body=77 status=ok
// SIG undefined FUN_147e999c7(void)

void FUN_147e999c7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 147e99a14 FUN_147e99a14 body=132 status=ok
// SIG undefined FUN_147e99a14(void)

void FUN_147e99a14(longlong param_1,int param_2)

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



// FUNCTION 147e99a9a FUN_147e99a9a body=62 status=ok
// SIG undefined FUN_147e99a9a(void)

void FUN_147e99a9a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e99ad8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147e99ad8 FUN_147e99ad8 body=93 status=ok
// SIG undefined FUN_147e99ad8(void)

ulonglong FUN_147e99ad8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147e99b36 FUN_147e99b36 body=95 status=ok
// SIG undefined FUN_147e99b36(void)

void FUN_147e99b36(longlong param_1,uint param_2)

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



// FUNCTION 147e99b95 FUN_147e99b95 body=23 status=ok
// SIG undefined FUN_147e99b95(void)

void FUN_147e99b95(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 147e99bac FUN_147e99bac body=132 status=ok
// SIG undefined FUN_147e99bac(void)

void FUN_147e99bac(longlong param_1,int param_2)

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



// FUNCTION 147e99c32 FUN_147e99c32 body=132 status=ok
// SIG undefined FUN_147e99c32(void)

void FUN_147e99c32(longlong param_1,int param_2)

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



// FUNCTION 147e99cb8 FUN_147e99cb8 body=48 status=ok
// SIG undefined FUN_147e99cb8(void)

void FUN_147e99cb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147e99ce8 FUN_147e99ce8 body=124 status=ok
// SIG undefined FUN_147e99ce8(void)

void FUN_147e99ce8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147e99d66(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e99d66 FUN_147e99d66 body=132 status=ok
// SIG undefined FUN_147e99d66(void)

void FUN_147e99d66(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147e99dea FUN_147e99dea body=29 status=ok
// SIG undefined FUN_147e99dea(void)

void FUN_147e99dea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14abc7c80;
  return;
}



// FUNCTION 147e99e08 FUN_147e99e08 body=36 status=ok
// SIG undefined FUN_147e99e08(void)

undefined8 FUN_147e99e08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147e99e48 FUN_147e99e48 body=93 status=ok
// SIG undefined FUN_147e99e48(void)

void FUN_147e99e48(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14abc7c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e99ea6 FUN_147e99ea6 body=123 status=ok
// SIG undefined FUN_147e99ea6(void)

void FUN_147e99ea6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14abc7c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e99f2e FUN_147e99f2e body=21 status=ok
// SIG undefined FUN_147e99f2e(void)

undefined8 FUN_147e99f2e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e99f44 FUN_147e99f44 body=34 status=ok
// SIG undefined FUN_147e99f44(void)

undefined8 FUN_147e99f44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147e99f69 FUN_147e99f69 body=148 status=ok
// SIG undefined FUN_147e99f69(void)

undefined8 FUN_147e99f69(undefined8 param_1)

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
  uVar1 = FUN_145921eec();
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



// FUNCTION 147e99ffe FUN_147e99ffe body=148 status=ok
// SIG undefined FUN_147e99ffe(void)

undefined8 FUN_147e99ffe(undefined8 param_1)

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
  uVar1 = FUN_145993aa2();
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



// FUNCTION 147e9a094 FUN_147e9a094 body=34 status=ok
// SIG undefined FUN_147e9a094(void)

undefined8 FUN_147e9a094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147e9a0d0 FUN_147e9a0d0 body=29 status=ok
// SIG undefined FUN_147e9a0d0(void)

bool FUN_147e9a0d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e9a0ee FUN_147e9a0ee body=26 status=ok
// SIG undefined FUN_147e9a0ee(void)

bool FUN_147e9a0ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147e9a108 FUN_147e9a108 body=24 status=ok
// SIG undefined FUN_147e9a108(void)

bool FUN_147e9a108(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147e9a120 FUN_147e9a120 body=101 status=ok
// SIG undefined FUN_147e9a120(void)

void FUN_147e9a120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc7cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e9a186 FUN_147e9a186 body=101 status=ok
// SIG undefined FUN_147e9a186(void)

void FUN_147e9a186(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc7cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e9a1ec FUN_147e9a1ec body=131 status=ok
// SIG undefined FUN_147e9a1ec(void)

void FUN_147e9a1ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14abc7cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e9a270 FUN_147e9a270 body=39 status=ok
// SIG undefined FUN_147e9a270(void)

void FUN_147e9a270(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e9a293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147e9a298 FUN_147e9a298 body=134 status=ok
// SIG undefined FUN_147e9a298(void)

bool FUN_147e9a298(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e9a31f FUN_147e9a31f body=148 status=ok
// SIG undefined FUN_147e9a31f(void)

undefined8 FUN_147e9a31f(undefined8 param_1)

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
  uVar1 = FUN_145993b8e();
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



// FUNCTION 147e9a3b4 FUN_147e9a3b4 body=34 status=ok
// SIG undefined FUN_147e9a3b4(void)

undefined8 FUN_147e9a3b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147e9a3f0 FUN_147e9a3f0 body=29 status=ok
// SIG undefined FUN_147e9a3f0(void)

bool FUN_147e9a3f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e9a40e FUN_147e9a40e body=26 status=ok
// SIG undefined FUN_147e9a40e(void)

bool FUN_147e9a40e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147e9a428 FUN_147e9a428 body=24 status=ok
// SIG undefined FUN_147e9a428(void)

bool FUN_147e9a428(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147e9a440 FUN_147e9a440 body=101 status=ok
// SIG undefined FUN_147e9a440(void)

void FUN_147e9a440(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc7d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e9a4a6 FUN_147e9a4a6 body=101 status=ok
// SIG undefined FUN_147e9a4a6(void)

void FUN_147e9a4a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14abc7d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


