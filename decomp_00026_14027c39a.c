// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14027c39a FUN_14027c39a body=168 status=ok
// SIG undefined FUN_14027c39a(void)

void FUN_14027c39a(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x550) != param_2) {
    if (*(char *)(param_1 + 0x68) == '\x03') {
      if (param_2 == 0) {
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
      }
      else {
        puVar1 = &DAT_14c9485f0;
        if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
          puVar1 = *(undefined4 **)(param_2 + 8);
        }
        FUN_1447a97f4(&local_48,puVar1);
      }
      FUN_1456ec164(param_1,&local_48);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    *(longlong *)(param_1 + 0x550) = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027c444 FUN_14027c444 body=710 status=ok
// SIG undefined FUN_14027c444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027c444(double *param_1,double *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar11 = *param_2 - param_1[4];
  dVar12 = param_2[1] - param_1[5];
  dVar5 = param_2[2] - param_1[6];
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  dVar8 = -*param_1;
  dVar3 = -param_1[1];
  dVar9 = param_1[2] * -1.0;
  dVar10 = param_1[3] * 1.0;
  dVar13 = dVar11 * dVar9 - dVar8 * dVar5;
  dVar6 = dVar12 * dVar8 - dVar11 * dVar3;
  dVar4 = dVar5 * dVar3 - dVar12 * dVar9;
  dVar4 = dVar4 + dVar4;
  dVar13 = dVar13 + dVar13;
  dVar6 = dVar6 + dVar6;
  auVar7 = divpd(_DAT_149934d80,auVar1);
  dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar7._0_8_) *
           ((dVar6 * dVar3 - dVar13 * dVar9) + dVar10 * dVar4 + dVar11);
  dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar7._8_8_) *
          (*param_1 * dVar6 + dVar9 * dVar4 + dVar10 * dVar13 + dVar12);
  dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_1[10])) &
                  (ulonglong)(1.0 / param_1[10])) *
          (dVar10 * dVar6 + dVar5 + (dVar13 * dVar8 - dVar4 * dVar3));
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    if ((((DAT_14c8464e0 - param_1[0xd] <= dVar11) && (dVar11 <= param_1[0xd] + DAT_14c8464e0)) &&
        (DAT_14c8464e8 - param_1[0xe] <= dVar9)) &&
       (((dVar9 <= DAT_14c8464e8 + param_1[0xe] && (DAT_14c8464f0 - param_1[0xf] <= dVar6)) &&
        (dVar6 <= param_1[0xf] + DAT_14c8464f0)))) {
      return 1;
    }
  }
  else {
    if (iVar2 == 1) {
      dVar8 = (double)*(float *)(param_1 + 0x11);
      if (dVar11 < DAT_14c8464e0 - dVar8) {
        return 0;
      }
      if (DAT_14c8464e0 + dVar8 < dVar11) {
        return 0;
      }
      if (dVar9 < DAT_14c8464e8 - dVar8) {
        return 0;
      }
      if (DAT_14c8464e8 + dVar8 < dVar9) {
        return 0;
      }
      if (dVar6 < DAT_14c8464f0 - (double)*(float *)((longlong)param_1 + 0x84)) {
        return 0;
      }
      dVar8 = DAT_14c8464f0 + (double)*(float *)((longlong)param_1 + 0x84);
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      dVar8 = (double)*(float *)(param_1 + 0x10);
      dVar6 = SQRT(dVar6 * dVar6 + dVar11 * dVar11 + dVar9 * dVar9);
    }
    if (dVar6 <= dVar8) {
      return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14027c70a FUN_14027c70a body=13663 status=ok
// SIG undefined FUN_14027c70a(void)

/* WARNING: Removing unreachable block (ram,0x00014027d7db) */
/* WARNING: Removing unreachable block (ram,0x00014027d8cb) */
/* WARNING: Removing unreachable block (ram,0x00014027d9bb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14027c70a(longlong *param_1)

{
  code cVar1;
  int iVar2;
  undefined *puVar3;
  longlong *plVar4;
  bool bVar5;
  void *pvVar6;
  undefined4 uVar7;
  longlong lVar8;
  char cVar9;
  uchar uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong *plVar16;
  int *piVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  code *pcVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  code *pcVar40;
  int iVar41;
  longlong lVar42;
  ulonglong uVar43;
  wchar_t *pwVar44;
  bool bVar45;
  undefined1 auStack_438 [32];
  wchar_t *local_418;
  undefined4 local_410;
  undefined8 local_408;
  wchar_t *pwStack_400;
  wchar_t *local_3f8;
  code *local_3f0;
  undefined1 *local_3e8;
  GUID *local_3e0;
  code *local_3d8;
  code *local_3d0;
  uint local_3c4;
  code *local_3c0;
  undefined8 *local_3b8;
  longlong local_3b0;
  uint local_3a4;
  ulonglong local_3a0;
  longlong *local_398;
  longlong local_390;
  uint local_388;
  uint local_384;
  longlong *local_380;
  code *local_378;
  code *local_370;
  longlong local_368;
  undefined8 uStack_360;
  code *local_358;
  undefined8 uStack_350;
  void *local_340;
  uint local_338;
  void *local_330;
  uint local_328;
  undefined1 local_31c [4];
  longlong local_318;
  ulonglong uStack_310;
  uint local_308 [4];
  uint *local_2f8;
  uint local_2f0;
  uint local_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  longlong local_2d8;
  undefined4 local_2d0;
  code *local_2c8;
  uchar local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  byte local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 *local_270;
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
  code *local_238;
  uchar local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [32];
  byte local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  undefined1 local_198 [16];
  longlong local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 uStack_178;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  code *local_158;
  uchar local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [32];
  byte local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  ulonglong local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  uint uStack_d0;
  int iStack_cc;
  GUID local_c8;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  GUID *local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_438;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar14 = (longlong *)FUN_141466a68();
    local_3b0 = plVar14[0x22];
    if (local_3b0 == 0) {
      (**(code **)(*plVar14 + 1000))(plVar14);
      local_3b0 = plVar14[0x22];
    }
    iVar30 = 0;
    local_2f8 = (uint *)0x0;
    local_2f0 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_2ec = 0x80;
    uStack_2e8 = 0xffffffff;
    local_2e4 = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    lVar36 = *param_1;
    iVar39 = *(int *)(lVar36 + 0x90);
    local_398 = param_1;
    if (iVar39 == 0) {
      uVar31 = 1;
      uVar32 = 0;
      iVar12 = 0;
    }
    else {
      puVar15 = *(uint **)(lVar36 + 0x88);
      if (*(uint **)(lVar36 + 0x88) == (uint *)0x0) {
        puVar15 = (uint *)(lVar36 + 0x78);
      }
      uVar21 = *puVar15;
      if (uVar21 == 0) {
        iVar30 = iVar39 + 0x1e;
        if (-1 < iVar39 + -1) {
          iVar30 = iVar39 + -1;
        }
        uVar32 = 0;
        uVar31 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar31 = uVar32;
        }
        iVar30 = 0;
        do {
          if (uVar31 == uVar32) goto LAB_14027fb71;
          iVar30 = iVar30 + 0x20;
          uVar21 = puVar15[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar21 == 0);
      }
      else {
        iVar30 = 0;
        uVar32 = 0;
      }
      uVar31 = (ulonglong)(-uVar21 & uVar21);
      uVar34 = uVar31 * 2 + 1;
      lVar37 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      iVar12 = (iVar30 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
      if (iVar39 <= iVar12) {
        iVar12 = iVar39;
      }
    }
    if (iVar12 != iVar39) {
      uVar21 = 0xffffffff;
      do {
        FUN_140e132ca(local_3b0,(GUID *)&local_158,
                      *(undefined8 *)(*(longlong *)(lVar36 + 0x68) + (longlong)iVar12 * 0x10));
        FUN_144869592(&local_318,&local_238,(GUID *)&local_158,0);
        uVar21 = ~(uint)uVar31 & uVar21;
        puVar15 = *(uint **)(lVar36 + 0x88);
        if (*(uint **)(lVar36 + 0x88) == (uint *)0x0) {
          puVar15 = (uint *)(lVar36 + 0x78);
        }
        iVar41 = *(int *)(lVar36 + 0x90);
        iVar12 = (int)uVar32;
        lVar37 = (longlong)iVar12;
        uVar35 = puVar15[lVar37] & uVar21;
        if (uVar35 == 0) {
          iVar23 = iVar41 + 0x1e;
          if (-1 < iVar41 + -1) {
            iVar23 = iVar41 + -1;
          }
          iVar23 = iVar23 >> 5;
          iVar30 = iVar30 + 0x20;
          iVar24 = iVar23;
          if (iVar23 < iVar12) {
            iVar24 = iVar12;
          }
          if (iVar12 < iVar23) {
            lVar38 = 0;
            do {
              uVar35 = puVar15[lVar37 + lVar38 + 1];
              if (uVar35 != 0) {
                uVar32 = (ulonglong)(iVar12 + (int)lVar38 + 1);
                uVar21 = 0xffffffff;
                goto LAB_14027c936;
              }
              iVar30 = iVar30 + 0x20;
              lVar38 = lVar38 + 1;
            } while (iVar24 - lVar37 != lVar38);
            uVar21 = 0xffffffff;
            lVar37 = (longlong)iVar24;
          }
          uVar32 = lVar37 + 1U & 0xffffffff;
          iVar12 = iVar41;
        }
        else {
LAB_14027c936:
          uVar31 = (ulonglong)(-uVar35 & uVar35);
          uVar34 = uVar31 * 2 + 1;
          lVar37 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar37 == 0; lVar37 = lVar37 + -1) {
            }
          }
          iVar12 = (iVar30 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
          if (iVar41 <= iVar12) {
            iVar12 = iVar41;
          }
        }
      } while (iVar12 != iVar39);
      uVar32 = (ulonglong)local_2f0;
      if (local_2f0 != 0) {
        puVar15 = local_2f8;
        if (local_2f8 == (uint *)0x0) {
          puVar15 = local_308;
        }
        uVar21 = *puVar15;
        if (uVar21 == 0) {
          iVar39 = local_2f0 + 0x1e;
          if (-1 < (int)(local_2f0 - 1)) {
            iVar39 = local_2f0 - 1;
          }
          uVar31 = 0;
          uVar34 = (ulonglong)(uint)(iVar39 >> 5);
          if (iVar39 >> 5 < 1) {
            uVar34 = uVar31;
          }
          iVar39 = 0;
          do {
            if (uVar34 == uVar31) goto LAB_14027fb71;
            iVar39 = iVar39 + 0x20;
            uVar21 = puVar15[uVar31 + 1];
            uVar31 = uVar31 + 1;
          } while (uVar21 == 0);
        }
        else {
          uVar31 = 0;
          iVar39 = 0;
        }
        uVar29 = (ulonglong)(-uVar21 & uVar21);
        uVar34 = uVar29 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar21 = (iVar39 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
        if ((int)uVar21 < (int)local_2f0) {
          uVar35 = 0xffffffff;
          plVar14 = local_398;
          local_3a0 = uVar32;
          do {
            if ((*(longlong *)(*plVar14 + 0x3c) != 0) &&
               ((char)plVar14[1] <= *(char *)(*plVar14 + 0x38))) {
              local_3b0 = CONCAT44(local_3b0._4_4_,iVar39);
              lVar36 = *(longlong *)(local_318 + (longlong)(int)uVar21 * 0x10);
              local_3c4 = uVar35;
              plVar16 = (longlong *)FUN_141466a68();
              lVar37 = plVar16[0x22];
              if (lVar37 == 0) {
                (**(code **)(*plVar16 + 1000))(plVar16);
                lVar37 = plVar16[0x22];
              }
              local_390 = lVar37;
              cVar9 = FUN_140751cb6(lVar37,lVar36);
              iVar39 = (int)local_3b0;
              uVar35 = local_3c4;
              if (cVar9 != '\0') {
                pcVar26 = *(code **)(*plVar14 + 0x3c);
                plVar16 = (longlong *)FUN_141466a68();
                lVar37 = plVar16[0x22];
                if (lVar37 == 0) {
                  (**(code **)(*plVar16 + 1000))(plVar16);
                  lVar37 = plVar16[0x22];
                }
                if (*(int *)(lVar37 + 0x58) != *(int *)(lVar37 + 0x84)) {
                  uVar21 = (uint)((ulonglong)lVar36 >> 0x10);
                  uVar35 = (uint)lVar36 & 0xffff;
                  lVar38 = lVar37 + 0x88;
                  if (*(longlong *)(lVar37 + 0x90) != 0) {
                    lVar38 = *(longlong *)(lVar37 + 0x90);
                  }
                  iVar39 = *(int *)(lVar38 + (ulonglong)
                                             (*(int *)(lVar37 + 0x98) - 1U &
                                             (int)((ulonglong)lVar36 >> 0x20) +
                                             ((uint)lVar36 << 0x10 | uVar35) +
                                             (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar35 >> 4)) * 4
                                   );
                  if (iVar39 != -1) {
                    do {
                      plVar16 = (longlong *)(*(longlong *)(lVar37 + 0x50) + (longlong)iVar39 * 0x18)
                      ;
                      if (*plVar16 == lVar36) {
                        if (plVar16 + 1 != (longlong *)0x0 && plVar16 != (longlong *)0x0) {
                          plVar16 = (longlong *)plVar16[1];
                          goto LAB_14027cd65;
                        }
                        break;
                      }
                      iVar39 = (int)plVar16[2];
                    } while (iVar39 != -1);
                  }
                }
                iVar39 = (int)local_3b0;
                uVar35 = local_3c4;
                local_3c0 = pcVar26;
                if ((longlong)*(int *)(lVar37 + 0x48) != 0) {
                  lVar38 = *(longlong *)(lVar37 + 0x40);
                  lVar33 = 0;
LAB_14027cb94:
                  if (*(longlong *)(lVar38 + lVar33) != lVar36) goto code_r0x00014027cb9b;
                  plVar16 = *(longlong **)(lVar38 + 0x30 + lVar33);
                  if (plVar16 == (longlong *)0x0) {
                    iVar30 = *(int *)(lVar38 + 0xc + lVar33);
                    if ((((((iVar30 == 0) ||
                           (uVar21 = *(uint *)(lVar38 + 8 + lVar33), (int)uVar21 < 0)) ||
                          (DAT_14c9647dc <= (int)uVar21)) ||
                         ((plVar16 = (longlong *)
                                     ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8))
                          , plVar16 == (longlong *)0x0 || ((int)plVar16[2] != iVar30)))) ||
                        ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) ||
                       (lVar36 = *plVar16, lVar36 == 0)) {
                      if (*(longlong *)(lVar38 + 0x10 + lVar33) != 0) {
                        lVar36 = FUN_140007850();
                        cVar9 = (*(code *)PTR_FUN_14c758760)();
                        iVar39 = (int)local_3b0;
                        if ((lVar36 == 0) || (cVar9 == '\0')) {
                          if (lVar36 != 0) {
                            uVar21 = *(uint *)(lVar36 + 0xc);
                            *(uint *)(lVar38 + 8 + lVar33) = uVar21;
                            if (DAT_14c9647dc <= (int)uVar21) goto LAB_14027ed32;
LAB_14027ebe9:
                            lVar37 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                            goto LAB_14027ec01;
                          }
                          *(undefined8 *)(lVar38 + 8 + lVar33) = 0;
                        }
                        else {
                          uVar21 = *(uint *)(lVar36 + 0xc);
                          if ((int)uVar21 < DAT_14c9647dc) {
                            lVar37 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                          }
                          else {
                            lVar37 = 0;
                          }
                          if ((*(uint *)(lVar37 + 8) & 0x8400000) == 0) {
                            *(uint *)(lVar38 + 8 + lVar33) = uVar21;
                            if ((int)uVar21 < DAT_14c9647dc) goto LAB_14027ebe9;
LAB_14027ed32:
                            lVar37 = 0;
LAB_14027ec01:
                            iVar30 = *(int *)(lVar37 + 0x10);
                            if (iVar30 == 0) {
                              LOCK();
                              iVar39 = DAT_14c964868 + 1;
                              UNLOCK();
                              iVar12 = DAT_14c964868 + 1;
                              bVar45 = DAT_14c964868 < 1000;
                              DAT_14c964868 = iVar39;
                              if (bVar45) {
                                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                              ,0x23d,
                                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                              ,iVar12);
                              }
                              LOCK();
                              iVar30 = *(int *)(lVar37 + 0x10);
                              bVar45 = iVar30 == 0;
                              if (bVar45) {
                                *(int *)(lVar37 + 0x10) = iVar12;
                                iVar30 = 0;
                              }
                              UNLOCK();
                              if (bVar45) {
                                iVar30 = iVar12;
                              }
                              uVar32 = local_3a0;
                              iVar39 = (int)local_3b0;
                            }
                            *(int *)(lVar38 + 0xc + lVar33) = iVar30;
                            plVar14 = local_398;
                          }
                          if ((*(uint *)(lVar36 + 8) >> 0x1e & 1) == 0) goto LAB_14027cc3d;
                        }
                      }
                    }
                    else {
LAB_14027cc3d:
                      if (DAT_14c949118 == 0) {
                        local_c8._0_8_ = FUN_140631fbe;
                        lVar37 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                        DAT_14c949118 = lVar37;
                        FUN_1446f470e(&local_238,L"Class",1);
                        local_3e0 = &local_c8;
                        local_3e8 = &LAB_146891e90;
                        local_3f0 = (code *)&LAB_146273097;
                        pwStack_400 = L"Engine";
                        local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
                        local_408 = 0x20;
                        local_410 = 0x10000000;
                        local_418._0_4_ = 8;
                        FUN_14574b4b2(lVar37);
                        DAT_14c949118 = lVar37;
                        if (DAT_14c951858 == (undefined8 *)0x0) {
                          local_158 = FUN_1449e2820;
                          local_3d0 = FUN_14081d0ea;
                          local_3d8 = FUN_14081d0ea;
                          local_3e0 = (GUID *)&local_158;
                          local_3e8 = &LAB_1468c5283;
                          local_3f0 = FUN_142809da0;
                          local_3f8 = L"Engine";
                          pwStack_400 = (wchar_t *)0x400000000;
                          local_408 = CONCAT44(local_408._4_4_,0x10000000);
                          local_410 = 8;
                          local_418._0_4_ = 0x50;
                          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,
                                        &DAT_1468c5288);
                        }
                        puVar27 = DAT_14c951858;
                        lVar37 = DAT_14c949118;
                        uVar19 = FUN_1449e2fb2();
                        local_418 = L"Class";
                        FUN_14574b446(uVar19,lVar37,puVar27,L"/Script/CoreUObject");
                        plVar14 = local_398;
                        uVar32 = local_3a0;
                        iVar39 = (int)local_3b0;
                      }
                      if ((*(int *)(DAT_14c949118 + 0x38) <=
                           *(int *)(*(longlong *)(lVar36 + 0x10) + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar36 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
                        lVar37 = FUN_145862640();
                        iVar39 = (int)local_3b0;
                        if ((lVar37 != 0) &&
                           ((*(int *)(lVar37 + 0x38) <= *(int *)(lVar36 + 0x38) &&
                            (*(longlong *)
                              (*(longlong *)(lVar36 + 0x30) + (longlong)*(int *)(lVar37 + 0x38) * 8)
                             == lVar37 + 0x30)))) {
                          iVar39 = *(int *)(lVar38 + 0xc + lVar33);
                          if (((iVar39 == 0) ||
                              (((uVar21 = *(uint *)(lVar38 + 8 + lVar33), (int)uVar21 < 0 ||
                                (DAT_14c9647dc <= (int)uVar21)) ||
                               (plVar14 = (longlong *)
                                          ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                                          *(longlong *)
                                           (DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
                               plVar14 == (longlong *)0x0)))) ||
                             ((((int)plVar14[2] != iVar39 ||
                               ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) ||
                              (plVar14 = (longlong *)*plVar14, plVar14 == (longlong *)0x0)))) {
                            if (*(longlong *)(lVar38 + 0x10 + lVar33) != 0) {
                              plVar14 = (longlong *)FUN_140007850();
                              cVar9 = (*(code *)PTR_FUN_14c758760)();
                              if ((plVar14 == (longlong *)0x0) || (cVar9 == '\0')) {
                                if (plVar14 != (longlong *)0x0) {
                                  uVar21 = *(uint *)((longlong)plVar14 + 0xc);
                                  goto LAB_14027ef4a;
                                }
                                *(undefined8 *)(lVar38 + 8 + lVar33) = 0;
                              }
                              else {
                                uVar21 = *(uint *)((longlong)plVar14 + 0xc);
                                if ((int)uVar21 < DAT_14c9647dc) {
                                  lVar36 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                                }
                                else {
                                  lVar36 = 0;
                                }
                                if ((*(uint *)(lVar36 + 8) & 0x8400000) == 0) {
LAB_14027ef4a:
                                  *(uint *)(lVar38 + 8 + lVar33) = uVar21;
                                  if ((int)uVar21 < DAT_14c9647dc) {
                                    lVar36 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                                  }
                                  else {
                                    lVar36 = 0;
                                  }
                                  iVar39 = *(int *)(lVar36 + 0x10);
                                  if (*(int *)(lVar36 + 0x10) == 0) {
                                    LOCK();
                                    iVar39 = DAT_14c964868 + 1;
                                    UNLOCK();
                                    iVar30 = DAT_14c964868 + 1;
                                    bVar45 = DAT_14c964868 < 1000;
                                    DAT_14c964868 = iVar39;
                                    if (bVar45) {
                                      FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar30);
                                    }
                                    LOCK();
                                    iVar39 = *(int *)(lVar36 + 0x10);
                                    bVar45 = iVar39 == 0;
                                    if (bVar45) {
                                      *(int *)(lVar36 + 0x10) = iVar30;
                                      iVar39 = 0;
                                    }
                                    UNLOCK();
                                    if (bVar45) {
                                      iVar39 = iVar30;
                                    }
                                  }
                                  *(int *)(lVar38 + 0xc + lVar33) = iVar39;
                                }
                                if ((*(uint *)(plVar14 + 1) >> 0x1e & 1) == 0) goto LAB_14027ef8e;
                              }
                            }
LAB_14027eff7:
                            plVar14 = (longlong *)0x0;
                          }
                          else {
LAB_14027ef8e:
                            if (DAT_14c949118 == 0) {
                              local_c8._0_8_ = FUN_140631fbe;
                              lVar36 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                              DAT_14c949118 = lVar36;
                              FUN_1446f470e(&local_238,L"Class",1);
                              local_3e0 = &local_c8;
                              local_3e8 = &LAB_146891e90;
                              local_3f0 = (code *)&LAB_146273097;
                              pwStack_400 = L"Engine";
                              local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
                              local_408 = 0x20;
                              local_410 = 0x10000000;
                              local_418._0_4_ = 8;
                              FUN_14574b4b2(lVar36);
                              DAT_14c949118 = lVar36;
                              if (DAT_14c951858 == (undefined8 *)0x0) {
                                local_158 = FUN_1449e2820;
                                local_3d0 = FUN_14081d0ea;
                                local_3d8 = FUN_14081d0ea;
                                local_3e0 = (GUID *)&local_158;
                                local_3e8 = &LAB_1468c5283;
                                local_3f0 = FUN_142809da0;
                                local_3f8 = L"Engine";
                                pwStack_400 = (wchar_t *)0x400000000;
                                local_408 = CONCAT44(local_408._4_4_,0x10000000);
                                local_410 = 8;
                                local_418._0_4_ = 0x50;
                                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,
                                              &DAT_1468c5288);
                              }
                              puVar27 = DAT_14c951858;
                              lVar36 = DAT_14c949118;
                              uVar19 = FUN_1449e2fb2();
                              local_418 = L"Class";
                              FUN_14574b446(uVar19,lVar36,puVar27,L"/Script/CoreUObject");
                            }
                            if ((((*(int *)(plVar14[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
                                 (*(longlong *)
                                   (*(longlong *)(plVar14[2] + 0x30) +
                                   (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
                                  DAT_14c949118 + 0x30)) || (lVar36 = FUN_145862640(), lVar36 == 0))
                               || ((int)plVar14[7] < *(int *)(lVar36 + 0x38))) goto LAB_14027eff7;
                            if (*(longlong *)(plVar14[6] + (longlong)*(int *)(lVar36 + 0x38) * 8) !=
                                lVar36 + 0x30) {
                              plVar14 = (longlong *)0x0;
                            }
                          }
                          pwVar44 = (wchar_t *)plVar14[0x22];
                          if (pwVar44 == (wchar_t *)0x0) {
                            (**(code **)(*plVar14 + 1000))(plVar14);
                            pwVar44 = (wchar_t *)plVar14[0x22];
                          }
                          uVar19 = *(undefined8 *)(lVar38 + lVar33);
                          iVar39 = *(int *)(lVar38 + 0xc + lVar33);
                          if (((iVar39 == 0) ||
                              (uVar21 = *(uint *)(lVar38 + 8 + lVar33), (int)uVar21 < 0)) ||
                             ((((DAT_14c9647dc <= (int)uVar21 ||
                                ((plVar14 = (longlong *)
                                            ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                                            *(longlong *)
                                             (DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
                                 plVar14 == (longlong *)0x0 || ((int)plVar14[2] != iVar39)))) ||
                               ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) ||
                              (lVar36 = *plVar14, lVar36 == 0)))) {
                            if (*(longlong *)(lVar38 + 0x10 + lVar33) != 0) {
                              lVar36 = FUN_140007850();
                              cVar9 = (*(code *)PTR_FUN_14c758760)();
                              if ((lVar36 == 0) || (cVar9 == '\0')) {
                                if (lVar36 != 0) {
                                  uVar21 = *(uint *)(lVar36 + 0xc);
                                  goto LAB_14027f0e3;
                                }
                                *(undefined8 *)(lVar38 + 8 + lVar33) = 0;
                              }
                              else {
                                uVar21 = *(uint *)(lVar36 + 0xc);
                                if ((int)uVar21 < DAT_14c9647dc) {
                                  lVar37 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                                }
                                else {
                                  lVar37 = 0;
                                }
                                if ((*(uint *)(lVar37 + 8) & 0x8400000) == 0) {
LAB_14027f0e3:
                                  *(uint *)(lVar38 + 8 + lVar33) = uVar21;
                                  if ((int)uVar21 < DAT_14c9647dc) {
                                    lVar37 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                                  }
                                  else {
                                    lVar37 = 0;
                                  }
                                  iVar39 = *(int *)(lVar37 + 0x10);
                                  if (*(int *)(lVar37 + 0x10) == 0) {
                                    LOCK();
                                    iVar39 = DAT_14c964868 + 1;
                                    UNLOCK();
                                    iVar30 = DAT_14c964868 + 1;
                                    local_3b8 = (undefined8 *)CONCAT44(local_3b8._4_4_,iVar30);
                                    bVar45 = DAT_14c964868 < 1000;
                                    DAT_14c964868 = iVar39;
                                    if (bVar45) {
                                      FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar30);
                                    }
                                    LOCK();
                                    iVar39 = *(int *)(lVar37 + 0x10);
                                    bVar45 = iVar39 == 0;
                                    if (bVar45) {
                                      *(int *)(lVar37 + 0x10) = (int)local_3b8;
                                      iVar39 = 0;
                                    }
                                    UNLOCK();
                                    if (bVar45) {
                                      iVar39 = (int)local_3b8;
                                    }
                                  }
                                  *(int *)(lVar38 + 0xc + lVar33) = iVar39;
                                }
                                if ((*(uint *)(lVar36 + 8) >> 0x1e & 1) == 0) goto LAB_14027f127;
                              }
                            }
LAB_14027f189:
                            lVar36 = 0;
                          }
                          else {
LAB_14027f127:
                            if (DAT_14c949118 == 0) {
                              local_c8._0_8_ = FUN_140631fbe;
                              lVar37 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
                              DAT_14c949118 = lVar37;
                              FUN_1446f470e(&local_238,L"Class",1);
                              local_3e0 = &local_c8;
                              local_3e8 = &LAB_146891e90;
                              local_3f0 = (code *)&LAB_146273097;
                              pwStack_400 = L"Engine";
                              local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
                              local_408 = 0x20;
                              local_410 = 0x10000000;
                              local_418._0_4_ = 8;
                              FUN_14574b4b2(lVar37);
                              local_3b8 = DAT_14c951858;
                              DAT_14c949118 = lVar37;
                              if (DAT_14c951858 == (undefined8 *)0x0) {
                                local_158 = FUN_1449e2820;
                                local_3d0 = FUN_14081d0ea;
                                local_3d8 = FUN_14081d0ea;
                                local_3e0 = (GUID *)&local_158;
                                local_3e8 = &LAB_1468c5283;
                                local_3f0 = FUN_142809da0;
                                local_3f8 = L"Engine";
                                pwStack_400 = (wchar_t *)0x400000000;
                                local_408 = CONCAT44(local_408._4_4_,0x10000000);
                                local_410 = 8;
                                local_418._0_4_ = 0x50;
                                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,
                                              &DAT_1468c5288);
                              }
                              lVar37 = DAT_14c949118;
                              local_3b8 = DAT_14c951858;
                              uVar20 = FUN_1449e2fb2();
                              local_418 = L"Class";
                              FUN_14574b446(uVar20,lVar37,local_3b8,L"/Script/CoreUObject");
                            }
                            if ((((*(int *)(*(longlong *)(lVar36 + 0x10) + 0x38) <
                                   *(int *)(DAT_14c949118 + 0x38)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar36 + 0x10) + 0x30) +
                                   (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
                                  DAT_14c949118 + 0x30)) || (lVar37 = FUN_145862640(), lVar37 == 0))
                               || (*(int *)(lVar36 + 0x38) < *(int *)(lVar37 + 0x38)))
                            goto LAB_14027f189;
                            if (*(longlong *)
                                 (*(longlong *)(lVar36 + 0x30) +
                                 (longlong)*(int *)(lVar37 + 0x38) * 8) != lVar37 + 0x30) {
                              lVar36 = 0;
                            }
                          }
                          local_408 = 0;
                          pwStack_400 = (wchar_t *)0x0;
                          local_410 = CONCAT31(local_410._1_3_,1);
                          local_418 = pwVar44;
                          lVar36 = FUN_1470ac39c(DAT_14c951640,lVar36,uVar19);
                          if ((lVar36 == 0) || (DAT_14c950c29 == '\0')) {
                            *(longlong *)(lVar38 + 0x30 + lVar33) = lVar36;
                            if (lVar36 == 0) {
                              *(undefined8 *)(lVar38 + lVar33) = 0;
                              plVar14 = local_398;
                              uVar32 = local_3a0;
                              goto LAB_14027eb57;
                            }
                          }
                          else {
                            FUN_1456cec3c(lVar36);
                            *(longlong *)(lVar38 + 0x30 + lVar33) = lVar36;
                          }
                          uVar21 = *(uint *)(lVar36 + 0xc);
                          if ((int)uVar21 < DAT_14c9647dc) {
                            lVar36 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
                          }
                          else {
                            lVar36 = 0;
                          }
                          FUN_1447f71cc(lVar36,0x40000000);
                          plVar16 = *(longlong **)(lVar38 + 0x30 + lVar33);
                          plVar14 = local_398;
                          uVar32 = local_3a0;
                          iVar39 = (int)local_3b0;
                          uVar35 = local_3c4;
                          if (plVar16 != (longlong *)0x0) goto LAB_14027cbb3;
                          goto LAB_14027ec6a;
                        }
                      }
                    }
                    *(undefined8 *)(lVar38 + lVar33) = 0;
                    uVar35 = local_3c4;
                    goto LAB_14027ec6a;
                  }
LAB_14027cbb3:
                  plVar16 = (longlong *)(**(code **)(*plVar16 + 0x2a8))(plVar16,local_3c0);
LAB_14027cd65:
                  iVar39 = (int)local_3b0;
                  uVar35 = local_3c4;
                  if (plVar16 == (longlong *)0x0) goto LAB_14027ec6a;
                  if ((*(longlong *)(*plVar14 + 0x3c) == 0) ||
                     (*(char *)(*plVar14 + 0x38) < (char)plVar14[1])) {
                    FUN_1462a5546();
                    FUN_1404dce0c(&local_238,&DAT_14c9a3890);
                  }
                  else {
                    local_380 = plVar16;
                    FUN_1404dce0c((GUID *)&local_158,plVar14);
                    iVar39 = (int)local_f8;
                    lVar36 = (longlong)(int)local_f8;
                    if (lVar36 == 0) {
                      iVar30 = 0;
                    }
                    else {
                      piVar17 = (int *)(local_100 + 1);
                      puVar27 = local_100;
                      if (local_100 == (undefined8 *)0x0) {
                        piVar17 = (int *)&uStack_108;
                        puVar27 = &local_110;
                      }
                      local_3b8 = puVar27 + 3;
                      iVar30 = 0;
                      bVar11 = *piVar17 == 0;
                      iVar12 = 0;
                      do {
                        local_3c0 = (code *)(CONCAT71(local_3c0._1_7_,bVar11) ^ 1);
                        lVar37 = (longlong)iVar12;
                        iVar41 = iVar12 + 1;
                        if (iVar12 + 1 < iVar39) {
                          iVar41 = iVar39;
                        }
                        piVar17 = (int *)(local_3b8 + lVar37 * 2);
                        iVar23 = iVar12;
                        lVar38 = lVar37;
                        do {
                          lVar38 = lVar38 + 1;
                          iVar24 = iVar41;
                          if (lVar36 <= lVar38) break;
                          iVar2 = *piVar17;
                          iVar23 = iVar23 + 1;
                          piVar17 = piVar17 + 4;
                          iVar24 = iVar23;
                        } while ((bool)(bVar11 & 1) == (iVar2 == 0));
                        iVar41 = iVar24 - iVar12;
                        if ((bVar11 & 1) == 0) {
                          if (iVar30 != iVar12) {
                            memmove(puVar27 + (longlong)iVar30 * 2,puVar27 + lVar37 * 2,
                                    (longlong)iVar41 << 4);
                          }
                          iVar30 = iVar30 + iVar41;
                        }
                        else {
                          FUN_1404eec3a(puVar27 + lVar37 * 2,iVar41);
                        }
                        bVar11 = (byte)local_3c0;
                        iVar12 = iVar24;
                      } while (lVar38 < lVar36);
                      local_f8 = CONCAT44(local_f8._4_4_,iVar30);
                    }
                    if ((int)local_e8 < 1 && 0x7ffffffe < (int)uStack_140 - 2U) {
                      uVar32 = local_3a0;
                      iVar39 = (int)uStack_140;
                      if (0 < iVar30) {
                        piVar17 = (int *)(local_100 + 1);
                        if (local_100 == (undefined8 *)0x0) {
                          piVar17 = (int *)&uStack_108;
                        }
                        if (0 < *piVar17) {
                          puVar27 = (undefined8 *)0x0;
                          uVar21 = 0;
                          uVar22 = 0;
                          uVar35 = 0;
                          uVar13 = 0;
                          pcVar26 = local_158;
                          goto LAB_14027d41e;
                        }
                      }
LAB_14027e6c9:
                      plVar14 = local_398;
                      local_230 = local_150;
                      local_238 = local_158;
                      local_228 = local_148;
                      uVar7 = uStack_140._4_4_;
                      local_148 = (void *)0x0;
                      uStack_140 = 0;
                      uStack_220 = CONCAT44(uVar7,iVar39);
                      local_1f8 = local_118;
                      (*(code *)(&PTR_LAB_14a184230)[local_118])(local_218,local_138);
                      if (local_100 == (undefined8 *)0x0) {
                        local_1f0 = local_110;
                        uStack_1e8 = uStack_108;
                      }
                      local_1e0 = local_100;
                      local_100 = (undefined8 *)0x0;
                      uStack_1b0 = CONCAT44(iStack_cc,uStack_d0);
                      local_1d8 = local_f8;
                      uStack_1d0 = lStack_f0;
                      local_f8 = 0x100000000;
                      lStack_f0 = 0;
                      local_1c8 = local_e8;
                      uStack_1c0 = lStack_e0;
                      local_e8 = 0;
                      lStack_e0 = 0;
                      local_1b8 = local_d8;
                      local_d8 = 0;
                      uVar34 = 0;
                    }
                    else {
                      if (iVar30 == 0) {
                        FUN_140d76a74((GUID *)&local_158);
                      }
                      puVar27 = (undefined8 *)0x0;
                      pcVar26 = local_158;
                      if ((local_158[0x5d] == (code)0x1) && (0 < (int)local_e8)) {
                        pcVar40 = local_158 + 0x110;
                        local_370 = local_158 + 0x120;
                        puVar27 = (undefined8 *)0x0;
                        uVar21 = 0;
                        uVar22 = 0;
                        uVar35 = 0;
                        lVar36 = 0;
                        local_3c0 = local_158;
                        do {
                          if (((uVar21 == 0 && (int)puVar27 == 0) && uVar22 == 0) && uVar35 == 0) {
                            iVar39 = *(int *)(lStack_f0 + 0xc + lVar36 * 0x40);
                            if ((((iVar39 != 0) &&
                                 (uVar13 = *(uint *)(lStack_f0 + lVar36 * 0x40 + 8),
                                 -1 < (int)uVar13)) && ((int)uVar13 < DAT_14c9647dc)) &&
                               (((puVar25 = (undefined8 *)
                                            ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                                            *(longlong *)
                                             (DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                                 puVar25 != (undefined8 *)0x0 && (*(int *)(puVar25 + 2) == iVar39))
                                && ((*(uint *)(puVar25 + 1) & 0x10200000) == 0)))) {
                              if ((*(uint *)(puVar25 + 1) & 0x10200000) == 0) {
                                pcVar18 = (code *)*puVar25;
                              }
                              else {
                                pcVar18 = (code *)0x0;
                              }
                              if (pcVar26[0x5d] == (code)0x1) {
                                iVar39 = *(int *)(pcVar26 + 0x138);
                                local_3b8 = puVar27;
                                local_3a4 = uVar21;
                                local_388 = uVar35;
                                local_384 = uVar22;
                                local_378 = pcVar18;
                                if (iVar39 == 0) {
                                  uVar32 = 1;
                                  uVar34 = 0;
                                  iVar12 = 0;
                                  iVar30 = 0;
                                }
                                else {
                                  pcVar18 = *(code **)(pcVar26 + 0x130);
                                  if (*(code **)(pcVar26 + 0x130) == (code *)0x0) {
                                    pcVar18 = local_370;
                                  }
                                  uVar21 = *(uint *)pcVar18;
                                  if (uVar21 == 0) {
                                    iVar30 = iVar39 + 0x1e;
                                    if (-1 < iVar39 + -1) {
                                      iVar30 = iVar39 + -1;
                                    }
                                    uVar34 = 0;
                                    uVar32 = (ulonglong)(uint)(iVar30 >> 5);
                                    if (iVar30 >> 5 < 1) {
                                      uVar32 = uVar34;
                                    }
                                    iVar12 = 0;
                                    do {
                                      if (uVar32 == uVar34) goto LAB_14027d22a;
                                      iVar12 = iVar12 + 0x20;
                                      uVar21 = *(uint *)(pcVar18 + (uVar34 + 1) * 4);
                                      uVar34 = uVar34 + 1;
                                    } while (uVar21 == 0);
                                  }
                                  else {
                                    uVar34 = 0;
                                    iVar12 = 0;
                                  }
                                  uVar32 = (ulonglong)(-uVar21 & uVar21);
                                  uVar43 = uVar32 * 2 + 1;
                                  lVar37 = 0x3f;
                                  if (uVar43 != 0) {
                                    for (; uVar43 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                                    }
                                  }
                                  iVar30 = (iVar12 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                                  if (iVar39 <= iVar30) {
                                    iVar30 = iVar39;
                                  }
                                }
                                if (iVar30 < iVar39) {
                                  uVar21 = 0xffffffff;
                                  do {
                                    iVar41 = *(int *)(*(longlong *)pcVar40 + 4 +
                                                     (longlong)iVar30 * 0x20);
                                    if (((iVar41 == 0) ||
                                        (uVar35 = *(uint *)(*(longlong *)pcVar40 +
                                                           (longlong)iVar30 * 0x20), (int)uVar35 < 0
                                        )) || ((DAT_14c9647dc <= (int)uVar35 ||
                                               (((lVar37 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                                                           *(longlong *)
                                                            (DAT_14c9647c8 +
                                                            (ulonglong)(uVar35 >> 0x10) * 8),
                                                 lVar37 == 0 || (*(int *)(lVar37 + 0x10) != iVar41))
                                                || ((*(uint *)(lVar37 + 8) & 0x10200000) != 0))))))
                                    {
                                      FUN_1470b0222(pcVar40);
                                      iVar39 = *(int *)(local_3c0 + 0x138);
                                    }
                                    uVar21 = uVar21 & ~(uint)uVar32;
                                    pcVar26 = *(code **)(local_3c0 + 0x130);
                                    if (*(code **)(local_3c0 + 0x130) == (code *)0x0) {
                                      pcVar26 = local_370;
                                    }
                                    iVar30 = (int)uVar34;
                                    lVar37 = (longlong)iVar30;
                                    uVar35 = *(uint *)(pcVar26 + lVar37 * 4) & uVar21;
                                    if (uVar35 == 0) {
                                      iVar41 = iVar39 + 0x1e;
                                      if (-1 < iVar39 + -1) {
                                        iVar41 = iVar39 + -1;
                                      }
                                      iVar41 = iVar41 >> 5;
                                      iVar23 = iVar41;
                                      if (iVar41 < iVar30) {
                                        iVar23 = iVar30;
                                      }
                                      if (iVar41 <= iVar30) break;
                                      lVar38 = 0;
                                      while( true ) {
                                        iVar12 = iVar12 + 0x20;
                                        uVar35 = *(uint *)(pcVar26 + (lVar37 + lVar38 + 1) * 4);
                                        if (uVar35 != 0) break;
                                        lVar38 = lVar38 + 1;
                                        if (iVar23 - lVar37 == lVar38) goto LAB_14027d22a;
                                      }
                                      uVar34 = (ulonglong)(iVar30 + (int)lVar38 + 1);
                                      uVar21 = 0xffffffff;
                                    }
                                    uVar32 = (ulonglong)(-uVar35 & uVar35);
                                    uVar43 = uVar32 * 2 + 1;
                                    lVar37 = 0x3f;
                                    if (uVar43 != 0) {
                                      for (; uVar43 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                                      }
                                    }
                                    iVar30 = (iVar12 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
                                  } while (iVar30 < iVar39);
                                }
LAB_14027d22a:
                                pcVar26 = local_3c0;
                                if (local_378 == (code *)0x0) {
                                  uVar22 = 0;
                                  uVar35 = 0;
                                }
                                else {
                                  uVar22 = *(uint *)(local_378 + 0xc);
                                  if ((int)uVar22 < DAT_14c9647dc) {
                                    lVar37 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
                                  }
                                  else {
                                    lVar37 = 0;
                                  }
                                  uVar35 = *(uint *)(lVar37 + 0x10);
                                  if (*(uint *)(lVar37 + 0x10) == 0) {
                                    LOCK();
                                    iVar39 = DAT_14c964868 + 1;
                                    UNLOCK();
                                    uVar21 = DAT_14c964868 + 1;
                                    bVar45 = DAT_14c964868 < 1000;
                                    DAT_14c964868 = iVar39;
                                    if (bVar45) {
                                      local_378 = pcVar40;
                                      FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,uVar21);
                                      pcVar40 = local_378;
                                    }
                                    LOCK();
                                    uVar35 = *(uint *)(lVar37 + 0x10);
                                    bVar45 = uVar35 == 0;
                                    if (bVar45) {
                                      *(uint *)(lVar37 + 0x10) = uVar21;
                                      uVar35 = 0;
                                    }
                                    UNLOCK();
                                    if (bVar45) {
                                      uVar35 = uVar21;
                                    }
                                  }
                                }
                                uVar21 = local_3a4;
                                puVar27 = local_3b8;
                                local_c8._0_8_ = CONCAT44(uVar35,uVar22);
                                iVar39 = FUN_14111bcac(pcVar40,uVar35 ^ uVar22,&local_c8);
                                uVar35 = local_388;
                                uVar22 = local_384;
                                if (iVar39 != -1) {
                                  lVar37 = *(longlong *)pcVar40 + (longlong)iVar39 * 0x20;
                                  if ((lVar37 != 0) &&
                                     (*(longlong *)pcVar40 + (longlong)iVar39 * 0x20 != -8)) {
                                    uVar21 = *(uint *)(lVar37 + 0x10);
                                    puVar27 = (undefined8 *)(ulonglong)*(uint *)(lVar37 + 0x14);
                                    uVar35 = *(uint *)(lVar37 + 8);
                                    uVar22 = *(uint *)(lVar37 + 0xc);
                                  }
                                }
                              }
                            }
                          }
                          lVar36 = lVar36 + 1;
                        } while (lVar36 < (int)local_e8);
                        uVar13 = uVar22 | uVar21 | uVar35;
                      }
                      else {
                        uVar21 = 0;
                        uVar22 = 0;
                        uVar35 = 0;
                        uVar13 = 0;
                      }
LAB_14027d41e:
                      if (uVar13 == 0 && (int)puVar27 == 0) {
                        puVar27 = (undefined8 *)(ulonglong)DAT_14c9a3008;
                        uVar13 = DAT_14c9a3000 | DAT_14c9a2ffc | DAT_14c9a3004;
                        uVar21 = DAT_14c9a3004;
                        uVar35 = DAT_14c9a2ffc;
                        uVar22 = DAT_14c9a3000;
                      }
                      if (uVar13 == 0 && (int)puVar27 == 0) {
                        local_c8._0_8_ = (code *)0x0;
                        local_c8.Data4[0] = '\0';
                        local_c8.Data4[1] = '\0';
                        local_c8.Data4[2] = '\0';
                        local_c8.Data4[3] = '\0';
                        local_c8.Data4[4] = '\0';
                        local_c8.Data4[5] = '\0';
                        local_c8.Data4[6] = '\0';
                        local_c8.Data4[7] = '\0';
                        CoCreateGuid(&local_c8);
                        puVar27 = (undefined8 *)((ulonglong)local_c8.Data4 >> 0x20);
                        uVar21 = local_c8.Data4._0_4_;
                        uVar35 = local_c8.Data1;
                        uVar22 = local_c8._4_4_;
                      }
                      local_384 = uVar22;
                      local_3c0 = pcVar26;
                      local_3b8 = puVar27;
                      local_3a4 = uVar21;
                      local_388 = uVar35;
                      if ((((iStack_cc == 0) || ((int)uStack_d0 < 0)) ||
                          ((DAT_14c9647dc <= (int)uStack_d0 ||
                           (((lVar36 = (ulonglong)((uStack_d0 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uStack_d0 >> 0x10) * 8),
                             lVar36 == 0 || (*(int *)(lVar36 + 0x10) != iStack_cc)) ||
                            ((*(uint *)(lVar36 + 8) & 0x10200000) != 0)))))) &&
                         ((longlong)*(int *)(local_390 + 0x128) != 0)) {
                        lVar36 = *(longlong *)(local_390 + 0x120);
                        lVar37 = (longlong)*(int *)(local_390 + 0x128) << 3;
                        do {
                          plVar14 = *(longlong **)(lVar36 + -8 + lVar37);
                          iVar39 = iStack_cc;
                          if ((plVar14 != (longlong *)0x0) &&
                             (lVar38 = (**(code **)(*plVar14 + 0x2a0))(plVar14,(GUID *)&local_158),
                             iVar39 = iStack_cc, lVar38 != 0)) {
                            uStack_d0 = *(uint *)(lVar38 + 0xc);
                            if ((int)uStack_d0 < DAT_14c9647dc) {
                              lVar38 = (ulonglong)((uStack_d0 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uStack_d0 >> 0x10) * 8);
                            }
                            else {
                              lVar38 = 0;
                            }
                            iVar39 = *(int *)(lVar38 + 0x10);
                            if (*(int *)(lVar38 + 0x10) == 0) {
                              LOCK();
                              iVar39 = DAT_14c964868 + 1;
                              UNLOCK();
                              iVar30 = DAT_14c964868 + 1;
                              bVar45 = DAT_14c964868 < 1000;
                              DAT_14c964868 = iVar39;
                              if (bVar45) {
                                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                              ,0x23d,
                                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                              ,iVar30);
                              }
                              LOCK();
                              iVar39 = *(int *)(lVar38 + 0x10);
                              bVar45 = iVar39 == 0;
                              if (bVar45) {
                                *(int *)(lVar38 + 0x10) = iVar30;
                                iVar39 = 0;
                              }
                              UNLOCK();
                              pcVar26 = local_3c0;
                              if (bVar45) {
                                iVar39 = iVar30;
                              }
                            }
                          }
                          iStack_cc = iVar39;
                          lVar37 = lVar37 + -8;
                        } while (lVar37 != 0);
                      }
                      iVar39 = *(int *)(pcVar26 + 0x1c);
                      *(int *)(pcVar26 + 0x1c) = iVar39 + 1;
                      uVar32 = (ulonglong)*(int *)(pcVar26 + 0x10);
                      if ((longlong)uVar32 < 1) {
                        *(int *)(pcVar26 + 0x1c) = iVar39;
                      }
                      else {
                        pcVar40 = pcVar26 + 8;
                        bVar45 = false;
                        do {
                          lVar36 = uVar32 * 0x10 + -8;
                          uVar34 = uVar32;
                          while (((*(int *)(*(longlong *)pcVar40 + lVar36) != 0 &&
                                  (plVar14 = *(longlong **)(*(longlong *)pcVar40 + -8 + lVar36),
                                  plVar14 != (longlong *)0x0)) &&
                                 (cVar9 = (**(code **)(*plVar14 + 0x60))(plVar14,(GUID *)&local_158)
                                 , cVar9 != '\0'))) {
                            lVar36 = lVar36 + -0x10;
                            bVar5 = uVar34 < 2;
                            uVar34 = uVar34 - 1;
                            if (bVar5) {
                              iVar39 = *(int *)(local_3c0 + 0x1c) + -1;
                              *(int *)(local_3c0 + 0x1c) = iVar39;
                              pcVar26 = local_3c0;
                              if (bVar45) goto LAB_14027eda4;
                              goto LAB_14027d5e9;
                            }
                          }
                          uVar32 = uVar34 - 1;
                          bVar45 = true;
                        } while (1 < uVar34);
                        iVar39 = *(int *)(local_3c0 + 0x1c) + -1;
                        *(int *)(local_3c0 + 0x1c) = iVar39;
LAB_14027eda4:
                        pcVar26 = local_3c0;
                        if (iVar39 < 1) {
                          iVar39 = *(int *)(local_3c0 + 0x10);
                          iVar30 = iVar39;
                          if (0 < iVar39) {
                            iVar12 = 0;
                            do {
                              if (((*(int *)(*(longlong *)pcVar40 + 8 + (longlong)iVar12 * 0x10) ==
                                    0) || (plVar14 = *(longlong **)
                                                      (*(longlong *)pcVar40 +
                                                      (longlong)iVar12 * 0x10),
                                          plVar14 == (longlong *)0x0)) ||
                                 (cVar9 = (**(code **)(*plVar14 + 0x28))(), cVar9 != '\0')) {
                                FUN_14005b288(pcVar40,iVar12);
                                FUN_14005b248(pcVar40);
                              }
                              else {
                                iVar12 = iVar12 + 1;
                              }
                              iVar30 = *(int *)(local_3c0 + 0x10);
                            } while (iVar12 < iVar30);
                          }
                          pcVar26 = local_3c0;
                          iVar12 = iVar30 * 2;
                          if (iVar12 < 3) {
                            iVar12 = 2;
                          }
                          *(int *)(local_3c0 + 0x18) = iVar12;
                          if ((iVar12 < iVar39) && (*(int *)(local_3c0 + 0x14) != iVar30)) {
                            FUN_14045812c(pcVar40);
                          }
                        }
                      }
LAB_14027d5e9:
                      FUN_141237793();
                      lVar36 = (longlong)*(int *)(pcVar26 + 0x10c);
                      if (((-1 < lVar36) && (*(int *)(pcVar26 + 0x10c) < DAT_14c9a3330)) &&
                         (lVar37 = (longlong)*(int *)(DAT_14c9a3328 + 0x10 + lVar36 * 0x18),
                         lVar37 != 0)) {
                        pcVar26 = *(code **)(DAT_14c9a3328 + 8 + lVar36 * 0x18);
                        pcVar40 = pcVar26 + lVar37 * 0x38;
                        uVar32 = local_f8 & 0xffffffff;
                        do {
                          local_c8._0_8_ = pcVar26;
                          if (0 < (int)uVar32) {
                            lVar36 = 0;
                            lVar37 = 0;
                            do {
                              puVar27 = local_100;
                              if (local_100 == (undefined8 *)0x0) {
                                puVar27 = &local_110;
                              }
                              FUN_1410cd780(&local_c8,(longlong)puVar27 + lVar36);
                              lVar37 = lVar37 + 1;
                              uVar32 = (ulonglong)(int)local_f8;
                              lVar36 = lVar36 + 0x10;
                            } while (lVar37 < (longlong)uVar32);
                          }
                          pcVar26 = pcVar26 + 0x38;
                        } while (pcVar26 != pcVar40);
                      }
                      uVar21 = local_3a4;
                      if (((((iStack_cc == 0) || ((int)uStack_d0 < 0)) ||
                           (DAT_14c9647dc <= (int)uStack_d0)) ||
                          ((puVar27 = (undefined8 *)
                                      ((ulonglong)((uStack_d0 & 0xffff) * 0x18) +
                                      *(longlong *)
                                       (DAT_14c9647c8 + (ulonglong)(uStack_d0 >> 0x10) * 8)),
                           puVar27 == (undefined8 *)0x0 || (*(int *)(puVar27 + 2) != iStack_cc))))
                         || ((*(uint *)(puVar27 + 1) & 0x10200000) != 0)) {
                        FUN_140056680(&local_330,&DAT_149e01fe8);
                        uVar35 = (uint)local_3b8;
                        uVar21 = local_3a4;
                      }
                      else {
                        uVar35 = (uint)local_3b8;
                        if ((*(uint *)(puVar27 + 1) & 0x10200000) == 0) {
                          plVar14 = (longlong *)*puVar27;
                        }
                        else {
                          plVar14 = (longlong *)0x0;
                        }
                        lVar36 = (**(code **)(*plVar14 + 0x180))();
                        if (lVar36 == 0) {
                          FUN_140056680(&local_330,&DAT_149e01fe8);
                        }
                        else {
                          local_c8._0_8_ = *(undefined8 *)(lVar36 + 0x18);
                          FUN_1400021e4(&local_c8,&local_330);
                        }
                      }
                      FUN_1410cda70(local_138,&local_340);
                      local_358 = (code *)0x0;
                      uStack_350._0_4_ = 1;
                      uStack_350._4_4_ = 0;
                      FUN_140eed74c(&local_358,0);
                      iVar39 = (int)uStack_350;
                      *(uint *)local_358 = local_388;
                      *(uint *)(local_358 + 4) = local_384;
                      *(uint *)(local_358 + 8) = uVar21;
                      *(uint *)(local_358 + 0xc) = uVar35;
                      local_358[0x20] = (code)0x6;
                      *(undefined8 *)(local_358 + 0x28) = DAT_14c9a3090;
                      lVar36 = (longlong)(int)uStack_350;
                      uVar21 = (int)uStack_350 + 1;
                      uStack_350 = CONCAT44(uStack_350._4_4_,uVar21);
                      if (uStack_350._4_4_ < uVar21) {
                        FUN_140eed74c(&local_358,iVar39);
                      }
                      uVar32 = uStack_140;
                      pvVar6 = local_148;
                      pcVar26 = local_358 + lVar36 * 0x30;
                      local_c8._0_8_ = (void *)0x0;
                      lVar36 = (longlong)(int)uStack_140;
                      local_c8.Data4[0] = (undefined1)uStack_140;
                      local_c8.Data4[1] = uStack_140._1_1_;
                      local_c8.Data4[2] = uStack_140._2_1_;
                      local_c8.Data4[3] = uStack_140._3_1_;
                      uStack_140 = uVar32;
                      if (lVar36 == 0) {
                        local_c8.Data4 = (uchar  [8])(uVar32 & 0xffffffff);
                      }
                      else {
                        FUN_1446dd670(&local_c8,uVar32 & 0xffffffff,0);
                        memcpy((void *)local_c8._0_8_,pvVar6,lVar36 * 2);
                      }
                      uVar32 = uStack_350;
                      pcVar26[0x20] = (code)0x0;
                      *(undefined8 *)pcVar26 = 0;
                      *(undefined8 *)pcVar26 = local_c8._0_8_;
                      *(undefined4 *)(pcVar26 + 8) = local_c8.Data4._0_4_;
                      *(undefined4 *)(pcVar26 + 0xc) = local_c8.Data4._4_4_;
                      pcVar26[0x20] = (code)0x4;
                      *(undefined8 *)(pcVar26 + 0x28) = DAT_14c9a30b0;
                      local_c8.Data4[0] = '\0';
                      local_c8.Data4[1] = '\0';
                      local_c8.Data4[2] = '\0';
                      local_c8.Data4[3] = '\0';
                      local_c8.Data4[4] = '\0';
                      local_c8.Data4[5] = '\0';
                      local_c8.Data4[6] = '\0';
                      local_c8.Data4[7] = '\0';
                      local_c8.Data1 = 0;
                      local_c8.Data2 = 0;
                      local_c8.Data3 = 0;
                      lVar36 = (longlong)(int)uStack_350;
                      uVar21 = (int)uStack_350 + 1;
                      uStack_350 = CONCAT44(uStack_350._4_4_,uVar21);
                      if (uStack_350._4_4_ < uVar21) {
                        FUN_140eed74c(&local_358,uVar32 & 0xffffffff);
                      }
                      pvVar6 = local_340;
                      pcVar26 = local_358 + lVar36 * 0x30;
                      local_c8._0_8_ = (void *)0x0;
                      lVar36 = (longlong)(int)local_338;
                      local_c8.Data4[0] = (undefined1)local_338;
                      local_c8.Data4[1] = local_338._1_1_;
                      local_c8.Data4[2] = local_338._2_1_;
                      local_c8.Data4[3] = local_338._3_1_;
                      if (lVar36 == 0) {
                        local_c8.Data4[4] = '\0';
                        local_c8.Data4[5] = '\0';
                        local_c8.Data4[6] = '\0';
                        local_c8.Data4[7] = '\0';
                        local_c8.Data4[0] = (undefined1)local_338;
                        local_c8.Data4[1] = local_338._1_1_;
                        local_c8.Data4[2] = local_338._2_1_;
                        local_c8.Data4[3] = local_338._3_1_;
                      }
                      else {
                        FUN_1446dd670(&local_c8,local_338,0);
                        memcpy((void *)local_c8._0_8_,pvVar6,lVar36 * 2);
                      }
                      uVar32 = uStack_350;
                      pcVar26[0x20] = (code)0x0;
                      *(undefined8 *)pcVar26 = 0;
                      *(undefined8 *)pcVar26 = local_c8._0_8_;
                      *(undefined4 *)(pcVar26 + 8) = local_c8.Data4._0_4_;
                      *(undefined4 *)(pcVar26 + 0xc) = local_c8.Data4._4_4_;
                      pcVar26[0x20] = (code)0x4;
                      *(undefined8 *)(pcVar26 + 0x28) = DAT_14c9a30c0;
                      local_c8.Data4[0] = '\0';
                      local_c8.Data4[1] = '\0';
                      local_c8.Data4[2] = '\0';
                      local_c8.Data4[3] = '\0';
                      local_c8.Data4[4] = '\0';
                      local_c8.Data4[5] = '\0';
                      local_c8.Data4[6] = '\0';
                      local_c8.Data4[7] = '\0';
                      local_c8.Data1 = 0;
                      local_c8.Data2 = 0;
                      local_c8.Data3 = 0;
                      lVar36 = (longlong)(int)uStack_350;
                      uVar21 = (int)uStack_350 + 1;
                      uStack_350 = CONCAT44(uStack_350._4_4_,uVar21);
                      if (uStack_350._4_4_ < uVar21) {
                        FUN_140eed74c(&local_358,uVar32 & 0xffffffff);
                      }
                      pvVar6 = local_330;
                      pcVar26 = local_358 + lVar36 * 0x30;
                      local_c8._0_8_ = (void *)0x0;
                      lVar36 = (longlong)(int)local_328;
                      local_c8.Data4[0] = (undefined1)local_328;
                      local_c8.Data4[1] = local_328._1_1_;
                      local_c8.Data4[2] = local_328._2_1_;
                      local_c8.Data4[3] = local_328._3_1_;
                      if (lVar36 == 0) {
                        local_c8.Data4[4] = '\0';
                        local_c8.Data4[5] = '\0';
                        local_c8.Data4[6] = '\0';
                        local_c8.Data4[7] = '\0';
                        local_c8.Data4[0] = (undefined1)local_328;
                        local_c8.Data4[1] = local_328._1_1_;
                        local_c8.Data4[2] = local_328._2_1_;
                        local_c8.Data4[3] = local_328._3_1_;
                      }
                      else {
                        FUN_1446dd670(&local_c8,local_328,0);
                        memcpy((void *)local_c8._0_8_,pvVar6,lVar36 * 2);
                      }
                      uVar32 = uStack_350;
                      pcVar26[0x20] = (code)0x0;
                      *(undefined8 *)pcVar26 = 0;
                      *(undefined8 *)pcVar26 = local_c8._0_8_;
                      *(undefined4 *)(pcVar26 + 8) = local_c8.Data4._0_4_;
                      *(undefined4 *)(pcVar26 + 0xc) = local_c8.Data4._4_4_;
                      pcVar26[0x20] = (code)0x4;
                      *(undefined8 *)(pcVar26 + 0x28) = DAT_14c9a30d0;
                      local_c8.Data4[0] = '\0';
                      local_c8.Data4[1] = '\0';
                      local_c8.Data4[2] = '\0';
                      local_c8.Data4[3] = '\0';
                      local_c8.Data4[4] = '\0';
                      local_c8.Data4[5] = '\0';
                      local_c8.Data4[6] = '\0';
                      local_c8.Data4[7] = '\0';
                      local_c8._0_8_ = (code *)0x0;
                      uVar10 = (uchar)_local_150;
                      if ('\x04' < (char)uVar10) {
                        uVar10 = '\x05';
                      }
                      puVar3 = (&PTR_DAT_14a17fbd0)[(char)uVar10];
                      lVar36 = (longlong)(int)uStack_350;
                      uVar21 = (int)uStack_350 + 1;
                      uStack_350 = CONCAT44(uStack_350._4_4_,uVar21);
                      if (uStack_350._4_4_ < uVar21) {
                        FUN_140eed74c(&local_358,uVar32 & 0xffffffff);
                      }
                      pcVar40 = local_358;
                      pcVar26 = local_358 + lVar36 * 0x30;
                      local_358[(lVar36 * 0xc + 8) * 4] = (code)0x0;
                      FUN_140056680(&local_c8,puVar3);
                      (*(code *)(&PTR_FUN_14a1842f0)[(byte)pcVar40[(lVar36 * 0xc + 8) * 4]])
                                (pcVar26);
                      *(undefined8 *)(pcVar40 + lVar36 * 0x30) = local_c8._0_8_;
                      *(undefined4 *)(pcVar40 + (lVar36 * 0xc + 2) * 4) = local_c8.Data4._0_4_;
                      *(undefined4 *)(pcVar40 + (lVar36 * 0xc + 3) * 4) = local_c8.Data4._4_4_;
                      pcVar40[(lVar36 * 0xc + 8) * 4] = (code)0x4;
                      *(undefined8 *)(pcVar40 + (lVar36 * 0xc + 10) * 4) = DAT_14c9a30a0;
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c9a3b50) &&
                         (FUN_144b3d300(&DAT_14c9a3b50), DAT_14c9a3b50 == -1)) {
                        DAT_14c9a3b38 = 0;
                        _DAT_14c9a3b40 = 0;
                        _DAT_14c9a3b48 = 2;
                        atexit(FUN_142b2c4c1);
                        _Init_thread_footer(&DAT_14c9a3b50);
                      }
                      uVar19 = _DAT_14c9a3b48;
                      _DAT_14c9a3b48 = CONCAT44(DAT_14c9a3b4c + 1,_DAT_14c9a3b48);
                      uVar32 = (ulonglong)DAT_14c9a3b40;
                      plVar14 = local_380;
                      if (0 < (longlong)uVar32) {
                        bVar45 = false;
                        do {
                          lVar36 = uVar32 * 0x10 + -8;
                          uVar34 = uVar32;
                          while (((*(int *)(DAT_14c9a3b38 + lVar36) != 0 &&
                                  (plVar14 = *(longlong **)(DAT_14c9a3b38 + -8 + lVar36),
                                  plVar14 != (longlong *)0x0)) &&
                                 (cVar9 = (**(code **)(*plVar14 + 0x60))(plVar14,&local_358),
                                 cVar9 != '\0'))) {
                            lVar36 = lVar36 + -0x10;
                            bVar5 = uVar34 < 2;
                            uVar34 = uVar34 - 1;
                            if (bVar5) {
                              iVar39 = DAT_14c9a3b4c + -1;
                              _DAT_14c9a3b48 = CONCAT44(iVar39,_DAT_14c9a3b48);
                              plVar14 = local_380;
                              uVar19 = _DAT_14c9a3b48;
                              if (bVar45) goto LAB_14027f567;
                              goto LAB_14027dad6;
                            }
                          }
                          uVar32 = uVar34 - 1;
                          bVar45 = true;
                        } while (1 < uVar34);
                        iVar39 = DAT_14c9a3b4c + -1;
                        _DAT_14c9a3b48 = CONCAT44(iVar39,_DAT_14c9a3b48);
LAB_14027f567:
                        plVar14 = local_380;
                        uVar19 = _DAT_14c9a3b48;
                        if (iVar39 < 1) {
                          iVar39 = DAT_14c9a3b40;
                          if (0 < DAT_14c9a3b40) {
                            iVar30 = 0;
                            do {
                              if (((*(int *)(DAT_14c9a3b38 + 8 + (longlong)iVar30 * 0x10) == 0) ||
                                  (plVar14 = *(longlong **)(DAT_14c9a3b38 + (longlong)iVar30 * 0x10)
                                  , plVar14 == (longlong *)0x0)) ||
                                 (cVar9 = (**(code **)(*plVar14 + 0x28))(), cVar9 != '\0')) {
                                FUN_14005b288(&DAT_14c9a3b38,iVar30);
                                FUN_14005b248(&DAT_14c9a3b38);
                              }
                              else {
                                iVar30 = iVar30 + 1;
                              }
                            } while (iVar30 < DAT_14c9a3b40);
                          }
                          plVar14 = local_380;
                          iVar30 = (int)_DAT_14c9a3b40 * 2;
                          if (iVar30 < 3) {
                            iVar30 = 2;
                          }
                          _DAT_14c9a3b48 = CONCAT44(DAT_14c9a3b4c,iVar30);
                          uVar19 = _DAT_14c9a3b48;
                          if ((iVar30 < iVar39) && (DAT_14c9a3b44 != (int)_DAT_14c9a3b40)) {
                            FUN_14045812c();
                            uVar19 = _DAT_14c9a3b48;
                          }
                        }
                      }
LAB_14027dad6:
                      _DAT_14c9a3b48 = uVar19;
                      local_188 = 0;
                      local_180 = 0;
                      local_1a8 = 0;
                      uStack_1a0 = 0;
                      local_17c = 0x80;
                      uStack_178 = 0xffffffff;
                      local_174 = 0;
                      local_168 = (undefined1 *)0x0;
                      local_160 = 0;
                      FUN_144881636(&local_1a8,local_3c0 + 0xb8);
                      lVar36 = plVar14[7];
                      if ((longlong)(int)lVar36 != 0) {
                        lVar37 = local_380[6];
                        lVar38 = 0;
                        do {
                          local_c8._0_8_ = *(undefined8 *)(lVar37 + lVar38);
                          FUN_144a13f80(&local_1a8,&local_368,&local_c8,0);
                          lVar38 = lVar38 + 8;
                        } while ((longlong)(int)lVar36 * 8 != lVar38);
                      }
                      local_368 = 0;
                      uStack_360 = 0;
                      FUN_140e5a8ae();
                      if ((longlong)DAT_14c9a3718 != 0) {
                        plVar14 = DAT_14c9a3710 + DAT_14c9a3718;
                        plVar16 = DAT_14c9a3710;
                        do {
                          lVar36 = *plVar16;
                          if (lVar36 != 0) {
                            if ((local_3c0[0x5c] == (code)0x0) &&
                               (uVar21 = *(uint *)(lVar36 + 0x38), (uVar21 & 1) != 0)) {
LAB_14027dbc9:
                              lVar36 = FUN_1410cd812(lVar36,(GUID *)&local_158);
                              uVar32 = uStack_350;
                              lVar37 = (longlong)(int)uStack_350;
                              uVar35 = (int)uStack_350 + 1;
                              uStack_350 = CONCAT44(uStack_350._4_4_,uVar35);
                              if (uStack_350._4_4_ < uVar35) {
                                FUN_140eed74c(&local_358,uVar32 & 0xffffffff);
                              }
                              pcVar26 = local_358;
                              cVar1 = *(code *)(lVar36 + 0x20);
                              local_358[(lVar37 * 0xc + 8) * 4] = cVar1;
                              (*(code *)(&PTR_LAB_14a184290)[(byte)cVar1])
                                        (local_358 + lVar37 * 0x30,lVar36);
                              *(undefined8 *)(pcVar26 + (lVar37 * 0xc + 10) * 4) =
                                   *(undefined8 *)(lVar36 + 0x28);
                              if ((uVar21 & 2) != 0) {
LAB_14027dc4b:
                                uVar32 = uStack_360;
                                lVar37 = (longlong)(int)uStack_360;
                                uVar21 = (int)uStack_360 + 1;
                                uStack_360 = CONCAT44(uStack_360._4_4_,uVar21);
                                if (uStack_360._4_4_ < uVar21) {
                                  FUN_141739670(&local_368,uVar32 & 0xffffffff);
                                }
                                *(longlong *)(local_368 + lVar37 * 8) = lVar36;
                              }
                            }
                            else {
                              if ((int)uStack_1a0 != local_174) {
                                lVar37 = *(longlong *)(lVar36 + 0x30);
                                uVar21 = (uint)((ulonglong)lVar37 >> 0x10);
                                uVar35 = (uint)lVar37 & 0xffff;
                                puVar28 = local_168;
                                if (local_168 == (undefined1 *)0x0) {
                                  puVar28 = local_170;
                                }
                                for (iVar39 = *(int *)(puVar28 +
                                                      (ulonglong)
                                                      (local_160 - 1U &
                                                      (int)((ulonglong)lVar37 >> 0x20) +
                                                      ((uint)lVar37 << 0x10 | uVar35) +
                                                      (uVar21 << 0x13 | uVar21 & 0xffff) +
                                                      (uVar35 >> 4)) * 4); iVar39 != -1;
                                    iVar39 = *(int *)((longlong)iVar39 * 0x10 + local_1a8 + 8)) {
                                  if (*(longlong *)(local_1a8 + (longlong)iVar39 * 0x10) == lVar37)
                                  {
                                    uVar21 = *(uint *)(lVar36 + 0x38);
                                    goto LAB_14027dbc9;
                                  }
                                }
                              }
                              if ((*(byte *)(lVar36 + 0x38) & 2) != 0) {
                                lVar36 = FUN_1410cd812(lVar36,(GUID *)&local_158);
                                goto LAB_14027dc4b;
                              }
                            }
                          }
                          plVar16 = plVar16 + 1;
                        } while (plVar16 != plVar14);
                      }
                      pcVar26 = local_3c0;
                      if ((0 < *(int *)(local_3c0 + 0x60)) &&
                         ((longlong)*(int *)(local_390 + 0x128) != 0)) {
                        lVar37 = *(longlong *)(local_390 + 0x120);
                        lVar36 = (longlong)*(int *)(local_390 + 0x128) * 8;
                        do {
                          while( true ) {
                            lVar36 = lVar36 + -8;
                            plVar14 = *(longlong **)(lVar37 + lVar36);
                            if (plVar14 == (longlong *)0x0) break;
                            cVar9 = (**(code **)(*plVar14 + 0x2b0))(plVar14,(GUID *)&local_158);
                            if ((lVar36 == 0) || (cVar9 != '\0')) goto LAB_14027ddb7;
                          }
                        } while (lVar36 != 0);
                      }
LAB_14027ddb7:
                      if ((int)local_e8 == 0) {
LAB_14027e50d:
                        pcVar26 = local_358;
                        bVar45 = true;
                        uVar32 = local_3a0;
                        if ((longlong)(int)uStack_350 != 0) {
                          pcVar40 = local_358 + (longlong)(int)uStack_350 * 0x30;
                          uVar34 = local_f8 & 0xffffffff;
                          do {
                            pcVar40 = pcVar40 + -0x30;
                            local_c8._0_8_ = pcVar40;
                            if (0 < (int)uVar34) {
                              lVar37 = 0;
                              lVar36 = 0;
                              do {
                                puVar27 = local_100;
                                if (local_100 == (undefined8 *)0x0) {
                                  puVar27 = &local_110;
                                }
                                FUN_1410cd780(&local_c8,(longlong)puVar27 + lVar37);
                                lVar36 = lVar36 + 1;
                                uVar34 = (ulonglong)(int)local_f8;
                                lVar37 = lVar37 + 0x10;
                                uVar32 = local_3a0;
                              } while (lVar36 < (longlong)uVar34);
                            }
                          } while (pcVar40 != pcVar26);
                          bVar45 = true;
                        }
                      }
                      else {
                        iVar39 = *(int *)(pcVar26 + 0x60);
                        if ((int)local_e8 < 1) {
                          bVar45 = false;
                        }
                        else {
                          lVar36 = 0;
                          local_3c0 = (code *)CONCAT44(local_3c0._4_4_,iVar39);
                          bVar5 = false;
                          do {
                            lVar37 = lVar36 * 0x40 + lStack_f0;
                            if ((iVar39 != 0) || (bVar45 = bVar5, !bVar5)) {
                              if (((*(int *)(lVar37 + 0xc) == 0) ||
                                  (((uVar21 = *(uint *)(lVar37 + 8), (int)uVar21 < 0 ||
                                    (DAT_14c9647dc <= (int)uVar21)) ||
                                   (lVar38 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8),
                                   lVar38 == 0)))) ||
                                 ((*(int *)(lVar38 + 0x10) != *(int *)(lVar37 + 0xc) ||
                                  ((*(uint *)(lVar38 + 8) & 0x10200000) != 0)))) {
                                if ((DAT_14c9a3b58 != (longlong *)0x0 && DAT_14c9a3b60 != 0) &&
                                   (cVar9 = (**(code **)(*DAT_14c9a3b58 + 0x30))(), cVar9 != '\0'))
                                {
                                  plVar14 = DAT_14c9a3b58;
                                  if (DAT_14c9a3b60 == 0) {
                                    plVar14 = (longlong *)0x0;
                                  }
                                  (**(code **)(*plVar14 + 0x58))(plVar14,lVar37,1);
                                }
                              }
                              else {
                                local_a8 = 0;
                                local_a0 = 0;
                                local_c8._0_8_ = (code *)0x0;
                                local_c8.Data4[0] = '\0';
                                local_c8.Data4[1] = '\0';
                                local_c8.Data4[2] = '\0';
                                local_c8.Data4[3] = '\0';
                                local_c8.Data4[4] = '\0';
                                local_c8.Data4[5] = '\0';
                                local_c8.Data4[6] = '\0';
                                local_c8.Data4[7] = '\0';
                                local_9c = 0x80;
                                uStack_98 = 0xffffffff;
                                local_94 = 0;
                                local_88 = 0;
                                local_80 = 0;
                                local_70 = (GUID *)&local_158;
                                local_68 = '\0';
                                local_78 = lVar37;
                                if ((longlong)*(int *)(lVar37 + 0x38) != 0) {
                                  lVar38 = (longlong)*(int *)(lVar37 + 0x38) * 0x30;
                                  lVar33 = *(longlong *)(lVar37 + 0x30) + 0x28;
                                  do {
                                    FUN_144a13f80(&local_c8,local_31c,lVar33,0);
                                    lVar33 = lVar33 + 0x30;
                                    lVar38 = lVar38 + -0x30;
                                  } while (lVar38 != 0);
                                }
                                if ((longlong)*(int *)(local_390 + 0x128) != 0) {
                                  lVar38 = *(longlong *)(local_390 + 0x120);
                                  lVar33 = (longlong)*(int *)(local_390 + 0x128) << 3;
                                  do {
                                    plVar14 = *(longlong **)(lVar38 + -8 + lVar33);
                                    if (plVar14 != (longlong *)0x0) {
                                      (**(code **)(*plVar14 + 0x2a8))(plVar14,&local_c8);
                                    }
                                    lVar33 = lVar33 + -8;
                                  } while (lVar33 != 0);
                                }
                                iVar39 = (int)local_3c0;
                                if (local_68 == '\0') {
                                  if ((DAT_14c9a3b58 != (longlong *)0x0 && DAT_14c9a3b60 != 0) &&
                                     (cVar9 = (**(code **)(*DAT_14c9a3b58 + 0x30))(), cVar9 != '\0')
                                     ) {
                                    plVar14 = DAT_14c9a3b58;
                                    if (DAT_14c9a3b60 == 0) {
                                      plVar14 = (longlong *)0x0;
                                    }
                                    (**(code **)(*plVar14 + 0x58))(plVar14,lVar37,0);
                                  }
                                  local_80 = 0;
                                  if (local_88 != 0) {
                                    FUN_1400020a8();
                                  }
                                  iVar30 = local_c8.Data4._4_4_;
                                  local_c8.Data4 =
                                       (uchar  [8])((ulonglong)local_c8.Data4 & 0xffffffff00000000);
                                  if (iVar30 != 0) {
                                    FUN_14472eb64(&local_c8,0);
                                  }
                                  uStack_98 = 0xffffffff;
                                  local_94 = 0;
                                  local_a0 = 0;
                                  if (0x80 < local_9c) {
                                    local_9c = 0x80;
                                    FUN_1446efbd8(local_b8,0);
                                  }
                                  if (local_a8 != 0) {
                                    FUN_1400020a8();
                                  }
                                  if ((code *)local_c8._0_8_ != (code *)0x0) {
                                    FUN_1400020a8();
                                  }
                                }
                                else {
                                  bVar11 = 1;
                                  if ((DAT_14c9a3b58 != (longlong *)0x0 && DAT_14c9a3b60 != 0) &&
                                     (cVar9 = (**(code **)(*DAT_14c9a3b58 + 0x30))(), cVar9 != '\0')
                                     ) {
                                    plVar14 = DAT_14c9a3b58;
                                    if (DAT_14c9a3b60 == 0) {
                                      plVar14 = (longlong *)0x0;
                                    }
                                    bVar11 = (**(code **)(*plVar14 + 0x58))(plVar14,lVar37,1);
                                    bVar11 = bVar11 ^ 1;
                                  }
                                  local_80 = 0;
                                  if (local_88 != 0) {
                                    FUN_1400020a8();
                                  }
                                  iVar30 = local_c8.Data4._4_4_;
                                  local_c8.Data4 =
                                       (uchar  [8])((ulonglong)local_c8.Data4 & 0xffffffff00000000);
                                  if (iVar30 != 0) {
                                    FUN_14472eb64(&local_c8,0);
                                  }
                                  uStack_98 = 0xffffffff;
                                  local_94 = 0;
                                  local_a0 = 0;
                                  if (0x80 < local_9c) {
                                    local_9c = 0x80;
                                    FUN_1446efbd8(local_b8,0);
                                  }
                                  if (local_a8 != 0) {
                                    FUN_1400020a8();
                                  }
                                  if ((code *)local_c8._0_8_ != (code *)0x0) {
                                    FUN_1400020a8();
                                  }
                                  bVar45 = true;
                                  if (bVar11 != 0) goto LAB_14027e19f;
                                }
                              }
                              bVar45 = bVar5;
                              if (*(int *)(lVar37 + 0x38) != 0) {
                                lVar38 = lVar37 + 0x30;
                                FUN_140aebf9e(lVar38,&DAT_14c9a30f0,lVar37);
                                FUN_1417397cb(lVar38,&DAT_14c9a3100,lVar37 + 0x10);
                                FUN_1417397cb(lVar38,&DAT_14c9a3110,lVar37 + 0x20);
                              }
                            }
LAB_14027e19f:
                            lVar36 = lVar36 + 1;
                            bVar5 = bVar45;
                          } while (lVar36 < (int)local_e8);
                        }
                        if ((iVar39 != 0) || (!bVar45)) {
                          uVar21 = local_d8._4_4_;
                          if ((int)local_d8._4_4_ < 1) {
                            FUN_140d7698c(&lStack_e0,1);
                            uVar21 = local_d8._4_4_;
                          }
                          uVar35 = local_3a4;
                          puVar27 = local_3b8;
                          lVar36 = (longlong)(int)(uint)local_d8;
                          uVar22 = (uint)local_d8 + 1;
                          if (uVar21 < uVar22) {
                            uVar32 = local_d8 & 0xffffffff;
                            local_d8._0_4_ = uVar22;
                            FUN_140eed74c(&lStack_e0,uVar32);
                            uVar22 = (uint)local_d8;
                          }
                          local_d8._0_4_ = uVar22;
                          lVar36 = lVar36 * 0x30;
                          *(uint *)(lStack_e0 + lVar36) = local_388;
                          *(uint *)(lStack_e0 + 4 + lVar36) = local_384;
                          *(uint *)(lStack_e0 + 8 + lVar36) = uVar35;
                          *(int *)(lStack_e0 + 0xc + lVar36) = (int)puVar27;
                          *(undefined1 *)(lStack_e0 + 0x20 + lVar36) = 6;
                          *(undefined8 *)(lStack_e0 + 0x28 + lVar36) = DAT_14c9a3090;
                          FUN_140aebf9e(&lStack_e0,&DAT_14c9a30e0,local_158 + 0x3c);
                          FUN_141739366(&lStack_e0,&DAT_14c9a30b0,&local_148);
                          FUN_141739366(&lStack_e0,&DAT_14c9a30c0,&local_340);
                          FUN_141739366(&lStack_e0,&DAT_14c9a30d0,&local_330);
                          uVar10 = (uchar)_local_150;
                          if ('\x04' < (char)(uchar)_local_150) {
                            uVar10 = '\x05';
                          }
                          puVar3 = (&PTR_DAT_14a17fbd0)[(char)uVar10];
                          if ((int)local_d8._4_4_ < 1) {
                            FUN_140d7698c(&lStack_e0,1);
                          }
                          uVar21 = (uint)local_d8;
                          lVar36 = (longlong)(int)(uint)local_d8;
                          local_d8._0_4_ = (uint)local_d8 + 1;
                          if (local_d8._4_4_ < (uint)local_d8) {
                            FUN_140eed74c(&lStack_e0,uVar21);
                          }
                          lVar38 = lStack_e0;
                          lVar36 = lVar36 * 0x30;
                          lVar37 = lStack_e0 + lVar36;
                          *(undefined1 *)(lStack_e0 + 0x20 + lVar36) = 0;
                          FUN_140056680(&local_c8,puVar3);
                          (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(lVar38 + 0x20 + lVar36)])(lVar37)
                          ;
                          lVar37 = local_368;
                          *(undefined8 *)(lVar38 + lVar36) = local_c8._0_8_;
                          *(undefined4 *)(lVar38 + 8 + lVar36) = local_c8.Data4._0_4_;
                          *(undefined4 *)(lVar38 + 0xc + lVar36) = local_c8.Data4._4_4_;
                          *(undefined1 *)(lVar38 + 0x20 + lVar36) = 4;
                          *(undefined8 *)(lVar38 + 0x28 + lVar36) = DAT_14c9a30a0;
                          lVar36 = (longlong)(int)uStack_360;
                          if (lVar36 != 0) {
                            lVar38 = 0;
                            do {
                              uVar32 = local_d8;
                              lVar33 = *(longlong *)(lVar37 + lVar38);
                              lVar42 = (longlong)(int)(uint)local_d8;
                              uVar21 = (uint)local_d8 + 1;
                              local_d8 = CONCAT44(local_d8._4_4_,uVar21);
                              if (local_d8._4_4_ < uVar21) {
                                FUN_140eed74c(&lStack_e0,uVar32 & 0xffffffff);
                              }
                              lVar8 = lStack_e0;
                              lVar42 = lVar42 * 0x30;
                              bVar11 = *(byte *)(lVar33 + 0x20);
                              *(byte *)(lStack_e0 + 0x20 + lVar42) = bVar11;
                              (*(code *)(&PTR_LAB_14a184290)[bVar11])(lStack_e0 + lVar42,lVar33);
                              *(undefined8 *)(lVar8 + 0x28 + lVar42) =
                                   *(undefined8 *)(lVar33 + 0x28);
                              lVar38 = lVar38 + 8;
                            } while (lVar36 * 8 != lVar38);
                          }
                          goto LAB_14027e50d;
                        }
                        FUN_1462a5546();
                        FUN_1404dce0c(&local_238,&DAT_14c9a3890);
                        bVar45 = false;
                        uVar32 = local_3a0;
                      }
                      if (local_368 != 0) {
                        FUN_1400020a8();
                      }
                      local_160 = 0;
                      if (local_168 != (undefined1 *)0x0) {
                        FUN_1400020a8();
                      }
                      uVar34 = uStack_1a0 >> 0x20;
                      uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
                      if ((int)uVar34 != 0) {
                        FUN_14472eb64(&local_1a8,0);
                      }
                      uStack_178 = 0xffffffff;
                      local_174 = 0;
                      local_180 = 0;
                      if (0x80 < local_17c) {
                        local_17c = 0x80;
                        FUN_1446efbd8(local_198,0);
                      }
                      if (local_188 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_1a8 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_1404eec70(local_358,uStack_350 & 0xffffffff);
                      if (local_358 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_340 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_330 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                      if (bVar45) {
                        iVar39 = (int)uStack_140;
                        goto LAB_14027e6c9;
                      }
                      uVar34 = local_d8 & 0xffffffff;
                      plVar14 = local_398;
                    }
                    FUN_1404eec70(lStack_e0,uVar34);
                    if (lStack_e0 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1404eecb3(lStack_f0,local_e8 & 0xffffffff);
                    if (lStack_f0 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1404eec06(&local_110);
                    (*(code *)(&PTR_FUN_14a1842f0)[local_118])(local_138);
                    plVar16 = local_380;
                    if (local_148 != (void *)0x0) {
                      FUN_1400020a8();
                      plVar16 = local_380;
                    }
                  }
                  if (((int)uStack_220 - 2U < 0x7fffffff) || (0 < (int)local_1c8)) {
LAB_14027e8b5:
                    iVar39 = *(int *)(local_390 + 0x3c);
                    *(int *)(local_390 + 0x3c) = iVar39 + 1;
                    uVar34 = (ulonglong)*(int *)(local_390 + 0x30);
                    if ((longlong)uVar34 < 1) {
                      *(int *)(local_390 + 0x3c) = iVar39;
                    }
                    else {
                      plVar14 = (longlong *)(local_390 + 0x28);
                      bVar45 = false;
                      do {
                        lVar36 = uVar34 * 0x10 + -8;
                        uVar43 = uVar34;
                        while (((*(int *)(*plVar14 + lVar36) != 0 &&
                                (plVar4 = *(longlong **)(*plVar14 + -8 + lVar36),
                                plVar4 != (longlong *)0x0)) &&
                               (cVar9 = (**(code **)(*plVar4 + 0x60))(plVar4,plVar16,&local_238),
                               cVar9 != '\0'))) {
                          lVar36 = lVar36 + -0x10;
                          bVar5 = uVar43 < 2;
                          uVar43 = uVar43 - 1;
                          if (bVar5) {
                            iVar39 = *(int *)(local_390 + 0x3c) + -1;
                            *(int *)(local_390 + 0x3c) = iVar39;
                            if (bVar45) goto LAB_14027e94c;
                            goto LAB_14027e9d5;
                          }
                        }
                        uVar34 = uVar43 - 1;
                        bVar45 = true;
                      } while (1 < uVar43);
                      iVar39 = *(int *)(local_390 + 0x3c) + -1;
                      *(int *)(local_390 + 0x3c) = iVar39;
LAB_14027e94c:
                      if (iVar39 < 1) {
                        iVar39 = *(int *)(local_390 + 0x30);
                        iVar30 = iVar39;
                        if (0 < iVar39) {
                          iVar12 = 0;
                          do {
                            if (((*(int *)(*plVar14 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                                (plVar4 = *(longlong **)(*plVar14 + (longlong)iVar12 * 0x10),
                                plVar4 == (longlong *)0x0)) ||
                               (cVar9 = (**(code **)(*plVar4 + 0x28))(), cVar9 != '\0')) {
                              FUN_14005b288(plVar14,iVar12);
                              FUN_14005b248(plVar14);
                            }
                            else {
                              iVar12 = iVar12 + 1;
                            }
                            iVar30 = *(int *)(local_390 + 0x30);
                          } while (iVar12 < iVar30);
                        }
                        uVar32 = local_3a0;
                        iVar12 = iVar30 * 2;
                        if (iVar12 < 3) {
                          iVar12 = 2;
                        }
                        *(int *)(local_390 + 0x38) = iVar12;
                        if ((iVar12 < iVar39) && (*(int *)(local_390 + 0x34) != iVar30)) {
                          FUN_14045812c(plVar14);
                        }
                      }
                    }
LAB_14027e9d5:
                    local_2c0 = local_230;
                    local_2c8 = local_238;
                    uVar7 = (undefined4)local_228;
                    local_2b8 = (undefined4)local_228;
                    uStack_2b4 = local_228._4_4_;
                    uStack_2b0 = (int)uStack_220;
                    uStack_2ac = uStack_220._4_4_;
                    local_228 = (void *)0x0;
                    uStack_220 = 0;
                    local_288 = local_1f8;
                    (*(code *)(&PTR_LAB_14a184230)[local_1f8])(uVar7,local_218);
                    plVar14 = local_398;
                    if (local_1e0 == (undefined8 *)0x0) {
                      local_280 = local_1f0;
                      uStack_278 = uStack_1e8;
                    }
                    local_270 = local_1e0;
                    local_1e0 = (undefined8 *)0x0;
                    local_268 = (int)local_1d8;
                    uStack_264 = local_1d8._4_4_;
                    uStack_260 = (undefined4)uStack_1d0;
                    uStack_25c = uStack_1d0._4_4_;
                    local_1d8 = 0x100000000;
                    uStack_1d0 = 0;
                    local_258 = (int)local_1c8;
                    uStack_254 = local_1c8._4_4_;
                    uStack_250 = (undefined4)uStack_1c0;
                    uStack_24c = uStack_1c0._4_4_;
                    local_1c8 = 0;
                    uStack_1c0 = 0;
                    local_248 = (undefined4)local_1b8;
                    uStack_244 = local_1b8._4_4_;
                    uStack_240 = (undefined4)uStack_1b0;
                    uStack_23c = uStack_1b0._4_4_;
                    local_1b8 = 0;
                    (**(code **)(*plVar16 + 0x2a0))(plVar16,&local_2c8);
                  }
                  else if (0 < (int)local_1d8) {
                    piVar17 = (int *)(local_1e0 + 1);
                    if (local_1e0 == (undefined8 *)0x0) {
                      piVar17 = (int *)&uStack_1e8;
                    }
                    if (0 < *piVar17) goto LAB_14027e8b5;
                  }
                  FUN_1404eec70(uStack_1c0,local_1b8 & 0xffffffff);
                  if (uStack_1c0 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1404eecb3(uStack_1d0,local_1c8 & 0xffffffff);
                  if (uStack_1d0 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1404eec06(&local_1f0);
                  (*(code *)(&PTR_FUN_14a1842f0)[local_1f8])(local_218);
                  if (local_228 != (void *)0x0) {
                    FUN_1400020a8();
                  }
LAB_14027eb57:
                  iVar39 = (int)local_3b0;
                  uVar35 = local_3c4;
                }
              }
            }
LAB_14027ec6a:
            uVar35 = uVar35 & ~(uint)uVar29;
            puVar15 = local_2f8;
            if (local_2f8 == (uint *)0x0) {
              puVar15 = local_308;
            }
            iVar30 = (int)uVar31;
            lVar36 = (longlong)iVar30;
            uVar21 = puVar15[lVar36] & uVar35;
            if (uVar21 == 0) {
              iVar12 = local_2f0 + 0x1e;
              if (-1 < (int)(local_2f0 - 1)) {
                iVar12 = local_2f0 - 1;
              }
              iVar12 = iVar12 >> 5;
              iVar39 = iVar39 + 0x20;
              iVar41 = iVar12;
              if (iVar12 < iVar30) {
                iVar41 = iVar30;
              }
              if (iVar30 < iVar12) {
                lVar37 = 0;
                do {
                  uVar21 = (puVar15 + lVar36 + 1)[lVar37];
                  if (uVar21 != 0) {
                    uVar31 = (ulonglong)(iVar30 + (int)lVar37 + 1);
                    uVar35 = 0xffffffff;
                    goto LAB_14027ecef;
                  }
                  iVar39 = iVar39 + 0x20;
                  lVar37 = lVar37 + 1;
                } while (iVar41 - lVar36 != lVar37);
                uVar35 = 0xffffffff;
                iVar30 = iVar41;
              }
              uVar31 = (ulonglong)(iVar30 + 1);
              plVar14 = local_398;
              uVar32 = local_3a0;
              uVar21 = local_2f0;
            }
            else {
LAB_14027ecef:
              uVar29 = (ulonglong)(-uVar21 & uVar21);
              uVar34 = uVar29 * 2 + 1;
              lVar36 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                }
              }
              uVar21 = (iVar39 - ((uint)lVar36 ^ 0x3f)) + 0x3e;
              if ((int)local_2f0 <= (int)uVar21) {
                uVar21 = local_2f0;
              }
            }
          } while (uVar21 != (uint)uVar32);
        }
      }
    }
LAB_14027fb71:
    local_2d0 = 0;
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    uVar32 = uStack_310 >> 0x20;
    uStack_310 = uStack_310 & 0xffffffff00000000;
    if ((int)uVar32 != 0) {
      FUN_14472eb64(&local_318,0);
    }
    uStack_2e8 = 0xffffffff;
    local_2e4 = 0;
    local_2f0 = 0;
    if (0x80 < local_2ec) {
      local_2ec = 0x80;
      FUN_1446efbd8(local_308,0);
    }
    if (local_2f8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_318 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014027cb9b:
  lVar33 = lVar33 + 0x38;
  if ((longlong)*(int *)(lVar37 + 0x48) * 0x38 - lVar33 == 0) goto LAB_14027ec6a;
  goto LAB_14027cb94;
}



// FUNCTION 14027fc6a FUN_14027fc6a body=1393 status=ok
// SIG undefined FUN_14027fc6a(void)

void FUN_14027fc6a(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  double dVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  float fVar21;
  ulonglong uVar22;
  byte bVar23;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  float fVar24;
  undefined1 auStack_108 [40];
  float *local_e0;
  float *local_d8;
  float *local_d0;
  ulonglong local_c8;
  float *local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 uStack_a8;
  undefined3 uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pfVar1 = param_1 + 6;
  local_c8 = 0x100000000;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_e0 = param_1;
  local_c0 = pfVar1;
  if (param_1[0xc] == 0.0) {
    uVar22 = 1;
    local_b8._0_4_ = 0xffffffff;
    fVar21 = 0.0;
    local_b8._4_4_ = 0.0;
    uVar17 = 0;
  }
  else {
    FUN_1449c0562(&local_c8);
    uVar17 = local_c8 & 0xffffffff;
    uVar22 = local_c8 >> 0x20;
    fVar21 = param_1[0xc];
  }
  pfVar9 = local_e0;
  if (local_b8._4_4_ != fVar21 || local_c0 != pfVar1) {
    local_d0 = *(float **)(local_c0 + 4);
    if (*(float **)(local_c0 + 4) == (float *)0x0) {
      local_d0 = local_c0;
    }
    fVar24 = local_c0[6];
    iVar13 = (int)fVar24 + 0x1e;
    if (-1 < (int)fVar24 + -1) {
      iVar13 = (int)fVar24 + -1;
    }
    iVar13 = iVar13 >> 5;
    local_d8 = local_d0 + 1;
    bVar23 = 0;
    uVar19 = (uint)local_b8;
    fVar12 = local_b8._4_4_;
    iVar11 = local_b0;
    do {
      iVar10 = (int)uVar17;
      if (*(int *)(*(longlong *)(local_e0 + 2) + 0x10 + (longlong)(int)fVar12 * 0x90) == 1) {
        lVar15 = (longlong)(int)fVar12 * 0x90 + *(longlong *)(local_e0 + 2);
        bVar5 = *(byte *)(lVar15 + 0x38);
        if ((bVar23 & 1) == 0) {
          if ((bVar5 & 1) != 0) {
            unaff_XMM7_Da = (undefined4)*(undefined8 *)(lVar15 + 0x18);
            unaff_XMM7_Db = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x18) >> 0x20);
            unaff_XMM6_Da = (undefined4)*(undefined8 *)(lVar15 + 0x20);
            unaff_XMM6_Db = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x20) >> 0x20);
            unaff_XMM8_Da = (undefined4)*(undefined8 *)(lVar15 + 0x28);
            unaff_XMM8_Db = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
            unaff_XMM9_Da = (undefined4)*(undefined8 *)(lVar15 + 0x30);
            unaff_XMM9_Db = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x30) >> 0x20);
            uStack_a4 = (undefined3)((uint)*(undefined4 *)(lVar15 + 0x3c) >> 8);
            uStack_a8 = *(undefined4 *)(lVar15 + 0x39);
            bVar23 = bVar5;
          }
        }
        else if ((bVar5 & 1) != 0) {
          dVar4 = *(double *)(lVar15 + 0x18);
          if (dVar4 <= (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da)) {
            unaff_XMM7_Da = SUB84(dVar4,0);
            unaff_XMM7_Db = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = *(double *)(lVar15 + 0x20);
          if (dVar4 <= (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da)) {
            unaff_XMM6_Da = SUB84(dVar4,0);
            unaff_XMM6_Db = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = *(double *)(lVar15 + 0x28);
          if ((double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) <= dVar4) {
            unaff_XMM8_Da = SUB84(dVar4,0);
            unaff_XMM8_Db = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar4 = *(double *)(lVar15 + 0x30);
          if ((double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) <= dVar4) {
            unaff_XMM9_Da = SUB84(dVar4,0);
            unaff_XMM9_Db = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
        }
      }
      uVar19 = uVar19 & ~(uint)uVar22;
      lVar15 = (longlong)iVar10;
      fVar12 = (float)((uint)local_d0[lVar15] & uVar19);
      if (fVar12 == 0.0) {
        iVar11 = iVar11 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar10) {
          iVar14 = iVar10;
        }
        if (iVar10 < iVar13) {
          lVar16 = 0;
          do {
            fVar12 = local_d8[lVar15 + lVar16];
            if (fVar12 != 0.0) {
              uVar17 = (ulonglong)(iVar10 + (int)lVar16 + 1);
              uVar19 = 0xffffffff;
              goto LAB_14027fe15;
            }
            iVar11 = iVar11 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar14 - lVar15 != lVar16);
          uVar19 = 0xffffffff;
          iVar10 = iVar14;
        }
        uVar17 = (ulonglong)(iVar10 + 1);
        fVar12 = fVar24;
      }
      else {
LAB_14027fe15:
        uVar22 = (ulonglong)(-(int)fVar12 & (uint)fVar12);
        uVar3 = uVar22 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        fVar12 = (float)((iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e);
        if ((int)fVar24 <= (int)fVar12) {
          fVar12 = fVar24;
        }
      }
    } while (fVar12 != fVar21 || local_c0 != pfVar1);
    if ((bVar23 & 1) != 0) {
      dVar8 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da) + 1000.2000122070312;
      dVar7 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) + 1000.2000122070312;
      dVar4 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) + -1000.2000122070312;
      dVar6 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + -1000.2000122070312;
      pfVar2 = local_e0 + 0x26;
      fVar24 = *local_e0;
      if (fVar24 <= 1000.0) {
        fVar24 = 1000.0;
      }
      if (*(char *)(local_e0 + 0x42) == '\x01') {
        FUN_140526ea2(pfVar2);
        fVar21 = local_e0[0xc];
      }
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      pfVar9[0x28] = 0.0;
      pfVar9[0x29] = 0.0;
      *(double *)(local_e0 + 0x32) = dVar6;
      *(double *)(local_e0 + 0x34) = dVar4;
      *(double *)(local_e0 + 0x36) = dVar7;
      *(double *)(local_e0 + 0x38) = dVar8;
      *(undefined1 *)(local_e0 + 0x3a) = 1;
      *(undefined4 *)((longlong)local_e0 + 0xe9) = uStack_a8;
      local_e0[0x3b] = (float)CONCAT31(uStack_a4,uStack_a8._3_1_);
      *(double *)(local_e0 + 0x3c) = (dVar6 + dVar7) * 0.5;
      *(double *)(local_e0 + 0x3e) = (dVar4 + dVar8) * 0.5;
      local_e0[0x40] = fVar24;
      *(undefined1 *)(local_e0 + 0x41) = 0;
      local_e0[0x2a] = 0.0;
      local_e0[0x2b] = 0.0;
      local_e0[0x2c] = 0.0;
      local_e0[0x2d] = 0.0;
      local_e0[0x2e] = 0.0;
      local_e0[0x2f] = 0.0;
      local_e0[0x30] = 0.0;
      local_e0[0x31] = 0.0;
      *(undefined1 *)(local_e0 + 0x42) = 1;
      local_c8 = 0x100000000;
      local_b8 = 0xffffffff;
      local_b0 = 0;
      if (fVar21 == 0.0) {
        uVar22 = 1;
        local_b8._0_4_ = 0xffffffff;
        fVar21 = 0.0;
        local_b8._4_4_ = 0.0;
        local_c8._0_4_ = 0;
        local_c0 = pfVar1;
      }
      else {
        local_c0 = pfVar1;
        FUN_1449c0562(&local_c8);
        uVar22 = local_c8 >> 0x20;
        fVar21 = local_e0[0xc];
      }
      pfVar9 = local_c0;
      pfVar20 = local_e0;
      iVar13 = (int)local_c8;
      uVar19 = (uint)local_b8;
      fVar24 = local_b8._4_4_;
      iVar11 = local_b0;
      if (local_b8._4_4_ != fVar21 || local_c0 != pfVar1) {
        do {
          if (*(int *)(*(longlong *)(pfVar20 + 2) + 0x10 + (longlong)(int)fVar24 * 0x90) == 1) {
            lVar15 = *(longlong *)(pfVar20 + 2) + (longlong)(int)fVar24 * 0x90;
            FUN_1402801dc(pfVar2,lVar15,lVar15 + 0x18);
            pfVar20 = local_e0;
          }
          uVar19 = uVar19 & ~(uint)uVar22;
          pfVar18 = *(float **)(pfVar9 + 4);
          if (*(float **)(pfVar9 + 4) == (float *)0x0) {
            pfVar18 = pfVar9;
          }
          fVar12 = pfVar9[6];
          lVar15 = (longlong)iVar13;
          fVar24 = (float)((uint)pfVar18[lVar15] & uVar19);
          if (fVar24 == 0.0) {
            iVar10 = (int)fVar12 + 0x1e;
            if (-1 < (int)fVar12 + -1) {
              iVar10 = (int)fVar12 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar14 = iVar10;
            if (iVar10 < iVar13) {
              iVar14 = iVar13;
            }
            if (iVar13 < iVar10) {
              lVar16 = 0;
              do {
                fVar24 = pfVar18[lVar15 + lVar16 + 1];
                if (fVar24 != 0.0) {
                  iVar13 = iVar13 + (int)lVar16 + 1;
                  uVar19 = 0xffffffff;
                  goto LAB_14028007c;
                }
                iVar11 = iVar11 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar14 - lVar15 != lVar16);
              uVar19 = 0xffffffff;
              iVar13 = iVar14;
            }
            iVar13 = iVar13 + 1;
            pfVar20 = local_e0;
            fVar24 = fVar12;
          }
          else {
LAB_14028007c:
            uVar22 = (ulonglong)(-(int)fVar24 & (uint)fVar24);
            uVar17 = uVar22 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            fVar24 = (float)((iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e);
            if ((int)fVar12 <= (int)fVar24) {
              fVar24 = fVar12;
            }
          }
        } while (fVar24 != fVar21 || pfVar9 != pfVar1);
      }
      goto LAB_1402800b5;
    }
  }
  if (*(char *)(local_e0 + 0x42) == '\x01') {
    FUN_140526ea2(local_e0 + 0x26);
    *(undefined1 *)(pfVar9 + 0x42) = 0;
  }
LAB_1402800b5:
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402801dc FUN_1402801dc body=1501 status=ok
// SIG undefined FUN_1402801dc(void)

void FUN_1402801dc(void **param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  void **ppvVar24;
  undefined4 *puVar25;
  undefined1 auStack_188 [40];
  double local_160;
  void *local_158;
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
  undefined1 local_118 [40];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar20 = FUN_1400b1070(param_1,param_3,local_118);
  if (iVar20 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_188);
  }
  if (iVar20 == 0) {
    pvVar4 = param_1[9];
    pvVar5 = param_1[7];
    dVar13 = (double)pvVar4 - (double)pvVar5;
    pvVar6 = param_1[8];
    pvVar7 = param_1[6];
    dVar11 = (double)pvVar6 - (double)pvVar7;
    iVar20 = *(int *)(param_1 + 1);
    if (3 < iVar20 &&
        (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd)) <
        dVar11 * dVar11 + dVar13 * dVar13) {
      pvVar8 = param_1[0xb];
      pvVar9 = param_1[0xc];
      dVar12 = dVar13 * 0.5 + (double)pvVar9;
      dVar14 = (double)pvVar8 - dVar11 * 0.5;
      dVar11 = dVar11 * 0.5 + (double)pvVar8;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      uVar3 = *(undefined4 *)(param_1 + 0xd);
      local_160 = (double)pvVar9 + 0.0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = dVar14;
      puVar21[7] = pvVar9;
      puVar21[8] = (double)pvVar8 + 0.0;
      puVar21[9] = dVar12;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar8 + 0.0 + dVar14) * 0.5;
      puVar21[0xc] = (dVar12 + (double)pvVar9) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      param_1[2] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar8;
      puVar21[7] = pvVar9;
      puVar21[8] = pvVar6;
      puVar21[9] = pvVar4;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar6 + (double)pvVar8) * 0.5;
      puVar21[0xc] = ((double)pvVar4 + (double)pvVar9) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[3] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar7;
      puVar21[7] = pvVar5;
      puVar21[8] = pvVar8;
      puVar21[9] = pvVar9;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar7 + (double)pvVar8) * 0.5;
      puVar21[0xc] = ((double)pvVar5 + (double)pvVar9) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[4] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      dVar13 = (double)pvVar9 - dVar13 * 0.5;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar8;
      puVar21[7] = dVar13;
      puVar21[8] = dVar11;
      puVar21[9] = local_160;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = (dVar11 + (double)pvVar8) * 0.5;
      puVar21[0xc] = (dVar13 + local_160) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[5] = puVar21;
      *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
      local_158 = (void *)0x0;
      uStack_150 = 0;
      if ((longlong)*(int *)(param_1 + 1) != 0) {
        puVar25 = *param_1;
        lVar22 = (longlong)*(int *)(param_1 + 1) * 0x30;
        do {
          iVar20 = FUN_1400b1070(param_1,puVar25,&local_148);
          if (iVar20 == 1) {
            ppvVar24 = (void **)CONCAT44(uStack_144,local_148);
            iVar20 = *(int *)(ppvVar24 + 1);
            *(uint *)(ppvVar24 + 1) = iVar20 + 1U;
            if (*(uint *)((longlong)ppvVar24 + 0xc) < iVar20 + 1U) {
LAB_1402806f1:
              FUN_14187f0b4(ppvVar24,iVar20);
            }
          }
          else {
            iVar20 = (int)uStack_150;
            uVar1 = (int)uStack_150 + 1;
            uStack_150 = CONCAT44(uStack_150._4_4_,uVar1);
            if (uStack_150._4_4_ < uVar1) {
              ppvVar24 = &local_158;
              goto LAB_1402806f1;
            }
            ppvVar24 = &local_158;
          }
          pvVar4 = *ppvVar24;
          lVar23 = (longlong)iVar20 * 0x30;
          uVar3 = *puVar25;
          uVar15 = puVar25[1];
          uVar16 = puVar25[2];
          uVar17 = puVar25[3];
          uVar10 = *(undefined8 *)(puVar25 + 4);
          uVar18 = *(undefined8 *)(puVar25 + 6);
          uVar19 = *(undefined8 *)(puVar25 + 10);
          puVar21 = (undefined8 *)((longlong)pvVar4 + lVar23 + 0x20);
          *puVar21 = *(undefined8 *)(puVar25 + 8);
          puVar21[1] = uVar19;
          puVar21 = (undefined8 *)((longlong)pvVar4 + lVar23 + 0x10);
          *puVar21 = uVar10;
          puVar21[1] = uVar18;
          puVar2 = (undefined4 *)((longlong)pvVar4 + lVar23);
          *puVar2 = uVar3;
          puVar2[1] = uVar15;
          puVar2[2] = uVar16;
          puVar2[3] = uVar17;
          puVar25 = puVar25 + 0xc;
          lVar22 = lVar22 + -0x30;
        } while (lVar22 != 0);
      }
      pvVar4 = local_158;
      if (&local_158 != param_1) {
        iVar20 = (int)uStack_150;
        lVar22 = (longlong)(int)uStack_150;
        *(int *)(param_1 + 1) = (int)uStack_150;
        if ((int)uStack_150 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_143d180f8(param_1,uStack_150 & 0xffffffff);
          if (iVar20 != 0) {
            memcpy(*param_1,pvVar4,lVar22 * 0x30);
          }
        }
      }
      if (local_158 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_1402801dc(param_1,param_2,param_3);
    }
    else {
      local_128 = *(undefined8 *)(param_3 + 8);
      local_148 = *param_3;
      uStack_144 = param_3[1];
      uStack_140 = param_3[2];
      uStack_13c = param_3[3];
      local_138 = param_3[4];
      uStack_134 = param_3[5];
      uStack_130 = param_3[6];
      uStack_12c = param_3[7];
      uVar10 = *param_2;
      *(uint *)(param_1 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
        FUN_14187f0b4(param_1);
      }
      pvVar4 = *param_1;
      lVar22 = (longlong)iVar20 * 0x30;
      *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x20) = local_128;
      puVar21 = (undefined8 *)((longlong)pvVar4 + lVar22 + 0x10);
      *puVar21 = CONCAT44(uStack_134,local_138);
      puVar21[1] = CONCAT44(uStack_12c,uStack_130);
      puVar25 = (undefined4 *)((longlong)pvVar4 + lVar22);
      *puVar25 = local_148;
      puVar25[1] = uStack_144;
      puVar25[2] = uStack_140;
      puVar25[3] = uStack_13c;
      *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x28) = uVar10;
    }
  }
  else {
    local_128 = *(undefined8 *)(param_3 + 8);
    local_148 = *param_3;
    uStack_144 = param_3[1];
    uStack_140 = param_3[2];
    uStack_13c = param_3[3];
    local_138 = param_3[4];
    uStack_134 = param_3[5];
    uStack_130 = param_3[6];
    uStack_12c = param_3[7];
    uVar10 = *param_2;
    iVar20 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar20 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
      FUN_14187f0b4(param_1,iVar20);
    }
    pvVar4 = *param_1;
    lVar22 = (longlong)iVar20 * 0x30;
    *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x20) = local_128;
    puVar21 = (undefined8 *)((longlong)pvVar4 + lVar22 + 0x10);
    *puVar21 = CONCAT44(uStack_134,local_138);
    puVar21[1] = CONCAT44(uStack_12c,uStack_130);
    puVar25 = (undefined4 *)((longlong)pvVar4 + lVar22);
    *puVar25 = local_148;
    puVar25[1] = uStack_144;
    puVar25[2] = uStack_140;
    puVar25[3] = uStack_13c;
    *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x28) = uVar10;
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140280842 FUN_140280842 body=54 status=ok
// SIG undefined FUN_140280842(void)

undefined8 * FUN_140280842(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4263e0;
  FUN_140280878(param_1 + 10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140280878 FUN_140280878 body=511 status=ok
// SIG undefined FUN_140280878(void)

void FUN_140280878(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14a427a60;
  plVar3 = (longlong *)param_1[0x1c2];
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
  if (param_1[0x1bf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b3] != 0) {
    FUN_1400020a8();
  }
  puVar5 = param_1 + 0x14d;
  lVar4 = -0x988;
  do {
    puVar5[-0x30] = &PTR_FUN_14a427bc0;
    FUN_140280aac(puVar5);
    puVar5[-0x13] = &PTR_FUN_14a42e020;
    FUN_1448d844e(puVar5[-9],*(undefined4 *)(puVar5 + -8));
    if (puVar5[-9] != 0) {
      FUN_1400020a8();
    }
    FUN_140280a77(puVar5[-0xb],*(undefined4 *)(puVar5 + -10));
    if (puVar5[-0xb] != 0) {
      FUN_1400020a8();
    }
    puVar5 = puVar5 + -0x3d;
    lVar4 = lVar4 + 0x1e8;
  } while (lVar4 != 0);
  plVar3 = param_1 + 0x26;
  if (*(int *)(param_1 + 0x27) != 0) {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 == (undefined8 *)0x0) goto LAB_14028097e;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x27) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14028097e:
  *param_1 = &PTR_FUN_14a42e670;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140280a77 FUN_140280a77 body=53 status=ok
// SIG undefined FUN_140280a77(void)

void FUN_140280a77(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140280aac FUN_140280aac body=59 status=ok
// SIG undefined FUN_140280aac(void)

void FUN_140280aac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4221c0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140280ae8 FUN_140280ae8 body=306 status=ok
// SIG undefined FUN_140280ae8(void)

undefined8 FUN_140280ae8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140280c14;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140280c14;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_140280c14:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140280bbc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140280bbc;
    }
  }
  uVar6 = 0;
LAB_140280bbc:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140280c1c FUN_140280c1c body=650 status=ok
// SIG undefined FUN_140280c1c(void)

void FUN_140280c1c(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_1403ae288(param_2);
  if ((cVar6 == '\0') || (lVar3 = *(longlong *)(param_1 + 0x180), lVar3 == 0)) {
    if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((longlong)*(int *)(lVar3 + 0x128) != 0) {
    plVar12 = *(longlong **)(lVar3 + 0x120);
    plVar10 = plVar12 + (longlong)*(int *)(lVar3 + 0x128) * 2;
    local_70 = param_1 + 0x58;
    local_78 = param_1 + 0x90;
    do {
      plVar4 = (longlong *)plVar12[1];
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *plVar12;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_140280dec;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar13 = iVar7 == iVar5;
          if (bVar13) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar13);
        if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
          *(int *)(lVar3 + 0x160) = *(int *)(lVar3 + 0x160) + 1;
          cVar6 = FUN_140280fd6(param_2,local_70);
          if (cVar6 == '\0') {
            cVar6 = FUN_140280fd6(param_2,local_78);
            lVar11 = 0x40;
            if (cVar6 != '\0') goto LAB_140280d28;
            cVar6 = FUN_140280fd6(param_2,param_1 + 200);
            lVar11 = 0x70;
            if (cVar6 != '\0') goto LAB_140280d28;
          }
          else {
            lVar11 = 0x10;
LAB_140280d28:
            iVar7 = *(int *)(lVar3 + 4 + lVar11);
            if (iVar7 == 0 || param_3 != *(float *)(lVar3 + lVar11)) {
              *(float *)(lVar3 + lVar11) = param_3;
              *(int *)(lVar3 + 4 + lVar11) = iVar7 + 1;
            }
            lVar8 = FUN_140280ec4(param_2);
            iVar7 = *(int *)(lVar3 + 0x1c + lVar11);
            if (iVar7 == 0 || *(float *)(lVar8 + 0x3c) != *(float *)(lVar3 + 0x18 + lVar11)) {
              *(float *)(lVar3 + 0x18 + lVar11) = *(float *)(lVar8 + 0x3c);
              *(int *)(lVar3 + 0x1c + lVar11) = iVar7 + 1;
            }
            local_61 = '\x04';
            uVar9 = FUN_140280ec4(param_2);
            cVar6 = FUN_140280f4a(uVar9,&local_61);
            if ((cVar6 != '\0') &&
               (iVar7 = *(int *)(lVar3 + 0x2c + lVar11),
               iVar7 == 0 || local_61 != *(char *)(lVar3 + 0x28 + lVar11))) {
              *(char *)(lVar3 + 0x28 + lVar11) = local_61;
              *(int *)(lVar3 + 0x2c + lVar11) = iVar7 + 1;
            }
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x168));
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
LAB_140280dec:
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar10);
  }
  FUN_1402811b8(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
}



// FUNCTION 140280ec4 FUN_140280ec4 body=134 status=ok
// SIG undefined FUN_140280ec4(void)

undefined8 FUN_140280ec4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  lVar7 = (ulonglong)*(byte *)(param_1 + 0x1c) * 0x10;
  plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 8 + lVar7);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x18) + lVar7);
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    iVar5 = (int)plVar2[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar5 == 0) break;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar8 = plVar2;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) {
        return uVar3;
      }
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return uVar3;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140280f4a FUN_140280f4a body=139 status=ok
// SIG undefined FUN_140280f4a(void)

undefined8 FUN_140280f4a(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x18) != '\x01')) {
    fVar5 = *(float *)(param_1 + 0x30);
    fVar6 = fVar5;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x30);
    auVar7 = roundps(ZEXT416(*(uint *)(param_1 + 0x30)),ZEXT416(*(uint *)(param_1 + 0x30)),3);
    fVar6 = auVar7._0_4_;
  }
  fVar1 = *(float *)(param_1 + 200);
  if ((0.0001 <= ABS(fVar1 - *(float *)(param_1 + 0x24))) || (fVar5 <= fVar1)) {
    uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
    if (ABS(fVar1 - fVar6) < 0.0001) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
      if (*(char *)(param_1 + 0x12f) == '\0') {
        if (*(char *)(param_1 + 0x130) != '\x01') {
          return 0;
        }
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
  }
  *param_2 = uVar3;
  return CONCAT71(uVar4,1);
}



// FUNCTION 140280fd6 FUN_140280fd6 body=482 status=ok
// SIG undefined FUN_140280fd6(void)

bool FUN_140280fd6(uint *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((byte)((byte)param_2[7] & (byte)param_1[7]) == 0xff) {
    return true;
  }
  if (*(longlong **)(param_1 + 2) == (longlong *)0x0) {
    return false;
  }
  if (param_1[1] == 0) {
    return false;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    return false;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return false;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return false;
  }
  if (*(uint *)(lVar3 + 0x10) != param_1[1]) {
    return false;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return false;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
  cVar2 = FUN_14486eb0e(uVar4,param_1);
  if (cVar2 == '\0') {
    return false;
  }
  if (*(longlong **)(param_2 + 2) == (longlong *)0x0) {
    return false;
  }
  if (param_2[1] == 0) {
    return false;
  }
  uVar1 = *param_2;
  if ((int)uVar1 < 0) {
    return false;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return false;
  }
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar3 == 0) {
    return false;
  }
  if (*(uint *)(lVar3 + 0x10) != param_2[1]) {
    return false;
  }
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
    return false;
  }
  uVar4 = (**(code **)(**(longlong **)(param_2 + 2) + 0x10))();
  cVar2 = FUN_14486eb0e(uVar4);
  if (cVar2 == '\0') {
    return false;
  }
  if ((char)param_1[7] != (char)param_2[7]) {
    return false;
  }
  if (param_1[1] == 0) {
LAB_1402811b0:
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         ((*(uint *)(plVar5 + 2) != param_1[1] || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
      goto LAB_1402811b0;
      lVar3 = *plVar5;
    }
  }
  if (param_2[1] != 0) {
    uVar1 = *param_2;
    lVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140281193;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((*(uint *)(plVar5 + 2) == param_2[1] && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      lVar6 = *plVar5;
      goto LAB_140281193;
    }
  }
  lVar6 = 0;
LAB_140281193:
  if (lVar3 != lVar6) {
    return false;
  }
  return param_1[6] == param_2[6];
}



// FUNCTION 1402811b8 FUN_1402811b8 body=622 status=ok
// SIG undefined FUN_1402811b8(void)

void FUN_1402811b8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[4];
  if (lVar4 == 0) goto LAB_140281334;
  if (DAT_14cba8288 == 0) {
    local_50 = &local_38;
    local_38 = FUN_141864c34;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464cee30;
    local_58 = &LAB_148bfac22;
    local_60 = &LAB_140f21842;
    local_68 = &DAT_149e063b2;
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140281334;
  lVar2 = FUN_14028150e();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar2 != 0) goto LAB_140281242;
LAB_1402813f8:
    lVar5 = 0;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_140281242:
    lVar3 = FUN_14028150e();
    if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) goto LAB_1402813f8;
    lVar5 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      lVar5 = lVar2;
    }
  }
  lVar2 = FUN_1448a6f9c(lVar4 + 0x9050,lVar5);
  if (lVar2 != 0) {
    FUN_140281b1c(lVar2,lVar4);
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x1f0), lVar4 != 0)) &&
     (iVar1 = *(int *)(lVar4 + 0x40), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x38);
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(lVar4 + lVar2);
      if (lVar3 != 0) {
        lVar5 = FUN_140281428();
        if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
          if (lVar5 != 0) goto LAB_1402812f0;
LAB_140281311:
          lVar5 = 0;
        }
        else {
          FUN_1456cec3c(lVar5);
LAB_1402812f0:
          lVar6 = FUN_140281428();
          if (((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
              lVar6 + 0x30)) goto LAB_140281311;
        }
        lVar3 = FUN_1448a6f9c(lVar3 + 0x138,lVar5);
        if (lVar3 != 0) {
          FUN_1402817ba(lVar3);
        }
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar1 * 8 != lVar2);
  }
LAB_140281334:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140281428 FUN_140281428 body=228 status=ok
// SIG undefined FUN_140281428(void)

longlong FUN_140281428(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb2740 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c59519;
    local_40 = FUN_1465f65f3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Nameplate",&DAT_14cbb2740,FUN_1465f65cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2740;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028150e FUN_14028150e body=228 status=ok
// SIG undefined FUN_14028150e(void)

longlong FUN_14028150e(void)

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
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb2ee0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465c56e4;
    local_28 = &LAB_1458f3280;
    local_38 = &LAB_148c5a9b9;
    local_40 = FUN_1418d0d86;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_OverheadNP",&DAT_14cbb2ee0,FUN_1465f6f9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2ee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402815f4 FUN_1402815f4 body=107 status=ok
// SIG undefined FUN_1402815f4(void)

undefined8 FUN_1402815f4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1448d5e3c(param_2,param_1 + 0x54);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  local_14 = 0;
  FUN_1448d5e3c(param_2);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140281660 FUN_140281660 body=115 status=ok
// SIG undefined FUN_140281660(void)

void FUN_140281660(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_1402816d4();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 != 0) goto LAB_14028168b;
  }
  else {
    FUN_1456cec3c(lVar1);
LAB_14028168b:
    lVar2 = FUN_1402816d4();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
      goto LAB_1402816b0;
    }
  }
  lVar3 = 0;
LAB_1402816b0:
  FUN_1448a6f9c(param_1 + 0x138,lVar3);
  return;
}



// FUNCTION 1402816d4 FUN_1402816d4 body=228 status=ok
// SIG undefined FUN_1402816d4(void)

longlong FUN_1402816d4(void)

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
  if (DAT_14cbb1cd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_1411b127e;
    local_38 = &LAB_148c5394a;
    local_40 = &LAB_145acf52e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_BossBar",&DAT_14cbb1cd0,FUN_1465f3f4e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb1cd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402817ba FUN_1402817ba body=841 status=ok
// SIG undefined FUN_1402817ba(void)

void FUN_1402817ba(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(int *)(param_1 + 0xcc) == 0) || (uVar2 = *(uint *)(param_1 + 200), (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) {
LAB_140281985:
    if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0xcc))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_140281985;
  lVar7 = FUN_1400f3ad8(param_1 + 0x44);
  if ((lVar7 == 0) || (plVar5 = *(longlong **)(lVar7 + 0x3d0), plVar5 == (longlong *)0x0))
  goto LAB_140281985;
  if (DAT_14cb223d8 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_147f29feb;
    local_70 = FUN_1464384fe;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb223d8);
  if (plVar5 == (longlong *)0x0) goto LAB_140281985;
  if (DAT_14cb223d8 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_147f29feb;
    local_70 = FUN_1464384fe;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb223d8);
  if ((plVar5 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_140281985;
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (lVar7 == 0) goto LAB_140281985;
  FUN_1402815f4(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0xb0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x88));
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    uVar2 = *(uint *)(param_1 + 200);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14028194f;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar9 != (undefined8 *)0x0) &&
       ((*(int *)(puVar9 + 2) == *(int *)(param_1 + 0xcc) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      uVar8 = *puVar9;
      goto LAB_14028194f;
    }
  }
  uVar8 = 0;
LAB_14028194f:
  iVar4 = FUN_14486116a(lVar7,uVar8);
  if (*(int *)(lVar3 + 0x34) != iVar4) {
    *(int *)(lVar3 + 0x34) = iVar4;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
}



// FUNCTION 140281b1c FUN_140281b1c body=1275 status=ok
// SIG undefined FUN_140281b1c(void)

void FUN_140281b1c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar4[2] + 0x38)) && (plVar4 == param_2)) &&
         (*(longlong *)
           (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
          DAT_14cba8288 + 0x30)) && ((char)plVar4[0xffd] != '\0')) &&
       (((char)plVar4[0xffd] == '\x01' ||
        ((plVar4[0x7ee] != 0 && (*(char *)(plVar4[0x7ee] + 0x1088) == '\x01')))))) {
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_58,uVar7);
      plVar5 = *(longlong **)local_58;
      AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 9));
      plVar9 = local_50;
      *(int *)(plVar5 + 8) = (int)plVar5[8] + 1;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar2 = *(uint *)(plVar5 + 1);
      if (0 < (int)uVar2) {
        lVar14 = *plVar5;
        iVar13 = (int)plVar5[2] + 2;
        iVar15 = 0;
        lVar12 = 0;
        do {
          uVar3 = *(uint *)((longlong)plVar4 + 0xc);
          *(int *)(plVar5 + 2) = iVar13 + -1;
          if (*(ulonglong *)(lVar14 + 0x38 + lVar12) == (ulonglong)uVar3) {
            if ((int)uVar2 <= iVar15) break;
            bVar16 = *(char *)((longlong)plVar4 + 0x73eb) == '\x01';
            *(int *)(plVar5 + 2) = iVar13;
            iVar15 = *(int *)(lVar14 + 0x54 + lVar12);
            if ((bool)*(char *)(lVar14 + 0x50 + lVar12) == bVar16) {
              if (iVar15 == 0) {
                iVar15 = 1;
                goto LAB_140281d51;
              }
            }
            else {
              iVar15 = iVar15 + 1;
LAB_140281d51:
              *(bool *)(lVar14 + 0x50 + lVar12) = bVar16;
              *(int *)(lVar14 + 0x54 + lVar12) = iVar15;
              iVar13 = (int)plVar5[2];
              lVar14 = *plVar5;
            }
            bVar16 = *(char *)((longlong)plVar4 + 0x73ed) == '\x01';
            iVar13 = iVar13 + 1;
            *(int *)(plVar5 + 2) = iVar13;
            iVar15 = *(int *)(lVar14 + 0x5c + lVar12);
            if ((bool)*(char *)(lVar14 + 0x58 + lVar12) == bVar16) {
              if (iVar15 == 0) {
                iVar15 = 1;
                goto LAB_140281d6b;
              }
            }
            else {
              iVar15 = iVar15 + 1;
LAB_140281d6b:
              *(bool *)(lVar14 + 0x58 + lVar12) = bVar16;
              *(int *)(lVar14 + 0x5c + lVar12) = iVar15;
              iVar13 = (int)plVar5[2];
              lVar14 = *plVar5;
            }
            *(int *)(plVar5 + 2) = iVar13 + 1;
            iVar13 = *(int *)(lVar14 + 0xdc + lVar12);
            if (*(char *)(lVar14 + 0xd8 + lVar12) == '\0') {
              if (iVar13 != 0) break;
              iVar13 = 1;
            }
            else {
              iVar13 = iVar13 + 1;
            }
            *(undefined1 *)(lVar14 + 0xd8 + lVar12) = 0;
            *(int *)(lVar14 + 0xdc + lVar12) = iVar13;
            break;
          }
          iVar13 = iVar13 + 1;
          lVar12 = lVar12 + 0x120;
          iVar15 = iVar15 + 1;
        } while ((ulonglong)uVar2 * 0x120 != lVar12);
      }
      cVar6 = FUN_1449ce79a(plVar4);
      if ((cVar6 == '\0') && (0 < (int)plVar5[4])) {
        lVar14 = 0;
        lVar12 = 0;
        do {
          uVar2 = *(uint *)((longlong)plVar4 + 0xc);
          *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
          if ((*(ulonglong *)(plVar5[3] + lVar14) == (ulonglong)uVar2) &&
             (lVar8 = FUN_14011be0c(param_1 + 6), lVar8 != 0)) {
            uVar7 = FUN_140eaf18a();
            plVar9 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar7);
            if (plVar9 != (longlong *)0x0) {
              uVar7 = FUN_140eaf18a();
              plVar10 = (longlong *)FUN_144718840(plVar9,uVar7);
              if ((plVar10 != (longlong *)0x0 && plVar9 != plVar10) &&
                 (lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar11 != 0)) {
                *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
                switch(*(undefined4 *)(plVar5[3] + 0x10 + lVar14)) {
                case 0:
                  FUN_1403adc5e(&local_58,lVar8);
                  *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
                  lVar8 = plVar5[3];
                  *(longlong *)(lVar8 + 0x18 + lVar14) = *(longlong *)(local_58 + 0x5c0);
                  plVar9 = *(longlong **)(local_58 + 0x5c8);
                  break;
                case 1:
                  FUN_1403adc5e(&local_58,lVar8);
                  *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
                  lVar8 = plVar5[3];
                  *(longlong *)(lVar8 + 0x18 + lVar14) = *(longlong *)(local_58 + 0x5d0);
                  plVar9 = *(longlong **)(local_58 + 0x5d8);
                  break;
                case 2:
                  FUN_1403adc5e(&local_58,lVar8);
                  *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
                  lVar8 = plVar5[3];
                  *(longlong *)(lVar8 + 0x18 + lVar14) = *(longlong *)(local_58 + 0x5e0);
                  plVar9 = *(longlong **)(local_58 + 0x5e8);
                  break;
                case 3:
                  FUN_1403adc5e(&local_58,lVar8);
                  *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
                  lVar8 = plVar5[3];
                  *(longlong *)(lVar8 + 0x18 + lVar14) = *(longlong *)(local_58 + 0x5f0);
                  plVar9 = *(longlong **)(local_58 + 0x5f8);
                  break;
                default:
                  goto switchD_140281ef6_default;
                }
                plVar10 = *(longlong **)(lVar8 + 0x20 + lVar14);
                if (plVar10 != plVar9) {
                  if (plVar9 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
                    UNLOCK();
                    plVar10 = *(longlong **)(lVar8 + 0x20 + lVar14);
                  }
                  if (plVar10 != (longlong *)0x0) {
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar10 + 0x10))();
                    }
                  }
                  *(longlong **)(lVar8 + 0x20 + lVar14) = plVar9;
                }
                plVar9 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_50 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
                    (**(code **)*local_50)(local_50);
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
            }
          }
switchD_140281ef6_default:
          lVar12 = lVar12 + 1;
          lVar14 = lVar14 + 0x28;
        } while (lVar12 < (int)plVar5[4]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140282036 FUN_140282036 body=107 status=ok
// SIG undefined FUN_140282036(void)

void FUN_140282036(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = *param_2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_1[2] == 0) {
      param_1[1] = (longlong)puVar1;
    }
    else {
      *(undefined8 **)(param_1[2] + 8) = puVar1;
      puVar1[2] = param_1[2];
    }
    param_1[2] = (longlong)puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140282091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 1402820a2 FUN_1402820a2 body=4 status=ok
// SIG undefined FUN_1402820a2(void)

void FUN_1402820a2(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1402820a6 FUN_1402820a6 body=52 status=ok
// SIG undefined FUN_1402820a6(void)

void FUN_1402820a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1402820da(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402820da FUN_1402820da body=66 status=ok
// SIG undefined FUN_1402820da(void)

void FUN_1402820da(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_1401cb1ee(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14028211c FUN_14028211c body=52 status=ok
// SIG undefined FUN_14028211c(void)

void FUN_14028211c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14028218c(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140282150 FUN_140282150 body=60 status=ok
// SIG undefined FUN_140282150(void)

void FUN_140282150(longlong param_1,int param_2)

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



// FUNCTION 14028218c FUN_14028218c body=122 status=ok
// SIG undefined FUN_14028218c(void)

void FUN_14028218c(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        if ((int)plVar1[1] == 0) {
LAB_1402821ba:
          if (*plVar1 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar2 = (undefined8 *)*plVar1;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72(plVar1,0,0,0x10);
            *(undefined4 *)(plVar1 + 1) = 0;
            goto LAB_1402821ba;
          }
        }
        FUN_1400020a8(plVar1);
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 140282206 FUN_140282206 body=194 status=ok
// SIG undefined FUN_140282206(void)

void FUN_140282206(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *param_2;
      if ((((*(byte *)(lVar1 + 0x125b0 + lVar4) & 2) == 0) &&
          (*(char *)(lVar1 + 0x30c8 + lVar4) == '\0')) &&
         (((*(char *)(lVar1 + 0x23f2 + lVar4) == '\0' &&
           (*(char *)(lVar1 + 0x23f5 + lVar4) != '\x01')) || (*(int *)(lVar1 + 0x1dd0 + lVar4) != 2)
          ))) {
        local_48 = *param_3;
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        FUN_1402822c9(param_1,lVar1 + lVar4,&local_48);
        iVar2 = (int)param_2[1];
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x13c10;
    } while (lVar3 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402822c9 FUN_1402822c9 body=830 status=ok
// SIG undefined FUN_1402822c9(void)

void FUN_1402822c9(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  ulonglong local_98;
  undefined8 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *param_3;
  bVar2 = *(byte *)(lVar5 + 0x91);
  if (((bVar2 != 1) && (lVar5 != param_3[1])) && ((*(byte *)(lVar5 + 0x61) & 0x10) == 0)) {
    local_70 = *(ulonglong *)(param_2 + 0x13b88);
    uVar4 = *(ulonglong *)(param_2 + 0x13b90);
    local_78 = local_70 >> 0x20;
    local_80 = uVar4 >> 0x20;
    local_88 = *(undefined8 *)(param_3[1] + 0x84);
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar8 + 0x26;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(puVar1,0x140);
      puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar6 = puVar8 + 0x26;
    }
    *puVar1 = (ulonglong)puVar6;
    *puVar8 = &PTR_FUN_14a2f1708;
    local_90 = puVar8 + 2;
    *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar8 + 4) = 0;
    lVar5 = 0x42;
    do {
      *(undefined1 (*) [16])((longlong)puVar8 + lVar5 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar8 + lVar5 + -2) = 0xffff0000;
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != 0x102);
    *(undefined4 *)((longlong)puVar8 + 0x104) = 0;
    *(undefined1 (*) [16])(puVar8 + 0x1e) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar8 + 0x20) = 0;
    *(undefined4 *)(puVar8 + 0x21) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0x10c) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x22) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0x114) = 0xffffffff;
    *(undefined4 *)(puVar8 + 0x23) = 0;
    *(undefined2 *)((longlong)puVar8 + 0x11c) = 0;
    puVar8[0x24] = 0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    local_98 = uVar4;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
    }
    uVar4 = local_98;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar8;
    lVar5 = *param_3;
    if (lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0xac);
    }
    puVar8[2] = lVar5;
    puVar8[3] = uVar7;
    *(undefined4 *)(puVar8 + 4) = 0x60;
    puVar8[0x1e] = param_3[1];
    puVar8[0x1f] = 0;
    *(undefined2 *)(puVar8 + 0x20) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x104) = 0x22;
    lVar5 = *param_3;
    FUN_1472e0dcc();
    FUN_140069376(param_1);
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar8 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar8 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar6;
    local_60 = local_90;
    local_58 = DAT_14ca474c0;
    if (DAT_14ca474c0 != 0) {
      LOCK();
      *(int *)(DAT_14ca474c0 + 8) = *(int *)(DAT_14ca474c0 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca47478;
    local_a8 = 2;
    FUN_140068f1a(puVar8,&local_61,&local_60,1);
    *puVar8 = &PTR_FUN_14a2f1740;
    puVar8[0x37] = param_2;
    puVar8[0x38] = lVar5;
    *(uint *)(puVar8 + 0x39) = (uint)bVar2;
    *(undefined8 *)((longlong)puVar8 + 0x1cc) = local_88;
    *(int *)((longlong)puVar8 + 0x1d4) = (int)local_70;
    *(int *)(puVar8 + 0x3b) = (int)local_78;
    *(int *)((longlong)puVar8 + 0x1dc) = (int)uVar4;
    *(int *)(puVar8 + 0x3c) = (int)local_80;
    iVar3 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar8;
    *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140282608 FUN_140282608 body=348 status=ok
// SIG undefined FUN_140282608(void)

void FUN_140282608(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Buf1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140282870(&local_68);
  plVar6 = (longlong *)(DAT_14ca8c090 + 0x10);
  if (local_68 != 0) {
    plVar6 = &local_68;
  }
  local_48 = *plVar6;
  plVar6 = (longlong *)(DAT_14ca8c008 + 0x10);
  if (local_60 != 0) {
    plVar6 = &local_60;
  }
  local_40 = *plVar6;
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_68 != 0) {
    LOCK();
    puVar1 = (uint *)(local_68 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar7 = FUN_140282766();
  lVar4 = DAT_14ca4b2f0;
  lVar8 = (longlong)DAT_14ca6dc00;
  lVar9 = param_3 + 0x10;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    lVar9 = *(longlong *)(param_3 + 0x20);
  }
  iVar3 = *(int *)(lVar7 + 0x3c);
  iVar5 = DAT_14ca6dc00 + 0x1f;
  if (-1 < lVar8) {
    iVar5 = DAT_14ca6dc00;
  }
  puVar1 = (uint *)(lVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)DAT_14ca6dc00 & 0x1f);
  _Buf1 = (void *)((longlong)*(int *)(lVar4 + 4 + lVar8 * 0x60) + *(longlong *)(param_3 + 0x30));
  iVar5 = memcmp(_Buf1,&local_48,(longlong)iVar3);
  if (iVar5 != 0) {
    *(undefined1 *)(param_3 + 8) = 1;
    memcpy(_Buf1,&local_48,(longlong)iVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140282766 FUN_140282766 body=265 status=ok
// SIG undefined FUN_140282766(void)

undefined * FUN_140282766(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca718b8) {
    FUN_144b3d300(&DAT_14ca718b8);
    if (DAT_14ca718b8 == -1) {
      FUN_1456ec852(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMeshPaintTextureParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca71838,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143130d87);
      _Init_thread_footer(&DAT_14ca718b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca71838;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140282870 FUN_140282870 body=371 status=ok
// SIG undefined FUN_140282870(void)

/* WARNING: Removing unreachable block (ram,0x0001402828eb) */
/* WARNING: Removing unreachable block (ram,0x00014028294a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140282870(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  
  lVar3 = DAT_14cb0f758;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar9 = 0;
  }
  else if (iVar2 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar9 = 1;
  }
  if (*(char *)(lVar3 + uVar9) == '\x01') {
    DVar7 = GetCurrentThreadId();
    if ((DAT_14cb0f868 & 1) == 0) {
      DAT_14cb0f868 = DAT_14cb0f868 | 1;
      LOCK();
      UNLOCK();
      DAT_14cb0f86c = DVar7;
    }
    else if (DAT_14cb0f86c == DVar7) {
      LOCK();
      DAT_14cb0f868 = DAT_14cb0f868 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(&DAT_14cb0f868,DAT_14cb0f868);
    }
    lVar3 = DAT_14cb0f848;
    *param_1 = DAT_14cb0f848;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar3 = DAT_14cb0f850;
    param_1[1] = DAT_14cb0f850;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar6 = _DAT_14cb0f864;
    uVar5 = _DAT_14cb0f860;
    uVar4 = _DAT_14cb0f85c;
    *(undefined4 *)(param_1 + 2) = _DAT_14cb0f858;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    if (DAT_14cb0f868 < 4) {
      DAT_14cb0f86c = 0;
      if (DAT_14cb0f868 < 2) {
        LOCK();
        DAT_14cb0f868 = 0;
        UNLOCK();
      }
      else {
        FUN_140d366d2(&DAT_14cb0f868);
      }
    }
    else {
      LOCK();
      DAT_14cb0f868 = DAT_14cb0f868 - 4;
      UNLOCK();
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
  }
  return param_1;
}



// FUNCTION 1402829e4 FUN_1402829e4 body=12 status=ok
// SIG undefined FUN_1402829e4(void)

void FUN_1402829e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001402829ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1402829f0 FUN_1402829f0 body=31 status=ok
// SIG undefined FUN_1402829f0(void)

undefined8 FUN_1402829f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140282a1c FUN_140282a1c body=31 status=ok
// SIG undefined FUN_140282a1c(void)

undefined8 FUN_140282a1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140282a3c FUN_140282a3c body=145 status=ok
// SIG undefined FUN_140282a3c(void)

undefined8 * FUN_140282a3c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x10000;
  param_1[3] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x800000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0x800000000;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = &PTR_LAB_149e01e20;
  param_1[0x3f] = &DAT_142840532;
  param_1[0x3a] = FUN_140d11fbe;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_140282ace(param_1);
  return param_1;
}



// FUNCTION 140282ace FUN_140282ace body=411 status=ok
// SIG undefined FUN_140282ace(void)

void FUN_140282ace(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD dwTlsIndex;
  DWORD DVar3;
  LPVOID lpTlsValue;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar3 = 0xffffffff;
    LOCK();
    bVar4 = DAT_14c75ec34 != 0xffffffff;
    DVar2 = dwTlsIndex;
    if (bVar4) {
      DVar3 = DAT_14c75ec34;
      DVar2 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar2;
    UNLOCK();
    if (bVar4) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar3;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  *(int *)((longlong)lpTlsValue + 0x28) = *(int *)((longlong)lpTlsValue + 0x28) + 1;
  param_1[0x38] = *(longlong *)((longlong)lpTlsValue + 0x30);
  *(longlong *)((longlong)lpTlsValue + 0x30) = *param_1;
  iVar1 = *(int *)((longlong)lpTlsValue + 0x18);
  *(uint *)((longlong)lpTlsValue + 0x18) = iVar1 + 1U;
  if (*(uint *)((longlong)lpTlsValue + 0x1c) < iVar1 + 1U) {
    FUN_145f3c800((longlong *)((longlong)lpTlsValue + 0x10),iVar1);
  }
  *(longlong **)(*(longlong *)((longlong)lpTlsValue + 0x10) + (longlong)iVar1 * 8) = param_1;
  if (*param_1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c96413c) && (FUN_144b3d300(&DAT_14c96413c), DAT_14c96413c == -1)) {
      local_38 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bAllowNativeComponentClassOverrides",&local_29);
      DAT_14c964138 = local_29;
      _Init_thread_footer(&DAT_14c96413c);
    }
    if (DAT_14c964138 == '\x01') {
      (**(code **)(**(longlong **)(*param_1 + 0x10) + 0x378))
                (*(longlong **)(*param_1 + 0x10),param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140282c6a FUN_140282c6a body=327 status=ok
// SIG undefined FUN_140282c6a(void)

undefined4 *
FUN_140282c6a(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140282ece(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140282db2(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14028318a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140282db2 FUN_140282db2 body=146 status=ok
// SIG undefined FUN_140282db2(void)

void FUN_140282db2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_140282e44(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_140282e33;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_140282e33:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140282e44 FUN_140282e44 body=138 status=ok
// SIG undefined FUN_140282e44(void)

void FUN_140282e44(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 140282ece FUN_140282ece body=699 status=ok
// SIG undefined FUN_140282ece(void)

int * FUN_140282ece(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
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
      FUN_1446efaca(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402830a3;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_1402830a3:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14028318a FUN_14028318a body=679 status=ok
// SIG undefined FUN_14028318a(void)

void FUN_14028318a(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402831ee;
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
LAB_1402831ee:
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
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 140283432 FUN_140283432 body=356 status=ok
// SIG undefined FUN_140283432(void)

undefined4 *
FUN_140283432(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140283634(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140283598(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140283902(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140283598 FUN_140283598 body=156 status=ok
// SIG undefined FUN_140283598(void)

void FUN_140283598(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_146865a7a(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_140283602;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_140283602:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140283634 FUN_140283634 body=718 status=ok
// SIG undefined FUN_140283634(void)

int * FUN_140283634(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402837e7;
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
LAB_1402837e7:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x14);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140283902 FUN_140283902 body=679 status=ok
// SIG undefined FUN_140283902(void)

void FUN_140283902(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140283977;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140283977:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x14);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x10 + lVar15 * 0x14) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0xc + lVar15 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 140283bc2 FUN_140283bc2 body=743 status=ok
// SIG undefined FUN_140283bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140283bc2(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  double dVar3;
  
  dVar11 = DAT_14c8463e8;
  dVar5 = *param_2;
  dVar6 = param_2[1];
  if (((9.999999747378752e-05 < ABS(dVar5)) || (9.999999747378752e-05 < ABS(dVar6))) ||
     (9.999999747378752e-05 < ABS(param_2[2]))) {
    dVar11 = param_2[2];
    dVar10 = dVar11 * dVar11 + dVar5 * dVar5 + dVar6 * dVar6;
    if (((dVar10 != 1.0) || (dVar15 = dVar5, dVar7 = dVar11, dVar12 = dVar6, NAN(dVar10))) &&
       (dVar15 = DAT_14c8464e0, dVar7 = DAT_14c8464f0, dVar12 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar10)) {
      dVar10 = 1.0 / SQRT(dVar10);
      dVar15 = dVar5 * dVar10;
      dVar7 = dVar11 * dVar10;
      dVar12 = dVar6 * dVar10;
    }
    dVar11 = param_1[2] * dVar7 + *param_1 * dVar15 + param_1[1] * dVar12;
    dVar7 = dVar7 * dVar11;
    dVar12 = dVar12 * dVar11;
    dVar11 = dVar11 * dVar15;
    dVar5 = param_1[3];
    *param_4 = dVar11;
    param_4[1] = dVar12;
    param_4[2] = dVar7;
    param_4[3] = dVar5;
    dVar6 = DAT_14c8463d8;
    dVar5 = dVar5 * dVar5 + dVar7 * dVar7 + dVar11 * dVar11 + dVar12 * dVar12;
    if ((dVar5 != 0.0) || (NAN(dVar5))) {
      dVar5 = *param_4;
      dVar6 = param_4[1];
      dVar11 = param_4[2];
      dVar10 = param_4[3];
      dVar12 = dVar11 * dVar11 + dVar5 * dVar5;
      dVar15 = dVar10 * dVar10 + dVar6 * dVar6;
      auVar13._0_8_ = dVar12 + dVar15;
      auVar13._8_8_ = dVar12 + dVar15;
      uVar4 = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
      auVar14 = sqrtpd(auVar13,auVar13);
      auVar14 = divpd(_DAT_149934d80,auVar14);
      auVar16._0_8_ = auVar14._0_8_ * dVar11;
      auVar16._8_8_ = auVar14._8_8_ * dVar10;
      dVar5 = (double)((ulonglong)(dVar5 * auVar14._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_));
      dVar6 = (double)((ulonglong)(dVar6 * auVar14._8_8_) & uVar4);
      *param_4 = dVar5;
      param_4[1] = dVar6;
      auVar14._8_4_ = (int)uVar4;
      auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
      auVar14._12_4_ = (int)(uVar4 >> 0x20);
      auVar14 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar14);
      *(undefined1 (*) [16])(param_4 + 2) = auVar14;
    }
    else {
      *param_4 = DAT_14c8463d0;
      param_4[1] = dVar6;
      dVar5 = DAT_14c8463e8;
      param_4[2] = DAT_14c8463e0;
      param_4[3] = dVar5;
      dVar5 = *param_4;
      dVar6 = param_4[1];
      auVar14 = *(undefined1 (*) [16])(param_4 + 2);
    }
    dVar8 = auVar14._0_8_ * -1.0;
    dVar9 = auVar14._8_8_ * 1.0;
    dVar10 = param_1[3];
    dVar11 = param_1[3];
    dVar15 = *param_1;
    dVar12 = *param_1;
    dVar7 = param_1[1];
    dVar1 = param_1[1];
    dVar2 = param_1[2];
    dVar3 = param_1[2];
    *param_3 = (dVar8 * dVar7 + (dVar9 * dVar15 * 1.0 - dVar10 * dVar5)) - dVar6 * dVar2 * -1.0;
    param_3[1] = (dVar9 * dVar1 + (dVar8 * dVar12 * -1.0 - dVar11 * dVar6)) - dVar5 * dVar3 * 1.0;
    param_3[2] = dVar9 * dVar2 * 1.0 + dVar5 * dVar7 + (dVar8 * dVar10 - dVar15 * dVar6 * 1.0);
    param_3[3] = dVar8 * dVar3 * -1.0 + dVar6 * dVar1 + (dVar9 * dVar11 - dVar12 * dVar5 * -1.0);
  }
  else {
    param_4[2] = DAT_14c8463e0;
    param_4[3] = dVar11;
    dVar5 = DAT_14c8463d8;
    *param_4 = DAT_14c8463d0;
    param_4[1] = dVar5;
    dVar11 = DAT_14c8463e8;
    dVar6 = DAT_14c8463d8;
    dVar5 = DAT_14c8463d0;
    param_3[2] = DAT_14c8463e0;
    param_3[3] = dVar11;
    *param_3 = dVar5;
    param_3[1] = dVar6;
  }
  return;
}



// FUNCTION 140283eaa FUN_140283eaa body=126 status=ok
// SIG undefined FUN_140283eaa(void)

void FUN_140283eaa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140283f34 FUN_140283f34 body=31 status=ok
// SIG undefined FUN_140283f34(void)

undefined8 FUN_140283f34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140283f54 FUN_140283f54 body=305 status=ok
// SIG undefined FUN_140283f54(void)

undefined4 *
FUN_140283f54(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14028411c(param_1,local_58);
  puVar1 = (undefined4 *)param_4[1];
  *local_50 = *(undefined4 *)*param_4;
  local_50[1] = *puVar1;
  local_50[2] = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_140284086(param_1,param_3,local_50,local_58);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_50[3] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_50[2] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402843ec(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140284086 FUN_140284086 body=149 status=ok
// SIG undefined FUN_140284086(void)

void FUN_140284086(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1456eca48(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_1402840f1;
        }
        iVar4 = *(int *)(puVar1 + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_1402840f1:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 14028411c FUN_14028411c body=719 status=ok
// SIG undefined FUN_14028411c(void)

int * FUN_14028411c(longlong *param_1,int *param_2)

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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402842cf;
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
LAB_1402842cf:
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



// FUNCTION 1402843ec FUN_1402843ec body=628 status=ok
// SIG undefined FUN_1402843ec(void)

void FUN_1402843ec(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14028445e;
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
LAB_14028445e:
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



// FUNCTION 140284660 FUN_140284660 body=73 status=ok
// SIG undefined FUN_140284660(void)

void FUN_140284660(longlong param_1)

{
  FUN_1402846aa(param_1 + 0x5c0,param_1 + 0x5d0);
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  if (-1 < *(int *)(param_1 + 0x5dc)) {
    return;
  }
  FUN_145792b10(param_1 + 0x5d0,0);
  return;
}



// FUNCTION 1402846aa FUN_1402846aa body=210 status=ok
// SIG undefined FUN_1402846aa(void)

void FUN_1402846aa(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_2 + 1);
  if (uVar8 == 0) {
    return;
  }
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + uVar8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < uVar8) {
    FUN_14028477c(param_1,iVar3);
  }
  lVar7 = (longlong)iVar3 * 0x58 + *param_1;
  lVar4 = *param_2;
  if (uVar8 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar7 + lVar6) = *(undefined8 *)(lVar4 + lVar6);
      *(undefined4 *)(lVar7 + 8 + lVar6) = *(undefined4 *)(lVar4 + 8 + lVar6);
      *(undefined8 *)(lVar7 + 0xc + lVar6) = *(undefined8 *)(lVar4 + 0xc + lVar6);
      *(undefined4 *)(lVar7 + 0x14 + lVar6) = *(undefined4 *)(lVar4 + 0x14 + lVar6);
      puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar6);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar7 + 0x28 + lVar6) = *(undefined8 *)(lVar4 + 0x28 + lVar6);
      *(undefined8 *)(lVar7 + 0x30 + lVar6) = *(undefined8 *)(lVar4 + 0x30 + lVar6);
      *(undefined8 *)(lVar7 + 0x38 + lVar6) = *(undefined8 *)(lVar4 + 0x38 + lVar6);
      puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar6);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar7 + 0x40 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      *(undefined8 *)(lVar7 + 0x50 + lVar6) = *(undefined8 *)(lVar4 + 0x50 + lVar6);
      lVar6 = lVar6 + 0x58;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 14028477c FUN_14028477c body=369 status=ok
// SIG undefined FUN_14028477c(void)

void FUN_14028477c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140284801;
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
LAB_140284801:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1402848ee FUN_1402848ee body=113 status=ok
// SIG undefined FUN_1402848ee(void)

undefined8 FUN_1402848ee(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if ((lVar1 != 0) && ((int)(uint)param_2 < *(int *)(lVar1 + 0xbf0))) {
    lVar1 = *(longlong *)
             (*(longlong *)(lVar1 + 0xbe8) + 8 + (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8)
    ;
    if (lVar1 != 0) {
      lVar2 = FUN_140086c3a();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uVar3 = FUN_140284960(lVar1);
        return uVar3;
      }
    }
  }
  return 0x3f800000;
}



// FUNCTION 140284960 FUN_140284960 body=171 status=ok
// SIG undefined FUN_140284960(void)

undefined8 FUN_140284960(longlong *param_1)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar4;
  
  fVar2 = *(float *)((longlong)param_1 + 0x18c);
  if (((1e-08 < ABS(*(float *)(param_1 + 0x37) + -1.0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x3c8))(param_1), 1 < iVar1)) &&
     (0 < *(int *)((longlong)param_1 + 0x2dc))) {
    fVar2 = fVar2 * *(float *)(param_1 + 0x37);
  }
  uVar6 = 0;
  if (0.0 < fVar2) {
    uVar3 = FUN_140284a0c(param_1);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (((float)uVar3 < 1.0) &&
       (fVar5 = *(float *)((longlong)param_1 + 0x1bc) * fVar2,
       fVar2 = (float)uVar3 * (fVar2 - fVar5) + fVar5, uVar6 = uVar4, fVar2 <= 0.01)) {
      fVar2 = 0.01;
    }
  }
  return CONCAT44(uVar6,fVar2);
}



// FUNCTION 140284a0c FUN_140284a0c body=99 status=ok
// SIG undefined FUN_140284a0c(void)

ulonglong FUN_140284a0c(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((0.0 < *(float *)(param_1 + 0x1c4)) || (0.0 < *(float *)(param_1 + 0x1d0))) {
    lVar1 = FUN_1447e736e(*(longlong *)(param_1 + 0x178) + 0xb0);
    uVar2 = *(uint *)(param_1 + 0x2d8);
    if (lVar1 != 0) {
      uVar3 = FUN_1449e6cbc(lVar1,uVar2);
      return uVar3;
    }
  }
  else {
    uVar2 = 0x3f800000;
  }
  return (ulonglong)uVar2;
}



// FUNCTION 140284a70 FUN_140284a70 body=118 status=ok
// SIG undefined FUN_140284a70(void)

void FUN_140284a70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FUN_144926950();
    iVar1 = *(int *)(param_1 + 0xb80);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb78);
      lVar4 = 0;
      do {
        FUN_144926950(*(undefined8 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  cVar3 = FUN_140284ae6(param_1);
  if (cVar3 != '\0') {
    FUN_144926950(*(undefined8 *)(param_1 + 0xaf8));
    return;
  }
  return;
}



// FUNCTION 140284ae6 FUN_140284ae6 body=494 status=ok
// SIG undefined FUN_140284ae6(void)

bool FUN_140284ae6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
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
  lVar3 = *(longlong *)(param_1 + 0xaf0);
  if ((((lVar3 == 0) || (lVar2 = FUN_1402e44f4(), lVar2 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (*(longlong *)(param_1 + 0xaf0) == 0)))) {
    iVar1 = *(int *)(param_1 + 0x854);
    if (*(int *)(param_1 + 0xca4) == -1 || iVar1 <= *(int *)(param_1 + 0xca4)) {
      lVar3 = *(longlong *)(param_1 + 0x658);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x660);
        if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_140284cb9;
        if (lVar3 == 0) goto LAB_140284b86;
      }
      else if (DAT_14c950c29 == 1) {
LAB_140284cb9:
        FUN_1456cec3c(lVar3);
      }
      if (DAT_14cb06da8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464003b0;
        local_48 = &LAB_147d17bdf;
        local_50 = &LAB_1417edf22;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
        if (*(int *)(lVar3 + 0x488) != -1 && *(int *)(lVar3 + 0x488) < iVar1) goto LAB_140284b94;
      }
      goto LAB_140284b86;
    }
  }
  else {
LAB_140284b86:
    if (*(longlong *)(param_1 + 0xaf8) != 0) {
      bVar4 = (*(byte *)(param_1 + 0xc61) & 1) == 0;
      goto LAB_140284b96;
    }
  }
LAB_140284b94:
  bVar4 = false;
LAB_140284b96:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 140284cd6 FUN_140284cd6 body=785 status=ok
// SIG undefined FUN_140284cd6(void)

void FUN_140284cd6(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar3 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar8 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar8 != -1) {
      do {
        puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar8 * 0x18);
        if (*puVar6 == param_2) {
          if (puVar6 != (ulonglong *)0x0) goto LAB_140284eb8;
          break;
        }
        iVar8 = (int)puVar6[2];
      } while (iVar8 != -1);
    }
  }
  if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar3 = param_1 + 0x148;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x150);
    }
    iVar8 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x158) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar8 != -1) {
      do {
        puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x110) + (longlong)iVar8 * 0x18);
        if (*puVar6 == param_2) {
          if (puVar6 != (ulonglong *)0x0) goto LAB_140284eb8;
          break;
        }
        iVar8 = (int)puVar6[2];
      } while (iVar8 != -1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0xc0);
  uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    lVar3 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x100);
    }
    iVar8 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & uVar5) * 4);
    if (iVar8 != -1) {
      do {
        puVar6 = (ulonglong *)(*plVar1 + (longlong)iVar8 * 0x18);
        if (*puVar6 == param_2) {
          if (puVar6 != (ulonglong *)0x0) goto LAB_140284eb8;
          break;
        }
        iVar8 = (int)puVar6[2];
      } while (iVar8 != -1);
    }
  }
  FUN_140285064(plVar1,local_50);
  *local_48 = param_2;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  *(uint *)((longlong)local_48 + 0xc) = param_3 & 3 | 4;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_140284fe8(plVar1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar7 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xf4);
    if (uVar7 < 4) {
      iVar8 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x108))) {
      uVar5 = *(int *)(param_1 + 0x108) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0x14) = uVar5;
      lVar3 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar3 = param_1 + 0xf8;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar3 + ((longlong)*(int *)(param_1 + 0x108) - 1U & (longlong)(int)uVar5) * 4);
      lVar3 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar3 = param_1 + 0xf8;
      }
      *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x108) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x108) = iVar8;
      FUN_1402854d8(plVar1);
    }
  }
LAB_140284e89:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140284eb8:
  *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + 4;
  goto LAB_140284e89;
}



// FUNCTION 140284fe8 FUN_140284fe8 body=124 status=ok
// SIG undefined FUN_140284fe8(void)

undefined8 FUN_140284fe8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14019fc70((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 140285064 FUN_140285064 body=470 status=ok
// SIG undefined FUN_140285064(void)

int * FUN_140285064(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14028523a FUN_14028523a body=670 status=ok
// SIG undefined FUN_14028523a(void)

void FUN_14028523a(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402852ad;
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
LAB_1402852ad:
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
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1402854d8 FUN_1402854d8 body=587 status=ok
// SIG undefined FUN_1402854d8(void)

void FUN_1402854d8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1402856de;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1402856de:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140285724 FUN_140285724 body=1690 status=ok
// SIG undefined FUN_140285724(void)

void FUN_140285724(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  ulonglong *param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  code *pcVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  int iVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  int local_88;
  uint local_80;
  uint local_78;
  undefined8 local_70;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar7 = *(code **)(*param_3 + 0x270);
  plVar10 = param_3;
  local_58 = param_4;
  if (pcVar7 == (code *)&LAB_1447f82f4) {
    plVar10 = (longlong *)param_3[9];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar10 + 0x408);
      if (pcVar7 != (code *)&LAB_14470b702) goto LAB_140285d1f;
      bVar3 = *(byte *)((longlong)plVar10 + 0x129);
      if (bVar3 == 1) {
        bVar3 = ~*(byte *)((longlong)plVar10 + 0x1d6) & 1;
      }
      uVar5 = (uint)bVar3;
    }
    else {
      pcVar7 = *(code **)(*plVar10 + 0x408);
      if (pcVar7 != (code *)&LAB_14497e176) goto LAB_140285d1f;
      uVar5 = (uint)*(byte *)(plVar10 + 0x2b);
    }
  }
  else {
LAB_140285d1f:
    uVar5 = (*pcVar7)(plVar10);
  }
  bVar8 = *(byte *)(param_1 + 0x84) ^ 1;
  bVar3 = uVar5 < 2 & bVar8;
  local_68 = param_1;
  if ((bVar8 != 0) || (uVar5 < 2)) goto joined_r0x0001402858a2;
  cVar4 = (**(code **)(*param_3 + 0xe8))(param_3);
  if (cVar4 != '\0') goto switchD_140285800_caseD_b;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
  case 8:
    cVar4 = (**(code **)(*param_3 + 0x310))(param_3);
    if (cVar4 == '\0') {
      bVar3 = (**(code **)(*param_3 + 0x318))(param_3);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
    if (*(float *)(param_1 + 0x90) <= 0.0 || bVar3 != 0) {
      bVar3 = bVar3 | 0.0 < *(float *)(param_1 + 0x90);
      goto joined_r0x0001402858a2;
    }
    cVar4 = (**(code **)(*param_3 + 0x310))(param_3);
    if ((uVar5 != 4) && (cVar4 != '\0')) goto switchD_140285800_caseD_5;
    cVar4 = (**(code **)(*param_3 + 0x310))(param_3);
    if (cVar4 != '\0') goto LAB_140285cd5;
    break;
  case 1:
  case 9:
    cVar4 = (**(code **)(*param_3 + 0x310))(param_3);
    if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_3 + 0x318))(param_3), cVar4 == '\0')) {
LAB_140285cd5:
      cVar4 = (**(code **)(*param_3 + 800))
                        (param_3,*(undefined2 *)
                                  (&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2));
      if (cVar4 == '\0') {
        bVar3 = FUN_1449279a5(uVar5);
        goto joined_r0x0001402858a2;
      }
      goto switchD_140285800_caseD_5;
    }
    break;
  case 2:
  case 10:
    bVar3 = (**(code **)(*param_3 + 0x310))(param_3);
    if (uVar5 != 4) goto joined_r0x0001402858a2;
    break;
  case 3:
    cVar4 = (**(code **)(*param_3 + 0x310))(param_3);
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*param_3 + 800))
                        (param_3,*(undefined2 *)
                                  (&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2));
      if (cVar4 == '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caf1e74) &&
           (FUN_144b3d300(&DAT_14caf1e74), DAT_14caf1e74 == -1)) {
          DAT_14caf1e71 = FUN_14473b0f0();
          _Init_thread_footer(&DAT_14caf1e74);
        }
        if (uVar5 != 4) break;
      }
      goto switchD_140285800_caseD_5;
    }
    break;
  case 4:
  case 0xc:
    bVar3 = (**(code **)(*param_3 + 0x318))(param_3);
joined_r0x0001402858a2:
    if (bVar3 != 0) goto switchD_140285800_caseD_5;
    break;
  case 5:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
switchD_140285800_caseD_5:
    iVar12 = (**(code **)(*param_3 + 0x30))(param_3);
    if (((iVar12 == 3) || (cVar4 = (**(code **)(*param_3 + 0x368))(param_3), cVar4 != '\0')) ||
       ((**(code **)(*param_3 + 0x288))(param_3,&local_4a), (local_4a >> 10 & 1) != 0)) break;
    uVar5 = (uint)*param_5;
    goto LAB_1402859a0;
  }
switchD_140285800_caseD_b:
  uVar5 = (uint)*param_5;
  if ((-1 < (char)*param_5) || (*(char *)(local_68 + 0x10) != '\x02')) goto LAB_1402858b4;
LAB_1402859a0:
  lVar1 = DAT_14c9ac860;
  if ((uVar5 >> 9 & 1) == 0) goto LAB_1402858b4;
  if (*(char *)(local_68 + 0x11) == '\x13') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar3 ^ 1);
    }
    if (*(int *)(lVar1 + uVar6 * 4) == 0) goto LAB_1402858b4;
    uVar5 = (uint)*param_5;
  }
  lVar1 = local_68;
  pcVar7 = *(code **)(*param_3 + 0x38);
  plVar10 = param_3;
  if (pcVar7 == FUN_144765e18) {
    plVar10 = (longlong *)param_3[9];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar10 + 0x420);
      pcVar11 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar7 = *(code **)(*plVar10 + 0x420);
      pcVar11 = (code *)&LAB_14497e108;
    }
    if (pcVar7 != pcVar11) goto LAB_140285d2b;
  }
  else {
LAB_140285d2b:
    (*pcVar7)(plVar10);
  }
  lVar9 = *param_3;
  if (*(code **)(lVar9 + 0x100) == (code *)&LAB_144b25520) {
    bVar3 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar3 = (**(code **)(lVar9 + 0x100))(param_3);
    lVar9 = *param_3;
  }
  pcVar7 = *(code **)(lVar9 + 0x38);
  plVar10 = param_3;
  if (pcVar7 == FUN_144765e18) {
    plVar10 = (longlong *)param_3[9];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)param_3[8];
      pcVar7 = *(code **)(*plVar10 + 0x420);
      if (pcVar7 != (code *)&LAB_144b24e8a) goto LAB_140285d42;
      bVar8 = *(byte *)(plVar10 + 0x30);
    }
    else {
      pcVar7 = *(code **)(*plVar10 + 0x420);
      if (pcVar7 != (code *)&LAB_14497e108) goto LAB_140285d42;
      bVar8 = *(byte *)(plVar10 + 0x2a);
    }
    bVar8 = (bVar8 & 0x10) >> 4;
  }
  else {
LAB_140285d42:
    bVar8 = (*pcVar7)(plVar10);
  }
  iVar12 = 2 - (uint)bVar3;
  uVar14 = 0;
  uVar15 = ((uVar5 >> 0x10 & 1) != 0) + 1;
  if (bVar8 != 0) {
    uVar15 = 0;
  }
  if ((uVar5 & 0x20000) != 0) {
    uVar15 = uVar14;
  }
  local_78 = (uint)*param_5;
  if (1 < ((uint)(*param_5 >> 0x14) & 0xf) - 1) {
    cVar4 = (**(code **)(*param_3 + 0x48))(param_3);
    local_78 = (uint)*param_5;
    if (cVar4 == '\0') {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)((local_78 >> 0x13 & 1) == 0);
    }
  }
  uVar2 = local_58;
  local_78 = local_78 & 0x3f;
  local_70 = param_6;
  uVar13 = (undefined1)uVar14;
  local_98 = 0;
  local_a0 = 1;
  local_a8 = param_3;
  local_90 = uVar13;
  local_88 = iVar12;
  local_80 = uVar15;
  FUN_140285dc0(lVar1,param_2,local_58,param_5);
  local_78 = (uint)*param_5 & 0x3f;
  local_70 = param_6;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = param_3;
  local_90 = uVar13;
  local_88 = iVar12;
  local_80 = uVar15;
  local_5c = iVar12;
  FUN_140285dc0(lVar1,param_2,uVar2,param_5);
  uVar2 = local_58;
  iVar12 = local_5c;
  lVar1 = local_68;
  if ((*param_5 >> 0x2f & 1) != 0) {
    local_78 = (uint)*param_5 & 0x3f;
    local_70 = param_6;
    local_88 = local_5c;
    local_98 = 1;
    local_a0 = 1;
    local_a8 = param_3;
    local_90 = uVar13;
    local_80 = uVar15;
    FUN_140285dc0(local_68,param_2,local_58,param_5);
    local_78 = (uint)*param_5 & 0x3f;
    local_70 = param_6;
    local_88 = iVar12;
    local_98 = 1;
    local_a0 = 0;
    local_a8 = param_3;
    local_90 = uVar13;
    local_80 = uVar15;
    FUN_140285dc0(lVar1,param_2,uVar2);
  }
LAB_1402858b4:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140285dc0 FUN_140285dc0 body=2644 status=ok
// SIG undefined FUN_140285dc0(void)

void FUN_140285dc0(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong *param_4,
                  longlong *param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  uint param_9,uint param_10,uint param_11,undefined8 param_12)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 unaff_R13;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  uint local_228;
  uint local_220;
  longlong *local_218;
  longlong *local_210;
  uint local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e2;
  ulonglong *local_1e0;
  longlong local_1d8;
  ushort local_1ca;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178 [11];
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  undefined8 local_108 [6];
  undefined1 local_d5;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0 [8];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  ulonglong local_60;
  code *pcVar10;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_1e0 = param_4;
  local_1d8 = param_2;
  (**(code **)(*param_5 + 0x288))(param_5,&local_1ca);
  pcVar10 = *(code **)(*param_5 + 0x270);
  plVar9 = param_5;
  if (pcVar10 == (code *)&LAB_1447f82f4) {
    plVar9 = (longlong *)param_5[9];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)param_5[8];
      pcVar10 = *(code **)(*plVar9 + 0x408);
      if (pcVar10 != (code *)&LAB_14470b702) goto LAB_14028663c;
      bVar5 = *(byte *)((longlong)plVar9 + 0x129);
      if (bVar5 == 1) {
        bVar5 = ~*(byte *)((longlong)plVar9 + 0x1d6) & 1;
      }
      uVar7 = (uint)bVar5;
    }
    else {
      pcVar10 = *(code **)(*plVar9 + 0x408);
      if (pcVar10 != (code *)&LAB_14497e176) goto LAB_14028663c;
      uVar7 = (uint)*(byte *)(plVar9 + 0x2b);
    }
  }
  else {
LAB_14028663c:
    uVar7 = (*pcVar10)(plVar9);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b6230) && (FUN_144b3d300(&DAT_14c9b6230), DAT_14c9b6230 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar9 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.PSOPrecache.LightMapPolicyMode",1);
    if (plVar9 == (longlong *)0x0) {
      DAT_14c9b6228 = 0;
    }
    else {
      DAT_14c9b6228 = (**(code **)(*plVar9 + 0x68))(plVar9);
    }
    _Init_thread_footer(&DAT_14c9b6230);
  }
  lVar12 = DAT_14c9b6228;
  uVar13 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),param_8);
  if (DAT_14c9b6228 == 0) {
    if (uVar7 < 2 || (local_1ca & 1) != 0) goto LAB_140285ee5;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar8 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar8 = (ulonglong)(bVar5 ^ 1);
    }
    if ((((local_1ca & 1) != 0) || (uVar7 < 2)) || (*(int *)(lVar12 + uVar8 * 4) == 1))
    goto LAB_140285ee5;
  }
  if (DAT_14c760e18 == 1) {
    FUN_1471d172e(&local_d0);
    local_200 = param_12;
    local_208 = param_11;
    local_210 = (longlong *)CONCAT44(local_210._4_4_,param_10);
    local_218 = (longlong *)CONCAT44(local_218._4_4_,param_9);
    local_220 = CONCAT31(local_220._1_3_,param_8);
    local_228 = CONCAT31(local_228._1_3_,param_7);
    local_230 = (longlong *)CONCAT71(local_230._1_7_,param_6);
    local_238 = param_5;
    FUN_1471331e2(param_1,local_1d8,param_3,local_1e0);
  }
  if ((DAT_14c760420 != 0) && ((DAT_14c760e18 & 1) != 0)) {
    FUN_1471d1632(&local_d0);
    local_200 = param_12;
    local_208 = param_11;
    local_210 = (longlong *)CONCAT44(local_210._4_4_,param_10);
    local_218 = (longlong *)CONCAT44(local_218._4_4_,param_9);
    local_220 = CONCAT31(local_220._1_3_,param_8);
    local_228 = CONCAT31(local_228._1_3_,param_7);
    local_230 = (longlong *)CONCAT71(local_230._1_7_,param_6);
    local_238 = param_5;
    FUN_14713375c(param_1,local_1d8,param_3,local_1e0);
  }
  FUN_1471d1632(&local_d0);
  local_200 = param_12;
  local_208 = param_11;
  local_210 = (longlong *)CONCAT44(local_210._4_4_,param_10);
  local_218 = (longlong *)CONCAT44(local_218._4_4_,param_9);
  local_220 = CONCAT31(local_220._1_3_,param_8);
  local_228 = CONCAT31(local_228._1_3_,param_7);
  local_230 = (longlong *)CONCAT71(local_230._1_7_,param_6);
  local_238 = param_5;
  FUN_147133cd6(param_1,local_1d8,param_3,local_1e0);
LAB_140285ee5:
  FUN_140286966(local_120,*(undefined4 *)(param_1 + 0x20),param_5);
  puVar11 = local_118;
  if (local_118 == (undefined1 *)0x0) {
    puVar11 = local_120;
  }
  if ((longlong)local_110 != 0) {
    lVar12 = 0;
    do {
      local_178[8] = 0;
      local_178[9] = 0;
      local_178[6] = 0;
      local_178[7] = 0;
      local_178[4] = 0;
      local_178[5] = 0;
      local_210 = local_178 + 2;
      local_178[2] = 0;
      local_178[3] = 0;
      local_178[0] = 0;
      local_178[1] = 0;
      local_208 = CONCAT31(local_208._1_3_,*(undefined1 *)(param_1 + 0x85));
      local_218 = local_178;
      local_228 = CONCAT31(local_228._1_3_,*(undefined1 *)(param_1 + 0x8c));
      local_230 = (longlong *)CONCAT71(local_230._1_7_,param_7);
      local_238 = (longlong *)CONCAT71(local_238._1_7_,param_6);
      local_220 = 0;
      cVar3 = FUN_1403113c0(param_5,*param_3,*(undefined4 *)(puVar11 + lVar12));
      if (cVar3 != '\0') {
        local_1b8 = *(undefined4 *)(param_1 + 0x40);
        uStack_1b4 = *(undefined4 *)(param_1 + 0x44);
        uStack_1b0 = *(undefined8 *)(param_1 + 0x48);
        local_1a8 = *(undefined4 *)(param_1 + 0x50);
        uStack_1a4 = *(undefined4 *)(param_1 + 0x54);
        uStack_1a0 = *(undefined4 *)(param_1 + 0x58);
        uStack_19c = *(undefined4 *)(param_1 + 0x5c);
        local_198 = *(undefined4 *)(param_1 + 0x60);
        uStack_194 = *(undefined4 *)(param_1 + 100);
        uStack_190 = *(undefined4 *)(param_1 + 0x68);
        uStack_18c = *(undefined4 *)(param_1 + 0x6c);
        local_188 = *(undefined4 *)(param_1 + 0x70);
        uStack_184 = *(undefined4 *)(param_1 + 0x74);
        uStack_180 = *(undefined4 *)(param_1 + 0x78);
        uStack_17c = *(undefined4 *)(param_1 + 0x7c);
        if ((*(char *)(param_1 + 0x11) == '\x02') ||
           ((*(uint *)(param_1 + 0x80) < 0x10 &&
            ((0xc080U >> (*(uint *)(param_1 + 0x80) & 0x1f) & 1) != 0)))) {
          local_238 = (longlong *)CONCAT71(local_238._1_7_,*(undefined1 *)(param_1 + 0x86));
          local_230 = (longlong *)((ulonglong)local_230._1_7_ << 8);
          FUN_140286815(&local_1b8,*(undefined4 *)(param_1 + 0x20),uVar13 & 0xffffffff,param_5);
        }
        else {
          local_238 = (longlong *)CONCAT71(local_238._1_7_,*(undefined1 *)(param_1 + 0x86));
          local_230 = (longlong *)((ulonglong)local_230._1_7_ << 8);
          FUN_140286e01(&local_1b8,*(undefined4 *)(param_1 + 0x20),uVar13 & 0xffffffff,param_5);
        }
        bVar5 = *(byte *)(param_1 + 0x84);
        if (bVar5 == 1) {
          FUN_140286f51(&local_1b8,param_5,
                        *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2),
                        *(undefined4 *)(param_1 + 0x80));
          bVar5 = *(byte *)(param_1 + 0x84);
        }
        lVar2 = local_1d8;
        local_c8 = 0;
        local_d0 = 0;
        local_c0[6] = 0;
        local_c0[7] = 0;
        local_c0[4] = 0;
        local_c0[5] = 0;
        local_c0[2] = 0;
        local_c0[3] = 0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 1;
        if ((bVar5 & 1) == 0) {
          plVar9 = &local_d0;
          if ((*local_1e0 & 0x80) == 0) {
            FUN_140a1799a(local_1d8,plVar9,0);
            local_78 = *(undefined8 *)(lVar2 + 0x38);
            local_80 = 0xb;
            bVar15 = ((uint)local_78 >> 0xc & 1) == 0;
            uStack_70._0_2_ = CONCAT11(bVar15,1);
            uStack_70 = CONCAT62(0x210001,(undefined2)uStack_70);
            uStack_70._0_4_ = CONCAT13(bVar15,(undefined3)uStack_70);
            uStack_70 = CONCAT44(0x21,(undefined4)uStack_70);
          }
          else {
            uStack_1b0 = DAT_14c9c0d98;
            uStack_180 = 0;
            FUN_140286f51(&local_1b8,param_5,
                          *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2),6
                         );
            cVar4 = (char)(*local_1e0 >> 0x1d);
            cVar3 = '\x02';
            if (cVar4 != '\0') {
              cVar3 = cVar4;
            }
            *(char *)((longlong)&local_d0 + (local_d0 & 0xffffffff) + 4) = cVar3;
            local_c0[local_d0 & 0xffffffff] = 9;
            local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
          }
          local_208 = *(uint *)(param_1 + 8);
          local_200 = param_12;
          local_218 = (longlong *)CONCAT44(local_218._4_4_,param_11);
          local_220 = param_10;
          local_228 = param_9;
          local_230 = local_178;
          local_210 = (longlong *)CONCAT71(local_210._1_7_,1);
          local_238 = plVar9;
          FUN_140287f14(*(undefined4 *)(param_1 + 0x20),param_3,param_5,&local_1b8);
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9bfea8) && (FUN_144b3d300(&DAT_14c9bfea8), DAT_14c9bfea8 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14c9bfea0 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,
                            L"r.Translucency.gbx.AfterMotionBlur.ForceDepthTestEnabled",1);
            _Init_thread_footer(&DAT_14c9bfea8);
          }
          if (DAT_14c9bfea0 == (longlong *)0x0) {
            bVar15 = false;
          }
          else {
            iVar6 = (**(code **)(*DAT_14c9bfea0 + 0xb0))();
            bVar15 = 0 < iVar6;
          }
          local_1c8 = DAT_14c967818;
          local_1c0 = 0x3f800000;
          local_1bc = local_68 & 0xffff;
          local_1e2 = *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2);
          uVar7 = *(uint *)(param_1 + 0x80);
          plVar9 = (longlong *)(ulonglong)uVar7;
          if (((uVar7 - 8 < 7) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) {
            bVar14 = false;
          }
          else {
            bVar14 = uVar7 - 1 < 4;
          }
          uVar1 = *(undefined8 *)(local_1d8 + 0x30);
          *(undefined1 *)((longlong)&local_d0 + (local_d0 & 0xffffffff) + 4) =
               *(undefined1 *)(local_1d8 + 0x2c);
          local_c0[local_d0 & 0xffffffff] = uVar1;
          local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
          if (bVar15 || uVar7 != 4) {
            local_78 = *(undefined8 *)(local_1d8 + 0x38);
            local_80 = 0xb;
            bVar15 = ((uint)local_78 >> 0xc & 1) == 0;
            uStack_70._0_2_ = CONCAT11(bVar15,1);
            uStack_70 = CONCAT62(0x210001,(undefined2)uStack_70);
            uStack_70._0_4_ = CONCAT13(bVar15,(undefined3)uStack_70);
            uStack_70 = CONCAT44(0x21,(undefined4)uStack_70);
          }
          local_1f8 = *(undefined4 *)(param_1 + 8);
          local_1f0 = param_12;
          local_208 = local_208 & 0xffffff00;
          local_210 = (longlong *)((ulonglong)local_210 & 0xffffffffffffff00);
          local_220 = param_11;
          local_228 = param_10;
          local_230 = (longlong *)CONCAT44(local_230._4_4_,param_9);
          local_238 = local_178;
          local_200 = CONCAT71(local_200._1_7_,1);
          local_218 = (longlong *)((ulonglong)local_218 & 0xffffffff00000000);
          FUN_14028756c(param_3,param_5,&local_1b8,&local_d0);
          if (bVar14) {
            local_238 = (longlong *)CONCAT62(local_238._2_6_,local_1e2);
            FUN_140287402(local_108,*(undefined4 *)(param_1 + 0x80),&local_1c8,uVar7 == 3);
            local_d0._0_5_ = CONCAT14(local_d5,(int)local_d0);
            local_c0[0] = local_108[0];
            local_1f8 = *(undefined4 *)(param_1 + 8);
            local_1f0 = param_12;
            local_208 = local_208 & 0xffffff00;
            local_210 = (longlong *)((ulonglong)local_210 & 0xffffffffffffff00);
            local_220 = param_11;
            local_228 = param_10;
            local_230 = (longlong *)CONCAT44(local_230._4_4_,param_9);
            local_238 = local_178;
            local_200 = CONCAT71(local_200._1_7_,1);
            local_218 = (longlong *)((ulonglong)local_218 & 0xffffffff00000000);
            FUN_14028756c(param_3,param_5,&local_1b8,&local_d0);
          }
        }
        uVar13 = CONCAT71((int7)((ulonglong)plVar9 >> 8),param_8);
      }
      lVar12 = lVar12 + 4;
    } while ((longlong)local_110 * 4 != lVar12);
  }
  if (local_118 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140286815 FUN_140286815 body=336 status=ok
// SIG undefined FUN_140286815(void)

void FUN_140286815(longlong param_1,int param_2,char param_3,longlong *param_4,char param_5,
                  char param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  cVar1 = (**(code **)(*param_4 + 600))(param_4);
  if ((cVar1 == '\0') && (param_3 == '\0')) {
    if (param_5 == '\0') goto LAB_14028689d;
LAB_14028684a:
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
      FUN_14713feb4(param_1,param_2);
      goto LAB_14028689d;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9bfe0c) && (FUN_144b3d300(&DAT_14c9bfe0c), DAT_14c9bfe0c == -1)) {
      cVar1 = FUN_14473b0f0();
      if (cVar1 == '\0') {
        DAT_14c9bfe08 = '\0';
      }
      else {
        DAT_14c9bfe08 = FUN_1474312f5(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2));
      }
      _Init_thread_footer(&DAT_14c9bfe0c);
    }
    puVar3 = &DAT_14c9b7af0;
    if (DAT_14c9bfe08 != '\0') {
      puVar3 = &DAT_14c9b7ad8;
    }
    uVar2 = *(undefined8 *)(puVar3 + 0x10);
  }
  else {
    cVar1 = FUN_140077876(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2));
    if (param_5 != '\0') {
      if (cVar1 != '\0') {
        FUN_14713fe0c(param_1,param_2);
        goto LAB_14028689d;
      }
      goto LAB_14028684a;
    }
    uVar2 = DAT_14c9c07c0;
    if (cVar1 == '\0') goto LAB_14028689d;
  }
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0;
LAB_14028689d:
  if (param_6 != '\0') {
    FUN_14713fe0c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140286966 FUN_140286966 body=1178 status=ok
// SIG undefined FUN_140286966(void)

undefined4 * FUN_140286966(undefined4 *param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined1 auStack_78 [46];
  ushort local_4a;
  ulonglong local_48;
  code *pcVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_3 + 0x288))(param_3,&local_4a);
  pcVar8 = *(code **)(*param_3 + 0x270);
  if (pcVar8 == (code *)&LAB_1447f82f4) {
    plVar7 = (longlong *)param_3[9];
    if (plVar7 == (longlong *)0x0) {
      param_3 = (longlong *)param_3[8];
      pcVar8 = *(code **)(*param_3 + 0x408);
      if (pcVar8 != (code *)&LAB_14470b702) goto LAB_140286c17;
      bVar3 = *(byte *)((longlong)param_3 + 0x129);
      if (bVar3 == 1) {
        bVar3 = ~*(byte *)((longlong)param_3 + 0x1d6) & 1;
      }
      uVar5 = (uint)bVar3;
    }
    else {
      pcVar8 = *(code **)(*plVar7 + 0x408);
      param_3 = plVar7;
      if (pcVar8 != (code *)&LAB_14497e176) goto LAB_140286c17;
      uVar5 = (uint)*(byte *)(plVar7 + 0x2b);
    }
  }
  else {
LAB_140286c17:
    uVar5 = (*pcVar8)(param_3);
  }
  bVar3 = DAT_14c760e18;
  cVar2 = FUN_1449277db(param_2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b6210) && (FUN_144b3d300(&DAT_14c9b6210), DAT_14c9b6210 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportLowQualityLightmaps",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b6208 = 0;
    }
    else {
      DAT_14c9b6208 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer(&DAT_14c9b6210);
  }
  lVar9 = DAT_14c9b6208;
  if (DAT_14c9b6208 == 0) {
    bVar11 = true;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    bVar11 = *(int *)(lVar9 + uVar6 * 4) != 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b6220) && (FUN_144b3d300(), DAT_14c9b6220 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.PSOPrecache.LightMapPolicyMode",1);
    if (plVar7 == (longlong *)0x0) {
      DAT_14c9b6218 = 0;
    }
    else {
      DAT_14c9b6218 = (**(code **)(*plVar7 + 0x68))(plVar7);
    }
    _Init_thread_footer();
  }
  lVar9 = DAT_14c9b6218;
  if (DAT_14c9b6218 == 0) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0x200000001;
    *param_1 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    iVar1 = *(int *)(lVar9 + uVar6 * 4);
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0x200000001;
    *param_1 = 0;
    if (iVar1 == 1) goto LAB_140286ae1;
  }
  if (cVar2 != '\0') {
    if (((local_4a & 1) == 0 & bVar3) == 0) {
      param_1[4] = 2;
      lVar9 = 1;
      puVar10 = (undefined4 *)0x0;
    }
    else {
      param_1[1] = 6;
      param_1[4] = 3;
      FUN_147140512(param_1,2);
      puVar10 = *(undefined4 **)(param_1 + 2);
      lVar9 = 2;
    }
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = param_1;
    }
    puVar10[lVar9] = 5;
  }
  if (bVar11) {
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 1U;
    if ((uint)param_1[5] < iVar1 + 1U) {
      FUN_147140512(param_1,iVar1);
    }
    puVar10 = *(undefined4 **)(param_1 + 2);
    if (*(undefined4 **)(param_1 + 2) == (undefined4 *)0x0) {
      puVar10 = param_1;
    }
    puVar10[iVar1] = 4;
  }
  if (((~bVar3 | (byte)local_4a) & 1) == 0) {
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 1U;
    if ((uint)param_1[5] < iVar1 + 1U) {
      FUN_147140512(param_1,iVar1);
    }
    puVar10 = *(undefined4 **)(param_1 + 2);
    if (*(undefined4 **)(param_1 + 2) == (undefined4 *)0x0) {
      puVar10 = param_1;
    }
    puVar10[iVar1] = 1;
  }
  if ((DAT_14c760420 != 0) && ((DAT_14c760e18 & 1) != 0)) {
    cVar2 = FUN_1471ba9ad(param_2);
    if (cVar2 == '\x01' && uVar5 < 2) {
      iVar1 = param_1[4];
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_147140512(param_1,iVar1);
      }
      puVar10 = *(undefined4 **)(param_1 + 2);
      if (*(undefined4 **)(param_1 + 2) == (undefined4 *)0x0) {
        puVar10 = param_1;
      }
      puVar10[iVar1] = 2;
    }
    iVar1 = param_1[4];
    param_1[4] = iVar1 + 1U;
    if ((uint)param_1[5] < iVar1 + 1U) {
      FUN_147140512(param_1,iVar1);
    }
    puVar10 = *(undefined4 **)(param_1 + 2);
    if (*(undefined4 **)(param_1 + 2) == (undefined4 *)0x0) {
      puVar10 = param_1;
    }
    puVar10[iVar1] = 3;
  }
LAB_140286ae1:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140286e01 FUN_140286e01 body=336 status=ok
// SIG undefined FUN_140286e01(void)

void FUN_140286e01(longlong param_1,int param_2,char param_3,longlong *param_4,char param_5,
                  char param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  cVar1 = (**(code **)(*param_4 + 600))(param_4);
  if ((cVar1 == '\0') && (param_3 == '\0')) {
    if (param_5 == '\0') goto LAB_140286e89;
LAB_140286e36:
    if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
      FUN_14713ff5c(param_1,param_2);
      goto LAB_140286e89;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9bfe24) && (FUN_144b3d300(&DAT_14c9bfe24), DAT_14c9bfe24 == -1)) {
      cVar1 = FUN_14473b0f0();
      if (cVar1 == '\0') {
        DAT_14c9bfe20 = '\0';
      }
      else {
        DAT_14c9bfe20 = FUN_1474312f5(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2));
      }
      _Init_thread_footer(&DAT_14c9bfe24);
    }
    puVar3 = &DAT_14c9b7b80;
    if (DAT_14c9bfe20 != '\0') {
      puVar3 = &DAT_14c9b7b68;
    }
    uVar2 = *(undefined8 *)(puVar3 + 0x10);
  }
  else {
    cVar1 = FUN_140077876(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_2 * 2));
    if (param_5 != '\0') {
      if (cVar1 != '\0') {
        FUN_14713fe0c(param_1,param_2);
        goto LAB_140286e89;
      }
      goto LAB_140286e36;
    }
    uVar2 = DAT_14c9c07c0;
    if (cVar1 == '\0') goto LAB_140286e89;
  }
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0;
LAB_140286e89:
  if (param_6 != '\0') {
    FUN_14713fe0c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140286f51 FUN_140286f51 body=1200 status=ok
// SIG undefined FUN_140286f51(void)

void FUN_140286f51(undefined8 *param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_68 [38];
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 0x3f0))(param_2);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x288))(param_2,&local_42);
    if ((local_42 >> 0xb & 1) != 0) {
      cVar2 = (**(code **)(*param_2 + 800))(param_2,param_3);
      if (cVar2 == '\0') {
        puVar13 = &DAT_14c9c0890;
      }
      else {
        puVar13 = &DAT_14c9c0d08;
        if ((param_4 != 0) && (param_4 != 6)) {
          if (param_4 == 2) {
            puVar9 = &DAT_14c9b7a28;
          }
          else {
            puVar9 = &DAT_14c9b7a40;
            if ((param_4 & 0xfffffffd) != 1) {
              uVar15 = param_4 - 4;
              if ((uVar15 < 10) && ((0x251U >> (uVar15 & 0x1f) & 1) != 0)) {
                ppuVar14 = &PTR_DAT_14a1fc208;
              }
              else {
                if ((param_4 & 0xfffffffd) == 9) goto LAB_140286fde;
                uVar15 = param_4 - 5;
                if ((9 < uVar15) || ((0x285U >> (uVar15 & 0x1f) & 1) == 0)) goto LAB_140287357;
                ppuVar14 = &PTR_DAT_14a1fc258;
              }
              puVar9 = (undefined8 *)ppuVar14[uVar15];
            }
          }
          goto LAB_140286fde;
        }
      }
      goto LAB_140287357;
    }
    iVar5 = (**(code **)(*param_2 + 0x270))();
    if (iVar5 == 2) {
switchD_14028707f_caseD_7:
      puVar8 = &DAT_14c9c04c8;
    }
    else {
      switch(iVar5) {
      case 3:
        puVar9 = &DAT_14c9b7a58;
        goto LAB_140286fde;
      case 4:
        puVar8 = &DAT_14c9c0498;
        break;
      case 5:
        puVar8 = &DAT_14c9c0880;
        break;
      case 6:
        puVar8 = &DAT_14c9c0370;
        break;
      case 7:
        goto switchD_14028707f_caseD_7;
      default:
        goto switchD_14028707f_default;
      }
    }
    if (param_4 == 5) {
      puVar8 = &DAT_14c9c05f0;
    }
    puVar9 = (undefined8 *)(puVar8 + 0x10);
LAB_140286fde:
    *param_1 = *puVar9;
  }
  else {
    cVar2 = (**(code **)(*param_2 + 800))(param_2,param_3);
    if (cVar2 != '\0') {
      puVar13 = &DAT_14c9c0d08;
      if (param_4 == 0) goto LAB_140287357;
      puVar9 = &DAT_14c9b7a28;
      if (param_4 == 2) goto LAB_140286fde;
      if (param_4 == 6) goto LAB_140287357;
      if ((param_4 & 0xfffffffd) != 1) {
        if (param_4 == 4) goto LAB_140286fde;
        goto LAB_14028735d;
      }
      puVar9 = &DAT_14c9b7a40;
      goto LAB_140286fde;
    }
    iVar5 = (**(code **)(*param_2 + 0x270))(param_2);
    if (iVar5 == 4) {
      puVar13 = &DAT_14c9c04a8;
    }
    else {
      iVar5 = (**(code **)(*param_2 + 0x270))(param_2);
      puVar8 = &DAT_14c9c0880;
      if (iVar5 == 6) {
        puVar8 = &DAT_14c9c0370;
      }
      puVar13 = (undefined8 *)(puVar8 + 0x10);
    }
LAB_140287357:
    *param_1 = *puVar13;
LAB_14028735d:
    if (param_4 == 5) {
      puVar9 = &DAT_14c9c0600;
      goto LAB_140286fde;
    }
  }
switchD_14028707f_default:
  cVar2 = (**(code **)(*param_2 + 0x78))(param_2);
  cVar3 = (**(code **)(*param_2 + 0x88))(param_2);
  cVar4 = (**(code **)(*param_2 + 0x318))(param_2);
  if ((param_4 == 0) || (param_4 == 6)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9b7f98) && (FUN_144b3d300(&DAT_14c9b7f98), DAT_14c9b7f98 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar10 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.Translucency.StandardSeparated",1);
      if (plVar10 == (longlong *)0x0) {
        DAT_14c9b7f90 = 0;
      }
      else {
        DAT_14c9b7f90 = (**(code **)(*plVar10 + 0x68))(plVar10);
      }
      _Init_thread_footer(&DAT_14c9b7f98);
    }
    lVar1 = DAT_14c9b7f90;
    if (DAT_14c9b7f90 == 0) goto LAB_14028701d;
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar12 = 0;
    }
    else if (iVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar12 = 1;
    }
    bVar16 = *(int *)(lVar1 + uVar12 * 4) != 0;
  }
  else {
LAB_14028701d:
    bVar16 = false;
  }
  if ((param_4 == 7) || (param_4 == 0xe)) {
    uVar11 = DAT_14c9c07c0;
    if (cVar2 != '\0') goto LAB_14028709b;
  }
  else {
    if (cVar4 == '\0' && cVar3 == '\x01') {
      if (bVar16) {
        uVar11 = DAT_14c9b7a88;
        if (cVar2 != '\0') {
          uVar11 = DAT_14c9b7a70;
        }
        param_1[1] = uVar11;
        *(undefined4 *)(param_1 + 7) = 9;
      }
      else {
        uVar11 = DAT_14c9b7aa0;
        if (cVar2 == '\0') {
          uVar11 = DAT_14c9b7ab8;
        }
        param_1[1] = uVar11;
        *(undefined4 *)(param_1 + 7) = 8;
      }
      goto LAB_14028703f;
    }
    if (bVar16) {
      uVar11 = DAT_14c9c0860;
      if (cVar2 != '\0') {
        uVar11 = DAT_14c9c0878;
      }
      param_1[1] = uVar11;
      *(undefined4 *)(param_1 + 7) = 1;
      goto LAB_14028703f;
    }
    if (cVar2 == '\0') goto LAB_14028703f;
LAB_14028709b:
    uVar11 = DAT_14c9c0d98;
  }
  param_1[1] = uVar11;
  *(undefined4 *)(param_1 + 7) = 0;
LAB_14028703f:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140287402 FUN_140287402 body=361 status=ok
// SIG undefined FUN_140287402(void)

ulonglong *
FUN_140287402(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,char param_4,ushort param_5)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong *puVar9;
  
  lVar3 = DAT_14ca1c600;
  iVar8 = *(int *)((longlong)param_3 + 0xc);
  if (iVar8 == 1) {
    iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
      uVar7 = 0;
    }
    else if (iVar8 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar7 = 1;
    }
    uVar6 = 9;
    if (((0 < *(int *)(lVar3 + uVar7 * 4)) &&
        ((*(byte *)(&DAT_14ca814d8 + (ulonglong)param_5 * 0xf) & 2) != 0)) &&
       (DAT_14ca84f5c == '\x01')) {
      uVar6 = (ulonglong)(*(int *)(DAT_14ca1c618 + 4) != 0) << 0x11 | 9;
    }
    iVar8 = *(int *)((longlong)param_3 + 0xc);
  }
  else {
    uVar6 = 9;
  }
  puVar9 = (ulonglong *)&DAT_14ca83a30;
  if (param_4 != '\0') {
    puVar9 = (ulonglong *)&DAT_14ca84d30;
  }
  *(int *)(param_1 + 3) = (int)puVar9[2];
  uVar7 = puVar9[1];
  param_1[1] = *puVar9;
  param_1[2] = uVar7;
  uVar1 = *param_3;
  bVar2 = (byte)DAT_14c760da4 & 0x1f;
  *param_1 = uVar6;
  *(int *)((longlong)param_1 + 0x1c) = ~(-1 << bVar2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x10001;
  *(undefined1 *)(param_1 + 6) = 1;
  *(char *)((longlong)param_1 + 0x31) = (char)iVar8;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  *(byte *)((longlong)param_1 + 0x33) = param_4 << 4 | 10;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0xff00;
  return param_1;
}



// FUNCTION 14028756c FUN_14028756c body=2471 status=ok
// SIG undefined FUN_14028756c(void)

/* WARNING: Removing unreachable block (ram,0x000140287d30) */

void FUN_14028756c(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,int param_7,undefined4 param_8,byte param_9,
                  undefined1 param_10,undefined1 param_11,byte param_12,uint param_13,
                  longlong *param_14)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_4a8 [32];
  uint *local_488;
  undefined1 *local_480;
  longlong local_470;
  undefined1 local_462 [2];
  undefined8 local_460;
  undefined1 local_455;
  uint local_454;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  short local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar3 = FUN_1406917e6();
  if (cVar3 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1a8 = 0;
    local_1a0 = 0;
    bVar5 = 2;
    if ((param_9 & 2) == 0) {
      bVar5 = param_9 & 1;
    }
    local_1ac = param_8;
    if (param_1[1] == 0 || bVar5 != 0) {
      local_288 = 0x1100000000;
      (**(code **)(*param_1 + 0x48))(0xffffffff,&local_310);
      FUN_14486d71a(&local_310);
    }
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238);
    if (param_6 == 0) {
      puVar8 = &DAT_14c9c0e48;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e60;
      }
      puVar7 = &DAT_14c9c0e78;
    }
    else if (param_6 == 1) {
      puVar8 = &DAT_14c9c0e00;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0e18;
      }
      puVar7 = &DAT_14c9c0e30;
    }
    else {
      puVar8 = &DAT_14c9c0d58;
      if (param_7 == 2) {
        puVar8 = &DAT_14c9c0de8;
      }
      puVar7 = &DAT_14c9c0da0;
    }
    if (param_7 != 0) {
      puVar7 = puVar8;
    }
    uStack_1d0 = *(undefined8 *)(puVar7 + 0x10);
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar6 = (**(code **)(*param_2 + 0x490))(param_2);
    if (uVar6 < 4) {
      uVar4 = (undefined1)(0x5010400 >> ((byte)(uVar6 << 3) & 0x1f));
    }
    else {
      uVar4 = 0;
      if ((uVar6 < 7) && (DAT_14ca84f33 != '\0')) {
        uVar4 = (undefined1)(0xa060900000000 >> ((byte)(uVar6 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar4,(undefined1)local_1af);
    cVar3 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar4);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      local_1a8 = local_240;
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar2 = *param_1;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_488 = &local_454;
        local_454 = local_454 & 0xffff0000;
        local_480 = local_462;
        FUN_14573482a(&DAT_14cafccf8,&local_460,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_460 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_460 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,param_13,lVar2);
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        local_470 = *param_1;
        local_460 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_488 = (uint *)local_462;
        local_462 = (undefined1  [2])0x0;
        local_480 = &local_455;
        FUN_14573482a(&DAT_14cafd9c8,&local_454,
                      (int)((ulonglong)local_460 >> 0x20) * 0x17 + (int)local_460 & 0x7fffffff,
                      &local_460);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_454 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        }
        else {
          *(undefined1 *)((longlong)(int)local_454 * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,param_13,local_470);
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = param_10;
    local_24d = param_11;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = (ushort)param_12 << 8;
  local_70 = param_13 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar5 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar5 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_14[1];
  *(uint *)(param_14 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_14 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_14,iVar1);
  }
  lVar2 = *param_14;
  _Dst = (void *)(lVar2 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar2 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140287f14 FUN_140287f14 body=651 status=ok
// SIG undefined FUN_140287f14(void)

void FUN_140287f14(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulonglong param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,char param_10,undefined4 param_11,undefined8 param_12)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined1 *local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e0 = param_12;
  local_e8 = param_11;
  local_f8 = 0;
  local_100 = 0;
  local_110 = param_9;
  local_118 = (undefined8 *)CONCAT44(local_118._4_4_,param_8);
  local_120 = (undefined1 *)CONCAT44(local_120._4_4_,param_7);
  local_128 = param_6;
  local_f0 = 1;
  local_108 = 0;
  local_cc = param_1;
  FUN_14028756c(param_2,param_3,param_4,param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c07a8) {
    FUN_144b3d300(&DAT_14c9c07a8);
    if (DAT_14c9c07a8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.PSOPrecache.PrecacheAlphaColorChannel",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9c07a0 = 0;
      }
      else {
        DAT_14c9c07a0 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9c07a8);
    }
  }
  lVar4 = DAT_14c9c07a0;
  if ((param_10 != '\0') && (DAT_14c9c07a0 != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar2 = 0;
    }
    else {
      bVar1 = FUN_144a61b4f();
      uVar2 = (ulonglong)(bVar1 ^ 1);
    }
    if (0 < *(int *)(lVar4 + uVar2 * 4)) {
      puVar5 = param_5;
      puVar6 = &local_b8;
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_118 = &local_c8;
      local_120 = &local_b9;
      local_128 = local_128 & 0xffffffffffffff00;
      FUN_1400530af(local_cc,1,0,*(undefined2 *)(param_5 + 0xd));
      local_b8._4_1_ = local_b9;
      local_a8 = local_c8;
      local_e0 = param_12;
      local_e8 = param_11;
      local_f8 = 0;
      local_100 = 0;
      local_110 = param_9;
      local_118 = (undefined8 *)CONCAT44(local_118._4_4_,param_8);
      local_120 = (undefined1 *)CONCAT44(local_120._4_4_,param_7);
      local_128 = param_6;
      local_f0 = 1;
      local_108 = 0;
      FUN_14028756c(param_2,param_3,param_4,&local_b8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402881a0 FUN_1402881a0 body=397 status=ok
// SIG undefined FUN_1402881a0(void)

longlong FUN_1402881a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if (0 < (int)plVar1[1]) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*plVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_140288202:
          if (DAT_14cacda40 == 0) {
            local_50 = &local_38;
            local_38 = FUN_1449e2820;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_14081d0ea;
            local_58 = &LAB_147957ee7;
            local_60 = FUN_1463ac712;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000001;
            local_80 = 8;
            local_88 = 0x28;
            FUN_14081cfa3(L"/Script/Engine",L"AssetUserData",&DAT_14cacda40,&DAT_147957ee6);
            if (DAT_14cacda40 == 0) goto LAB_140288226;
          }
          if ((*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cacda40 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cacda40 + 0x38) * 8) !=
              DAT_14cacda40 + 0x30)) goto LAB_140288226;
        }
        else {
          if (lVar3 != 0) goto LAB_140288202;
LAB_140288226:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_140288244;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)plVar1[1]);
  }
  lVar2 = 0;
LAB_140288244:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140288334 FUN_140288334 body=306 status=ok
// SIG undefined FUN_140288334(void)

undefined4 *
FUN_140288334(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140288504(param_1,local_58);
  puVar1 = (undefined8 *)param_4[1];
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 1) = *puVar1;
  local_50[3] = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_140288468(param_1,param_3,local_50,local_58);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_50[4] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_50[3] = *(undefined4 *)
                     (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14028885e(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140288468 FUN_140288468 body=156 status=ok
// SIG undefined FUN_140288468(void)

void FUN_140288468(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1402887d4(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          goto LAB_1402884d2;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar3 = 0;
LAB_1402884d2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 140288504 FUN_140288504 body=719 status=ok
// SIG undefined FUN_140288504(void)

int * FUN_140288504(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402886bb;
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
LAB_1402886bb:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x14);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1402887d4 FUN_1402887d4 body=138 status=ok
// SIG undefined FUN_1402887d4(void)

void FUN_1402887d4(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14028885e FUN_14028885e body=625 status=ok
// SIG undefined FUN_14028885e(void)

void FUN_14028885e(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402888d0;
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
LAB_1402888d0:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x14);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x10 + lVar12 * 0x14) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0xc + lVar12 * 0x14) =
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



// FUNCTION 140288ad0 FUN_140288ad0 body=194 status=ok
// SIG undefined FUN_140288ad0(void)

void FUN_140288ad0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  FUN_14086ecde(0,&local_38,1,0);
  lVar2 = local_38;
  lVar4 = (longlong)(int)uStack_30;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar5);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = FUN_140288b94();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          (**(code **)(*plVar1 + 0x420))(plVar1,0);
        }
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140288b94 FUN_140288b94 body=228 status=ok
// SIG undefined FUN_140288b94(void)

longlong FUN_140288b94(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac61f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1478894f8;
    local_40 = &LAB_145dec216;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x670;
    FUN_14081cfa3(L"/Script/Engine",L"FXSystemComponent",&DAT_14cac61f8,FUN_14638c69e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac61f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140288c7a FUN_140288c7a body=47 status=ok
// SIG undefined FUN_140288c7a(void)

void FUN_140288c7a(longlong param_1)

{
  FUN_140288caa();
  if ((*(byte *)(param_1 + 0x3a8) & 8) == 0) {
    return;
  }
  FUN_14163f334(param_1,0,0);
  return;
}



// FUNCTION 140288caa FUN_140288caa body=5107 status=ok
// SIG undefined FUN_140288caa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140288caa(longlong *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  double dVar40;
  double dVar42;
  double dVar43;
  undefined1 auVar41 [16];
  undefined1 auStack_368 [32];
  longlong *local_348;
  longlong local_340;
  undefined1 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a0;
  int local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
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
  undefined8 uStack_160;
  undefined1 local_158 [8];
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 0x10;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar7 = param_1[4];
  }
  else {
    lVar7 = 0;
  }
  if ((*(char *)(lVar7 + 0x178) == '\x03') && (lVar7 = param_1[0x4f], lVar7 != 0)) {
    FUN_14028a150(&local_280);
    FUN_1412ffe4e(lVar7 + 0x20e,param_1,local_280);
    if (param_1[0x50] != 0) {
      lVar9 = FUN_144a3a302();
      lVar7 = param_1[0x50];
      if ((((lVar7 != 0) && (lVar9 != 0)) && (lVar15 = *(longlong *)(lVar7 + 0x10), lVar15 != 0)) &&
         ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar15 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)))) {
        FUN_14028a09e(&local_288);
        FUN_1456ecad2(lVar7 + 0x59d,param_1,local_288);
        if (param_1[0x50] != 0) {
          lVar9 = FUN_140c7aaec();
          lVar7 = param_1[0x50];
          if (((lVar7 != 0) && (lVar9 != 0)) &&
             ((lVar15 = *(longlong *)(lVar7 + 0x10), lVar15 != 0 &&
              ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar15 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                == lVar9 + 0x30)))))) {
            FUN_1488e21a0(&local_290);
            FUN_1488e226a(lVar7 + 0x730,param_1,local_290);
          }
        }
      }
    }
    lVar7 = param_1[0x4f];
    if (lVar7 != 0) {
      uVar10 = FUN_144a7b040();
      plVar17 = (longlong *)FUN_144718840(lVar7,uVar10);
      if ((plVar17 != (longlong *)0x0) &&
         (lVar7 = (**(code **)(*plVar17 + 0x20))(plVar17), lVar7 != 0)) {
        _local_158 = ZEXT812(0x145b067e0);
        FUN_1412fffd4(lVar7 + 400,local_1d8,param_1,local_158);
        param_1[0xec] = local_1d8._0_8_;
        _local_158 = ZEXT812(0x143dc2ab0);
        FUN_14028f00e(lVar7 + 0x238,local_1d8,param_1,local_158);
      }
    }
  }
  if (*(char *)(param_1[0x10] + 0x54) == '\x01') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1[0x10] + 0x58);
  }
  plVar17 = param_1 + 0xd4;
  if (0 < (longlong)(int)param_1[0xd5]) {
    uVar18 = (longlong)(int)param_1[0xd5] + 1;
    do {
      plVar8 = *(longlong **)(*plVar17 + -0x10 + uVar18 * 8);
      if ((DAT_14c950c29 == 1) && (plVar8 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar8);
LAB_140288d8c:
        plVar11 = (longlong *)param_1[0xd3];
        if ((plVar11 != (longlong *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(plVar11);
        }
        if ((((plVar8 != plVar11) && (lVar7 = FUN_140288b94(), lVar7 != 0)) &&
            (lVar9 = plVar8[2], lVar9 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)))) {
          FUN_14028d356(param_1,plVar8);
          (**(code **)(*plVar8 + 0x2b0))(plVar8);
        }
      }
      else if (plVar8 != (longlong *)0x0) goto LAB_140288d8c;
      uVar18 = uVar18 - 1;
    } while (1 < uVar18);
  }
  plVar8 = (longlong *)param_1[0xd3];
  if (plVar8 != (longlong *)0x0) {
    lVar7 = param_1[0x10];
    if ((*(byte *)(lVar7 + 0x5c2) & 2) == 0) {
      if (*(longlong *)(lVar7 + 0x5c4) != 0) {
        (**(code **)(*plVar8 + 0xa30))(plVar8,*(longlong *)(lVar7 + 0x5c4),0);
      }
    }
    else if (0.0 < *(float *)(lVar7 + 0x5cc)) {
      lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar7 != 0) {
        local_308 = 0.0;
        FUN_14485c47a(&local_308,param_1);
        dVar30 = local_308;
        local_1d8._0_12_ = ZEXT812(0);
        FUN_1446efa72(local_1d8,0,2,0x10);
        local_1d8._8_4_ = 2;
        *(undefined ***)local_1d8._0_8_ = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar15 == 0) {
          LOCK();
          UNLOCK();
          lVar15 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        *(longlong *)(local_1d8._0_8_ + 0x10) = lVar15;
        *(undefined ***)local_1d8._0_8_ = &PTR_FUN_14b415040;
        *(double *)(local_1d8._0_8_ + 0x18) = dVar30;
        if (*(longlong *)(lVar7 + 0x1f0) == 0) {
          puVar12 = (undefined8 *)(lVar7 + 0x458);
        }
        else {
          puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
        }
        uVar10 = *puVar12;
        uVar39 = *(undefined4 *)(param_1[0x10] + 0x5cc);
        _local_158 = ZEXT812(0);
        FUN_14487d8d8(local_158,local_1d8);
        auVar20 = local_258;
        local_118 = (double)CONCAT71(local_118._1_7_,1);
        local_348 = (longlong *)local_258;
        local_258._0_4_ = local_258._2_4_ << 0x10;
        local_258._8_8_ = auVar20._8_8_;
        local_258._4_4_ = 0xbf800000;
        FUN_1406f4044(uVar10,param_1 + 0xf4,local_158,uVar39);
        (*(code *)(&PTR_LAB_14a1c87a0)[(ulonglong)local_118 & 0xff])(local_158);
        FUN_1449db362(local_1d8);
      }
    }
    else {
      FUN_14028d356(param_1);
      (**(code **)(*(longlong *)param_1[0xd3] + 0x2b0))();
      param_1[0xd3] = 0;
    }
  }
  lVar7 = param_1[0xd2];
  lVar9 = param_1[0x10];
  if ((lVar7 != 0) && ((*(byte *)(lVar9 + 0x5c2) & 1) != 0)) {
    local_158 = (undefined1  [8])lVar7;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar7);
    }
    lVar7 = 0;
    FUN_14028d478(plVar17,local_158,0);
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar7 = param_1[4];
    }
    FUN_140777194(lVar7,param_1[0xd2]);
    param_1[0xd2] = 0;
    lVar9 = param_1[0x10];
  }
  lVar7 = FUN_1402d1dc0(lVar9 + 0x210);
  local_2a0 = 0;
  local_298 = 0;
  plVar8 = (longlong *)FUN_140b51ce6();
  if (plVar8 != (longlong *)0x0) {
    dStack_150 = 0.0;
    local_158 = (undefined1  [8])param_1;
    local_148._0_8_ = local_148._4_8_ << 0x20;
    local_148._8_8_ = 0;
    lVar9 = (**(code **)(*plVar8 + 0x20))(plVar8,local_158,&local_2a0,0);
    if (lVar9 != 0) {
      lVar7 = lVar9;
    }
  }
  uVar39 = SUB84(&local_308,0);
  plVar8 = param_1 + 0x4f;
  FUN_14028d844();
  auVar38 = _DAT_149934d80;
  local_2c8 = _DAT_149934d80;
  local_2b8 = 0x3ff0000000000000;
  uStack_2b0 = 0;
  dVar30 = (double)local_2f8._0_8_ * (double)local_2f8._0_8_ + local_308 * local_308;
  dVar33 = (double)local_2f8._8_8_ * (double)local_2f8._8_8_ + dStack_300 * dStack_300;
  auVar27._0_8_ = dVar30 + dVar33;
  auVar27._8_8_ = dVar30 + dVar33;
  auVar20._8_8_ = -(ulonglong)(1e-08 <= auVar27._8_8_);
  auVar20._0_8_ = -(ulonglong)(1e-08 <= auVar27._0_8_);
  auVar31 = sqrtpd(auVar27,auVar27);
  auVar31 = divpd(_DAT_149934d80,auVar31);
  auVar35._0_8_ = auVar31._0_8_ * (double)local_2f8._0_8_;
  auVar35._8_8_ = auVar31._8_8_ * (double)local_2f8._8_8_;
  local_2f8 = blendvpd(_DAT_149935300,auVar35,auVar20);
  local_308 = (double)((ulonglong)(local_308 * auVar31._0_8_) & -(ulonglong)(1e-08 <= auVar27._0_8_)
                      );
  dStack_300 = (double)((ulonglong)(dStack_300 * auVar31._8_8_) &
                       -(ulonglong)(1e-08 <= auVar27._8_8_));
  lVar9 = param_1[0x10];
  auVar20 = *(undefined1 (*) [16])(lVar9 + 0xe0);
  dVar30 = auVar20._0_8_;
  dVar26 = auVar20._8_8_;
  dVar33 = SUB168(*(undefined1 (*) [16])(lVar9 + 0xf0),0);
  auVar20 = minpd(auVar20,_DAT_149934d80);
  auVar27 = minpd(*(undefined1 (*) [16])(lVar9 + 0xf0),ZEXT816(0x3ff0000000000000));
  auVar31._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
  auVar31._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
  iVar13 = movmskpd((int)plVar8,auVar31);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  uVar14 = movmskpd(uVar39,auVar28);
  dVar29 = local_2f8._0_8_;
  dVar34 = local_2f8._8_8_;
  if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
    dVar26 = *(double *)(lVar9 + 0xa0);
    dVar43 = *(double *)(lVar9 + 0xa8);
    dVar40 = *(double *)(lVar9 + 0xb0);
    dVar42 = *(double *)(lVar9 + 0xb8);
    dVar23 = *(double *)(lVar9 + 0xc0);
    dVar24 = *(double *)(lVar9 + 200);
    dVar30 = dVar43 * dVar29 * -1.0 +
             dVar40 * dStack_300 + local_308 * dVar42 * 1.0 + dVar34 * dVar26;
    dVar33 = dVar26 * dVar29 * 1.0 +
             dVar42 * dStack_300 + local_308 * dVar40 * -1.0 + dVar34 * dVar43;
    auVar38._0_8_ =
         dVar42 * dVar29 * 1.0 +
         ((local_308 * dVar43 * 1.0 + dVar34 * dVar40) - dStack_300 * dVar26);
    auVar38._8_8_ =
         dVar40 * dVar29 * -1.0 +
         ((local_308 * dVar26 * -1.0 + dVar34 * dVar42) - dStack_300 * dVar43);
    dVar26 = *(double *)(lVar9 + 0xd0) * 1.0;
    auVar36._8_8_ = dStack_300;
    auVar36._0_8_ = local_308;
    auVar20 = blendpd(auVar36,local_2f8,2);
    dVar40 = dVar24 * local_308 - dVar23 * dStack_300;
    dVar42 = dVar26 * dStack_300 - dVar24 * dVar29;
    dVar43 = dVar23 * dVar29 - dVar26 * auVar20._0_8_;
    dVar42 = dVar42 + dVar42;
    dVar43 = dVar43 + dVar43;
    dVar40 = dVar40 + dVar40;
    dStack_f0 = (dVar42 * dVar29 - dVar40 * auVar20._0_8_) + dVar34 * dVar43 + dVar24 + dStack_2e0;
    local_e8 = (dVar43 * local_308 - dVar42 * dStack_300) + dVar34 * dVar40 + dVar26 + local_2d8;
    local_f8 = (dVar40 * dStack_300 - dVar43 * dVar29) + dVar34 * dVar42 + dVar23 + local_2e8;
  }
  else {
    dVar42 = dStack_300 + dStack_300;
    dVar43 = dVar29 + dVar29;
    dVar40 = (local_308 + local_308) * local_308;
    dStack_1b0 = DAT_149934d80._8_8_ - (dVar29 * dVar43 + dVar40);
    local_188 = 1.0 - (dVar40 + dVar42 * dStack_300);
    dStack_190 = (local_308 + local_308) * dVar34;
    dVar40 = dVar42 * local_308 + dVar43 * dVar34;
    local_1a8 = dVar43 * dStack_300 + dStack_190;
    local_198 = dVar42 * dVar34 + local_308 * dVar43;
    local_1b8 = dVar42 * local_308 - dVar43 * dVar34;
    dStack_190 = dVar43 * dStack_300 - dStack_190;
    local_1c8 = local_308 * dVar43 - dVar42 * dVar34;
    local_1d8._8_4_ = SUB84(dVar40,0);
    local_1d8._0_8_ = (double)DAT_149934d80 - (dVar29 * dVar43 + dVar42 * dStack_300);
    local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_2e8;
    dStack_170 = dStack_2e0;
    local_168 = local_2d8;
    uStack_160 = 0x3ff0000000000000;
    dVar34 = *(double *)(lVar9 + 0xa0);
    dVar43 = *(double *)(lVar9 + 0xa8);
    dVar40 = *(double *)(lVar9 + 0xb0);
    dVar42 = dVar43 + dVar43;
    dVar23 = dVar40 + dVar40;
    dVar29 = dVar34 * (dVar34 + dVar34);
    dStack_230 = (DAT_149934d80._8_8_ - (dVar40 * dVar23 + dVar29)) * dVar26;
    local_208 = (1.0 - (dVar29 + dVar43 * dVar42)) * dVar33;
    dVar37 = *(double *)(lVar9 + 0xa0) * dVar23;
    dVar29 = *(double *)(lVar9 + 0xb8);
    dVar24 = dVar23 * dVar29;
    dVar25 = (dVar34 + dVar34) * *(double *)(lVar9 + 0xb8);
    dVar29 = dVar42 * dVar29;
    local_228 = (dVar23 * dVar43 + dVar25) * dVar26;
    local_218 = (dVar29 + dVar37) * dVar33;
    local_238 = (dVar42 * dVar34 - dVar24) * dVar26;
    dStack_210 = (dVar23 * dVar43 - dVar25) * dVar33;
    local_248 = (dVar37 - dVar29) * dVar30;
    local_258._8_8_ = (dVar42 * dVar34 + dVar24) * dVar30;
    local_258._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar23 + dVar43 * dVar42)) * dVar30;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = *(undefined8 *)(lVar9 + 0xc0);
    uStack_1f0 = *(undefined8 *)(lVar9 + 200);
    local_1e8 = *(undefined8 *)(lVar9 + 0xd0);
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(local_158);
    FUN_144a1c686(local_158,0x3e45798ee0000000);
    auVar21._8_8_ = -(ulonglong)(0.0 <= dVar26);
    auVar21._0_8_ = -(ulonglong)(0.0 <= dVar30);
    auVar20 = blendvpd(_DAT_149936790,auVar38,auVar21);
    dVar30 = (double)(~-(ulonglong)(0.0 <= dVar33) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar33) & 0x3ff0000000000000);
    dVar33 = auVar20._0_8_;
    dStack_150 = dStack_150 * dVar33;
    local_158 = (undefined1  [8])((double)local_158 * dVar33);
    local_148._0_8_ = (double)local_148._0_8_ * dVar33;
    dVar33 = auVar20._8_8_;
    local_128 = local_128 * dVar33;
    local_130 = local_130 * dVar33;
    local_138 = dVar33 * local_138;
    local_108 = local_108 * dVar30;
    dStack_110 = dStack_110 * dVar30;
    local_118 = dVar30 * local_118;
    FUN_14481fd10(&local_278);
    dVar30 = local_268 * local_268 + local_278 * local_278;
    dVar33 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar32._0_8_ = dVar30 + dVar33;
    auVar32._8_8_ = dVar30 + dVar33;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
    auVar20 = sqrtpd(auVar32,auVar32);
    auVar20 = divpd(auVar38,auVar20);
    auVar41._0_8_ = auVar20._0_8_ * local_268;
    auVar41._8_8_ = auVar20._8_8_ * dStack_260;
    dVar30 = (double)((ulonglong)(local_278 * auVar20._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
    dVar33 = (double)((ulonglong)(dStack_270 * auVar20._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
    auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar22);
  }
  uVar39 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
  auVar3._8_4_ = SUB84(dStack_f0,0);
  auVar3._0_8_ = local_f8;
  auVar3._12_4_ = uVar39;
  *(undefined1 (*) [16])(param_1 + 0x7c) = auVar3;
  param_1[0x7e] = (longlong)local_e8;
  param_1[0x7f] = param_1[0x7c];
  param_1[0x80] = param_1[0x7d];
  param_1[0x81] = param_1[0x7e];
  if (lVar7 != 0) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar9 = param_1[4];
    }
    else {
      lVar9 = 0;
    }
    lVar15 = param_1[0x39];
    dStack_150 = dVar33;
    local_158 = (undefined1  [8])dVar30;
    local_148 = auVar38;
    FUN_1448052ee(local_158,local_1d8);
    unique0x1000040d = SUB84(dStack_f0,0);
    local_158 = (undefined1  [8])local_f8;
    dStack_150._4_4_ = uVar39;
    local_148._0_8_ = local_e8;
    local_338 = 0;
    local_348 = param_1;
    local_340 = lVar15;
    plVar8 = (longlong *)FUN_14028e0e2(lVar9,lVar7,local_158,local_1d8);
    if (plVar8 != (longlong *)0x0) {
      if (local_298 != 0) {
        auVar4[0xf] = 0;
        auVar4._0_15_ = stack0xfffffffffffffea9;
        _local_158 = auVar4 << 8;
        local_130 = (double)((ulonglong)local_130 & 0xffffffff00000000);
        FUN_1456bb102(local_158,param_1[0x31]);
        FUN_140e99737(plVar8,&local_2a0,local_158);
        FUN_144a5ac3a(local_158);
      }
      if (param_1[0xd2] == 0) {
        lVar7 = param_1[0x10];
        local_328 = *(undefined8 *)(lVar7 + 0x2b0);
        uStack_320 = *(undefined8 *)(lVar7 + 0x2b8);
        local_318 = *(undefined8 *)(lVar7 + 0x2c0);
        (**(code **)(*plVar8 + 0x478))(plVar8);
      }
      else {
        FUN_14057a3b2(plVar8,0,0,1);
        local_348 = (longlong *)((ulonglong)local_348 & 0xffffffffffffff00);
        FUN_144927a08(plVar8,param_1[0x10] + 0x270,0,0);
        (**(code **)(*plVar8 + 0x490))
                  (plVar8,param_1[0xd2],&DAT_14cadad98,*(undefined8 *)(param_1[0x10] + 0x260));
      }
      local_1d8._0_4_ = 0;
      if (param_1 == (longlong *)0x0) {
        iVar13 = 0;
        uVar14 = local_1d8._0_4_;
      }
      else {
        uVar14 = *(uint *)((longlong)param_1 + 0xc);
        local_1d8 = ZEXT416(uVar14);
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar13 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar16);
          }
          LOCK();
          iVar13 = *(int *)(lVar7 + 0x10);
          bVar19 = iVar13 == 0;
          if (bVar19) {
            *(int *)(lVar7 + 0x10) = iVar16;
            iVar13 = 0;
          }
          UNLOCK();
          uVar14 = local_1d8._0_4_;
          if (bVar19) {
            iVar13 = iVar16;
          }
        }
      }
      local_1d8._0_4_ = uVar14;
      local_1d8._4_4_ = iVar13;
      local_1d8._8_8_ = DAT_14cb85268;
      (**(code **)(*plVar8 + 0xa80))(plVar8);
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(plVar8);
      }
      iVar13 = (int)param_1[0xd5];
      *(uint *)(param_1 + 0xd5) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0x6ac) < iVar13 + 1U) {
        FUN_140e402be(plVar17,iVar13);
      }
      *(longlong **)(*plVar17 + (longlong)iVar13 * 8) = plVar8;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(plVar8);
      }
      if (0 < *(int *)(param_1[0x10] + 0x240)) {
        auVar5[0xf] = 0;
        auVar5._0_15_ = stack0xfffffffffffffea9;
        _local_158 = auVar5 << 8;
        local_130 = (double)((ulonglong)local_130 & 0xffffffff00000000);
        FUN_1456bb102(local_158,param_1[0x30]);
        local_258._0_12_ = *(undefined1 (*) [12])(param_1[0x10] + 0x238);
        FUN_140e99737(plVar8,local_258,local_158);
        FUN_144a5ac3a(local_158);
      }
      (**(code **)(*plVar8 + 0xa60))(plVar8);
    }
  }
  FUN_14028e526(param_1);
  if (((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar7 = param_1[4], lVar7 != 0)) {
    lVar9 = 0;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar9 = lVar7;
    }
    if (*(longlong *)(lVar9 + 0x540) != 0) {
      lVar9 = 0;
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar9 = lVar7;
      }
      FUN_140776f46(*(undefined8 *)(lVar9 + 0x540),param_1);
      if ((param_1[0xef] != 0) && ((DAT_14cb26569 & 1) != 0)) {
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar7 = param_1[4];
        }
        else {
          lVar7 = 0;
        }
        uVar10 = *(undefined8 *)(lVar7 + 0x540);
        FUN_140056680(local_158,L"OnAttach");
        FUN_14028d5f4(uVar10,param_1,param_1[0xef],local_158);
        if (local_158 != (undefined1  [8])0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  lVar7 = param_1[0x10];
  if (*(char *)(lVar7 + 0x5d0) == '\x01') {
    fVar1 = *(float *)(lVar7 + 0x5d4);
    fVar2 = *(float *)(lVar7 + 0x5d8);
    FUN_14028e00e(param_1 + 0x4f,local_158);
    dVar26 = (double)param_1[0x58] * local_118;
    dVar29 = (double)param_1[0x59] * dStack_110;
    dVar33 = (double)param_1[0x5a] * local_108;
    dVar34 = dVar29 * (double)local_158 - dVar26 * dStack_150;
    dVar43 = dVar33 * dStack_150 - dVar29 * (double)local_148._0_8_;
    dVar30 = dVar26 * (double)local_148._0_8_ - (double)local_158 * dVar33;
    dVar43 = dVar43 + dVar43;
    dVar30 = dVar30 + dVar30;
    dVar34 = dVar34 + dVar34;
    local_248 = dVar34 * (double)local_148._8_8_ + dVar33 +
                (dVar30 * (double)local_158 - dVar43 * dStack_150);
    dVar33 = ((double)local_148._0_8_ * dVar43 - (double)local_158 * dVar34) +
             (double)local_148._8_8_ * dVar30 + dVar29;
    local_258._8_4_ = SUB84(dVar33,0);
    local_258._0_8_ =
         (dVar34 * dStack_150 - dVar30 * (double)local_148._0_8_) +
         (double)local_148._8_8_ * dVar43 + dVar26;
    local_258._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    FUN_1448052ee(param_1 + 0xd8,local_158);
    local_348 = (longlong *)CONCAT44(local_348._4_4_,fVar1 + fVar2);
    FUN_14893d58a(local_1d8,local_158,local_258);
    FUN_144a7484c(local_1d8,local_158);
    param_1[0xda] = local_148._0_8_;
    param_1[0xdb] = local_148._8_8_;
    param_1[0xd8] = (longlong)local_158;
    param_1[0xd9] = (longlong)dStack_150;
    lVar7 = param_1[0x10];
  }
  if ((longlong)*(int *)(lVar7 + 0x48) != 0) {
    lVar9 = (longlong)*(int *)(lVar7 + 0x48) * 0x28;
    plVar17 = (longlong *)(*(longlong *)(lVar7 + 0x40) + 8);
    do {
      plVar8 = plVar17 + -1;
      plVar11 = (longlong *)FUN_14479d2ce(plVar8);
      if (plVar11 == (longlong *)0x0) {
        if (*plVar17 != 0) {
          plVar11 = (longlong *)FUN_140007850();
          cVar6 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar11 == (longlong *)0x0) || (cVar6 == '\0')) {
            FUN_14485c47a(plVar8,plVar11);
            if (plVar11 == (longlong *)0x0) goto LAB_140289c9a;
          }
          else {
            uVar14 = *(uint *)((longlong)plVar11 + 0xc);
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar8,plVar11);
            }
          }
          if ((*(uint *)(plVar11 + 1) >> 0x1e & 1) == 0) goto LAB_140289c76;
        }
      }
      else {
LAB_140289c76:
        lVar7 = FUN_144a797b2();
        if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              == lVar7 + 0x30)) && (lVar7 = FUN_145a557f0(), lVar7 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= (int)plVar11[7] &&
            (*(longlong *)(plVar11[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
          lVar7 = plVar11[0x22];
          if (lVar7 == 0) {
            (**(code **)(*plVar11 + 1000))(plVar11);
            lVar7 = plVar11[0x22];
            if (lVar7 == 0) goto LAB_140289c9a;
          }
          uVar10 = *(undefined8 *)(lVar7 + 0x28);
          *(longlong **)(lVar7 + 0x28) = param_1;
          FUN_14876f346(lVar7,param_1,param_1[0x4f]);
          *(undefined8 *)(lVar7 + 0x28) = uVar10;
        }
      }
LAB_140289c9a:
      plVar17 = plVar17 + 5;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  if ((*(byte *)((longlong)param_1 + 0x103) & 8) != 0) {
    fVar1 = *(float *)(param_1 + 0xf5);
    lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_14163f334(param_1,(float)((double)fVar1 - *(double *)(lVar7 + 0x6d0)),1);
  }
  if ((local_d0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14028a09e FUN_14028a09e body=177 status=ok
// SIG undefined FUN_14028a09e(void)

undefined8 * FUN_14028a09e(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb85290) {
    FUN_144b3d300(&DAT_14cb85290);
    if (DAT_14cb85290 == -1) {
      pwVar2 = L"OnAttachedComponentCollisionChanged";
      puVar3 = local_68;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      FUN_1446f470e(&DAT_14cb85288,local_68,1);
      _Init_thread_footer(&DAT_14cb85290);
    }
  }
  *param_1 = DAT_14cb85288;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028a150 FUN_14028a150 body=196 status=ok
// SIG undefined FUN_14028a150(void)

undefined8 * FUN_14028a150(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8529c) {
    FUN_144b3d300(&DAT_14cb8529c);
    if (DAT_14cb8529c == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"estroyed",9);
      builtin_wcsncpy(local_48 + 8,L"edActorD",8);
      builtin_wcsncpy(local_48,L"OnAttach",8);
      FUN_1446f470e(&DAT_14cb85294,local_48,1);
      _Init_thread_footer(&DAT_14cb8529c);
    }
  }
  *param_1 = DAT_14cb85294;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028a216 FUN_14028a216 body=1529 status=ok
// SIG undefined FUN_14028a216(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028a216(longlong *param_1,double *param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double _X;
  double dVar25;
  double _X_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double _X_01;
  double dVar28;
  undefined1 auStack_f8 [32];
  double *local_d8;
  undefined1 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar28 = *param_2;
  if ((dVar28 == (double)param_1[0x39]) && (!NAN(dVar28) && !NAN((double)param_1[0x39]))) {
    if ((param_2[1] == (double)param_1[0x3a]) && (!NAN(param_2[1]) && !NAN((double)param_1[0x3a])))
    {
      if ((param_2[2] == (double)param_1[0x3b]) && (!NAN(param_2[2]) && !NAN((double)param_1[0x3b]))
         ) goto LAB_14028a509;
    }
  }
  iVar3 = _finite(dVar28);
  if ((iVar3 == 0) ||
     ((iVar3 = _finite(param_2[1]), iVar3 == 0 || (iVar3 = _finite(param_2[2]), iVar3 == 0)))) {
    *param_2 = 1.0;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
    dVar21 = 1.0;
    dVar25 = 1.0;
    dVar28 = 1.0;
  }
  else {
    dVar28 = *param_2;
    dVar25 = param_2[1];
    dVar21 = param_2[2];
  }
  if (ABS((float)dVar28) < 0.001) {
    dVar28 = (double)((ulonglong)((uint)((ulonglong)dVar28 >> 0x20) & 0x80000000) << 0x20 |
                     0x3f50624de0000000);
  }
  if (ABS((float)dVar25) < 0.001) {
    dVar25 = (double)((ulonglong)((uint)((ulonglong)dVar25 >> 0x20) & 0x80000000) << 0x20 |
                     0x3f50624de0000000);
  }
  if (ABS((float)dVar21) < 0.001) {
    dVar21 = (double)((ulonglong)((uint)((ulonglong)dVar21 >> 0x20) & 0x80000000) << 0x20 |
                     0x3f50624de0000000);
  }
  uVar1 = param_1[7];
  if (uVar1 < 0xffffffff00000000) {
    plVar8 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar1,7);
  }
  else {
    uVar9 = (uint)uVar1;
    if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
        lVar4 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
        puVar7 = *(uint **)(lVar4 + 0x18);
        if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
          puVar7 = (uint *)(lVar4 + 8);
        }
        *puVar7 = *puVar7 | 0x80;
        *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
      }
    }
  }
  param_1[0x39] = (longlong)dVar28;
  param_1[0x3a] = (longlong)dVar25;
  param_1[0x3b] = (longlong)dVar21;
  if (((*(uint *)(param_1 + 1) >> 9 & 1) == 0) &&
     ((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) >> 9 & 1) == 0)))) {
    auVar12 = *(undefined1 (*) [16])(param_1 + 0x36);
    dVar25 = auVar12._0_8_;
    dVar21 = auVar12._8_8_;
    dVar28 = (double)param_1[0x38];
    pdVar5 = (double *)param_1[0x46];
    if (pdVar5 == (double *)0x0) {
      pdVar5 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar5 = DAT_14c8463d0;
      pdVar5[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar5[2] = DAT_14c8463e0;
      pdVar5[3] = dVar10;
      dVar10 = DAT_14c846500;
      pdVar5[4] = DAT_14c8464f8;
      pdVar5[5] = dVar10;
      pdVar5[6] = DAT_14c846508;
      param_1[0x46] = (longlong)pdVar5;
    }
    auVar16 = _DAT_1499387d0;
    if (((((pdVar5[4] != dVar25) || (NAN(pdVar5[4]) || NAN(dVar25))) || (pdVar5[5] != dVar21)) ||
        ((NAN(pdVar5[5]) || NAN(dVar21) || (pdVar5[6] != dVar28)))) ||
       (NAN(pdVar5[6]) || NAN(dVar28))) {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar28;
      dVar10 = (double)DAT_1499387d0;
      dVar11 = DAT_1499387d0._8_8_;
      auVar12 = divpd(auVar12,_DAT_1499387d0);
      auVar15 = divpd(auVar18,_DAT_1499387d0);
      auVar12 = roundpd(auVar12,auVar12,3);
      auVar15 = roundpd(auVar15,auVar15,3);
      auVar26._0_8_ = dVar25 - auVar12._0_8_ * dVar10;
      auVar26._8_8_ = dVar21 - auVar12._8_8_ * dVar11;
      auVar19._0_8_ = dVar28 - auVar15._0_8_ * dVar10;
      auVar19._8_8_ = 0.0 - auVar15._8_8_ * dVar11;
      auVar23._0_8_ = auVar26._0_8_ + dVar10;
      auVar23._8_8_ = auVar26._8_8_ + dVar11;
      auVar17._0_8_ = auVar19._0_8_ + dVar10;
      auVar17._8_8_ = auVar19._8_8_ + dVar11;
      auVar15._8_8_ = -(ulonglong)(0.0 <= auVar26._8_8_);
      auVar15._0_8_ = -(ulonglong)(0.0 <= auVar26._0_8_);
      auVar12 = blendvpd(auVar23,auVar26,auVar15);
      auVar24._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
      auVar24._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
      auVar15 = blendvpd(auVar17,auVar19,auVar24);
      auVar20._0_8_ = auVar12._0_8_ + -360.0;
      auVar20._8_8_ = auVar12._8_8_ + -360.0;
      auVar13._8_8_ = -(ulonglong)(180.0 < auVar12._8_8_);
      auVar13._0_8_ = -(ulonglong)(180.0 < auVar12._0_8_);
      auVar24 = blendvpd(auVar12,auVar20,auVar13);
      auVar14._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
      auVar14._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
      auVar12._8_8_ = auVar15._8_8_ + 0.0;
      auVar12._0_8_ = auVar15._0_8_ + -360.0;
      auVar12 = blendvpd(auVar15,auVar12,auVar14);
      *(undefined1 (*) [16])(pdVar5 + 4) = auVar24;
      dVar28 = auVar12._0_8_;
      pdVar5[6] = dVar28;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = dVar28;
      auVar12 = divpd(auVar24,auVar16);
      auVar16 = divpd(auVar27,auVar16);
      auVar12 = roundpd(auVar12,auVar12,3);
      auVar16 = roundpd(auVar16,auVar16,3);
      dVar22 = (auVar24._0_8_ - auVar12._0_8_ * dVar10) * 0.008726646259971648;
      _X = (auVar24._8_8_ - auVar12._8_8_ * dVar11) * 0.008726646259971648;
      _X_00 = (dVar28 - auVar16._0_8_ * dVar10) * 0.008726646259971648;
      _X_01 = (0.0 - auVar16._8_8_ * dVar11) * 0.008726646259971648;
      dVar28 = sin(dVar22);
      dVar25 = sin(_X);
      dVar21 = sin(_X_00);
      sin(_X_01);
      dVar10 = cos(dVar22);
      dVar11 = cos(_X);
      dVar22 = cos(_X_00);
      cos(_X_01);
      *pdVar5 = dVar28 * dVar25 * dVar22 - dVar10 * dVar11 * dVar21;
      pdVar5[1] = -(dVar28 * dVar11 * dVar22) - dVar10 * dVar25 * dVar21;
      pdVar5[2] = -(dVar11 * dVar28 * dVar21) + dVar25 * dVar10 * dVar22;
      pdVar5[3] = dVar25 * dVar28 * dVar21 + dVar11 * dVar10 * dVar22;
    }
    local_c8 = *pdVar5;
    dStack_c0 = pdVar5[1];
    local_b8 = pdVar5[2];
    dStack_b0 = pdVar5[3];
    local_d8 = &local_c8;
    local_d0 = 0;
    FUN_140092404(param_1,param_1[0x24],param_1[0x25],0);
    if ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) {
      if ((longlong)(int)param_1[0x44] < 1) {
        if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
          cVar2 = (**(code **)(*param_1 + 0x508))(param_1,0,1,0);
          *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar2 * '\x02';
        }
      }
      else {
        lVar4 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
        *(byte *)(lVar4 + 0x608) = *(byte *)(lVar4 + 0x608) | 2;
        iVar3 = *(int *)(lVar4 + 0x10);
        *(undefined4 *)(lVar4 + 0x10) = 1;
        *(undefined4 *)(lVar4 + 200) = 0xffffffff;
        FUN_14011cfa4(lVar4 + 0xd0,0,0);
        if (iVar3 == 3) {
          *(undefined4 *)(lVar4 + 0x10) = 3;
        }
      }
    }
  }
LAB_14028a509:
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14028a810 FUN_14028a810 body=103 status=ok
// SIG undefined FUN_14028a810(void)

undefined4
FUN_14028a810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,char param_7)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  char cVar2;
  
  cVar2 = param_7;
  uVar1 = FUN_14028a878(param_1);
  if (param_7 != '\0' && (char)uVar1 == '\x01') {
    FUN_140090446(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_7) & 0xffffffff,param_3,
                  param_4,param_5,param_6,cVar2);
    FUN_1447f69b6(param_1 + 0x1140);
  }
  return uVar1;
}



// FUNCTION 14028a878 FUN_14028a878 body=6872 status=ok
// SIG undefined FUN_14028a878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14028a878(longlong *param_1,double *param_2,double *param_3,ulonglong param_4,
                       void *param_5,uint param_6,undefined1 param_7)

{
  double *pdVar1;
  byte *pbVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  double *pdVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined7 uVar28;
  ulonglong uVar29;
  longlong lVar30;
  bool bVar31;
  longlong lVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  float fVar55;
  double _X;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double _X_00;
  undefined1 auStack_a28 [32];
  double *local_a08;
  double **local_a00;
  undefined4 local_9f8;
  double **local_9f0;
  byte local_9db;
  undefined1 local_9da;
  char local_9d9;
  int local_9d8;
  uint local_9d4;
  longlong *local_9d0;
  int local_9c4;
  longlong local_9c0;
  int local_9b8;
  undefined4 local_9b4;
  longlong local_9b0;
  double local_9a8;
  double local_9a0;
  double local_998;
  double local_990;
  undefined1 local_988 [16];
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  undefined8 local_958;
  undefined4 local_950;
  double *local_948;
  undefined8 uStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  undefined1 local_918 [4];
  float local_914;
  byte local_86b;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined4 local_848;
  undefined1 local_844;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined1 local_818 [16];
  double local_808;
  double dStack_800;
  double local_7f0;
  double dStack_7e8;
  double local_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  undefined8 local_7b8;
  longlong lStack_7b0;
  longlong local_7a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  double *local_488;
  longlong lStack_480;
  byte local_478;
  undefined2 uStack_477;
  byte bStack_475;
  undefined1 uStack_474;
  byte bStack_473;
  undefined1 uStack_472;
  undefined1 uStack_471;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined1 local_468;
  undefined4 local_464;
  ushort local_460;
  undefined1 local_458 [32];
  undefined1 *local_438;
  undefined8 local_430;
  undefined4 local_428 [4];
  undefined4 *local_418;
  undefined8 local_410;
  undefined1 local_408;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_a28;
  if ((param_1 == (longlong *)0x0) ||
     (uVar29 = (ulonglong)*(uint *)(param_1 + 1), (*(uint *)(param_1 + 1) >> 0x1e & 1) != 0)) {
LAB_14028c0d5:
    uVar29 = 0;
    if (param_5 == (void *)0x0) goto LAB_14028c104;
    memset(param_5,0,0x100);
    *(undefined4 *)((longlong)param_5 + 0xd0) = 0xffffffff;
    *(undefined4 *)((longlong)param_5 + 4) = 0x3f800000;
  }
  else {
    plVar22 = param_1;
    if (((*(char *)((longlong)param_1 + 0x1fb) != '\x02') &&
        ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0)) &&
       ((uVar29 = param_1[0x16], uVar29 != 0 || (uVar29 = FUN_1448abda6(), uVar29 != 0)))) {
      bVar14 = *(byte *)(uVar29 + 0x152);
      plVar22 = (longlong *)(ulonglong)bVar14;
      if (((bVar14 == 1) || ((bVar14 < 7 && ((0x68U >> (bVar14 & 0x1f) & 1) != 0)))) &&
         ((*(byte *)(uVar29 + 0x153) & 0x40) != 0)) {
        lVar32 = param_1[0x15];
        uVar29 = 0;
        if ((lVar32 != 0) &&
           (uVar29 = CONCAT71((int7)((ulonglong)lVar32 >> 8),*(undefined1 *)(lVar32 + 100)) &
                     0xffffffffffffff22, (char)uVar29 == '\x02')) goto LAB_14028c0d5;
      }
    }
    uVar15 = (undefined4)uVar29;
    uVar23 = SUB84(plVar22,0);
    if ((*(byte *)(param_1 + 0x3f) & 1) == 0) {
      auVar38 = *(undefined1 (*) [16])(param_1 + 0x36);
      dVar35 = auVar38._0_8_;
      dVar36 = auVar38._8_8_;
      dVar34 = (double)param_1[0x38];
      pdVar19 = (double *)param_1[0x46];
      if (pdVar19 == (double *)0x0) {
        pdVar19 = (double *)FUN_14001cc68(0x40,0x10);
        dVar44 = DAT_14c8463d8;
        *pdVar19 = DAT_14c8463d0;
        pdVar19[1] = dVar44;
        dVar44 = DAT_14c8463e8;
        pdVar19[2] = DAT_14c8463e0;
        pdVar19[3] = dVar44;
        dVar44 = DAT_14c846500;
        pdVar19[4] = DAT_14c8464f8;
        pdVar19[5] = dVar44;
        pdVar19[6] = DAT_14c846508;
        param_1[0x46] = (longlong)pdVar19;
      }
      auVar43 = _DAT_1499387d0;
      if ((((pdVar19[4] != dVar35) || (NAN(pdVar19[4]) || NAN(dVar35))) || (pdVar19[5] != dVar36))
         || (((NAN(pdVar19[5]) || NAN(dVar36) || (pdVar19[6] != dVar34)) ||
             (NAN(pdVar19[6]) || NAN(dVar34))))) {
        auVar47._8_8_ = 0;
        auVar47._0_8_ = dVar34;
        dVar44 = (double)DAT_1499387d0;
        dVar37 = DAT_1499387d0._8_8_;
        auVar38 = divpd(auVar38,_DAT_1499387d0);
        auVar42 = divpd(auVar47,_DAT_1499387d0);
        auVar38 = roundpd(auVar38,auVar38,3);
        auVar42 = roundpd(auVar42,auVar42,3);
        auVar56._0_8_ = dVar35 - auVar38._0_8_ * dVar44;
        auVar56._8_8_ = dVar36 - auVar38._8_8_ * dVar37;
        auVar48._0_8_ = dVar34 - auVar42._0_8_ * dVar44;
        auVar48._8_8_ = 0.0 - auVar42._8_8_ * dVar37;
        auVar52._0_8_ = auVar56._0_8_ + dVar44;
        auVar52._8_8_ = auVar56._8_8_ + dVar37;
        auVar46._0_8_ = auVar48._0_8_ + dVar44;
        auVar46._8_8_ = auVar48._8_8_ + dVar37;
        auVar42._8_8_ = -(ulonglong)(0.0 <= auVar56._8_8_);
        auVar42._0_8_ = -(ulonglong)(0.0 <= auVar56._0_8_);
        auVar38 = blendvpd(auVar52,auVar56,auVar42);
        auVar53._8_8_ = -(ulonglong)(0.0 <= auVar48._8_8_);
        auVar53._0_8_ = -(ulonglong)(0.0 <= auVar48._0_8_);
        auVar42 = blendvpd(auVar46,auVar48,auVar53);
        auVar49._0_8_ = auVar38._0_8_ + -360.0;
        auVar49._8_8_ = auVar38._8_8_ + -360.0;
        auVar39._8_8_ = -(ulonglong)(180.0 < auVar38._8_8_);
        auVar39._0_8_ = -(ulonglong)(180.0 < auVar38._0_8_);
        auVar53 = blendvpd(auVar38,auVar49,auVar39);
        auVar40._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
        auVar40._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
        auVar38._8_8_ = auVar42._8_8_ + 0.0;
        auVar38._0_8_ = auVar42._0_8_ + -360.0;
        auVar38 = blendvpd(auVar42,auVar38,auVar40);
        *(undefined1 (*) [16])(pdVar19 + 4) = auVar53;
        dVar34 = auVar38._0_8_;
        pdVar19[6] = dVar34;
        auVar57._8_8_ = 0;
        auVar57._0_8_ = dVar34;
        auVar38 = divpd(auVar53,auVar43);
        auVar43 = divpd(auVar57,auVar43);
        auVar38 = roundpd(auVar38,auVar38,3);
        auVar43 = roundpd(auVar43,auVar43,3);
        dVar41 = (auVar53._0_8_ - auVar38._0_8_ * dVar44) * 0.008726646259971648;
        dVar54 = (auVar53._8_8_ - auVar38._8_8_ * dVar37) * 0.008726646259971648;
        _X = (dVar34 - auVar43._0_8_ * dVar44) * 0.008726646259971648;
        _X_00 = (0.0 - auVar43._8_8_ * dVar37) * 0.008726646259971648;
        dVar34 = sin(dVar41);
        dVar35 = sin(dVar54);
        dVar36 = sin(_X);
        sin(_X_00);
        dVar44 = cos(dVar41);
        dVar37 = cos(dVar54);
        dVar41 = cos(_X);
        cos(_X_00);
        *pdVar19 = dVar34 * dVar35 * dVar41 - dVar44 * dVar37 * dVar36;
        pdVar19[1] = -(dVar34 * dVar37 * dVar41) - dVar44 * dVar35 * dVar36;
        pdVar19[2] = -(dVar37 * dVar34 * dVar36) + dVar35 * dVar44 * dVar41;
        pdVar19[3] = dVar35 * dVar34 * dVar36 + dVar37 * dVar44 * dVar41;
      }
      local_3f8 = *pdVar19;
      dStack_3f0 = pdVar19[1];
      local_3e8 = pdVar19[2];
      dStack_3e0 = pdVar19[3];
      local_a08 = &local_3f8;
      local_a00 = (double **)((ulonglong)local_a00 & 0xffffffffffffff00);
      plVar22 = param_1;
      uVar15 = FUN_140092404(param_1,param_1[0x24],param_1[0x25],0);
      uVar23 = SUB84(plVar22,0);
    }
    dVar36 = (double)param_1[0x4c];
    dStack_7d0 = (double)param_1[0x4d];
    dVar34 = (double)param_1[0x4d];
    dVar35 = (double)param_1[0x4e];
    local_7e0 = param_2[2] + dVar35;
    dStack_7e8 = param_2[1] + dVar34;
    local_7f0 = *param_2 + dVar36;
    fVar50 = (float)((local_7e0 - dVar35) * (local_7e0 - dVar35) +
                    (local_7f0 - dVar36) * (local_7f0 - dVar36) +
                    (dStack_7e8 - dVar34) * (dStack_7e8 - dVar34));
    local_818 = *(undefined1 (*) [16])(param_1 + 0x48);
    local_808 = (double)param_1[0x4a];
    dStack_800 = (double)param_1[0x4b];
    cVar13 = (char)(param_4 & 0xffffffff);
    if (cVar13 == '\0') {
      fVar55 = 0.0;
    }
    else {
      fVar55 = 1.5999998e-07;
    }
    local_7d8 = dVar36;
    local_7c8 = dVar35;
    if (fVar55 < fVar50) {
LAB_14028ab3d:
      local_858 = 0;
      uStack_850 = 0;
      local_868 = 0;
      uStack_860 = 0;
      local_848 = 0xffffffff;
      local_844 = 0;
      local_840 = 0;
      uStack_838 = 0;
      local_828 = 0;
      uStack_820 = 0;
      local_86b = 0;
      local_914 = 1.0;
      local_e0 = (double *)0x0;
      local_d8 = 0x300000000;
      plVar22 = (longlong *)param_1[0x15];
      local_9d9 = cVar13;
      local_9d0 = plVar22;
      if (cVar13 == '\0') {
        local_a08 = (double *)CONCAT71(local_a08._1_7_,param_7);
        local_938 = local_7f0;
        dStack_930 = dStack_7e8;
        local_928 = local_7e0;
        cVar13 = FUN_14494b8fc(param_1,&local_938,param_3,(param_6 & 2) >> 1);
        bVar31 = fVar50 == 0.0;
        if ((fVar50 != 0.0) || (NAN(fVar50))) {
LAB_14028af0f:
          uVar15 = 0;
        }
        else {
          local_7b8 = (char *)param_1[0x50];
          lStack_7b0 = param_1[0x51];
          local_7a8 = param_1[0x52];
          cVar12 = (**(code **)(*param_1 + 0x828))(param_1,local_818,param_3);
          if (cVar12 == '\0') goto LAB_14028af0f;
          uVar16 = (**(code **)(*param_1 + 0x570))(param_1);
          uVar15 = (undefined4)
                   CONCAT71((int7)((ulonglong)param_2 >> 8),
                            uVar16 == 5 || (uVar16 & 0xfffffffd) == 1);
        }
        bVar10 = false;
        uVar29 = 0;
        bVar11 = false;
        if (cVar13 != '\0') goto LAB_14028bba7;
      }
      else {
        local_948 = (double *)0x0;
        uStack_940 = 0;
        uVar16 = (**(code **)(*param_1 + 0x570))(param_1);
        bVar31 = (uVar16 & 0xfffffffd) != 1;
        lVar32 = param_1[0x16];
        if (lVar32 == 0) {
          lVar32 = FUN_1448abda6(param_1);
        }
        if ((lVar32 == 0 || uVar16 != 5 && bVar31) || fVar50 <= 0.0) {
          if (fVar50 <= 0.0) {
            if (uVar16 != 5 && bVar31 || fVar50 != 0.0) goto LAB_14028b07b;
            local_7b8 = (char *)param_1[0x50];
            lStack_7b0 = param_1[0x51];
            local_7a8 = param_1[0x52];
            uVar15 = (**(code **)(*param_1 + 0x828))(param_1,local_818,param_3);
            bVar31 = true;
          }
          else {
            dVar34 = dVar34 + param_2[1];
            dVar35 = dVar35 + param_2[2];
            dVar36 = dVar36 + *param_2;
LAB_14028b07b:
            bVar31 = false;
            uVar15 = 0;
          }
          bVar10 = false;
        }
        else {
          local_9b0 = lVar32;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cad1d68) && (FUN_144b3d300(&DAT_14cad1d68), DAT_14cad1d68 == -1)) {
            FUN_1446f470e(&DAT_14cad1d60,L"MoveComponent",1);
            _Init_thread_footer(&DAT_14cad1d68);
          }
          local_9db = 1;
          if ((0 < (longlong)(int)param_1[0x44]) &&
             (lVar32 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8),
             lVar32 != 0)) {
            local_9db = (*(byte *)(lVar32 + 0x608) & 4) >> 2;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cad1dfc) && (FUN_144b3d300(&DAT_14cad1dfc), DAT_14cad1dfc == -1)) {
            local_7b8 = "MoveComponent";
            lStack_7b0 = CONCAT35(lStack_7b0._5_3_,0xd);
            FUN_14001a6c0(&local_7b8,1);
            _Init_thread_footer(&DAT_14cad1dfc);
          }
          local_464 = 0;
          lStack_480 = 0;
          local_460 = 0x101;
          local_438 = (undefined1 *)0x0;
          local_430 = 0x800000000;
          local_418 = (undefined4 *)0x0;
          local_410 = 0x400000000;
          local_478 = 0;
          uStack_46c = 0;
          uStack_477 = 1;
          bStack_475 = 0;
          local_468 = 0;
          uStack_474 = 0;
          bStack_473 = 0;
          uStack_472 = 0;
          if (plVar22 != (longlong *)0x0) {
            local_428[0] = *(undefined4 *)((longlong)plVar22 + 0xc);
            local_410 = 0x400000001;
            lStack_480 = plVar22[3];
          }
          uStack_471 = 1;
          uStack_470 = CONCAT31(uStack_470._1_3_,1);
          local_408 = 0;
          local_488 = DAT_14cad1d60;
          iVar24 = (int)param_1[0x7d];
          if (0 < iVar24) {
            lVar32 = 0;
            do {
              uVar29 = local_410;
              lVar30 = *(longlong *)(param_1[0x7c] + lVar32 * 8);
              if (lVar30 != 0) {
                uVar15 = *(undefined4 *)(lVar30 + 0xc);
                lVar30 = (longlong)(int)local_410;
                uVar16 = (int)local_410 + 1;
                local_410 = CONCAT44(local_410._4_4_,uVar16);
                if (local_410._4_4_ < uVar16) {
                  FUN_1447de67e(local_428,uVar29 & 0xffffffff);
                }
                puVar17 = local_418;
                if (local_418 == (undefined4 *)0x0) {
                  puVar17 = local_428;
                }
                puVar17[lVar30] = uVar15;
                iVar24 = (int)param_1[0x7d];
              }
              lVar32 = lVar32 + 1;
            } while (lVar32 < iVar24);
          }
          lVar32 = param_1[0x7f];
          if ((longlong)(int)lVar32 != 0) {
            local_9c0 = param_1[0x7e];
            lVar30 = 0;
            do {
              plVar22 = *(longlong **)(local_9c0 + lVar30);
              if (((plVar22 != (longlong *)0x0) &&
                  (uVar16 = (**(code **)(*plVar22 + 0x570))(plVar22), uVar29 = local_430, uVar16 < 6
                  )) && ((0x2aU >> (uVar16 & 0x1f) & 1) != 0)) {
                uVar15 = *(undefined4 *)((longlong)plVar22 + 0xc);
                lVar27 = (longlong)(int)local_430;
                uVar16 = (int)local_430 + 1;
                local_430 = CONCAT44(local_430._4_4_,uVar16);
                if (local_430._4_4_ < uVar16) {
                  FUN_140694806(local_458,uVar29 & 0xffffffff);
                }
                puVar20 = local_438;
                if (local_438 == (undefined1 *)0x0) {
                  puVar20 = local_458;
                }
                *(undefined4 *)(puVar20 + lVar27 * 4) = uVar15;
                local_460 = local_460 & 0xff;
              }
              lVar30 = lVar30 + 8;
            } while ((longlong)(int)lVar32 * 8 != lVar30);
          }
          local_478 = *(byte *)((longlong)param_1 + 0x2d3) >> 5 & 1;
          bStack_475 = *(byte *)((longlong)param_1 + 0x2d3) >> 6 & 1;
          local_468 = *(undefined1 *)((longlong)param_1 + 0x2ea);
          if (((*(byte *)((longlong)param_1 + 0x2e4) & 8) != 0) &&
             (lVar32 = param_1[0x15], lVar32 != 0)) {
            uVar21 = FUN_140757e32();
            plVar22 = (longlong *)FUN_144718840(lVar32,uVar21);
            if (plVar22 != (longlong *)0x0) {
              (**(code **)(*plVar22 + 0x20))(plVar22,&local_488);
            }
          }
          bStack_473 = bStack_473 | (*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0 & local_9db;
          local_9f8 = (**(code **)(*param_1 + 0x580))(param_1);
          local_a00 = (double **)local_818;
          local_a08 = &local_7f0;
          local_9f0 = &local_488;
          cVar13 = FUN_14342a8ba(local_9b0,&local_948,param_1,&local_7d8);
          plVar22 = local_9d0;
          if (0 < (int)uStack_940) {
            if (fVar50 < 0.0) {
              fVar50 = sqrtf(fVar50);
            }
            else {
              fVar50 = SQRT(fVar50);
            }
            if (0 < (int)uStack_940) {
              fVar33 = 0.1;
              if (1.0 / fVar50 <= 0.1) {
                fVar33 = 1.0 / fVar50;
              }
              if (fVar33 <= 0.1 / fVar50) {
                fVar33 = 0.1 / fVar50;
              }
              lVar32 = 4;
              lVar30 = 0;
              do {
                fVar50 = *(float *)((longlong)local_948 + lVar32) - (fVar33 + 0.001);
                if (1.0 <= fVar50) {
                  fVar50 = 1.0;
                }
                if (fVar50 <= 0.0) {
                  fVar50 = 0.0;
                }
                *(float *)((longlong)local_948 + lVar32) = fVar50;
                lVar30 = lVar30 + 1;
                lVar32 = lVar32 + 0x100;
              } while (lVar30 < (int)uStack_940);
            }
          }
          if (cVar13 == '\0') {
            bVar10 = false;
            local_9d8 = -1;
            if ((0 < (int)uStack_940) &&
               (((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0 & local_9db) == 0))
            goto LAB_14028b147;
          }
          else {
            if ((int)uStack_940 < 1) {
              local_9d8 = -1;
            }
            else {
LAB_14028b147:
              local_9c0 = CONCAT71(local_9c0._1_7_,plVar22 != (longlong *)0x0 & (byte)param_6);
              local_9d4 = 0xffffffff;
              fVar50 = 3.4e+38;
              lVar32 = 0;
              local_9d8 = -1;
              do {
                pdVar19 = local_948 + lVar32 * 0x20;
                fVar33 = fVar50;
                if ((*(byte *)((longlong)local_948 + lVar32 * 0x100 + 0xad) & 1) == 0) {
                  bVar14 = *(byte *)((longlong)param_1 + 0x2d3) & 8;
                  uVar16 = local_9d4;
                  if (((((((local_9db & bVar14 == 0) == 0) &&
                         (*(int *)((longlong)pdVar19 + 0xdc) != 0)) &&
                        (uVar25 = *(uint *)(pdVar19 + 0x1b), -1 < (int)uVar25)) &&
                       (((int)uVar25 < DAT_14c9647dc &&
                        (puVar26 = (undefined8 *)
                                   ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
                        puVar26 != (undefined8 *)0x0)))) &&
                      (*(int *)(puVar26 + 2) == *(int *)((longlong)pdVar19 + 0xdc))) &&
                     ((((*(uint *)(puVar26 + 1) & 0x10200000) == 0 &&
                       (plVar22 = (longlong *)*puVar26, plVar22 != (longlong *)0x0)) &&
                      (((local_9db & (*(byte *)((longlong)plVar22 + 0x2d3) & 8) == 0) == 0 &&
                       (plVar22 != param_1)))))) {
                    if (local_9db == 0) {
                      if (local_9d0 != (longlong *)0x0) {
LAB_14028b497:
                        pdVar1 = pdVar19 + 0x17;
                        cVar13 = FUN_144a41512(pdVar1);
                        uVar16 = local_9d4;
                        if (cVar13 != '\0') {
                          if (*(longlong *)(local_9b0 + 0x30) == 0) {
                            uVar21 = 0;
                          }
                          else {
                            uVar21 = *(undefined8 *)(*(longlong *)(local_9b0 + 0x30) + 0x2b0);
                          }
                          cVar13 = FUN_144a3f970(pdVar1,uVar21);
                          uVar16 = local_9d4;
                          if ((cVar13 == '\0') &&
                             ((lVar30 = FUN_144a3ff20(pdVar1), lVar30 == 0 ||
                              (lVar30 = FUN_144a3ff20(pdVar1), uVar16 = local_9d4,
                              (*(byte *)(lVar30 + 100) & 2) != 0)))) {
                            if ((-1 < (int)local_9d4) &&
                               (uVar29 = (ulonglong)local_9d4,
                               pfVar3 = (float *)((longlong)local_948 + uVar29 * 0x100 + 4),
                               *pfVar3 <= *(float *)((longlong)pdVar19 + 4) &&
                               *(float *)((longlong)pdVar19 + 4) != *pfVar3)) goto LAB_14028b9c8;
                            iVar24 = (int)local_d8;
                            if ((local_9d8 == -1) &&
                               (local_9d8 = -1, 0.0 < *(float *)((longlong)pdVar19 + 4))) {
                              local_9d8 = (int)local_d8;
                            }
                            memcpy((void *)((longlong)&local_7b8 + 7),pdVar19,0xa8);
                            iVar4 = *(int *)(pdVar19 + 0x15);
                            local_958 = *(undefined8 *)((longlong)pdVar19 + 0xac);
                            local_950 = *(undefined4 *)((longlong)pdVar19 + 0xb4);
                            local_9a8 = pdVar19[0x17];
                            local_968 = pdVar19[0x18];
                            dStack_960 = pdVar19[0x19];
                            local_9b4 = *(undefined4 *)(pdVar19 + 0x1a);
                            local_9da = *(undefined1 *)((longlong)pdVar19 + 0xd4);
                            iVar5 = *(int *)(pdVar19 + 0x1b);
                            local_9c4 = *(int *)((longlong)pdVar19 + 0xdc);
                            local_978 = pdVar19[0x1e];
                            dStack_970 = pdVar19[0x1f];
                            local_988 = *(undefined1 (*) [16])(pdVar19 + 0x1c);
                            pdVar19 = local_e0;
                            if (local_e0 == (double *)0x0) {
                              pdVar19 = &local_3f8;
                            }
                            if (iVar24 != 0) {
                              uVar29 = 0;
                              do {
                                if (((iVar5 == *(int *)((longlong)pdVar19 + uVar29 + 0xe0)) &&
                                    (local_9c4 == *(int *)((longlong)pdVar19 + uVar29 + 0xe4))) &&
                                   (iVar4 == *(int *)((longlong)pdVar19 + uVar29 + 0xb0))) {
                                  uVar16 = local_9d4;
                                  if ((int)(uVar29 >> 3) * 0x3e0f83e1 != -1) goto LAB_14028b476;
                                  break;
                                }
                                uVar29 = uVar29 + 0x108;
                              } while ((longlong)iVar24 * 0x108 != uVar29);
                            }
                            local_d8 = CONCAT44(local_d8._4_4_,iVar24 + 1U);
                            local_9b8 = iVar5;
                            if (local_d8._4_4_ < iVar24 + 1U) {
                              FUN_14011d10e(&local_3f8);
                            }
                            pdVar19 = local_e0;
                            if (local_e0 == (double *)0x0) {
                              pdVar19 = &local_3f8;
                            }
                            pdVar19 = pdVar19 + (longlong)iVar24 * 0x21;
                            *(undefined1 *)pdVar19 = 1;
                            memcpy(pdVar19 + 1,(void *)((longlong)&local_7b8 + 7),0xa8);
                            *(int *)(pdVar19 + 0x16) = iVar4;
                            *(undefined8 *)((longlong)pdVar19 + 0xb4) = local_958;
                            *(undefined4 *)((longlong)pdVar19 + 0xbc) = local_950;
                            pdVar19[0x18] = local_9a8;
                            pdVar19[0x19] = local_968;
                            pdVar19[0x1a] = dStack_960;
                            *(undefined4 *)(pdVar19 + 0x1b) = local_9b4;
                            *(undefined1 *)((longlong)pdVar19 + 0xdc) = local_9da;
                            *(int *)(pdVar19 + 0x1c) = local_9b8;
                            *(int *)((longlong)pdVar19 + 0xe4) = local_9c4;
                            auVar9._8_8_ = dStack_970;
                            auVar9._0_8_ = local_978;
                            *(undefined1 (*) [16])(pdVar19 + 0x1d) = local_988;
                            *(undefined1 (*) [16])(pdVar19 + 0x1f) = auVar9;
                            uVar16 = local_9d4;
                          }
                        }
                      }
                    }
                    else if ((local_9d0 != (longlong *)0x0) &&
                            ((bVar14 & *(byte *)((longlong)plVar22 + 0x2d3)) != 0))
                    goto LAB_14028b497;
                  }
                }
                else if ((((char)local_9c0 == '\0') ||
                         (plVar18 = (longlong *)FUN_14485cccc(pdVar19 + 0x17), plVar22 = local_9d0,
                         plVar18 == (longlong *)0x0)) ||
                        ((cVar13 = (**(code **)(*local_9d0 + 0x4e8))(local_9d0,plVar18),
                         uVar16 = local_9d4, cVar13 == '\0' &&
                         (cVar13 = (**(code **)(*plVar18 + 0x4e8))(plVar18,plVar22),
                         uVar16 = local_9d4, cVar13 == '\0')))) {
                  if (DAT_14cad1f90 < *(float *)(pdVar19 + 1) ||
                      DAT_14cad1f90 == *(float *)(pdVar19 + 1)) {
                    if (((param_6 & 4) == 0) && ((*(byte *)((longlong)pdVar19 + 0xad) & 2) != 0))
                    goto LAB_14028b30b;
                  }
                  else if ((param_6 & 4) == 0) {
LAB_14028b30b:
                    dVar34 = *param_2;
                    dVar35 = param_2[1];
                    dVar36 = param_2[2];
                    dVar44 = dVar36 * dVar36 + dVar34 * dVar34 + dVar35 * dVar35;
                    if (((dVar44 != 1.0) ||
                        (dVar37 = dVar36, dVar41 = dVar34, dVar54 = dVar35, NAN(dVar44))) &&
                       (dVar37 = DAT_14c8464f0, dVar41 = DAT_14c8464e0, dVar54 = DAT_14c8464e8,
                       9.99999993922529e-09 <= dVar44)) {
                      dVar44 = 1.0 / SQRT(dVar44);
                      dVar37 = dVar36 * dVar44;
                      dVar41 = dVar34 * dVar44;
                      dVar54 = dVar35 * dVar44;
                    }
                    uVar16 = local_9d4;
                    if (DAT_14cad1f94 <
                        (float)(dVar37 * pdVar19[0xd] +
                               dVar41 * pdVar19[0xb] + dVar54 * pdVar19[0xc])) goto LAB_14028b476;
                  }
                  if ((((param_6 & 0x16) != 0) && ((int)param_1[0x7d] != 0)) &&
                     ((lVar30 = FUN_14485cccc(pdVar19 + 0x17), lVar30 != 0 &&
                      (lVar27 = *(longlong *)(lVar30 + 0x1c8), *(longlong *)(lVar30 + 0x1c8) != 0)))
                     ) {
                    do {
                      lVar30 = lVar27;
                      lVar27 = *(longlong *)(lVar30 + 0x120);
                    } while (lVar27 != 0);
                    lVar30 = *(longlong *)(lVar30 + 0xa8);
                    if ((lVar30 != 0) && ((longlong)(int)param_1[0x7d] != 0)) {
                      lVar27 = 0;
                      do {
                        uVar16 = local_9d4;
                        if (*(longlong *)(param_1[0x7c] + lVar27) == lVar30) goto LAB_14028b476;
                        lVar27 = lVar27 + 8;
                      } while ((longlong)(int)param_1[0x7d] * 8 != lVar27);
                    }
                  }
                  if ((*(byte *)((longlong)pdVar19 + 0xad) & 2) == 0) {
                    bVar31 = local_9d4 == 0xffffffff;
                    uVar16 = local_9d4;
                    local_9d4 = (uint)lVar32;
                    if (bVar31) break;
                  }
                  else {
                    fVar33 = (float)(pdVar19[0xd] * param_2[2] +
                                    pdVar19[0xb] * *param_2 + pdVar19[0xc] * param_2[1]);
                    uVar16 = (uint)lVar32;
                    if (fVar50 <= fVar33) {
                      fVar33 = fVar50;
                      uVar16 = local_9d4;
                    }
                  }
                }
LAB_14028b476:
                local_9d4 = uVar16;
                fVar50 = fVar33;
                lVar32 = lVar32 + 1;
              } while (lVar32 < (int)uStack_940);
              if (-1 < (int)local_9d4) {
                uVar29 = (ulonglong)local_9d4;
LAB_14028b9c8:
                memcpy(local_918,local_948 + uVar29 * 0x20,0x100);
                bVar10 = true;
                goto LAB_14028b9ea;
              }
            }
            bVar10 = false;
          }
LAB_14028b9ea:
          dVar35 = local_7e0;
          dVar34 = dStack_7e8;
          dVar36 = local_7f0;
          if ((local_86b & 1) != 0) {
            dVar36 = (double)local_914;
            dVar35 = (local_7e0 - local_7c8) * dVar36 + local_7c8;
            dVar34 = (dStack_7e8 - dStack_7d0) * dVar36 + dStack_7d0;
            dVar36 = (local_7f0 - local_7d8) * dVar36 + local_7d8;
            dVar37 = dVar35 - local_7c8;
            dVar41 = dVar34 - dStack_7d0;
            dVar44 = dVar36 - local_7d8;
            if ((dVar37 * dVar37 + dVar44 * dVar44 + dVar41 * dVar41 <= (double)fVar55) &&
               (local_914 = 0.0, dVar35 = local_7c8, dVar34 = dStack_7d0, dVar36 = local_7d8,
               local_9d8 != -1)) {
              FUN_1479a214c(&local_3f8,local_9d8,0);
            }
          }
          local_7b8 = (char *)param_1[0x50];
          lStack_7b0 = param_1[0x51];
          local_7a8 = param_1[0x52];
          uVar15 = (**(code **)(*param_1 + 0x828))(param_1,local_818,param_3);
          if (local_418 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          if (local_438 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          bVar31 = false;
        }
        local_a08 = (double *)CONCAT71(local_a08._1_7_,param_7);
        local_9a0 = dVar36;
        local_998 = dVar34;
        local_990 = dVar35;
        uVar16 = FUN_14494b8fc(param_1,&local_9a0,param_3,(param_6 & 2) >> 1);
        uVar29 = (ulonglong)uVar16;
        if (local_948 != (double *)0x0) {
          FUN_1400020a8();
        }
        bVar11 = bVar10;
        if ((char)uVar16 == '\0') {
          uVar29 = 0;
        }
        else {
LAB_14028bba7:
          bVar10 = bVar11;
          if ((longlong)(int)param_1[0x44] < 1) {
            if ((byte)uVar15 == 0) {
              local_7b8 = (char *)local_e0;
              if (local_e0 == (double *)0x0) {
                local_7b8 = (char *)&local_3f8;
              }
              lStack_7b0 = CONCAT44(lStack_7b0._4_4_,(int)local_d8);
              if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
                pcVar6 = *(code **)(*param_1 + 0x508);
                if ((pcVar6 == FUN_14023764e) || (pcVar6 == (code *)&LAB_1401c4fb8)) {
                  cVar13 = FUN_14023764e(param_1,&local_7b8,1,0);
                }
                else {
                  cVar13 = (*pcVar6)(param_1,&local_7b8,1,0);
                }
                *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar13 * '\x02';
              }
            }
            else {
              local_4a0 = (undefined8 *)0x0;
              local_498 = 0x300000000;
              if (bVar31 == false) {
                local_488 = (double *)param_1[0x48];
                lStack_480 = param_1[0x49];
                local_a00 = &local_488;
                lVar32 = param_1[0x4a];
                local_478 = (byte)lVar32;
                uStack_477 = (undefined2)((ulonglong)lVar32 >> 8);
                bStack_475 = (byte)((ulonglong)lVar32 >> 0x18);
                uStack_474 = (undefined1)((ulonglong)lVar32 >> 0x20);
                bStack_473 = (byte)((ulonglong)lVar32 >> 0x28);
                uStack_472 = (undefined1)((ulonglong)lVar32 >> 0x30);
                uStack_471 = (undefined1)((ulonglong)lVar32 >> 0x38);
                uStack_470 = (undefined4)param_1[0x4b];
                uStack_46c = (undefined4)((ulonglong)param_1[0x4b] >> 0x20);
                local_988 = *(undefined1 (*) [16])(param_1 + 0x4c);
                local_a08 = (double *)local_988;
                local_978 = (double)param_1[0x4e];
                local_948 = local_e0;
                if (local_e0 == (double *)0x0) {
                  local_948 = &local_3f8;
                }
                uStack_940 = CONCAT44(uStack_940._4_4_,(int)local_d8);
                cVar13 = FUN_1406c1bf0(param_1,&local_7b8,&local_948,0);
              }
              else {
                local_488 = (double *)param_1[0x80];
                lStack_480 = CONCAT44(lStack_480._4_4_,(int)param_1[0x81]);
                cVar13 = FUN_1406c2154(param_1,&local_7b8);
              }
              local_488 = local_e0;
              if (local_e0 == (double *)0x0) {
                local_488 = &local_3f8;
              }
              lStack_480 = CONCAT44(lStack_480._4_4_,(int)local_d8);
              puVar26 = local_4a0;
              if (local_4a0 == (undefined8 *)0x0) {
                puVar26 = &local_7b8;
              }
              local_988._8_4_ = (undefined4)local_498;
              local_988._0_8_ = puVar26;
              puVar20 = (undefined1 *)0x0;
              if (cVar13 != '\0') {
                puVar20 = local_988;
              }
              if ((longlong)(int)param_1[0x44] < 1) {
                if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
                  pcVar6 = *(code **)(*param_1 + 0x508);
                  uVar28 = (undefined7)((ulonglong)local_988 >> 8);
                  if ((pcVar6 == FUN_14023764e) || (pcVar6 == (code *)&LAB_1401c4fb8)) {
                    cVar13 = FUN_14023764e(param_1,&local_488,CONCAT71(uVar28,1));
                  }
                  else {
                    cVar13 = (*pcVar6)(param_1,&local_488,CONCAT71(uVar28,1),puVar20);
                  }
                  *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar13 * '\x02';
                }
              }
              else {
                lVar32 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
                *(byte *)(lVar32 + 0x608) = *(byte *)(lVar32 + 0x608) | 2;
                *(undefined4 *)(lVar32 + 0x10) = 3;
                *(undefined4 *)(lVar32 + 200) = 0xffffffff;
              }
              if (local_4a0 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else {
            lVar32 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
            if ((bVar31 & (byte)uVar15) == 1) {
              pbVar2 = (byte *)(lVar32 + 0x608);
              *pbVar2 = *pbVar2 | 2;
            }
            else {
              local_7b8 = (char *)local_e0;
              if (local_e0 == (double *)0x0) {
                local_7b8 = (char *)&local_3f8;
              }
              lStack_7b0 = CONCAT44(lStack_7b0._4_4_,(int)local_d8);
              FUN_14011cf24(lVar32,&local_7b8,local_9d9,uVar15);
            }
          }
          uVar29 = CONCAT71((int7)(uVar29 >> 8),1);
        }
      }
      if ((((local_86b & 1) != 0) && ((byte)((byte)param_6 >> 3 & (local_86b & 2) >> 1) == 0)) &&
         ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
        if ((longlong)(int)param_1[0x44] < 1) {
          FUN_143482562(param_1,local_9d0,local_918);
        }
        else {
          lVar32 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
          iVar24 = *(int *)(lVar32 + 0x600);
          *(uint *)(lVar32 + 0x600) = iVar24 + 1U;
          if (*(uint *)(lVar32 + 0x604) < iVar24 + 1U) {
            FUN_14043ff72(lVar32 + 0x3f8,iVar24);
          }
          lVar30 = lVar32 + 0x3f8;
          if (*(longlong *)(lVar32 + 0x5f8) != 0) {
            lVar30 = *(longlong *)(lVar32 + 0x5f8);
          }
          lVar32 = (longlong)iVar24 * 0x100;
          memcpy((void *)(lVar30 + lVar32),local_918,0xb8);
          *(undefined8 *)(lVar30 + 0xb8 + lVar32) = uStack_860;
          puVar26 = (undefined8 *)(lVar30 + 0xc0 + lVar32);
          *puVar26 = local_858;
          puVar26[1] = uStack_850;
          *(undefined4 *)(lVar30 + 0xd0 + lVar32) = local_848;
          *(undefined1 *)(lVar30 + 0xd4 + lVar32) = local_844;
          *(undefined8 *)(lVar30 + 0xf8 + lVar32) = uStack_820;
          puVar26 = (undefined8 *)(lVar30 + 0xe8 + lVar32);
          *puVar26 = uStack_830;
          puVar26[1] = local_828;
          puVar26 = (undefined8 *)(lVar30 + 0xd8 + lVar32);
          *puVar26 = local_840;
          puVar26[1] = uStack_838;
        }
      }
      if (param_5 != (void *)0x0) {
        if (bVar10) {
          memcpy(param_5,local_918,0x100);
        }
        else {
          memset(param_5,0,0x100);
          *(undefined4 *)((longlong)param_5 + 0xd0) = 0xffffffff;
          *(undefined4 *)((longlong)param_5 + 4) = 0x3f800000;
          *(double *)((longlong)param_5 + 0x70) = local_7d8;
          *(double *)((longlong)param_5 + 0x78) = dStack_7d0;
          *(double *)((longlong)param_5 + 0x80) = local_7c8;
          *(double *)((longlong)param_5 + 0x88) = local_7f0;
          *(double *)((longlong)param_5 + 0x90) = dStack_7e8;
          *(double *)((longlong)param_5 + 0x98) = local_7e0;
          *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
        }
      }
      if (local_e0 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14028c104;
    }
    uVar29 = DAT_149931180;
    uVar7 = DAT_149931180._8_8_;
    lVar32 = -(ulonglong)
              (9.99999993922529e-09 < (double)((ulonglong)(param_3[1] - local_818._8_8_) & uVar7));
    auVar43._8_4_ = (int)lVar32;
    auVar43._0_8_ =
         -(ulonglong)
          (9.99999993922529e-09 < (double)((ulonglong)(*param_3 - local_818._0_8_) & uVar29));
    auVar43._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    uVar16 = movmskpd(uVar15,auVar43);
    auVar51._8_8_ =
         -(ulonglong)(9.99999993922529e-09 < (double)((ulonglong)(param_3[3] - dStack_800) & uVar7))
    ;
    auVar51._0_8_ =
         -(ulonglong)(9.99999993922529e-09 < (double)((ulonglong)(param_3[2] - local_808) & uVar29))
    ;
    iVar24 = movmskpd(uVar23,auVar51);
    uVar25 = iVar24 << 2 | uVar16;
    if (uVar25 != 0) {
      lVar32 = -(ulonglong)
                (9.99999993922529e-09 < (double)((ulonglong)(local_818._8_8_ + param_3[1]) & uVar7))
      ;
      auVar8._8_4_ = (int)lVar32;
      auVar8._0_8_ = -(ulonglong)
                      (9.99999993922529e-09 <
                      (double)((ulonglong)(local_818._0_8_ + *param_3) & uVar29));
      auVar8._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      iVar24 = movmskpd(uVar16,auVar8);
      auVar45._8_8_ =
           -(ulonglong)
            (9.99999993922529e-09 < (double)((ulonglong)(dStack_800 + param_3[3]) & uVar7));
      auVar45._0_8_ =
           -(ulonglong)
            (9.99999993922529e-09 < (double)((ulonglong)(local_808 + param_3[2]) & uVar29));
      uVar16 = movmskpd(uVar25,auVar45);
      fVar50 = 0.0;
      if ((uVar16 & 0x3fffffff) != 0 || iVar24 != 0) goto LAB_14028ab3d;
    }
    uVar29 = CONCAT71((int7)((param_4 & 0xffffffff) >> 8),1);
    if (param_5 == (void *)0x0) goto LAB_14028c104;
    memset(param_5,0,0x100);
    *(undefined4 *)((longlong)param_5 + 0xd0) = 0xffffffff;
    *(undefined4 *)((longlong)param_5 + 4) = 0x3f800000;
    *(double *)((longlong)param_5 + 0x70) = local_7d8;
    *(double *)((longlong)param_5 + 0x78) = dStack_7d0;
    *(double *)((longlong)param_5 + 0x80) = local_7c8;
    *(double *)((longlong)param_5 + 0x88) = local_7f0;
    *(double *)((longlong)param_5 + 0x90) = dStack_7e8;
    *(double *)((longlong)param_5 + 0x98) = local_7e0;
  }
  *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
LAB_14028c104:
  if ((local_d0 ^ (ulonglong)auStack_a28) == DAT_14c707940) {
    return uVar29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028c352 FUN_14028c352 body=1742 status=ok
// SIG undefined FUN_14028c352(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14028c352(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 param_6,undefined1 param_7)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  double *pdVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *_Dst;
  longlong *plVar12;
  undefined7 uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double _X;
  double _X_00;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double _X_01;
  undefined1 auStack_128 [32];
  double *local_108;
  undefined1 local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_1 == (longlong *)0x0) ||
     (uVar8 = (ulonglong)*(uint *)(param_1 + 1), (*(uint *)(param_1 + 1) >> 0x1e & 1) != 0)) {
LAB_14028c90b:
    if (param_5 == (undefined8 *)0x0) {
      param_2 = (double *)0x0;
    }
    else {
      *param_5 = 0x3f80000000000000;
      param_2 = (double *)0x0;
      memset(param_5 + 1,0,0x9c);
      *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
      param_5[0x15] = 0;
      param_5[0x16] = 0;
      param_5[0x17] = 0;
      param_5[0x18] = 0;
      param_5[0x19] = 0;
      *(undefined4 *)(param_5 + 0x1a) = 0xffffffff;
      *(undefined8 *)((longlong)param_5 + 0xd4) = 0;
      *(undefined8 *)((longlong)param_5 + 0xdc) = 0;
      *(undefined8 *)((longlong)param_5 + 0xe4) = 0;
      *(undefined8 *)((longlong)param_5 + 0xec) = 0;
      param_5[0x1e] = 0;
      param_5[0x1f] = 0;
    }
    goto LAB_14028c983;
  }
  plVar12 = param_1;
  if (((*(char *)((longlong)param_1 + 0x1fb) != '\x02') &&
      ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0)) &&
     ((uVar8 = param_1[0x16], uVar8 != 0 || (uVar8 = FUN_1448abda6(), uVar8 != 0)))) {
    bVar1 = *(byte *)(uVar8 + 0x152);
    plVar12 = (longlong *)(ulonglong)bVar1;
    if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
       ((*(byte *)(uVar8 + 0x153) & 0x40) != 0)) {
      lVar14 = param_1[0x15];
      uVar8 = 0;
      if ((lVar14 != 0) &&
         (uVar8 = CONCAT71((int7)((ulonglong)lVar14 >> 8),*(undefined1 *)(lVar14 + 100)) &
                  0xffffffffffffff22, (char)uVar8 == '\x02')) goto LAB_14028c90b;
    }
  }
  uVar9 = SUB84(plVar12,0);
  uVar5 = (undefined4)uVar8;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0x3f80000000000000;
    _Dst = param_5 + 1;
    memset(_Dst,0,0x9c);
    uVar9 = SUB84(_Dst,0);
    uVar5 = 0xffffffff;
    *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
    param_5[0x15] = 0;
    param_5[0x16] = 0;
    param_5[0x17] = 0;
    param_5[0x18] = 0;
    param_5[0x19] = 0;
    *(undefined4 *)(param_5 + 0x1a) = 0xffffffff;
    *(undefined8 *)((longlong)param_5 + 0xd4) = 0;
    *(undefined8 *)((longlong)param_5 + 0xdc) = 0;
    *(undefined8 *)((longlong)param_5 + 0xe4) = 0;
    *(undefined8 *)((longlong)param_5 + 0xec) = 0;
    param_5[0x1e] = 0;
    param_5[0x1f] = 0;
  }
  if ((*(byte *)(param_1 + 0x3f) & 1) == 0) {
    auVar20 = *(undefined1 (*) [16])(param_1 + 0x36);
    dVar16 = auVar20._0_8_;
    dVar17 = auVar20._8_8_;
    dVar15 = (double)param_1[0x38];
    pdVar7 = (double *)param_1[0x46];
    if (pdVar7 == (double *)0x0) {
      pdVar7 = (double *)FUN_14001cc68(0x40,0x10);
      dVar18 = DAT_14c8463d8;
      *pdVar7 = DAT_14c8463d0;
      pdVar7[1] = dVar18;
      dVar18 = DAT_14c8463e8;
      pdVar7[2] = DAT_14c8463e0;
      pdVar7[3] = dVar18;
      dVar18 = DAT_14c846500;
      pdVar7[4] = DAT_14c8464f8;
      pdVar7[5] = dVar18;
      pdVar7[6] = DAT_14c846508;
      param_1[0x46] = (longlong)pdVar7;
    }
    auVar24 = _DAT_1499387d0;
    if ((((pdVar7[4] != dVar16) || (NAN(pdVar7[4]) || NAN(dVar16))) || (pdVar7[5] != dVar17)) ||
       (((NAN(pdVar7[5]) || NAN(dVar17) || (pdVar7[6] != dVar15)) || (NAN(pdVar7[6]) || NAN(dVar15))
        ))) {
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar15;
      dVar18 = (double)DAT_1499387d0;
      dVar19 = DAT_1499387d0._8_8_;
      auVar20 = divpd(auVar20,_DAT_1499387d0);
      auVar23 = divpd(auVar26,_DAT_1499387d0);
      auVar20 = roundpd(auVar20,auVar20,3);
      auVar23 = roundpd(auVar23,auVar23,3);
      auVar33._0_8_ = dVar16 - auVar20._0_8_ * dVar18;
      auVar33._8_8_ = dVar17 - auVar20._8_8_ * dVar19;
      auVar27._0_8_ = dVar15 - auVar23._0_8_ * dVar18;
      auVar27._8_8_ = 0.0 - auVar23._8_8_ * dVar19;
      auVar31._0_8_ = auVar33._0_8_ + dVar18;
      auVar31._8_8_ = auVar33._8_8_ + dVar19;
      auVar25._0_8_ = auVar27._0_8_ + dVar18;
      auVar25._8_8_ = auVar27._8_8_ + dVar19;
      auVar23._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
      auVar23._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
      auVar20 = blendvpd(auVar31,auVar33,auVar23);
      auVar32._8_8_ = -(ulonglong)(0.0 <= auVar27._8_8_);
      auVar32._0_8_ = -(ulonglong)(0.0 <= auVar27._0_8_);
      auVar23 = blendvpd(auVar25,auVar27,auVar32);
      auVar28._0_8_ = auVar20._0_8_ + -360.0;
      auVar28._8_8_ = auVar20._8_8_ + -360.0;
      auVar21._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
      auVar21._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
      auVar32 = blendvpd(auVar20,auVar28,auVar21);
      auVar22._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
      auVar22._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
      auVar20._8_8_ = auVar23._8_8_ + 0.0;
      auVar20._0_8_ = auVar23._0_8_ + -360.0;
      auVar20 = blendvpd(auVar23,auVar20,auVar22);
      *(undefined1 (*) [16])(pdVar7 + 4) = auVar32;
      dVar15 = auVar20._0_8_;
      pdVar7[6] = dVar15;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar15;
      auVar20 = divpd(auVar32,auVar24);
      auVar24 = divpd(auVar34,auVar24);
      auVar20 = roundpd(auVar20,auVar20,3);
      auVar24 = roundpd(auVar24,auVar24,3);
      dVar29 = (auVar32._0_8_ - auVar20._0_8_ * dVar18) * 0.008726646259971648;
      _X = (auVar32._8_8_ - auVar20._8_8_ * dVar19) * 0.008726646259971648;
      _X_00 = (dVar15 - auVar24._0_8_ * dVar18) * 0.008726646259971648;
      _X_01 = (0.0 - auVar24._8_8_ * dVar19) * 0.008726646259971648;
      dVar15 = sin(dVar29);
      dVar16 = sin(_X);
      dVar17 = sin(_X_00);
      sin(_X_01);
      dVar18 = cos(dVar29);
      dVar19 = cos(_X);
      dVar29 = cos(_X_00);
      cos(_X_01);
      *pdVar7 = dVar15 * dVar16 * dVar29 - dVar18 * dVar19 * dVar17;
      pdVar7[1] = -(dVar15 * dVar19 * dVar29) - dVar18 * dVar16 * dVar17;
      pdVar7[2] = -(dVar19 * dVar15 * dVar17) + dVar16 * dVar18 * dVar29;
      pdVar7[3] = dVar16 * dVar15 * dVar17 + dVar19 * dVar18 * dVar29;
    }
    local_d8 = *pdVar7;
    dStack_d0 = pdVar7[1];
    local_c8 = pdVar7[2];
    dStack_c0 = pdVar7[3];
    local_108 = &local_d8;
    local_100 = 0;
    plVar12 = param_1;
    uVar5 = FUN_140092404(param_1,param_1[0x24],param_1[0x25],0);
    uVar9 = SUB84(plVar12,0);
  }
  dVar15 = *param_2;
  dVar16 = param_2[1];
  dVar17 = param_2[2];
  if (((dVar15 == 0.0) && (!NAN(dVar15))) &&
     ((dVar16 == 0.0 && (((!NAN(dVar16) && (dVar17 == 0.0)) && (!NAN(dVar17))))))) {
    lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[1] - (double)param_1[0x49]));
    auVar3._8_4_ = (int)lVar14;
    auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*param_3 - (double)param_1[0x48]));
    auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar6 = movmskpd(uVar5,auVar3);
    lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[3] - (double)param_1[0x4b]));
    auVar24._8_4_ = (int)lVar14;
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[2] - (double)param_1[0x4a]));
    auVar24._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar10 = movmskpd(uVar9,auVar24);
    param_2 = (double *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar11 = iVar10 << 2 | uVar6;
    if (uVar11 == 0) goto LAB_14028c983;
    auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x49] + param_3[1]));
    auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x48] + *param_3));
    iVar10 = movmskpd(uVar6,auVar2);
    auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4b] + param_3[3]));
    auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x4a] + param_3[2]));
    uVar6 = movmskpd(uVar11,auVar30);
    if ((uVar6 & 0x3fffffff) == 0 && iVar10 == 0) goto LAB_14028c983;
  }
  local_e0 = dVar17 + (double)param_1[0x4e];
  local_e8 = dVar16 + (double)param_1[0x4d];
  local_f0 = dVar15 + (double)param_1[0x4c];
  local_108 = (double *)CONCAT71(local_108._1_7_,param_7);
  cVar4 = FUN_14494b8fc(param_1,&local_f0,param_3,0);
  uVar13 = (undefined7)((ulonglong)param_2 >> 8);
  param_2 = (double *)CONCAT71(uVar13,1);
  if (((cVar4 != '\0') && ((int)param_1[0x44] < 1)) &&
     ((DAT_14c76142c != 1 || ((*(byte *)(param_1 + 0x3f) & 2) == 0)))) {
    param_2 = (double *)CONCAT71(uVar13,1);
    cVar4 = (**(code **)(*param_1 + 0x508))(param_1,0,1,0);
    *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar4 * '\x02';
  }
LAB_14028c983:
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 14028ca22 FUN_14028ca22 body=2355 status=ok
// SIG undefined FUN_14028ca22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14028ca22(longlong param_1,double *param_2,double *param_3,longlong *param_4,
                      undefined8 param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_318 [32];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if (param_4 != (longlong *)0x0) {
    uVar9 = (**(code **)(*param_4 + 0x4a8))(param_4,&local_2d8,param_5,0);
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    dVar17 = local_298._0_8_;
    dVar15 = local_298._8_8_;
    dVar3 = local_288._0_8_;
    auVar18 = *(undefined1 (*) [16])(param_3 + 8);
    dVar31 = auVar18._0_8_;
    dVar5 = auVar18._8_8_;
    auVar1 = *(undefined1 (*) [16])(param_3 + 10);
    dVar4 = auVar1._0_8_;
    auVar18 = minpd(auVar18,local_298);
    auVar21 = minpd(auVar1,local_288);
    auVar23._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
    iVar10 = movmskpd(uVar9,auVar23);
    auVar18._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
    auVar18._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
    uVar11 = movmskpd((int)param_4,auVar18);
    if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar6 = *param_3;
      dVar20 = param_3[1];
      dVar7 = param_3[2];
      dVar8 = param_3[3];
      dVar26 = param_3[4] * dVar17;
      dVar27 = param_3[5] * dVar15;
      dVar28 = param_3[6] * dVar3;
      dVar29 = param_3[7] * local_288._8_8_;
      dVar24 = dVar27 * local_2d8 - dStack_2d0 * dVar26;
      dVar25 = dVar28 * dStack_2d0 - local_2c8 * dVar27;
      dVar30 = dVar26 * local_2c8 - local_2d8 * dVar28;
      dVar32 = dVar29 * dStack_2c0 - dStack_2c0 * dVar29;
      dVar25 = dVar25 + dVar25;
      dVar30 = dVar30 + dVar30;
      dVar24 = dVar24 + dVar24;
      dVar32 = dVar32 + dVar32;
      *param_2 = dVar20 * local_2c8 * -1.0 +
                 dVar7 * dStack_2d0 + dVar8 * local_2d8 * 1.0 + dVar6 * dStack_2c0;
      param_2[1] = dVar6 * local_2c8 * 1.0 +
                   dVar8 * dStack_2d0 + dVar7 * local_2d8 * -1.0 + dVar20 * dStack_2c0;
      param_2[2] = dVar8 * local_2c8 * 1.0 +
                   ((local_2d8 * dVar20 * 1.0 + dVar7 * dStack_2c0) - dVar6 * dStack_2d0);
      param_2[3] = dVar7 * local_2c8 * -1.0 +
                   ((local_2d8 * dVar6 * -1.0 + dVar8 * dStack_2c0) - dVar20 * dStack_2d0);
      param_2[4] = (dVar24 * dStack_2d0 - local_2c8 * dVar30) + dStack_2c0 * dVar25 + dVar26 +
                   local_2b8;
      param_2[5] = (dVar25 * local_2c8 - dVar24 * local_2d8) + dStack_2c0 * dVar30 + dVar27 +
                   dStack_2b0;
      param_2[6] = (dVar30 * local_2d8 - dStack_2d0 * dVar25) + dStack_2c0 * dVar24 + dVar28 +
                   (double)CONCAT44(uStack_2a4,local_2a8);
      param_2[7] = (dVar32 * dStack_2c0 - dVar32 * dStack_2c0) + dStack_2c0 * dVar32 + dVar29 +
                   dStack_2a0;
      param_2[8] = dVar31 * dVar17;
      param_2[9] = dVar5 * dVar15;
    }
    else {
      dVar20 = dStack_2d0 + dStack_2d0;
      dVar24 = local_2c8 + local_2c8;
      dVar6 = local_2d8 * (local_2d8 + local_2d8);
      local_188 = (1.0 - (dVar6 + dStack_2d0 * dVar20)) * dVar3;
      dVar32 = (local_2d8 + local_2d8) * dStack_2c0;
      local_198 = (dVar20 * dStack_2c0 + local_2d8 * dVar24) * dVar3;
      dStack_190 = (dVar24 * dStack_2d0 - dVar32) * dVar3;
      local_1d8 = (1.0 - (local_2c8 * dVar24 + dStack_2d0 * dVar20)) * dVar17;
      dVar6 = (1.0 - (local_2c8 * dVar24 + dVar6)) * dVar15;
      dStack_1d0 = (dVar20 * local_2d8 + dVar24 * dStack_2c0) * dVar17;
      local_1a8 = (dVar24 * dStack_2d0 + dVar32) * dVar15;
      local_1c8 = (local_2d8 * dVar24 - dVar20 * dStack_2c0) * dVar17;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar6,0);
      local_1b8._0_8_ = (dVar20 * local_2d8 - dVar24 * dStack_2c0) * dVar15;
      local_1b8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_2b8;
      dStack_170 = dStack_2b0;
      local_168 = local_2a8;
      uStack_164 = uStack_2a4;
      uStack_160 = 0;
      uStack_15c = 0x3ff00000;
      dVar8 = *param_3;
      dVar25 = param_3[1];
      dVar30 = param_3[2];
      dVar26 = dVar25 + dVar25;
      dVar32 = dVar30 + dVar30;
      dVar7 = dVar8 * (dVar8 + dVar8);
      local_208 = (1.0 - (dVar7 + dVar25 * dVar26)) * dVar4;
      dVar24 = param_3[3];
      dVar6 = dVar32 * dVar24;
      dVar20 = (dVar8 + dVar8) * param_3[3];
      dVar24 = dVar26 * dVar24;
      local_218 = (dVar24 + *param_3 * dVar32) * dVar4;
      local_238 = (dVar26 * dVar8 - dVar6) * dVar5;
      dStack_210 = (dVar32 * dVar25 - dVar20) * dVar4;
      local_2e8 = dVar17 * dVar31;
      dStack_2e0 = dVar15 * dVar5;
      local_258 = (1.0 - (dVar30 * dVar32 + dVar25 * dVar26)) * dVar31;
      dStack_230 = (1.0 - (dVar30 * dVar32 + dVar7)) * dVar5;
      dStack_250 = (dVar26 * dVar8 + dVar6) * dVar31;
      local_228 = (dVar32 * dVar25 + dVar20) * dVar5;
      local_248 = (*param_3 * dVar32 - dVar24) * dVar31;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = param_3[4];
      dStack_1f0 = param_3[5];
      local_1e8 = param_3[6];
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158);
      local_2f0 = local_148;
      dVar17 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      local_2f8 = local_128;
      dVar31 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      dVar15 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
      uVar14 = -(ulonglong)(0.0 <= dVar17 + -9.99999993922529e-09);
      dVar17 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar17)) & uVar14);
      uVar14 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
      dVar31 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar14);
      uVar14 = -(ulonglong)(0.0 <= dVar15 + -9.99999993922529e-09);
      dVar15 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar15)) & uVar14);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dStack_2e0);
      auVar21._0_8_ = -(ulonglong)(0.0 <= local_2e8);
      auVar18 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
      uVar14 = -(ulonglong)(0.0 <= dVar3 * dVar4);
      dVar5 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
      dVar24 = auVar18._0_8_;
      local_158 = local_158 * dVar17 * dVar24;
      local_150 = local_150 * dVar17 * dVar24;
      local_148 = dVar17 * local_148 * dVar24;
      dVar17 = auVar18._8_8_;
      local_128 = dVar31 * local_128 * dVar17;
      local_130 = local_130 * dVar31 * dVar17;
      local_138 = dVar17 * local_138 * dVar31;
      local_108 = dVar15 * local_108 * dVar5;
      local_110 = local_110 * dVar15 * dVar5;
      local_118 = dVar5 * local_118 * dVar15;
      FUN_14481fd10(&local_278,&local_158);
      dVar17 = local_268 * local_268 + local_278 * local_278;
      dVar31 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar19._0_8_ = dVar17 + dVar31;
      auVar19._8_8_ = dVar17 + dVar31;
      auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
      auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
      auVar18 = sqrtpd(auVar19,auVar19);
      auVar18 = divpd(_DAT_149934d80,auVar18);
      auVar22._0_8_ = auVar18._0_8_ * local_268;
      auVar22._8_8_ = auVar18._8_8_ * dStack_260;
      auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar16);
      param_2[8] = local_2e8;
      param_2[9] = dStack_2e0;
      *param_2 = (double)((ulonglong)(local_278 * auVar18._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
      param_2[1] = (double)((ulonglong)(dStack_270 * auVar18._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
      *(undefined1 (*) [16])(param_2 + 2) = auVar23;
      param_2[4] = local_f8;
      param_2[5] = dStack_f0;
      param_2[6] = local_e8;
      param_2[7] = 0.0;
    }
    dVar17 = auVar1._8_8_ * local_288._8_8_;
    auVar1._8_4_ = SUB84(dVar17,0);
    auVar1._0_8_ = dVar4 * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 10) = auVar1;
    bVar2 = *(byte *)(param_1 + 0x1f8);
    if ((bVar2 & 4) != 0) {
      dVar17 = param_3[4];
      dVar3 = param_3[5];
      dVar31 = param_3[7];
      param_2[6] = param_3[6];
      param_2[7] = dVar31;
      param_2[4] = dVar17;
      param_2[5] = dVar3;
    }
    if ((bVar2 & 8) != 0) {
      dVar17 = *param_3;
      dVar3 = param_3[1];
      dVar31 = param_3[3];
      param_2[2] = param_3[2];
      param_2[3] = dVar31;
      *param_2 = dVar17;
      param_2[1] = dVar3;
    }
    if ((bVar2 & 0x10) != 0) {
      dVar17 = param_3[8];
      dVar3 = param_3[9];
      dVar31 = param_3[0xb];
      param_2[10] = param_3[10];
      param_2[0xb] = dVar31;
      param_2[8] = dVar17;
      param_2[9] = dVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_318);
  }
  pdVar13 = param_2;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar13 = *param_3;
    param_3 = param_3 + 1;
    pdVar13 = pdVar13 + 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14028d356 FUN_14028d356 body=289 status=ok
// SIG undefined FUN_14028d356(void)

void FUN_14028d356(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38._0_4_ = 0;
  uStack_30 = 0;
  if (param_1 == 0) {
    iVar2 = 0;
    uVar1 = (uint)local_38;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    local_38 = (ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_38;
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  local_38._0_4_ = uVar1;
  local_38 = CONCAT44(iVar2,(uint)local_38);
  uStack_30 = DAT_14cb85268;
  (**(code **)(*param_2 + 0xa88))(param_2);
  local_40 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  FUN_14028d478(param_1 + 0x6a0,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14028d478 FUN_14028d478 body=259 status=ok
// SIG undefined FUN_14028d478(void)

undefined8 FUN_14028d478(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar7 = 1;
    lVar6 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == lVar2) {
        if (iVar7 == 0) {
          return 0;
        }
        iVar5 = (int)param_1[1];
        iVar7 = iVar5 - iVar7;
        if (iVar7 != 0) {
          iVar8 = 1;
          if (iVar7 < 1) {
            iVar8 = iVar7;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar8) * 8),(longlong)iVar8 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        if (param_3 == '\x01') {
          FUN_1479fc388(param_1);
          return 1;
        }
        return 1;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 14028d57c FUN_14028d57c body=120 status=ok
// SIG undefined FUN_14028d57c(void)

undefined8 * FUN_14028d57c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafe1bc) {
    FUN_144b3d300(&DAT_14cafe1bc);
    if (DAT_14cafe1bc == -1) {
      FUN_1446ddc76(&DAT_14cafe1b4,"OnComponentCollisionSettingsChangedEvent",1);
      _Init_thread_footer(&DAT_14cafe1bc);
    }
  }
  *param_2 = DAT_14cafe1b4;
  return param_2;
}



// FUNCTION 14028d5f4 FUN_14028d5f4 body=590 status=ok
// SIG undefined FUN_14028d5f4(void)

void FUN_14028d5f4(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (param_3 != 0)) {
    local_88 = local_88 & 0xffffff00;
    FUN_14084a140(param_1,&local_58,param_4,0);
    plVar7 = local_58;
    if (local_58 != (longlong *)0x0) {
      if (*local_58 != -1) {
        lVar3 = *(longlong *)(param_2 + 0x3e0);
        lVar4 = *(longlong *)(param_2 + 1000);
        lVar2 = *(longlong *)(param_2 + 0x3f0);
        plVar8 = local_58 + 0x28;
        uVar5 = *(uint *)((longlong)local_58 + 0x1d4);
        iVar9 = 0;
        *(undefined4 *)(local_58 + 0x3a) = 0;
        if ((int)uVar5 < 0) {
          FUN_147f80112(plVar8,0);
          iVar9 = (int)plVar7[0x3a];
          uVar5 = *(uint *)((longlong)plVar7 + 0x1d4);
        }
        *(undefined1 *)((longlong)plVar7 + 0x26c) = 0;
        *(uint *)(plVar7 + 0x3a) = iVar9 + 1U;
        if (uVar5 < iVar9 + 1U) {
          FUN_140089f7a(plVar8,iVar9);
        }
        if ((longlong *)plVar7[0x38] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar7[0x38];
        }
        lVar6 = (longlong)iVar9;
        plVar8[lVar6 * 0x10] = 0;
        (plVar8 + lVar6 * 0x10)[1] = 0;
        plVar1 = plVar8 + lVar6 * 0x10 + 2;
        *(undefined4 *)plVar1 = 0;
        *(undefined4 *)((longlong)plVar1 + 4) = 0;
        *(undefined4 *)(plVar1 + 1) = 0;
        *(undefined4 *)((longlong)plVar1 + 0xc) = 0x3ff00000;
        plVar8[lVar6 * 0x10 + 4] = lVar3;
        (plVar8 + lVar6 * 0x10 + 4)[1] = lVar4;
        plVar8[lVar6 * 0x10 + 6] = lVar2;
        (plVar8 + lVar6 * 0x10 + 6)[1] = 0;
        plVar1 = plVar8 + lVar6 * 0x10 + 8;
        *(undefined4 *)plVar1 = 0;
        *(undefined4 *)((longlong)plVar1 + 4) = 0x3ff00000;
        *(undefined4 *)(plVar1 + 1) = 0;
        *(undefined4 *)((longlong)plVar1 + 0xc) = 0x3ff00000;
        plVar8[lVar6 * 0x10 + 10] = 0x3ff0000000000000;
        (plVar8 + lVar6 * 0x10 + 10)[1] = 0;
        plVar8[lVar6 * 0x10 + 0xc] = 0x3f800000;
        *(undefined2 *)(plVar8 + lVar6 * 0x10 + 0xd) = 0;
        *(undefined8 *)((longlong)plVar8 + lVar6 * 0x80 + 0x6c) = 0;
        uVar10 = FUN_1447906c0(plVar7,0);
        local_60 = local_58;
        if (local_58 != (longlong *)0x0) {
          *(int *)(local_58 + 0x21) = (int)local_58[0x21] + 1;
        }
        FUN_140b8992e(uVar10,&local_60,param_2);
        local_88 = 0;
        FUN_14084a448(local_58,&local_78,param_3,*(undefined8 *)(param_2 + 0x180));
        local_78 = 0;
        local_70 = 0xffffffffffffffff;
        plVar7 = local_58;
        if (local_58 == (longlong *)0x0) goto LAB_14028d7a5;
      }
      *(int *)(plVar7 + 0x21) = (int)plVar7[0x21] + -1;
      if ((int)plVar7[0x26] < 1) {
        FUN_1400847bc(plVar7 + 0x17,0);
        if ((int)plVar7[0x21] == 0) {
          FUN_140087e46(plVar7);
          if (*plVar7 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_14028d7a5;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar7);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar7);
          }
        }
      }
    }
  }
LAB_14028d7a5:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028d844 FUN_14028d844 body=1993 status=ok
// SIG undefined FUN_14028d844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14028d844(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
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
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
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
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x30);
  auVar19 = divpd(auVar27,_DAT_1499387d0);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *(double *)(param_1 + 0x40);
  auVar20 = divpd(auVar21,_DAT_1499387d0);
  auVar19 = roundpd(auVar19,auVar19,3);
  auVar20 = roundpd(auVar20,auVar20,3);
  dVar14 = (auVar27._0_8_ - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar15 = (auVar27._8_8_ - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar16 = (*(double *)(param_1 + 0x40) - auVar20._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar5 = (0.0 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar11 = sin(dVar14);
  dVar12 = sin(dVar15);
  dVar13 = sin(dVar16);
  sin(dVar5);
  dVar14 = cos(dVar14);
  dVar15 = cos(dVar15);
  dVar16 = cos(dVar16);
  cos(dVar5);
  dVar3 = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar16;
  dVar4 = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar16;
  dVar6 = dVar11 * dVar12 * dVar16 - dVar14 * dVar15 * dVar13;
  dVar13 = -(dVar11 * dVar15 * dVar16) - dVar14 * dVar12 * dVar13;
  dVar11 = *(double *)(param_1 + 0x18);
  dVar12 = *(double *)(param_1 + 0x20);
  dVar14 = *(double *)(param_1 + 0x28);
  uVar7 = FUN_14028e00e(param_1,&local_2c8);
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  auVar27 = _DAT_149934d80;
  dVar15 = local_288._0_8_;
  dVar5 = local_288._8_8_;
  dVar16 = local_278._0_8_;
  auVar19 = minpd(_DAT_149934d80,local_288);
  auVar21 = minpd(ZEXT816(0x3ff0000000000000),local_278);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar8 = movmskpd(uVar7,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  uVar9 = movmskpd((int)param_1,auVar19);
  if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar11 = dVar11 * dVar15;
    dVar12 = dVar12 * dVar5;
    dVar14 = dVar14 * dVar16;
    dVar22 = local_278._8_8_ * 0.0;
    dVar15 = dVar12 * local_2c8 - dVar11 * dStack_2c0;
    dVar5 = dVar14 * dStack_2c0 - dVar12 * local_2b8;
    dVar23 = dVar11 * local_2b8 - dVar14 * local_2c8;
    dVar24 = dVar22 * dStack_2b0 - dVar22 * dStack_2b0;
    dVar5 = dVar5 + dVar5;
    dVar23 = dVar23 + dVar23;
    dVar15 = dVar15 + dVar15;
    dVar24 = dVar24 + dVar24;
    *param_2 = dVar13 * local_2b8 * -1.0 +
               dVar3 * dStack_2c0 + dVar4 * local_2c8 * 1.0 + dVar6 * dStack_2b0;
    param_2[1] = dVar6 * local_2b8 * 1.0 +
                 dVar4 * dStack_2c0 + dVar3 * local_2c8 * -1.0 + dVar13 * dStack_2b0;
    param_2[2] = dVar4 * local_2b8 * 1.0 +
                 ((local_2c8 * dVar13 * 1.0 + dVar3 * dStack_2b0) - dVar6 * dStack_2c0);
    param_2[3] = dVar3 * local_2b8 * -1.0 +
                 ((local_2c8 * dVar6 * -1.0 + dVar4 * dStack_2b0) - dVar13 * dStack_2c0);
    dStack_2a0 = (dVar5 * local_2b8 - dVar15 * local_2c8) + dStack_2b0 * dVar23 + dVar12 +
                 dStack_2a0;
    auVar1._8_4_ = SUB84(dStack_2a0,0);
    auVar1._0_8_ = (dVar15 * dStack_2c0 - local_2b8 * dVar23) + dStack_2b0 * dVar5 + dVar11 +
                   local_2a8;
    auVar1._12_4_ = (int)((ulonglong)dStack_2a0 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar1;
    param_2[6] = (dVar23 * local_2c8 - dStack_2c0 * dVar5) + dStack_2b0 * dVar15 + dVar14 +
                 local_298;
    param_2[7] = (dVar24 * dStack_2b0 - dVar24 * dStack_2b0) + dStack_2b0 * dVar24 + dVar22 +
                 dStack_290;
  }
  else {
    dVar22 = dStack_2c0 + dStack_2c0;
    dVar24 = local_2b8 + local_2b8;
    dVar23 = local_2c8 * (local_2c8 + local_2c8);
    local_1c8 = ((double)DAT_149934d80 - (local_2b8 * dVar24 + dStack_2c0 * dVar22)) * dVar15;
    dStack_1a0 = (DAT_149934d80._8_8_ - (local_2b8 * dVar24 + dVar23)) * dVar5;
    dVar26 = (local_2c8 + local_2c8) * dStack_2b0;
    local_1a8 = (dVar22 * local_2c8 - dVar24 * dStack_2b0) * dVar5;
    dStack_180 = (dVar24 * dStack_2c0 - dVar26) * dVar16;
    local_188 = (dVar22 * dStack_2b0 + local_2c8 * dVar24) * dVar16;
    dStack_1c0 = (dVar22 * local_2c8 + dVar24 * dStack_2b0) * dVar15;
    local_198 = (dVar24 * dStack_2c0 + dVar26) * dVar5;
    local_1b8 = (local_2c8 * dVar24 - dVar22 * dStack_2b0) * dVar15;
    uStack_1b0 = 0;
    local_178 = (1.0 - (dVar23 + dStack_2c0 * dVar22)) * dVar16;
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = local_2a8;
    dStack_160 = dStack_2a0;
    local_158 = local_298;
    uStack_150 = 0x3ff0000000000000;
    dVar23 = dVar13 + dVar13;
    dVar24 = dVar3 + dVar3;
    dVar22 = dVar6 * (dVar6 + dVar6);
    local_248 = (double)DAT_149934d80 - (dVar3 * dVar24 + dVar13 * dVar23);
    dStack_220 = DAT_149934d80._8_8_ - (dVar3 * dVar24 + dVar22);
    local_1f8 = 1.0 - (dVar22 + dVar13 * dVar23);
    dStack_200 = (dVar6 + dVar6) * dVar4;
    dStack_240 = dVar23 * dVar6 + dVar24 * dVar4;
    local_218 = dVar24 * dVar13 + dStack_200;
    local_228 = dVar23 * dVar6 - dVar24 * dVar4;
    dStack_200 = dVar24 * dVar13 - dStack_200;
    local_208 = dVar23 * dVar4 + dVar6 * dVar24;
    local_238 = dVar6 * dVar24 - dVar23 * dVar4;
    uStack_230 = 0;
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1d8._8_4_ = 0;
    local_1d8._0_8_ = dVar14;
    local_1d8._12_4_ = 0x3ff00000;
    local_1e8 = dVar11;
    dStack_1e0 = dVar12;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar17._8_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar17._0_8_ = -(ulonglong)(0.0 <= dVar15);
    auVar19 = blendvpd(_DAT_149936790,auVar27,auVar17);
    uVar10 = -(ulonglong)(0.0 <= dVar16 * 1.0);
    dVar14 = (double)(~uVar10 & 0xbff0000000000000 | uVar10 & 0x3ff0000000000000);
    dVar15 = auVar19._0_8_;
    local_138 = local_138 * dVar15;
    local_140 = local_140 * dVar15;
    local_148 = local_148 * dVar15;
    dVar15 = auVar19._8_8_;
    local_118 = local_118 * dVar15;
    local_120 = local_120 * dVar15;
    local_128 = dVar15 * local_128;
    local_f8 = local_f8 * dVar14;
    local_100 = local_100 * dVar14;
    local_108 = dVar14 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar14 = local_258 * local_258 + local_268 * local_268;
    dVar15 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar25._0_8_ = dVar14 + dVar15;
    auVar25._8_8_ = dVar14 + dVar15;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar19 = sqrtpd(auVar25,auVar25);
    auVar19 = divpd(auVar27,auVar19);
    auVar27._0_8_ = auVar19._0_8_ * local_258;
    auVar27._8_8_ = auVar19._8_8_ * dStack_250;
    auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar18);
    *param_2 = (double)((ulonglong)(local_268 * auVar19._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_260 * auVar19._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar27;
    param_2[4] = local_e8;
    param_2[5] = dStack_e0;
    param_2[6] = local_d8;
    param_2[7] = 0.0;
  }
  dVar14 = local_278._8_8_ * 0.0;
  *(undefined1 (*) [16])(param_2 + 8) = local_288;
  auVar2._8_4_ = SUB84(dVar14,0);
  auVar2._0_8_ = dVar16 * 1.0;
  auVar2._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar2;
  if ((local_c0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028e00e FUN_14028e00e body=211 status=ok
// SIG undefined FUN_14028e00e(void)

undefined8 * FUN_14028e00e(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  puVar3 = &DAT_14c846480;
  puVar5 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  plVar4 = (longlong *)param_1[1];
  if ((plVar4 != (longlong *)0x0) ||
     ((*param_1 != 0 && (plVar4 = *(longlong **)(*param_1 + 0x1c8), plVar4 != (longlong *)0x0)))) {
    plVar6 = plVar4;
    if ((param_1[2] != 0) &&
       ((cVar1 = (**(code **)(*plVar4 + 0x4c8))(plVar4), cVar1 == '\0' &&
        (lVar2 = plVar4[0x28], 0 < (longlong)(int)lVar2)))) {
      lVar7 = 0;
      do {
        if (((lVar7 < (int)plVar4[0x28]) &&
            (plVar6 = *(longlong **)(plVar4[0x27] + lVar7 * 8), plVar6 != (longlong *)0x0)) &&
           (cVar1 = (**(code **)(*plVar6 + 0x4c8))(plVar6,param_1[2]), cVar1 != '\0')) break;
        lVar7 = lVar7 + 1;
        plVar6 = plVar4;
      } while ((int)lVar2 != lVar7);
    }
    (**(code **)(*plVar6 + 0x4a8))(plVar6,param_2,param_1[2],0);
  }
  return param_2;
}



// FUNCTION 14028e0e2 FUN_14028e0e2 body=1090 status=ok
// SIG undefined FUN_14028e0e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14028e0e2(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,char param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double _X;
  double _X_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double _X_01;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 != 0) {
    iVar1 = FUN_14487fd02();
    if (iVar1 != 1) {
      uVar2 = FUN_1447210f0(param_1);
      plVar3 = (longlong *)FUN_14057970e(param_1,param_2,uVar2);
      if (plVar3 != (longlong *)0x0) {
        local_f8 = param_3[2];
        local_108 = *param_3;
        uStack_100 = param_3[1];
        auVar10 = *(undefined1 (*) [16])(plVar3 + 0x36);
        dVar6 = auVar10._0_8_;
        dVar7 = auVar10._8_8_;
        dVar5 = (double)plVar3[0x38];
        pdVar4 = (double *)plVar3[0x46];
        if (pdVar4 == (double *)0x0) {
          pdVar4 = (double *)FUN_14001cc68(0x40,0x10);
          dVar8 = DAT_14c8463d8;
          *pdVar4 = DAT_14c8463d0;
          pdVar4[1] = dVar8;
          dVar8 = DAT_14c8463e8;
          pdVar4[2] = DAT_14c8463e0;
          pdVar4[3] = dVar8;
          dVar8 = DAT_14c846500;
          pdVar4[4] = DAT_14c8464f8;
          pdVar4[5] = dVar8;
          pdVar4[6] = DAT_14c846508;
          plVar3[0x46] = (longlong)pdVar4;
        }
        auVar14 = _DAT_1499387d0;
        if ((((pdVar4[4] != dVar6) || (NAN(pdVar4[4]) || NAN(dVar6))) || (pdVar4[5] != dVar7)) ||
           (NAN(pdVar4[5]) || NAN(dVar7))) {
LAB_14028e201:
          auVar16._8_8_ = 0;
          auVar16._0_8_ = dVar5;
          dVar8 = (double)DAT_1499387d0;
          dVar9 = DAT_1499387d0._8_8_;
          auVar10 = divpd(auVar10,_DAT_1499387d0);
          auVar13 = divpd(auVar16,_DAT_1499387d0);
          auVar10 = roundpd(auVar10,auVar10,3);
          auVar13 = roundpd(auVar13,auVar13,3);
          auVar22._0_8_ = dVar6 - auVar10._0_8_ * dVar8;
          auVar22._8_8_ = dVar7 - auVar10._8_8_ * dVar9;
          auVar17._0_8_ = dVar5 - auVar13._0_8_ * dVar8;
          auVar17._8_8_ = 0.0 - auVar13._8_8_ * dVar9;
          auVar20._0_8_ = auVar22._0_8_ + dVar8;
          auVar20._8_8_ = auVar22._8_8_ + dVar9;
          auVar15._0_8_ = auVar17._0_8_ + dVar8;
          auVar15._8_8_ = auVar17._8_8_ + dVar9;
          auVar13._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
          auVar13._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
          auVar10 = blendvpd(auVar20,auVar22,auVar13);
          auVar21._8_8_ = -(ulonglong)(0.0 <= auVar17._8_8_);
          auVar21._0_8_ = -(ulonglong)(0.0 <= auVar17._0_8_);
          auVar13 = blendvpd(auVar15,auVar17,auVar21);
          auVar18._0_8_ = auVar10._0_8_ + -360.0;
          auVar18._8_8_ = auVar10._8_8_ + -360.0;
          auVar11._8_8_ = -(ulonglong)(180.0 < auVar10._8_8_);
          auVar11._0_8_ = -(ulonglong)(180.0 < auVar10._0_8_);
          auVar21 = blendvpd(auVar10,auVar18,auVar11);
          auVar12._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
          auVar12._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
          auVar10._8_8_ = auVar13._8_8_ + 0.0;
          auVar10._0_8_ = auVar13._0_8_ + -360.0;
          auVar10 = blendvpd(auVar13,auVar10,auVar12);
          *(undefined1 (*) [16])(pdVar4 + 4) = auVar21;
          dVar5 = auVar10._0_8_;
          pdVar4[6] = dVar5;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = dVar5;
          auVar10 = divpd(auVar21,auVar14);
          auVar14 = divpd(auVar23,auVar14);
          auVar10 = roundpd(auVar10,auVar10,3);
          auVar14 = roundpd(auVar14,auVar14,3);
          dVar19 = (auVar21._0_8_ - auVar10._0_8_ * dVar8) * 0.008726646259971648;
          _X = (auVar21._8_8_ - auVar10._8_8_ * dVar9) * 0.008726646259971648;
          _X_00 = (dVar5 - auVar14._0_8_ * dVar8) * 0.008726646259971648;
          _X_01 = (0.0 - auVar14._8_8_ * dVar9) * 0.008726646259971648;
          dVar5 = sin(dVar19);
          dVar6 = sin(_X);
          dVar7 = sin(_X_00);
          sin(_X_01);
          dVar8 = cos(dVar19);
          dVar9 = cos(_X);
          dVar19 = cos(_X_00);
          cos(_X_01);
          *pdVar4 = dVar5 * dVar6 * dVar19 - dVar8 * dVar9 * dVar7;
          pdVar4[1] = -(dVar5 * dVar9 * dVar19) - dVar8 * dVar6 * dVar7;
          pdVar4[2] = -(dVar9 * dVar5 * dVar7) + dVar6 * dVar8 * dVar19;
          pdVar4[3] = dVar6 * dVar5 * dVar7 + dVar9 * dVar8 * dVar19;
        }
        else if ((pdVar4[6] != dVar5) || (NAN(pdVar4[6]) || NAN(dVar5))) goto LAB_14028e201;
        local_e8 = *pdVar4;
        dStack_e0 = pdVar4[1];
        local_d8 = pdVar4[2];
        dStack_d0 = pdVar4[3];
        local_130 = 0;
        local_138 = 0;
        FUN_144927ad4(plVar3,&local_108,&local_e8,0);
        local_128 = *param_4;
        uStack_120 = param_4[1];
        local_118 = param_4[2];
        local_138 = local_138 & 0xffffffffffffff00;
        FUN_14020f75c(plVar3,&local_128,0,0);
        if ((*(byte *)((longlong)plVar3 + 0x9c) & 1) == 0) {
          FUN_140b506dc(plVar3,uVar2,0);
        }
        if (param_7 != '\0') {
          (**(code **)(*plVar3 + 0xa60))(plVar3,0);
        }
        goto LAB_14028e469;
      }
    }
  }
  plVar3 = (longlong *)0x0;
LAB_14028e469:
  if ((local_c0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028e526 FUN_14028e526 body=2632 status=ok
// SIG undefined FUN_14028e526(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028e526(longlong param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar15;
  double dVar16;
  undefined1 auVar14 [16];
  double dVar17;
  double dVar18;
  double dVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar33;
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_378 [32];
  undefined4 local_358;
  undefined4 local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined2 *local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  code **local_320;
  code *local_318;
  code *local_310;
  longlong *local_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  code *local_178;
  double local_170;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*(int *)(param_1 + 0x6a8) == 0) goto LAB_14028e9ce;
  plVar4 = (longlong *)(param_1 + 0x278);
  plVar7 = *(longlong **)(param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x278) == 0) {
    if (plVar7 != (longlong *)0x0) goto LAB_14028e5e4;
    local_300 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    if ((plVar7 == (longlong *)0x0) &&
       (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x278) + 0x1c8), plVar7 == (longlong *)0x0))
    {
      local_300 = (longlong *)0x0;
    }
    else {
LAB_14028e5e4:
      local_300 = plVar7;
      if ((*(longlong *)(param_1 + 0x288) != 0) &&
         ((cVar2 = (**(code **)(*plVar7 + 0x4c8))(plVar7), cVar2 == '\0' &&
          (lVar8 = plVar7[0x28], 0 < (longlong)(int)lVar8)))) {
        lVar10 = 0;
        do {
          if (((lVar10 < (int)plVar7[0x28]) &&
              (local_300 = *(longlong **)(plVar7[0x27] + lVar10 * 8), local_300 != (longlong *)0x0))
             && (cVar2 = (**(code **)(*local_300 + 0x4c8))
                                   (local_300,*(undefined8 *)(param_1 + 0x288)), cVar2 != '\0'))
          break;
          lVar10 = lVar10 + 1;
          local_300 = plVar7;
        } while ((int)lVar8 != lVar10);
      }
    }
    lVar10 = *plVar4;
    if (lVar10 == 0) {
LAB_14028e64c:
      lVar8 = 0;
    }
    else {
      if (DAT_14caf64b8 == 0) {
        local_320 = &local_178;
        local_178 = FUN_141030f22;
        local_310 = FUN_14081d0ea;
        local_318 = FUN_142b4754c;
        local_328 = &LAB_147c45ce0;
        local_330 = &LAB_1463f1ff4;
        local_338 = &DAT_149e063b2;
        local_340 = 0x4000000000;
        local_348 = 0x10000004;
        local_350 = 8;
        local_358 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        lVar10 = *plVar4;
        if (lVar10 == 0) goto LAB_14028e64c;
      }
      lVar8 = 0;
      if ((DAT_14caf64b8 != 0) && (lVar9 = *(longlong *)(lVar10 + 0x10), lVar9 != 0)) {
        if ((*(int *)(lVar9 + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
            DAT_14caf64b8 + 0x30)) goto LAB_14028e64c;
        cVar2 = FUN_1449ce97a(lVar10);
        lVar8 = 0;
        if (cVar2 != '\0') {
          lVar8 = lVar10;
        }
      }
    }
  }
  FUN_14028ef70(param_1,0);
  uVar5 = SUB84(&local_2f8,0);
  FUN_14028d844();
  auVar31 = _DAT_149934d80;
  dVar17 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ + local_2f8 * local_2f8;
  dVar24 = (double)local_2e8._8_8_ * (double)local_2e8._8_8_ + dStack_2f0 * dStack_2f0;
  auVar19._0_8_ = dVar17 + dVar24;
  auVar19._8_8_ = dVar17 + dVar24;
  auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar19._8_8_);
  auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar19._0_8_);
  auVar20 = sqrtpd(auVar19,auVar19);
  auVar26 = divpd(_DAT_149934d80,auVar20);
  auVar27._0_8_ = auVar26._0_8_ * (double)local_2e8._0_8_;
  auVar27._8_8_ = auVar26._8_8_ * (double)local_2e8._8_8_;
  lVar10 = *(longlong *)(param_1 + 0x80);
  local_2b8 = *(undefined1 (*) [16])(lVar10 + 0xe0);
  dVar17 = local_2b8._0_8_;
  dVar16 = local_2b8._8_8_;
  auVar20 = *(undefined1 (*) [16])(lVar10 + 0xf0);
  dVar24 = auVar20._0_8_;
  auVar21 = minpd(local_2b8,_DAT_149934d80);
  auVar29 = minpd(auVar20,ZEXT816(0x3ff0000000000000));
  auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar3 = movmskpd((int)plVar4,auVar22);
  auVar21._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  uVar6 = movmskpd(uVar5,auVar21);
  dVar13 = (double)((ulonglong)(local_2f8 * auVar26._0_8_) & -(ulonglong)(1e-08 <= auVar19._0_8_));
  dVar15 = (double)((ulonglong)(dStack_2f0 * auVar26._8_8_) & -(ulonglong)(1e-08 <= auVar19._8_8_));
  auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar23);
  dVar18 = auVar23._0_8_;
  dVar25 = auVar23._8_8_;
  if ((uVar6 & 0x3fffffff) == 0 && iVar3 == 0) {
    dVar17 = *(double *)(lVar10 + 0xa0);
    dVar16 = *(double *)(lVar10 + 0xa8);
    dVar34 = *(double *)(lVar10 + 0xb0);
    dVar12 = *(double *)(lVar10 + 0xb8);
    dVar28 = *(double *)(lVar10 + 0xc0);
    dVar1 = *(double *)(lVar10 + 200);
    local_2f8 = dVar16 * dVar18 * -1.0 + dVar34 * dVar15 + dVar13 * dVar12 * 1.0 + dVar25 * dVar17;
    dStack_2f0 = dVar17 * dVar18 * 1.0 + dVar12 * dVar15 + dVar13 * dVar34 * -1.0 + dVar25 * dVar16;
    local_2e8._0_8_ =
         dVar12 * dVar18 * 1.0 + ((dVar13 * dVar16 * 1.0 + dVar25 * dVar34) - dVar15 * dVar17);
    local_2e8._8_8_ =
         dVar34 * dVar18 * -1.0 + ((dVar13 * dVar17 * -1.0 + dVar25 * dVar12) - dVar15 * dVar16);
    dVar17 = *(double *)(lVar10 + 0xd0) * 1.0;
    dVar16 = *(double *)(lVar10 + 0xd8) * 0.0;
    dVar30 = dVar1 * dVar13 - dVar15 * dVar28;
    dVar33 = dVar17 * dVar15 - dVar18 * dVar1;
    dVar34 = dVar28 * dVar18 - dVar13 * dVar17;
    dVar12 = dVar16 * dVar25 - dVar25 * dVar16;
    dVar33 = dVar33 + dVar33;
    dVar34 = dVar34 + dVar34;
    dVar30 = dVar30 + dVar30;
    dVar12 = dVar12 + dVar12;
    local_118 = (dVar30 * dVar15 - dVar18 * dVar34) + dVar25 * dVar33 + dVar28 + local_2d8;
    dStack_110 = (dVar33 * dVar18 - dVar30 * dVar13) + dVar25 * dVar34 + dVar1 + dStack_2d0;
    local_108 = (dVar34 * dVar13 - dVar15 * dVar33) + dVar25 * dVar30 + dVar17 + local_2c8;
    dStack_2c0 = (dVar12 * dVar25 - dVar12 * dVar25) + dVar25 * dVar12 + dVar16 + dStack_2c0;
  }
  else {
    dVar12 = dVar15 + dVar15;
    dVar28 = dVar18 + dVar18;
    dVar34 = dVar13 * (dVar13 + dVar13);
    dStack_1d0 = DAT_149934d80._8_8_ - (dVar18 * dVar28 + dVar34);
    local_1a8 = 1.0 - (dVar34 + dVar15 * dVar12);
    dVar34 = (dVar13 + dVar13) * dVar25;
    dVar30 = dVar12 * dVar13 + dVar28 * dVar25;
    local_1c8 = dVar28 * dVar15 + dVar34;
    local_1d8 = dVar12 * dVar13 - dVar28 * dVar25;
    dVar34 = dVar28 * dVar15 - dVar34;
    local_1e8 = dVar13 * dVar28 - dVar12 * dVar25;
    local_1f8._8_4_ = SUB84(dVar30,0);
    local_1f8._0_8_ = (double)DAT_149934d80 - (dVar18 * dVar28 + dVar15 * dVar12);
    local_1f8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar34,0);
    local_1b8._0_8_ = dVar12 * dVar25 + dVar13 * dVar28;
    local_1b8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    uStack_1a0 = 0;
    local_198 = local_2d8;
    dStack_190 = dStack_2d0;
    local_188 = local_2c8;
    uStack_180 = 0x3ff0000000000000;
    dVar18 = *(double *)(lVar10 + 0xa0);
    dVar25 = *(double *)(lVar10 + 0xa8);
    dVar15 = *(double *)(lVar10 + 0xb0);
    dVar34 = dVar25 + dVar25;
    dVar12 = dVar15 + dVar15;
    dVar13 = dVar18 * (dVar18 + dVar18);
    local_278 = ((double)DAT_149934d80 - (dVar15 * dVar12 + dVar25 * dVar34)) * dVar17;
    dStack_250 = (DAT_149934d80._8_8_ - (dVar15 * dVar12 + dVar13)) * dVar16;
    local_228 = (1.0 - (dVar13 + dVar25 * dVar34)) * dVar24;
    dVar15 = *(double *)(lVar10 + 0xa0) * dVar12;
    dVar13 = *(double *)(lVar10 + 0xb8);
    dVar30 = dVar12 * dVar13;
    dVar28 = (dVar18 + dVar18) * *(double *)(lVar10 + 0xb8);
    dVar13 = dVar34 * dVar13;
    dStack_270 = (dVar34 * dVar18 + dVar30) * dVar17;
    local_248 = (dVar12 * dVar25 + dVar28) * dVar16;
    local_238 = (dVar13 + dVar15) * dVar24;
    local_258 = (dVar34 * dVar18 - dVar30) * dVar16;
    dStack_230 = (dVar12 * dVar25 - dVar28) * dVar24;
    local_268 = (dVar15 - dVar13) * dVar17;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = *(undefined8 *)(lVar10 + 0xc0);
    uStack_210 = *(undefined8 *)(lVar10 + 200);
    local_208 = *(undefined8 *)(lVar10 + 0xd0);
    uStack_200 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar26._8_8_ = -(ulonglong)(0.0 <= dVar16);
    auVar26._0_8_ = -(ulonglong)(0.0 <= dVar17);
    auVar23 = blendvpd(_DAT_149936790,auVar31,auVar26);
    uVar11 = -(ulonglong)(0.0 <= dVar24 * 1.0);
    dVar17 = (double)(~uVar11 & 0xbff0000000000000 | uVar11 & 0x3ff0000000000000);
    dVar16 = auVar23._0_8_;
    local_168 = local_168 * dVar16;
    local_170 = local_170 * dVar16;
    local_178 = (code *)((double)local_178 * dVar16);
    dVar16 = auVar23._8_8_;
    local_148 = local_148 * dVar16;
    local_150 = local_150 * dVar16;
    local_158 = dVar16 * local_158;
    local_128 = local_128 * dVar17;
    local_130 = local_130 * dVar17;
    local_138 = dVar17 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar17 = local_288 * local_288 + local_298 * local_298;
    dVar16 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar14._0_8_ = dVar17 + dVar16;
    auVar14._8_8_ = dVar17 + dVar16;
    auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
    auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
    auVar23 = sqrtpd(auVar14,auVar14);
    auVar31 = divpd(auVar31,auVar23);
    auVar32._0_8_ = auVar31._0_8_ * local_288;
    auVar32._8_8_ = auVar31._8_8_ * dStack_280;
    local_2f8 = (double)((ulonglong)(local_298 * auVar31._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_));
    dStack_2f0 = (double)((ulonglong)(dStack_290 * auVar31._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_));
    local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar29);
    dStack_2c0 = 0.0;
  }
  dVar17 = auVar20._8_8_ * 0.0;
  local_2a8._8_4_ = SUB84(dVar17,0);
  local_2a8._0_8_ = dVar24 * 1.0;
  local_2a8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  iVar3 = *(int *)(param_1 + 0x6a8);
  local_2d8 = local_118;
  dStack_2d0 = dStack_110;
  local_2c8 = local_108;
  if ((longlong)iVar3 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x6a0);
    lVar9 = 0;
    do {
      plVar4 = *(longlong **)(lVar10 + lVar9);
      if ((plVar4 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar4);
      }
      if (plVar4[0x24] == 0) {
        local_358 = CONCAT31(local_358._1_3_,1);
        FUN_140613f88(plVar4,&local_2f8,0,0);
        if (local_300 != (longlong *)0x0) {
          FUN_14057a3b2(plVar4,0,0,1);
          (**(code **)(*plVar4 + 0x490))(plVar4,local_300);
        }
      }
      if (lVar8 != 0) {
        FUN_140357fa8(plVar4,2);
        FUN_140e996a4(plVar4,lVar8);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
LAB_14028e9ce:
  if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14028ef70 FUN_14028ef70 body=158 status=ok
// SIG undefined FUN_14028ef70(void)

void FUN_14028ef70(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  if (((*(uint *)(param_1 + 0x100) & 8) == 0) == (bool)param_2) {
    *(uint *)(param_1 + 0x100) = (*(uint *)(param_1 + 0x100) & 0xfffffff7) + (uint)param_2 * 8;
    iVar1 = *(int *)(param_1 + 0x6a8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x6a0);
      lVar5 = 0;
      bVar4 = DAT_14c950c29;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if ((lVar3 != 0 & bVar4) == 1) {
          FUN_1456cec3c(lVar3);
LAB_14028efd2:
          FUN_1449e3cec(lVar3,(*(uint *)(param_1 + 0x100) & 8) >> 3,1);
          bVar4 = DAT_14c950c29;
        }
        else if (lVar3 != 0) goto LAB_14028efd2;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 14028f00e FUN_14028f00e body=772 status=ok
// SIG undefined FUN_14028f00e(void)

undefined8 * FUN_14028f00e(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_149e020b0;
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
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b414fd0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14028f224;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14028f20e;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_14028f20e:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14028f224:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14028f314 FUN_14028f314 body=40 status=ok
// SIG undefined FUN_14028f314(void)

undefined8 FUN_14028f314(undefined8 param_1,int param_2)

{
  FUN_14028f33c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14028f33c FUN_14028f33c body=200 status=ok
// SIG undefined FUN_14028f33c(void)

void FUN_14028f33c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b16eb30;
  param_1[5] = &PTR_FUN_14b16f590;
  param_1[6] = &PTR_LAB_14b16f5d0;
  param_1[0x55] = &PTR_FUN_14b16f620;
  param_1[0x56] = &PTR_FUN_14b16f6a0;
  param_1[0x57] = &PTR_FUN_14b16f6b0;
  param_1[0xc4] = &PTR_FUN_14b16f6e0;
  param_1[0xff] = &PTR_FUN_14b16f6f0;
  param_1[0x108] = &PTR_FUN_14b16f700;
  param_1[0x109] = &PTR_FUN_14b16f7a0;
  FUN_14028f404(param_1[0x127],*(undefined4 *)(param_1 + 0x128));
  if (param_1[0x127] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x10b);
  FUN_14028f60c(param_1);
  return;
}



// FUNCTION 14028f404 FUN_14028f404 body=58 status=ok
// SIG undefined FUN_14028f404(void)

void FUN_14028f404(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_14028f43e(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14028f43e FUN_14028f43e body=105 status=ok
// SIG undefined FUN_14028f43e(void)

void FUN_14028f43e(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14028f4a8 FUN_14028f4a8 body=138 status=ok
// SIG undefined FUN_14028f4a8(void)

void FUN_14028f4a8(longlong param_1)

{
  FUN_14028f532(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14028f58f(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14028f532 FUN_14028f532 body=93 status=ok
// SIG undefined FUN_14028f532(void)

void FUN_14028f532(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x38);
    do {
      plVar3 = (longlong *)*plVar4;
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
      if (plVar4[-3] != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14028f58f FUN_14028f58f body=124 status=ok
// SIG undefined FUN_14028f58f(void)

void FUN_14028f58f(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x98;
    do {
      FUN_1407e878c(param_1);
      if (*(longlong *)(param_1 + -0x18) != 0) {
        FUN_1400020a8();
      }
      FUN_1447cd778(*(undefined8 *)(param_1 + -0x28),*(undefined4 *)(param_1 + -0x20));
      if (*(longlong *)(param_1 + -0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x78) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0xa8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14028f60c FUN_14028f60c body=155 status=ok
// SIG undefined FUN_14028f60c(void)

void FUN_14028f60c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab89360;
  param_1[5] = &PTR_FUN_14ab89dc0;
  param_1[6] = &PTR_LAB_14ab89e00;
  param_1[0x55] = &PTR_FUN_14ab89e50;
  param_1[0x56] = &PTR_FUN_14ab89ed0;
  param_1[0x57] = &PTR_FUN_14ab89ee0;
  param_1[0xc4] = &PTR_FUN_14ab89f10;
  if (*(char *)((longlong)param_1 + 0x836) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x836) = 0;
  }
  param_1[0xff] = &PTR_LAB_14ab74bb0;
  FUN_14028f6a8(param_1 + 0x101,1);
  FUN_14028f724(param_1);
  return;
}



// FUNCTION 14028f6a8 FUN_14028f6a8 body=124 status=ok
// SIG undefined FUN_14028f6a8(void)

void FUN_14028f6a8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14028f724 FUN_14028f724 body=445 status=ok
// SIG undefined FUN_14028f724(void)

void FUN_14028f724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab63c30;
  param_1[5] = &PTR_FUN_14ab64690;
  param_1[6] = &PTR_LAB_14ab646d0;
  param_1[0x55] = &PTR_FUN_14ab64720;
  param_1[0x56] = &PTR_FUN_14ab647a0;
  param_1[0x57] = &PTR_FUN_14ab647b0;
  param_1[0xc4] = &PTR_FUN_14ab647e0;
  FUN_14028f8fc(param_1 + 0xfb,1);
  if (param_1[0xf9] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f8e1(param_1[0xf6],*(undefined4 *)(param_1 + 0xf7));
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xf5) == '\x01') {
    *(undefined1 *)(param_1 + 0xf5) = 0;
  }
  if (param_1[0xdb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xca],*(undefined4 *)(param_1 + 0xcb));
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[199],*(undefined4 *)(param_1 + 200));
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 14028f8e1 FUN_14028f8e1 body=27 status=ok
// SIG undefined FUN_14028f8e1(void)

void FUN_14028f8e1(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0xc);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14028f8fc FUN_14028f8fc body=124 status=ok
// SIG undefined FUN_14028f8fc(void)

void FUN_14028f8fc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14028f978 FUN_14028f978 body=116 status=ok
// SIG undefined FUN_14028f978(void)

void FUN_14028f978(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 1;
  FUN_14028f9ee(&local_38,0);
  *local_38 = param_1;
  FUN_14028fb50(param_2,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14028f9ee FUN_14028f9ee body=353 status=ok
// SIG undefined FUN_14028f9ee(void)

void FUN_14028f9ee(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14028fa73;
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
LAB_14028fa73:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14028fb50 FUN_14028fb50 body=397 status=ok
// SIG undefined FUN_14028fb50(void)

void FUN_14028fb50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  FUN_14028fcde();
  if ((longlong)(int)param_2[1] == 0) {
    iVar3 = 0;
  }
  else {
    plVar7 = (longlong *)*param_2;
    plVar1 = plVar7 + (int)param_2[1];
    do {
      lVar5 = *plVar7;
      if ((longlong)*(int *)(lVar5 + 0x3f0) != 0) {
        lVar6 = *(longlong *)(lVar5 + 1000);
        lVar4 = (longlong)*(int *)(lVar5 + 0x3f0) * 0x13c10;
        do {
          lVar2 = *(longlong *)*param_2;
          iVar3 = *(int *)(lVar2 + 0x420);
          *(uint *)(lVar2 + 0x420) = iVar3 + 1U;
          if (*(uint *)(lVar2 + 0x424) < iVar3 + 1U) {
            FUN_144928a2e((longlong *)(lVar2 + 0x418),iVar3);
          }
          *(longlong *)(*(longlong *)(lVar2 + 0x418) + (longlong)iVar3 * 8) = lVar6;
          lVar6 = lVar6 + 0x13c10;
          lVar4 = lVar4 + -0x13c10;
        } while (lVar4 != 0);
      }
      lVar6 = *(longlong *)*param_2;
      iVar3 = *(int *)(lVar6 + 0x430);
      *(uint *)(lVar6 + 0x430) = iVar3 + 1U;
      if (*(uint *)(lVar6 + 0x434) < iVar3 + 1U) {
        FUN_140290316((longlong *)(lVar6 + 0x428),iVar3);
      }
      *(longlong *)(*(longlong *)(lVar6 + 0x428) + (longlong)iVar3 * 8) = lVar5 + 0x98;
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    iVar3 = (int)param_2[1];
    if (1 < iVar3) {
      lVar5 = 1;
      do {
        FUN_1400f698c(((longlong *)*param_2)[lVar5] + 0x418,*(longlong *)*param_2 + 0x418);
        FUN_1472db1ea(((longlong *)*param_2)[lVar5] + 0x428,*(longlong *)*param_2 + 0x428);
        lVar5 = lVar5 + 1;
        iVar3 = (int)param_2[1];
      } while (lVar5 < iVar3);
    }
  }
  param_2 = (longlong *)*param_2;
  lVar5 = *(longlong *)(*param_2 + 8);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x18), lVar5 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(char *)(lVar5 + 8) == '\0') {
      lVar6 = lVar5;
    }
  }
  if (iVar3 != 0) {
    lVar5 = 0;
    do {
      *(longlong *)(*(longlong *)((longlong)param_2 + lVar5) + 0x908) = lVar6;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14028fcde FUN_14028fcde body=224 status=ok
// SIG undefined FUN_14028fcde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028fcde(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((DAT_14ca46a08 != 0) && (DAT_14ca469f8 != 0)) {
    if (DAT_14ca46a0c == '\0') {
      if (DAT_14ca46a08 == 2) {
        FUN_1447832fa(DAT_14ca46a00,DAT_14c7585d4);
      }
      else if (DAT_14ca46a08 == 1) {
        FUN_1431eb898(param_1,&DAT_14ca850c8);
        FUN_142fea774(&DAT_14ca469f0);
      }
    }
    FUN_14029006e(&DAT_14ca8c130);
    FUN_14028fe30(&DAT_14ca8c190);
    FUN_14028fdbe(&DAT_14ca115c0);
    if (DAT_14ca469f0 != 0) {
      FUN_1400020a8();
    }
    puVar2 = DAT_14ca46a00;
    DAT_14ca469f0 = 0;
    _DAT_14ca469f8 = 0;
    DAT_14ca46a00 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    DAT_14ca46a08 = 0;
    DAT_14ca46a0c = '\0';
  }
  return;
}



// FUNCTION 14028fdbe FUN_14028fdbe body=114 status=ok
// SIG undefined FUN_14028fdbe(void)

void FUN_14028fdbe(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  iVar1 = *(int *)(param_1 + 0x20);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      if ((uint)(*(int *)(param_1 + 0x10) -
                *(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar2 * 0x10)) < 0x3e9) {
        iVar2 = iVar2 + 1;
      }
      else {
        FUN_1456ecb64(param_1 + 0x18,iVar2);
        FUN_1403f9b42(param_1 + 0x18);
        iVar1 = *(int *)(param_1 + 0x20);
      }
    } while (iVar2 < iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014028fe12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14028fe30 FUN_14028fe30 body=573 status=ok
// SIG undefined FUN_14028fe30(void)

char FUN_14028fe30(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  
  pcVar1 = (char *)(param_1 + 0x10);
  LOCK();
  bVar16 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar16) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar16) {
    FUN_1447d2058();
  }
  plVar2 = (longlong *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x50);
  if ((longlong)(int)uVar3 != 0) {
    iVar7 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar7 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar7) < uVar3) {
      FUN_1403f635c(plVar2,iVar7);
    }
    memcpy((void *)((longlong)iVar7 * 8 + *plVar2),*(void **)(param_1 + 0x48),
           (longlong)(int)uVar3 << 3);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_145ccb8b2((undefined8 *)(param_1 + 0x48),0);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar15 = 0;
    do {
      if ((0 < (longlong)DAT_14c760dc8) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8),
         (ulonglong)((longlong)DAT_14c760dc8 + *(longlong *)(lVar4 + 0x30)) <= DAT_14c867d10)) {
        LOCK();
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(lVar4 + 0x20);
        UNLOCK();
        FUN_144725486();
        iVar7 = *(int *)(param_1 + 0x20);
        iVar8 = ~(uint)lVar15 + iVar7;
        if (iVar8 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8),
                  (void *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8 + 8),(longlong)iVar8 << 3);
          iVar7 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar7 + -1;
        uVar3 = *(uint *)(param_1 + 0x30);
        lVar12 = (longlong)(int)uVar3;
        if (lVar12 != 0) {
          plVar5 = (longlong *)*plVar2;
          iVar7 = 0;
          uVar13 = 0;
          bVar16 = *plVar5 == lVar4;
          do {
            iVar8 = (int)uVar13;
            uVar14 = uVar13;
            uVar10 = uVar13;
            uVar9 = iVar8 + 1U;
            if ((int)(iVar8 + 1U) < (int)uVar3) {
              uVar9 = uVar3;
            }
            do {
              uVar10 = uVar10 + 1;
              if (lVar12 <= (longlong)uVar10) {
                uVar14 = (ulonglong)uVar9;
                break;
              }
              uVar14 = (ulonglong)((int)uVar14 + 1);
            } while (bVar16 == (plVar5[uVar10] == lVar4));
            if (bVar16 == false) {
              iVar11 = (int)uVar14 - iVar8;
              if (iVar7 != iVar8) {
                memmove(plVar5 + iVar7,plVar5 + uVar13,(longlong)iVar11 << 3);
              }
              iVar7 = iVar7 + iVar11;
            }
            uVar13 = uVar14;
            bVar16 = (bool)(bVar16 ^ 1);
          } while ((longlong)uVar10 < lVar12);
          *(int *)(param_1 + 0x30) = iVar7;
        }
        if (lVar4 != 0) {
          FUN_14003f39a(lVar4);
          FUN_1400020a8();
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x20));
  }
  LOCK();
  cVar6 = *pcVar1;
  bVar16 = cVar6 == '\x01';
  if (bVar16) {
    *pcVar1 = '\0';
    cVar6 = '\x01';
  }
  UNLOCK();
  if (bVar16) {
    return cVar6;
  }
  cVar6 = FUN_14008cdb0(pcVar1);
  return cVar6;
}



// FUNCTION 14029006e FUN_14029006e body=680 status=ok
// SIG undefined FUN_14029006e(void)

char FUN_14029006e(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  
  pcVar1 = (char *)(param_1 + 0x10);
  LOCK();
  bVar18 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar18) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar18) {
    FUN_1447d2058();
  }
  plVar2 = (longlong *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x50);
  if ((longlong)(int)uVar4 != 0) {
    iVar14 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar14 + uVar4;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar14) < uVar4) {
      FUN_1400f7990(plVar2,iVar14);
    }
    memcpy((void *)((longlong)iVar14 * 8 + *plVar2),*(void **)(param_1 + 0x48),
           (longlong)(int)uVar4 << 3);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_145ccb7b2((undefined8 *)(param_1 + 0x48),0);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar17 = 0;
    do {
      if ((0 < (longlong)DAT_14c760dc8) &&
         (puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + lVar17 * 8),
         (ulonglong)((longlong)DAT_14c760dc8 + puVar5[6]) <= DAT_14c867d10)) {
        LOCK();
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(puVar5 + 4);
        UNLOCK();
        FUN_144725486();
        iVar14 = *(int *)(param_1 + 0x20);
        iVar12 = ~(uint)lVar17 + iVar14;
        if (iVar12 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar17 * 8),
                  (void *)(*(longlong *)(param_1 + 0x18) + lVar17 * 8 + 8),(longlong)iVar12 << 3);
          iVar14 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar14 + -1;
        uVar4 = *(uint *)(param_1 + 0x30);
        lVar16 = (longlong)(int)uVar4;
        if (lVar16 != 0) {
          plVar6 = (longlong *)*plVar2;
          iVar14 = 0;
          uVar9 = 0;
          bVar18 = (undefined8 *)*plVar6 == puVar5;
          do {
            iVar12 = (int)uVar9;
            uVar7 = iVar12 + 1U;
            if ((int)(iVar12 + 1U) < (int)uVar4) {
              uVar7 = uVar4;
            }
            uVar10 = uVar9;
            uVar13 = uVar9;
            do {
              uVar13 = uVar13 + 1;
              uVar11 = (ulonglong)uVar7;
              if (lVar16 <= (longlong)uVar13) break;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar11 = uVar10;
            } while (bVar18 == ((undefined8 *)plVar6[uVar13] == puVar5));
            if (bVar18 == false) {
              iVar15 = (int)uVar11 - iVar12;
              if (iVar14 != iVar12) {
                memmove(plVar6 + iVar14,plVar6 + uVar9,(longlong)iVar15 << 3);
              }
              iVar14 = iVar14 + iVar15;
            }
            uVar9 = uVar11;
            bVar18 = (bool)(bVar18 ^ 1);
          } while ((longlong)uVar13 < lVar16);
          *(int *)(param_1 + 0x30) = iVar14;
        }
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_14a38cff0;
          if (puVar5[2] != 0) {
            LOCK();
            puVar3 = (uint *)(puVar5[2] + 8);
            uVar4 = *puVar3;
            *puVar3 = *puVar3 - 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          *puVar5 = &PTR_FUN_14a38cd70;
          *(undefined1 *)((longlong)puVar5 + 0xe) = 2;
          if ((*(int *)(puVar5 + 1) != -1) && (DAT_14c868880 == '\0')) {
            FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                          L"A FRenderResource was deleted without being released first!");
          }
          FUN_1400020a8();
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x20));
  }
  LOCK();
  cVar8 = *pcVar1;
  bVar18 = cVar8 == '\x01';
  if (bVar18) {
    *pcVar1 = '\0';
    cVar8 = '\x01';
  }
  UNLOCK();
  if (bVar18) {
    return cVar8;
  }
  cVar8 = FUN_14008cdb0(pcVar1);
  return cVar8;
}



// FUNCTION 140290316 FUN_140290316 body=353 status=ok
// SIG undefined FUN_140290316(void)

void FUN_140290316(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14029039b;
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
LAB_14029039b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140290480 FUN_140290480 body=163 status=ok
// SIG undefined FUN_140290480(void)

void FUN_140290480(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_14a5c6dd8;
  param_1[6] = 0;
  param_1[7] = 0x3727c5ac;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = &PTR_FUN_14a5c6de8;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff00000000;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  return;
}



// FUNCTION 140290524 FUN_140290524 body=79 status=ok
// SIG undefined FUN_140290524(void)

ulonglong FUN_140290524(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140290574();
  if ((char)uVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00014029054f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x160))(param_1,param_2);
    return uVar1;
  }
  if ((uVar1 & 0xff) == 0) {
    (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(param_2 + 8));
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 140290574 FUN_140290574 body=149 status=ok
// SIG undefined FUN_140290574(void)

ulonglong FUN_140290574(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + lVar6);
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (((cVar3 != '\0') &&
          (uVar4 = (**(code **)(*plVar2 + 0x80))(plVar2,param_2,param_1,0xffffffff),
          (char)uVar4 != '\x02')) && (*(char *)(plVar2[9] + 0x78) != '\0')) {
        uVar5 = (ulonglong)uVar4;
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14029060a FUN_14029060a body=231 status=ok
// SIG undefined FUN_14029060a(void)

char FUN_14029060a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if ((int)param_1[0x37] < 1) {
    cVar3 = '\0';
  }
  else {
    lVar4 = 0;
    uVar6 = 0;
    cVar3 = '\0';
    do {
      plVar5 = (longlong *)param_1[0x36];
      if ((longlong *)param_1[0x36] == (longlong *)0x0) {
        plVar5 = param_1 + 0x26;
      }
      lVar2 = *(longlong *)((longlong)plVar5 + lVar4);
      if (lVar2 != 0) {
        if (cVar3 != '\0') {
          cVar1 = (**(code **)(*param_1 + 0x168))(param_1,uVar6 & 0xffffffff);
          if (cVar1 == '\0') goto LAB_1402906b6;
          lVar2 = *(longlong *)((longlong)plVar5 + lVar4);
        }
        cVar1 = FUN_14097f910(lVar2,param_2,param_1,uVar6 & 0xffffffff);
        if (cVar1 == '\x01') {
          cVar1 = (**(code **)(*param_1 + 0x178))(param_1,uVar6 & 0xffffffff,param_2);
          if (cVar1 == '\0') {
            (**(code **)(*param_1 + 0x180))(param_1,uVar6 & 0xffffffff,param_2);
            cVar3 = '\x01';
          }
        }
        else if (cVar1 == '\x02') {
          return '\x02' - cVar3;
        }
      }
LAB_1402906b6:
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)uVar6 < (longlong)(int)param_1[0x37]);
  }
  return cVar3;
}



// FUNCTION 1402906f2 FUN_1402906f2 body=145 status=ok
// SIG undefined FUN_1402906f2(void)

void FUN_1402906f2(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0.0 <= param_2) {
    lVar5 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1b0);
    }
    iVar2 = *(int *)(param_1 + 0x1b8);
    if ((longlong)iVar2 != 0) {
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar5 + lVar4);
        if (plVar3 != (longlong *)0x0) {
          fVar1 = *(float *)((longlong)plVar3 + 300);
          if (0.0 <= fVar1) {
            *(float *)((longlong)plVar3 + 300) = param_2;
            plVar3 = *(longlong **)(lVar5 + lVar4);
          }
          (**(code **)(*plVar3 + 0x118))(fVar1,param_2);
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar4);
    }
  }
  return;
}



// FUNCTION 140290784 FUN_140290784 body=123 status=ok
// SIG undefined FUN_140290784(void)

uint FUN_140290784(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1b8)) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    bVar3 = false;
    cVar5 = '\0';
    do {
      cVar2 = FUN_14097f44a(param_1,uVar1,uVar4,param_2);
      if (cVar2 == '\x01') {
        bVar3 = true;
      }
      else if (cVar2 == '\x02') {
        cVar5 = '\x01';
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x1b8));
    uVar4 = 1;
    if (!bVar3) {
      uVar4 = (uint)(byte)(cVar5 * '\x02');
    }
  }
  return uVar4;
}



// FUNCTION 140290800 FUN_140290800 body=173 status=ok
// SIG undefined FUN_140290800(void)

undefined4 FUN_140290800(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x1b8) < 1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x1b0);
      if (*(longlong *)(param_1 + 0x1b0) == 0) {
        lVar5 = param_1 + 0x130;
      }
      plVar2 = *(longlong **)(lVar5 + lVar7);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2), cVar3 != '\0')) {
        uVar4 = FUN_14097f910(plVar2,param_2,param_1,uVar6 & 0xffffffff);
        cVar3 = *(char *)(lVar1 + 0xd0);
        if (cVar3 == '\0') {
          return uVar4;
        }
        if ((char)uVar4 != '\x02' && cVar3 == '\x01') {
          return uVar4;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x1b8));
  }
  return uVar4;
}



// FUNCTION 1402908ae FUN_1402908ae body=333 status=ok
// SIG undefined FUN_1402908ae(void)

void FUN_1402908ae(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1402909fc();
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0xe0) != 0)) {
    FUN_1402138e4();
  }
  plVar1 = (longlong *)(param_1 + 0x1a0);
  lVar2 = param_1 + 0x1b0;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  iVar4 = 0;
  local_40 = lVar2;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0x1c8);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (local_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2e0))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (((iStack_54 != iVar4) || (local_60 != lVar2)) || (local_70 != plVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402909fc FUN_1402909fc body=1340 status=ok
// SIG undefined FUN_1402909fc(void)

void FUN_1402909fc(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  uint *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)(param_1 + 0x1c0);
  lVar11 = param_1 + 0x1d0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar9 = 0;
  local_60 = lVar11;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_1 + 0x1e8);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar3;
  if ((iStack_54 != iVar9) || (local_60 != lVar11)) {
    do {
      do {
        (**(code **)(**(longlong **)(*local_90 + 8 + (longlong)iStack_74 * 0x18) + 0x28))();
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar9);
    } while ((local_80 != lVar11) || (local_90 != plVar3));
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_140290f3a();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_140290f3a();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_140290f3a();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_140290f3a();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1402919c4();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1402915f6();
  }
  iVar9 = *(int *)(param_1 + 0xe8);
  if (iVar9 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0xd0);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar5 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar5 = iVar9 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140290c5f;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar5) {
      iVar5 = iVar9;
    }
  }
  if (iVar5 != iVar9) {
    uVar13 = 0xffffffff;
    iVar2 = iVar9;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 8 + (longlong)iVar5 * 0x18) != 0) {
        FUN_1402915f6();
        iVar2 = *(int *)(param_1 + 0xe8);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar4 = *(uint **)(param_1 + 0xe0);
      if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0xd0);
      }
      iVar5 = (int)uVar14;
      lVar11 = (longlong)iVar5;
      uVar6 = puVar4[lVar11] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar6 = puVar4[lVar11 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140290c33;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_140290c33:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar9);
  }
LAB_140290c5f:
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_140293dfe();
  }
  plVar3 = (longlong *)FUN_14039ffc6(param_1);
  if ((plVar3 != (longlong *)0x0) && (lVar11 = (**(code **)(*plVar3 + 0xb0))(plVar3), lVar11 != 0))
  {
    FUN_140291d9a(param_1,0);
    FUN_140291466(lVar11);
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_14029257e();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_140292120();
  }
  iVar9 = *(int *)(param_1 + 0x98);
  if (iVar9 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x80);
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar5 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar5 = iVar9 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140290e2a;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar5) {
      iVar5 = iVar9;
    }
  }
  if (iVar5 != iVar9) {
    uVar13 = 0xffffffff;
    local_98 = (uint *)(param_1 + 0x80);
    do {
      lVar11 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(lVar11 + 0x30 + (longlong)iVar5 * 0x58) != 0) {
        FUN_140291300();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar5 * 0x58 + 0x40) != 0) {
        FUN_140292a04();
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar4 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar4 = local_98;
      }
      iVar2 = *(int *)(param_1 + 0x98);
      iVar5 = (int)uVar14;
      lVar11 = (longlong)iVar5;
      uVar6 = puVar4[lVar11] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar6 = puVar4[lVar11 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140290dfc;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_140290dfc:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar9);
  }
LAB_140290e2a:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140290f3a FUN_140290f3a body=663 status=ok
// SIG undefined FUN_140290f3a(void)

void FUN_140290f3a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  int *local_b8;
  undefined4 local_b0;
  int local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  longlong local_80;
  uint local_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144928b90(local_a8,*(undefined1 *)(param_1 + 0x18));
  local_70 = local_70 & 0xffffff00;
  uStack_6c = 0;
  uStack_64 = 0;
  piVar8 = *(int **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  iVar2 = *(int *)(param_1 + 0xc0);
  iVar3 = *(int *)(param_1 + 0xc4);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  local_b8 = piVar8;
  local_ac = iVar3;
  if ((longlong)iVar2 != 0) {
    piVar10 = piVar8 + iVar2;
    do {
      lVar5 = *(longlong *)(param_1 + 0x30);
      lVar9 = (longlong)*piVar8 * 0x30;
      lVar1 = lVar5 + lVar9;
      local_c0 = *(undefined4 *)(lVar5 + 8 + lVar9);
      local_c8 = *(undefined8 *)(lVar5 + lVar9);
      FUN_144928d62(local_98,1,&local_c8);
      local_d8 = local_d8 & 0xffffff00;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      FUN_144976b9c(&local_d8,*(undefined8 *)(lVar5 + 0xc + lVar9));
      local_70 = local_d8;
      uStack_64 = uStack_cc;
      uStack_6c = CONCAT44(uStack_d0,uStack_d4);
      lVar7 = (longlong)*(int *)(lVar5 + 0x20 + lVar9);
      if (lVar7 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x18 + lVar9);
        lVar9 = 0;
        do {
          if (*(longlong *)(lVar1 + 0x28) == 0) {
LAB_1402910c1:
            local_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            if ((*(int *)(lVar5 + 8 + lVar9) != 0) &&
               (plVar4 = *(longlong **)(lVar5 + lVar9), plVar4 != (longlong *)0x0)) {
              (**(code **)(*plVar4 + 0x60))(plVar4,local_a8,&local_d8,*(undefined4 *)(lVar1 + 0x14))
              ;
            }
          }
          else {
            if ((*(int *)(lVar5 + 8 + lVar9) == 0) ||
               (plVar4 = *(longlong **)(lVar5 + lVar9), plVar4 == (longlong *)0x0)) {
              local_d8 = 0;
              uStack_d4 = 0;
              lVar6 = 0;
            }
            else {
              (**(code **)(*plVar4 + 0x38))(plVar4,&local_d8);
              lVar6 = CONCAT44(uStack_d4,local_d8);
            }
            if (lVar6 != *(longlong *)(lVar1 + 0x28)) goto LAB_1402910c1;
          }
          lVar9 = lVar9 + 0x10;
        } while (lVar7 * 0x10 != lVar9);
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar10);
  }
  local_b0 = 0;
  if (iVar3 != 0) {
    FUN_14480809c(&local_b8,0);
  }
  if (((int **)(param_1 + 0xb8) == &local_b8) || (*(int *)(param_1 + 0xc0) != 0)) {
    if (local_b8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      FUN_1400020a8();
    }
    *(int **)(param_1 + 0xb8) = local_b8;
    local_b8 = (int *)0x0;
    *(undefined4 *)(param_1 + 0xc0) = local_b0;
    *(int *)(param_1 + 0xc4) = local_ac;
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402911d2 FUN_1402911d2 body=302 status=ok
// SIG undefined FUN_1402911d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402911d2(undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 1:
    *(undefined4 *)(param_1 + 1) = DAT_14cb7bb54._4_4_;
    uVar1 = _DAT_14cb7bb50;
    break;
  case 2:
    *(undefined4 *)(param_1 + 1) = DAT_14cb7bb24._4_4_;
    uVar1 = _DAT_14cb7bb20;
    break;
  case 3:
    *(undefined4 *)(param_1 + 1) = DAT_14cb7bb3c._4_4_;
    uVar1 = _DAT_14cb7bb38;
    break;
  case 4:
    *(undefined4 *)(param_1 + 1) = DAT_14cb79480;
    uVar1 = _DAT_14cb79478;
    break;
  case 5:
    *(undefined4 *)(param_1 + 1) = DAT_14cb79498;
    uVar1 = _DAT_14cb79490;
    break;
  case 6:
    *(undefined4 *)(param_1 + 1) = DAT_14cb7bb6c._4_4_;
    uVar1 = _DAT_14cb7bb68;
    break;
  case 7:
    *(undefined4 *)(param_1 + 1) = DAT_14cb794b0;
    uVar1 = _DAT_14cb794a8;
    break;
  case 8:
    *(undefined4 *)(param_1 + 1) = DAT_14cb794c8;
    uVar1 = _DAT_14cb794c0;
    break;
  case 9:
    *(undefined4 *)(param_1 + 1) = DAT_14cb794e0;
    uVar1 = _DAT_14cb794d8;
    break;
  case 10:
    *(undefined4 *)(param_1 + 1) = DAT_14cb7bb84._4_4_;
    uVar1 = _DAT_14cb7bb80;
    break;
  default:
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  case 0xc:
    *(undefined4 *)(param_1 + 1) = DAT_14cb794f8;
    uVar1 = _DAT_14cb794f0;
    break;
  case 0xd:
    *(undefined4 *)(param_1 + 1) = DAT_14cb7be18;
    uVar1 = _DAT_14cb7be10;
    break;
  case 0xe:
    *(undefined4 *)(param_1 + 1) = DAT_14cb7baf8;
    uVar1 = _DAT_14cb7baf0;
  }
  *param_1 = uVar1;
  return;
}



// FUNCTION 140291300 FUN_140291300 body=357 status=ok
// SIG undefined FUN_140291300(void)

void FUN_140291300(longlong param_1)

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144928b90(local_80,6);
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    psVar6 = *(short **)(param_1 + 0x60);
    psVar1 = psVar6 + *(int *)(param_1 + 0x68);
    local_90 = (longlong *)(param_1 + 0x70);
    lVar7 = param_1 + 0x28;
    do {
      uVar5 = (uint)*psVar6;
      if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x50))) {
        lVar4 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar4 = param_1 + 0x38;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
          lVar3 = *(longlong *)(param_1 + 0x28);
          lVar8 = (longlong)(int)uVar5 * 0x30;
          lVar4 = lVar3 + lVar8;
          local_88 = lVar7;
          FUN_140291cc8(local_80,lVar4);
          if (*(char *)(lVar3 + 0xf + lVar8) != '\0') {
            local_98 = *(undefined8 *)(lVar3 + lVar8);
            lVar7 = 0;
            plVar9 = local_90;
            do {
              if (((*(byte *)(lVar4 + 0xf) >> ((uint)lVar7 & 0x1f) & 1) != 0) &&
                 (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
                (**(code **)(*plVar2 + 8))(plVar2,uVar5,local_80,local_98);
              }
              lVar7 = lVar7 + 1;
              plVar9 = plVar9 + 2;
            } while (lVar7 != 8);
          }
          *(undefined1 *)(lVar4 + 0x10) = 0xff;
          lVar7 = local_88;
        }
      }
      psVar6 = psVar6 + 1;
    } while (psVar6 != psVar1);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_140ca8596(param_1 + 0x60,0);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140291466 FUN_140291466 body=399 status=ok
// SIG undefined FUN_140291466(void)

void FUN_140291466(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140293306();
  if (*(char *)(param_1 + 0x15c) == '\x01') {
    *(undefined1 *)(param_1 + 0x15c) = 0;
    FUN_1456ecefc(param_1);
    FUN_1402957c8(param_1 + 0xb0,param_1 + 0x160);
  }
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    FUN_1402957c8(param_1 + 0x68,param_1 + 0x2b8);
  }
  if (*(char *)(param_1 + 0x2e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
    FUN_1402957c8(param_1 + 0x80,param_1 + 0x2e8);
  }
  if (*(char *)(param_1 + 0x2c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c8) = 0;
    FUN_1402957c8(param_1 + 0x98,param_1 + 0x2d0);
  }
  if (*(char *)(param_1 + 0x2f8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f8) = 0;
    FUN_1447f69b6(param_1 + 0xe0);
  }
  if (0 < *(int *)(param_1 + 0x298)) {
    *(undefined4 *)(param_1 + 0x298) = 0;
    if (*(int *)(param_1 + 0x29c) != 0) {
      FUN_1446dda88(param_1 + 0x290,0);
    }
    FUN_1447f69b6(param_1 + 200);
  }
  iVar1 = *(int *)(param_1 + 0x2a8);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      FUN_14884c89c(param_1 + 0x128,*(longlong *)(lVar3 + 0x58) + 0x10,lVar3 + 0x10,lVar3 + 0x88);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1402915f6 FUN_1402915f6 body=972 status=ok
// SIG undefined FUN_1402915f6(void)

void FUN_1402915f6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_178 [36];
  int local_154;
  longlong local_150;
  longlong local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint local_134;
  longlong *local_130;
  undefined4 local_128;
  uint uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined2 local_108;
  undefined2 uStack_106;
  uint uStack_104;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  uint local_c4;
  longlong local_c0 [2];
  undefined1 local_b0 [24];
  int local_98;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    local_150 = param_1 + 0x78;
    FUN_140292ed8(local_c0);
    uStack_100 = local_b0;
    local_108 = 0;
    uStack_106 = 0;
    uStack_104 = 1;
    local_f8 = 0xffffffff;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    if (local_98 == 0) {
      local_154 = 0;
    }
    else {
      FUN_1449c0562(&local_108);
      local_154 = local_98;
    }
    local_128 = CONCAT22(uStack_106,local_108);
    local_118 = local_f8;
    uVar2 = local_118;
    uStack_110 = uStack_f0;
    uStack_124 = uStack_104;
    local_130 = local_c0;
    local_118._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    uStack_120 = uStack_100;
    if ((local_118._4_4_ != local_154) || (uStack_100 != local_b0)) {
      local_148 = param_1 + 0x28;
      iVar4 = local_118._4_4_;
      local_118 = uVar2;
      do {
        lVar1 = *local_130;
        lVar9 = lVar1 + (longlong)iVar4 * 0x40 + 0x10;
        FUN_144a659ac(lVar9,&local_108,2);
        FUN_144a659ac(lVar9,&local_140,1);
        pbVar5 = (byte *)FUN_140e50bcb(local_148,&local_140,&local_108);
        if (pbVar5 != (byte *)0x0) {
          if (0 < *(int *)(pbVar5 + 0x10)) {
            puVar8 = (undefined8 *)(lVar1 + (longlong)iVar4 * 0x40);
            local_108 = 7;
            uStack_104 = 0;
            uStack_100._0_4_ = 0;
            local_e8 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_e0 = 0;
            uStack_d8 = 0;
            FUN_140c25b54(&local_108);
            local_d0 = 0;
            local_cc = 0;
            local_c4 = 0;
            uVar2 = *puVar8;
            local_108 = (undefined2)uVar2;
            uStack_106 = (undefined2)((ulonglong)uVar2 >> 0x10);
            uStack_104 = (uint)((ulonglong)uVar2 >> 0x20);
            uStack_100._0_4_ = *(undefined4 *)(puVar8 + 1);
            FUN_1447715ec(&local_f8,lVar9);
            puVar8 = &DAT_14cb7c580;
            if (*pbVar5 != 0) {
              puVar8 = &DAT_14cb7c588;
            }
            local_cc = *puVar8;
            local_d0 = 1;
            local_c4 = (uint)*pbVar5;
            iVar4 = *(int *)(pbVar5 + 0x10);
            if ((longlong)iVar4 != 0) {
              lVar1 = *(longlong *)(pbVar5 + 8);
              lVar9 = 0;
              do {
                lVar6 = *(longlong *)(pbVar5 + 0x18);
                if (lVar6 == 0) {
LAB_140291859:
                  local_140 = CONCAT31(local_140._1_3_,1);
                  local_134 = *pbVar5 ^ 1;
                  puVar8 = &DAT_14cb7c588;
                  if (*pbVar5 != 0) {
                    puVar8 = &DAT_14cb7c580;
                  }
                  uStack_13c = (undefined4)*puVar8;
                  uStack_138 = (undefined4)((ulonglong)*puVar8 >> 0x20);
                  if ((*(int *)(lVar1 + 8 + lVar9) != 0) &&
                     (plVar3 = *(longlong **)(lVar1 + lVar9), plVar3 != (longlong *)0x0)) {
                    (**(code **)(*plVar3 + 0x60))(plVar3,&local_108,&local_140,0xbf800000);
                  }
                }
                else {
                  if ((*(int *)(lVar1 + 8 + lVar9) == 0) ||
                     (plVar3 = *(longlong **)(lVar1 + lVar9), plVar3 == (longlong *)0x0)) {
                    lVar7 = 0;
                  }
                  else {
                    (**(code **)(*plVar3 + 0x38))(plVar3,&local_140);
                    lVar7 = CONCAT44(uStack_13c,local_140);
                    lVar6 = *(longlong *)(pbVar5 + 0x18);
                  }
                  if (lVar7 != lVar6) goto LAB_140291859;
                }
                lVar9 = lVar9 + 0x10;
              } while ((longlong)iVar4 * 0x10 != lVar9);
            }
            if (local_e0 != 0) {
              FUN_1400020a8();
            }
          }
          pbVar5[0x18] = 0;
          pbVar5[0x19] = 0;
          pbVar5[0x1a] = 0;
          pbVar5[0x1b] = 0;
          pbVar5[0x1c] = 0;
          pbVar5[0x1d] = 0;
          pbVar5[0x1e] = 0;
          pbVar5[0x1f] = 0;
        }
        local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~uStack_124);
        FUN_1449c0562(&local_128);
        iVar4 = local_118._4_4_;
        uVar2 = local_118;
      } while (local_130 != local_c0 || (uStack_120 != local_b0 || local_118._4_4_ != local_154));
    }
    local_118 = uVar2;
    FUN_145779eb8(local_c0,0);
    if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) {
      FUN_1456ecc78(local_150,local_c0);
    }
    local_78 = 0;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_140292ea0(local_c0);
  }
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402919c4 FUN_1402919c4 body=771 status=ok
// SIG undefined FUN_1402919c4(void)

void FUN_1402919c4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  int local_e8;
  ulonglong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [40];
  undefined2 local_a8 [2];
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  uint local_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar4 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar4 != 0) {
    local_110 = (ulonglong **)(param_1 + 0x78);
    puVar8 = *(ulonglong **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    iVar1 = *(int *)(param_1 + 0x84);
    local_d8 = CONCAT44(iVar1,iVar4);
    *(undefined8 *)(param_1 + 0x80) = 0;
    local_a8[0] = 9;
    local_a4 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_e0 = puVar8;
    FUN_140c25b54(local_a8);
    local_70 = local_70 & 0xffffff00;
    uStack_6c = 0;
    uStack_64 = 0;
    puVar9 = (ulonglong *)((longlong)iVar4 * 0xc + (longlong)puVar8);
    do {
      local_e8 = (int)puVar8[1];
      uVar6 = *puVar8;
      local_f0 = uVar6;
      if (local_e8 != 0) {
        uVar5 = FUN_144a78877(uVar6 & 0xffffffff,local_e8);
        uVar6 = (ulonglong)uVar5;
      }
      iVar4 = FUN_140bc7976((longlong *)(param_1 + 0x10),uVar6,&local_f0);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        lVar7 = lVar2 + (longlong)iVar4 * 0x68;
        if (((lVar7 != 0) && (lVar2 + (longlong)iVar4 * 0x68 != -0x10)) &&
           (*(int *)(lVar7 + 0x50) != 0)) {
          FUN_1447a97f4(local_d0);
          FUN_148833a9a(local_a8,local_d0);
          FUN_145707eb8(&local_108,*(undefined1 *)(lVar7 + 0x38));
          local_70 = (uint)local_108;
          uStack_64 = uStack_100._4_4_;
          uStack_6c = CONCAT44((undefined4)uStack_100,local_108._4_4_);
          local_118 = (longlong)*(int *)(lVar7 + 0x50);
          if (local_118 != 0) {
            local_120 = *(longlong *)(lVar7 + 0x48);
            local_118 = local_118 << 4;
            local_128 = 0;
            do {
              if (*(longlong *)(lVar7 + 0x58) == 0) {
LAB_140291c62:
                local_108 = 0;
                uStack_100 = 0;
                if ((*(int *)(local_120 + 8 + local_128) != 0) &&
                   (plVar3 = *(longlong **)(local_120 + local_128), plVar3 != (longlong *)0x0)) {
                  (**(code **)(*plVar3 + 0x60))
                            (plVar3,local_a8,&local_108,*(undefined4 *)(lVar7 + 0x3c));
                }
              }
              else {
                if ((*(int *)(local_120 + 8 + local_128) == 0) ||
                   (plVar3 = *(longlong **)(local_120 + local_128), plVar3 == (longlong *)0x0)) {
                  local_108 = 0;
                }
                else {
                  (**(code **)(*plVar3 + 0x38))(plVar3,&local_108);
                }
                if (local_108 != *(longlong *)(lVar7 + 0x58)) goto LAB_140291c62;
              }
              local_128 = local_128 + 0x10;
            } while (local_118 != local_128);
          }
        }
      }
      puVar8 = (ulonglong *)((longlong)puVar8 + 0xc);
    } while (puVar8 != puVar9);
    local_d8 = local_d8 & 0xffffffff00000000;
    if (iVar1 != 0) {
      FUN_1446dda88(&local_e0,0);
    }
    if ((local_110 != &local_e0) && (*(int *)(param_1 + 0x80) == 0)) {
      if (*local_110 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      *(ulonglong **)(param_1 + 0x78) = local_e0;
      local_e0 = (ulonglong *)0x0;
      *(undefined4 *)(param_1 + 0x80) = (undefined4)local_d8;
      *(undefined4 *)(param_1 + 0x84) = local_d8._4_4_;
      local_d8 = 0;
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_e0 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140291cc8 FUN_140291cc8 body=209 status=ok
// SIG undefined FUN_140291cc8(void)

void FUN_140291cc8(undefined1 *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_6c;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 local_5c;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(short *)(param_2 + 10) == -1) {
    FUN_144928b90(&local_60,6);
    *param_1 = local_60;
    local_60 = 0;
    *(undefined8 *)(param_1 + 4) = local_5c;
    local_5c = 0;
    FUN_1404e49fa(param_1 + 0x10,local_50);
    param_1[1] = local_5f;
    local_5f = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    puVar1 = &local_6c;
  }
  else {
    FUN_140291cc8(param_1,(longlong)*(short *)(param_2 + 10) * 0x30 + *param_3);
    puVar1 = &local_78;
  }
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 0x1c);
  *puVar1 = *(undefined8 *)(param_2 + 0x14);
  FUN_1402939f8(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140291d9a FUN_140291d9a body=898 status=ok
// SIG undefined FUN_140291d9a(void)

void FUN_140291d9a(longlong param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  
  plVar6 = (longlong *)FUN_14039ffc6();
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  lVar7 = (**(code **)(*plVar6 + 0xb0))(plVar6);
  if (lVar7 == 0) {
    return;
  }
  if ((param_2 == '\0') && (*(int *)(lVar7 + 0x298) < 1)) {
    return;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1402920bb:
    bVar21 = false;
  }
  else {
    uVar19 = *(uint *)(param_1 + 0x50);
    bVar21 = false;
    if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
      if ((plVar6 != (longlong *)0x0) &&
         (((int)plVar6[2] == *(int *)(param_1 + 0x54) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)
          ))) {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar16 = *plVar6;
        }
        else {
          lVar16 = 0;
        }
        if ((*(longlong *)(lVar16 + 0x30) != 0) &&
           (*(longlong *)(*(longlong *)(lVar16 + 0x30) + 0x360) != 0)) {
          iVar3 = FUN_14490d72a();
          bVar21 = iVar3 != 3;
          goto LAB_140291e79;
        }
      }
      goto LAB_1402920bb;
    }
  }
LAB_140291e79:
  if (*(char *)(param_1 + 0x68) != '\0') goto LAB_140291ee4;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1402920cd:
    uVar11 = 0;
  }
  else {
    uVar19 = *(uint *)(param_1 + 0x50);
    uVar11 = 0;
    if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x54) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1402920cd;
      uVar11 = *puVar12;
    }
  }
  iVar4 = FUN_1409844f4(uVar11);
LAB_140291ee4:
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 == 0) {
    uVar18 = 1;
    uVar20 = 0;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x80);
    }
    uVar19 = *puVar8;
    if (uVar19 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar20 = 0;
      uVar18 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar18 = uVar20;
      }
      iVar15 = 0;
      do {
        if (uVar18 == uVar20) {
          return;
        }
        iVar15 = iVar15 + 0x20;
        uVar19 = puVar8[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar20 = 0;
      iVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != iVar3) {
    uVar19 = 0xffffffff;
    do {
      if ((((*(uint *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)iVar5 * 0x58) < 2) &&
           (piVar14 = (int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar5 * 0x58),
           !(bool)(bVar21 & *piVar14 == iVar4))) &&
          (plVar6 = *(longlong **)(piVar14 + 8), plVar6 != (longlong *)0x0)) &&
         ((lVar16 = *(longlong *)(piVar14 + 4), lVar16 != 0 &&
          (FUN_140295eec(plVar6,lVar7), param_2 != '\0')))) {
        (**(code **)(*plVar6 + 0xa8))(plVar6,lVar7,lVar16);
      }
      uVar19 = uVar19 & ~(uint)uVar18;
      puVar8 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x80);
      }
      iVar2 = *(int *)(param_1 + 0x98);
      iVar5 = (int)uVar20;
      lVar16 = (longlong)iVar5;
      uVar13 = puVar8[lVar16] & uVar19;
      if (uVar13 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar17 = 0;
          do {
            uVar13 = puVar8[lVar16 + lVar17 + 1];
            if (uVar13 != 0) {
              uVar20 = (ulonglong)(iVar5 + (int)lVar17 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140292024;
            }
            iVar15 = iVar15 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar10 - lVar16 != lVar17);
          uVar19 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar20 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_140292024:
        uVar18 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar18 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar3);
  }
  return;
}



// FUNCTION 140292120 FUN_140292120 body=1117 status=ok
// SIG undefined FUN_140292120(void)

void FUN_140292120(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int local_198;
  undefined4 local_194;
  longlong *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  uint local_178;
  int iStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [4];
  undefined8 local_164;
  undefined4 local_15c;
  longlong local_158;
  undefined1 *local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  longlong local_c0 [2];
  undefined1 local_b0 [24];
  int local_98;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_168[0] = 0;
  local_164 = 0;
  local_15c = 0;
  FUN_140292ed8(local_c0,param_1 + 0x60);
  local_158 = 0x100000000;
  local_148 = 0xffffffff;
  iStack_144 = 0;
  local_140 = 0;
  iVar9 = 0;
  local_150 = local_b0;
  if (local_98 != 0) {
    FUN_1449c0562(&local_158);
    iVar9 = local_98;
  }
  local_178 = local_148;
  iStack_174 = iStack_144;
  local_170 = local_140;
  local_16c = local_13c;
  local_188 = local_158;
  local_180 = local_150;
  local_190 = local_c0;
  if ((iStack_144 != iVar9) || (local_150 != local_b0)) {
    do {
      lVar7 = (longlong)iStack_174 * 0x40 + *local_190;
      local_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      uStack_cc = 0;
      uStack_c4 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = local_d0 & 0xffffff00;
      puVar4 = (undefined8 *)FUN_148841932(param_1,lVar7);
      if (puVar4 != (undefined8 *)0x0) {
        uStack_100 = *(undefined4 *)(puVar4 + 1);
        uVar3 = *puVar4;
        local_108 = (undefined2)uVar3;
        uStack_106 = (undefined2)((ulonglong)uVar3 >> 0x10);
        uStack_104 = (undefined4)((ulonglong)uVar3 >> 0x20);
        FUN_1447715ec(&local_f8,puVar4 + 2);
        local_d0 = *(uint *)(puVar4 + 7);
        uStack_cc = *(undefined8 *)((longlong)puVar4 + 0x3c);
        uStack_c4 = *(undefined4 *)((longlong)puVar4 + 0x44);
        lVar5 = FUN_1488419dc(param_1,lVar7);
        if (lVar5 != 0) {
          FUN_14884a0bc(lVar5 + 0xf0,&local_108,local_168);
        }
        lVar7 = FUN_148841932(param_1,lVar7);
        if (lVar7 != 0) {
          local_1a0 = (longlong *)0x0;
          iVar1 = *(int *)(lVar7 + 0x50);
          local_1b0 = *(undefined8 *)(lVar7 + 0x48);
          local_198 = iVar1;
          if (iVar1 == 0) {
            local_194 = 0;
          }
          else {
            FUN_14884a18a(&local_1a0,iVar1);
            FUN_14884a1e2(local_1a0,local_1b0,iVar1);
          }
          FUN_140295b12(&local_158,lVar7 + 0x58);
          if ((longlong)local_198 != 0) {
            plVar10 = local_1a0 + (longlong)local_198 * 2;
            plVar8 = local_1a0;
            do {
              if (((int)plVar8[1] == 0) || (plVar2 = (longlong *)*plVar8, plVar2 == (longlong *)0x0)
                 ) {
                local_1a8 = 0;
              }
              else {
                (**(code **)(*plVar2 + 0x38))(plVar2,&local_1a8);
              }
              if ((int)local_150 != local_124) {
                puVar6 = local_118;
                if (local_118 == (undefined1 *)0x0) {
                  puVar6 = local_120;
                }
                for (iVar1 = *(int *)(puVar6 + (ulonglong)
                                               (local_110 - 1U &
                                               (int)local_1a8 +
                                               (int)((ulonglong)local_1a8 >> 0x20) * 0x17) * 4);
                    iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_158 + 8)) {
                  if (*(longlong *)(local_158 + (longlong)iVar1 * 0x10) == local_1a8)
                  goto LAB_140292397;
                }
              }
              if (((int)plVar8[1] != 0) && (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)
                 ) {
                (**(code **)(*plVar2 + 0x60))(plVar2,&local_108,local_168,0xbf800000);
              }
LAB_140292397:
              plVar8 = plVar8 + 2;
            } while (plVar8 != plVar10);
          }
          local_110 = 0;
          if (local_118 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1414b5774(&local_158);
          FUN_145a1a852(local_1a0,local_198);
          if (local_1a0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      local_178 = local_178 & ~local_188._4_4_;
      FUN_1449c0562(&local_188);
    } while (((iStack_174 != iVar9) || (local_180 != local_b0)) || (local_190 != local_c0));
  }
  local_78 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(local_c0);
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029257e FUN_14029257e body=1156 status=ok
// SIG undefined FUN_14029257e(void)

void FUN_14029257e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int local_198;
  undefined4 local_194;
  longlong *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  uint local_178;
  int iStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [4];
  undefined8 local_164;
  undefined4 local_15c;
  longlong local_158;
  undefined1 *local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  longlong local_c0 [2];
  undefined1 local_b0 [24];
  int local_98;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_168[0] = 0;
  local_164 = 0;
  local_15c = 0;
  FUN_140292ed8(local_c0,param_1 + 0x60);
  local_158 = 0x100000000;
  local_148 = 0xffffffff;
  iStack_144 = 0;
  local_140 = 0;
  iVar9 = 0;
  local_150 = local_b0;
  if (local_98 != 0) {
    FUN_1449c0562(&local_158);
    iVar9 = local_98;
  }
  local_178 = local_148;
  iStack_174 = iStack_144;
  local_170 = local_140;
  local_16c = local_13c;
  local_188 = local_158;
  local_180 = local_150;
  local_190 = local_c0;
  if ((iStack_144 != iVar9) || (local_150 != local_b0)) {
    do {
      lVar7 = (longlong)iStack_174 * 0x40 + *local_190;
      local_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      uStack_cc = 0;
      uStack_c4 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = local_d0 & 0xffffff00;
      puVar4 = (undefined8 *)FUN_148845896(param_1,lVar7);
      if (puVar4 != (undefined8 *)0x0) {
        uStack_100 = *(undefined4 *)(puVar4 + 1);
        uVar3 = *puVar4;
        local_108 = (undefined2)uVar3;
        uStack_106 = (undefined2)((ulonglong)uVar3 >> 0x10);
        uStack_104 = (undefined4)((ulonglong)uVar3 >> 0x20);
        FUN_1447715ec(&local_f8,puVar4 + 2);
        local_d0 = *(uint *)(puVar4 + 7);
        uStack_cc = *(undefined8 *)((longlong)puVar4 + 0x3c);
        uStack_c4 = *(undefined4 *)((longlong)puVar4 + 0x44);
        lVar5 = FUN_14884593c(param_1,lVar7);
        if (lVar5 != 0) {
          FUN_14884a0bc(lVar5 + 0x50,&local_108,local_168);
        }
        lVar5 = FUN_1488459cc(param_1,lVar7);
        if (lVar5 != 0) {
          FUN_14884a0bc(lVar5 + 0x50,&local_108,local_168);
        }
        lVar7 = FUN_148845896(param_1,lVar7);
        if (lVar7 != 0) {
          local_1a0 = (longlong *)0x0;
          iVar1 = *(int *)(lVar7 + 0x50);
          local_1b0 = *(undefined8 *)(lVar7 + 0x48);
          local_198 = iVar1;
          if (iVar1 == 0) {
            local_194 = 0;
          }
          else {
            FUN_14884a18a(&local_1a0,iVar1);
            FUN_14884a1e2(local_1a0,local_1b0,iVar1);
          }
          FUN_140295b12(&local_158,lVar7 + 0x58);
          if ((longlong)local_198 != 0) {
            plVar10 = local_1a0 + (longlong)local_198 * 2;
            plVar8 = local_1a0;
            do {
              if (((int)plVar8[1] == 0) || (plVar2 = (longlong *)*plVar8, plVar2 == (longlong *)0x0)
                 ) {
                local_1a8 = 0;
              }
              else {
                (**(code **)(*plVar2 + 0x38))(plVar2,&local_1a8);
              }
              if ((int)local_150 != local_124) {
                puVar6 = local_118;
                if (local_118 == (undefined1 *)0x0) {
                  puVar6 = local_120;
                }
                for (iVar1 = *(int *)(puVar6 + (ulonglong)
                                               (local_110 - 1U &
                                               (int)local_1a8 +
                                               (int)((ulonglong)local_1a8 >> 0x20) * 0x17) * 4);
                    iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_158 + 8)) {
                  if (*(longlong *)(local_158 + (longlong)iVar1 * 0x10) == local_1a8)
                  goto LAB_1402927f5;
                }
              }
              if (((int)plVar8[1] != 0) && (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)
                 ) {
                (**(code **)(*plVar2 + 0x60))(plVar2,&local_108,local_168,0xbf800000);
              }
LAB_1402927f5:
              plVar8 = plVar8 + 2;
            } while (plVar8 != plVar10);
          }
          local_110 = 0;
          if (local_118 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1414b5774(&local_158);
          FUN_145a1a852(local_1a0,local_198);
          if (local_1a0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      local_178 = local_178 & ~local_188._4_4_;
      FUN_1449c0562(&local_188);
    } while (((iStack_174 != iVar9) || (local_180 != local_b0)) || (local_190 != local_c0));
  }
  local_78 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(local_c0);
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140292a04 FUN_140292a04 body=1178 status=ok
// SIG undefined FUN_140292a04(void)

void FUN_140292a04(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong *local_1a0;
  int local_198;
  undefined4 local_194;
  longlong *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  uint local_178;
  int iStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [4];
  undefined8 local_164;
  undefined4 local_15c;
  ulonglong local_158;
  undefined1 *local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  uint local_c4;
  longlong local_c0 [2];
  undefined1 local_b0 [24];
  int local_98;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_168[0] = 0;
  local_164 = 0;
  local_15c = 0;
  FUN_140292ed8(local_c0,param_1 + 0x58);
  local_158 = 0x100000000;
  local_148 = 0xffffffff;
  iStack_144 = 0;
  local_140 = 0;
  iVar6 = 0;
  local_150 = local_b0;
  if (local_98 != 0) {
    FUN_1449c0562(&local_158);
    iVar6 = local_98;
  }
  local_178 = local_148;
  iStack_174 = iStack_144;
  local_170 = local_140;
  local_16c = local_13c;
  local_188 = local_158;
  local_180 = local_150;
  local_190 = local_c0;
  if ((iStack_144 != iVar6) || (local_150 != local_b0)) {
    do {
      lVar1 = *local_190;
      lVar13 = (longlong)iStack_174;
      lVar9 = lVar13 * 0x40 + lVar1 + 0x10;
      FUN_144a659ac(lVar9,&local_158,1);
      if ((int)local_150 != 0) {
        FUN_144a78877(local_158 & 0xffffffff,(ulonglong)local_150 & 0xffffffff);
      }
      iVar5 = FUN_1411305fa((longlong *)(param_1 + 8));
      if (iVar5 != -1) {
        lVar2 = *(longlong *)(param_1 + 8);
        lVar11 = lVar2 + (longlong)iVar5 * 0x80;
        if ((lVar11 != 0) && ((longlong)iVar5 * 0x80 + lVar2 != -0x10)) {
          puVar7 = (undefined8 *)(lVar1 + lVar13 * 0x40);
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          local_cc = 0;
          local_c4 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_d0 = 0;
          uStack_100 = *(undefined4 *)(puVar7 + 1);
          uVar3 = *puVar7;
          local_108 = (undefined2)uVar3;
          uStack_106 = (undefined2)((ulonglong)uVar3 >> 0x10);
          uStack_104 = (undefined4)((ulonglong)uVar3 >> 0x20);
          FUN_1447715ec(&local_f8,lVar9);
          puVar7 = &DAT_14cb7c580;
          if (*(byte *)(lVar11 + 0x70) != 0) {
            puVar7 = &DAT_14cb7c588;
          }
          local_cc = *puVar7;
          local_d0 = 1;
          local_c4 = (uint)*(byte *)(lVar11 + 0x70);
          local_1a0 = (longlong *)0x0;
          iVar5 = *(int *)(lVar11 + 0x18);
          uVar3 = *(undefined8 *)(lVar11 + 0x10);
          local_198 = iVar5;
          if (iVar5 == 0) {
            local_194 = 0;
          }
          else {
            FUN_1456ecd12(&local_1a0,iVar5);
            FUN_1456eccd5(local_1a0,uVar3,iVar5);
          }
          FUN_140295b12(&local_158,lVar11 + 0x20);
          if ((longlong)local_198 != 0) {
            plVar10 = local_1a0 + (longlong)local_198 * 2;
            plVar12 = local_1a0;
            do {
              if ((((int)plVar12[1] != 0) &&
                  (plVar4 = (longlong *)*plVar12, plVar4 != (longlong *)0x0)) &&
                 ((**(code **)(*plVar4 + 0x38))(plVar4,&local_1a8), local_1a8 != 0)) {
                if ((int)local_150 != local_124) {
                  puVar8 = local_118;
                  if (local_118 == (undefined1 *)0x0) {
                    puVar8 = local_120;
                  }
                  for (iVar5 = *(int *)(puVar8 + (ulonglong)
                                                 (local_110 - 1U &
                                                 (int)local_1a8 +
                                                 (int)((ulonglong)local_1a8 >> 0x20) * 0x17) * 4);
                      iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_158 + 8)) {
                    if (*(longlong *)(local_158 + (longlong)iVar5 * 0x10) == local_1a8)
                    goto LAB_140292dd0;
                  }
                }
                if (((int)plVar12[1] != 0) &&
                   (plVar4 = (longlong *)*plVar12, plVar4 != (longlong *)0x0)) {
                  (**(code **)(*plVar4 + 0x60))(plVar4,&local_108,local_168,0xbf800000);
                }
              }
LAB_140292dd0:
              plVar12 = plVar12 + 2;
            } while (plVar12 != plVar10);
          }
          local_110 = 0;
          if (local_118 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1414b5774(&local_158);
          FUN_1414b574b(local_1a0,local_198);
          if (local_1a0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_e0 != 0) {
            FUN_1400020a8();
          }
        }
      }
      local_178 = local_178 & ~local_188._4_4_;
      FUN_1449c0562(&local_188);
    } while (((iStack_174 != iVar6) || (local_180 != local_b0)) || (local_190 != local_c0));
  }
  local_78 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(local_c0);
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140292ea0 FUN_140292ea0 body=55 status=ok
// SIG undefined FUN_140292ea0(void)

void FUN_140292ea0(longlong *param_1)

{
  FUN_14029310a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140292ed8 FUN_140292ed8 body=125 status=ok
// SIG undefined FUN_140292ed8(void)

undefined8 * FUN_140292ed8(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140292f56();
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



// FUNCTION 140292f56 FUN_140292f56 body=434 status=ok
// SIG undefined FUN_140292f56(void)

longlong * FUN_140292f56(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x28 + (longlong)iVar6 * 0x40) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
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
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14029310a FUN_14029310a body=507 status=ok
// SIG undefined FUN_14029310a(void)

void FUN_14029310a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar5 = (int)local_60[3];
  iVar7 = local_58._4_4_;
  iVar14 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar7 * 0x40) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_140293185;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_140293185:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar6 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140293306 FUN_140293306 body=1777 status=ok
// SIG undefined FUN_140293306(void)

void FUN_140293306(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_1a8 [40];
  uint local_180;
  int local_17c;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  ulonglong local_160;
  longlong local_158 [2];
  undefined1 local_148;
  undefined1 uStack_147;
  undefined2 uStack_146;
  undefined4 uStack_144;
  int iStack_140;
  longlong local_130;
  longlong local_120;
  undefined1 local_110;
  undefined1 local_10f;
  undefined8 local_10c;
  undefined1 local_100 [24];
  longlong local_e8;
  uint local_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint *local_a8;
  uint local_a0;
  undefined8 local_9c;
  int local_94;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar19 = *(int *)(param_1 + 0x278);
  if (0 < (longlong)iVar19) {
    lVar11 = *(longlong *)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    lVar20 = 0;
    do {
      lVar5 = FUN_140bc5192(param_1,lVar11 + lVar20);
      if (lVar5 != 0) {
        FUN_1447f69b6(lVar5 + 0x1b8);
      }
      lVar20 = lVar20 + 0xc;
    } while ((longlong)iVar19 * 0xc != lVar20);
    if (lVar11 != 0) {
      FUN_1400020a8(lVar11);
    }
  }
  if (*(int *)(param_1 + 0x254) < *(int *)(param_1 + 0x228)) {
    local_a8 = (uint *)0x0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    if (&local_c8 != (longlong *)(param_1 + 0x220)) {
      local_c8 = *(longlong *)(param_1 + 0x220);
      *(undefined8 *)(param_1 + 0x220) = 0;
      uStack_c0 = CONCAT44(*(undefined4 *)(param_1 + 0x22c),*(int *)(param_1 + 0x228));
      *(undefined8 *)(param_1 + 0x228) = 0;
      local_a8 = *(uint **)(param_1 + 0x240);
      if (local_a8 == (uint *)0x0) {
        local_b8 = *(uint *)(param_1 + 0x230);
        uStack_b4 = *(undefined4 *)(param_1 + 0x234);
        uStack_b0 = *(undefined4 *)(param_1 + 0x238);
        uStack_ac = *(undefined4 *)(param_1 + 0x23c);
      }
      *(undefined8 *)(param_1 + 0x240) = 0;
      local_a0 = *(uint *)(param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x248) = 0;
      local_9c = CONCAT44(*(undefined4 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 0x24c));
      *(undefined8 *)(param_1 + 0x250) = 0xffffffff;
      local_94 = *(int *)(param_1 + 0x254);
    }
    local_88 = *(longlong *)(param_1 + 0x260);
    if (local_88 == 0) {
      local_90 = *(undefined4 *)(param_1 + 600);
    }
    local_80 = *(undefined4 *)(param_1 + 0x268);
    uVar13 = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x268) = 0;
    FUN_144928b90(&local_110);
    local_d8 = local_d8 & 0xffffff00;
    uStack_d4 = 0;
    uStack_cc = 0;
    uVar15 = (ulonglong)local_a0;
    if (local_a0 == 0) {
      uVar14 = 1;
      iVar19 = 0;
      uVar4 = 0;
    }
    else {
      puVar6 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar6 = &local_b8;
      }
      uVar4 = *puVar6;
      if (uVar4 == 0) {
        iVar19 = local_a0 + 0x1e;
        if (-1 < (int)(local_a0 - 1)) {
          iVar19 = local_a0 - 1;
        }
        uVar13 = 0;
        uVar14 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar14 = uVar13;
        }
        iVar19 = 0;
        do {
          if (uVar14 == uVar13) goto LAB_14029356c;
          iVar19 = iVar19 + 0x20;
          uVar4 = puVar6[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar13 = 0;
        iVar19 = 0;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar4 = (iVar19 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)local_a0 <= (int)uVar4) {
        uVar4 = local_a0;
      }
    }
    if (uVar4 != local_a0) {
      local_168 = param_1 + 0x38;
      local_170 = param_1 + 0x50;
      uVar17 = 0xffffffff;
      local_178 = uVar15;
      do {
        lVar20 = local_c8;
        lVar11 = *(longlong *)(local_c8 + (longlong)(int)uVar4 * 0x18);
        iVar12 = *(int *)(lVar11 + 0x50);
        local_180 = uVar17;
        local_17c = iVar19;
        local_160 = uVar13;
        if (iVar12 < 1) {
          if ((longlong)*(int *)(param_1 + 0x40) != 0) {
            lVar5 = 0;
            do {
              if ((*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar5) != 0) &&
                 (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar5) != 0)) goto LAB_14029363b;
              lVar5 = lVar5 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x40) * 0x10 != lVar5);
            goto LAB_1402936b7;
          }
        }
        else {
LAB_14029363b:
          FUN_141883444(lVar11,&local_148);
          local_110 = local_148;
          local_148 = 0;
          local_10c = CONCAT44(iStack_140,uStack_144);
          uStack_144 = 0;
          iStack_140 = 0;
          FUN_1404e49fa(local_100);
          local_10f = uStack_147;
          uStack_147 = 0;
          if (local_120 != 0) {
            FUN_1400020a8();
          }
          local_d8 = *(uint *)(lVar11 + 0x38);
          uStack_d4 = *(undefined8 *)(lVar11 + 0x3c);
          uStack_cc = *(undefined4 *)(lVar11 + 0x44);
          iVar12 = *(int *)(lVar11 + 0x50);
LAB_1402936b7:
          if (0 < iVar12) {
            local_148 = 0;
            uStack_147 = 0;
            uStack_146 = 0;
            uStack_144 = 0;
            uVar2 = *(undefined8 *)(lVar11 + 0x48);
            iStack_140 = iVar12;
            FUN_14120fb36(&local_148,iVar12,0);
            FUN_14120faf4(CONCAT44(uStack_144,CONCAT22(uStack_146,CONCAT11(uStack_147,local_148))),
                          uVar2,iVar12);
            lVar5 = CONCAT44(uStack_144,CONCAT22(uStack_146,CONCAT11(uStack_147,local_148)));
            lVar16 = (longlong)iStack_140;
            if (lVar16 != 0) {
              lVar18 = 0;
              do {
                lVar7 = *(longlong *)(lVar11 + 0x58);
                if (lVar7 == 0) {
LAB_140293742:
                  local_158[0] = 0;
                  local_158[1] = 0;
                  if ((*(int *)(lVar5 + 8 + lVar18) != 0) &&
                     (plVar3 = *(longlong **)(lVar5 + lVar18), plVar3 != (longlong *)0x0)) {
                    (**(code **)(*plVar3 + 0x60))(plVar3,&local_110,local_158,0xbf800000);
                  }
                }
                else {
                  if ((*(int *)(lVar5 + 8 + lVar18) == 0) ||
                     (plVar3 = *(longlong **)(lVar5 + lVar18), plVar3 == (longlong *)0x0)) {
                    lVar10 = 0;
                  }
                  else {
                    (**(code **)(*plVar3 + 0x38))(plVar3,local_158);
                    lVar7 = *(longlong *)(lVar11 + 0x58);
                    lVar10 = local_158[0];
                  }
                  if (lVar10 != lVar7) goto LAB_140293742;
                }
                lVar18 = lVar18 + 0x10;
              } while (lVar16 * 0x10 != lVar18);
              lVar5 = CONCAT44(uStack_144,CONCAT22(uStack_146,CONCAT11(uStack_147,local_148)));
            }
            *(undefined8 *)(lVar11 + 0x58) = 0;
            FUN_140d59bf5(lVar5);
            uVar15 = local_178;
            if (CONCAT44(uStack_144,CONCAT22(uStack_146,CONCAT11(uStack_147,local_148))) != 0) {
              FUN_1400020a8();
            }
          }
          if ((longlong)*(int *)(param_1 + 0x40) != 0) {
            lVar11 = 0;
            do {
              if ((*(int *)(*(longlong *)(param_1 + 0x38) + 8 + lVar11) != 0) &&
                 (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar11) != 0)) {
                FUN_1403a0728(&local_d8,local_158);
                FUN_14014e996(&local_110,&local_148,1,0);
                FUN_14098d7b4(local_168,&local_148,local_158);
                if (local_130 != 0) {
                  FUN_1400020a8();
                }
                break;
              }
              lVar11 = lVar11 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x40) * 0x10 != lVar11);
          }
        }
        uVar13 = local_160;
        iVar19 = local_17c;
        if ((*(char *)(lVar20 + (longlong)(int)uVar4 * 0x18 + 8) == '\x01') &&
           ((longlong)*(int *)(param_1 + 0x58) != 0)) {
          lVar11 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0x50) + 8 + lVar11) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar11) != 0)) {
              FUN_1403a0728(&local_d8,local_158);
              FUN_14014e996(&local_110,&local_148,1,0);
              FUN_14098d7b4(local_170,&local_148,local_158);
              if (local_130 != 0) {
                FUN_1400020a8();
              }
              break;
            }
            lVar11 = lVar11 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x58) * 0x10 != lVar11);
        }
        uVar17 = local_180 & ~(uint)uVar14;
        puVar6 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar6 = &local_b8;
        }
        iVar12 = (int)uVar13;
        lVar11 = (longlong)iVar12;
        uVar4 = puVar6[lVar11] & uVar17;
        if (uVar4 == 0) {
          iVar8 = local_a0 + 0x1e;
          if (-1 < (int)(local_a0 - 1)) {
            iVar8 = local_a0 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar12) {
            iVar9 = iVar12;
          }
          if (iVar12 < iVar8) {
            lVar20 = 0;
            do {
              uVar4 = puVar6[lVar11 + lVar20 + 1];
              if (uVar4 != 0) {
                uVar13 = (ulonglong)(iVar12 + (int)lVar20 + 1);
                uVar17 = 0xffffffff;
                goto LAB_14029397e;
              }
              iVar19 = iVar19 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar9 - lVar11 != lVar20);
            uVar17 = 0xffffffff;
            iVar12 = iVar9;
          }
          uVar13 = (ulonglong)(iVar12 + 1);
          uVar15 = local_178;
          uVar4 = local_a0;
        }
        else {
LAB_14029397e:
          uVar14 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar14 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar4 = (iVar19 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if ((int)local_a0 <= (int)uVar4) {
            uVar4 = local_a0;
          }
        }
      } while (uVar4 != (uint)uVar15);
    }
LAB_14029356c:
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_140c1ca5e(&local_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402939f8 FUN_1402939f8 body=1029 status=ok
// SIG undefined FUN_1402939f8(void)

void FUN_1402939f8(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  longlong lVar8;
  int *piVar9;
  
  cVar2 = *param_1;
  if ((byte)(cVar2 - 1U) < 0xe) {
    pcVar1 = param_1 + 0x18;
    lVar5 = 1;
    lVar8 = 0xc;
    do {
      if (cVar2 != '\x01' || ((uint)lVar5 & 0x7ffffffe) != 2) {
        iVar3 = *(int *)(param_1 + 0x10);
        piVar6 = (int *)&DAT_14c948618;
        if (iVar3 != 0) {
          iVar4 = *(int *)(param_1 + 0x14);
          piVar6 = (int *)&DAT_14c948618;
          if (((longlong)iVar4 != 0) && (piVar6 = (int *)&DAT_14c948618, iVar3 != DAT_14c948000)) {
            if ((1 < iVar4) || (pcVar7 = pcVar1, 0 < *(int *)(param_1 + 0x34))) {
              pcVar7 = *(char **)(param_1 + 0x28);
            }
            piVar6 = (int *)&DAT_14c948618;
            if (lVar5 < iVar4) {
              piVar6 = (int *)(pcVar7 + lVar8);
            }
          }
        }
        if (*piVar6 == 0) goto LAB_140293cc9;
        if (cVar2 == '\x01') {
          if (iVar3 == 0) {
            piVar9 = (int *)&DAT_14c948618;
            piVar6 = &DAT_14c948620;
            if ((int)DAT_14c948618 == DAT_14cb7beb0) {
              piVar6 = &DAT_14c948620;
              piVar9 = (int *)&DAT_14c948618;
              if (DAT_14c948620 == DAT_14cb7beb8) goto LAB_140293cc9;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x14);
            piVar6 = &DAT_14c948620;
            piVar9 = (int *)&DAT_14c948618;
            if ((longlong)iVar4 != 0) {
              piVar6 = &DAT_14c948620;
              piVar9 = (int *)&DAT_14c948618;
              if (iVar3 != DAT_14c948000) {
                if ((1 < iVar4) || (pcVar7 = pcVar1, 0 < *(int *)(param_1 + 0x34))) {
                  pcVar7 = *(char **)(param_1 + 0x28);
                }
                piVar6 = &DAT_14c948620;
                piVar9 = (int *)&DAT_14c948618;
                if (lVar5 < iVar4) {
                  piVar6 = (int *)(pcVar7 + lVar8 + 8);
                  piVar9 = (int *)(pcVar7 + lVar8);
                }
              }
            }
            if ((*piVar9 == DAT_14cb7beb0) && (*piVar6 == DAT_14cb7beb8)) goto LAB_140293cc9;
            piVar9 = (int *)&DAT_14c948618;
            piVar6 = &DAT_14c948620;
            if (iVar3 != 0) {
              iVar4 = *(int *)(param_1 + 0x14);
              piVar9 = (int *)&DAT_14c948618;
              piVar6 = &DAT_14c948620;
              if ((longlong)iVar4 != 0) {
                piVar9 = (int *)&DAT_14c948618;
                piVar6 = &DAT_14c948620;
                if (iVar3 != DAT_14c948000) {
                  if ((1 < iVar4) || (pcVar7 = pcVar1, 0 < *(int *)(param_1 + 0x34))) {
                    pcVar7 = *(char **)(param_1 + 0x28);
                  }
                  piVar9 = (int *)&DAT_14c948618;
                  piVar6 = &DAT_14c948620;
                  if (lVar5 < iVar4) {
                    piVar9 = (int *)(pcVar7 + lVar8);
                    piVar6 = (int *)(pcVar7 + lVar8 + 8);
                  }
                }
              }
            }
          }
          if ((*piVar9 == DAT_14cb7bec8) && (*piVar6 == DAT_14cb7bed0)) {
LAB_140293cc9:
            FUN_144928d62(param_1 + 0x10,lVar5,param_2);
            return;
          }
          if (iVar3 == 0) {
            piVar9 = (int *)&DAT_14c948618;
            piVar6 = &DAT_14c948620;
            if ((int)DAT_14c948618 == DAT_14cb7bee0) {
              piVar6 = &DAT_14c948620;
              piVar9 = (int *)&DAT_14c948618;
              if (DAT_14c948620 == DAT_14cb7bee8) goto LAB_140293cc9;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x14);
            piVar6 = &DAT_14c948620;
            piVar9 = (int *)&DAT_14c948618;
            if ((longlong)iVar4 != 0) {
              piVar6 = &DAT_14c948620;
              piVar9 = (int *)&DAT_14c948618;
              if (iVar3 != DAT_14c948000) {
                if ((1 < iVar4) || (pcVar7 = pcVar1, 0 < *(int *)(param_1 + 0x34))) {
                  pcVar7 = *(char **)(param_1 + 0x28);
                }
                piVar6 = &DAT_14c948620;
                piVar9 = (int *)&DAT_14c948618;
                if (lVar5 < iVar4) {
                  piVar6 = (int *)(pcVar7 + lVar8 + 8);
                  piVar9 = (int *)(pcVar7 + lVar8);
                }
              }
            }
            if ((*piVar9 == DAT_14cb7bee0) && (*piVar6 == DAT_14cb7bee8)) goto LAB_140293cc9;
            piVar9 = (int *)&DAT_14c948618;
            piVar6 = &DAT_14c948620;
            if (iVar3 != 0) {
              iVar4 = *(int *)(param_1 + 0x14);
              piVar9 = (int *)&DAT_14c948618;
              piVar6 = &DAT_14c948620;
              if ((longlong)iVar4 != 0) {
                piVar9 = (int *)&DAT_14c948618;
                piVar6 = &DAT_14c948620;
                if (iVar3 != DAT_14c948000) {
                  if ((1 < iVar4) || (pcVar7 = pcVar1, 0 < *(int *)(param_1 + 0x34))) {
                    pcVar7 = *(char **)(param_1 + 0x28);
                  }
                  piVar9 = (int *)&DAT_14c948618;
                  piVar6 = &DAT_14c948620;
                  if (lVar5 < iVar4) {
                    piVar9 = (int *)(pcVar7 + lVar8);
                    piVar6 = (int *)(pcVar7 + lVar8 + 8);
                  }
                }
              }
            }
          }
          if ((*piVar9 == DAT_14cb7bef8) && (*piVar6 == DAT_14cb7bf00)) goto LAB_140293cc9;
          piVar9 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (iVar3 != 0) {
            iVar4 = *(int *)(param_1 + 0x14);
            piVar9 = &DAT_14c948620;
            piVar6 = (int *)&DAT_14c948618;
            if ((longlong)iVar4 != 0) {
              piVar9 = &DAT_14c948620;
              piVar6 = (int *)&DAT_14c948618;
              if (iVar3 != DAT_14c948000) {
                if ((1 < iVar4) || (pcVar7 = pcVar1, 0 < *(int *)(param_1 + 0x34))) {
                  pcVar7 = *(char **)(param_1 + 0x28);
                }
                piVar9 = &DAT_14c948620;
                piVar6 = (int *)&DAT_14c948618;
                if (lVar5 < iVar4) {
                  piVar9 = (int *)(pcVar7 + lVar8 + 8);
                  piVar6 = (int *)(pcVar7 + lVar8);
                }
              }
            }
          }
          if ((*piVar6 == DAT_14cb7bf10) && (*piVar9 == DAT_14cb7bf18)) goto LAB_140293cc9;
        }
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + 0xc;
    } while (*(longlong *)(&DAT_14b3fc2c8 + (ulonglong)(byte)(cVar2 - 1U) * 8) != lVar5);
  }
  return;
}



// FUNCTION 140293dfe FUN_140293dfe body=5739 status=ok
// SIG undefined FUN_140293dfe(void)

void FUN_140293dfe(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  DWORD DVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  uint uVar12;
  LPVOID lpTlsValue;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  void *_Src;
  undefined8 *puVar22;
  ulonglong *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_248 [40];
  ulonglong *local_220;
  longlong local_218;
  longlong *local_210;
  longlong *local_208;
  undefined8 *local_200;
  longlong *local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  ulonglong local_1b0;
  undefined4 local_1a8;
  ulonglong local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  ulonglong local_180;
  undefined4 local_178;
  ulonglong local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  ulonglong local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  uint local_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  int local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  ulonglong local_d0;
  int local_c8;
  longlong local_c0 [3];
  longlong local_a8;
  uint local_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0x188)) {
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar11 = 0xffffffff;
      LOCK();
      bVar29 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = dwTlsIndex;
      if (bVar29) {
        DVar11 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar29) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar11;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_d0);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    local_88 = (undefined8 *)((longlong)lpTlsValue + 0x10);
    local_80 = (uint)*(undefined8 *)((longlong)lpTlsValue + 0x10);
    uStack_7c = (undefined4)((ulonglong)*(undefined8 *)((longlong)lpTlsValue + 0x10) >> 0x20);
    local_78 = *(undefined8 **)((longlong)lpTlsValue + 0x20);
    local_70 = local_70 & 0xffffff00;
    local_68 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
    *(undefined8 **)((longlong)lpTlsValue + 0x28) = &local_88;
    *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    iVar6 = *(int *)(param_1 + 0x188);
    if (0 < iVar6) {
      puVar19 = (ulonglong *)(param_1 + 0x50);
      lVar17 = 0;
      local_220 = puVar19;
      do {
        uVar7 = uStack_e0;
        uVar12 = *(uint *)(*(longlong *)(param_1 + 0x180) + lVar17 * 4);
        if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(param_1 + 0x68))) {
          puVar23 = *(ulonglong **)(param_1 + 0x60);
          if (*(ulonglong **)(param_1 + 0x60) == (ulonglong *)0x0) {
            puVar23 = puVar19;
          }
          if ((*(uint *)((longlong)puVar23 + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1)
              != 0) {
            puVar25 = (undefined8 *)((ulonglong)uVar12 * 0x68 + *(longlong *)(param_1 + 0x40));
            lVar14 = (longlong)(int)uStack_e0;
            uStack_e0 = uStack_e0 + 1;
            if (uStack_dc < uStack_e0) {
              FUN_140295618(&local_e8,uVar7);
            }
            lVar28 = CONCAT44(uStack_e4,local_e8);
            lVar14 = lVar14 * 0x68;
            puVar1 = (undefined8 *)(lVar28 + lVar14);
            puVar20 = puVar25;
            puVar22 = puVar1;
            for (lVar26 = 9; lVar26 != 0; lVar26 = lVar26 + -1) {
              *puVar22 = *puVar20;
              puVar20 = puVar20 + 1;
              puVar22 = puVar22 + 1;
            }
            *(undefined4 *)(lVar28 + 0x48 + lVar14) = *(undefined4 *)(puVar25 + 9);
            *(undefined8 *)(lVar28 + 0x50 + lVar14) = 0;
            iVar6 = *(int *)(puVar25 + 0xb);
            uVar13 = puVar25[10];
            *(int *)(lVar28 + 0x58 + lVar14) = iVar6;
            if (iVar6 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
            }
            else {
              puVar20 = (undefined8 *)(lVar28 + lVar14 + 0x50);
              FUN_140295542(puVar20,iVar6);
              puVar19 = local_220;
              FUN_14029546a(*puVar20,uVar13,iVar6);
            }
            puVar1[0xc] = puVar25[0xc];
            puVar25[0xc] = 0;
            *(undefined1 *)(puVar25 + 9) = 0;
            iVar6 = *(int *)(param_1 + 0x188);
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar6);
    }
    *(undefined4 *)(param_1 + 0x188) = 0;
    if (*(int *)(param_1 + 0x18c) < 0) {
      FUN_14480809c((longlong *)(param_1 + 0x180),0);
    }
    FUN_144928b90(&local_d0,1);
    local_98 = local_98 & 0xffffff00;
    uStack_94 = 0;
    uStack_8c = 0;
    local_138 = *(uint *)(param_1 + 0x2c);
    if (local_138 == 0) {
      uStack_130 = DAT_14cb7bba0;
      local_138 = (uint)DAT_14cb7bb98;
      uStack_134 = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
    }
    else {
      uStack_134 = (undefined4)*(undefined8 *)(param_1 + 0x30);
      uStack_130 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    }
    local_218 = param_1;
    FUN_144928d62(local_c0,1,&local_138);
    if ((longlong)(int)uStack_e0 != 0) {
      plVar27 = (longlong *)CONCAT44(uStack_e4,local_e8);
      plVar21 = plVar27 + (longlong)(int)uStack_e0 * 0xd;
      local_210 = plVar21;
      do {
        lVar17 = plVar27[0xb];
        if ((longlong)(int)lVar17 != 0) {
          local_220 = (ulonglong *)plVar27[10];
          local_208 = plVar27 + 1;
          lVar14 = 0;
          do {
            lVar28 = plVar27[0xc];
            if (lVar28 == 0) {
LAB_14029415b:
              local_f0 = (undefined4)local_208[1];
              local_f8 = *local_208;
              FUN_14013eb2c(&local_d0,&local_f8);
              local_100 = *(undefined4 *)((longlong)plVar27 + 0x1c);
              local_108 = *(undefined8 *)((longlong)plVar27 + 0x14);
              FUN_14013eb54(&local_d0,&local_108);
              local_110 = (undefined4)plVar27[5];
              local_118 = plVar27[4];
              FUN_144928d62(local_c0,4,&local_118);
              local_120 = *(undefined4 *)((longlong)plVar27 + 0x34);
              local_128 = *(undefined8 *)((longlong)plVar27 + 0x2c);
              FUN_144928d62(local_c0,5,&local_128);
              local_138 = local_138 & 0xffffff00;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12c = 0;
              FUN_144976b9c(&local_138,plVar27[7]);
              local_98 = local_138;
              uStack_94 = CONCAT44(uStack_130,uStack_134);
              uStack_8c = uStack_12c;
              if ((char)plVar27[9] == '\x01') {
                lVar28 = plVar27[8];
              }
              else {
                lVar28 = 0;
              }
              lVar26 = *plVar27;
              local_138 = local_138 & 0xffffff00;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12c = 0;
              FUN_144976b9c(&local_138,lVar28);
              if ((*(int *)((longlong)local_220 + lVar14 + 8) != 0) &&
                 (plVar21 = *(longlong **)((longlong)local_220 + lVar14), plVar21 != (longlong *)0x0
                 )) {
                (**(code **)(*plVar21 + 0x60))(plVar21,&local_d0,&local_138,(int)lVar26);
              }
            }
            else {
              if ((*(int *)((longlong)local_220 + lVar14 + 8) == 0) ||
                 (plVar21 = *(longlong **)((longlong)local_220 + lVar14), plVar21 == (longlong *)0x0
                 )) {
                lVar26 = 0;
              }
              else {
                (**(code **)(*plVar21 + 0x38))(plVar21,&local_138);
                lVar26 = CONCAT44(uStack_134,local_138);
                lVar28 = plVar27[0xc];
              }
              if (lVar26 != lVar28) goto LAB_14029415b;
            }
            lVar14 = lVar14 + 0x10;
            plVar21 = local_210;
          } while ((longlong)(int)lVar17 * 0x10 != lVar14);
        }
        plVar27 = plVar27 + 0xd;
      } while (plVar27 != plVar21);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1402954a7(CONCAT44(uStack_e4,local_e8),uStack_e0);
    param_1 = local_218;
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      FUN_1400020a8();
    }
    if ((char)local_70 == '\0') {
      local_70 = CONCAT31(local_70._1_3_,1);
      *(int *)(local_88 + 4) = *(int *)(local_88 + 4) + -1;
      if (local_78 != (undefined8 *)local_88[2]) {
        FUN_14004673c();
      }
      *local_88 = CONCAT44(uStack_7c,local_80);
      local_88[3] = local_68;
    }
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    FUN_144928b90(&local_d0,1);
    local_98 = local_98 & 0xffffff00;
    uStack_94 = 0;
    uStack_8c = 0;
    local_88._0_4_ = *(int *)(param_1 + 0x2c);
    if ((int)local_88 == 0) {
      local_80 = DAT_14cb7bba0;
      local_88._0_4_ = (int)DAT_14cb7bb98;
      local_88._4_4_ = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
    }
    else {
      local_88._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x30);
      local_80 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    }
    FUN_144928d62(local_c0,1,&local_88);
    local_144 = 0;
    local_13c = 0;
    FUN_144928d62(local_c0,5);
    puVar19 = *(ulonglong **)(param_1 + 400);
    iVar6 = *(int *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    local_218 = param_1;
    if ((longlong)iVar6 != 0) {
      local_220 = (ulonglong *)((longlong)puVar19 + (longlong)iVar6 * 0x24);
      puVar23 = puVar19;
      do {
        local_80 = (uint)puVar23[1];
        uVar15 = *puVar23;
        local_88._0_4_ = (int)uVar15;
        local_88._4_4_ = (undefined4)(uVar15 >> 0x20);
        if (local_80 != 0) {
          FUN_144a78877(uVar15 & 0xffffffff,local_80);
        }
        iVar6 = FUN_140502a60((longlong *)(param_1 + 0x78));
        if (iVar6 != -1) {
          lVar17 = *(longlong *)(param_1 + 0x78);
          if ((lVar17 + (longlong)iVar6 * 0x70 != 0) &&
             (plVar27 = (longlong *)(lVar17 + (longlong)iVar6 * 0x70 + 0x10),
             plVar27 != (longlong *)0x0)) {
            local_80 = *(uint *)((longlong)puVar23 + 0x14);
            uVar15 = *(ulonglong *)((longlong)puVar23 + 0xc);
            local_88._0_4_ = (int)uVar15;
            local_88._4_4_ = (undefined4)(uVar15 >> 0x20);
            if (local_80 != 0) {
              uVar12 = FUN_144a78877(uVar15 & 0xffffffff,local_80);
              uVar15 = (ulonglong)uVar12;
            }
            iVar6 = FUN_144a24328(plVar27,uVar15,&local_88);
            if (iVar6 != -1) {
              if ((*plVar27 + (longlong)iVar6 * 0x68 != 0) &&
                 (plVar27 = (longlong *)(*plVar27 + (longlong)iVar6 * 0x68 + 0x10),
                 plVar27 != (longlong *)0x0)) {
                local_148 = (undefined4)puVar23[1];
                local_150 = *puVar23;
                FUN_14013eb2c(&local_d0,&local_150);
                local_158 = *(undefined4 *)((longlong)puVar23 + 0x14);
                local_160 = *(undefined8 *)((longlong)puVar23 + 0xc);
                FUN_14013eb54(&local_d0,&local_160);
                local_168 = (undefined4)puVar23[4];
                local_170 = puVar23[3];
                FUN_144928d62(local_c0,4,&local_170);
                local_80 = (uint)puVar23[4];
                uVar15 = puVar23[3];
                local_88._0_4_ = (int)uVar15;
                local_88._4_4_ = (undefined4)(uVar15 >> 0x20);
                if (local_80 != 0) {
                  uVar12 = local_80 >> 0xd ^ (int)local_88 - local_80;
                  uVar7 = uVar12 << 8 ^ (-0x61c88647 - local_80) - uVar12;
                  uVar18 = uVar7 >> 0xd ^ (local_80 - uVar12) - uVar7;
                  uVar12 = uVar18 >> 0xc ^ (uVar12 - uVar7) - uVar18;
                  uVar7 = uVar12 << 0x10 ^ (uVar7 - uVar18) - uVar12;
                  uVar24 = uVar7 >> 5 ^ (uVar18 - uVar12) - uVar7;
                  uVar18 = uVar24 >> 3 ^ (uVar12 - uVar7) - uVar24;
                  uVar12 = uVar18 << 10 ^ (uVar7 - uVar24) - uVar18;
                  uVar15 = (ulonglong)(uVar12 >> 0xf ^ uVar24 - (uVar18 + uVar12));
                }
                iVar6 = FUN_140727b76(plVar27,uVar15,&local_88);
                if (iVar6 != -1) {
                  lVar17 = *plVar27 + (longlong)iVar6 * 0xa8;
                  if (((lVar17 != 0) && ((longlong)iVar6 * 0xa8 + *plVar27 != -0x10)) &&
                     (uVar12 = *(uint *)(lVar17 + 0x68), 0 < (int)uVar12)) {
                    local_88._0_4_ = 0;
                    local_88._4_4_ = 0;
                    uVar13 = *(undefined8 *)(lVar17 + 0x60);
                    local_80 = uVar12;
                    FUN_140295a4e(&local_88,uVar12);
                    FUN_140295a10(CONCAT44(local_88._4_4_,(int)local_88),uVar13,uVar12);
                    local_e8 = 0;
                    uStack_e4 = 0;
                    uVar12 = *(uint *)(lVar17 + 0x98);
                    uVar13 = *(undefined8 *)(lVar17 + 0x90);
                    uStack_e0 = uVar12;
                    if (uVar12 == 0) {
                      uStack_dc = 0;
                    }
                    else {
                      FUN_1410b5974(&local_e8,uVar12,0);
                      FUN_1410b5937(CONCAT44(uStack_e4,local_e8),uVar13,uVar12);
                    }
                    lVar17 = (longlong)(int)local_80;
                    if (lVar17 != 0) {
                      lVar14 = CONCAT44(local_88._4_4_,(int)local_88);
                      lVar28 = 0;
                      do {
                        if ((*(int *)(lVar14 + 8 + lVar28) != 0) &&
                           (plVar27 = *(longlong **)(lVar14 + lVar28), plVar27 != (longlong *)0x0))
                        {
                          (**(code **)(*plVar27 + 0x60))(plVar27,&local_d0,&local_e8);
                        }
                        lVar28 = lVar28 + 0x10;
                      } while (lVar17 * 0x10 != lVar28);
                    }
                    FUN_1409839df(CONCAT44(uStack_e4,local_e8),uStack_e0);
                    if (CONCAT44(uStack_e4,local_e8) != 0) {
                      FUN_1400020a8();
                    }
                    FUN_14099023d(CONCAT44(local_88._4_4_,(int)local_88),local_80);
                    if (CONCAT44(local_88._4_4_,(int)local_88) != 0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
            }
          }
        }
        puVar23 = (ulonglong *)((longlong)puVar23 + 0x24);
      } while (puVar23 != local_220);
    }
    if (puVar19 != (ulonglong *)0x0) {
      FUN_1400020a8(puVar19);
    }
    param_1 = local_218;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if (0 < *(int *)(param_1 + 0x1a8)) {
    FUN_144928b90(&local_d0,1);
    local_98 = local_98 & 0xffffff00;
    uStack_94 = 0;
    uStack_8c = 0;
    local_88._0_4_ = *(int *)(param_1 + 0x2c);
    if ((int)local_88 == 0) {
      local_80 = DAT_14cb7bba0;
      local_88._0_4_ = (int)DAT_14cb7bb98;
      local_88._4_4_ = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
    }
    else {
      local_88._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x30);
      local_80 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    }
    FUN_144928d62(local_c0,1,&local_88);
    puVar19 = *(ulonglong **)(param_1 + 0x1a0);
    iVar6 = *(int *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    if ((longlong)iVar6 != 0) {
      local_220 = (ulonglong *)((longlong)puVar19 + (longlong)iVar6 * 0x24);
      plVar27 = (longlong *)(param_1 + 0x78);
      puVar23 = puVar19;
      local_218 = param_1;
      do {
        local_80 = (uint)puVar23[1];
        uVar15 = *puVar23;
        local_88._0_4_ = (int)uVar15;
        local_88._4_4_ = (undefined4)(uVar15 >> 0x20);
        if (local_80 != 0) {
          FUN_144a78877(uVar15 & 0xffffffff,local_80);
        }
        iVar6 = FUN_140502a60(plVar27);
        if (iVar6 != -1) {
          lVar17 = *plVar27;
          if ((lVar17 + (longlong)iVar6 * 0x70 != 0) &&
             (plVar21 = (longlong *)(lVar17 + (longlong)iVar6 * 0x70 + 0x10),
             plVar21 != (longlong *)0x0)) {
            local_80 = *(uint *)((longlong)puVar23 + 0x14);
            uVar15 = *(ulonglong *)((longlong)puVar23 + 0xc);
            local_88._0_4_ = (int)uVar15;
            local_88._4_4_ = (undefined4)(uVar15 >> 0x20);
            if (local_80 != 0) {
              uVar12 = FUN_144a78877(uVar15 & 0xffffffff,local_80);
              uVar15 = (ulonglong)uVar12;
            }
            iVar6 = FUN_144a24328(plVar21,uVar15,&local_88);
            if (iVar6 != -1) {
              if ((*plVar21 + (longlong)iVar6 * 0x68 != 0) &&
                 (plVar21 = (longlong *)(*plVar21 + (longlong)iVar6 * 0x68 + 0x10),
                 plVar21 != (longlong *)0x0)) {
                local_178 = (undefined4)puVar23[1];
                local_180 = *puVar23;
                FUN_14013eb2c(&local_d0,&local_180);
                local_188 = *(undefined4 *)((longlong)puVar23 + 0x14);
                local_190 = *(undefined8 *)((longlong)puVar23 + 0xc);
                FUN_14013eb54(&local_d0,&local_190);
                local_198 = (undefined4)puVar23[4];
                local_1a0 = puVar23[3];
                FUN_144928d62(local_c0,4,&local_1a0);
                local_80 = (uint)puVar23[4];
                uVar15 = puVar23[3];
                local_88._0_4_ = (int)uVar15;
                local_88._4_4_ = (undefined4)(uVar15 >> 0x20);
                if (local_80 != 0) {
                  uVar12 = local_80 >> 0xd ^ (int)local_88 - local_80;
                  uVar7 = uVar12 << 8 ^ (-0x61c88647 - local_80) - uVar12;
                  uVar18 = uVar7 >> 0xd ^ (local_80 - uVar12) - uVar7;
                  uVar12 = uVar18 >> 0xc ^ (uVar12 - uVar7) - uVar18;
                  uVar7 = uVar12 << 0x10 ^ (uVar7 - uVar18) - uVar12;
                  uVar24 = uVar7 >> 5 ^ (uVar18 - uVar12) - uVar7;
                  uVar18 = uVar24 >> 3 ^ (uVar12 - uVar7) - uVar24;
                  uVar12 = uVar18 << 10 ^ (uVar7 - uVar24) - uVar18;
                  uVar15 = (ulonglong)(uVar12 >> 0xf ^ uVar24 - (uVar18 + uVar12));
                }
                iVar6 = FUN_140727b76(plVar21,uVar15,&local_88);
                if (iVar6 != -1) {
                  lVar17 = *plVar21 + (longlong)iVar6 * 0xa8;
                  if (((lVar17 != 0) && ((longlong)iVar6 * 0xa8 + *plVar21 != -0x10)) &&
                     (uVar12 = *(uint *)(lVar17 + 0x78), 0 < (int)uVar12)) {
                    local_138 = 0;
                    uStack_134 = 0;
                    uVar13 = *(undefined8 *)(lVar17 + 0x70);
                    uStack_130 = uVar12;
                    FUN_1402958c8(&local_138,uVar12);
                    FUN_14029578a(CONCAT44(uStack_134,local_138),uVar13,uVar12);
                    local_78 = (undefined8 *)0x0;
                    local_70 = *(uint *)(lVar17 + 0x38);
                    lVar14 = (longlong)(int)local_70;
                    if (lVar14 == 0) {
                      local_6c = 2;
                    }
                    else {
                      _Src = (void *)(lVar17 + 0x20);
                      if (*(void **)(lVar17 + 0x30) != (void *)0x0) {
                        _Src = *(void **)(lVar17 + 0x30);
                      }
                      FUN_14029586a(&local_88,local_70);
                      puVar25 = local_78;
                      if (local_78 == (undefined8 *)0x0) {
                        puVar25 = &local_88;
                      }
                      memcpy(puVar25,_Src,lVar14 << 3);
                    }
                    lVar17 = (longlong)(int)uStack_130;
                    if (lVar17 != 0) {
                      lVar14 = CONCAT44(uStack_134,local_138);
                      lVar28 = 0;
                      do {
                        puVar25 = local_78;
                        if (local_78 == (undefined8 *)0x0) {
                          puVar25 = &local_88;
                        }
                        if ((*(int *)(lVar14 + 8 + lVar28) != 0) &&
                           (plVar21 = *(longlong **)(lVar14 + lVar28), plVar21 != (longlong *)0x0))
                        {
                          local_e8 = (int)puVar25;
                          uStack_e4 = (undefined4)((ulonglong)puVar25 >> 0x20);
                          uStack_e0 = local_70;
                          (**(code **)(*plVar21 + 0x60))(plVar21,&local_d0,&local_e8);
                        }
                        lVar28 = lVar28 + 0x10;
                      } while (lVar17 * 0x10 != lVar28);
                    }
                    if (local_78 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                    FUN_1409901dd(CONCAT44(uStack_134,local_138),uStack_130);
                    if (CONCAT44(uStack_134,local_138) != 0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
            }
          }
        }
        puVar23 = (ulonglong *)((longlong)puVar23 + 0x24);
        param_1 = local_218;
      } while (puVar23 != local_220);
    }
    if (puVar19 != (ulonglong *)0x0) {
      FUN_1400020a8(puVar19);
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  iVar6 = *(int *)(param_1 + 0x1b8);
  if (0 < (longlong)iVar6) {
    puVar25 = *(undefined8 **)(param_1 + 0x1b0);
    local_1f0 = puVar25 + (longlong)iVar6 * 4;
    local_208 = (longlong *)(param_1 + 200);
    local_1f8 = (longlong *)(param_1 + 0x78);
    local_210 = (longlong *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    local_218 = param_1;
    local_200 = puVar25;
    do {
      uVar13 = *puVar25;
      uVar2 = puVar25[1];
      uVar12 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar24 = (uint)uVar2 & 0xffff;
      uVar7 = (uint)((ulonglong)uVar13 >> 0x10);
      uVar18 = (uint)uVar13 & 0xffff;
      uVar7 = ((uint)uVar13 << 0x10 | uVar18) + (int)((ulonglong)uVar13 >> 0x20) +
              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4);
      uVar8 = FUN_144a78877(0,(uVar7 >> 2) +
                              ((uint)uVar2 << 0x10 | uVar24) + (int)((ulonglong)uVar2 >> 0x20) +
                              (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar24 >> 4) + uVar7 * 0x40 +
                              0x9e3779b9 ^ uVar7);
      iVar10 = *(int *)(puVar25 + 3);
      puVar16 = &DAT_149dfb77a;
      if (iVar10 != 0) {
        puVar16 = (undefined2 *)puVar25[2];
      }
      iVar3 = iVar10 + -1;
      if (iVar10 == 0) {
        iVar3 = 0;
      }
      uVar9 = FUN_144a49b4a(iVar3,puVar16);
      uVar8 = FUN_144a78877(uVar8,uVar9);
      iVar10 = FUN_140295e10(local_208,uVar8,puVar25);
      puVar1 = local_88;
      if (iVar10 != -1) {
        lVar17 = *local_208 + (longlong)iVar10 * 0x50;
        if (lVar17 != 0) {
          lVar14 = (longlong)iVar10 * 0x50 + *local_208;
          local_220 = (ulonglong *)(lVar14 + 0x20);
          if (local_220 != (ulonglong *)0x0) {
            local_c8 = *(int *)(lVar14 + 0x28);
            local_d0 = *local_220;
            if (local_c8 == 0) {
              uVar15 = local_d0 & 0xffffffff;
            }
            else {
              uVar12 = FUN_144a78877(local_d0 & 0xffffffff,local_c8);
              uVar15 = (ulonglong)uVar12;
            }
            plVar27 = local_1f8;
            iVar10 = FUN_140502a60(local_1f8,uVar15,&local_d0);
            puVar1 = local_88;
            if (iVar10 != -1) {
              if ((*plVar27 + (longlong)iVar10 * 0x70 != 0) &&
                 (plVar27 = (longlong *)(*plVar27 + (longlong)iVar10 * 0x70 + 0x10),
                 plVar27 != (longlong *)0x0)) {
                local_c8 = *(int *)(lVar17 + 0x34);
                uVar15 = *(ulonglong *)(lVar17 + 0x2c);
                local_d0 = uVar15;
                if (local_c8 != 0) {
                  uVar12 = FUN_144a78877(uVar15 & 0xffffffff,local_c8);
                  uVar15 = (ulonglong)uVar12;
                }
                iVar10 = FUN_144a24328(plVar27,uVar15,&local_d0);
                puVar1 = local_88;
                if (iVar10 != -1) {
                  if ((*plVar27 + (longlong)iVar10 * 0x68 != 0) &&
                     (plVar27 = (longlong *)(*plVar27 + (longlong)iVar10 * 0x68 + 0x10),
                     plVar27 != (longlong *)0x0)) {
                    local_c8 = *(int *)(lVar17 + 0x40);
                    uVar15 = *(ulonglong *)(lVar17 + 0x38);
                    local_d0 = uVar15;
                    if (local_c8 != 0) {
                      uVar12 = FUN_144a78877(uVar15 & 0xffffffff,local_c8);
                      uVar15 = (ulonglong)uVar12;
                    }
                    iVar10 = FUN_140727b76(plVar27,uVar15,&local_d0);
                    puVar1 = local_88;
                    if (iVar10 != -1) {
                      lVar14 = *plVar27 + (longlong)iVar10 * 0xa8;
                      if ((lVar14 != 0) && (*plVar27 + (longlong)iVar10 * 0xa8 != -0x10)) {
                        lVar28 = lVar14 + 0x20;
                        if (*(longlong *)(lVar14 + 0x30) != 0) {
                          lVar28 = *(longlong *)(lVar14 + 0x30);
                        }
                        if ((longlong)*(int *)(lVar14 + 0x38) != 0) {
                          local_1e0 = (undefined8 *)(lVar17 + 0x2c);
                          local_1d8 = (undefined8 *)(lVar17 + 0x38);
                          lVar17 = (longlong)*(int *)(lVar14 + 0x38) << 3;
                          do {
                            lVar14 = FUN_14479d2ce(lVar28);
                            if (lVar14 != 0) {
                              FUN_1400bbfc4(&local_d0,lVar14);
                              cVar5 = FUN_144a7afa6(puVar25,&local_d0);
                              if (local_c0[0] != 0) {
                                FUN_1400020a8();
                              }
                              if (cVar5 != '\0') {
                                uVar13 = *puVar25;
                                uVar2 = puVar25[1];
                                uVar12 = (uint)((ulonglong)uVar2 >> 0x10);
                                uVar24 = (uint)uVar2 & 0xffff;
                                uVar7 = (uint)((ulonglong)uVar13 >> 0x10);
                                uVar18 = (uint)uVar13 & 0xffff;
                                uVar7 = ((uint)uVar13 << 0x10 | uVar18) +
                                        (int)((ulonglong)uVar13 >> 0x20) +
                                        (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4);
                                local_1e8 = lVar14;
                                uVar8 = FUN_144a78877(0,(uVar7 >> 2) +
                                                        ((uint)uVar2 << 0x10 | uVar24) +
                                                        (int)((ulonglong)uVar2 >> 0x20) +
                                                        (uVar12 << 0x13 | uVar12 & 0xffff) +
                                                        (uVar24 >> 4) + uVar7 * 0x40 + 0x9e3779b9 ^
                                                        uVar7);
                                iVar10 = *(int *)(puVar25 + 3);
                                puVar16 = &DAT_149dfb77a;
                                if (iVar10 != 0) {
                                  puVar16 = (undefined2 *)puVar25[2];
                                }
                                iVar3 = iVar10 + -1;
                                if (iVar10 == 0) {
                                  iVar3 = 0;
                                }
                                uVar9 = FUN_144a49b4a(iVar3,puVar16);
                                uVar8 = FUN_144a78877(uVar8,uVar9);
                                iVar10 = FUN_140295d2c(local_210,uVar8,puVar25);
                                puVar1 = local_88;
                                if (iVar10 != -1) {
                                  lVar17 = *local_210 + (longlong)iVar10 * 0x38;
                                  if ((lVar17 != 0) &&
                                     ((longlong)iVar10 * 0x38 + *local_210 != -0x20)) {
                                    local_88._0_4_ = 0;
                                    local_88._4_4_ = 0;
                                    uVar12 = *(uint *)(lVar17 + 0x28);
                                    uVar13 = *(undefined8 *)(lVar17 + 0x20);
                                    local_80 = uVar12;
                                    if (uVar12 == 0) {
                                      uStack_7c = 0;
                                    }
                                    else {
                                      FUN_1456ecc20(&local_88,uVar12);
                                      FUN_1456ecbe2(CONCAT44(local_88._4_4_,(int)local_88),uVar13,
                                                    uVar12);
                                      lVar14 = (longlong)(int)local_80;
                                      if (lVar14 != 0) {
                                        lVar28 = CONCAT44(local_88._4_4_,(int)local_88);
                                        lVar26 = 0;
                                        do {
                                          if (((*(int *)(lVar28 + 8 + lVar26) != 0) &&
                                              (*(longlong **)(lVar28 + lVar26) != (longlong *)0x0))
                                             && (cVar5 = (**(code **)(**(longlong **)
                                                                        (lVar28 + lVar26) + 0x30))()
                                                , cVar5 != '\0')) {
                                            FUN_144928b90(&local_d0,1);
                                            local_e8 = *(int *)(local_218 + 0x2c);
                                            if (local_e8 == 0) {
                                              uStack_e0 = DAT_14cb7bba0;
                                              local_e8 = (int)DAT_14cb7bb98;
                                              uStack_e4 = (undefined4)
                                                          ((ulonglong)DAT_14cb7bb98 >> 0x20);
                                            }
                                            else {
                                              uStack_e4 = (undefined4)
                                                          *(undefined8 *)(local_218 + 0x30);
                                              uStack_e0 = (uint)((ulonglong)
                                                                 *(undefined8 *)(local_218 + 0x30)
                                                                >> 0x20);
                                            }
                                            FUN_144928d62(local_c0,1,&local_e8);
                                            local_1b0 = *local_220;
                                            local_1a8 = (undefined4)local_220[1];
                                            FUN_14013eb2c(&local_d0,&local_1b0);
                                            local_1b8 = *(undefined4 *)(local_1e0 + 1);
                                            local_1c0 = *local_1e0;
                                            FUN_14013eb54(&local_d0,&local_1c0);
                                            local_1c8 = *(undefined4 *)(local_1d8 + 1);
                                            local_1d0 = *local_1d8;
                                            FUN_144928d62(local_c0,4,&local_1d0);
                                            if (*(int *)(lVar28 + 8 + lVar26) == 0) {
                                              plVar27 = (longlong *)0x0;
                                            }
                                            else {
                                              plVar27 = *(longlong **)(lVar28 + lVar26);
                                            }
                                            (**(code **)(*plVar27 + 0x58))
                                                      (plVar27,&local_d0,local_1e8);
                                            if (local_a8 != 0) {
                                              FUN_1400020a8();
                                            }
                                          }
                                          lVar26 = lVar26 + 0x10;
                                        } while (lVar14 * 0x10 != lVar26);
                                      }
                                    }
                                    if (*(int *)(lVar17 + 0x28) == 0) {
                                      FUN_145be84ec(local_210,puVar25);
                                    }
                                    FUN_145be86fb(CONCAT44(local_88._4_4_,(int)local_88),local_80);
                                    puVar1 = (undefined8 *)0x0;
                                    if (CONCAT44(local_88._4_4_,(int)local_88) != 0) {
                                      FUN_1400020a8();
                                      puVar1 = (undefined8 *)CONCAT44(local_88._4_4_,(int)local_88);
                                    }
                                  }
                                }
                                break;
                              }
                            }
                            lVar28 = lVar28 + 8;
                            lVar17 = lVar17 + -8;
                            puVar1 = local_88;
                          } while (lVar17 != 0);
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
      local_88 = puVar1;
      puVar1 = local_200;
      puVar25 = puVar25 + 4;
    } while (puVar25 != local_1f0);
    FUN_140861e20(local_200,iVar6);
    param_1 = local_218;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1400020a8(puVar1);
    }
  }
  if (((0 < *(int *)(param_1 + 0x188)) || (0 < *(int *)(param_1 + 0x198))) ||
     ((0 < *(int *)(param_1 + 0x1a8) || (0 < *(int *)(param_1 + 0x1b8))))) {
    cVar5 = FUN_144729dda(param_1 + 8);
    if (cVar5 != '\0') {
      uVar13 = FUN_14479d2ce(param_1 + 8);
      FUN_1405f658a(uVar13);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029546a FUN_14029546a body=61 status=ok
// SIG undefined FUN_14029546a(void)

void FUN_14029546a(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1401aa3da(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1402954a7 FUN_1402954a7 body=58 status=ok
// SIG undefined FUN_1402954a7(void)

void FUN_1402954a7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      FUN_1402954e1(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402954e1 FUN_1402954e1 body=96 status=ok
// SIG undefined FUN_1402954e1(void)

void FUN_1402954e1(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_1402954fd:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_1402954fd;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 140295542 FUN_140295542 body=213 status=ok
// SIG undefined FUN_140295542(void)

void FUN_140295542(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140295618 FUN_140295618 body=369 status=ok
// SIG undefined FUN_140295618(void)

void FUN_140295618(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14029569d;
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
LAB_14029569d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 14029578a FUN_14029578a body=61 status=ok
// SIG undefined FUN_14029578a(void)

void FUN_14029578a(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1407266be(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1402957c8 FUN_1402957c8 body=162 status=ok
// SIG undefined FUN_1402957c8(void)

void FUN_1402957c8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140295855;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140295855:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14029586a FUN_14029586a body=93 status=ok
// SIG undefined FUN_14029586a(void)

void FUN_14029586a(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 2;
  if (2 < param_2) {
    iVar3 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar4 = 0x7fffffff;
    if (((int)param_2 <= iVar1) && (iVar4 = iVar1, iVar1 < 1)) goto LAB_140295894;
  }
  FUN_14029598c(param_1,0,iVar4,8);
  iVar3 = iVar4;
LAB_140295894:
  *(int *)(param_1 + 0x1c) = iVar3;
  return;
}



// FUNCTION 1402958c8 FUN_1402958c8 body=195 status=ok
// SIG undefined FUN_1402958c8(void)

void FUN_1402958c8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (ulonglong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x800) {
        uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14029598c FUN_14029598c body=132 status=ok
// SIG undefined FUN_14029598c(void)

void FUN_14029598c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 140295a10 FUN_140295a10 body=61 status=ok
// SIG undefined FUN_140295a10(void)

void FUN_140295a10(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_140295bfa(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140295a4e FUN_140295a4e body=195 status=ok
// SIG undefined FUN_140295a4e(void)

void FUN_140295a4e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (ulonglong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x800) {
        uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140295b12 FUN_140295b12 body=232 status=ok
// SIG undefined FUN_140295b12(void)

undefined8 * FUN_140295b12(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 140295bfa FUN_140295bfa body=305 status=ok
// SIG undefined FUN_140295bfa(void)

void FUN_140295bfa(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140295c94;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140295c6d:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140295c6d;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140295c94;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140295c94:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140295d2c FUN_140295d2c body=228 status=ok
// SIG undefined FUN_140295d2c(void)

int FUN_140295d2c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
LAB_140295d75:
      lVar10 = (longlong)iVar2 * 0x38;
      if ((*(longlong *)(lVar4 + lVar10) == *param_3) &&
         (lVar1 = lVar4 + lVar10, *(longlong *)(lVar1 + 8) == param_3[1])) {
        iVar3 = (int)param_3[3];
        if (*(int *)(lVar1 + 0x18) == iVar3) {
          if (iVar3 < 2) {
            return iVar2;
          }
          lVar7 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(lVar1 + 0x10) + lVar7);
            uVar9 = (ulonglong)uVar8;
            uVar6 = *(ushort *)(param_3[2] + lVar7);
            if (uVar8 == uVar6) {
              if (uVar8 == 0) {
                return iVar2;
              }
            }
            else {
              if (0x7f < (uVar6 | uVar8)) goto LAB_140295df3;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140295df3;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        if (iVar3 + *(int *)(lVar1 + 0x18) == 1) {
          return iVar2;
        }
      }
      goto LAB_140295d82;
    }
  }
  return -1;
LAB_140295df3:
  if (uVar8 == uVar6) {
    return iVar2;
  }
LAB_140295d82:
  iVar2 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar2 == -1) {
    return -1;
  }
  goto LAB_140295d75;
}



// FUNCTION 140295e10 FUN_140295e10 body=220 status=ok
// SIG undefined FUN_140295e10(void)

int FUN_140295e10(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
LAB_140295e4d:
      lVar10 = (longlong)iVar2 * 0x50;
      if ((*(longlong *)(lVar4 + lVar10) == *param_3) &&
         (lVar1 = lVar4 + lVar10, *(longlong *)(lVar1 + 8) == param_3[1])) {
        iVar3 = (int)param_3[3];
        if (*(int *)(lVar1 + 0x18) == iVar3) {
          if (iVar3 < 2) {
            return iVar2;
          }
          lVar7 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(lVar1 + 0x10) + lVar7);
            uVar9 = (ulonglong)uVar8;
            uVar6 = *(ushort *)(param_3[2] + lVar7);
            if (uVar8 == uVar6) {
              if (uVar8 == 0) {
                return iVar2;
              }
            }
            else {
              if (0x7f < (uVar6 | uVar8)) goto LAB_140295ed5;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140295ed5;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        if (iVar3 + *(int *)(lVar1 + 0x18) == 1) {
          return iVar2;
        }
      }
      goto LAB_140295e5e;
    }
  }
  return -1;
LAB_140295ed5:
  if (uVar8 == uVar6) {
    return iVar2;
  }
LAB_140295e5e:
  iVar2 = *(int *)(lVar4 + 0x48 + lVar10);
  if (iVar2 == -1) {
    return -1;
  }
  goto LAB_140295e4d;
}



// FUNCTION 140295eec FUN_140295eec body=232 status=ok
// SIG undefined FUN_140295eec(void)

void FUN_140295eec(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar3 = (**(code **)(*param_1 + 0x180))();
  if ((cVar3 != '\0') && ((longlong)*(int *)(param_2 + 0x298) != 0)) {
    piVar5 = *(int **)(param_2 + 0x290);
    piVar1 = piVar5 + (longlong)*(int *)(param_2 + 0x298) * 3;
    do {
      cVar3 = (**(code **)(*param_1 + 0x188))(param_1,piVar5);
      if (cVar3 != '\0') {
        lVar4 = param_1[0x50];
        iVar2 = (int)param_1[0x51];
        lVar7 = (longlong)iVar2;
        if (lVar7 != 0) {
          lVar6 = 0;
          do {
            if ((*(int *)(lVar4 + lVar6) == *piVar5) && (*(int *)(lVar4 + 8 + lVar6) == piVar5[2]))
            goto LAB_140295fbb;
            lVar6 = lVar6 + 0xc;
          } while (lVar7 * 0xc != lVar6);
        }
        *(uint *)(param_1 + 0x51) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x28c) < iVar2 + 1U) {
          FUN_1446dd912(param_1 + 0x50,iVar2);
          lVar4 = param_1[0x50];
        }
        *(int *)(lVar4 + 8 + lVar7 * 0xc) = piVar5[2];
        *(undefined8 *)(lVar4 + lVar7 * 0xc) = *(undefined8 *)piVar5;
      }
LAB_140295fbb:
      piVar5 = piVar5 + 3;
    } while (piVar5 != piVar1);
  }
  return;
}



// FUNCTION 140295fd4 FUN_140295fd4 body=673 status=ok
// SIG undefined FUN_140295fd4(void)

void FUN_140295fd4(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138 [3];
  longlong local_120;
  code *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
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
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x150) == '\x04') {
    lVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
    local_120 = lVar3;
    local_138[2] = (**(code **)(*param_3 + 0xb0))(param_3);
    if (((lVar3 != local_138[2]) && (lVar3 != 0)) && (local_138[2] != 0)) {
      local_138[0] = 0;
      local_138[1] = 0;
      local_d8 = (code *)0x0;
      local_c8 = (longlong *)0x0;
      local_118 = (code *)0x0;
      plVar4 = (longlong *)FUN_14001cc68(0x30,8);
      local_108 = local_c8;
      pcVar2 = local_d8;
      *plVar4 = (longlong)&PTR_FUN_14b400620;
      plVar4[1] = (longlong)local_138;
      plVar4[2] = (longlong)&local_120;
      plVar4[3] = (longlong)&local_d8;
      plVar4[4] = (longlong)(local_138 + 2);
      plVar4[5] = param_1;
      if (plVar4 + 1 != (longlong *)0x0) {
        local_118 = FUN_143d4016e;
      }
      local_d8 = local_118;
      local_c8 = plVar4;
      local_118 = pcVar2;
      uStack_110 = uStack_d0;
      uStack_10c = uStack_cc;
      uStack_100 = uStack_c0;
      uStack_fc = uStack_bc;
      local_f8 = local_b8;
      uStack_f4 = uStack_b4;
      uStack_f0 = uStack_b0;
      uStack_ec = uStack_ac;
      local_e8 = local_a8;
      uStack_e4 = uStack_a4;
      uStack_e0 = uStack_a0;
      uStack_dc = uStack_9c;
      if (pcVar2 != (code *)0x0) {
        plVar4 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_f8;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      iVar1 = *(int *)(param_1 + 0x288);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x280);
        lVar6 = 0;
        do {
          pcVar2 = local_d8;
          local_140 = *(undefined4 *)(lVar3 + 8 + lVar6);
          local_148 = *(undefined8 *)(lVar3 + lVar6);
          plVar4 = local_c8;
          if (local_c8 == (longlong *)0x0) {
            plVar4 = (longlong *)&local_b8;
          }
          uVar5 = (**(code **)(*plVar4 + 8))();
          (*pcVar2)(uVar5,&local_148);
          lVar6 = lVar6 + 0xc;
        } while ((longlong)iVar1 * 0xc != lVar6);
      }
      *(undefined4 *)(param_1 + 0x288) = 0;
      if (*(int *)(param_1 + 0x28c) < 0) {
        FUN_1446dda88(param_1 + 0x280,0);
      }
      if (local_d8 != (code *)0x0) {
        plVar4 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_b8;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_138[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140296276 FUN_140296276 body=169 status=ok
// SIG undefined FUN_140296276(void)

void FUN_140296276(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  float fVar7;
  
  fVar7 = (float)FUN_140296320();
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < (longlong)iVar1) {
    iVar6 = -iVar1;
    uVar5 = (longlong)iVar1;
    do {
      lVar2 = *(longlong *)(param_1 + 0xa0);
      if (*(float *)(param_1 + 0x78) <= fVar7 - *(float *)(lVar2 + -4 + uVar5 * 4)) {
        uVar4 = *(uint *)(param_1 + 0xa8);
        if (uVar5 != uVar4) {
          memmove((void *)(lVar2 + uVar5 * 4 + -4),(void *)(lVar2 + uVar5 * 4),
                  (longlong)(int)(uVar4 + iVar6) << 2);
          uVar4 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar4 - 1;
        FUN_1401fef06(param_1 + 0xa0);
      }
      iVar6 = iVar6 + 1;
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 140296320 FUN_140296320 body=117 status=ok
// SIG undefined FUN_140296320(void)

float FUN_140296320(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x60);
  fVar8 = 0.0;
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0.0;
      }
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
    fVar8 = 0.0;
    if ((*(longlong *)(param_1 + 0x58) != 0) && (lVar6 = FUN_140296396(), lVar6 != 0)) {
      fVar8 = (float)*(double *)(lVar6 + 0x6d0);
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
  return fVar8;
}



// FUNCTION 140296396 FUN_140296396 body=113 status=ok
// SIG undefined FUN_140296396(void)

undefined8 FUN_140296396(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        if (lVar3 != 0) {
          uVar2 = FUN_1447210f0(lVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140296408 FUN_140296408 body=282 status=ok
// SIG undefined FUN_140296408(void)

undefined8 * FUN_140296408(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 140296522 FUN_140296522 body=40 status=ok
// SIG undefined FUN_140296522(void)

undefined8 FUN_140296522(undefined8 param_1,int param_2)

{
  FUN_14029654a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14029654a FUN_14029654a body=480 status=ok
// SIG undefined FUN_14029654a(void)

void FUN_14029654a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14aab9330;
  param_1[0x19] = &PTR_FUN_14aab9650;
  param_1[0x1a] = &PTR_FUN_14aab9690;
  param_1[0x1b] = &PTR_FUN_14aab96d0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x39];
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
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[0x33];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_14472eb64(param_1 + 0x20,0);
  }
  param_1[0x26] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 300)) {
    *(undefined4 *)((longlong)param_1 + 300) = 0x80;
    FUN_1446efbd8(param_1 + 0x22,0);
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  lVar5 = param_1[0x1c];
  if (lVar5 != 0) {
    FUN_14029672a(lVar5);
    FUN_1400020a8(lVar5);
  }
  FUN_1402161e2(param_1);
  return;
}



// FUNCTION 14029672a FUN_14029672a body=188 status=ok
// SIG undefined FUN_14029672a(void)

void FUN_14029672a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (0 < (int)param_1[1]) {
    lVar2 = *param_1;
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4 * 8);
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((puVar3 != (undefined8 *)0x0) && (*piVar1 == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[1]);
  }
  FUN_14029680c(param_1,0);
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    FUN_147d528a0(lVar2);
    FUN_1400020a8(lVar2);
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
  }
  FUN_1403fa1cd(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14029680c(param_1,0);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402967e6 FUN_1402967e6 body=38 status=ok
// SIG undefined FUN_1402967e6(void)

undefined8 FUN_1402967e6(undefined8 param_1,int param_2)

{
  FUN_140296880();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14029680c FUN_14029680c body=116 status=ok
// SIG undefined FUN_14029680c(void)

void FUN_14029680c(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1447ab16c(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140296880 FUN_140296880 body=402 status=ok
// SIG undefined FUN_140296880(void)

void FUN_140296880(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = &PTR_FUN_14aaba188;
  puVar2 = (undefined8 *)param_1[8];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar3 = param_1[0x43];
  if (lVar3 != 0) {
    FUN_140296a12(lVar3 + 0x80);
    FUN_140296a12(lVar3 + 0x40);
    FUN_140296a12(lVar3);
    FUN_1400020a8(lVar3);
  }
  puVar2 = (undefined8 *)param_1[10];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_140296c34(param_1 + 0x4d);
  uVar4 = param_1[0x4b];
  if ((uVar4 & 1) != 0) {
    uVar4 = ((longlong)uVar4 >> 0x18) + (longlong)(param_1 + 0x4b);
  }
  FUN_140296a48(uVar4,*(undefined4 *)(param_1 + 0x4c));
  uVar4 = param_1[0x4b];
  if (uVar4 != 0 && (uVar4 & 1) == 0) {
    FUN_1400020a8();
  }
  param_1[0x44] = &PTR_LAB_14aaba160;
  puVar2 = (undefined8 *)param_1[0x4a];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140296a6e(param_1 + 0x44);
  FUN_140296a12(param_1 + 0x3b);
  FUN_140296a12(param_1 + 0x33);
  FUN_140296b76(param_1 + 0x2b);
  FUN_140296ab8(param_1 + 0x23);
  FUN_140296d44(param_1 + 0x12);
  FUN_1400ea36e(param_1 + 0xd,param_1 + 0xd);
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140296a12 FUN_140296a12 body=54 status=ok
// SIG undefined FUN_140296a12(void)

void FUN_140296a12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa57ea0;
  if (param_1[4] != 0 && (param_1[4] & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1);
  return;
}



// FUNCTION 140296a48 FUN_140296a48 body=38 status=ok
// SIG undefined FUN_140296a48(void)

void FUN_140296a48(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140296a6e(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 140296a6e FUN_140296a6e body=73 status=ok
// SIG undefined FUN_140296a6e(void)

void FUN_140296a6e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aa9a7a0;
  if (param_1[3] != 0 && (param_1[3] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0 || (param_1[1] & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140296ab8 FUN_140296ab8 body=190 status=ok
// SIG undefined FUN_140296ab8(void)

void FUN_140296ab8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aa50910;
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cff0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140296b76 FUN_140296b76 body=190 status=ok
// SIG undefined FUN_140296b76(void)

void FUN_140296b76(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aa61a50;
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cff0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140296c34 FUN_140296c34 body=151 status=ok
// SIG undefined FUN_140296c34(void)

void FUN_140296c34(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aab9fe0;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140296ccc FUN_140296ccc body=120 status=ok
// SIG undefined FUN_140296ccc(void)

undefined8 * FUN_140296ccc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aabc2e8;
  FUN_1401edd9e(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140296d44 FUN_140296d44 body=489 status=ok
// SIG undefined FUN_140296d44(void)

void FUN_140296d44(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aa69e90;
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[8] = 0;
  }
  puVar3 = (undefined8 *)param_1[10];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xb] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[9] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[5] = &PTR_FUN_14a38cff0;
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[5] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x36) = 2;
  if ((*(int *)(param_1 + 6) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  param_1[2] = &PTR_FUN_14a38cff0;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[2] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 2;
  if ((*(int *)(param_1 + 3) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140296f2e FUN_140296f2e body=66 status=ok
// SIG undefined FUN_140296f2e(void)

undefined8 * FUN_140296f2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa6e4e0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140296f70 FUN_140296f70 body=66 status=ok
// SIG undefined FUN_140296f70(void)

undefined8 * FUN_140296f70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa6e580;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140296fb2 FUN_140296fb2 body=14 status=ok
// SIG undefined FUN_140296fb2(void)

void FUN_140296fb2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 140296fc0 FUN_140296fc0 body=66 status=ok
// SIG undefined FUN_140296fc0(void)

undefined8 * FUN_140296fc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa6e3a0;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140297002 FUN_140297002 body=398 status=ok
// SIG undefined FUN_140297002(void)

longlong FUN_140297002(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_1402445d6();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140297190 FUN_140297190 body=337 status=ok
// SIG undefined FUN_140297190(void)

void FUN_140297190(longlong param_1,uint param_2)

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
    uVar4 = (ulonglong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x333) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x3ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1402971fd;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x3ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1402971fd:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x28)) {
      uVar3 = uVar4 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
  }
  return;
}



// FUNCTION 1402972e2 FUN_1402972e2 body=1065 status=ok
// SIG undefined FUN_1402972e2(void)

int * FUN_1402972e2(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1446efaca(param_1,iVar16);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar13 = iVar19 + 1;
    iVar20 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    if (iVar20 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        iVar5 = iVar19;
        if (iVar19 + 0x20U < 0xa0) {
          iVar13 = 0x80;
        }
        else {
          uVar12 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar12) {
              uVar6 = uVar12;
            }
          }
          else {
            uVar6 = uVar12 + (uVar12 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar6 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar7 = (uint)(uVar15 + 0xf);
              if (uVar6 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar14 = (ulonglong)(uVar7 & 0xfffffff0);
                if (uVar14 < 0x7ff1) {
                  bVar11 = (&DAT_14c841e00)[uVar7 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar11) {
                    uVar18 = (ulonglong)bVar11;
                  }
                  uVar21 = 0x32 - (ulonglong)bVar11;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_1402975f5;
                    lVar22 = uVar18 + 1 + uVar21;
                    uVar21 = uVar21 - 1;
                  } while (lVar22 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar14 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar5 = (int)param_1[5];
            }
          }
LAB_1402975f5:
          iVar8 = (int)(uVar15 >> 2);
          iVar13 = -0x20;
          if ((int)uVar12 <= iVar8) {
            iVar13 = iVar8 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar9,iVar5);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar5 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar5 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar9;
        }
        bVar11 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar22 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar19 & 0x1f;
    puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar20 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar22 = (longlong)iVar16;
    iVar19 = *(int *)(*param_1 + 4 + lVar22 * 0x10);
    *(int *)(param_1 + 6) = iVar19;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar19 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar19 = iVar16;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar19 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar16 & 0x1f);
  lVar3 = *param_1;
  lVar22 = lVar22 * 0x10;
  uVar15 = *param_3;
  *(ulonglong *)(lVar3 + lVar22) = uVar15;
  *(undefined4 *)(lVar3 + 8 + lVar22) = 0xffffffff;
  uVar12 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  cVar10 = '\0';
  iVar19 = iVar16;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
    if (iVar19 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar19 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar19 * 0x10) == uVar15) {
          *puVar1 = uVar15;
          FUN_146902ce4(param_1,iVar16);
          cVar10 = '\x01';
          goto LAB_140297437;
        }
        iVar19 = (int)puVar1[1];
      } while (iVar19 != -1);
    }
    cVar10 = '\0';
    iVar19 = iVar16;
  }
LAB_140297437:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar16 = 1;
    if (3 < uVar6) {
      uVar15 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar16 <= (int)param_1[9])) {
      uVar12 = (int)param_1[9] - 1U & uVar12;
      *(uint *)(lVar3 + lVar22 + 0xc) = uVar12;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      *(undefined4 *)(lVar3 + lVar22 + 8) =
           *(undefined4 *)
            ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 9) = iVar16;
      FUN_14492abf0(param_1);
    }
  }
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 14029770c FUN_14029770c body=2447 status=ok
// SIG undefined FUN_14029770c(void)

void FUN_14029770c(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  double dVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined5 uStack_98;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  int local_70;
  float fStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x298) == 0) goto LAB_140297a0f;
  plVar11 = (longlong *)(param_1 + 0x308);
  lVar7 = *(longlong *)(param_1 + 0x31c);
  lVar4 = *(longlong *)(param_1 + 0x308);
  lVar8 = *(longlong *)(param_1 + 0x310);
  fStack_6c = (float)((ulonglong)lVar7 >> 0x20);
  local_70 = (int)lVar7;
  if (lVar4 != lVar8) {
    local_68 = (lVar4 >> 0x20) * (longlong)(int)lVar8;
    lVar8 = (longlong)(int)lVar4 * (lVar8 >> 0x20);
    lVar4 = (local_68 * local_70) / lVar8;
    dVar14 = ((double)fStack_6c * (double)local_68) / (double)lVar8 +
             (((double)local_68 * (double)local_70) / (double)lVar8 - (double)lVar4);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar14;
    auVar16 = roundpd(auVar16,auVar16,1);
    lVar4 = (longlong)auVar16._0_8_ + lVar4;
    fVar15 = (float)(dVar14 - auVar16._0_8_);
    fVar18 = fVar15;
    if (0.99999994 <= fVar15) {
      fVar18 = 0.99999994;
    }
    if (0x7ffffffe < lVar4) {
      lVar4 = 0x7fffffff;
    }
    lVar8 = -0x80000000;
    if (-0x80000000 < lVar4) {
      lVar8 = lVar4;
    }
    local_70 = (int)lVar8;
    fStack_6c = (float)(~-(uint)(0.0 < fVar15) & (uint)fVar15 | (uint)fVar18 & -(uint)(0.0 < fVar15)
                       ) + 0.5 + -0.5;
    if (0.99999994 <= fStack_6c) {
      fStack_6c = 0.99999994;
    }
    if (fStack_6c <= 0.0) {
      fStack_6c = 0.0;
    }
    lVar8 = *plVar11;
  }
  param_2[2] = lVar7;
  param_2[3] = lVar8;
  local_a8 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x18);
  FUN_1400021e4(&local_a8,&local_68);
  if (&local_68 == param_2) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  }
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_2 + 6,*param_2,iVar3);
  lVar4 = *(longlong *)(param_1 + 0x308);
  param_2[8] = lVar7;
  param_2[9] = lVar4;
  if (((((*(int *)(param_1 + 0x4d8) == 0) || (uVar12 = *(uint *)(param_1 + 0x4d4), (int)uVar12 < 0))
       || (DAT_14c9647dc <= (int)uVar12)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x4d8))))) ||
     (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar7 = *plVar9, lVar7 == 0)))))) {
    *(undefined4 *)(param_2 + 0xe) = 0;
    *(undefined8 *)((longlong)param_2 + 0x74) = 0;
    *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x12) = 0;
    if (*(int *)((longlong)param_2 + 0x94) < 0) {
      FUN_1446f8c06(param_2 + 0x11,0);
    }
    puVar1 = (undefined2 *)param_2[0x11];
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_68,lVar7);
    param_2[0xf] = local_68;
    param_2[0x10] = uStack_60;
    if (param_2 + 0xf == &local_68) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[0x11] != 0) {
        FUN_1400020a8();
      }
      param_2[0x11] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_2 + 0x12) = local_50;
      *(undefined4 *)((longlong)param_2 + 0x94) = local_4c;
    }
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    iVar3 = DAT_14c9647dc;
    uVar12 = *(uint *)(lVar7 + 0xc);
    if (cVar2 != '\0') {
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_2[0xe] = 0;
        goto LAB_140297996;
      }
    }
    *(uint *)(param_2 + 0xe) = uVar12;
    if ((int)uVar12 < iVar3) {
      lVar7 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar13 = iVar3 == 0;
      if (bVar13) {
        *(int *)(lVar7 + 0x10) = iVar10;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar3 = iVar10;
      }
    }
    *(int *)((longlong)param_2 + 0x74) = iVar3;
  }
LAB_140297996:
  *(undefined4 *)(param_2 + 0x14) = DAT_14cabca08;
  if (*(longlong *)(param_1 + 0x298) == 0) {
LAB_1402979e9:
    lVar8 = 0;
  }
  else {
    lVar4 = FUN_140298400();
    lVar7 = *(longlong *)(param_1 + 0x298);
    if (lVar7 == 0) goto LAB_1402979e9;
    lVar8 = 0;
    if ((lVar4 != 0) && (lVar6 = *(longlong *)(lVar7 + 0x10), lVar6 != 0)) {
      if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) goto LAB_1402979e9;
      lVar8 = lVar7;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar7);
      }
    }
  }
  param_2[0x13] = lVar8;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x2e8))();
  plVar9 = (longlong *)FUN_1402981dc(uVar5);
  if (plVar9 == (longlong *)0x0) goto LAB_140297a0f;
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x328))(plVar9);
  lVar7 = plVar9[1];
  if ((longlong)(int)lVar7 == 0) goto LAB_140297a0f;
  local_b0 = *plVar9;
  lVar4 = 0;
  local_b8 = 0;
  do {
    lVar8 = *(longlong *)(local_b0 + lVar4);
    if (lVar8 != 0) {
      local_68 = *(longlong *)(lVar8 + 0x98);
      uStack_60 = *(longlong *)(lVar8 + 0xa0);
      if ((*(byte *)(lVar8 + 0xc0) & 1) != 0) {
        cVar2 = FUN_1400a246c(&local_68,&local_70);
        if ((cVar2 == '\0') || (local_b8 == 0)) {
          if (cVar2 != '\0') goto LAB_140297ac6;
        }
        else if (*(int *)(lVar8 + 0xb8) < *(int *)(local_b8 + 0xb8)) {
LAB_140297ac6:
          lVar6 = FUN_140298736();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (local_b8 = lVar8,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            local_b8 = 0;
          }
        }
        else if (*(int *)(lVar8 + 0xb8) == *(int *)(local_b8 + 0xb8)) {
          local_a8 = *(longlong *)(local_b8 + 0x98);
          local_88 = local_68;
          uVar12 = (uint)local_a8 & 0xff;
          cVar2 = (char)local_68;
          if (cVar2 == '\x02') {
            if (uVar12 == 2) goto LAB_140297ac6;
          }
          else {
            iVar3 = (int)((ulonglong)local_68 >> 0x20);
            if (uVar12 == 2) {
              plVar9 = &local_88;
            }
            else {
              iVar10 = (int)((ulonglong)local_a8 >> 0x20);
              if (iVar10 < iVar3) {
                plVar9 = &local_88;
              }
              else {
                plVar9 = &local_a8;
                if (iVar10 <= iVar3) {
                  plVar9 = &local_a8;
                  if (cVar2 == '\0') {
                    plVar9 = &local_88;
                  }
                }
              }
              if ((char)*plVar9 != cVar2) goto LAB_140297ab8;
            }
            if (*(int *)((longlong)plVar9 + 4) == iVar3) goto LAB_140297ac6;
          }
        }
      }
    }
LAB_140297ab8:
    lVar8 = local_b8;
    lVar4 = lVar4 + 8;
  } while ((longlong)(int)lVar7 * 8 != lVar4);
  if (local_b8 == 0) goto LAB_140297a0f;
  FUN_140e50294(local_b8,&local_68);
  FUN_140e500ac(lVar8,&local_68);
  plVar9 = *(longlong **)(lVar8 + 0x7d8);
  if (plVar9 == (longlong *)0x0) {
    lVar7 = *(longlong *)(param_1 + 0x310);
  }
  else {
    lVar7 = (**(code **)(*plVar9 + 0x2e8))(plVar9);
    lVar7 = *(longlong *)(lVar7 + 0x118);
    lVar4 = (**(code **)(*plVar9 + 0x2e8))(plVar9);
    plVar11 = (longlong *)(lVar4 + 0x120);
  }
  lVar4 = *plVar11;
  FUN_1402985cb(&local_78,CONCAT44(fStack_6c,local_70),&local_68);
  fVar18 = (float)((ulonglong)local_78 >> 0x20);
  lVar6 = local_78;
  if (lVar7 != lVar4) {
    local_a8 = (lVar7 >> 0x20) * (longlong)(int)lVar4;
    local_88 = (longlong)(int)lVar7 * (lVar4 >> 0x20);
    lVar7 = (local_a8 * (int)local_78) / local_88;
    dVar14 = ((double)fVar18 * (double)local_a8) / (double)local_88 +
             (((double)local_a8 * (double)(int)local_78) / (double)local_88 - (double)lVar7);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar14;
    auVar16 = roundpd(auVar17,auVar17,1);
    lVar7 = (longlong)auVar16._0_8_ + lVar7;
    fVar15 = (float)(dVar14 - auVar16._0_8_);
    fVar18 = fVar15;
    if (0.99999994 <= fVar15) {
      fVar18 = 0.99999994;
    }
    if (0x7ffffffe < lVar7) {
      lVar7 = 0x7fffffff;
    }
    lVar6 = -0x80000000;
    if (-0x80000000 < lVar7) {
      lVar6 = lVar7;
    }
    fVar18 = (float)(~-(uint)(0.0 < fVar15) & (uint)fVar15 | (uint)fVar18 & -(uint)(0.0 < fVar15)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar18) {
      fVar18 = 0.99999994;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
  }
  FUN_140298672(lVar8,&local_a8);
  if (param_2 + 6 == &local_a8) {
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    param_2[6] = local_a8;
    local_a8 = 0;
    *(undefined4 *)(param_2 + 7) = uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_9c;
  }
  *(int *)(param_2 + 8) = (int)lVar6;
  *(float *)((longlong)param_2 + 0x44) = fVar18;
  param_2[9] = lVar4;
  FUN_14029898a(lVar8,&local_a8);
  *(undefined4 *)(param_2 + 0x14) = (undefined4)local_a8;
  lVar7 = *(longlong *)(lVar8 + 0x7d8);
  if (lVar7 == 0) {
LAB_140297f64:
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_140298400();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_140297f64;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar7);
    }
  }
  param_2[0x13] = lVar7;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  FUN_14029881c(&local_a8,&local_88,0,0);
  if (param_2 + 0xc == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    param_2[0xc] = local_88;
    local_88 = 0;
    *(undefined4 *)(param_2 + 0xd) = local_80;
    *(undefined4 *)((longlong)param_2 + 0x6c) = local_7c;
  }
  FUN_1447bda9c(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_140297a0f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402980a2 FUN_1402980a2 body=313 status=ok
// SIG undefined FUN_1402980a2(void)

void FUN_1402980a2(longlong *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1446f8c06(param_1,0);
      return;
    }
  }
  else {
    iVar4 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar4 = 0;
    }
    if (iVar4 < param_3) {
      uVar5 = param_3 + 1;
      if (param_3 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar5);
      }
      *(undefined4 *)(param_1 + 1) = 0;
      iVar4 = 0;
      uVar2 = uVar5;
      if (*(uint *)((longlong)param_1 + 0xc) != uVar5) {
        FUN_1446f8c06(param_1,uVar5);
        iVar4 = (int)param_1[1];
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = iVar4 + uVar5;
      if (uVar2 - iVar4 < uVar5) {
        FUN_144a2dbb8(param_1);
      }
      pvVar1 = (void *)*param_1;
      memcpy(pvVar1,param_2,(longlong)param_3 * 2);
      *(undefined2 *)((longlong)pvVar1 + (longlong)param_3 * 2) = 0;
    }
    else {
      pvVar1 = (void *)*param_1;
      lVar6 = (longlong)param_3;
      memmove(pvVar1,param_2,lVar6 * 2);
      *(undefined2 *)((longlong)pvVar1 + lVar6 * 2) = 0;
      param_3 = iVar4 - param_3;
      if (param_3 != 0) {
        iVar3 = (int)param_1[1];
        iVar4 = iVar3 - (iVar4 + 1);
        if (iVar4 != 0) {
          memmove((void *)(*param_1 + lVar6 * 2 + 2),
                  (void *)(*param_1 + lVar6 * 2 + (longlong)param_3 * 2 + 2),(longlong)iVar4 * 2);
          iVar3 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar3 - param_3;
        FUN_1449649ae(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1402981dc FUN_1402981dc body=145 status=ok
// SIG undefined FUN_1402981dc(void)

longlong FUN_1402981dc(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14029831a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14029826e(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_14029831a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_14029821f;
  }
  lVar1 = 0;
LAB_14029821f:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14029826e FUN_14029826e body=171 status=ok
// SIG undefined FUN_14029826e(void)

undefined8 FUN_14029826e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(lVar2 + lVar6) + 0x10);
        lVar5 = FUN_1402984e6();
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) &&
           (((lVar3 = *param_2, lVar3 != 0 && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          return *(undefined8 *)(lVar2 + lVar6);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 14029831a FUN_14029831a body=228 status=ok
// SIG undefined FUN_14029831a(void)

longlong FUN_14029831a(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab6480 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14634340e;
    local_38 = &LAB_1476bc947;
    local_40 = FUN_14572d2a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneCinematicShotTrack",&DAT_14cab6480,
                  &DAT_1476bc946);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6480;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140298400 FUN_140298400 body=228 status=ok
// SIG undefined FUN_140298400(void)

longlong FUN_140298400(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabca58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146340e96;
    local_38 = &LAB_14781bb33;
    local_40 = FUN_1463674eb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/LevelSequence",L"LevelSequence",&DAT_14cabca58,FUN_1463674c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabca58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402984e6 FUN_1402984e6 body=228 status=ok
// SIG undefined FUN_1402984e6(void)

longlong FUN_1402984e6(void)

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
  if (DAT_14cab3de0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633909e;
    local_38 = &LAB_147583ced;
    local_40 = &LAB_146342e82;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTrack",&DAT_14cab3de0,&DAT_147583cec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3de0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402985cb FUN_1402985cb body=165 status=ok
// SIG undefined FUN_1402985cb(void)

undefined8 * FUN_1402985cb(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_3 + 0x18) == 0) {
    FUN_1400a24f6(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  FUN_1400a24f6(param_1,param_2,param_3);
  if ((longlong)*(int *)(param_3 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_3 + 0x10);
    lVar3 = (longlong)*(int *)(param_3 + 0x18) * 0x18;
    uVar2 = *param_1;
    do {
      FUN_140406768(lVar1,&local_30,uVar2);
      *param_1 = local_30;
      lVar1 = lVar1 + 0x18;
      lVar3 = lVar3 + -0x18;
      uVar2 = local_30;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140298672 FUN_140298672 body=193 status=ok
// SIG undefined FUN_140298672(void)

undefined8 * FUN_140298672(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x7e8);
  if ((longlong)iVar1 < 2) {
    if (*(longlong *)(param_1 + 0x7d8) == 0) {
      *param_2 = 0;
      _Src = *(void **)(param_1 + 0x7e0);
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 != 0) goto LAB_1402986eb;
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x7d8) + 0x18);
      FUN_1400021e4(&local_28,param_2);
    }
    if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *param_2 = 0;
  _Src = *(void **)(param_1 + 0x7e0);
  *(int *)(param_2 + 1) = iVar1;
LAB_1402986eb:
  FUN_1446dd670(param_2,iVar1,0);
  memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 140298736 FUN_140298736 body=228 status=ok
// SIG undefined FUN_140298736(void)

longlong FUN_140298736(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4ea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146343276;
    local_38 = &LAB_1475c5003;
    local_40 = FUN_14581da5a;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x800;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneCinematicShotSection",&DAT_14cab4ea0,
                  FUN_146347940);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029881c FUN_14029881c body=365 status=ok
// SIG undefined FUN_14029881c(void)

undefined8 FUN_14029881c(int *param_1,undefined8 param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d0;
  int local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  ulonglong *local_b0;
  char local_a8;
  undefined2 local_a0 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *param_1;
  iVar2 = param_1[1];
  puVar4 = (undefined2 *)&DAT_149e34420;
  if (((-1 < iVar1) && (-1 < iVar2)) && (-1 < param_1[2])) {
    puVar5 = &DAT_149dfb77a;
    if (param_3 != '\0') {
      puVar5 = (undefined2 *)&DAT_149e34426;
    }
    puVar4 = (undefined2 *)&DAT_149e34420;
    if (-1 < param_1[3]) {
      puVar4 = puVar5;
    }
  }
  local_c0 = local_a0;
  local_a8 = '\0';
  local_b0 = &local_20;
  local_c8 = -param_1[3];
  if (local_c8 < 0) {
    local_c8 = param_1[3];
  }
  local_d0 = -param_1[2];
  if (local_d0 < 0) {
    local_d0 = param_1[2];
  }
  local_d8 = -iVar2;
  if (-iVar2 < 0) {
    local_d8 = iVar2;
  }
  iVar2 = -iVar1;
  if (-iVar1 < 0) {
    iVar2 = iVar1;
  }
  pwVar3 = L"%s%02d:%02d:%02d:%02d";
  if ((char)param_1[5] != '\0') {
    pwVar3 = L"%s%02d:%02d:%02d;%02d";
  }
  local_b8 = local_c0;
  FUN_140212e80(&local_c0,pwVar3,puVar4,iVar2);
  if ((param_4 != '\0') || (0.0 < (float)param_1[4])) {
    fVar6 = (float)param_1[4] * 100.0;
    if (99.0 <= fVar6) {
      fVar6 = 99.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    FUN_140212e80(&local_c0,L".%02d",(int)fVar6);
  }
  *local_b8 = 0;
  FUN_140056680(param_2,local_c0);
  if (local_a8 == '\x01') {
    FUN_1400020a8(local_c0);
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029898a FUN_14029898a body=613 status=ok
// SIG undefined FUN_14029898a(void)

uint * FUN_14029898a(longlong param_1,uint *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_14073751e();
  if (DAT_14c951858 == 0) {
    local_80 = &local_58;
    local_58 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1468c5283;
    local_90 = FUN_142809da0;
    local_98 = L"Engine";
    local_a0 = 0x400000000;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (lVar5 = lVar3,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         != lVar2 + 0x30)) {
        lVar5 = 0;
      }
    } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
  }
  local_58 = (code *)0x0;
  uStack_50 = 0;
  FUN_1401031ac(param_1);
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FUN_1400020e8(&local_58,&DAT_14a499588,3);
    local_68 = 0;
    uStack_60 = 0;
    FUN_1401031ac(*(undefined8 *)(param_1 + 0x7d8),0,&local_68);
    iVar8 = (int)uStack_60 + -1;
    if ((int)uStack_60 == 0) {
      iVar8 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar8);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  pcVar4 = (code *)&DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    pcVar4 = local_58;
  }
  uVar1 = *(ushort *)pcVar4;
  if (uVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    do {
      pcVar4 = pcVar4 + 2;
      uVar7 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
      uVar9 = (uint)(uVar6 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
      uVar7 = uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
      uVar6 = (ulonglong)uVar7;
      uVar1 = *(ushort *)pcVar4;
    } while (uVar1 != 0);
  }
  *param_2 = uVar7;
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140298bfe FUN_140298bfe body=127 status=ok
// SIG undefined FUN_140298bfe(void)

undefined8 * FUN_140298bfe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b346930;
  FUN_140298c7d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140298c7d FUN_140298c7d body=85 status=ok
// SIG undefined FUN_140298c7d(void)

void FUN_140298c7d(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x68);
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        FUN_144a2da94(lVar1);
        thunk_FUN_1400020a8(lVar1,0x38);
      }
      if (plVar2[-8] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140298cd2 FUN_140298cd2 body=152 status=ok
// SIG undefined FUN_140298cd2(void)

void FUN_140298cd2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
  FUN_140298d6a(param_1);
  return;
}



// FUNCTION 140298d6a FUN_140298d6a body=137 status=ok
// SIG undefined FUN_140298d6a(void)

void FUN_140298d6a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
  return;
}



// FUNCTION 140298df4 FUN_140298df4 body=93 status=ok
// SIG undefined FUN_140298df4(void)

undefined8 * FUN_140298df4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140298e51(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14029907e(param_1,iVar1);
      FUN_140298e8a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140298e51 FUN_140298e51 body=57 status=ok
// SIG undefined FUN_140298e51(void)

void FUN_140298e51(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 140298e8a FUN_140298e8a body=145 status=ok
// SIG undefined FUN_140298e8a(void)

void FUN_140298e8a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  if (param_3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      *param_1 = 0;
      iVar1 = *(int *)(param_2 + -0x18);
      _Src = *(void **)(param_2 + -0x20);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_140298f94(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
      }
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + -8);
      param_1[2] = *(undefined8 *)(param_2 + -0x10);
      FUN_140298f1c(param_1 + 4,param_2);
      param_1 = param_1 + 10;
      param_2 = param_2 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140298f1c FUN_140298f1c body=119 status=ok
// SIG undefined FUN_140298f1c(void)

undefined8 * FUN_140298f1c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 140298f94 FUN_140298f94 body=233 status=ok
// SIG undefined FUN_140298f94(void)

void FUN_140298f94(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14029907e FUN_14029907e body=233 status=ok
// SIG undefined FUN_14029907e(void)

void FUN_14029907e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x50);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x50,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140299168 FUN_140299168 body=2677 status=ok
// SIG undefined FUN_140299168(void)

void FUN_140299168(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  uint param_5)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  code *pcVar13;
  longlong lVar14;
  longlong *plVar15;
  code *pcVar16;
  undefined1 *puVar17;
  short sVar18;
  undefined4 uVar19;
  int iVar20;
  ulonglong uVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  undefined8 *local_148;
  longlong *local_140;
  int local_138;
  int local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 *local_118;
  longlong local_108;
  longlong local_100;
  uint local_f4;
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar3 = FUN_14492b351(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2));
  if (cVar3 != '\0') {
    for (plVar11 = *(longlong **)(param_2 + 0xc0); plVar11 != (longlong *)0x0;
        plVar11 = (longlong *)
                  (**(code **)(*plVar11 + 0x38))(plVar11,*(undefined4 *)(param_1 + 0x20))) {
      plVar7 = (longlong *)(**(code **)(*plVar11 + 0x30))(plVar11,*(undefined4 *)(param_1 + 0x20));
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x288))(plVar7,&local_b8);
        if (((ushort)local_b8 >> 10 & 1) == 0) break;
        local_f4 = *(uint *)(param_2 + 0xe4);
        pcVar13 = *(code **)(*plVar7 + 0x38);
        plVar15 = plVar7;
        if (pcVar13 == FUN_144765e18) {
          plVar15 = (longlong *)plVar7[9];
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)plVar7[8];
            pcVar13 = *(code **)(*plVar15 + 0x420);
            pcVar16 = (code *)&LAB_144b24e8a;
          }
          else {
            pcVar13 = *(code **)(*plVar15 + 0x420);
            pcVar16 = (code *)&LAB_14497e108;
          }
          if (pcVar13 != pcVar16) goto LAB_140299afe;
        }
        else {
LAB_140299afe:
          (*pcVar13)(plVar15);
        }
        lVar8 = *plVar7;
        local_100 = param_1;
        if (*(code **)(lVar8 + 0x100) == (code *)&LAB_144b25520) {
          bVar22 = (*(byte *)(plVar7[8] + 0x1d0) & 0x40) >> 6;
        }
        else {
          bVar22 = (**(code **)(lVar8 + 0x100))(plVar7);
          lVar8 = *plVar7;
        }
        pcVar13 = *(code **)(lVar8 + 0x38);
        plVar15 = plVar7;
        local_e8 = param_3;
        if (pcVar13 == FUN_144765e18) {
          plVar15 = (longlong *)plVar7[9];
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)plVar7[8];
            pcVar13 = *(code **)(*plVar15 + 0x420);
            if (pcVar13 != (code *)&LAB_144b24e8a) goto LAB_140299b18;
            bVar23 = *(byte *)(plVar15 + 0x30);
          }
          else {
            pcVar13 = *(code **)(*plVar15 + 0x420);
            if (pcVar13 != (code *)&LAB_14497e108) goto LAB_140299b18;
            bVar23 = *(byte *)(plVar15 + 0x2a);
          }
          bVar23 = (bVar23 & 0x10) >> 4;
        }
        else {
LAB_140299b18:
          bVar23 = (*pcVar13)(plVar15);
        }
        plVar15 = *(longlong **)(param_2 + 0xb8);
        local_f0 = param_2;
        lVar8 = (**(code **)(*plVar15 + 0x30))(plVar15);
        uVar19 = *(undefined4 *)(lVar8 + 0x28);
        local_108 = param_4;
        uVar5 = FUN_1447e3b9e(plVar7,param_4);
        pcVar13 = *(code **)(*plVar7 + 0x270);
        plVar12 = plVar7;
        if (pcVar13 == (code *)&LAB_1447f82f4) {
          plVar12 = (longlong *)plVar7[9];
          if (plVar12 == (longlong *)0x0) {
            plVar12 = (longlong *)plVar7[8];
            pcVar13 = *(code **)(*plVar12 + 0x408);
            if (pcVar13 != (code *)&LAB_14470b702) goto LAB_140299b24;
            bVar4 = *(byte *)((longlong)plVar12 + 0x129);
            if (bVar4 == 1) {
              bVar4 = ~*(byte *)((longlong)plVar12 + 0x1d6) & 1;
            }
            uVar6 = (uint)bVar4;
          }
          else {
            pcVar13 = *(code **)(*plVar12 + 0x408);
            if (pcVar13 != (code *)&LAB_14497e176) goto LAB_140299b24;
            uVar6 = (uint)*(byte *)(plVar12 + 0x2b);
          }
        }
        else {
LAB_140299b24:
          uVar6 = (*pcVar13)(plVar12);
        }
        sVar18 = (short)uVar19;
        if (((uVar6 == 0) &&
            (cVar3 = (**(code **)(*plVar15 + 0x38))(plVar15), cVar3 == '\x01' && (char)uVar5 == '\0'
            )) && (cVar3 = FUN_1447e4184(plVar7,0,-1 < sVar18), cVar3 != '\0')) {
          FUN_14003fbd6();
          local_e0 = (longlong *)(**(code **)(*DAT_14caea080 + 0x2f0))();
          plVar7 = (longlong *)
                   (**(code **)(*local_e0 + 0x30))(local_e0,*(undefined4 *)(local_100 + 0x20));
          param_1 = local_100;
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
          local_c8 = 0;
          uStack_c0 = 0;
          if (plVar7[2] == 0) {
            uVar9 = 0;
          }
          else {
            uVar21 = (ulonglong)
                     CONCAT31((int3)((uint)uVar5 >> 8),
                              *(undefined1 *)(*(longlong *)(plVar7[2] + 0x28) + 0x246)) &
                     0xffffffffffffff40;
            uVar9 = CONCAT71((int7)(uVar21 >> 8),(byte)uVar21 >> 6);
          }
          uVar19 = *(undefined4 *)(local_100 + 0x20);
          uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15);
          local_148 = &local_c8;
          local_150 = &local_a8;
          local_158 = &local_b8;
          cVar3 = FUN_1400cee52(plVar7,uVar10,uVar19,uVar9);
          lVar8 = local_108;
          param_2 = local_f0;
          param_3 = local_e8;
          param_4 = local_108;
          if (cVar3 != '\0') {
            iVar2 = 2 - (uint)((local_f4 >> 0xc & 1) != 0);
            if (bVar22 != 0) {
              iVar2 = 1;
            }
            iVar20 = 2 - (uint)((local_f4 & 0x40) == 0);
            if (bVar23 != 0) {
              iVar20 = 0;
            }
            if ((char)local_f4 < '\0') {
              iVar20 = 0;
            }
            lVar1 = *(longlong *)(param_1 + 0x28);
            local_d8 = DAT_14ca44d40;
            local_d0 = DAT_14ca44d68;
            if (lVar1 != 0) {
              if ((-1 < (int)param_5 && (local_f4 >> 0x18 & 1) != 0) &&
                 (*(char *)(lVar1 + 0x13821) == '\0')) {
                lVar14 = lVar1 + 0x3208;
                if (*(longlong *)(lVar1 + 0x3218) != 0) {
                  lVar14 = *(longlong *)(lVar1 + 0x3218);
                }
                param_1 = local_100;
                if ((*(uint *)(lVar14 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) == 0
                   ) {
                  lVar14 = lVar1 + 0x3228;
                  if (*(longlong *)(lVar1 + 0x3238) != 0) {
                    lVar14 = *(longlong *)(lVar1 + 0x3238);
                  }
                  if ((*(uint *)(lVar14 + (ulonglong)(param_5 >> 5) * 4) &
                      1 << ((byte)param_5 & 0x1f)) == 0) goto LAB_14029984d;
                  lVar14 = 0x31c8;
                }
                else {
                  lVar14 = 0x31d0;
                }
                local_d0 = *(undefined8 *)(lVar1 + lVar14);
              }
LAB_14029984d:
              if (local_108 != 0) {
                uVar6 = *(uint *)(*(longlong *)(local_108 + 0x218) + 0x158);
                if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar1 + 0x31c0))) {
                  puVar17 = &DAT_000031a8 + lVar1;
                  if (*(undefined1 **)(lVar1 + 0x31b8) != (undefined1 *)0x0) {
                    puVar17 = *(undefined1 **)(lVar1 + 0x31b8);
                  }
                  if ((*(uint *)(puVar17 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0)
                  {
                    local_d8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x3198) + (ulonglong)uVar6 * 8)
                    ;
                  }
                }
              }
            }
            pcVar13 = *(code **)(*plVar7 + 0x270);
            plVar11 = plVar7;
            if (pcVar13 == (code *)&LAB_1447f82f4) {
              plVar11 = (longlong *)plVar7[9];
              if (plVar11 == (longlong *)0x0) {
                plVar11 = (longlong *)plVar7[8];
                pcVar13 = *(code **)(*plVar11 + 0x408);
                if (pcVar13 != (code *)&LAB_14470b702) goto LAB_140299b7c;
                bVar22 = *(byte *)((longlong)plVar11 + 0x129);
                if (bVar22 == 1) {
                  bVar22 = ~*(byte *)((longlong)plVar11 + 0x1d6) & 1;
                }
                uVar6 = (uint)bVar22;
              }
              else {
                pcVar13 = *(code **)(*plVar11 + 0x408);
                if (pcVar13 != (code *)&LAB_14497e176) goto LAB_140299b7c;
                uVar6 = (uint)*(byte *)(plVar11 + 0x2b);
              }
            }
            else {
LAB_140299b7c:
              uVar6 = (*pcVar13)(plVar11);
            }
            local_128 = FUN_140299bde(uVar6 == 1,local_b8,local_a8);
            local_148 = (undefined8 *)(param_1 + 0x40);
            local_118 = &local_d8;
            local_140 = &local_b8;
            local_158 = local_e0;
            local_120 = 1;
            local_150 = plVar7;
            local_138 = iVar2;
            local_130 = iVar20;
            FUN_1400cf09c(param_1,local_f0,local_e8,lVar8);
            break;
          }
        }
        else {
          cVar3 = FUN_1447e4184(plVar7,0,-1 < sVar18);
          plVar12 = plVar11;
          if ((char)uVar5 == '\0' && cVar3 == '\x01') {
            FUN_14003fbd6();
            plVar12 = (longlong *)(**(code **)(*DAT_14caea080 + 0x2f0))();
            plVar7 = (longlong *)
                     (**(code **)(*plVar12 + 0x30))(plVar12,*(undefined4 *)(local_100 + 0x20));
          }
          param_1 = local_100;
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
          local_c8 = 0;
          uStack_c0 = 0;
          if (plVar7[2] == 0) {
            uVar19 = 0;
          }
          else {
            uVar21 = CONCAT71((int7)((ulonglong)plVar12 >> 8),
                              *(undefined1 *)(*(longlong *)(plVar7[2] + 0x28) + 0x246)) &
                     0xffffffffffffff40;
            uVar19 = (undefined4)CONCAT71((int7)(uVar21 >> 8),(byte)uVar21 >> 6);
          }
          uVar5 = *(undefined4 *)(local_100 + 0x20);
          local_e0 = plVar12;
          uVar9 = (**(code **)(*plVar15 + 0x30))(plVar15);
          local_148 = &local_c8;
          local_150 = &local_a8;
          local_158 = &local_b8;
          cVar3 = FUN_1447e3edc(plVar7,uVar9,uVar5,uVar19);
          lVar8 = local_108;
          param_2 = local_f0;
          param_3 = local_e8;
          param_4 = local_108;
          if (cVar3 != '\0') {
            iVar2 = 2 - (uint)((local_f4 >> 0xc & 1) != 0);
            if (bVar22 != 0) {
              iVar2 = 1;
            }
            iVar20 = 2 - (uint)((local_f4 & 0x40) == 0);
            if (bVar23 != 0) {
              iVar20 = 0;
            }
            if ((char)local_f4 < '\0') {
              iVar20 = 0;
            }
            lVar1 = *(longlong *)(param_1 + 0x28);
            local_d8 = DAT_14ca44d40;
            local_d0 = DAT_14ca44d68;
            if (lVar1 != 0) {
              if ((-1 < (int)param_5 && (local_f4 >> 0x18 & 1) != 0) &&
                 (*(char *)(lVar1 + 0x13821) == '\0')) {
                lVar14 = lVar1 + 0x3208;
                if (*(longlong *)(lVar1 + 0x3218) != 0) {
                  lVar14 = *(longlong *)(lVar1 + 0x3218);
                }
                param_1 = local_100;
                if ((*(uint *)(lVar14 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) == 0
                   ) {
                  lVar14 = lVar1 + 0x3228;
                  if (*(longlong *)(lVar1 + 0x3238) != 0) {
                    lVar14 = *(longlong *)(lVar1 + 0x3238);
                  }
                  if ((*(uint *)(lVar14 + (ulonglong)(param_5 >> 5) * 4) &
                      1 << ((byte)param_5 & 0x1f)) == 0) goto LAB_1402994fa;
                  lVar14 = 0x31c8;
                }
                else {
                  lVar14 = 0x31d0;
                }
                local_d0 = *(undefined8 *)(lVar1 + lVar14);
              }
LAB_1402994fa:
              if (local_108 != 0) {
                uVar6 = *(uint *)(*(longlong *)(local_108 + 0x218) + 0x158);
                if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar1 + 0x31c0))) {
                  puVar17 = &DAT_000031a8 + lVar1;
                  if (*(undefined1 **)(lVar1 + 0x31b8) != (undefined1 *)0x0) {
                    puVar17 = *(undefined1 **)(lVar1 + 0x31b8);
                  }
                  if ((*(uint *)(puVar17 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0)
                  {
                    local_d8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x3198) + (ulonglong)uVar6 * 8)
                    ;
                  }
                }
              }
            }
            pcVar13 = *(code **)(*plVar7 + 0x270);
            plVar11 = plVar7;
            if (pcVar13 == (code *)&LAB_1447f82f4) {
              plVar11 = (longlong *)plVar7[9];
              if (plVar11 == (longlong *)0x0) {
                plVar11 = (longlong *)plVar7[8];
                pcVar13 = *(code **)(*plVar11 + 0x408);
                if (pcVar13 != (code *)&LAB_14470b702) goto LAB_140299b35;
                bVar22 = *(byte *)((longlong)plVar11 + 0x129);
                if (bVar22 == 1) {
                  bVar22 = ~*(byte *)((longlong)plVar11 + 0x1d6) & 1;
                }
                uVar6 = (uint)bVar22;
              }
              else {
                pcVar13 = *(code **)(*plVar11 + 0x408);
                if (pcVar13 != (code *)&LAB_14497e176) goto LAB_140299b35;
                uVar6 = (uint)*(byte *)(plVar11 + 0x2b);
              }
            }
            else {
LAB_140299b35:
              uVar6 = (*pcVar13)(plVar11);
            }
            local_128 = FUN_140299bde(uVar6 == 1,local_b8,local_a8);
            local_148 = (undefined8 *)(param_1 + 0x40);
            local_118 = &local_d8;
            local_140 = &local_b8;
            local_158 = local_e0;
            local_120 = 0;
            local_150 = plVar7;
            local_138 = iVar2;
            local_130 = iVar20;
            FUN_1400cdeaa(param_1,local_f0,local_e8,lVar8);
            break;
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140299bde FUN_140299bde body=98 status=ok
// SIG undefined FUN_140299bde(void)

ulonglong FUN_140299bde(ulonglong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c760198 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (ulonglong)*(ushort *)(param_2 + 0xdc);
    }
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)*(uint *)(param_3 + 0xdc) << 0x10;
    }
    return uVar1 | (param_1 & 0xff) << 0x31 | uVar2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_2 + 0xdc);
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_3 + 0xdc) << 0x20;
  }
  return uVar2 | uVar1;
}



// FUNCTION 140299c46 FUN_140299c46 body=1233 status=ok
// SIG undefined FUN_140299c46(void)

void FUN_140299c46(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int *piVar18;
  undefined1 auStack_108 [40];
  longlong local_e0;
  uint *local_d8;
  uint *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  LARGE_INTEGER local_b8;
  undefined4 local_b0;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar15 = *param_1;
  local_c8 = 0;
  uStack_c0 = 0;
  iVar2 = (int)param_1[6];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1400bd2dc();
  }
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 1;
    iVar14 = 0;
    uVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)(param_1 + 2);
    if ((uint *)param_1[4] != (uint *)0x0) {
      puVar7 = (uint *)param_1[4];
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 1);
    }
    uVar12 = *puVar7;
    iVar14 = 0;
    uVar11 = 0;
    if (uVar12 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar10 = 0;
      }
      iVar14 = 0;
      do {
        if (uVar10 == uVar11) goto LAB_140299fde;
        iVar14 = iVar14 + 0x20;
        uVar12 = puVar7[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar12 == 0);
    }
    uVar10 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    local_d8 = (uint *)(param_1 + 2);
    uVar12 = 0xffffffff;
    local_e0 = lVar15;
    local_d0 = (uint *)(param_1 + 1);
    do {
      lVar15 = *(longlong *)(*(longlong *)(local_e0 + 8) + (longlong)iVar6 * 8);
      plVar17 = *(longlong **)(lVar15 + 0x18);
      lVar13 = *plVar17;
      if (lVar13 != 0) {
        if (DAT_14c87e718 == '\0') {
          iVar2 = *(int *)(lVar13 + 0x1c);
          if ((2 < iVar2) &&
             (bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar4 < 3)) {
            local_a8.QuadPart = 0x20100000001;
            uStack_a0 = 0x30100000101;
            local_98 = DAT_14c7585c8;
            local_94 = DAT_14c7585c8 | 0x200;
            local_90 = DAT_14c7585c8 | 0x100;
            local_8c = DAT_14c7585c8 | 0x300;
            local_88 = 0x20000000000;
            uStack_80 = 0x30000000100;
            if (*(byte *)((longlong)&local_a8 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
            goto LAB_140299f7f;
          }
          QueryPerformanceCounter(&local_a8);
          uStack_a0 = 0xffffffffffffffff;
          FUN_140056092(lVar13,&local_a8);
        }
        else {
LAB_140299f7f:
          FUN_140082318(lVar13);
        }
        plVar17 = *(longlong **)(lVar15 + 0x18);
      }
      if (plVar17[3] != 0) {
        FUN_1447850c6();
        uVar1 = uStack_c0;
        lVar13 = *(longlong *)(lVar15 + 0x18);
        lVar16 = (longlong)(int)uStack_c0;
        uVar5 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar5);
        if (uStack_c0._4_4_ < uVar5) {
          FUN_141780272(&local_c8,uVar1 & 0xffffffff);
        }
        *(undefined8 *)(local_c8 + lVar16 * 8) = *(undefined8 *)(lVar13 + 0x18);
        plVar17 = *(longlong **)(lVar15 + 0x18);
      }
      if (plVar17 != (longlong *)0x0) {
        FUN_144b1cf5b(plVar17[1],(int)plVar17[2]);
        if (plVar17[1] != 0) {
          FUN_1400020a8();
        }
        puVar3 = (undefined8 *)*plVar17;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar18 = (int *)(puVar3 + 1);
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (*piVar18 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        piVar18 = (int *)((longlong)plVar17 + (-8 - (ulonglong)*(uint *)(plVar17 + -1)));
        LOCK();
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (*piVar18 == 0) {
          if (*(longlong *)(piVar18 + 0x10) - (longlong)piVar18 == 0x10000) {
            lVar13 = DAT_14c872d30;
            if (DAT_14c872d30 == 0) {
              lVar13 = FUN_145bdc178();
            }
            FUN_140028df4(lVar13,piVar18);
          }
          else {
            FUN_144705e74(piVar18);
          }
        }
      }
      *(undefined8 *)(lVar15 + 0x18) = 0;
      uVar12 = uVar12 & ~(uint)uVar10;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = local_d8;
      }
      if (puVar7 == (uint *)0x0) {
        puVar7 = local_d0;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar11;
      lVar13 = (longlong)iVar6;
      uVar5 = puVar7[lVar13] & uVar12;
      lVar15 = local_e0;
      if (uVar5 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar16 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar7[lVar13 + lVar16 + 1];
          if (uVar5 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar9 - lVar13 == lVar16) goto LAB_140299fde;
        }
        uVar11 = (ulonglong)(iVar6 + (int)lVar16 + 1);
        uVar12 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140299fde:
  lVar13 = local_c8;
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) - (int)param_1[6];
  uVar10 = uStack_c0 & 0xffffffff;
  local_a8.QuadPart = 0;
  uStack_a0 = 0;
  if ((int)uStack_c0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  if (uVar10 == 0) {
    uStack_a0._0_4_ = 0;
  }
  else {
    FUN_144775d28(&local_a8,uVar10);
    lVar15 = 0;
    do {
      uVar11 = uStack_a0;
      lVar16 = (longlong)(int)uStack_a0;
      uVar12 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar12);
      if (uStack_a0._4_4_ < uVar12) {
        FUN_14741464c(&local_a8,uVar11 & 0xffffffff);
      }
      *(undefined8 *)(local_a8.QuadPart + lVar16 * 8) = *(undefined8 *)(lVar13 + lVar15);
      lVar15 = lVar15 + 8;
    } while (uVar10 << 3 != lVar15);
  }
  local_b8 = local_a8;
  local_b0 = (int)uStack_a0;
  FUN_14007658c(&DAT_14ca850c8,&local_b8,0);
  if (local_a8.QuadPart != 0) {
    FUN_1400020a8();
  }
  DAT_14ca83d40 = DAT_14ca83d40 - (int)param_1[6];
  if (DAT_14ca83d40 == 0) {
    local_a8.QuadPart = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_a8,3);
  }
  FUN_1402151b2(&local_c8);
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029a11a FUN_14029a11a body=4654 status=ok
// SIG undefined FUN_14029a11a(void)

void FUN_14029a11a(longlong *param_1,undefined8 param_2,code **param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  byte bVar23;
  byte bVar24;
  ulonglong uVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  code *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((char)param_1[0x2f] == '\x03') {
    lVar28 = param_1[0x1c2];
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar28 = (ulonglong)((uint)*(ushort *)(lVar28 + 0x288) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    local_d0 = (code *)((ulonglong)local_d0 & 0xffffffffffffff00);
    local_a8[0] = 0;
    FUN_1456bb102(&local_d0,param_1);
    puVar22 = &local_a0;
    FUN_1448729ea(lVar28,puVar22,&local_d0);
    if (local_80 == 3) {
      uVar8 = local_a0;
      bVar13 = 3;
    }
    else {
      puVar21 = &local_78;
      FUN_1400b56fe(puVar21,&local_a0,3);
      uVar8 = 0;
      if (local_58 != 0) {
        uVar8 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar21 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar21);
      }
      bVar13 = local_80;
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
        bVar13 = local_80;
      }
    }
    *(undefined4 *)(param_1 + 0x1c8) = uVar8;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar13 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar22 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar22);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar28 = param_1[0x1c2];
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    lVar28 = (ulonglong)((uint)*(ushort *)(lVar28 + 0x28a) * 0x50) + DAT_14c9a6588;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
    param_3 = &local_d0;
    local_d0 = (code *)((ulonglong)local_d0 & 0xffffffffffffff00);
    local_a8[0] = 0;
    FUN_1456bb102(param_3,param_1);
    puVar22 = &local_a0;
    FUN_1448729ea(lVar28,puVar22,param_3);
    if (local_80 == 3) {
      local_80 = 3;
      uVar8 = local_a0;
    }
    else {
      puVar21 = &local_78;
      param_3 = (code **)CONCAT71((int7)((ulonglong)param_3 >> 8),3);
      FUN_1400b56fe(puVar21,&local_a0,param_3);
      uVar8 = 0;
      if (local_58 != 0) {
        uVar8 = local_78;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar21 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar4)(puVar21);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xe44) = uVar8;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar22 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar4)(puVar22);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    FUN_1448173f8(local_a8);
    if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar28 = param_1[0x1c2];
    local_d0 = (code *)((ulonglong)local_d0 & 0xffffffffffffff00);
    local_a8[0] = 0;
    FUN_1456bb102(&local_d0,param_1);
    uVar8 = FUN_140a8b8c6(lVar28 + 0x418,&local_d0);
    *(undefined4 *)(param_1 + 0x1c9) = uVar8;
    FUN_1448173f8(local_a8);
    if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    lVar28 = param_1[0x1c2];
    if ((param_1[0x1cc] != *(longlong *)(lVar28 + 0x290)) ||
       ((int)param_1[0x1cd] != *(int *)(lVar28 + 0x298))) {
      param_1[0x1cc] = *(longlong *)(lVar28 + 0x290);
      *(undefined4 *)(param_1 + 0x1cd) = *(undefined4 *)(lVar28 + 0x298);
      param_1[0x1ce] = 0;
    }
    if (param_1 + 0x1cf != (longlong *)(lVar28 + 0x2a8)) {
      param_3 = (code **)(ulonglong)*(uint *)(lVar28 + 0x2e0);
      plVar9 = (longlong *)(lVar28 + 0x2a8);
      if (*(longlong **)(lVar28 + 0x2d8) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar28 + 0x2d8);
      }
      FUN_1400709d4(param_1 + 0x1cf,plVar9,param_3,*(undefined4 *)((longlong)param_1 + 0xeb4));
      lVar28 = param_1[0x1c2];
    }
    if (*(char *)(lVar28 + 0x4a4) != '\0') {
      uVar7 = rand();
      iVar6 = (int)(((float)(uVar7 & 0x7fff) / 32767.0) * 2.1474836e+09);
      iVar18 = 0x7ffffffe;
      if (iVar6 < 0x7ffffffe) {
        iVar18 = iVar6;
      }
      *(int *)((longlong)param_1 + 0x1014) = iVar18 + 1;
      lVar28 = param_1[0x1c2];
    }
  }
  else {
    lVar28 = param_1[0x1c2];
    *(byte *)((longlong)param_1 + 99) =
         *(byte *)((longlong)param_1 + 99) & 0xf7 | (*(byte *)(lVar28 + 0x590) & 1) << 3;
  }
  uVar25 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(char *)(lVar28 + 600) << 2) &
           0xffffffffffffff04;
  bVar13 = *(byte *)(param_1 + 0x1db);
  bVar3 = *(byte *)(param_1 + 0x1dc);
  bVar14 = (byte)uVar25;
  *(byte *)(param_1 + 0x1db) = bVar13 & 0xfb | bVar14;
  uVar25 = CONCAT71((int7)(uVar25 >> 8),*(char *)(lVar28 + 600) << 2) & 0xffffffffffffff08;
  bVar15 = (byte)uVar25;
  *(byte *)(param_1 + 0x1db) = bVar13 & 0xf3 | bVar14 | bVar15;
  uVar25 = CONCAT71((int7)(uVar25 >> 8),*(char *)(lVar28 + 600) << 2) & 0xffffffffffffff10;
  bVar16 = (byte)uVar25;
  *(byte *)(param_1 + 0x1db) = bVar13 & 0xe3 | bVar14 | bVar15 | bVar16;
  uVar25 = CONCAT71((int7)(uVar25 >> 8),*(char *)(lVar28 + 600) << 2) & 0xffffffffffffff20;
  bVar24 = (byte)uVar25;
  *(byte *)(param_1 + 0x1db) = bVar13 & 0xc3 | bVar14 | bVar15 | bVar16 | bVar24;
  uVar25 = CONCAT71((int7)(uVar25 >> 8),*(char *)(lVar28 + 600) << 2) & 0xffffffffffffff40;
  bVar23 = (byte)uVar25;
  *(byte *)(param_1 + 0x1db) = bVar13 & 0x83 | bVar14 | bVar15 | bVar16 | bVar24 | bVar23;
  uVar25 = CONCAT71((int7)(uVar25 >> 8),*(char *)(lVar28 + 0x300) << 6) & 0xffffffffffffff80;
  *(byte *)(param_1 + 0x1db) =
       bVar13 & 3 | bVar14 | bVar15 | bVar16 | bVar24 | bVar23 | (byte)uVar25;
  bVar13 = *(byte *)(lVar28 + 600) >> 5 & 1;
  *(byte *)(param_1 + 0x1dc) = bVar3 & 0xfe | bVar13;
  bVar14 = *(byte *)(lVar28 + 600) >> 5 & 2;
  *(byte *)(param_1 + 0x1dc) = bVar3 & 0xfc | bVar13 | bVar14;
  bVar15 = *(byte *)(lVar28 + 600) >> 5 & 4;
  *(byte *)(param_1 + 0x1dc) = bVar3 & 0xf8 | bVar13 | bVar14 | bVar15;
  bVar16 = (*(byte *)(lVar28 + 0x259) & 1) << 4;
  *(byte *)(param_1 + 0x1dc) = bVar3 & 0xe8 | bVar13 | bVar14 | bVar15 | bVar16;
  if ((param_1[0x1e5] != *(longlong *)(lVar28 + 0x460)) ||
     (uVar25 = (ulonglong)*(uint *)(param_1 + 0x1e6),
     *(uint *)(param_1 + 0x1e6) != *(uint *)(lVar28 + 0x468))) {
    param_1[0x1e5] = *(longlong *)(lVar28 + 0x460);
    *(undefined4 *)(param_1 + 0x1e6) = *(undefined4 *)(lVar28 + 0x468);
    param_1[0x1e7] = 0;
  }
  if ((param_1[0x1eb] != *(longlong *)(lVar28 + 0x150)) ||
     (uVar25 = (ulonglong)*(uint *)(param_1 + 0x1ec),
     *(uint *)(param_1 + 0x1ec) != *(uint *)(lVar28 + 0x158))) {
    param_1[0x1eb] = *(longlong *)(lVar28 + 0x150);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(lVar28 + 0x158);
    param_1[0x1ed] = 0;
  }
  if ((param_1[0x1e2] != *(longlong *)(lVar28 + 0x260)) ||
     (uVar25 = (ulonglong)*(uint *)(param_1 + 0x1e3),
     *(uint *)(param_1 + 0x1e3) != *(uint *)(lVar28 + 0x268))) {
    param_1[0x1e2] = *(longlong *)(lVar28 + 0x260);
    *(undefined4 *)(param_1 + 0x1e3) = *(undefined4 *)(lVar28 + 0x268);
    param_1[0x1e4] = 0;
  }
  uVar25 = CONCAT71((int7)(uVar25 >> 8),(char)param_1[0x228]) & 0xfffffffffffffffe;
  *(byte *)(param_1 + 0x228) = (byte)uVar25 | *(byte *)(lVar28 + 0x478) >> 1 & 1;
  uVar25 = CONCAT71((int7)(uVar25 >> 8),*(undefined1 *)((longlong)param_1 + 0xed9)) &
           0xfffffffffffffffe;
  *(byte *)((longlong)param_1 + 0xed9) = (byte)uVar25 | *(byte *)(lVar28 + 0x478) >> 2 & 1;
  bVar24 = (*(byte *)(lVar28 + 0x278) & 1) << 3;
  *(byte *)(param_1 + 0x1dc) = bVar3 & 0xe0 | bVar13 | bVar14 | bVar15 | bVar16 | bVar24;
  uVar25 = CONCAT71((int7)(uVar25 >> 8),*(undefined1 *)((longlong)param_1 + 0x1151)) &
           0xfffffffffffffff7;
  *(byte *)((longlong)param_1 + 0x1151) = (byte)uVar25 | *(byte *)(lVar28 + 0x250) >> 3 & 8;
  *(byte *)(param_1 + 0x22a) = *(byte *)(lVar28 + 0x250) >> 2 & 1;
  *(undefined2 *)((longlong)param_1 + 0x1184) = 0;
  pwVar26 = (wchar_t *)
            (CONCAT71((int7)(uVar25 >> 8),*(byte *)(lVar28 + 0x590) >> 1) & 0xffffffffffffff01);
  bVar13 = *(byte *)(param_1 + 0xc);
  *(byte *)(param_1 + 0xc) = (bVar13 & 0xfe) + (char)pwVar26;
  if (((char)pwVar26 != '\0') &&
     ((((*(byte *)(lVar28 + 0x590) & 4) != 0 || ((*(byte *)(lVar28 + 0x300) & 1) != 0)) ||
      (uVar25 = CONCAT71((int7)((ulonglong)pwVar26 >> 8),*(undefined1 *)(lVar28 + 400)) &
                0xffffffffffffff01, bVar24 = (byte)uVar25 | bVar24,
      pwVar26 = (wchar_t *)CONCAT71((int7)(uVar25 >> 8),bVar24), bVar24 != 0)))) {
    *(byte *)(param_1 + 0xc) = bVar13 & 0xfe;
  }
  if ((*(byte *)(lVar28 + 0x250) & 1) != 0) {
    plVar9 = (longlong *)param_1[0x36];
    if (plVar9 == (longlong *)0x0) {
LAB_14029adbc:
      plVar9 = (longlong *)FUN_14492b4b4(param_1[0x2d]);
      if (plVar9 == (longlong *)0x0) goto LAB_14029a641;
    }
    else {
      if (DAT_14cb223d8 == 0) {
        local_130 = &local_d0;
        local_d0 = FUN_1449e2820;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_1427b09ee;
        local_138 = &LAB_147f29feb;
        local_140 = FUN_1464384fe;
        local_148 = L"Engine";
        local_150 = 0;
        local_158 = 0x10004001;
        local_160 = 8;
        local_168 = 0x28;
        pwVar26 = (wchar_t *)&DAT_14cb223d8;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb223d8);
      if (plVar9 == (longlong *)0x0) goto LAB_14029adbc;
      if (DAT_14cb223d8 == 0) {
        local_130 = &local_d0;
        local_d0 = FUN_1449e2820;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_1427b09ee;
        local_138 = &LAB_147f29feb;
        local_140 = FUN_1464384fe;
        local_148 = L"Engine";
        local_150 = 0;
        local_158 = 0x10004001;
        local_160 = 8;
        local_168 = 0x28;
        pwVar26 = (wchar_t *)&DAT_14cb223d8;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb223d8);
      if (((plVar9 == plVar10) || (plVar10 == (longlong *)0x0)) ||
         (plVar9 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10), plVar9 == (longlong *)0x0))
      goto LAB_14029adbc;
    }
    local_d0 = (code *)plVar9[4];
    local_c0 = (longlong *)plVar9[6];
    local_c8 = (longlong *)CONCAT62(local_c8._2_6_,(short)plVar9[5]);
    FUN_140365c30(param_1 + 0x172,&local_d0);
    local_d0 = (code *)0x0;
    local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
    pwVar26 = (wchar_t *)0x0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    pcVar4 = local_d0;
    local_c8 = (longlong *)CONCAT44(local_c8._4_4_,3);
    *(undefined ***)local_d0 = &PTR_LAB_14ac8da20;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar28 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar28 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar28;
    *(longlong *)(local_d0 + 0x10) = lVar12;
    *(undefined ***)local_d0 = &PTR_FUN_14b422610;
    *(longlong *)(local_d0 + 0x18) = 0;
    iVar18 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar7 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_d0 + 0x18) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar28 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar28 = 0;
      }
      iVar18 = *(int *)(lVar28 + 0x10);
      if (*(int *)(lVar28 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar29 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar29) {
          pwVar26 = L"UObject serial numbers overflowed (trying to allocate serial number %d).";
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar18 = *(int *)(lVar28 + 0x10);
        bVar29 = iVar18 == 0;
        if (bVar29) {
          *(int *)(lVar28 + 0x10) = iVar6;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar29) {
          iVar18 = iVar6;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar18;
    *(code **)(pcVar4 + 0x20) = FUN_1461ad342;
    *(undefined4 *)(pcVar4 + 0x28) = 0;
    if (((int)local_c8 == 0) || (local_d0 == (code *)0x0)) {
LAB_14029b0ed:
      if ((int)local_c8 == 0) {
        lVar28 = 0;
        goto LAB_14029a631;
      }
      if (local_d0 != (code *)0x0) {
        lVar28 = 0;
        (*(code *)**(undefined8 **)local_d0)(local_d0,0);
        pwVar26 = (wchar_t *)0x0;
        FUN_1446efa72(&local_d0,0,0,0x10);
        goto LAB_14029a61e;
      }
      lVar28 = 0;
    }
    else {
      cVar5 = (**(code **)(*(longlong *)local_d0 + 0x30))();
      if (cVar5 == '\0') {
        goto LAB_14029b0ed;
      }
      if (*(int *)((longlong)plVar9 + 0x14) < 1) {
        iVar18 = (int)plVar9[1];
        iVar6 = (int)plVar9[2] + -1;
        *(int *)(plVar9 + 2) = iVar6;
        if (iVar6 <= iVar18) {
          iVar6 = iVar18;
          if (0 < iVar18) {
            iVar19 = 0;
            do {
              if (((*(int *)(*plVar9 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                  (plVar10 = *(longlong **)(*plVar9 + (longlong)iVar19 * 0x10),
                  plVar10 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar10 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar9,iVar19);
                FUN_14005b248(plVar9);
              }
              else {
                iVar19 = iVar19 + 1;
              }
              iVar6 = (int)plVar9[1];
            } while (iVar19 < iVar6);
          }
          iVar19 = 2;
          if (2 < iVar6 * 2) {
            iVar19 = iVar6 * 2;
          }
          *(int *)(plVar9 + 2) = iVar19;
          if ((iVar19 < iVar18) && (*(int *)((longlong)plVar9 + 0xc) != iVar6)) {
            FUN_14045812c();
          }
        }
      }
      lVar28 = 0;
      if (((int)local_c8 != 0) && (local_d0 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_d0 + 0x38))(local_d0,&local_78);
        lVar28 = CONCAT44(uStack_74,local_78);
      }
      iVar18 = (int)plVar9[1];
      *(uint *)(plVar9 + 1) = iVar18 + 1U;
      if (*(uint *)((longlong)plVar9 + 0xc) < iVar18 + 1U) {
        FUN_1447a71f6(plVar9,iVar18);
      }
      lVar12 = *plVar9;
      lVar20 = (longlong)iVar18 * 0x10;
      *(undefined8 *)(lVar12 + lVar20) = 0;
      *(undefined4 *)(lVar12 + 8 + lVar20) = 0;
      *(code **)(lVar12 + lVar20) = local_d0;
      local_d0 = (code *)0x0;
      *(int *)(lVar12 + 8 + lVar20) = (int)local_c8;
LAB_14029a61e:
      local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
LAB_14029a631:
      if (local_d0 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    param_1[0x171] = lVar28;
  }
LAB_14029a641:
  *(undefined1 *)((longlong)param_1 + 0xbe3) = *(undefined1 *)(param_1[0x1c2] + 0x413);
  if ((*(char *)(param_1[0x1c2] + 0xe4) == '\x01') && (param_1[0x36] != 0)) {
    FUN_14029b398(param_1,param_1[0x36] + 0x70);
  }
  if ((char)param_1[0x2f] == '\x03') {
    puVar17 = (undefined8 *)param_1[0x36];
    if (puVar17 != (undefined8 *)0x0) {
      uVar11 = FUN_14018b740();
      pwVar26 = (wchar_t *)*puVar17;
      plVar9 = (longlong *)(**(code **)(pwVar26 + 0x144))(puVar17,uVar11);
      if (plVar9 != (longlong *)0x0) {
        uVar11 = FUN_14018b740();
        plVar10 = (longlong *)FUN_144718840(plVar9,uVar11);
        if ((plVar9 != plVar10) && (plVar10 != (longlong *)0x0)) {
          if ((*(char *)(param_1[0x1c2] + 1000) == '\x01') &&
             (lVar28 = (**(code **)(*plVar10 + 0x48))(plVar10), lVar28 != 0)) {
            *(undefined4 *)(param_1 + 0x16b) = *(undefined4 *)(lVar28 + 8);
            if ((param_1[0x16c] != *(longlong *)(lVar28 + 0x10)) ||
               ((int)param_1[0x16d] != *(int *)(lVar28 + 0x18))) {
              param_1[0x16c] = *(longlong *)(lVar28 + 0x10);
              *(undefined4 *)(param_1 + 0x16d) = *(undefined4 *)(lVar28 + 0x18);
              param_1[0x16e] = 0;
            }
            param_1[0x16f] = *(longlong *)(lVar28 + 0x28);
            uVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
            pwVar26 = (wchar_t *)param_1[0x7e];
            (**(code **)(pwVar26 + 0x10))(param_1 + 0x7e,uVar8);
            goto LAB_14029a682;
          }
          uVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
          pwVar26 = (wchar_t *)param_1[0x7e];
          (**(code **)(pwVar26 + 0x10))(param_1 + 0x7e,uVar8);
        }
      }
    }
    lVar28 = param_1[0x1c2];
    *(undefined4 *)(param_1 + 0x16b) = *(undefined4 *)(lVar28 + 0x3c0);
    if ((param_1[0x16c] != *(longlong *)(lVar28 + 0x3c8)) ||
       ((int)param_1[0x16d] != *(int *)(lVar28 + 0x3d0))) {
      param_1[0x16c] = *(longlong *)(lVar28 + 0x3c8);
      *(undefined4 *)(param_1 + 0x16d) = *(undefined4 *)(lVar28 + 0x3d0);
      param_1[0x16e] = 0;
    }
    param_1[0x16f] = *(longlong *)(lVar28 + 0x3e0);
  }
LAB_14029a682:
  if (((*(byte *)(param_1[0x1c2] + 0x300) & 1) == 0) || (*(int *)(param_1[0x1c2] + 0x398) < 1))
  goto LAB_14029a696;
  lVar28 = (**(code **)(*param_1 + 0x638))(param_1);
  if ((lVar28 == 0) ||
     ((lVar12 = FUN_14029b478(), lVar12 == 0 || (*(int *)(lVar28 + 0x38) < *(int *)(lVar12 + 0x38)))
     )) {
    lVar20 = 0;
  }
  else {
    lVar20 = 0;
    if (*(longlong *)(*(longlong *)(lVar28 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
        lVar12 + 0x30) {
      lVar20 = lVar28;
    }
  }
  pwVar26 = (wchar_t *)0x0;
  FUN_140005f6c(param_1 + 0x124,lVar20,0,0);
  plVar9 = (longlong *)param_1[0x124];
  plVar10 = (longlong *)param_1[0x125];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
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
  if (plVar9 != (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
    plStack_e0 = (longlong *)0x0;
    if ((param_1 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
      if (param_1 != (longlong *)0x0) goto LAB_14029ad3a;
      plStack_e0 = (longlong *)0x0;
    }
    else {
      FUN_1456cec3c(param_1);
LAB_14029ad3a:
      plStack_e0 = param_1 + 0x7c;
    }
    local_e8 = param_1;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    *(byte *)((longlong)plVar9 + 0x7d) =
         *(byte *)((longlong)plVar9 + 0x7d) & 0x7f | *(char *)(param_1[0x1c2] + 0x388) << 7;
  }
  (**(code **)(*param_1 + 0x640))(param_1);
  (**(code **)(*param_1 + 0x648))(param_1);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_14029a696:
  if (param_1[0x103] == 0) {
    if ((*(longlong *)(param_1[0x1c2] + 0x4e0) == 0) ||
       (0xfffffffd < *(int *)(param_1[0x1c2] + 0x4e8) - 1U)) {
      uVar11 = FUN_1447210f0();
      puVar17 = &local_118;
      local_118 = 0;
      local_110 = 0xaaad1010;
      local_108 = 0;
    }
    else {
      uVar11 = FUN_1447210f0(param_1);
      local_100 = *(undefined8 *)(param_1[0x1c2] + 0x4e0);
      puVar17 = &local_100;
      local_f8 = *(undefined4 *)(param_1[0x1c2] + 0x4e8);
      local_f0 = 0;
    }
    pwVar26 = (wchar_t *)(param_1 + 0x7b);
    local_168 = CONCAT31(local_168._1_3_,1);
    FUN_14078bff4(&local_d0,puVar17,pwVar26,uVar11);
    plVar9 = local_c8;
    if ((code **)(param_1 + 0x103) != &local_d0) {
      param_1[0x103] = (longlong)local_d0;
      local_d0 = (code *)0x0;
      plVar10 = (longlong *)param_1[0x104];
      if (local_c8 != plVar10) {
        local_c8 = (longlong *)0x0;
        param_1[0x104] = (longlong)plVar9;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar10 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
    }
    plVar9 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_c8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  bVar13 = *(byte *)(param_1[0x1c2] + 0x3e9);
  cVar5 = *(char *)(param_1[0x1c2] + 0x3ea);
  uVar25 = CONCAT71((int7)((ulonglong)pwVar26 >> 8),cVar5);
  if ((cVar5 != '\0') || ((bVar13 & 1) != 0)) {
    uVar27 = uVar25 & 0xffffffff;
    FUN_14035925a(param_1 + 0x128,param_1,uVar25,
                  CONCAT71((int7)(uVar27 >> 8),~(byte)uVar27 | bVar13) & 0xffffffffffffff01);
  }
  if ((local_50 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14029b398 FUN_14029b398 body=198 status=ok
// SIG undefined FUN_14029b398(void)

void FUN_14029b398(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 4);
  FUN_14020a6cc(param_1 + 0x70,1);
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014029b45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,5);
    return;
  }
  uVar6 = (uint)uVar1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
    puVar3 = &DAT_14c998070;
    if (DAT_14c998080 != (undefined *)0x0) {
      puVar3 = DAT_14c998080;
    }
    if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
      lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
      puVar4 = *(uint **)(lVar2 + 0x18);
      if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
        puVar4 = (uint *)(lVar2 + 8);
      }
      *puVar4 = *puVar4 | 0x20;
      *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
    }
  }
  return;
}



// FUNCTION 14029b45e FUN_14029b45e body=25 status=ok
// SIG undefined FUN_14029b45e(void)

void FUN_14029b45e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140ccfc10();
  FUN_14000e0c8(lVar1 + 0xe58);
  return;
}



// FUNCTION 14029b478 FUN_14029b478 body=57 status=ok
// SIG undefined FUN_14029b478(void)

void FUN_14029b478(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c390 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c390 = FUN_140002ddd(FUN_1464d506e,uVar1,L"GbxDamageState");
  }
  return;
}



// FUNCTION 14029b4b2 FUN_14029b4b2 body=258 status=ok
// SIG undefined FUN_14029b4b2(void)

void FUN_14029b4b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if ((*(longlong *)(param_1 + 0x920) != 0) && ((*(byte *)(param_1 + 0x87d) & 1) == 0)) {
      FUN_14036a960(param_1 + 0x828,*(longlong *)(param_1 + 0xe10) + 0x390);
      lVar3 = *(longlong *)(param_1 + 0x920);
      plVar4 = *(longlong **)(param_1 + 0x928);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      if (lVar3 != 0) {
        FUN_14036ce6a(*(longlong *)(param_1 + 0xe10) + 0x3a0,lVar3);
        FUN_140ecea3e(lVar3);
      }
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
                    /* WARNING: Could not recover jumptable at 0x00014029b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x10))(plVar4);
            return;
          }
        }
      }
    }
  }
  else if (((*(byte *)(param_1 + 0x87d) & 1) == 0) ||
          (*(char *)(param_1 + 0x87c) != *(char *)(param_1 + 0x87e))) {
    FUN_140ecec32(param_1 + 0x828);
    return;
  }
  return;
}



// FUNCTION 14029b5c2 FUN_14029b5c2 body=116 status=ok
// SIG undefined FUN_14029b5c2(void)

undefined8 * FUN_14029b5c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b359550;
  FUN_14029b636(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b3593b0;
  FUN_14029e95e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14029b636 FUN_14029b636 body=75 status=ok
// SIG undefined FUN_14029b636(void)

void FUN_14029b636(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14029b682 FUN_14029b682 body=76 status=ok
// SIG undefined FUN_14029b682(void)

undefined8 FUN_14029b682(longlong *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x388))();
    cVar1 = FUN_14029b744(uVar2,DAT_14c760db4);
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014029b6c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x448))(param_1,param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 14029b6e0 FUN_14029b6e0 body=100 status=ok
// SIG undefined FUN_14029b6e0(void)

undefined1 FUN_14029b6e0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = (**(code **)(*param_2 + 0x318))(param_2,param_3);
  if ((*(byte *)(lVar2 + 0xd0) & 4) == 0) {
    if ((longlong)(int)param_1[1] == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*param_1 + 8 + lVar2) == param_3) {
          return 1;
        }
        bVar3 = (longlong)(int)param_1[1] * 0x30 + -0x30 != lVar2;
        uVar1 = 0;
        lVar2 = lVar2 + 0x30;
      } while (bVar3);
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14029b744 FUN_14029b744 body=104 status=ok
// SIG undefined FUN_14029b744(void)

bool FUN_14029b744(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  iVar3 = FUN_1401a8bec(0);
  if (0 < (longlong)(int)param_1[1]) {
    lVar5 = 0;
    iVar4 = 0;
    do {
      lVar2 = *(longlong *)(*param_1 + lVar5 * 8);
      lVar6 = (longlong)*(int *)(lVar2 + 0x18);
      if (0 < lVar6) {
        lVar7 = 0;
        do {
          iVar1 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x40 + lVar7);
          if (iVar4 < iVar1) {
            iVar4 = iVar1;
          }
          lVar7 = lVar7 + 0xf8;
        } while (lVar6 * 0xf8 - lVar7 != 0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != (int)param_1[1]);
  }
  return iVar3 < iVar4;
}



// FUNCTION 14029b7ac FUN_14029b7ac body=99 status=ok
// SIG undefined FUN_14029b7ac(void)

bool FUN_14029b7ac(longlong param_1,char param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  
  if (param_2 != '\0') {
    pcVar3 = (char *)FUN_14029b810(param_1 + 0x20);
    *pcVar3 = param_2;
    *(undefined8 *)(pcVar3 + 8) = *param_3;
    plVar2 = (longlong *)param_3[1];
    plVar4 = *(longlong **)(pcVar3 + 0x10);
    if (plVar4 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(pcVar3 + 0x10);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      *(longlong **)(pcVar3 + 0x10) = plVar2;
    }
  }
  return param_2 != '\0';
}



// FUNCTION 14029b810 FUN_14029b810 body=70 status=ok
// SIG undefined FUN_14029b810(void)

longlong FUN_14029b810(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1456ed016(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_14029b856(lVar2,1);
  return lVar2;
}



// FUNCTION 14029b856 FUN_14029b856 body=23 status=ok
// SIG undefined FUN_14029b856(void)

void FUN_14029b856(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 14029b86e FUN_14029b86e body=20 status=ok
// SIG undefined FUN_14029b86e(void)

undefined8 FUN_14029b86e(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14029b888 FUN_14029b888 body=279 status=ok
// SIG undefined FUN_14029b888(void)

void FUN_14029b888(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  char *local_30;
  char *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar2 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar2 == 0) {
    FUN_14029b9a0(param_1[0x15],0);
  }
  else {
    local_30 = "TtHavokDirectProcessingTask";
    local_28 = "";
    FUN_144b3f370(lVar2,&local_30);
    FUN_14029b9a0(param_1[0x15],0);
    local_30 = "Et";
    local_28 = "";
    FUN_144b3f260(lVar2,&local_30);
  }
  if (param_1[0x15] != 0) {
    FUN_144b3f230();
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029b9a0 FUN_14029b9a0 body=3869 status=ok
// SIG undefined FUN_14029b9a0(void)

/* WARNING: Control flow encountered bad instruction data */

void FUN_14029b9a0(longlong param_1,char param_2)

{
  int *piVar1;
  short *psVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  byte bVar18;
  char cVar19;
  ushort uVar20;
  short sVar21;
  int iVar22;
  int iVar23;
  DWORD DVar24;
  DWORD DVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  longlong lVar28;
  undefined4 *puVar29;
  uint *puVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  int iVar35;
  undefined8 *puVar36;
  int iVar37;
  longlong lVar38;
  uint uVar39;
  longlong lVar40;
  longlong lVar41;
  bool bVar42;
  undefined1 auStack_198 [35];
  char local_175;
  uint local_174;
  longlong *local_170;
  uint local_164;
  longlong local_160;
  int local_154;
  LPCRITICAL_SECTION local_150;
  longlong local_148;
  LPCRITICAL_SECTION local_140;
  int local_134;
  undefined8 *local_130;
  undefined8 *local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  char local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_134 = FUN_144bf9540();
  if (local_134 == 0) {
    FUN_144b3e9f0(&local_d8,1);
  }
  local_175 = param_2;
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x220) = 1;
    bVar42 = true;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar22 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar22 != 2)) {
      if (iVar22 == 1) {
        DVar24 = FUN_140ad26c0();
        DVar25 = GetCurrentThreadId();
        bVar42 = DVar24 == DVar25;
      }
      else {
        bVar42 = false;
      }
    }
    LOCK();
    *(bool *)(param_1 + 0x38) = bVar42;
    UNLOCK();
  }
  lVar41 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar28 = *(longlong *)(lVar41 + 0xf0);
  if (lVar28 == 0) {
    lVar28 = FUN_144b3f4a0();
    *(longlong *)(lVar41 + 0xf0) = lVar28;
  }
  cVar19 = local_175;
  local_120 = lVar28;
  if (*(longlong *)(lVar28 + 0x3e0) == 0) {
    local_100 = 0;
  }
  else {
    local_d8 = "TtHavokTasks";
    uStack_d0 = "";
    FUN_144b3f370();
    local_100 = *(undefined8 *)(lVar28 + 0x3e0);
  }
  local_108 = param_1 + 0x18;
  local_f0 = 0;
  local_f8 = 0;
  local_140 = (LPCRITICAL_SECTION)(param_1 + 0x188);
  local_170 = (longlong *)(param_1 + 0x40);
  local_150 = (LPCRITICAL_SECTION)(param_1 + 0x1d8);
  local_148 = param_1 + 0x208;
  lVar41 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_128 = (undefined8 *)(lVar41 + 0x308);
  local_130 = (undefined8 *)(lVar41 + 0x310);
  local_110 = 0x527800b400;
  local_118 = (longlong *)(lVar41 + 0x2b8);
  local_164 = 0;
  lVar41 = 0;
  local_174 = 0;
LAB_14029bb59:
  EnterCriticalSection(local_140);
  if (lVar41 != 0) {
    if ((*(char *)(lVar41 + 8) == '\x01') && (*(ushort *)(lVar41 + 4) != 0)) {
      LOCK();
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - (uint)*(ushort *)(lVar41 + 4);
      UNLOCK();
      *(undefined2 *)(lVar41 + 4) = 0;
      iVar22 = *(int *)(param_1 + 0x48);
      if (0 < (longlong)iVar22) {
        lVar28 = *local_170;
        uVar32 = 1;
        uVar39 = 2;
        lVar38 = 0;
        do {
          if (lVar41 == *(longlong *)(lVar28 + uVar32 * 8)) {
            uVar26 = -lVar38;
            if ((uint)lVar38 + iVar22 != 1) {
              lVar40 = (longlong)(iVar22 + -1) * 0x10;
              uVar31 = *(uint *)(lVar28 + lVar40);
              puVar29 = (undefined4 *)(lVar28 + lVar40);
              uVar11 = puVar29[1];
              uVar12 = puVar29[2];
              uVar13 = puVar29[3];
              uVar6 = *(uint *)(lVar28 + -8 + uVar32 * 8);
              puVar3 = (undefined4 *)(lVar28 + -8 + uVar32 * 8);
              *puVar3 = *puVar29;
              puVar3[1] = uVar11;
              puVar3[2] = uVar12;
              puVar3[3] = uVar13;
              iVar22 = *(int *)(param_1 + 0x48) + -1;
              *(int *)(param_1 + 0x48) = iVar22;
              if (uVar6 <= uVar31) {
                if (((int)uVar39 < iVar22) &&
                   (iVar37 = (int)uVar32, uVar32 = uVar32 & 0xffffffff,
                   *(uint *)(*local_170 + (longlong)(int)uVar39 * 0x10) <=
                   *(uint *)(*local_170 + (longlong)iVar37 * 0x10))) {
                  uVar32 = (ulonglong)uVar39;
                }
                goto LAB_14029c590;
              }
              uVar39 = ~(uint)lVar38;
              goto LAB_14029c6fb;
            }
            *(int *)(param_1 + 0x48) = (int)uVar26;
            break;
          }
          uVar32 = uVar32 + 2;
          lVar38 = lVar38 + -1;
          uVar39 = uVar39 + 2;
        } while (iVar22 + lVar38 != 0);
      }
    }
    goto LAB_14029bbdb;
  }
  goto LAB_14029bf44;
LAB_14029c6fb:
  uVar39 = (int)uVar39 >> 1;
  if ((int)uVar39 < 0) goto LAB_14029bbdb;
  iVar22 = (int)uVar26;
  uVar26 = (ulonglong)uVar39;
  lVar28 = *local_170;
  lVar38 = (longlong)iVar22 * 0x10;
  if (*(uint *)(lVar28 + (ulonglong)uVar39 * 0x10) < *(uint *)(lVar28 + lVar38)) goto LAB_14029bbdb;
  puVar34 = (undefined8 *)(lVar38 + lVar28);
  puVar36 = (undefined8 *)((ulonglong)uVar39 * 0x10 + lVar28);
  pcVar16 = (char *)*puVar34;
  pcVar17 = (char *)puVar34[1];
  uVar27 = puVar36[1];
  *puVar34 = *puVar36;
  puVar34[1] = uVar27;
  local_d8._0_4_ = SUB84(pcVar16,0);
  local_d8._4_4_ = (undefined4)((ulonglong)pcVar16 >> 0x20);
  uStack_d0._0_4_ = (int)pcVar17;
  uStack_d0._4_4_ = (uint)((ulonglong)pcVar17 >> 0x20);
  *(undefined4 *)puVar36 = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar36 + 4) = local_d8._4_4_;
  *(int *)(puVar36 + 1) = (int)uStack_d0;
  *(uint *)((longlong)puVar36 + 0xc) = uStack_d0._4_4_;
  uVar39 = uVar39 - 1;
  local_d8 = pcVar16;
  uStack_d0 = pcVar17;
  goto LAB_14029c6fb;
LAB_14029c590:
  iVar37 = (int)uVar32;
  if (iVar37 < iVar22) {
    iVar35 = (int)uVar26;
    uVar26 = uVar32 & 0xffffffff;
    lVar28 = *local_170;
    lVar38 = (longlong)iVar35 * 0x10;
    if (*(uint *)(lVar28 + lVar38) <= *(uint *)(lVar28 + (longlong)iVar37 * 0x10))
    goto LAB_14029bbdb;
    puVar36 = (undefined8 *)(lVar38 + lVar28);
    puVar34 = (undefined8 *)((longlong)iVar37 * 0x10 + lVar28);
    pcVar16 = (char *)*puVar36;
    pcVar17 = (char *)puVar36[1];
    uVar27 = puVar34[1];
    *puVar36 = *puVar34;
    puVar36[1] = uVar27;
    local_d8._0_4_ = SUB84(pcVar16,0);
    local_d8._4_4_ = (undefined4)((ulonglong)pcVar16 >> 0x20);
    uStack_d0._0_4_ = (int)pcVar17;
    uStack_d0._4_4_ = (uint)((ulonglong)pcVar17 >> 0x20);
    *(undefined4 *)puVar34 = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar34 + 4) = local_d8._4_4_;
    *(int *)(puVar34 + 1) = (int)uStack_d0;
    *(uint *)((longlong)puVar34 + 0xc) = uStack_d0._4_4_;
    uVar39 = iVar37 * 2 + 1;
    uVar32 = (ulonglong)uVar39;
    uVar31 = iVar37 * 2 + 2;
    local_d8 = pcVar16;
    uStack_d0 = pcVar17;
    if (((int)uVar31 < *(int *)(param_1 + 0x48)) &&
       (*(uint *)(*local_170 + (longlong)(int)uVar31 * 0x10) <=
        *(uint *)(*local_170 + (longlong)(int)uVar39 * 0x10))) {
      uVar32 = (ulonglong)uVar31;
    }
    goto LAB_14029c590;
  }
LAB_14029bbdb:
  iVar22 = *(ushort *)(lVar41 + 6) - 1;
  uVar20 = (ushort)iVar22;
  *(ushort *)(lVar41 + 6) = uVar20;
  uVar20 = uVar20 | *(ushort *)(lVar41 + 4);
  uVar32 = (ulonglong)CONCAT22((short)((uint)iVar22 >> 0x10),uVar20);
  if (uVar20 == 0) {
    local_154 = CONCAT31(local_154._1_3_,lVar41 == *(longlong *)(param_1 + 0x58));
    local_d8 = local_c8;
    lVar28 = 0;
    uStack_d0 = (char *)0x8000001000000000;
    iVar22 = *(int *)(lVar41 + 0x18);
    if ((longlong)iVar22 < 1) {
      *(undefined4 *)(lVar41 + 0x18) = 0;
    }
    else {
      lVar38 = 0;
      do {
        lVar28 = *(longlong *)(lVar41 + 0x10);
        lVar40 = *(longlong *)(lVar28 + lVar38 * 8);
        psVar2 = (short *)(lVar40 + 2);
        *psVar2 = *psVar2 + -1;
        if (*psVar2 == 0) {
          iVar37 = (int)uStack_d0 + 1;
          if ((int)(uStack_d0._4_4_ & 0x7fffffff) <= (int)uStack_d0) {
            FUN_141000f24(&local_d8,&PTR_vftable_14c6e47c0,iVar37);
          }
          lVar28 = (longlong)(int)uStack_d0;
          *(longlong *)(local_d8 + lVar28 * 8) = lVar40;
          uStack_d0 = (char *)CONCAT44(uStack_d0._4_4_,iVar37);
        }
        lVar38 = lVar38 + 1;
      } while (iVar22 != lVar38);
      *(undefined4 *)(lVar41 + 0x18) = 0;
      if (0 < (int)uStack_d0) {
        lVar38 = 0;
        local_160 = lVar41;
        do {
          puVar7 = *(ushort **)(local_d8 + lVar38 * 8);
          (**(code **)(**(longlong **)(puVar7 + 0x20) + 0x10))
                    (*(longlong **)(puVar7 + 0x20),&local_e8);
          iVar22 = (int)local_e8;
          if ((int)local_e8 < 1) {
            iVar22 = 0;
          }
          uVar20 = (ushort)iVar22;
          if (0xfffe < iVar22) {
            uVar20 = 0xffff;
          }
          puVar7[2] = uVar20;
          *(bool *)(puVar7 + 4) = local_e8._4_4_ == 1;
          if (puVar7[2] == 0) {
            iVar22 = *(int *)(puVar7 + 0xc);
            if ((longlong)iVar22 != 0) {
              lVar41 = *(longlong *)(puVar7 + 8);
              lVar28 = 0;
              do {
                lVar40 = *(longlong *)(lVar41 + lVar28);
                psVar2 = (short *)(lVar40 + 2);
                *psVar2 = *psVar2 + -1;
                if (*psVar2 == 0) {
                  iVar37 = (int)uStack_d0 + 1;
                  if ((int)(uStack_d0._4_4_ & 0x7fffffff) <= (int)uStack_d0) {
                    FUN_141000f24(&local_d8,&PTR_vftable_14c6e47c0,iVar37);
                  }
                  *(longlong *)(local_d8 + (longlong)(int)uStack_d0 * 8) = lVar40;
                  uStack_d0 = (char *)CONCAT44(uStack_d0._4_4_,iVar37);
                }
                lVar28 = lVar28 + 8;
              } while ((longlong)iVar22 * 8 != lVar28);
            }
            puVar7[0xc] = 0;
            puVar7[0xd] = 0;
            puVar7[1] = 0xffff;
          }
          else {
            uVar20 = *puVar7;
            uVar39 = *(uint *)(param_1 + 0x48);
            uVar31 = uVar39;
            if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) <= (int)uVar39) {
              FUN_145c48fb6(local_170,uVar39 + 1);
              uVar31 = *(uint *)(param_1 + 0x48);
            }
            lVar41 = *(longlong *)(param_1 + 0x40);
            *(uint *)(lVar41 + (longlong)(int)uVar31 * 0x10) = (uint)uVar20;
            *(ushort **)(lVar41 + 8 + (longlong)(int)uVar31 * 0x10) = puVar7;
            *(uint *)(param_1 + 0x48) = uVar39 + 1;
            while (uVar31 = (int)(uVar39 - 1) >> 1, -1 < (int)uVar31) {
              lVar41 = *local_170;
              if (*(uint *)(lVar41 + (ulonglong)uVar31 * 0x10) <
                  *(uint *)(lVar41 + (longlong)(int)uVar39 * 0x10)) break;
              puVar34 = (undefined8 *)((longlong)(int)uVar39 * 0x10 + lVar41);
              puVar36 = (undefined8 *)((ulonglong)uVar31 * 0x10 + lVar41);
              uVar27 = *puVar34;
              uVar14 = puVar34[1];
              uVar15 = puVar36[1];
              *puVar34 = *puVar36;
              puVar34[1] = uVar15;
              local_e8._0_4_ = (int)uVar27;
              local_e8._4_4_ = (int)((ulonglong)uVar27 >> 0x20);
              uStack_e0._0_4_ = (undefined4)uVar14;
              uStack_e0._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
              *(int *)puVar36 = (int)local_e8;
              *(int *)((longlong)puVar36 + 4) = local_e8._4_4_;
              *(undefined4 *)(puVar36 + 1) = (undefined4)uStack_e0;
              *(undefined4 *)((longlong)puVar36 + 0xc) = uStack_e0._4_4_;
              uVar39 = uVar31;
              local_e8 = uVar27;
              uStack_e0 = uVar14;
            }
            LOCK();
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (uint)puVar7[2];
            UNLOCK();
          }
          lVar38 = lVar38 + 1;
          lVar28 = (longlong)(int)uStack_d0;
          lVar41 = local_160;
        } while (lVar38 < lVar28);
      }
    }
    uVar32 = (ulonglong)uStack_d0;
    cVar19 = local_175;
    *(undefined2 *)(lVar41 + 2) = 0xffff;
    uStack_d0 = (char *)((ulonglong)uStack_d0 & 0xffffffff00000000);
    if ((-1 < (longlong)uVar32) && (local_d8 != (char *)0x0)) {
      lVar28 = (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0);
    }
    uVar32 = CONCAT71((int7)((ulonglong)lVar28 >> 8),(byte)local_154 | (byte)local_174);
    if ((((byte)local_154 | (byte)local_174) & 1) == 0) goto LAB_14029bf3c;
LAB_14029bbfd:
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      local_d8 = (char *)CONCAT71(local_d8._1_7_,1);
      uVar27 = FUN_1447439e4(*(longlong *)(param_1 + 0x60),&local_d8);
      *(undefined8 *)(param_1 + 0x60) = 0;
      local_174 = (uint)CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
      goto LAB_14029bf44;
    }
    local_174 = (uint)CONCAT71((int7)(uVar32 >> 8),1);
LAB_14029bf9b:
    LeaveCriticalSection(local_140);
    if ((cVar19 == '\0') || (*(longlong *)(param_1 + 0x58) == 0)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar22 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar22 != 2)) {
        if (iVar22 != 1) goto LAB_14029c78a;
        DVar24 = FUN_140ad26c0();
        DVar25 = GetCurrentThreadId();
        cVar19 = local_175;
        if (DVar24 != DVar25) goto LAB_14029c78a;
      }
      LOCK();
      *(undefined1 *)(param_1 + 0x38) = 0;
      UNLOCK();
LAB_14029c78a:
      if (*(char *)(param_1 + 0x20) != '\x02') {
        LOCK();
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
        UNLOCK();
        goto LAB_14029c7e9;
      }
      EnterCriticalSection(local_150);
      LOCK();
      piVar1 = (int *)(param_1 + 0x54);
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar22 != 2) && (*(longlong *)(param_1 + 0x58) != 0)) goto LAB_14029c7d8;
      bVar18 = *(byte *)(param_1 + 0x200) & 1;
      goto LAB_14029c7bb;
    }
    if (*(char *)(param_1 + 0x20) == '\x03') {
      lVar41 = rdtsc();
      uVar32 = 100;
      if (lVar41 == 0) {
        uVar32 = 0;
      }
      if (DAT_14c8c27c9 != '\0') goto LAB_14029c08f;
      do {
        lVar28 = rdtsc();
      } while ((ulonglong)(lVar28 - lVar41) < uVar32);
    }
    else {
      if (*(char *)(param_1 + 0x20) != '\x02') {
        lVar41 = 0;
        iVar22 = 0;
        goto LAB_14029c14d;
      }
      local_164 = local_164 + 1;
      if (local_164 < 100) {
        lVar41 = rdtsc();
        uVar32 = 100;
        if (lVar41 == 0) {
          uVar32 = 0;
        }
        if (DAT_14c8c27c9 != '\0') {
LAB_14029c08f:
          rdtsc();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        do {
          lVar28 = rdtsc();
        } while ((ulonglong)(lVar28 - lVar41) < uVar32);
      }
      else {
        EnterCriticalSection(local_150);
        if ((1 < *(int *)(param_1 + 0x54)) && (*(longlong *)(param_1 + 0x58) != 0)) {
          LOCK();
          *(undefined1 *)(param_1 + 0x200) = 1;
          UNLOCK();
          LeaveCriticalSection(local_150);
          FUN_144bdf0d0(local_148);
          iVar22 = 0;
          lVar41 = 0;
          local_164 = 0;
          goto LAB_14029c11b;
        }
        LeaveCriticalSection(local_150);
      }
    }
    iVar22 = 0;
    lVar41 = 0;
  }
  else {
    if ((local_174 & 1) != 0) goto LAB_14029bbfd;
LAB_14029bf3c:
    local_174 = 0;
LAB_14029bf44:
    if ((*(longlong *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x48) == 0)) goto LAB_14029bf9b;
    lVar41 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    UNLOCK();
    *(short *)(lVar41 + 6) = *(short *)(lVar41 + 6) + 1;
    local_f0 = *(int *)(lVar41 + 4) - 1;
    sVar21 = (short)local_f0;
    *(short *)(lVar41 + 4) = sVar21;
    local_f0 = local_f0 & 0xffff;
    if (sVar21 == 0) {
      lVar28 = (longlong)*(int *)(param_1 + 0x48) + -1;
      if ((int)lVar28 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      else {
        puVar8 = *(uint **)(param_1 + 0x40);
        uVar39 = puVar8[lVar28 * 4];
        puVar30 = puVar8 + lVar28 * 4;
        uVar6 = puVar30[1];
        uVar9 = puVar30[2];
        uVar10 = puVar30[3];
        uVar31 = *puVar8;
        *puVar8 = *puVar30;
        puVar8[1] = uVar6;
        puVar8[2] = uVar9;
        puVar8[3] = uVar10;
        iVar22 = *(int *)(param_1 + 0x48);
        iVar37 = iVar22 + -1;
        *(int *)(param_1 + 0x48) = iVar37;
        if (uVar31 <= uVar39) {
          iVar35 = 1;
          if (3 < iVar22) {
            iVar35 = 2 - (uint)(*(uint *)(*local_170 + 0x10) < *(uint *)(*local_170 + 0x20));
          }
          if (iVar35 < iVar37) {
            iVar22 = 0;
            do {
              lVar28 = *local_170;
              if (*(uint *)(lVar28 + (longlong)iVar22 * 0x10) <=
                  *(uint *)(lVar28 + (longlong)iVar35 * 0x10)) break;
              puVar36 = (undefined8 *)((longlong)iVar22 * 0x10 + lVar28);
              puVar34 = (undefined8 *)((longlong)iVar35 * 0x10 + lVar28);
              pcVar16 = (char *)*puVar36;
              pcVar17 = (char *)puVar36[1];
              uVar27 = puVar34[1];
              *puVar36 = *puVar34;
              puVar36[1] = uVar27;
              local_d8._0_4_ = SUB84(pcVar16,0);
              local_d8._4_4_ = (undefined4)((ulonglong)pcVar16 >> 0x20);
              uStack_d0._0_4_ = (int)pcVar17;
              uStack_d0._4_4_ = (uint)((ulonglong)pcVar17 >> 0x20);
              *(undefined4 *)puVar34 = (undefined4)local_d8;
              *(undefined4 *)((longlong)puVar34 + 4) = local_d8._4_4_;
              *(int *)(puVar34 + 1) = (int)uStack_d0;
              *(uint *)((longlong)puVar34 + 0xc) = uStack_d0._4_4_;
              iVar23 = iVar35 * 2 + 1;
              iVar22 = iVar35 * 2 + 2;
              if ((iVar22 < *(int *)(param_1 + 0x48)) &&
                 (*(uint *)(*local_170 + (longlong)iVar22 * 0x10) <=
                  *(uint *)(*local_170 + (longlong)iVar23 * 0x10))) {
                iVar23 = iVar22;
              }
              iVar22 = iVar35;
              local_d8 = pcVar16;
              uStack_d0 = pcVar17;
              iVar35 = iVar23;
            } while (iVar23 < iVar37);
          }
        }
      }
    }
    LeaveCriticalSection(local_140);
    iVar22 = 1;
  }
LAB_14029c11b:
  if ((*(char *)(param_1 + 0x20) == '\x02') && (*(int *)(param_1 + 0x50) != 0)) {
    bVar18 = *(byte *)(param_1 + 0x200) & 1;
    do {
      if (bVar18 == 0) goto LAB_14029c14d;
      LOCK();
      bVar4 = *(byte *)(param_1 + 0x200);
      bVar42 = bVar18 == bVar4;
      if (bVar42) {
        *(byte *)(param_1 + 0x200) = 0;
        bVar4 = bVar18;
      }
      bVar18 = bVar4;
      UNLOCK();
    } while (!bVar42);
    FUN_144bdf120(local_148);
  }
LAB_14029c14d:
  iVar37 = (iVar22 + *(int *)(param_1 + 0x50)) - *(int *)(param_1 + 0x54);
  if (0 < iVar37) {
    iVar35 = 0;
LAB_14029c161:
    puVar34 = local_128;
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar23 = *(int *)(param_1 + 0x54);
      while (iVar23 < (int)(uint)*(ushort *)(param_1 + 0x22)) {
        LOCK();
        iVar5 = *(int *)(param_1 + 0x54);
        bVar42 = iVar23 == iVar5;
        if (bVar42) {
          *(int *)(param_1 + 0x54) = iVar23 + 1;
          iVar5 = iVar23;
        }
        iVar23 = iVar5;
        UNLOCK();
        if (bVar42) {
          local_160 = CONCAT44(local_160._4_4_,*(undefined4 *)(param_1 + 0x24));
          local_154 = iVar35;
          if (((*(int *)(param_1 + 0x30) != 0) &&
              (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) &&
             (cVar19 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))(), cVar19 != '\0')) {
            if (*(int *)(param_1 + 0x30) == 0) {
              plVar33 = (longlong *)0x0;
            }
            else {
              plVar33 = *(longlong **)(param_1 + 0x28);
            }
            cVar19 = (**(code **)(*plVar33 + 0x58))();
            if ((cVar19 != '\0') && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
              LOCK();
              *(undefined1 *)(param_1 + 0x38) = 1;
              UNLOCK();
              local_160 = CONCAT44(local_160._4_4_,1);
            }
          }
          puVar30 = (uint *)*puVar34;
          if (puVar30 != (uint *)0x0) goto LAB_14029c24f;
          do {
            uVar39 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar39 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar39 | 1;
              __tlregdtor(&LAB_1437f08bb);
            }
            puVar29 = (undefined4 *)*local_130;
            *local_130 = 0;
            if (puVar29 == (undefined4 *)0x0) {
              puVar29 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar29 = 0xffffffff;
            *(undefined4 **)(puVar29 + 0x10) = puVar29 + 0x16;
            puVar29[0x12] = 0;
            *puVar34 = puVar29;
            FUN_140217a48(puVar34);
            puVar30 = (uint *)*puVar34;
LAB_14029c24f:
            uVar32 = *(longlong *)(puVar30 + 0x10) + 7;
            uVar39 = puVar30[0x12];
            while( true ) {
              puVar36 = (undefined8 *)(uVar32 & 0xfffffffffffffff8);
              if (puVar36 + 0x18 <= puVar30 + 0x4000) {
                *(undefined8 **)(puVar30 + 0x10) = puVar36 + 0x18;
                puVar30[0x12] = uVar39 + 1;
                FUN_1447247dc(puVar36,0);
                *puVar36 = &PTR_FUN_14ab67b80;
                puVar36[0x15] = param_1;
                if (param_1 != 0) {
                  FUN_144b3d910(param_1);
                }
                *(uint *)(puVar36 + 0x16) = (uint)local_160;
                *(undefined8 *)((longlong)puVar36 + 0xb4) = *(undefined8 *)(param_1 + 0x218);
                if (((uint)local_160 & 0xff) == 0xff) {
                  uVar39 = (uint)local_160 >> 10 & 3;
                  iVar35 = 0;
                  if (((uint)local_160 >> 9 & 1) == 0 || uVar39 < 2) {
                    uVar32 = (ulonglong)(byte)(&DAT_149e38edc)[uVar39];
                  }
                  else {
                    uVar32 = 2;
                  }
                }
                else {
                  iVar35 = ((uint)local_160 >> 7 & 2 | (uint)local_160 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)((uint)local_160 & 0xff) * 4);
                  uVar32 = 5;
                }
                if (*(code **)(puVar36[0xe] + 0x18) != FUN_144713626) {
                  local_160 = CONCAT44(local_160._4_4_,iVar35);
                  (**(code **)(puVar36[0xe] + 0x18))(puVar36 + 0xe,puVar36 + 9);
                  iVar35 = (uint)local_160;
                }
                cVar19 = local_175;
                puVar36[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar36[9] = puVar36;
                puVar36[10] = puVar36;
                lVar28 = *local_118;
                if (lVar28 == 0) {
                  if ((char)uVar32 == '\x06') {
                    uVar32 = 1;
                  }
                  uVar27 = 0;
                }
                else {
                  if ((char)uVar32 == '\x06') {
                    uVar32 = *(ulonglong *)(lVar28 + 0x38) >> 0x3b;
                  }
                  uVar27 = *(undefined8 *)(lVar28 + 0x30);
                }
                puVar36[0xf] = uVar27;
                puVar36[0x10] = (uVar32 << 0x3b) + local_110 | 0xc000000000000000;
                *(int *)((longlong)puVar36 + 0x1c) = iVar35;
                if (puVar36 == (undefined8 *)0x0) {
                  local_d8 = (char *)CONCAT71(local_d8._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar36 + 1) = *(int *)(puVar36 + 1) + 1;
                  UNLOCK();
                  local_d8 = (char *)CONCAT71(local_d8._1_7_,1);
                  FUN_1447439e4(puVar36);
                  LOCK();
                  piVar1 = (int *)(puVar36 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar36)(puVar36);
                  }
                }
                iVar35 = local_154 + 1;
                if (iVar35 != iVar37) goto LAB_14029c161;
                goto LAB_14029c531;
              }
              *(uint **)(puVar30 + 0x10) = puVar30 + 0x4000;
              LOCK();
              uVar31 = *puVar30;
              *puVar30 = *puVar30 + uVar39 + 1;
              UNLOCK();
              if ((uVar31 ^ uVar39) != 0xffffffff) break;
              puVar30 = (uint *)*puVar34;
              *puVar30 = 0xffffffff;
              *(uint **)(puVar30 + 0x10) = puVar30 + 0x16;
              puVar30[0x12] = 0;
              *puVar34 = puVar30;
              uVar32 = (longlong)puVar30 + 0x5f;
              uVar39 = 0;
            }
          } while( true );
        }
      }
    }
  }
LAB_14029c531:
  if ((char)iVar22 != '\0') {
    (**(code **)(**(longlong **)(lVar41 + 0x40) + 0x18))();
    local_164 = 0;
  }
  goto LAB_14029bb59;
  while( true ) {
    LOCK();
    bVar4 = *(byte *)(param_1 + 0x200);
    bVar42 = bVar18 == bVar4;
    if (bVar42) {
      *(byte *)(param_1 + 0x200) = 0;
      bVar4 = bVar18;
    }
    bVar18 = bVar4;
    UNLOCK();
    if (bVar42) break;
LAB_14029c7bb:
    if (bVar18 == 0) goto LAB_14029c7d8;
  }
  FUN_144bdf120(local_148,1);
LAB_14029c7d8:
  LeaveCriticalSection(local_150);
LAB_14029c7e9:
  if (cVar19 != '\0') {
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
  if (*(longlong *)(local_120 + 0x3e0) != 0) {
    local_d8 = "Et";
    uStack_d0 = "";
    FUN_144b3f260();
  }
  if (local_134 == 0) {
    FUN_144b3e9f0(&local_d8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029c8c5 FUN_14029c8c5 body=41 status=ok
// SIG undefined FUN_14029c8c5(void)

void FUN_14029c8c5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449351d2(param_1);
    param_1 = param_1 + 0x308;
  }
  return;
}



// FUNCTION 14029c8ee FUN_14029c8ee body=644 status=ok
// SIG undefined FUN_14029c8ee(void)

void FUN_14029c8ee(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar8 = (longlong)iVar6 * 0x70;
      *(undefined4 *)(lVar11 + 0x60 + lVar8) = 0;
      if (*(longlong *)(lVar11 + 0x58 + lVar8) != 0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + lVar8;
      *(undefined4 *)(lVar11 + 0x20) = 0;
      if (*(int *)(lVar11 + 0x24) != 0) {
        FUN_144a544ac((longlong *)(lVar11 + 0x18),0);
      }
      *(undefined8 *)(lVar11 + 0x48) = 0xffffffff;
      *(undefined4 *)(lVar11 + 0x40) = 0;
      if (0x80 < *(uint *)(lVar11 + 0x44)) {
        *(undefined4 *)(lVar11 + 0x44) = 0x80;
        FUN_1446efbd8(lVar11 + 0x28,0);
      }
      if (*(longlong *)(lVar11 + 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar10;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_14029cb06;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar10 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14029cb06:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029cb80 FUN_14029cb80 body=445 status=ok
// SIG undefined FUN_14029cb80(void)

undefined8 FUN_14029cb80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  char cVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  cVar5 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar5 != '\0') {
    puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
    pbVar4 = (byte *)*puVar7;
    if (pbVar4 != (byte *)0x0) {
      if ((*pbVar4 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar9 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar8[9];
        }
        iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar8[10] - 1U & DAT_14cb542f0) * 4);
        if (iVar10 != -1) {
          do {
            lVar2 = *plVar8 + (longlong)iVar10 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar10 * 0x40) == DAT_14cb542f0) {
              if ((((lVar2 != 0) &&
                   (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
              goto LAB_14029cc25;
              break;
            }
            iVar10 = *(int *)(lVar2 + 0x38);
          } while (iVar10 != -1);
        }
      }
    }
    puVar7 = &DAT_14c9a1308;
LAB_14029cc25:
    pbVar4 = (byte *)*puVar7;
    plVar8 = (longlong *)puVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 2)) {
      plVar9 = *(longlong **)(pbVar4 + 8);
      uVar3 = *(uint *)(plVar9 + 2);
      iVar10 = *(int *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = iVar10 + uVar3;
      if ((uint)(*(int *)(param_1 + 0x3c) - iVar10) < uVar3) {
        FUN_14488eebe(param_1 + 0x30);
      }
      memset((void *)((longlong)iVar10 * 2 + *(longlong *)(param_1 + 0x30)),0,
             (longlong)(int)uVar3 * 2);
      iVar10 = *(int *)(param_1 + 0x38);
      if ((longlong)iVar10 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        lVar11 = 0;
        lVar12 = 0;
        do {
          FUN_14029cd3e();
          uVar6 = FUN_14029cda8(*plVar9 + lVar12,&DAT_14cb54430);
          *(undefined2 *)(lVar2 + lVar11) = uVar6;
          lVar12 = lVar12 + 0x10;
          lVar11 = lVar11 + 2;
        } while ((longlong)iVar10 * 2 != lVar11);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  return 0;
}



// FUNCTION 14029cd3e FUN_14029cd3e body=106 status=ok
// SIG undefined FUN_14029cd3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14029cd3e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb54440) {
    FUN_144b3d300(&DAT_14cb54440);
    if (DAT_14cb54440 == -1) {
      DAT_14cb54430 = 0;
      _DAT_14cb54438 = 0;
      atexit(FUN_143c2f12a);
      _Init_thread_footer(&DAT_14cb54440);
    }
  }
  return &DAT_14cb54430;
}



// FUNCTION 14029cda8 FUN_14029cda8 body=153 status=ok
// SIG undefined FUN_14029cda8(void)

undefined4 FUN_14029cda8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((byte *)*param_1 == (byte *)0x0) || ((*(byte *)*param_1 & 3) == 0)) {
    uVar4 = 0;
  }
  else {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    local_28 = 0;
    FUN_14029ce42(0,&local_38,1);
    uVar4 = FUN_1449354b0(param_2,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029ce42 FUN_14029ce42 body=569 status=ok
// SIG undefined FUN_14029ce42(void)

undefined4 FUN_14029ce42(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  uVar9 = FUN_14029d07c();
  uVar7 = FUN_140005cc6(param_1,&local_58,uVar9,param_3);
  lVar10 = FUN_1400014c6(&local_58);
  lVar12 = local_58;
  if (local_58 == 0) {
LAB_14029cfd0:
    local_70 = 0;
  }
  else {
    uVar9 = FUN_14029d07c();
    cVar6 = FUN_1448093f4(lVar12,uVar9);
    if (cVar6 == '\0') goto LAB_14029cfd0;
    local_70 = local_58;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      local_68 = plStack_50;
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      bVar4 = false;
      goto LAB_14029cee9;
    }
  }
  local_68 = (longlong *)0x0;
  bVar4 = true;
LAB_14029cee9:
  plVar5 = local_68;
  local_5c = 0;
  if (lVar10 == 0) {
    local_60 = 0;
    iVar8 = 0;
  }
  else {
    local_60 = *(uint *)(lVar10 + 0xc);
    if ((int)local_60 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((local_60 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar8 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar8 = iVar11;
      }
    }
  }
  local_5c = iVar8;
  FUN_14029d0b6(param_2,&local_70);
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar4) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14029d07c FUN_14029d07c body=57 status=ok
// SIG undefined FUN_14029d07c(void)

void FUN_14029d07c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53f28 == 0) {
    uVar1 = FUN_140ef4a9e();
    DAT_14cb53f28 = FUN_140002ddd(FUN_1464ac1b2,uVar1,L"TimeOfDayPropertyParameter");
  }
  return;
}



// FUNCTION 14029d0b6 FUN_14029d0b6 body=111 status=ok
// SIG undefined FUN_14029d0b6(void)

undefined8 * FUN_14029d0b6(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14029d126 FUN_14029d126 body=774 status=ok
// SIG undefined FUN_14029d126(void)

void FUN_14029d126(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    *(undefined4 *)(param_2 + 1) = 0;
    if (lVar4 == 0) {
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1402191ca(param_2);
      }
      while( true ) {
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_90 = 0;
        bVar1 = *(byte *)(lVar5 + 0x68);
        lVar4 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar4 = param_3;
        }
        local_98 = (uint)bVar1;
        FUN_14493566c(&local_90,0,lVar4,(int)*param_4);
        *param_4 = *param_4 + (ulonglong)bVar1;
        puVar6 = &DAT_14c9485f0;
        if ((-1 < (longlong)local_90) &&
           (puVar6 = &DAT_14c9485f0, local_90 < *(int *)(lVar5 + 0x10))) {
          puVar6 = (undefined4 *)((longlong)local_90 * 0x28 + *(longlong *)(lVar5 + 8));
        }
        FUN_1447715ec(&local_88,puVar6);
        if ((((int)local_88 == 0) || (local_88._4_4_ == 0)) || ((int)local_88 == DAT_14c948000))
        break;
        if (DAT_14c947fe0 == 0) {
          lVar4 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar4);
          DAT_14c947fe0 = lVar4;
        }
        FUN_140045924(DAT_14c947fe0,&local_90,&local_88,1);
        lVar4 = param_2[1];
        uVar3 = (int)lVar4 + 1;
        *(uint *)(param_2 + 1) = uVar3;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar3) {
          FUN_1446f84a2(param_2);
        }
        *(ulonglong *)(*param_2 + (longlong)(int)lVar4 * 8) = CONCAT44(uStack_8c,local_90);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1402191ca(param_2,0);
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_14029d42e(param_1,&local_88,param_3,param_4);
      if ((((int)local_88 != 0) && (local_88._4_4_ != 0)) && ((int)local_88 != DAT_14c948000)) {
        do {
          if (DAT_14c947fe0 == 0) {
            lVar5 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar5);
            DAT_14c947fe0 = lVar5;
          }
          FUN_140045924(DAT_14c947fe0,&local_90,&local_88,1);
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1446f84a2(param_2,iVar2);
          }
          *(ulonglong *)(*param_2 + (longlong)iVar2 * 8) = CONCAT44(uStack_8c,local_90);
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0;
          uStack_68 = 0;
          FUN_14029d42e(param_1,&local_88,param_3,param_4);
        } while ((((int)local_88 != 0) && (local_88._4_4_ != 0)) && ((int)local_88 != DAT_14c948000)
                );
      }
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14029d42e FUN_14029d42e body=318 status=ok
// SIG undefined FUN_14029d42e(void)

void FUN_14029d42e(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_34 = 0;
      bVar1 = *(byte *)(lVar3 + 0x68);
      lVar2 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar2 = param_3;
      }
      local_48 = (uint)bVar1;
      FUN_14493566c(&local_34,0,lVar2,(int)*param_4);
      *param_4 = *param_4 + (ulonglong)bVar1;
      puVar4 = &DAT_14c9485f0;
      if ((-1 < (longlong)local_34) && (local_34 < *(int *)(lVar3 + 0x10))) {
        puVar4 = (undefined4 *)((longlong)local_34 * 0x28 + *(longlong *)(lVar3 + 8));
      }
    }
    else {
      local_34 = 0;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x30) + 0x68);
      lVar3 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar3 = param_3;
      }
      local_48 = (uint)bVar1;
      FUN_14493566c(&local_34,0,lVar3,(int)*param_4);
      *param_4 = *param_4 + (ulonglong)bVar1;
      if (((longlong)local_34 < 0) || (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) <= local_34))
      {
        puVar4 = &DAT_14c9485f0;
      }
      else {
        local_34 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) +
                           (longlong)local_34 * 4);
        puVar4 = &DAT_14c9485f0;
        if ((-1 < (longlong)local_34) && (local_34 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10))
           ) {
          puVar4 = (undefined4 *)
                   ((longlong)local_34 * 0x28 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 8));
        }
      }
    }
    FUN_1447715ec(param_2,puVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14029d574 FUN_14029d574 body=261 status=ok
// SIG undefined FUN_14029d574(void)

void FUN_14029d574(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c = param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_1c);
    lVar3 = FUN_1447210f0(param_1);
    if (lVar3 != 0) {
      uVar2 = FUN_14119d0a4(lVar3);
      FUN_140e65914(uVar2,param_1,*(undefined4 *)(lVar3 + 0x6f4));
    }
  }
  if (param_1[0x86] == DAT_14cadad70) {
    cVar1 = FUN_1459c7f3e(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x850))(param_1);
    }
  }
  if (param_1[0x86] == DAT_14cadad78) {
    cVar1 = FUN_1401b2234(param_1);
    if (cVar1 != '\0') {
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



// FUNCTION 14029d68e FUN_14029d68e body=131 status=ok
// SIG undefined FUN_14029d68e(void)

longlong FUN_14029d68e(int *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = param_1[1] + param_2;
  if (*param_1 < iVar3) {
    iVar3 = param_1[6];
    param_1[6] = iVar3 + 1U;
    if ((uint)param_1[7] < iVar3 + 1U) {
      FUN_14029d7f4(param_1 + 4,iVar3);
    }
    lVar1 = *(longlong *)(param_1 + 4);
    lVar4 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
    lVar2 = -1;
    if (-1 < (int)param_2) {
      lVar2 = (ulonglong)param_2 * 8 + (ulonglong)((ulonglong)param_2 == 0);
    }
    lVar2 = FUN_14001cc68(lVar2,0x10);
    *(longlong *)(lVar1 + lVar4) = lVar2;
    *(uint *)(lVar1 + 8 + lVar4) = param_2;
  }
  else {
    lVar2 = (longlong)param_1[1] * 8 + *(longlong *)(param_1 + 2);
    param_1[1] = iVar3;
  }
  return lVar2;
}



// FUNCTION 14029d712 FUN_14029d712 body=226 status=ok
// SIG undefined FUN_14029d712(void)

void * FUN_14029d712(int *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Dst;
  
  iVar3 = param_1[1] + param_2;
  if (*param_1 < iVar3) {
    iVar3 = param_1[6];
    param_1[6] = iVar3 + 1U;
    if ((uint)param_1[7] < iVar3 + 1U) {
      FUN_1471027cc(param_1 + 4,iVar3);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)param_2;
    lVar4 = SUB168(auVar2 * ZEXT816(0x30),0);
    lVar5 = -1;
    if (SUB168(auVar2 * ZEXT816(0x30),8) == 0) {
      lVar5 = lVar4 + (ulonglong)(lVar4 == 0);
    }
    lVar4 = *(longlong *)(param_1 + 4);
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x10);
    *(undefined8 *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = 0;
    _Dst = (void *)FUN_14001cc68(lVar5,0x10);
    if (param_2 != 0) {
      memset(_Dst,0,(((longlong)param_2 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30);
    }
    *puVar1 = _Dst;
    *(int *)(puVar1 + 1) = param_2;
  }
  else {
    _Dst = (void *)((longlong)param_1[1] * 0x30 + *(longlong *)(param_1 + 2));
    param_1[1] = iVar3;
  }
  return _Dst;
}



// FUNCTION 14029d7f4 FUN_14029d7f4 body=269 status=ok
// SIG undefined FUN_14029d7f4(void)

void FUN_14029d7f4(longlong param_1,int param_2)

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



// FUNCTION 14029d902 FUN_14029d902 body=364 status=ok
// SIG undefined FUN_14029d902(void)

void FUN_14029d902(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    plVar1 = (longlong *)*plVar1;
    if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar1);
    }
  }
  *param_2 = (longlong)plVar1;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1447210f0();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    plVar1 = (longlong *)*param_2;
  }
  param_2[1] = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x588))(plVar1,param_2 + 2,param_2 + 5);
    dVar3 = (double)FUN_144719204(param_2[5],0);
    dVar4 = (double)FUN_144719204(param_2[6],0);
    dVar5 = sin(dVar3 * 0.017453292519943295);
    dVar3 = cos(dVar3 * 0.017453292519943295);
    dVar6 = sin(dVar4 * 0.017453292519943295);
    dVar4 = cos(dVar4 * 0.017453292519943295);
    param_2[8] = (longlong)(dVar4 * dVar3);
    param_2[9] = (longlong)(dVar6 * dVar3);
    param_2[10] = (longlong)dVar5;
  }
  return;
}


